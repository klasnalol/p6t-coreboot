# Original module-55 wrapper replay

The fixtures in this directory come from executing the original module-55 x86
instructions in Unicorn 2.1.4, not from translating the policy into Python. The
target is the archive member extracted to `build/p6t-original-modules/55` (190740
bytes), SHA-256
`23d6f3520db4755db3af42c958d6b22c88d7166375c3d7a92ab3c4b4e41b8d64`.
The harness refuses other hashes and validates the caller, prologue, revision
loop, indirect DLL call and epilogue signatures before emulation.

The direct caller at file offset `0x29e` resolves to `0x4ba`. The wrapper occupies
`0x4ba..0x1103`, builds a `0x450`-byte stack policy and calls `0xfffe7000` at
`0x1025`. That call is intercepted, so the CSI DLL is never executed by this
harness. The third wrapper stack argument supplies the policy's byte `0x0b`.
Its stock caller pushes the state value read earlier from MMCONFIG
`0xe00a1080` and accumulated in a local variable. State 0 and 1 are replay inputs,
not claims about the board's state on any recorded boot.

## Reproduce

```sh
python3 -m venv build/p6t-csi-replay-venv
build/p6t-csi-replay-venv/bin/pip install unicorn==2.1.4 capstone==5.0.7
build/p6t-csi-replay-venv/bin/python util/p6t_reverse/replay_csi.py \
  --module build/p6t-original-modules/55 \
  --output analysis/p6t-se/replay \
  --fixtures tests/northbridge/x58/fixtures
```

`policy-cases.json` preserves 64 complete policies with explicit IOH revision,
CPUID, CMOS and state inputs, instruction offsets, hardware-access traces and
per-policy digests. Cases cover revisions `0x0f`, `0x10`, `0x13` and `0x20`, CPU
signatures `0x6a0` and `0x6a4`, CMOS skip/override/fallback paths and edge cases.
`postcall-traces.json` preserves 16 traces with explicitly injected DLL status
and zero/nonzero synthetic port inputs. `wrapper-disassembly.json` preserves
the complete wrapper disassembly with original bytes and file offsets.

The same cases are exported as C fixtures in
`tests/northbridge/x58/fixtures/csi_policy_replay.h` and
`tests/northbridge/x58/fixtures/csi_postcall_replay.h` for source regression tests.

## Observations in the original instructions

- `REP STOSD` consumes ECX before policy bytes `0x08` and `0x0a` are written.
  Both initially receive zero. For revision >= `0x10`, the loop at `0x512`
  temporarily sets CL to one, sets byte `0x226`, and decrements CL to zero.
  Consequently all subsequent port-tail CL writes are zero on every revision.
- Final byte `0x08` is one only for revisions below `0x10`. Byte `0x0a` remains
  zero. Byte `0x0b` is the low byte of the third wrapper argument. Byte `0x226`
  is one only for revisions >= `0x10`.
- The original wrapper keeps a CMOS speed code of three. It does not replace
  speed codes 1..3 with auto mode. For CPU signature `0x6a0`, it clears byte
  `0x06`, without changing the selected speed in byte `0x07`.
- The postcall reset branch runs exactly when status class at `0x447` is two
  and flags at `0x443` contain `0x100`. Class one with flags `0x106`, or class
  two with flags `0x006`, takes the other path.
- The reset branch writes GPIOBASE `0x500`, enables GPIO8/12, configures both as
  outputs and writes GPIO level bits 8/12 as `00` for detail one, `01` for detail
  two and `10` for every other detail. It configures GPIO56 as an output driven
  low, sets LPC configuration byte `0xae` bit two, writes byte six to CF9 and
  halts. The nonreset branch clears LPC byte `0xae` bit two before returning.
- Access widths are preserved. At `0x107e`, the original reads only AL from LPC
  offset `0x4c`, ORs bit four and writes all of EAX at `0x1081`. Thus the original
  32-bit output is `0x8000f810 | initial_low_byte` (zero input gives
  `0x8000f810`). This retained-upper-register behavior is in the trace and must
  be considered explicitly when implementing the register operation.

## Validation and limits

The replay completed all 64 policy and 16 postcall cases. Every policy is exactly
`0x450` bytes and matches its recorded digest. Paired cases verify that changing
the third argument from zero to one changes only byte `0x0b`, and changing CPU
signature from `0x6a4` to `0x6a0` changes only byte `0x06` for the matched inputs.
Reset gating and CF9 width/value were checked against every postcall trace.

This is offline emulation with synthetic, explicit inputs. The hooks implement
CMOS indexes, PCI configuration indexes and GPIO register read/write storage.
They do not access host hardware. QPI, DDR training, PCIe electrical behavior,
reset effectiveness and video output are not modeled or established by these
fixtures. Injected status traces show the wrapper's response to a DLL result;
they do not establish how the DLL produced that result on a motherboard.

## MINIT wrapper replay

`util/p6t_reverse/replay_minit.py` reuses the emulator's synthetic hardware model
and executes the original MINIT wrapper at `0x1104`, including its helper at
`0x1444`. Capstone identifies the `MOV EAX,0xfffc1fe0; CALL EAX` sequence; the
intercept is at `0x12ba`. The arguments are the complete `0xc4`-byte policy and
the complete `0x2af0`-byte context. All 36 context snapshots are zero at that call.

```sh
build/p6t-csi-replay-venv/bin/python util/p6t_reverse/replay_minit.py \
  --module build/p6t-original-modules/55 \
  --output analysis/p6t-se/replay \
  --fixtures tests/northbridge/x58/fixtures
```

`minit-policy-cases.json` preserves 36 complete policy/context snapshots and
precall access traces across twelve input modes and boot state values 0, 1 and
2. These include both CMOS skip conditions, normal CMOS paths, byte `0x8e`
clamping, both PCI vendor-byte probe paths, cold helper results and synthetic
saved-metadata results. `minit-wrapper-disassembly.json` preserves the wrapper
instructions. `minit_policy_replay.h` exports complete policy snapshots as C
fixtures.

The policy's byte `0x02` is always overwritten after its initial default `0x10`.
Its final value is `(-min(extended_cmos_8e, 0x30)) & 0x3f`. This establishes the
byte transformation; it does not establish the exact memory-clock meaning of
each encoding. A value over `0x30` also causes an extended CMOS write of `0x30`.
This step happens even when the other CMOS settings are skipped.

When standard CMOS `0x8e & 0xc0` and `0x58 & 3` are both zero, the wrapper takes
policy byte `0x04` from extended CMOS `0x80` bits 7:5, byte `0x01` from extended
CMOS `0x81` bits 1:0 and policy flags bits 2:1 from extended CMOS `0x82`. Extended
CMOS `0x81` bit six selects policy byte `0x05 = 3`; when it is clear, the wrapper
clears flags bit 14. Nonzero boot state sets flags bit 18 and its low byte is
copied to policy `0x0a`. Meanings of these fields beyond the instruction-level
transformations remain inferred or unknown.

The saved-data pointer stays zero on the cold helper paths. A synthetic helper
result with port `0x805` bits 4:2 equal to `0x14` causes the wrapper to search a
synthetic linked list at `0xffe50000`; a record tagged `0x4e` supplies its address
plus eight as the pointer. This models an original AMI data layout, not a
coreboot flash layout. It does not justify traversing that address in coreboot.

The pure builder `src/northbridge/intel/x58/minit_policy.c` matches all 36 replay
policies byte for byte. The previous fixed-default builder failed all 36 cases
before the replacement. The builder takes CMOS bytes, boot state, MMCONFIG base
and the selected training pointer explicitly, and returns whether the runtime
must clamp extended CMOS byte `0x8e`. Hardware reads, CMOS writes and metadata
selection remain outside the builder.

## Completion state replay

`replay_finish.py` executes original offsets `0x12ea..0x135d` with each state
value 0 through 7 and zero/nonzero PCI inputs. Its 16 traces cover the priority
order: state bit 1 writes `0x0e` to CF9; otherwise bit 2 writes `0x06`; otherwise
bit 0 updates the original private PCI registers and stops; state zero returns.
The implementation in `csi_recovery.c` matches every I/O operation, width and
value in these traces. The tests also retain the 16 immediate CSI traces.

```sh
build/p6t-csi-replay-venv/bin/python util/p6t_reverse/replay_finish.py \
  --module build/p6t-original-modules/55 \
  --output analysis/p6t-se/replay \
  --fixtures tests/northbridge/x58/fixtures
```

The runtime now reads the original input state at PCI `00:14.1 + 0x80`, passes
its low byte to CSI, folds CSI class 3 to state bit 2 as in the caller, passes
the accumulated state to MINIT, and applies the original completion handler.
The status context and DRAM validation still gate entry into later stages.
No new CMOS retry marker or counter has been invented. Reset convergence and
hardware retention of the programmed GPIO values remain unverified.

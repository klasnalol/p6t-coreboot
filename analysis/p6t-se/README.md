# P6T SE stock-BIOS reconstruction checkpoint — 2026-10-22

The CSI/MINIT wrappers now follow the reviewed original module-55 policy and
reset/state paths, with 132 byte-buffer/I/O-trace regression cases passing.
Both SeaBIOS and EDK2/UEFI ROMs build and pass the CBFS/configuration checks.
**Neither hardware boot nor video output is verified. Full OEM feature parity
is not implemented.** No flash write was performed.

## Candidate images

Both files are 2,097,152 bytes. These are experimental candidates, not known-good
recovery images. Preserve an independently verified original flash backup.

| Payload | Repository-relative image | SHA-256 |
| --- | --- | --- |
| SeaBIOS | `build/coreboot-p6t-se-seabios-stock-wrappers-20261022.rom` | `0c826063889b1c1d5d8970756e14900aa2cb97abe359ee3a73795894860cd134` |
| EDK2/UEFI | `build/coreboot-p6t-se-uefi-stock-wrappers-20261022.rom` | `467dfed25a005463fdd5d68d3d7732bd9fdbdf8b494cfa34a4f529d7f9628a78` |

[build-manifest.json](build-manifest.json) records source, config, image and
vendor-blob hashes. Checks extracted the actual CBFS blobs and compared them
byte for byte, checked board/payload selections, and checked the matching build
ELFs for the integrated policy/recovery symbols. They are not execution tests.

## What changed in coreboot

- CSI policy: corrected the CL-dependent fields. The original revision loop
  decrements CL to zero before the trailing policy writes; the earlier builder
  incorrectly filled those fields with one on newer revisions. Removed the
  unsupported manual-speed-to-auto substitution and preserved the original
  CMOS selection. Passed the original boot-state byte into the policy.
- CSI postcall: restored the original class-2/flag-`0x100` GPIO/LPC/CF9 reset
  branch and nonreset LPC cleanup. Access widths and the original retained-EAX
  output are explicit and regression-tested.
- MINIT policy: replaced fixed defaults with the complete original CMOS/state
  transformations, including the final ratio-byte overwrite and CMOS clamp.
  Zeroed the full context before the vendor call. No meaning beyond the
  observed transformations is asserted for uncertain policy fields.
- State handling: read the original `00:14.1 + 0x80` input, accumulated CSI and
  MINIT transitions, and implemented the original completion priority before
  touching trained DRAM. Stop paths disable interrupts and halt immediately;
  they do not delay the handshake with a new speaker packet.
- Kept existing post-training RAM validation and PCIe checks. The existing
  DDR3-800 parameter selection is now accurately described as SPD preflight,
  not proof of the vendor DLL's actual trained memory clock.

Runtime implementation is in
[`csi_policy.c`](../../src/northbridge/intel/x58/csi_policy.c),
[`minit_policy.c`](../../src/northbridge/intel/x58/minit_policy.c),
[`minit.c`](../../src/northbridge/intel/x58/minit.c),
[`csi_recovery.c`](../../src/mainboard/asus/p6t_se/csi_recovery.c) and
[`romstage.c`](../../src/northbridge/intel/x58/romstage.c).

The unchanged CSI and MINIT vendor DLLs are still used. Their internals have
**not** been replaced with a native, source-level implementation. Coreboot
deliberately supplies a null saved-training pointer rather than traversing the
original AMI flash metadata list at `0xffe50000`. Resume/saved-training parity
is therefore not claimed. No new overclock settings or voltage increases were
introduced. A repeated stock reset request can repeat indefinitely; reset
convergence and GPIO retention on the actual board remain unverified.

## Original-byte and decompilation evidence

The supplied archive has 30 files but only 26 unique payloads. Its labels `08`,
`11`, `30`, `fc` and `fd` all contain the same microcode bytes. The existing
2-MiB stock ROM in this repository supplied the four actual missing payloads;
the other 26 archive members match. Module 55 also matches both separately
stored physical copies in that stock ROM.

| Input | SHA-256 |
| --- | --- |
| `/home/klasnalol/Downloads/Archive.tar.gz` | `b5ca0dc5276199c6f5498d1105d0a0a75c169fc5ae0324ead135d594135a4dae` |
| `p6t se new xeon microcode bios stock bac.bin` | `24a3409b4a49e8d4bcf14e2846ec17c8cda1e13d13efe42983e41898e2d17b3f` |
| Archive module `55` | `23d6f3520db4755db3af42c958d6b22c88d7166375c3d7a92ab3c4b4e41b8d64` |
| Embedded CSI DLL | `b0f97e3f8ae49a01bc1d5f91fd0afe2e2dba97965d4d55c6bf94641bacc8e648` |
| Embedded MINIT DLL | `a17eee641ab0955f6e4848ac95b761ba94c87b2c4be36c3a150d51ee856f0b6c` |

See [stock-ROM comparison](archive/stock-rom-comparison.json), the initial
[archive inventory](archive/README.md), and the reconstructed
[68-descriptor segment layout](archive/segment_layout.md). The initial inventory
report's limitations describe that parser only, not the later IDA/emulation work.

IDA MCP produced pseudocode for all **discovered** functions in the two DLLs:
197 CSI and 218 MINIT functions. These are inferred function boundaries, not a
complete inventory of the entire BIOS. Eighteen CSI routines have reviewed,
descriptive names saved in [the name map](ida/CSI_INITDLL.names.json) and
`ida/CSI_INITDLL.named.i64`; the remaining functions are not all semantically
identified or renamed. Full pseudocode is in:

- [CSI_INITDLL.pseudo.c](ida/CSI_INITDLL.pseudo.c)
- [MINITDLL.complete.pseudo.c](ida/MINITDLL.complete.pseudo.c)

`MINITDLL.pseudo.c` and its batch JSON retain the original bounded previews;
41 direct full replies replace those previews in the complete export. The
mixed 16/32-bit loader has partial IDA analysis; the wrapper ranges used for
replay also have complete byte-based Capstone disassembly. Generated pseudocode
is not original source, independently proven behavior, or compilable coreboot.

The REA skill directed the artifact/provenance workflow. REA CLI also completed
a decompilation through the existing IDA provider, recorded in
[csi-speed-compatible.json](rea/csi-speed-compatible.json), evidence
`ev_194dc47a8668e47aba6035e0f9833ab38cdf26651c90ffedfe20e2686bea1a72`.
A task-local stdio adapter handles the installed provider's pagination-schema
mismatch; global REA/IDA configuration was not replaced. The two failed REA
attempts are retained as diagnostics, not successful evidence.

## Validation

The oracle executes the original wrapper instructions in isolated Unicorn with
explicit synthetic hardware inputs and intercepted DLL calls. It does not run
the training DLL or access host hardware. See [replay instructions and limits](replay/README.md).

| Comparison | Cases passing |
| --- | ---: |
| Complete CSI policy (`0x450` bytes) | 64 |
| Complete MINIT policy (`0xc4` bytes) | 36 |
| Immediate CSI postcall I/O trace | 16 |
| Final training-state I/O trace | 16 |

The previous CSI builder failed 53 of these 64 policy cases; the previous MINIT
builder failed all 36. The missing CSI reset path failed 10 of 16 traces, and a
no-op completion handler failed 14 of 16. The new implementations pass all 132.
One existing speaker-packet test and nine archive/derivation utility tests pass
as well. Checkpatch and `git diff --check` pass for the changed runtime/test C.

```sh
make build-tests/northbridge/x58-csi-policy-test \
  build-tests/northbridge/x58-minit-policy-test \
  build-tests/mainboard/p6t-se-csi-recovery-test \
  build-tests/mainboard/p6t-se-beep-test
build/tests/tests/northbridge/x58-csi-policy-test/run
build/tests/tests/northbridge/x58-minit-policy-test/run
build/tests/tests/mainboard/p6t-se-csi-recovery-test/run
build/tests/tests/mainboard/p6t-se-beep-test/run
python3 -m unittest discover -s util/p6t_reverse -p 'test_*.py'
```

Run the test executables themselves: this tree's make test wrapper does not
reliably propagate a failing test's exit status.

## Remaining work, in dependency order

1. Review the original early setup and private register prerequisites around
   module 55 against coreboot's existing SPD/topology and chipset setup. The
   new replay coverage does not cover all initialization before either DLL.
2. Establish actual reset/training convergence and trained DRAM validity. The
   offline oracle cannot establish QPI/DDR electrical behavior or the source
   of a DLL error on the user's board.
3. Finish original PCIe/VGA sequencing parity and verify the GeForce 9500 GT's
   legacy option-ROM path on hardware. A built UEFI payload is not proof that
   this GPU has GOP or that a monitor will light up.
4. Reconstruct only the needed OEM runtime services with their dependencies:
   SMM/ACPI state, setup persistence, fan/sensor control, audio codec verbs, and
   safe overclock controls. These are not supplied by the wrapper fixes.

The [DSDT dependency inventory](archive/acpi-coverage.md) identifies original
methods tied to SMI commands and vendor runtime regions. Copying the original
ASL alone would not recreate those services. The DSDT-only processor counts
do not measure CPU support: SSDTs and other ACPI tables are outside that
comparison. Full function-by-function BIOS equivalence remains unfinished.

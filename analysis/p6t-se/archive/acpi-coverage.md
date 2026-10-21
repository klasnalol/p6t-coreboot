# Original DSDT coverage boundary

Original AML SHA-256: `e8a604fa95a515527c8f2bdf88ccf86b3e3fd128a7accfaa2486ff43b006bec4`; 50055 bytes; checksum modulo256: `0`.
Disassembled with installed iasl20260930; no parse errors. Source: `build/p6t-analysis/original_dsdt.dsl`.
Current comparison: `build/dsdt.dsl` (an existing build artifact; its runtime execution is unobserved).

| Static declaration | Original DSDT | Current build DSDT |
| --- | ---: | ---: |
| methods | 338 | 83 |
| devices | 88 | 68 |
| processors | 16 | 0 |
| operation regions | 44 | 22 |
| fields | 171 | 139 |
| resource templates | 28 | 27 |
| resource descriptors | 108 | 63 |

Names are inventory evidence, not a feature-equivalence score. Namespace differences can reflect different implementations.

- Methods: 13 common paths; 325 original-only paths; 70 current-only paths.
- Devices: 7 common paths; 81 original-only paths; 61 current-only paths.

The original has 3 methods directly referencing command fields at SystemIO`0xb2` and 39 methods in their statically resolved caller closure.
These methods depend on an appropriate SMM implementation and its protocol/state. Transplanting the ASL alone does not provide that behavior.

Direct original SMI field references:

- `\ISMI` at original DSL line3850: `\SMIC`.
- `\_SB_.PCI0.ITPM._DSM` at original DSL line12901: `\_SB_.PCI0.ITPM.PSMI`.
- `\_SB_.PCI0.SBRG.TPM_._DSM` at original DSL line12730: `\_SB_.PCI0.SBRG.TPM_.PSMI`.

The original `ISMI` helper writes`SMIC`; GNVS/SNVS/SMSR/GMAX/GMDX/GCAX/GCDX call it with commands`0x70,0x71,0x79–0x7d` while exchanging PAR0/PAR1/PAR2 through RAMW at placeholder`0xaabbccdd`.
Original TPM `_DSM` bodies write`0xfb` to PSMI; these require the original TPM physical-presence SMM protocol.
82 original methods are in the static caller closure of references to fields in BIOS`0xffffff00` or RAMW`0xaabbccdd`.

All method/device paths, resource descriptor arguments, field/region mappings, direct calls, and dependency candidates are retained in `acpi-coverage.json`.

Limitations:

- No AML method or original BIOS/SMM code was executed.
- Matching namespace paths establish names only, not equivalent method behavior.
- Different namespace paths do not establish a missing hardware feature; aliases and alternate implementations exist.
- This inventory covers the supplied DSDT and current build DSL, not SSDTs/FADT/MADT or all firmware ACPI behavior.
- The static method-call graph resolves direct named calls only; aliases, dynamic objects, and conditional behavior remain incomplete.
- A reference to an SMI command field is a candidate runtime dependency, not proof an SMI occurred.
- Vendor SystemMemory regions 0xffffff00 and0xaabbccdd require initialized/possibly patched original runtime state.

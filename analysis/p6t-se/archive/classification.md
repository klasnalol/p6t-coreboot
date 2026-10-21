# Original BIOS module archive inventory

Archive: `/home/klasnalol/Downloads/Archive.tar.gz`
SHA-256: `b5ca0dc5276199c6f5498d1105d0a0a75c169fc5ae0324ead135d594135a4dae`

Extracted 30 regular files (2164732 bytes) to `/home/klasnalol/coreboot-p6tse/build/p6t-original-modules`.

The names below are archive labels. File signatures and PE headers are observations; firmware behavior is unestablished.

| Member | Bytes | Bounded format observations | Validated PE offsets / export names | Exact comparison offsets |
| --- | ---: | --- | --- | --- |
| `0c` | 8 | unknown | none | none |
| `0e logo` | 308280 | bmp | none | none |
| `1a smal logo` | 9890 | unknown | none | none |
| `1b` | 469977 | unknown | none | none |
| `1e` | 20428 | unknown | none | none |
| `2b` | 1360 | unknown | none | none |
| `04` | 35891 | unknown | none | none |
| `06 smbios` | 3072 | unknown | none | none |
| `08` | 77832 | intel microcode records | none | none |
| `10` | 50055 | acpi | none | none |
| `11` | 77832 | intel microcode records | none | none |
| `18` | 16965 | unknown | none | none |
| `19` | 4868 | unknown | none | none |
| `20` | 65536 | pci option rom | none | none |
| `20 1` | 43008 | pci option rom | none | none |
| `20 2` | 32768 | pci option rom | none | none |
| `21` | 58079 | unknown | none | none |
| `21 1` | 58112 | unknown | none | none |
| `21 2` | 62735 | unknown | none | none |
| `21 3` | 51118 | unknown | none | none |
| `21 4` | 47417 | unknown | none | none |
| `21 5` | 44464 | unknown | none | none |
| `30` | 77832 | intel microcode records | none | none |
| `55` | 190740 | unknown | `0x1d94` / `no export name`; `0x26db4` / `no export name` | `CSI_INITDLL.dll` at `0x26db4`; `MINITDLL.dll` at `0x1d94` |
| `80` | 168 | unknown | none | none |
| `f2` | 70709 | unknown | none | none |
| `f5` | 64388 | unknown | none | none |
| `fa` | 65536 | unknown | none | none |
| `fc` | 77832 | intel microcode records | none | none |
| `fd` | 77832 | intel microcode records | none | none |

Duplicate content groups:

- `08`, `11`, `30`, `fc`, `fd`: `1d101389e811ccdf5a1d7484135d3a635545c399b07644671cbef1e7a21270e7`

Limitations:

- Byte signatures and validated PE layout do not establish behavioral roles or equivalence.
- PE file extent is the maximum validated header/section raw bound; trailing data is not included.
- No code was executed, decompressed module format inferred, or function inventory recovered.

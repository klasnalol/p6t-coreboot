# Original module segment layout and analysis carrier

`1b` admits an exact reconstruction: 68 descriptors at offset 4, each two little-endian u32 values;
the first is a target-address field, and the second combines length with a stored-payload high bit.
The uniquely validated name table starts at `0x245` and ends at declared header boundary `0x684`.
Each record is a kind byte, u16 descriptor offset, then an ASCII NUL-terminated name.
Concatenating only high-bit-marked payloads consumes exactly the complete `0x72bd9`-byte member.

Runtime semantics of kind bytes, unbacked storage, and loading order remain unobserved.

| Embedded label | Kind | Target field | Bytes | Stored file range (end exclusive) |
| --- | ---: | ---: | ---: | --- |
| `POST2_CSEG` | `0x1` | `0x5bb10` | `0x15aa` | `0x684`–`0x1c2e` |
| `POST3_CSEG` | `0x1` | `0x2f340` | `0x1` | `0x1c2e`–`0x1c2f` |
| `RUN_CSEG` | `0x0` | `0xf0000` | `0x10000` | `0x1c2f`–`0x11c2f` |
| `POST_CSEG` | `0x1` | `0x40000` | `0xf05a` | `0x11c2f`–`0x20c89` |
| `DIM_CSEG` | `0x1` | `0x13d40` | `0x9533` | `0x20c89`–`0x2a1bc` |
| `I13R_CSEG` | `0x2` | `0xead60` | `0x528a` | `0x2a1bc`–`0x2f446` |
| `I13P_CSEG` | `0x1` | `0x26410` | `0x79cc` | `0x2f446`–`0x36e12` |
| `FDR_CSEG` | `0x2` | `0xe92d0` | `0xd53` | `0x36e12`–`0x37b65` |
| `SETSVR_CSEG` | `0x1` | `0x51210` | `0xa8fe` | `0x37b65`–`0x42463` |
| `I19R_CSEG2` | `0x2` | `0xe8c20` | `0x6a5` | `0x42463`–`0x42b08` |
| `INT10_CSEG` | `0x2` | `0xead50` | `0xd` | `0x42b08`–`0x42b15` |
| `AFDR_CSEG` | `0x2` | `0xea030` | `0xd1a` | `0x42b15`–`0x4382f` |
| `INTERFACE_CSEG` | `0x2` | `0x13520` | `0x817` | unbacked descriptor |
| `PMM_CSEG` | `0x1` | `0x2dde0` | `0x532` | `0x4382f`–`0x43d61` |
| `SMI_BSPCSEG` | `0x2` | `0xac3f0` | `0xc99b` | `0x43d61`–`0x506fc` |
| `SMBIOS_CSEG` | `0x1` | `0x6dd40` | `0xe6a` | `0x506fc`–`0x51566` |
| `SMI_BSPENTRYSEG` | `0x0` | `0xa0000` | `0x2e0` | `0x51566`–`0x51846` |
| `E000_CSEG` | `0x2` | `0xefff0` | `0x5` | `0x51846`–`0x5184b` |
| `ACPITBL_SEG` | `0x1` | `0x5d0c0` | `0xfd00` | `0x5184b`–`0x6154b` |
| `TEXT_CSEG` | `0x1` | `0x2f350` | `0x37e` | `0x6154b`–`0x618c9` |
| `SMI_AP2ENTRYSEG` | `0x0` | `0xa0800` | `0xe` | `0x618c9`–`0x618d7` |
| `TCPA_CSEG` | `0x1` | `0x6ebb0` | `0x35cc` | `0x618d7`–`0x64ea3` |
| `SMI_AP1ENTRYSEG` | `0x0` | `0xa0400` | `0xe` | `0x64ea3`–`0x64eb1` |
| `SMI_AP3ENTRYSEG` | `0x0` | `0xa0c00` | `0xe` | `0x64eb1`–`0x64ebf` |
| `SMI_AP4ENTRYSEG` | `0x0` | `0xa1000` | `0xe` | `0x64ebf`–`0x64ecd` |
| `SMI_AP5ENTRYSEG` | `0x0` | `0xa1400` | `0xe` | `0x64ecd`–`0x64edb` |
| `SMI_AP6ENTRYSEG` | `0x0` | `0xa1800` | `0xe` | `0x64edb`–`0x64ee9` |
| `SMI_AP7ENTRYSEG` | `0x0` | `0xa1c00` | `0xe` | `0x64ee9`–`0x64ef7` |
| `SMI_AP8ENTRYSEG` | `0x0` | `0xa2000` | `0xe` | `0x64ef7`–`0x64f05` |
| `SMI_AP9ENTRYSEG` | `0x0` | `0xa2400` | `0xe` | `0x64f05`–`0x64f13` |
| `SMI_AP10ENTRYSEG` | `0x0` | `0xa2800` | `0xe` | `0x64f13`–`0x64f21` |
| `SMI_AP11ENTRYSEG` | `0x0` | `0xa2c00` | `0xe` | `0x64f21`–`0x64f2f` |
| `SMI_AP12ENTRYSEG` | `0x0` | `0xa3000` | `0xe` | `0x64f2f`–`0x64f3d` |
| `SMI_AP13ENTRYSEG` | `0x0` | `0xa3400` | `0xe` | `0x64f3d`–`0x64f4b` |
| `SMI_AP14ENTRYSEG` | `0x0` | `0xa3800` | `0xe` | `0x64f4b`–`0x64f59` |
| `SMI_AP15ENTRYSEG` | `0x0` | `0xa3c00` | `0xe` | `0x64f59`–`0x64f67` |
| `BDA_DSEG` | `0x10` | `0x400` | `0x110` | unbacked descriptor |
| `BBLK_DSEG` | `0x12` | `0x510` | `0x20` | unbacked descriptor |
| `DIM_DSEG` | `0x11` | `0x1d280` | `0x918c` | `0x64f67`–`0x6e0f3` |
| `IVT_DSEG` | `0x10` | `0x0` | `0x400` | unbacked descriptor |
| `PMM_DSEG` | `0x11` | `0x2e320` | `0x101f` | `0x6e0f3`–`0x6f112` |
| `POST_DSEG` | `0x11` | `0x4f060` | `0x21b0` | `0x6f112`–`0x712c2` |
| `TEMP_DSEG` | `0x10` | `0x30000` | `0x10000` | unbacked descriptor |
| `USEG` | `0x12` | `0x4530` | `0xeff0` | unbacked descriptor |
| `SMI_BSPDSEG` | `0x12` | `0xabc00` | `0x7e6` | `0x712c2`–`0x71aa8` |
| `SMI_STRUCSEG` | `0x12` | `0xb8d90` | `0x1b0` | `0x71aa8`–`0x71c58` |
| `SMI_BSPDUMPSEG` | `0x10` | `0xa7c00` | `0x400` | unbacked descriptor |
| `USB_DATA` | `0x10` | `0xe4c00` | `0x4000` | unbacked descriptor |
| `DPPM_DSEG` | `0x11` | `0x6cdc0` | `0xf73` | `0x71c58`–`0x72bcb` |
| `SMI_AP1DUMPSEG` | `0x10` | `0xa8000` | `0x400` | unbacked descriptor |
| `SMI_AP2DUMPSEG` | `0x10` | `0xa8400` | `0x400` | unbacked descriptor |
| `SMI_AP3DUMPSEG` | `0x10` | `0xa8800` | `0x400` | unbacked descriptor |
| `SMI_AP4DUMPSEG` | `0x10` | `0xa8c00` | `0x400` | unbacked descriptor |
| `SMI_AP5DUMPSEG` | `0x10` | `0xa9000` | `0x400` | unbacked descriptor |
| `SMI_AP6DUMPSEG` | `0x10` | `0xa9400` | `0x400` | unbacked descriptor |
| `SMI_AP7DUMPSEG` | `0x10` | `0xa9800` | `0x400` | unbacked descriptor |
| `SMI_AP8DUMPSEG` | `0x10` | `0xa9c00` | `0x400` | unbacked descriptor |
| `SMI_AP9DUMPSEG` | `0x10` | `0xaa000` | `0x400` | unbacked descriptor |
| `SMI_AP10DUMPSEG` | `0x10` | `0xaa400` | `0x400` | unbacked descriptor |
| `SMI_AP11DUMPSEG` | `0x10` | `0xaa800` | `0x400` | unbacked descriptor |
| `SMI_AP12DUMPSEG` | `0x10` | `0xaac00` | `0x400` | unbacked descriptor |
| `SMI_AP13DUMPSEG` | `0x10` | `0xab000` | `0x400` | unbacked descriptor |
| `SMI_AP14DUMPSEG` | `0x10` | `0xab400` | `0x400` | unbacked descriptor |
| `SMI_AP15DUMPSEG` | `0x10` | `0xab800` | `0x400` | unbacked descriptor |
| `STACK_SEG` | `0x22` | `0x530` | `0x4000` | unbacked descriptor |
| `SMI_BSPSTACKSEG` | `0x20` | `0xa7400` | `0x800` | unbacked descriptor |
| `C_DSEG` | `0x21` | `0x2f6d0` | `0xe` | `0x72bcb`–`0x72bd9` |
| `SHADOWREGIONS` | `0x3` | `0xc0000` | `0x20000` | unbacked descriptor |

Module55 carrier: `/home/klasnalol/coreboot-p6tse/build/p6t-analysis/module55-loader32.elf`

This non-runnable ELF32 relocatable object contains the exact original prefix `[0,0x1d94)`.
Original offset `N` maps to section-relative offset `N` in `.loader`, and carrier file offset `N+0x100`.
IDA relocates this object's `.loader` to `0x08000000`, so its IDA address is `0x08000000+N`.
It includes analysis seed symbols at `0x24b` and `0x4ba`. They are hints, not recovered source names.
The prefix mixes 16-bit code, 32-bit code, descriptors, and data; ELF32 does not establish all bytes as 32-bit code.
The candidate GDT at `0x14` is seven well-formed descriptors: null; zero-base 16-bit code/data;
zero-base 32-bit 4-KiB-granularity code/data; and base-`0xf0000` 16-bit code/data.
Its actual setup and runtime use must be followed in disassembly. The fixed-address header fields are retained raw in JSON.

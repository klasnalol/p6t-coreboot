# P6T SE original-module inventory

`inventory_archive.py` inventories an operator-supplied tar archive without
executing its contents, applying archive metadata, or trusting member labels.
It rejects path traversal, links, special members, duplicate paths, oversized
inputs, and existing output paths. It records complete member hashes and
source offsets; PE offsets are relative to their containing extracted member.

```sh
python3 util/p6t_reverse/inventory_archive.py /absolute/path/Archive.tar.gz \
  --output /absolute/path/new-extraction-directory \
  --manifest /absolute/path/new-manifest.json \
  --summary /absolute/path/new-summary.md \
  --compare 3rdparty/blobs/northbridge/intel/x58/CSI_INITDLL.dll \
  --compare 3rdparty/blobs/northbridge/intel/x58/MINITDLL.dll
```

An existing extraction can be audited with `--verify-existing-output`; all
archive members must match their extracted bytes and no input files are
overwritten. Report paths must still be new. This also permits richer later
inventories without extracting another copy.

The parser recognizes selected bounded BMP, ACPI, PCI option-ROM, PE, and Intel
microcode structures. It preserves checksum results. A valid layout or
checksum identifies a data format; it does not establish authenticity, feature
behavior, hardware compatibility, or function equivalence.

Run the write-boundary and format-parser regression checks with:

```sh
python3 -m unittest discover -s util/p6t_reverse -p 'test_*.py'
```

`derive_analysis.py` reconstructs the `1b` slab's descriptor and name tables,
requiring their boundaries and stored segment sizes to account for every
source byte. It also emits a non-runnable ELF32 `ET_REL` carrier for the reviewed
module55 prefix, with byte provenance and mixed 16/32-bit limitations recorded:

```sh
python3 util/p6t_reverse/derive_analysis.py \
  --members build/p6t-original-modules \
  --elf build/p6t-analysis/module55-loader32.elf \
  --report analysis/p6t-se/archive/segment_layout.json \
  --summary analysis/p6t-se/archive/segment_layout.md
```

The output files must be new. The carrier uses zero-based `.loader` coordinates;
ELF file offsets add `0x100`. IDA's relocatable-object loader placed this section
at `0x08000000` in the observed session, so use its reported section base when
converting original offsets to IDA addresses.
The ELF is for static analysis only and must not be flashed or executed.

`extract_stock.py` compares the archive with the reviewed full ROM in the
repository and recovers its actual module directory. It checks the original ROM
digest and all module bounds before calling the explicitly supplied LH5 decoder.
The decoder source is coreboot/bios_extract, commit
`0a7bc1d71735ef97b00dfec0fd54a02fcc5d1bb0`.

```sh
cc -shared -fPIC -O2 -o build/p6t-bios-extract/liblh5.so \
  build/p6t-bios-extract/src/lh5_extract.c
python3 util/p6t_reverse/extract_stock.py \
  --rom 'p6t se new xeon microcode bios stock bac.bin' \
  --lh5-library build/p6t-bios-extract/liblh5.so \
  --archive-members build/p6t-original-modules \
  --output /absolute/path/new-stock-extraction \
  --report /absolute/path/new-stock-comparison.json
```

The ordinary upstream extractor selects the first `AMIBIOSC` byte string, which
is an instruction-stream literal in this ROM, and crashes. This wrapper selects
the single header with a four-digit version and validates its linked module
directory. It records the separately stored, identical module-55 copies too.

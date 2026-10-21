#!/usr/bin/env python3
"""Derive bounded AMI slab layouts and non-runnable ELF analysis carriers."""

import argparse
import json
from pathlib import Path
import struct

from inventory_archive import pe_at, sha256, u16, u32


def slab_layout(data):
    count, header_end = u16(data, 0), u16(data, 2)
    descriptors_end = 4 + count * 8
    if not 0 < count <= 512 or not descriptors_end <= header_end <= len(data):
        raise ValueError("Invalid slab descriptor/header bounds")
    candidates = []
    # Require one complete name table, ordered descriptor references, ASCII
    # identifiers, and an exact end at the header boundary declared in bytes.
    for start in range(descriptors_end, header_end):
        position, names = start, []
        for index in range(count):
            if position + 4 > header_end:
                break
            kind, descriptor = struct.unpack_from("<BH", data, position)
            end = data.find(b"\0", position + 3, header_end)
            if descriptor != 4 + index * 8 or end < 0:
                break
            name_bytes = data[position + 3:end]
            if not name_bytes or any(c not in b"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_" for c in name_bytes):
                break
            names.append((kind, descriptor, name_bytes.decode("ascii"), position))
            position = end + 1
        if len(names) == count and position == header_end:
            candidates.append((start, names))
    if len(candidates) != 1:
        raise ValueError("Slab name-table boundary is ambiguous or invalid")
    names_start, names = candidates[0]
    cursor, segments = header_end, []
    for kind, descriptor, name, name_record_offset in names:
        target, flagged_size = struct.unpack_from("<II", data, descriptor)
        size, stored = flagged_size & 0x7fffffff, bool(flagged_size & 0x80000000)
        if target + size > 0x100000000 or (stored and cursor + size > len(data)):
            raise ValueError("Slab segment exceeds source/address bounds")
        segment = {"name": name, "kind_byte": kind, "descriptor_offset": descriptor,
            "name_record_offset": name_record_offset, "descriptor_target_address": target,
            "flagged_size": flagged_size, "size": size, "stored_payload": stored}
        if stored:
            segment.update({"file_offset": cursor, "file_end_exclusive": cursor + size,
                "sha256": sha256(data[cursor:cursor + size])})
            cursor += size
        segments.append(segment)
    if cursor != len(data):
        raise ValueError("Slab payload sizes do not consume the complete member")
    return {"descriptor_count": count, "descriptors_offset": 4,
        "descriptor_record_size": 8, "descriptors_end": descriptors_end,
        "names_start": names_start, "header_end": header_end,
        "stored_payload_end": cursor, "segments": segments,
        "evidence_type": "validated byte-layout reconstruction",
        "limitations": ["Target addresses and kind bytes are recorded fields; runtime load order is unobserved.",
            "An unbacked descriptor does not by itself prove zero initialization.",
            "Segment names are embedded labels and do not establish feature implementation."]}


def elf32_carrier(payload):
    """ET_REL, no program headers: original offset N maps to .loader offset N."""
    string_names = b"\0.loader\0.shstrtab\0.strtab\0.symtab\0"
    symbol_names = b"\0analysis_seed_024b\0analysis_seed_04ba\0"
    loader_offset = 0x100
    names_offset = loader_offset + len(payload)
    strings_offset = names_offset + len(string_names)
    symbols_offset = (strings_offset + len(symbol_names) + 3) & ~3
    symbols = bytearray(16)
    for name, address in ((b"analysis_seed_024b", 0x24b), (b"analysis_seed_04ba", 0x4ba)):
        symbols += struct.pack("<IIIBBH", symbol_names.index(name), address, 0, 0x12, 0, 1)
    section_offset = symbols_offset + len(symbols)
    ident = b"\x7fELF\x01\x01\x01" + bytes(9)
    header = struct.pack("<16sHHIIIIIHHHHHH", ident, 1, 3, 1, 0, 0, section_offset,
        0, 52, 0, 0, 40, 5, 2)
    result = bytearray(header)
    result.extend(bytes(loader_offset - len(result)))
    result.extend(payload)
    result.extend(string_names)
    result.extend(symbol_names)
    result.extend(bytes(symbols_offset - len(result)))
    result.extend(symbols)
    sections = [bytes(40),
        struct.pack("<10I", string_names.index(b".loader"), 1, 6, 0, loader_offset, len(payload), 0, 0, 1, 0),
        struct.pack("<10I", string_names.index(b".shstrtab"), 3, 0, 0, names_offset, len(string_names), 0, 0, 1, 0),
        struct.pack("<10I", string_names.index(b".strtab"), 3, 0, 0, strings_offset, len(symbol_names), 0, 0, 1, 0),
        struct.pack("<10I", string_names.index(b".symtab"), 2, 0, 0, symbols_offset, len(symbols), 3, 1, 4, 16)]
    for section in sections:
        result.extend(section)
    return bytes(result), loader_offset


def write_new(path, content):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("xb") as target:
        target.write(content)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--members", required=True, type=Path)
    parser.add_argument("--elf", required=True, type=Path)
    parser.add_argument("--report", required=True, type=Path)
    parser.add_argument("--summary", required=True, type=Path)
    args = parser.parse_args()
    for destination in (args.elf, args.report, args.summary):
        if destination.exists() or destination.is_symlink():
            raise ValueError(f"Refusing to overwrite {destination}")
    slab_file, loader_file = args.members / "1b", args.members / "55"
    slab, module55 = slab_file.read_bytes(), loader_file.read_bytes()
    if sha256(module55) != "23d6f3520db4755db3af42c958d6b22c88d7166375c3d7a92ab3c4b4e41b8d64":
        raise ValueError("Module55 does not match the reviewed archive input")
    loader_end = 0x1d94
    first_pe = pe_at(module55, loader_end)
    if not first_pe or first_pe["sha256_of_bounded_extent"] != "a17eee641ab0955f6e4848ac95b761ba94c87b2c4be36c3a150d51ee856f0b6c":
        raise ValueError("Module55 first embedded PE boundary/identity changed")
    layout = slab_layout(slab)
    prefix = module55[:loader_end]
    carrier, carrier_offset = elf32_carrier(prefix)
    report = {"source_1b": str(slab_file.absolute()), "source_1b_sha256": sha256(slab),
        "slab_1b": layout, "source_module55": str(loader_file.absolute()),
        "source_module55_sha256": sha256(module55), "module55_header_u32": {
            hex(offset): u32(module55, offset) for offset in range(0, 0x14, 4)},
        "module55_loader_prefix_end_exclusive": loader_end,
        "module55_loader_prefix_sha256": sha256(prefix),
        "carrier": {"path": str(args.elf.absolute()), "sha256": sha256(carrier),
            "format": "ELF32 little endian, ET_REL, EM_386, no program headers",
            "original_offset_to_address": "N -> N in .loader section",
            "original_offset_to_carrier_file_offset": f"N -> N+{carrier_offset:#x}",
            "analysis_seed_addresses": [0x24b, 0x4ba],
            "limitations": ["Non-runnable analysis carrier; do not flash or execute it.",
                "Payload mixes header/data and 16/32-bit code. ELF32 is a decoder hint only.",
                "Seed symbols are analysis hints; they do not prove function boundaries or behavior.",
                "Only module55 bytes [0,0x1d94) are represented; embedded MINIT and CSI are excluded."]}}
    gdt = []
    for index in range(7):
        offset = 0x14 + index * 8
        descriptor = module55[offset:offset + 8]
        limit = int.from_bytes(descriptor[:2], "little") | ((descriptor[6] & 15) << 16)
        base = int.from_bytes(descriptor[2:5], "little") | (descriptor[7] << 24)
        gdt.append({"offset": offset, "selector": index * 8, "raw_hex": descriptor.hex(),
            "base": base, "limit_field": limit, "access": descriptor[5],
            "flags_nibble": descriptor[6] >> 4, "default_32bit": bool(descriptor[6] & 0x40),
            "granularity_4k": bool(descriptor[6] & 0x80)})
    report["module55_gdt_candidate"] = {"offset": 0x14, "length": 56, "descriptors": gdt,
        "evidence_type": "x86 descriptor-format decoding; table runtime use remains to be traced"}
    lines = ["# Original module segment layout and analysis carrier", "",
        "`1b` admits an exact reconstruction: 68 descriptors at offset 4, each two little-endian u32 values;",
        "the first is a target-address field, and the second combines length with a stored-payload high bit.",
        "The uniquely validated name table starts at `0x245` and ends at declared header boundary `0x684`.",
        "Each record is a kind byte, u16 descriptor offset, then an ASCII NUL-terminated name.",
        "Concatenating only high-bit-marked payloads consumes exactly the complete `0x72bd9`-byte member.", "",
        "Runtime semantics of kind bytes, unbacked storage, and loading order remain unobserved.", "",
        "| Embedded label | Kind | Target field | Bytes | Stored file range (end exclusive) |",
        "| --- | ---: | ---: | ---: | --- |"]
    for segment in layout["segments"]:
        span = f"`{segment['file_offset']:#x}`–`{segment['file_end_exclusive']:#x}`" if segment["stored_payload"] else "unbacked descriptor"
        lines.append(f"| `{segment['name']}` | `{segment['kind_byte']:#x}` | `{segment['descriptor_target_address']:#x}` | `{segment['size']:#x}` | {span} |")
    lines += ["", f"Module55 carrier: `{args.elf.absolute()}`", "",
        "This non-runnable ELF32 relocatable object contains the exact original prefix `[0,0x1d94)`.",
        "Original offset `N` maps to section-relative offset `N` in `.loader`, and carrier file offset `N+0x100`.",
        "IDA relocates this object's `.loader` to `0x08000000`, so its IDA address is `0x08000000+N`.",
        "It includes analysis seed symbols at `0x24b` and `0x4ba`. They are hints, not recovered source names.",
        "The prefix mixes 16-bit code, 32-bit code, descriptors, and data; ELF32 does not establish all bytes as 32-bit code.",
        "The candidate GDT at `0x14` is seven well-formed descriptors: null; zero-base 16-bit code/data;",
        "zero-base 32-bit 4-KiB-granularity code/data; and base-`0xf0000` 16-bit code/data.",
        "Its actual setup and runtime use must be followed in disassembly. The fixed-address header fields are retained raw in JSON."]
    write_new(args.elf, carrier)
    write_new(args.report, (json.dumps(report, indent=2) + "\n").encode())
    write_new(args.summary, ("\n".join(lines) + "\n").encode())
    print(json.dumps({"carrier": str(args.elf.absolute()), "report": str(args.report.absolute()),
        "slab_segments": layout["descriptor_count"], "loader_prefix_end": hex(loader_end)}, indent=2))


if __name__ == "__main__":
    main()

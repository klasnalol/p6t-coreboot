#!/usr/bin/env python3
"""Safely inventory an operator-supplied tar and preserve byte provenance.

This performs no target execution. PE recognition validates file bounds and does
not imply a module role, valid code, complete function coverage, or equivalence.
"""

import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import struct
import tarfile


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def u16(data, offset):
    return struct.unpack_from("<H", data, offset)[0]


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def pe_at(data, start):
    """Return bounded PE metadata, or None for an unvalidated MZ occurrence."""
    view = memoryview(data)[start:]
    if len(view) < 0x40 or view[:2] != b"MZ":
        return None
    nt = u32(view, 0x3c)
    if nt < 0x40 or nt + 24 > len(view) or view[nt:nt + 4] != b"PE\0\0":
        return None
    count, optional_size = u16(view, nt + 6), u16(view, nt + 20)
    optional = nt + 24
    sections_start = optional + optional_size
    if not 0 < count <= 96 or sections_start + count * 40 > len(view):
        return None
    if optional_size < 96 or u16(view, optional) not in (0x10b, 0x20b):
        return None
    magic = u16(view, optional)
    image_size, headers_size = u32(view, optional + 56), u32(view, optional + 60)
    if not image_size or headers_size > len(view) or headers_size < sections_start + count * 40:
        return None
    sections, extent = [], headers_size
    for index in range(count):
        section = sections_start + index * 40
        virtual_size, rva = u32(view, section + 8), u32(view, section + 12)
        raw_size, raw = u32(view, section + 16), u32(view, section + 20)
        if raw_size and (raw < headers_size or raw + raw_size > len(view)):
            return None
        if rva + virtual_size > image_size:
            return None
        extent = max(extent, raw + raw_size if raw_size else 0)
        sections.append({
            "name": bytes(view[section:section + 8]).rstrip(b"\0").decode("ascii", "backslashreplace"),
            "rva": rva, "virtual_size": virtual_size,
            "raw_offset": raw, "raw_size": raw_size,
            "characteristics": u32(view, section + 36),
        })

    def rva_to_offset(rva, length):
        if rva < headers_size and rva + length <= headers_size:
            return rva
        for section in sections:
            delta = rva - section["rva"]
            if 0 <= delta and delta + length <= section["raw_size"]:
                return section["raw_offset"] + delta
        return None

    export_name = None
    directories = optional + (96 if magic == 0x10b else 112)
    if directories + 8 <= sections_start:
        export_rva = u32(view, directories)
        export_offset = rva_to_offset(export_rva, 40) if export_rva else None
        if export_offset is not None:
            name_offset = rva_to_offset(u32(view, export_offset + 12), 1)
            if name_offset is not None:
                name_end = data.find(b"\0", start + name_offset, min(start + extent, start + name_offset + 512))
                if name_end >= 0:
                    export_name = data[start + name_offset:name_end].decode("ascii", "backslashreplace")
    return {
        "offset": start, "file_extent": extent,
        "sha256_of_bounded_extent": sha256(data[start:start + extent]),
        "machine": u16(view, nt + 4), "optional_magic": magic,
        "entry_rva": u32(view, optional + 16), "image_size": image_size,
        "headers_size": headers_size, "export_name": export_name,
        "sections": sections,
    }


def recognize(data):
    observations = []
    for magic, label in ((b"MZ", "DOS MZ signature"), (b"\x7fELF", "ELF signature"),
                         (b"\x89PNG\r\n\x1a\n", "PNG signature"),
                         (b"BM", "BMP signature"), (b"\x55\xaa", "55 AA prefix"),
                         (b"\x1f\x8b", "gzip signature"), (b"PK\x03\x04", "ZIP signature")):
        if data.startswith(magic):
            observations.append({"offset": 0, "observation": label})
    return observations


def structured_formats(data):
    """Decode selected bounded formats without trusting archive labels."""
    result = {}
    if data.startswith(b"BM") and len(data) >= 54:
        file_size, pixel_offset, dib_size = u32(data, 2), u32(data, 10), u32(data, 14)
        if file_size == len(data) and dib_size >= 40 and 14 + dib_size <= pixel_offset <= len(data):
            result["bmp"] = {"file_size": file_size, "pixel_offset": pixel_offset,
                "dib_size": dib_size, "width": struct.unpack_from("<i", data, 18)[0],
                "height": struct.unpack_from("<i", data, 22)[0], "bits_per_pixel": u16(data, 28)}
    if len(data) >= 36 and data[:4] in (b"DSDT", b"SSDT", b"FACP", b"APIC", b"HPET"):
        size = u32(data, 4)
        if 36 <= size <= len(data):
            result["acpi"] = {"signature": data[:4].decode("ascii"), "table_size": size,
                "revision": data[8], "checksum_mod256": sum(data[:size]) & 255,
                "oem_id": data[10:16].decode("ascii", "backslashreplace"),
                "oem_table_id": data[16:24].decode("ascii", "backslashreplace")}
    if data.startswith(b"\x55\xaa") and len(data) >= 0x1a:
        pcir = u16(data, 0x18)
        size = data[2] * 512
        if 0 < size <= len(data) and pcir + 24 <= size and data[pcir:pcir + 4] == b"PCIR":
            pcir_size, image_size = u16(data, pcir + 10), u16(data, pcir + 16) * 512
            if pcir_size >= 24 and pcir + pcir_size <= size and 0 < image_size <= len(data):
                result["pci_option_rom"] = {"header_size": size, "pcir_offset": pcir,
                    "vendor_id": u16(data, pcir + 4), "device_id": u16(data, pcir + 6),
                    "pcir_image_size": image_size, "code_type": data[pcir + 20],
                    "last_image": bool(data[pcir + 21] & 0x80),
                    "checksum_mod256": sum(data[:size]) & 255}
    records = []
    for offset in range(0, max(0, len(data) - 47), 4):
        if data[offset:offset + 4] != b"\x01\x00\x00\x00":
            continue
        header = struct.unpack_from("<12I", data, offset)
        size = header[8] or 2048
        if header[5] != 1 or size < 48 or size % 4 or offset + size > len(data):
            continue
        if header[7] > size - 48 or sum(struct.unpack_from(f"<{size // 4}I", data, offset)) & 0xffffffff:
            continue
        records.append({"offset": offset, "size": size, "header_version": header[0],
            "revision": header[1], "date_bcd": header[2], "processor_signature": header[3],
            "platform_flags": header[6], "checksum_mod2pow32": 0,
            "sha256": sha256(data[offset:offset + size])})
    if records:
        result["intel_microcode_records"] = records
    return result


def safe_member_path(name):
    path = PurePosixPath(name)
    if not name or path.is_absolute() or ".." in path.parts or "\\" in name or "\0" in name:
        raise ValueError(f"Unsafe archive member path: {name!r}")
    if not path.parts or path.as_posix() == ".":
        raise ValueError(f"Empty archive member path: {name!r}")
    return path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("archive", type=Path)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--manifest", type=Path, required=True)
    parser.add_argument("--summary", type=Path, required=True)
    parser.add_argument("--compare", type=Path, action="append", default=[])
    parser.add_argument("--verify-existing-output", action="store_true",
                        help="Read and verify an existing extraction; never overwrite its files")
    args = parser.parse_args()
    archive, output = args.archive.resolve(strict=True), args.output.absolute()
    if output.is_symlink() or (output.exists() and not args.verify_existing_output):
        raise ValueError(f"Refusing to overwrite extraction target: {output}")
    for report in (args.manifest, args.summary):
        if report.exists() or report.is_symlink():
            raise ValueError(f"Refusing to overwrite report: {report}")
    comparisons = []
    for path in args.compare:
        path = path.resolve(strict=True)
        content = path.read_bytes()
        if not content:
            raise ValueError(f"Empty comparison input: {path}")
        comparisons.append((path, content, sha256(content)))
    archive_bytes = archive.read_bytes()
    manifest = {
        "schema": "p6t-module-archive-inventory-v1", "archive": str(archive),
        "archive_sha256": sha256(archive_bytes), "archive_size": len(archive_bytes),
        "output": str(output), "members": [],
        "limitations": [
            "Byte signatures and validated PE layout do not establish behavioral roles or equivalence.",
            "PE file extent is the maximum validated header/section raw bound; trailing data is not included.",
            "No code was executed, decompressed module format inferred, or function inventory recovered.",
        ],
    }
    # Preflight every member before writing any archive-controlled path.
    with tarfile.open(archive, "r:*") as tar:
        members = tar.getmembers()
        if len(members) > 10000 or sum(member.size for member in members) > 64 * 1024 * 1024:
            raise ValueError("Archive exceeds bounded inventory limits")
        paths = set()
        for member in members:
            safe = safe_member_path(member.name)
            if safe in paths:
                raise ValueError(f"Duplicate archive member: {member.name}")
            paths.add(safe)
            if not (member.isfile() or member.isdir()) or member.size > 32 * 1024 * 1024:
                raise ValueError(f"Unsupported archive member type or size: {member.name}")
        for path in paths:
            for parent in path.parents:
                if parent in paths and not next(member for member in members if safe_member_path(member.name) == parent).isdir():
                    raise ValueError(f"Archive member is also a parent file: {parent}")
        if args.verify_existing_output:
            if not output.is_dir():
                raise ValueError(f"Existing extraction is not a directory: {output}")
        else:
            output.mkdir(parents=True, exist_ok=False)
        for member in members:
            destination = output.joinpath(*safe_member_path(member.name).parts)
            record = {"name": member.name, "size": member.size,
                      "tar_uncompressed_header_offset": member.offset,
                      "tar_uncompressed_data_offset": member.offset_data,
                      "type": "file" if member.isfile() else "directory"}
            if member.isdir():
                if args.verify_existing_output:
                    if not destination.is_dir() or destination.is_symlink():
                        raise ValueError(f"Existing directory is missing or a symlink: {destination}")
                else:
                    destination.mkdir(parents=True, exist_ok=True)
                manifest["members"].append(record)
                continue
            source = tar.extractfile(member)
            if source is None:
                raise ValueError(f"Cannot read regular member: {member.name}")
            data = source.read()
            if len(data) != member.size:
                raise ValueError(f"Short archive member: {member.name}")
            if args.verify_existing_output:
                if destination.is_symlink() or not destination.is_file() or destination.read_bytes() != data:
                    raise ValueError(f"Existing member differs or is a symlink: {destination}")
            else:
                destination.parent.mkdir(parents=True, exist_ok=True)
                with destination.open("xb") as extracted:
                    extracted.write(data)
            record.update({"extracted_path": str(destination), "sha256": sha256(data),
                           "prefix_hex": data[:32].hex(), "signatures": recognize(data),
                           "structured_formats": structured_formats(data),
                           "embedded_pe": [], "exact_matches": []})
            position = 0
            while (position := data.find(b"MZ", position)) >= 0:
                pe = pe_at(data, position)
                if pe:
                    record["embedded_pe"].append(pe)
                position += 2
            for path, content, digest in comparisons:
                position = 0
                while (position := data.find(content, position)) >= 0:
                    record["exact_matches"].append({"comparison_path": str(path),
                        "offset": position, "size": len(content), "sha256": digest})
                    position += len(content)
            manifest["members"].append(record)
    files = [member for member in manifest["members"] if member["type"] == "file"]
    digest_members = {}
    for member in files:
        digest_members.setdefault(member["sha256"], []).append(member["name"])
    manifest["duplicate_content_groups"] = [
        {"sha256": digest, "members": names} for digest, names in digest_members.items() if len(names) > 1]
    manifest["counts"] = {"members": len(manifest["members"]), "regular_files": len(files),
        "distinct_file_contents": len(digest_members),
        "uncompressed_file_bytes": sum(member["size"] for member in files),
        "validated_pe_images": sum(len(member["embedded_pe"]) for member in files),
        "exact_comparison_matches": sum(len(member["exact_matches"]) for member in files)}
    args.manifest.parent.mkdir(parents=True, exist_ok=True)
    with args.manifest.open("x") as report:
        json.dump(manifest, report, indent=2)
        report.write("\n")
    lines = ["# Original BIOS module archive inventory", "",
        f"Archive: `{archive}`", f"SHA-256: `{manifest['archive_sha256']}`", "",
        f"Extracted {len(files)} regular files ({manifest['counts']['uncompressed_file_bytes']} bytes) to `{output}`.", "",
        "The names below are archive labels. File signatures and PE headers are observations; firmware behavior is unestablished.", "",
        "| Member | Bytes | Bounded format observations | Validated PE offsets / export names | Exact comparison offsets |",
        "| --- | ---: | --- | --- | --- |"]
    for member in files:
        pe_text = "; ".join(f"`0x{pe['offset']:x}` / `{pe['export_name'] or 'no export name'}`" for pe in member["embedded_pe"]) or "none"
        match_text = "; ".join(f"`{Path(match['comparison_path']).name}` at `0x{match['offset']:x}`" for match in member["exact_matches"]) or "none"
        formats = member["structured_formats"]
        format_text = "; ".join(name.replace("_", " ") for name in formats) or "unknown"
        lines.append(f"| `{member['name']}` | {member['size']} | {format_text} | {pe_text} | {match_text} |")
    lines += ["", "Duplicate content groups:", ""]
    for group in manifest["duplicate_content_groups"]:
        lines.append(f"- {', '.join('`' + name + '`' for name in group['members'])}: `{group['sha256']}`")
    lines += ["", "Limitations:", ""] + [f"- {limitation}" for limitation in manifest["limitations"]]
    args.summary.parent.mkdir(parents=True, exist_ok=True)
    with args.summary.open("x") as report:
        report.write("\n".join(lines) + "\n")
    print(json.dumps({"manifest": str(args.manifest.absolute()), "summary": str(args.summary.absolute()), **manifest["counts"]}, indent=2))


if __name__ == "__main__":
    main()

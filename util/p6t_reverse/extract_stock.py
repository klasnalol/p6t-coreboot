#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-only
"""Bounded module-directory extraction for this repository's original ROM.

Directory layout follows coreboot/bios_extract src/ami.c; LH5 is delegated to
that project's explicitly supplied decoder library. The ROM is never executed.
This utility admits only the reviewed ROM digest and refuses output overwrites.
"""

import argparse
import ctypes
import hashlib
import json
from pathlib import Path
import struct


ROM_SHA256 = "24a3409b4a49e8d4bcf14e2846ec17c8cda1e13d13efe42983e41898e2d17b3f"
DECODER_COMMIT = "0a7bc1d71735ef97b00dfec0fd54a02fcc5d1bb0"


def digest(data):
    return hashlib.sha256(data).hexdigest()


def module_record(data, offset):
    if offset < 8 or offset + 20 > len(data):
        raise ValueError(f"Header outside ROM at {offset:#x}")
    lo, hi, size, ident, flags, tag, packed, expanded = struct.unpack_from("<HHHBBIII", data, offset)
    compressed = not bool(flags & 0x80)
    if not compressed:
        packed = size if size not in (0, 0xffff) else struct.unpack_from("<I", data, offset - 8)[0]
        expanded = packed
    payload = offset + (20 if compressed else 12)
    if not 0 < expanded <= 2 * 1024 * 1024 or not 0 < packed <= len(data) - payload:
        raise ValueError(f"Invalid module sizes at {offset:#x}")
    return {"header_offset": offset, "id": ident, "flags": flags, "tag": tag,
            "payload_offset": payload, "packed_size": packed, "expanded_size": expanded,
            "compressed": compressed,
            "previous": None if lo == 0xffff or hi == 0xffff else (hi << 16) | lo}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--rom", required=True, type=Path)
    parser.add_argument("--lh5-library", required=True, type=Path)
    parser.add_argument("--archive-members", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--report", required=True, type=Path)
    args = parser.parse_args()
    data = args.rom.read_bytes()
    if digest(data) != ROM_SHA256:
        raise ValueError("ROM identity changed; directory selection must be reviewed")
    if args.output.exists() or args.report.exists():
        raise ValueError("Output and report must be new paths")
    candidates = [p for p in range(len(data) - 22)
                  if data[p:p + 8] == b"AMIBIOSC" and data[p + 8:p + 12].isdigit()]
    if len(candidates) != 1:
        raise ValueError(f"Expected one version-bearing directory header: {candidates}")
    abc = candidates[0]
    lo, hi = struct.unpack_from("<HH", data, abc + 18)
    offset, seen, records = (hi << 16) | lo, set(), []
    while offset is not None:
        if offset in seen or len(seen) >= 128:
            raise ValueError("Cyclic or excessive module chain")
        seen.add(offset)
        record = module_record(data, offset)
        records.append(record)
        offset = record["previous"]
    # The separately stored module-55 EBBLK is independently validated by its
    # part header and exact match to the supplied archive member.
    m55 = (args.archive_members / "55").read_bytes()
    positions = [p for p in range(len(data) - len(m55) + 1) if data.startswith(m55, p)]
    if not positions:
        raise ValueError("No exact module-55 match in the ROM")
    copies = [module_record(data, position - 12) for position in positions]
    if any(copy["id"] != 0x55 or copy["compressed"] or copy["expanded_size"] != len(m55)
           for copy in copies):
        raise ValueError("Module 55's preceding part headers do not validate")
    extra = copies[0]
    extra["identical_payload_copies"] = positions
    records.append(extra)
    library = ctypes.CDLL(str(args.lh5_library.resolve()))
    decode = library.LH5Decode
    decode.argtypes = [ctypes.c_void_p, ctypes.c_int, ctypes.c_void_p, ctypes.c_int]
    decode.restype = ctypes.c_int
    archive = []
    for path in sorted(args.archive_members.iterdir()):
        if not path.is_file() or path.is_symlink():
            raise ValueError(f"Unexpected archive input: {path}")
        archive.append((path.name, path.read_bytes()))
    args.output.mkdir(parents=True)
    for index, record in enumerate(records):
        start = record["payload_offset"]
        packed = data[start:start + record["packed_size"]]
        if record["compressed"]:
            source = ctypes.create_string_buffer(packed)
            # Guard room also accommodates the decoder's final match copy.
            target = ctypes.create_string_buffer(record["expanded_size"] + 512)
            if decode(source, len(packed), target, record["expanded_size"]):
                raise ValueError(f"LH5 decode failed at {start:#x}")
            decoded = target.raw[:record["expanded_size"]]
        else:
            decoded = packed
        filename = f'module_{record["id"]:02x}_{record["tag"]:08x}_{index:02d}.bin'
        with (args.output / filename).open("xb") as output:
            output.write(decoded)
        record.update(filename=filename, sha256=digest(decoded),
                      exact_archive_labels=[name for name, content in archive if content == decoded])
    report = {"rom_sha256": ROM_SHA256, "directory_offset": abc,
              "directory_version": data[abc + 8:abc + 12].decode("ascii"),
              "decoder_project": "https://github.com/coreboot/bios_extract",
              "decoder_commit": DECODER_COMMIT,
              "decoder_library_sha256": digest(args.lh5_library.read_bytes()),
              "records": records,
              "limitations": ["Static directory/decompression evidence, not runtime behavior",
                              "Module IDs are recovered part-header bytes; archive labels are untrusted",
                              "This does not inventory every standalone bootblock/data region"]}
    args.report.parent.mkdir(parents=True, exist_ok=True)
    with args.report.open("x") as output:
        json.dump(report, output, indent=2)
        output.write("\n")
    print(json.dumps({"modules": len(records), "matched_payloads": sum(bool(r["exact_archive_labels"]) for r in records),
                      "missing_from_archive": [{"id": hex(r["id"]), "size": r["expanded_size"],
                                               "filename": r["filename"]}
                                              for r in records if not r["exact_archive_labels"]]}, indent=2))


if __name__ == "__main__":
    main()

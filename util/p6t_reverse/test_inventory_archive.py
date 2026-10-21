#!/usr/bin/env python3
"""Regression checks for archive write boundaries and bounded format parsing."""

import io
import json
from pathlib import Path
import struct
import subprocess
import sys
import tarfile
import tempfile
import unittest

import inventory_archive as inventory
import derive_analysis as derive


class ArchiveChecks(unittest.TestCase):
    def run_inventory(self, archive, root):
        return subprocess.run([sys.executable, str(Path(inventory.__file__)), str(archive),
            "--output", str(root / "extracted"), "--manifest", str(root / "manifest.json"),
            "--summary", str(root / "summary.md")], capture_output=True, text=True)

    def test_unsafe_archive_paths_do_not_create_output(self):
        for name in ("/absolute", "../outside", "safe/../../outside", "C:\\outside"):
            with self.subTest(name=name), tempfile.TemporaryDirectory() as tmp:
                root = Path(tmp)
                archive = root / "input.tar"
                with tarfile.open(archive, "w") as tar:
                    member = tarfile.TarInfo(name)
                    member.size = 4
                    tar.addfile(member, io.BytesIO(b"test"))
                result = self.run_inventory(archive, root)
                self.assertNotEqual(result.returncode, 0)
                self.assertFalse((root / "extracted").exists())

    def test_links_and_special_members_are_rejected_before_extraction(self):
        for member_type in (tarfile.SYMTYPE, tarfile.LNKTYPE, tarfile.FIFOTYPE):
            with self.subTest(member_type=member_type), tempfile.TemporaryDirectory() as tmp:
                root = Path(tmp)
                archive = root / "input.tar"
                with tarfile.open(archive, "w") as tar:
                    member = tarfile.TarInfo("link")
                    member.type, member.linkname = member_type, "outside"
                    tar.addfile(member)
                result = self.run_inventory(archive, root)
                self.assertNotEqual(result.returncode, 0)
                self.assertFalse((root / "extracted").exists())

    def test_repeated_extraction_preserves_existing_file(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            archive = root / "input.tar"
            with tarfile.open(archive, "w") as tar:
                member = tarfile.TarInfo("binary")
                member.size = 4
                tar.addfile(member, io.BytesIO(b"test"))
            self.assertEqual(self.run_inventory(archive, root).returncode, 0)
            digest = json.loads((root / "manifest.json").read_text())["members"][0]["sha256"]
            self.assertEqual(digest, inventory.sha256(b"test"))
            (root / "extracted" / "binary").write_bytes(b"user change")
            self.assertNotEqual(self.run_inventory(archive, root).returncode, 0)
            self.assertEqual((root / "extracted" / "binary").read_bytes(), b"user change")

    def test_duplicate_and_parent_file_names_rejected(self):
        for names in (("same", "same"), ("parent", "parent/child")):
            with self.subTest(names=names), tempfile.TemporaryDirectory() as tmp:
                root = Path(tmp)
                archive = root / "input.tar"
                with tarfile.open(archive, "w") as tar:
                    for name in names:
                        member = tarfile.TarInfo(name)
                        tar.addfile(member, io.BytesIO(b""))
                self.assertNotEqual(self.run_inventory(archive, root).returncode, 0)
                self.assertFalse((root / "extracted").exists())


class FormatChecks(unittest.TestCase):
    def minimal_pe(self):
        data = bytearray(528)
        data[:2] = b"MZ"
        struct.pack_into("<I", data, 0x3c, 0x80)
        data[0x80:0x84] = b"PE\0\0"
        struct.pack_into("<HH", data, 0x84, 0x14c, 1)
        struct.pack_into("<H", data, 0x94, 224)
        optional = 0x98
        struct.pack_into("<H", data, optional, 0x10b)
        struct.pack_into("<I", data, optional + 16, 4096)
        struct.pack_into("<II", data, optional + 56, 8192, 512)
        section = optional + 224
        data[section:section + 5] = b".text"
        struct.pack_into("<IIII", data, section + 8, 16, 4096, 16, 512)
        return bytes(data)

    def test_pe_embedding_preserves_offsets(self):
        data = self.minimal_pe()
        pe = inventory.pe_at(b"wrapper" + data + b"trailer", 7)
        self.assertEqual(pe["offset"], 7)
        self.assertEqual(pe["file_extent"], len(data))
        self.assertEqual(pe["sha256_of_bounded_extent"], inventory.sha256(data))

    def test_truncated_pe_and_out_of_bounds_section_are_rejected(self):
        data = self.minimal_pe()
        for end in (20, 200, 400, 527):
            with self.subTest(end=end):
                self.assertIsNone(inventory.pe_at(data[:end], 0))
        modified = bytearray(data)
        struct.pack_into("<I", modified, 0x178 + 20, 0x10000000)
        self.assertIsNone(inventory.pe_at(modified, 0))

    def test_microcode_checksum_is_required(self):
        data = bytearray(2048)
        struct.pack_into("<12I", data, 0, 1, 2, 0x01012000, 0x106a5, 0, 1, 1, 0, 0, 0, 0, 0)
        checksum = (-sum(struct.unpack("<512I", data))) & 0xffffffff
        struct.pack_into("<I", data, 16, checksum)
        self.assertEqual(len(inventory.structured_formats(data)["intel_microcode_records"]), 1)
        data[-1] ^= 1
        self.assertNotIn("intel_microcode_records", inventory.structured_formats(data))


class DerivationChecks(unittest.TestCase):
    def test_slab_payload_is_exactly_accounted_for(self):
        data = struct.pack("<HHII", 1, 20, 0x1000, 0x80000003)
        data += struct.pack("<BH", 1, 4) + b"CODE\0" + b"abc"
        layout = derive.slab_layout(data)
        self.assertEqual(layout["segments"][0]["file_offset"], 20)
        self.assertEqual(layout["segments"][0]["file_end_exclusive"], 23)
        self.assertEqual(layout["segments"][0]["sha256"], inventory.sha256(b"abc"))
        for malformed in (data[:-1], data + b"trailer"):
            with self.subTest(size=len(malformed)), self.assertRaises(ValueError):
                derive.slab_layout(malformed)

    def test_carrier_preserves_original_offset_and_cannot_load_as_executable(self):
        prefix = bytes(range(256)) * 8
        carrier, offset = derive.elf32_carrier(prefix)
        self.assertEqual(carrier[offset:offset + len(prefix)], prefix)
        self.assertEqual(struct.unpack_from("<HH", carrier, 16), (1, 3))  # ET_REL, EM_386
        self.assertEqual(struct.unpack_from("<I", carrier, 28)[0], 0)  # no program headers
        section_table = struct.unpack_from("<I", carrier, 32)[0]
        loader = struct.unpack_from("<10I", carrier, section_table + 40)
        self.assertEqual(loader[3:6], (0, offset, len(prefix)))


if __name__ == "__main__":
    unittest.main()

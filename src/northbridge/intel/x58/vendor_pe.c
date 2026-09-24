/* SPDX-License-Identifier: GPL-2.0-only */

#include <cbfs.h>
#include <console/console.h>
#include <string.h>
#include <types.h>

#include "vendor_pe.h"

#define X58_VENDOR_PE_MAX_SIZE	0x1df20

#define PE_DOS_SIGNATURE	0x5a4d
#define PE_SIGNATURE		0x00004550
#define PE_MACHINE_I386		0x014c
#define PE_OPTIONAL_MAGIC_PE32	0x010b
#define PE_RELOC_ABSOLUTE	0
#define PE_RELOC_HIGHLOW	3

/* CSI runs before MINIT, so both vendor binaries can safely share this buffer. */
static u8 vendor_pe_image[X58_VENDOR_PE_MAX_SIZE] __aligned(16);

static u16 read_le16(const u8 *p)
{
	return p[0] | ((u16)p[1] << 8);
}

static u32 read_le32(const u8 *p)
{
	return p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) |
		((u32)p[3] << 24);
}

static void write_le32(u8 *p, u32 value)
{
	p[0] = value;
	p[1] = value >> 8;
	p[2] = value >> 16;
	p[3] = value >> 24;
}

static bool range_valid(u32 offset, u32 length, u32 limit)
{
	return offset <= limit && length <= limit - offset;
}

u8 *x58_load_vendor_pe(const char *cbfs_name, size_t expected_size)
{
	u32 pe_offset;
	u32 image_base;
	u32 image_size;
	u32 entry_rva;
	u32 reloc_rva;
	u32 reloc_size;
	u32 cursor;
	u32 delta;
	size_t loaded;

	if (expected_size > sizeof(vendor_pe_image))
		return NULL;

	memset(vendor_pe_image, 0, sizeof(vendor_pe_image));
	loaded = cbfs_load(cbfs_name, vendor_pe_image, expected_size);
	if (loaded != expected_size) {
		printk(BIOS_ERR, "X58: %s has bad size %zu (expected %zu)\n",
		       cbfs_name, loaded, expected_size);
		return NULL;
	}

	pe_offset = read_le32(&vendor_pe_image[0x3c]);
	if (read_le16(vendor_pe_image) != PE_DOS_SIGNATURE ||
	    !range_valid(pe_offset, 0xa8, expected_size) ||
	    read_le32(&vendor_pe_image[pe_offset]) != PE_SIGNATURE ||
	    read_le16(&vendor_pe_image[pe_offset + 4]) != PE_MACHINE_I386 ||
	    read_le16(&vendor_pe_image[pe_offset + 24]) != PE_OPTIONAL_MAGIC_PE32) {
		printk(BIOS_ERR, "X58: %s has invalid PE32 headers\n", cbfs_name);
		return NULL;
	}

	entry_rva = read_le32(&vendor_pe_image[pe_offset + 40]);
	image_base = read_le32(&vendor_pe_image[pe_offset + 52]);
	image_size = read_le32(&vendor_pe_image[pe_offset + 80]);
	reloc_rva = read_le32(&vendor_pe_image[pe_offset + 160]);
	reloc_size = read_le32(&vendor_pe_image[pe_offset + 164]);

	if (image_size != expected_size || entry_rva >= image_size ||
	    !range_valid(reloc_rva, reloc_size, image_size)) {
		printk(BIOS_ERR, "X58: %s has unsupported PE32 layout\n", cbfs_name);
		return NULL;
	}

	delta = (u32)(uintptr_t)vendor_pe_image - image_base;
	for (cursor = reloc_rva; cursor < reloc_rva + reloc_size;) {
		const u32 page_rva = read_le32(&vendor_pe_image[cursor]);
		const u32 block_size = read_le32(&vendor_pe_image[cursor + 4]);
		u32 entry;

		if (block_size < 8 || (block_size & 1) ||
		    !range_valid(cursor, block_size, reloc_rva + reloc_size))
			return NULL;

		for (entry = cursor + 8; entry < cursor + block_size; entry += 2) {
			const u16 reloc = read_le16(&vendor_pe_image[entry]);
			const u8 type = reloc >> 12;
			const u32 target = page_rva + (reloc & 0x0fff);

			if (type == PE_RELOC_ABSOLUTE)
				continue;
			if (type != PE_RELOC_HIGHLOW ||
			    !range_valid(target, sizeof(u32), image_size))
				return NULL;
			write_le32(&vendor_pe_image[target],
				   read_le32(&vendor_pe_image[target]) + delta);
		}
		cursor += block_size;
	}

	if (cursor != reloc_rva + reloc_size)
		return NULL;

	return &vendor_pe_image[entry_rva];
}

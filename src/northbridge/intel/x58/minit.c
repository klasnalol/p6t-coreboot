/* SPDX-License-Identifier: GPL-2.0-only */

#include <cbfs.h>
#include <commonlib/helpers.h>
#include <console/console.h>
#include <device/mmio.h>
#include <device/pci_ops.h>
#include <string.h>
#include <types.h>

#include "minit.h"

#define MINIT_CBFS_NAME		"minit.bin"
#define MINIT_IMAGE_SIZE	0x1df20
#define MINIT_CONTEXT_SIZE	0x2af0
#define MINIT_POLICY_SIZE	0xc4

#define PE_DOS_SIGNATURE	0x5a4d
#define PE_SIGNATURE		0x00004550
#define PE_MACHINE_I386		0x014c
#define PE_OPTIONAL_MAGIC_PE32	0x010b
#define PE_RELOC_ABSOLUTE	0
#define PE_RELOC_HIGHLOW	3

#define X58_IOH_SYSTEM		PCI_DEV(0, 0x14, 0)
#define X58_TSEGCTRL		0xa8
#define  X58_TSEG_ENABLE	BIT(0)
#define  X58_TSEG_SIZE_SHIFT	1
#define  X58_TSEG_SIZE_MASK	7
#define  X58_TSEG_BASE_MASK	0xfff00000
#define X58_TOLM		0xd0
#define  X58_TOLM_MASK		0xfc000000

#define MINIT_TEST_BASE		(1 * MiB)
#define MINIT_TEST_DWORDS	16

/* Reconstructed module-55 policy offsets. */
#define POLICY_IOH_BUS		0x00
#define POLICY_BOOT_MODE	0x01
#define POLICY_MEMORY_RATIO	0x02
#define POLICY_SOCKET_COUNT	0x03
#define POLICY_QPI_MODE		0x04
#define POLICY_CHANNEL_COUNT	0x05
#define POLICY_DIMMS_PER_CHANNEL 0x06
#define POLICY_RANK_LIMIT	0x07
#define POLICY_ECC_MODE		0x08
#define POLICY_BOOT_RESULT	0x0a
#define POLICY_REFRESH_LIMIT	0x14
#define POLICY_MMCONFIG_BASE	0x20
#define POLICY_FEATURES		0x24
#define POLICY_TRAINING_DATA	0x4a
#define POLICY_ENABLE_MC	0x52
#define POLICY_CHANNEL0_ENABLE	0x59
#define POLICY_CHANNEL1_ENABLE	0x77
#define POLICY_CHANNEL2_ENABLE	0x95

static u8 minit_image[MINIT_IMAGE_SIZE] __aligned(16);
static u8 minit_context[MINIT_CONTEXT_SIZE] __aligned(16);

static u16 read_le16(const u8 *p)
{
	return p[0] | ((u16)p[1] << 8);
}

static u32 read_le32(const u8 *p)
{
	return p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) |
		((u32)p[3] << 24);
}

static void write_le16(u8 *p, u16 value)
{
	p[0] = value;
	p[1] = value >> 8;
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

static void build_minit_policy(u8 policy[MINIT_POLICY_SIZE])
{
	memset(policy, 0, MINIT_POLICY_SIZE);

	/* Exact cold-boot defaults built by AMIBIOS module 55. */
	policy[POLICY_IOH_BUS] = 0xff;
	policy[POLICY_BOOT_MODE] = 0;
	policy[POLICY_MEMORY_RATIO] = 0x10;
	policy[POLICY_SOCKET_COUNT] = 1;
	policy[POLICY_QPI_MODE] = 0;
	policy[POLICY_CHANNEL_COUNT] = 6;
	policy[POLICY_DIMMS_PER_CHANNEL] = 4;
	policy[POLICY_RANK_LIMIT] = 2;
	policy[POLICY_ECC_MODE] = 2;
	policy[POLICY_BOOT_RESULT] = 0;
	write_le16(&policy[POLICY_REFRESH_LIMIT], 0x1000);
	write_le32(&policy[POLICY_MMCONFIG_BASE], CONFIG_ECAM_MMCONF_BASE_ADDRESS);
	write_le32(&policy[POLICY_FEATURES], 0x01024486);

	/* Two identical timeout/voltage records from BuildAndRunMinit(). */
	policy[0x2c] = 1;
	policy[0x2d] = 6;
	policy[0x2e] = 0x46;
	policy[0x2f] = 0x14;
	write_le16(&policy[0x30], 0x05dc);
	write_le16(&policy[0x32], 0);
	write_le16(&policy[0x34], 0x0190);
	policy[0x36] = 0x46;
	policy[0x37] = 0x14;
	write_le16(&policy[0x38], 0x05dc);
	write_le16(&policy[0x3a], 0);
	write_le16(&policy[0x3c], 0x0190);

	/* A null pointer forces full training rather than saved-state restore. */
	write_le32(&policy[POLICY_TRAINING_DATA], 0);
	policy[POLICY_ENABLE_MC] = 1;
	policy[0x53] = 0;
	policy[POLICY_CHANNEL0_ENABLE] = 1;
	policy[POLICY_CHANNEL1_ENABLE] = 1;
	policy[POLICY_CHANNEL2_ENABLE] = 1;
}

static bool relocate_minit(u32 *entry_rva)
{
	const u32 pe_offset = read_le32(&minit_image[0x3c]);
	u32 image_base;
	u32 image_size;
	u32 reloc_rva;
	u32 reloc_size;
	u32 cursor;
	u32 delta;

	if (read_le16(minit_image) != PE_DOS_SIGNATURE ||
	    !range_valid(pe_offset, 0xa8, MINIT_IMAGE_SIZE) ||
	    read_le32(&minit_image[pe_offset]) != PE_SIGNATURE ||
	    read_le16(&minit_image[pe_offset + 4]) != PE_MACHINE_I386 ||
	    read_le16(&minit_image[pe_offset + 24]) != PE_OPTIONAL_MAGIC_PE32)
		return false;

	*entry_rva = read_le32(&minit_image[pe_offset + 40]);
	image_base = read_le32(&minit_image[pe_offset + 52]);
	image_size = read_le32(&minit_image[pe_offset + 80]);
	reloc_rva = read_le32(&minit_image[pe_offset + 160]);
	reloc_size = read_le32(&minit_image[pe_offset + 164]);

	if (image_size != MINIT_IMAGE_SIZE || *entry_rva >= image_size ||
	    !range_valid(reloc_rva, reloc_size, image_size))
		return false;

	delta = (u32)(uintptr_t)minit_image - image_base;
	for (cursor = reloc_rva; cursor < reloc_rva + reloc_size;) {
		const u32 page_rva = read_le32(&minit_image[cursor]);
		const u32 block_size = read_le32(&minit_image[cursor + 4]);
		u32 entry;

		if (block_size < 8 || (block_size & 1) ||
		    !range_valid(cursor, block_size, reloc_rva + reloc_size))
			return false;

		for (entry = cursor + 8; entry < cursor + block_size; entry += 2) {
			const u16 reloc = read_le16(&minit_image[entry]);
			const u8 type = reloc >> 12;
			const u32 target = page_rva + (reloc & 0x0fff);

			if (type == PE_RELOC_ABSOLUTE)
				continue;
			if (type != PE_RELOC_HIGHLOW ||
			    !range_valid(target, sizeof(u32), image_size))
				return false;
			write_le32(&minit_image[target],
				   read_le32(&minit_image[target]) + delta);
		}
		cursor += block_size;
	}

	return cursor == reloc_rva + reloc_size;
}

static bool validate_trained_memory(void)
{
	const u32 tseg = pci_read_config32(X58_IOH_SYSTEM, X58_TSEGCTRL);
	const uintptr_t tseg_base = tseg & X58_TSEG_BASE_MASK;
	const unsigned int tseg_encoding =
		(tseg >> X58_TSEG_SIZE_SHIFT) & X58_TSEG_SIZE_MASK;
	const size_t tseg_size = (512 * KiB) << tseg_encoding;
	const uintptr_t tolm = pci_read_config32(X58_IOH_SYSTEM, X58_TOLM) &
		X58_TOLM_MASK;

	printk(BIOS_INFO, "X58: TOLM=%p TSEG=%p+%zu KiB (control %08x)\n",
	       (void *)tolm, (void *)tseg_base, tseg_size / KiB, tseg);

	if (tolm < 64 * MiB || !(tseg & X58_TSEG_ENABLE) ||
	    tseg_encoding > 4 || tseg_base < MINIT_TEST_BASE + 4 * KiB ||
	    tseg_base >= tolm || tseg_size > tolm - tseg_base) {
		printk(BIOS_ERR, "X58: MINIT left an invalid DRAM/TSEG map\n");
		return false;
	}

	for (unsigned int i = 0; i < MINIT_TEST_DWORDS; i++) {
		const u32 value = 0x5aa55aa5 ^ (i * 0x01010101);

		write32p(MINIT_TEST_BASE + i * sizeof(u32), value);
	}

	for (unsigned int i = 0; i < MINIT_TEST_DWORDS; i++) {
		const u32 expected = 0x5aa55aa5 ^ (i * 0x01010101);

		if (read32p(MINIT_TEST_BASE + i * sizeof(u32)) != expected) {
			printk(BIOS_ERR, "X58: trained DRAM test failed at dword %u\n", i);
			return false;
		}
	}

	memset((void *)MINIT_TEST_BASE, 0, MINIT_TEST_DWORDS * sizeof(u32));
	return true;
}

bool x58_run_minit(void)
{
	typedef int (*minit_entry_t)(u8 *policy, u8 *context);
	u8 policy[MINIT_POLICY_SIZE] __aligned(16);
	u32 entry_rva;
	size_t loaded;
	int result;

	loaded = cbfs_load(MINIT_CBFS_NAME, minit_image, sizeof(minit_image));
	if (loaded != sizeof(minit_image)) {
		printk(BIOS_ERR, "X58: %s has bad size %zu (expected %zu)\n",
		       MINIT_CBFS_NAME, loaded, sizeof(minit_image));
		return false;
	}

	if (!relocate_minit(&entry_rva)) {
		printk(BIOS_ERR, "X58: invalid or unsupported MINIT PE image\n");
		return false;
	}

	build_minit_policy(policy);
	memset(minit_context, 0, sizeof(minit_context));
	printk(BIOS_INFO, "X58: running MINIT at %p with context %p\n",
	       &minit_image[entry_rva], minit_context);

	result = ((minit_entry_t)&minit_image[entry_rva])(policy, minit_context);
	printk(BIOS_INFO,
	       "X58: MINIT returned %d, policy status %u, context state %u/%u\n",
	       result, policy[POLICY_BOOT_RESULT], minit_context[1],
	       minit_context[2]);

	if (result || minit_context[1] == 1 || minit_context[2] ||
	    policy[POLICY_BOOT_RESULT])
		return false;

	return validate_trained_memory();
}

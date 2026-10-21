/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/io.h>
#include <commonlib/helpers.h>
#include <console/console.h>
#include <device/mmio.h>
#include <device/pci_ops.h>
#include <string.h>
#include <types.h>

#include "minit.h"
#include "minit_policy.h"
#include "vendor_pe.h"

#define MINIT_CBFS_NAME		"minit.bin"
#define MINIT_IMAGE_SIZE	0x1df20
#define MINIT_CONTEXT_SIZE	0x2af0

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

#define POLICY_BOOT_RESULT	0x0a

static u8 minit_context[MINIT_CONTEXT_SIZE] __aligned(16);

static u8 read_base_cmos(u8 offset)
{
	outb(offset, 0x70);
	(void)inb(0x61);
	return inb(0x71);
}

static u8 read_extended_cmos(u8 offset)
{
	outb(offset, 0x72);
	return inb(0x73);
}

static void read_minit_cmos_settings(struct x58_minit_cmos_settings *settings)
{
	*settings = (struct x58_minit_cmos_settings){ 0 };
	settings->cmos_8e = read_base_cmos(0x8e);
	if (!(settings->cmos_8e & 0xc0)) {
		settings->cmos_58 = read_base_cmos(0x58);
		if (!(settings->cmos_58 & 1))
			settings->cmos_58 |= read_base_cmos(0x58) & 2;
		if (!(settings->cmos_58 & 3)) {
			settings->extended_80 = read_extended_cmos(0x80);
			settings->extended_81 = read_extended_cmos(0x81) & 3;
			settings->extended_82 = read_extended_cmos(0x82);
			settings->extended_81 |= read_extended_cmos(0x81) & 0x40;
		}
	}
	/* The original wrapper performs these vendor-byte probes before the ratio read. */
	if (pci_read_config8(PCI_DEV(0xff, 2, 4), 0) == 0xff)
		(void)pci_read_config8(PCI_DEV(0xfe, 2, 4), 0);
	settings->extended_8e = read_extended_cmos(0x8e);
}

enum x58_minit_result x58_validate_trained_memory(void)
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
		return X58_MINIT_ERROR_MEMORY_MAP;
	}

	for (unsigned int i = 0; i < MINIT_TEST_DWORDS; i++) {
		const u32 value = 0x5aa55aa5 ^ (i * 0x01010101);

		write32p(MINIT_TEST_BASE + i * sizeof(u32), value);
	}

	for (unsigned int i = 0; i < MINIT_TEST_DWORDS; i++) {
		const u32 expected = 0x5aa55aa5 ^ (i * 0x01010101);

		if (read32p(MINIT_TEST_BASE + i * sizeof(u32)) != expected) {
			printk(BIOS_ERR, "X58: trained DRAM test failed at dword %u\n", i);
			return X58_MINIT_ERROR_MEMORY_TEST;
		}
	}

	memset((void *)MINIT_TEST_BASE, 0, MINIT_TEST_DWORDS * sizeof(u32));
	return X58_MINIT_SUCCESS;
}

enum x58_minit_result x58_run_minit(u32 boot_state, u8 *transition)
{
	typedef int (*minit_entry_t)(u8 *policy, u8 *context);
	u8 policy[X58_MINIT_POLICY_SIZE] __aligned(16);
	struct x58_minit_cmos_settings settings;
	u8 *entry;
	int result;

	*transition = 0;
	entry = x58_load_vendor_pe(MINIT_CBFS_NAME, MINIT_IMAGE_SIZE);
	if (!entry)
		return X58_MINIT_ERROR_IMAGE;

	read_minit_cmos_settings(&settings);
	/* Coreboot has no AMI saved-training record list at 0xffe50000. */
	if (x58_build_minit_policy(policy, CONFIG_ECAM_MMCONF_BASE_ADDRESS,
				   boot_state, 0, &settings)) {
		outb(0x8e, 0x72);
		outb(0x30, 0x73);
	}
	memset(minit_context, 0, sizeof(minit_context));
	printk(BIOS_INFO, "X58: running MINIT at %p with context %p\n",
	       entry, minit_context);

	result = ((minit_entry_t)entry)(policy, minit_context);
	*transition = policy[POLICY_BOOT_RESULT];
	printk(BIOS_INFO,
	       "X58: MINIT returned %d, policy status %u, context state %u/%u\n",
	       result, policy[POLICY_BOOT_RESULT], minit_context[1],
	       minit_context[2]);

	if (result)
		return X58_MINIT_ERROR_CALL;
	if (minit_context[1] == 1)
		return X58_MINIT_ERROR_CONTEXT_STATE;
	if (minit_context[2])
		return X58_MINIT_ERROR_CONTEXT_DETAIL;
	if (policy[POLICY_BOOT_RESULT])
		return X58_MINIT_ERROR_POLICY;

	return X58_MINIT_SUCCESS;
}

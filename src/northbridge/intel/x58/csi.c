/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/cpuid.h>
#include <arch/io.h>
#include <console/console.h>
#include <device/pci_ops.h>
#include <types.h>

#include "csi.h"
#include "csi_policy.h"
#include "vendor_pe.h"

#define CSI_CBFS_NAME		"csi.bin"
#define CSI_IMAGE_SIZE		0x7b60
#define CSI_STATUS_FLAGS	0x443
#define CSI_STATUS_CLASS	0x447
#define CSI_STATUS_DETAIL	0x44c
#define CSI_NEGOTIATED_SPEED	0x44d

static u32 read_le32(const u8 *p)
{
	return p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) |
		((u32)p[3] << 24);
}

static bool csi_status_is_fatal(const u8 policy[X58_CSI_POLICY_SIZE])
{
	const u32 flags = read_le32(&policy[CSI_STATUS_FLAGS]);
	const u8 status_class = policy[CSI_STATUS_CLASS];

	if (!status_class)
		return false;
	if (flags & (BIT(5) | BIT(6) | BIT(8)))
		return true;
	return (flags & BIT(7)) && policy[6];
}

static u8 read_base_cmos(u8 offset)
{
	outb(offset, 0x70);
	/* Match the original module's port-0x61 read between index and data. */
	(void)inb(0x61);
	return inb(0x71);
}

static u8 read_extended_cmos(u8 offset)
{
	outb(offset, 0x72);
	return inb(0x73);
}

static void read_csi_cmos_settings(struct x58_csi_cmos_settings *settings)
{
	*settings = (struct x58_csi_cmos_settings){ 0 };
	settings->cmos_58 = read_base_cmos(0x58);
	if (settings->cmos_58 & 3)
		return;
	settings->cmos_8e = read_base_cmos(0x8e);
	if (settings->cmos_8e & 0xc0)
		return;
	settings->extended_89 = read_extended_cmos(0x89);
	settings->extended_88 = read_extended_cmos(0x88);
	settings->extended_80 = read_extended_cmos(0x80);
	settings->extended_82 = read_extended_cmos(0x82);
}

enum x58_csi_result x58_run_csi(struct x58_csi_status *status, u32 boot_state)
{
	typedef void (*csi_entry_t)(u8 *policy, u8 *mirror);
	u8 policy[X58_CSI_POLICY_SIZE] __aligned(16);
	u8 *entry;
	u8 revision;
	struct x58_csi_cmos_settings settings;
	u32 progress;
	u32 flags;

	*status = (struct x58_csi_status){ 0 };
	entry = x58_load_vendor_pe(CSI_CBFS_NAME, CSI_IMAGE_SIZE);
	if (!entry)
		return X58_CSI_ERROR_IMAGE;

	revision = pci_read_config8(PCI_DEV(0, 0, 0), 0x08);
	x58_build_csi_policy(policy, revision, CONFIG_ECAM_MMCONF_BASE_ADDRESS);
	x58_set_csi_boot_state(policy, boot_state);
	read_csi_cmos_settings(&settings);
	x58_apply_csi_cmos_policy(policy, revision, cpuid_eax(1) & 0xffff,
				  &settings);
	printk(BIOS_INFO, "X58: running CSI init at %p with policy %p\n",
	       entry, policy);
	((csi_entry_t)entry)(policy, policy);

	flags = read_le32(&policy[CSI_STATUS_FLAGS]);
	progress = pci_read_config32(PCI_DEV(0, 0x14, 1), 0x9c);
	status->flags = flags;
	status->status_class = policy[CSI_STATUS_CLASS];
	status->detail = policy[CSI_STATUS_DETAIL];
	status->speed = policy[CSI_NEGOTIATED_SPEED];
	status->progress = ((progress >> 24) << 8) | ((progress >> 16) & 0xff);
	printk(BIOS_INFO,
	       "X58: CSI flags=%08x class=%u detail=%u speed=%u progress=%08x\n",
	       flags, policy[CSI_STATUS_CLASS], policy[CSI_STATUS_DETAIL],
	       policy[CSI_NEGOTIATED_SPEED], progress);

	return csi_status_is_fatal(policy) ? X58_CSI_ERROR_STATUS :
		X58_CSI_SUCCESS;
}

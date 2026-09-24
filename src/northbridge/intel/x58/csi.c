/* SPDX-License-Identifier: GPL-2.0-only */

#include <commonlib/helpers.h>
#include <console/console.h>
#include <device/pci_ops.h>
#include <string.h>
#include <types.h>

#include "csi.h"
#include "vendor_pe.h"

#define CSI_CBFS_NAME		"csi.bin"
#define CSI_IMAGE_SIZE		0x7b60
#define CSI_POLICY_SIZE		0x450
#define CSI_MMCONFIG_MIRROR	0x43b

#define CSI_STATUS_FLAGS	0x443
#define CSI_STATUS_CLASS	0x447
#define CSI_STATUS_DETAIL	0x44c
#define CSI_NEGOTIATED_SPEED	0x44d

struct csi_group_policy {
	u16 base;
	u8 route_value;
	bool extended;
};

static const struct csi_group_policy csi_groups[] = {
	{ 0x014, 0x0a, false },
	{ 0x068, 0x0a, false },
	{ 0x0c5, 0x0a, false },
	{ 0x119, 0x0a, false },
	{ 0x176, 0x0e, true },
	{ 0x1ca, 0x0e, true },
};

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

static void build_csi_port_policy(u8 *port, u8 route_value)
{
	port[0] = 1;
	write_le32(&port[1], route_value);
	port[5] = 1;
	port[6] = 0xc8;
	port[7] = 1;
	port[8] = 0x0a;
	port[9] = 1;
	port[10] = 8;
	port[11] = 1;
	port[12] = 1;
}

static void build_csi_policy(u8 policy[CSI_POLICY_SIZE])
{
	const u8 revision = pci_read_config8(PCI_DEV(0, 0, 0), 0x08) & 0x7f;

	memset(policy, 0, CSI_POLICY_SIZE);
	write_le32(&policy[0], CONFIG_ECAM_MMCONF_BASE_ADDRESS);
	/* Module 55 supplies the same base again in the DLL's tail context. */
	write_le32(&policy[CSI_MMCONFIG_MIRROR],
		   CONFIG_ECAM_MMCONF_BASE_ADDRESS);
	policy[4] = 0xff;
	policy[6] = 1;
	policy[0x0e] = 1;
	policy[0x0f] = 2;

	for (unsigned int i = 0; i < ARRAY_SIZE(csi_groups); i++) {
		u8 *group = &policy[csi_groups[i].base];

		group[0] = 1;
		group[5] = 1;
		group[6] = 1;
		group[7] = 0x11;
		group[8] = 1;
		group[9] = 1;
		if (csi_groups[i].extended) {
			group[13] = 7;
			group[14] = 7;
		}

		for (unsigned int port = 0; port < 3; port++)
			build_csi_port_policy(&group[0x0f + port * 0x17],
					      csi_groups[i].route_value);
	}

	/* Matches the revision-dependent branch in BuildAndRunCsiInit(). */
	if (revision <= 0x13) {
		static const u16 pair_offsets[] = {
			0x01c, 0x070, 0x0cd, 0x121, 0x17e, 0x1d2,
		};

		for (unsigned int i = 0; i < ARRAY_SIZE(pair_offsets); i++) {
			policy[pair_offsets[i]] = 0;
			policy[pair_offsets[i] + 1] = 0;
		}
	}
	if (revision >= 0x10)
		policy[0x226] = 1;
}

static bool csi_status_is_fatal(const u8 policy[CSI_POLICY_SIZE])
{
	const u32 flags = read_le32(&policy[CSI_STATUS_FLAGS]);
	const u8 status_class = policy[CSI_STATUS_CLASS];

	if (!status_class)
		return false;
	if (flags & (BIT(5) | BIT(6) | BIT(8)))
		return true;
	return (flags & BIT(7)) && policy[6];
}

enum x58_csi_result x58_run_csi(void)
{
	typedef void (*csi_entry_t)(u8 *policy, u8 *mirror);
	u8 policy[CSI_POLICY_SIZE] __aligned(16);
	u8 *entry;
	u32 progress;
	u32 flags;

	entry = x58_load_vendor_pe(CSI_CBFS_NAME, CSI_IMAGE_SIZE);
	if (!entry)
		return X58_CSI_ERROR_IMAGE;

	build_csi_policy(policy);
	printk(BIOS_INFO, "X58: running CSI init at %p with policy %p\n",
	       entry, policy);
	((csi_entry_t)entry)(policy, policy);

	flags = read_le32(&policy[CSI_STATUS_FLAGS]);
	progress = pci_read_config32(PCI_DEV(0, 0x14, 1), 0x9c);
	printk(BIOS_INFO,
	       "X58: CSI flags=%08x class=%u detail=%u speed=%u progress=%08x\n",
	       flags, policy[CSI_STATUS_CLASS], policy[CSI_STATUS_DETAIL],
	       policy[CSI_NEGOTIATED_SPEED], progress);

	return csi_status_is_fatal(policy) ? X58_CSI_ERROR_STATUS :
		X58_CSI_SUCCESS;
}

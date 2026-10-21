/* SPDX-License-Identifier: GPL-2.0-only */

#include <commonlib/helpers.h>
#include <string.h>
#include <types.h>

#include "csi_policy.h"

#define CSI_MMCONFIG_MIRROR 0x43b

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
	/* The stock revision loop has decremented CL to zero before the tail writes. */
}

void x58_build_csi_policy(u8 policy[X58_CSI_POLICY_SIZE], u8 revision,
			  u32 mmconfig_base)
{
	memset(policy, 0, X58_CSI_POLICY_SIZE);
	write_le32(&policy[0], mmconfig_base);
	/* Module 55 supplies the same base again in the DLL's tail context. */
	write_le32(&policy[CSI_MMCONFIG_MIRROR], mmconfig_base);
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

	if (revision >= 0x10)
		policy[0x226] = 1;
	else
		policy[8] = 1;
}

void x58_set_csi_boot_state(u8 policy[X58_CSI_POLICY_SIZE], u8 state)
{
	policy[0x0b] = state;
}

void x58_apply_csi_cmos_policy(u8 policy[X58_CSI_POLICY_SIZE], u8 revision,
			       u16 cpu_signature,
			       const struct x58_csi_cmos_settings *settings)
{
	/* The stock module leaves the initial 1:1 port pairs intact on this path. */
	if (!(settings->cmos_58 & 3) && !(settings->cmos_8e & 0xc0)) {
		static const u16 pair_offsets[] = {
			0x01c, 0x070, 0x0cd, 0x121, 0x17e, 0x1d2,
		};
		u8 first = settings->extended_82 & 1;
		u8 second = first;

		if ((u8)(settings->extended_89 ^ settings->extended_88) == 0xff)
			policy[7] = settings->extended_88 & 0x3f;
		else
			policy[7] = (settings->extended_80 & 0x0e) >> 1;

		if (revision <= 0x13) {
			first = 0;
			if (revision < 0x13)
				second = 0;
		}
		for (unsigned int i = 0; i < ARRAY_SIZE(pair_offsets); i++) {
			policy[pair_offsets[i]] = first;
			policy[pair_offsets[i] + 1] = second;
		}
		policy[6] = settings->extended_80 & 1;
	}

	if (cpu_signature == 0x6a0)
		policy[6] = 0;
	if (revision < 0x10 && !policy[7])
		policy[7] = 1;
}

/* SPDX-License-Identifier: GPL-2.0-only */

#include <string.h>
#include <types.h>

#include "minit_policy.h"

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

bool x58_build_minit_policy(u8 policy[X58_MINIT_POLICY_SIZE], u32 mmconfig_base,
			    u32 boot_state, u32 training_pointer,
			    const struct x58_minit_cmos_settings *settings)
{
	u32 flags = 0x01024486;
	const bool clamp = settings->extended_8e > 0x30;
	const u8 extended_8e = clamp ? 0x30 : settings->extended_8e;

	memset(policy, 0, X58_MINIT_POLICY_SIZE);
	policy[0] = 0xff;
	/* The wrapper overwrites its initial 0x10 with NEG AL; AND AL,0x3f. */
	policy[2] = (u8)-extended_8e & 0x3f;
	policy[3] = 1;
	policy[5] = 6;
	policy[6] = 4;
	policy[7] = 2;
	policy[8] = 2;
	policy[0x0a] = boot_state;
	write_le16(&policy[0x14], 0x1000);
	write_le32(&policy[0x20], mmconfig_base);
	if (boot_state)
		flags |= 0x00040000;

	if (!(settings->cmos_8e & 0xc0) && !(settings->cmos_58 & 3)) {
		policy[4] = (settings->extended_80 & 0xe0) >> 5;
		policy[1] = settings->extended_81 & 3;
		flags = (flags & ~6U) | (settings->extended_82 & 6);
		if (settings->extended_81 & 0x40)
			policy[5] = 3;
		else
			flags &= ~0x00004000U;
	}
	write_le32(&policy[0x24], flags);
	policy[0x2c] = 1;
	policy[0x2d] = 6;
	policy[0x2e] = 0x46;
	policy[0x2f] = 0x14;
	write_le16(&policy[0x30], 0x05dc);
	write_le16(&policy[0x34], 0x0190);
	policy[0x36] = 0x46;
	policy[0x37] = 0x14;
	write_le16(&policy[0x38], 0x05dc);
	write_le16(&policy[0x3c], 0x0190);
	write_le32(&policy[0x4a], training_pointer);
	policy[0x52] = 1;
	policy[0x59] = 1;
	policy[0x77] = 1;
	policy[0x95] = 1;
	return clamp;
}

/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_MINIT_POLICY_H
#define NORTHBRIDGE_INTEL_X58_MINIT_POLICY_H

#include <types.h>

#define X58_MINIT_POLICY_SIZE 0xc4

struct x58_minit_cmos_settings {
	u8 cmos_58;
	u8 cmos_8e;
	u8 extended_80;
	u8 extended_81;
	u8 extended_82;
	u8 extended_8e;
};

/*
 * Build the module-55 MINIT input policy without hardware accesses.
 * Return true when the caller must clamp extended CMOS byte 0x8e to 0x30.
 * The policy already uses the clamped value when this return value is true.
 */
bool x58_build_minit_policy(u8 policy[X58_MINIT_POLICY_SIZE], u32 mmconfig_base,
			    u32 boot_state, u32 training_pointer,
			    const struct x58_minit_cmos_settings *settings);

#endif

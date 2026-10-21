/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_CSI_POLICY_H
#define NORTHBRIDGE_INTEL_X58_CSI_POLICY_H

#include <types.h>

#define X58_CSI_POLICY_SIZE 0x450

struct x58_csi_cmos_settings {
	u8 cmos_58;
	u8 cmos_8e;
	u8 extended_80;
	u8 extended_82;
	u8 extended_88;
	u8 extended_89;
};

void x58_build_csi_policy(u8 policy[X58_CSI_POLICY_SIZE], u8 revision,
			  u32 mmconfig_base);
void x58_set_csi_boot_state(u8 policy[X58_CSI_POLICY_SIZE], u8 state);
void x58_apply_csi_cmos_policy(u8 policy[X58_CSI_POLICY_SIZE], u8 revision,
			       u16 cpu_signature,
			       const struct x58_csi_cmos_settings *settings);

#endif

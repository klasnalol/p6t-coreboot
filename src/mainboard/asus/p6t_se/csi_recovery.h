/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef MAINBOARD_ASUS_P6T_SE_CSI_RECOVERY_H
#define MAINBOARD_ASUS_P6T_SE_CSI_RECOVERY_H

#include <types.h>

/* Return true after requesting the original CF9 reset; the caller must halt. */
bool p6t_se_csi_postcall(u8 status_class, u8 detail, u32 flags);
/* Return true when module 55's accumulated state requires reset or halt. */
bool p6t_se_finish_training(u32 state);

#endif

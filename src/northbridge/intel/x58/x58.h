/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_X58_H
#define NORTHBRIDGE_INTEL_X58_X58_H

#include <types.h>

/* Mainboard callback providing the six DDR3 SPD EEPROM addresses. */
void mb_get_spd_map(u8 spd_map[6]);

#endif /* NORTHBRIDGE_INTEL_X58_X58_H */

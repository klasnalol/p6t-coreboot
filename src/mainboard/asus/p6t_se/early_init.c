/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "beep.h"

#include <bootblock_common.h>
#include <post.h>
#include <types.h>
#include <northbridge/intel/x58/x58.h>
#include <superio/winbond/common/winbond.h>
#include <superio/winbond/w83667hg-a/w83667hg-a.h>

#define SERIAL_DEV PNP_DEV(0x2e, W83667HG_A_SP1)

void bootblock_mainboard_early_init(void)
{
	post_code(0xa0);
	p6t_se_beep(1);
	winbond_enable_serial(SERIAL_DEV, CONFIG_TTYS0_BASE);
	post_code(0xa1);
	p6t_se_beep(2);
}


void bootblock_mainboard_init(void)
{
	post_code(0xa2);
	p6t_se_beep(3);
}

/* Stock P6T SE exposes six DDR3 SPD EEPROMs at 0x50..0x55. */
void mb_get_spd_map(u8 spd_map[6])
{
	spd_map[0] = 0x50;
	spd_map[1] = 0x51;
	spd_map[2] = 0x52;
	spd_map[3] = 0x53;
	spd_map[4] = 0x54;
	spd_map[5] = 0x55;
}

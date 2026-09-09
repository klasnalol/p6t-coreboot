/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/romstage.h>
#include <console/console.h>
#include <halt.h>
#include <post.h>

#include "../../../mainboard/asus/p6t_se/beep.h"

void mainboard_romstage_entry(void)
{
	post_code(0xe0);
	p6t_se_beep(3);

	printk(BIOS_EMERG,
	       "P6T SE/X58: reached romstage with CAR alive\n");

	post_code(0xe1);
	p6t_se_beep(4);

	die("P6T SE/X58: DRAM initialization is not implemented yet\n");
}

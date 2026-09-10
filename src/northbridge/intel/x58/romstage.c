/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/romstage.h>
#include <console/console.h>
#include <device/smbus_host.h>
#include <halt.h>
#include <post.h>
#include <types.h>

#include "../../../mainboard/asus/p6t_se/beep.h"

#define SPD_ADDR	0x50
#define SPD_TEST_BYTES	16
#define SPD_TYPE_BYTE	2
#define SPD_TYPE_DDR3	0x0b

void mainboard_romstage_entry(void)
{
	u8 spd[SPD_TEST_BYTES];
	uintptr_t base;
	int value;
	int i;

	post_code(0xe0);

	printk(BIOS_EMERG,
	       "P6T SE/X58: starting ICH10 SMBus/SPD test\n");

	/*
	 * Programs the ICH10 SMBus I/O BAR, enables the host controller
	 * and resets its transaction state.
	 *
	 * If the controller is not visible at PCI 00:1f.3,
	 * enable_smbus() dies before the 2-beep checkpoint.
	 */
	enable_smbus();
	base = smbus_base();

	printk(BIOS_EMERG,
	       "P6T SE/X58: SMBus enabled at %p\n",
	       (void *)base);

	post_code(0xe2);
	p6t_se_beep(2);

	/*
	 * Read the first 16 bytes of the EEPROM at SMBus address 0x50.
	 */
	for (i = 0; i < SPD_TEST_BYTES; i++) {
		value = do_smbus_read_byte(base, SPD_ADDR, i);

		if (value < 0) {
			printk(BIOS_EMERG,
			       "P6T SE/X58: SPD 0x%02x read failed "
			       "at byte %d, error %d\n",
			       SPD_ADDR, i, value);

			post_code(0xef);
			p6t_se_beep(1);

			die("P6T SE/X58: SPD read failed\n");
		}

		spd[i] = (u8)value;
	}

	/*
	 * 3 beeps means all 16 SMBus transactions completed.
	 */
	post_code(0xe3);
	p6t_se_beep(3);

	printk(BIOS_EMERG, "P6T SE/X58: SPD 0x50 bytes 00-0f:");
	for (i = 0; i < SPD_TEST_BYTES; i++)
		printk(BIOS_EMERG, " %02x", spd[i]);
	printk(BIOS_EMERG, "\n");

	/*
	 * JEDEC SPD byte 2 is the fundamental memory type.
	 * 0x0b = DDR3 SDRAM.
	 */
	printk(BIOS_EMERG,
	       "P6T SE/X58: SPD memory type byte = 0x%02x\n",
	       spd[SPD_TYPE_BYTE]);

	if (spd[SPD_TYPE_BYTE] != SPD_TYPE_DDR3) {
		printk(BIOS_EMERG,
		       "P6T SE/X58: expected DDR3 SPD type 0x0b\n");

		post_code(0xee);
		p6t_se_beep(1);

		die("P6T SE/X58: unexpected SPD memory type\n");
	}

	/*
	 * 4 beeps means:
	 *
	 *   ICH10 SMBus works
	 *   address 0x50 responds
	 *   bytes 0..15 were readable
	 *   SPD byte 2 identifies DDR3
	 */
	post_code(0xe4);
	p6t_se_beep(4);

	printk(BIOS_EMERG,
	       "P6T SE/X58: SPD 0x50 DDR3 read test PASSED\n");

	die("P6T SE/X58: SPD milestone reached; DRAM init next\n");
}

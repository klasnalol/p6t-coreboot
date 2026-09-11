/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/io.h>
#include <arch/romstage.h>
#include <console/console.h>
#include <device/pci_ops.h>
#include <device/smbus_host.h>
#include <halt.h>
#include <post.h>
#include <types.h>

#include "../../../mainboard/asus/p6t_se/beep.h"
#include "minit_internal.h"

#define SPD_ADDR		0x50
#define SPD_TEST_BYTES		16
#define SPD_TYPE_BYTE		2
#define SPD_TYPE_DDR3		0x0b

/*
 * P6T SE stock BIOS values recovered from MINITDLL.
 *
 * ICH10 LPC = 00:1f.0
 *
 * PCI config:
 *   0x40 PMBASE
 *   0x44 ACPI_CNTL
 *   0x48 GPIOBASE
 *   0x4c GPIO_CNTL
 */
#define P6T_PMBASE		0x0800
#define P6T_GPIOBASE		0x0500

#define LPC_PMBASE		0x40
#define LPC_ACPI_CNTL		0x44
#define LPC_GPIOBASE		0x48
#define LPC_GPIO_CNTL		0x4c

/*
 * ICH10 GPIO bank 2 registers.
 * These correspond directly to the accesses recovered from
 * the ASUS P6T SE stock MINITDLL.
 */
#define GP_IO_USE_SEL2		0x30
#define GP_IO_SEL2		0x34
#define GP_LVL2			0x38

static void p6t_se_setup_stock_ich10_bases(void)
{
	const pci_devfn_t lpc = PCI_DEV(0, 0x1f, 0);
	u8 reg8;

	printk(BIOS_EMERG,
	       "P6T SE: programming stock PM/GPIO base addresses\n");

	/* Stock P6T SE: PMBASE = 0x800. */
	pci_write_config32(lpc, LPC_PMBASE, P6T_PMBASE | 1);

	/* Enable ACPI/PM I/O decoding. */
	pci_write_config8(lpc, LPC_ACPI_CNTL, 0x80);

	/* Stock P6T SE: GPIOBASE = 0x500. */
	pci_write_config32(lpc, LPC_GPIOBASE, P6T_GPIOBASE | 1);

	/* Enable GPIO I/O space. */
	reg8 = pci_read_config8(lpc, LPC_GPIO_CNTL);
	reg8 |= 0x10;
	pci_write_config8(lpc, LPC_GPIO_CNTL, reg8);

	printk(BIOS_EMERG,
	       "P6T SE: PMBASE=%08x GPIOBASE=%08x GPIO_CNTL=%02x\n",
	       pci_read_config32(lpc, LPC_PMBASE),
	       pci_read_config32(lpc, LPC_GPIOBASE),
	       pci_read_config8(lpc, LPC_GPIO_CNTL));
}

/*
 * Reverse engineered from ASUS MINITDLL SpdMuxTransaction().
 *
 * GPIO36/37 select the SPD mux branch.
 * GPIO38 determines whether the special mux path is required.
 *
 * GPIO_USE_SEL2 bits 4,5,6 -> GPIO36, GPIO37, GPIO38.
 *
 * GPIO36 = output
 * GPIO37 = output
 * GPIO38 = input
 *
 * For logical SPD 0x50/0x51, stock selects:
 *
 *	GPIO37:GPIO36 = 0:1
 *
 * If GPIO38 is high, stock firmware instead clears the two
 * mux outputs and performs a normal/direct SMBus transaction.
 */
static void p6t_se_select_spd_50(void)
{
	u16 use;
	u16 dir;
	u16 level;

	use = inw(P6T_GPIOBASE + GP_IO_USE_SEL2);
	printk(BIOS_EMERG,
	       "P6T SE: GPIO_USE_SEL2 before = %04x\n", use);

	use |= 0x0070;
	outw(use, P6T_GPIOBASE + GP_IO_USE_SEL2);

	dir = inw(P6T_GPIOBASE + GP_IO_SEL2);
	printk(BIOS_EMERG,
	       "P6T SE: GP_IO_SEL2 before = %04x\n", dir);

	/*
	 * Clear direction bits for GPIO36/37/38, then set GPIO38
	 * as input. ICH GPIO direction bit:
	 *
	 *	0 = output
	 *	1 = input
	 */
	dir &= ~0x0070;
	dir |= 0x0040;
	outw(dir, P6T_GPIOBASE + GP_IO_SEL2);

	level = inw(P6T_GPIOBASE + GP_LVL2);

	printk(BIOS_EMERG,
	       "P6T SE: GP_LVL2 before mux select = %04x\n",
	       level);

	if (level & 0x0040) {
		/*
		 * GPIO38 high.
		 *
		 * This exactly follows the stock MINIT fallback:
		 * clear GPIO36/37 and let the normal SMBus path
		 * access the EEPROM directly.
		 */
		level &= ~0x0030;

		printk(BIOS_EMERG,
		       "P6T SE: GPIO38 high - direct SPD path\n");
	} else {
		/*
		 * GPIO38 low.
		 *
		 * Stock mux selection for logical SPD addresses
		 * 0x50/0x51:
		 *
		 *	GPIO37:GPIO36 = 0:1
		 */
		level &= ~0x0030;
		level |= 0x0010;

		printk(BIOS_EMERG,
		       "P6T SE: GPIO38 low - selecting SPD 0x50/0x51 branch\n");
	}

	outw(level, P6T_GPIOBASE + GP_LVL2);

	printk(BIOS_EMERG,
	       "P6T SE: GPIO_USE_SEL2=%04x GP_IO_SEL2=%04x GP_LVL2=%04x\n",
	       inw(P6T_GPIOBASE + GP_IO_USE_SEL2),
	       inw(P6T_GPIOBASE + GP_IO_SEL2),
	       inw(P6T_GPIOBASE + GP_LVL2));
}

static void p6t_se_private_imc_probe(void)
{
	const u8 bus = 0xff;
	const pci_devfn_t test = PCI_DEV(0xff, 3, 4);
	const struct x58_minit_field_desc *d;
	u16 idx;
	u32 id;
	u32 value;

	id = pci_read_config32(test, 0x00);
	printk(BIOS_EMERG, "P6T SE/X58: ff:03.4 ID=%08x\n", id);
	if (id != 0x2d9c8086) {
		post_code(0xf6);
		p6t_se_beep(1);
		die("P6T SE/X58: Westmere IMC test device not visible\n");
	}

	post_code(0xe6);
	p6t_se_beep(6);

	/* Exact MINIT mapping: ctx+0xb6 -> global descriptor 0x15. */
	idx = x58_minit_cfg_index(0x0b6);
	d = x58_minit_global_desc(idx);
	if (idx != 0x15 || !d || !x58_minit_read_global(bus, idx, &value)) {
		post_code(0xf7);
		p6t_se_beep(2);
		die("P6T SE/X58: global private IMC read failed\n");
	}
	printk(BIOS_EMERG,
	       "P6T SE/X58: G ctx+b6 idx=%03x bit=%04x span=%u value=%08x\n",
	       idx, d->bit, d->span, value);

	/* ctx+0xbc -> global descriptor 0x14. */
	idx = x58_minit_cfg_index(0x0bc);
	d = x58_minit_global_desc(idx);
	if (idx != 0x14 || !d || !x58_minit_read_global(bus, idx, &value)) {
		post_code(0xf7);
		p6t_se_beep(2);
		die("P6T SE/X58: second global private IMC read failed\n");
	}
	printk(BIOS_EMERG,
	       "P6T SE/X58: G ctx+bc idx=%03x bit=%04x span=%u value=%08x\n",
	       idx, d->bit, d->span, value);

	/* ctx+0xd0 -> global descriptor 0x18 (signed-offset path). */
	idx = x58_minit_cfg_index(0x0d0);
	d = x58_minit_global_desc(idx);
	if (idx != 0x18 || !d || !x58_minit_read_global(bus, idx, &value)) {
		post_code(0xf7);
		p6t_se_beep(2);
		die("P6T SE/X58: signed-offset private IMC read failed\n");
	}
	printk(BIOS_EMERG,
	       "P6T SE/X58: G ctx+d0 idx=%03x bit=%04x span=%u value=%08x\n",
	       idx, d->bit, d->span, value);

	post_code(0xe7);
	p6t_se_beep(7);

	/* ctx+0x11e is the first B8 nine-field channel descriptor: 0x239. */
	idx = x58_minit_cfg_index(0x11e);
	d = x58_minit_channel_desc(idx);
	if (idx != 0x239 || !d || !x58_minit_read_channel(bus, 0, idx, &value)) {
		post_code(0xf8);
		p6t_se_beep(3);
		die("P6T SE/X58: channel private IMC read failed\n");
	}
	printk(BIOS_EMERG,
	       "P6T SE/X58: CH0 ctx+11e idx=%03x bit=%04x span=%u value=%08x\n",
	       idx, d->bit, d->span, value);

	post_code(0xe8);
	p6t_se_beep(8);
	printk(BIOS_EMERG,
	       "P6T SE/X58: MINIT private-IMC descriptor/transport milestone passed\n");
}

void mainboard_romstage_entry(void)
{
	u8 spd[SPD_TEST_BYTES];
	uintptr_t base;
	int value;
	int i;

	post_code(0xe0);

	printk(BIOS_EMERG,
	       "P6T SE/X58: stock-derived SMBus/SPD mux test\n");

	/*
	 * The generic ICH10 code currently programmed different
	 * PM/GPIO bases earlier. Reprogram the P6T SE stock values
	 * before touching its SPD mux.
	 */
	p6t_se_setup_stock_ich10_bases();

	/*
	 * Existing ICH10 coreboot SMBus initialization.
	 * This programs SMBus BAR 0x400 and enables the host.
	 */
	enable_smbus();
	base = smbus_base();

	printk(BIOS_EMERG,
	       "P6T SE/X58: SMBus enabled at %p\n",
	       (void *)base);

	/*
	 * Existing diagnostic:
	 * 2 beeps = SMBus controller initialization completed.
	 */
	post_code(0xe2);
	p6t_se_beep(2);

	/*
	 * Apply the GPIO SPD routing recovered from ASUS MINITDLL.
	 */
	p6t_se_select_spd_50();

	/*
	 * 5 beeps = stock SPD mux setup itself completed.
	 */
	post_code(0xe5);
	p6t_se_beep(5);

	/*
	 * Read the first 16 bytes of SPD EEPROM 0x50.
	 */
	for (i = 0; i < SPD_TEST_BYTES; i++) {
		value = do_smbus_read_byte(base, SPD_ADDR, i);

		if (value < 0) {
			u8 status = inb(base);

			printk(BIOS_EMERG,
			       "P6T SE/X58: SPD 0x%02x read failed "
			       "at byte %d, error %d, HSTSTAT=%02x\n",
			       SPD_ADDR, i, value, status);

			post_code(0xef);

			/*
			 * Failure marker.
			 */
			p6t_se_beep(1);

			die("P6T SE/X58: SPD read failed\n");
		}

		spd[i] = (u8)value;

		printk(BIOS_EMERG,
		       "P6T SE/X58: SPD[%02x] = %02x\n",
		       i, spd[i]);
	}

	/*
	 * 3 beeps = all 16 reads worked.
	 */
	post_code(0xe3);
	p6t_se_beep(3);

	printk(BIOS_EMERG,
	       "P6T SE/X58: SPD 0x50 bytes 00-0f:");

	for (i = 0; i < SPD_TEST_BYTES; i++)
		printk(BIOS_EMERG, " %02x", spd[i]);

	printk(BIOS_EMERG, "\n");

	printk(BIOS_EMERG,
	       "P6T SE/X58: SPD memory type = %02x\n",
	       spd[SPD_TYPE_BYTE]);

	if (spd[SPD_TYPE_BYTE] != SPD_TYPE_DDR3) {
		printk(BIOS_EMERG,
		       "P6T SE/X58: expected DDR3 type 0x0b\n");

		post_code(0xee);
		p6t_se_beep(1);

		die("P6T SE/X58: unexpected SPD memory type\n");
	}

	/*
	 * 4 beeps = full success:
	 *
	 *   stock PM/GPIO bases configured
	 *   stock SPD mux configured
	 *   ICH10 SMBus operational
	 *   bytes 0..15 readable
	 *   byte 2 == 0x0b (DDR3)
	 */
	post_code(0xe4);
	p6t_se_beep(4);

	printk(BIOS_EMERG,
	       "P6T SE/X58: STOCK-DERIVED SPD TEST PASSED\n");

	p6t_se_private_imc_probe();

	die("P6T SE/X58: private IMC milestone reached\n");
}

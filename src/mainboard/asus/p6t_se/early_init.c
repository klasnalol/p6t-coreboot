/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "beep.h"
#include "early_init.h"

#include <arch/io.h>
#include <bootblock_common.h>
#include <console/console.h>
#include <device/pci_ops.h>
#include <post.h>
#include <types.h>
#include <northbridge/intel/x58/x58.h>
#include <superio/winbond/common/winbond.h>
#include <superio/winbond/w83667hg-a/w83667hg-a.h>

#define SERIAL_DEV PNP_DEV(0x2e, W83667HG_A_SP1)

#define P6T_PMBASE		0x0800
#define P6T_GPIOBASE		0x0500

#define LPC_PMBASE		0x40
#define LPC_ACPI_CNTL		0x44
#define LPC_GPIOBASE		0x48
#define LPC_GPIO_CNTL		0x4c

#define GP_IO_USE_SEL2		0x30
#define GP_IO_SEL2		0x34
#define GP_LVL2			0x38

void p6t_se_configure_stock_bases(void)
{
	const pci_devfn_t lpc = PCI_DEV(0, 0x1f, 0);
	u8 reg8;

	pci_write_config32(lpc, LPC_PMBASE, P6T_PMBASE | 1);
	pci_write_config8(lpc, LPC_ACPI_CNTL, 0x80);
	pci_write_config32(lpc, LPC_GPIOBASE, P6T_GPIOBASE | 1);

	reg8 = pci_read_config8(lpc, LPC_GPIO_CNTL);
	pci_write_config8(lpc, LPC_GPIO_CNTL, reg8 | 0x10);

	printk(BIOS_DEBUG, "P6T SE: PMBASE=%08x GPIOBASE=%08x\n",
	       pci_read_config32(lpc, LPC_PMBASE),
	       pci_read_config32(lpc, LPC_GPIOBASE));
}

void p6t_se_select_spd_mux(u8 spd_address)
{
	const pci_devfn_t mux_gate = PCI_DEV(0, 0x14, 0);
	u16 level;
	u16 reg;
	u16 select;

	/* MINITDLL skips the GPIO mux when 00:14.0 offset 8 reads as zero. */
	if (!pci_read_config8(mux_gate, 0x08))
		return;

	reg = inw(P6T_GPIOBASE + GP_IO_USE_SEL2);
	outw(reg | 0x0070, P6T_GPIOBASE + GP_IO_USE_SEL2);

	/* GPIO36/37 are outputs and GPIO38 is an input. */
	reg = inw(P6T_GPIOBASE + GP_IO_SEL2);
	outw((reg & ~0x0070) | 0x0040, P6T_GPIOBASE + GP_IO_SEL2);

	level = inw(P6T_GPIOBASE + GP_LVL2) & ~0x0030;
	if (inw(P6T_GPIOBASE + GP_LVL2) & 0x0040) {
		outw(level, P6T_GPIOBASE + GP_LVL2);
		return;
	}

	/*
	 * Recovered from SpdMuxTransaction(): the six logical SPD addresses
	 * are routed as three pairs by GPIO37:GPIO36.
	 */
	switch (spd_address & 0xfe) {
	case 0x50:
		select = 0x0010;
		break;
	case 0x52:
		select = 0x0000;
		break;
	case 0x54:
		select = 0x0020;
		break;
	default:
		printk(BIOS_ERR, "P6T SE: invalid SPD address 0x%02x\n",
		       spd_address);
		return;
	}

	outw(level | select, P6T_GPIOBASE + GP_LVL2);
}

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

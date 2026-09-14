/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/io.h>
#include <arch/romstage.h>
#include <console/console.h>
#include <delay.h>
#include <device/pci_ops.h>
#include <device/dram/ddr3.h>
#include <device/smbus_host.h>
#include <halt.h>
#include <post.h>
#include <types.h>

#include "../../../mainboard/asus/p6t_se/beep.h"
#include "../../../mainboard/asus/p6t_se/early_init.h"
#include "minit_internal.h"
#include "raminit.h"
#include "x58.h"

#define SPD_FIRST_ADDR		0x50
#define SPD_SLOT_COUNT		6
#define SPD_TYPE_BYTE		2
#define SPD_TYPE_DDR3		0x0b
#define SPD_READ_RETRIES	20

static int read_spd_byte(uintptr_t base, u8 address, u8 offset)
{
	int value = -1;

	p6t_se_select_spd_mux(address);
	for (unsigned int retry = 0; retry < SPD_READ_RETRIES; retry++) {
		value = do_smbus_read_byte(base, address, offset);
		if (value >= 0)
			break;
		udelay(100000);
	}

	return value;
}

static bool read_spd(uintptr_t base, u8 address, spd_ddr3_raw_data spd)
{
	int value;

	for (unsigned int offset = 0; offset < SPD_SIZE_MAX_DDR3; offset++) {
		value = read_spd_byte(base, address, offset);
		if (value < 0)
			return false;
		spd[offset] = value;
	}

	return true;
}

static bool decode_ddr3_spd(u8 address, spd_ddr3_raw_data spd,
			    struct dimm_attr_ddr3_st *dimm)
{
	if (spd[SPD_TYPE_BYTE] != SPD_TYPE_DDR3) {
		printk(BIOS_ERR, "P6T SE: SPD 0x%02x is not DDR3 (type %02x)\n",
		       address, spd[SPD_TYPE_BYTE]);
		return false;
	}

	if (spd_decode_ddr3(dimm, spd) != SPD_STATUS_OK) {
		printk(BIOS_ERR, "P6T SE: SPD 0x%02x failed DDR3 decoding\n",
		       address);
		return false;
	}

	printk(BIOS_INFO,
	       "P6T SE: SPD 0x%02x: %u MiB, %u rank(s), x%u, CAS mask %04x\n",
	       address, dimm->size_mb, dimm->ranks, dimm->width,
	       dimm->cas_supported);
	return true;
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
		p6t_se_beep_error(P6T_SE_BEEP_ERR_IMC_DEVICE);
		die("P6T SE/X58: Westmere IMC test device not visible\n");
	}

	post_code(0xe6);
	p6t_se_beep(6);

	/* Exact MINIT mapping: ctx+0xb6 -> global descriptor 0x15. */
	idx = x58_minit_cfg_index(0x0b6);
	d = x58_minit_global_desc(idx);
	if (idx != 0x15 || !d || !x58_minit_read_global(bus, idx, &value)) {
		post_code(0xf7);
		p6t_se_beep_error(P6T_SE_BEEP_ERR_IMC_GLOBAL);
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
		p6t_se_beep_error(P6T_SE_BEEP_ERR_IMC_GLOBAL);
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
		p6t_se_beep_error(P6T_SE_BEEP_ERR_IMC_GLOBAL);
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
		p6t_se_beep_error(P6T_SE_BEEP_ERR_IMC_CHANNEL);
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
	spd_ddr3_raw_data spd;
	struct dimm_attr_ddr3_st dimm;
	struct x58_raminit_state ctrl = { 0 };
	u8 spd_map[SPD_SLOT_COUNT];
	uintptr_t base;
	unsigned int populated = 0;
	unsigned int valid = 0;

	post_code(0xe0);

	printk(BIOS_INFO, "P6T SE/X58: discovering DDR3 DIMMs\n");

	/*
	 * The generic ICH10 code currently programmed different
	 * PM/GPIO bases earlier. Reprogram the P6T SE stock values
	 * before touching its SPD mux.
	 */
	p6t_se_configure_stock_bases();

	/*
	 * Existing ICH10 coreboot SMBus initialization.
	 * This programs SMBus BAR 0x400 and enables the host.
	 */
	enable_smbus();
	base = smbus_base();

	printk(BIOS_INFO, "P6T SE/X58: SMBus enabled at %p\n", (void *)base);

	/*
	 * Existing diagnostic:
	 * 2 beeps = SMBus controller initialization completed.
	 */
	post_code(0xe2);
	p6t_se_beep(2);

	/* 5 beeps = begin the stock-derived six-slot SPD scan. */
	post_code(0xe5);
	p6t_se_beep(5);
	mb_get_spd_map(spd_map);

	for (unsigned int slot = 0; slot < SPD_SLOT_COUNT; slot++) {
		const u8 address = spd_map[slot];
		int type;

		if (address < SPD_FIRST_ADDR || address >= SPD_FIRST_ADDR + SPD_SLOT_COUNT) {
			printk(BIOS_ERR, "P6T SE: invalid SPD map entry 0x%02x for slot %u\n",
			       address, slot);
			continue;
		}

		/* An absent slot is expected and must not abort discovery. */
		type = read_spd_byte(base, address, SPD_TYPE_BYTE);
		if (type < 0) {
			printk(BIOS_DEBUG, "P6T SE: DIMM slot %u (SPD 0x%02x) empty\n",
			       slot, address);
			continue;
		}

		populated++;
		if (!read_spd(base, address, spd)) {
			printk(BIOS_ERR,
			       "P6T SE: SPD 0x%02x read failed, HSTSTAT=%02x\n",
			       address, inb(base));
			continue;
		}

		if (decode_ddr3_spd(address, spd, &dimm) &&
		    x58_raminit_add_dimm(&ctrl, slot / X58_DIMMS_PER_CHANNEL,
					  slot % X58_DIMMS_PER_CHANNEL,
					  address, spd, &dimm)) {
			valid++;
			printk(BIOS_INFO, "P6T SE: channel %u DIMM %u populated\n",
			       slot / 2, slot % 2);
		}
	}

	/*
	 * 3 beeps = the complete slot scan finished.
	 */
	post_code(0xe3);
	p6t_se_beep(3);

	printk(BIOS_INFO, "P6T SE: %u populated slot(s), %u valid DDR3 SPD(s)\n",
	       populated, valid);

	if (!valid) {
		post_code(0xee);
		p6t_se_beep_error(P6T_SE_BEEP_ERR_NO_VALID_SPD);
		die("P6T SE/X58: no valid DDR3 SPD found\n");
	}

	if (valid != populated)
		printk(BIOS_WARNING,
		       "P6T SE: ignoring %u DIMM(s) with unreadable or invalid SPD\n",
			       populated - valid);

	if (!x58_raminit_select_common_params(&ctrl)) {
		post_code(0xed);
		p6t_se_beep_error(P6T_SE_BEEP_ERR_TIMINGS);
		die("P6T SE/X58: no safe common DDR3 timing set\n");
	}
	x58_raminit_report(&ctrl);

	/*
	 * 4 beeps = discovery success:
	 *
	 *   stock PM/GPIO bases configured
	 *   all three stock SPD mux routes exercised
	 *   ICH10 SMBus operational
	 *   at least one complete DDR3 SPD has a valid CRC
	 */
	post_code(0xe4);
	p6t_se_beep(4);

	printk(BIOS_INFO, "P6T SE/X58: stock-derived SPD discovery passed\n");

	p6t_se_private_imc_probe();

	if (!x58_raminit_program_topology(&ctrl)) {
		post_code(0xec);
		p6t_se_beep_error(P6T_SE_BEEP_ERR_TOPOLOGY);
		die("P6T SE/X58: IMC topology register verification failed\n");
	}
	p6t_se_beep(9);

	die("P6T SE/X58: DIMM topology milestone reached\n");
}

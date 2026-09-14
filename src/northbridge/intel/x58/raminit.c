/* SPDX-License-Identifier: GPL-2.0-only */

#include <console/console.h>
#include <device/pci_ops.h>
#include <device/dram/common.h>
#include <device/dram/ddr3.h>
#include <types.h>

#include "raminit.h"

#define X58_IMC_BUS		0xff
#define X58_CHANNEL_DEV_BASE	4
#define X58_DIMM_GEOMETRY_REG	0x48
#define X58_RANK_PRESENCE_REG	0x7c
#define X58_DIMM_GEOMETRY_HIGH_SLOT	0x1000

#define DDR3_MIN_CAS		4
#define DDR3_MAX_CAS		19

static u16 encode_dimm_geometry(const spd_ddr3_raw_data spd)
{
	u8 banks = (((spd[4] >> 4) & 3) + 1) | 4;
	u8 rows = (spd[5] >> 3) & 7;
	u8 columns = (spd[5] & 7) - 1;
	u8 ranks = (spd[7] >> 3) & 7;

	/* MINIT folds the reserved four-rank encoding onto its three-rank code. */
	if (ranks == 3)
		ranks = 2;

	return columns | (rows << 2) | (ranks << 5) | (banks << 7);
}

bool x58_raminit_add_dimm(struct x58_raminit_state *ctrl, unsigned int channel,
			  unsigned int slot, u8 address,
			  const spd_ddr3_raw_data spd,
			  const struct dimm_attr_ddr3_st *dimm)
{
	struct x58_dimm *target;

	if (channel >= X58_CHANNELS || slot >= X58_DIMMS_PER_CHANNEL)
		return false;
	if (dimm->dram_type != SPD_MEMORY_TYPE_SDRAM_DDR3)
		return false;
	if (spd_dimm_is_registered_ddr3(dimm->dimm_type)) {
		printk(BIOS_ERR, "X58: registered DIMMs are unsupported on P6T SE\n");
		return false;
	}
	if (!dimm->flags.operable_1_50V) {
		printk(BIOS_ERR, "X58: SPD 0x%02x cannot operate at 1.50 V\n", address);
		return false;
	}

	target = &ctrl->dimm[channel][slot];
	target->present = true;
	target->spd_address = address;
	target->geometry = encode_dimm_geometry(spd);
	target->data = *dimm;
	return true;
}

static u16 timing_cycles(u32 timing, u32 tck)
{
	return (timing + tck - 1) / tck;
}

bool x58_raminit_select_common_params(struct x58_raminit_state *ctrl)
{
	bool first = true;

	ctrl->total_mb = 0;
	ctrl->tck = 0;
	ctrl->taa = 0;
	ctrl->trcd = 0;
	ctrl->trp = 0;
	ctrl->tras = 0;
	ctrl->trfc = 0;
	ctrl->cas_supported = 0;
	ctrl->cas = 0;
	for (unsigned int channel = 0; channel < X58_CHANNELS; channel++)
		ctrl->rankmap[channel] = 0;

	for (unsigned int channel = 0; channel < X58_CHANNELS; channel++) {
		for (unsigned int slot = 0; slot < X58_DIMMS_PER_CHANNEL; slot++) {
			const struct x58_dimm *entry = &ctrl->dimm[channel][slot];
			const struct dimm_attr_ddr3_st *dimm = &entry->data;

			if (!entry->present)
				continue;

			ctrl->total_mb += dimm->size_mb;
			ctrl->rankmap[channel] |= ((1U << dimm->ranks) - 1) << (4 * slot);
			ctrl->tck = MAX(ctrl->tck, dimm->tCK);
			ctrl->taa = MAX(ctrl->taa, dimm->tAA);
			ctrl->trcd = MAX(ctrl->trcd, dimm->tRCD);
			ctrl->trp = MAX(ctrl->trp, dimm->tRP);
			ctrl->tras = MAX(ctrl->tras, dimm->tRAS);
			ctrl->trfc = MAX(ctrl->trfc, dimm->tRFC);
			if (first) {
				ctrl->cas_supported = dimm->cas_supported;
				first = false;
			} else {
				ctrl->cas_supported &= dimm->cas_supported;
			}
		}
	}

	if (first || !ctrl->cas_supported)
		return false;

	/*
	 * Start native bring-up at DDR3-800. Faster bins remain disabled until
	 * training has been validated on hardware.
	 */
	if (ctrl->tck > TCK_800MHZ) {
		printk(BIOS_ERR, "X58: a DIMM cannot run at the DDR3-800 safe bin\n");
		return false;
	}
	ctrl->tck = TCK_800MHZ;

	for (ctrl->cas = MAX(DDR3_MIN_CAS, timing_cycles(ctrl->taa, ctrl->tck));
	     ctrl->cas <= DDR3_MAX_CAS; ctrl->cas++) {
		if (ctrl->cas_supported & (1U << (ctrl->cas - DDR3_MIN_CAS)))
			return true;
	}

	return false;
}

bool x58_raminit_program_topology(const struct x58_raminit_state *ctrl)
{
	for (unsigned int channel = 0; channel < X58_CHANNELS; channel++) {
		const pci_devfn_t geometry_dev =
			PCI_DEV(X58_IMC_BUS, X58_CHANNEL_DEV_BASE + channel, 1);
		const pci_devfn_t channel_dev =
			PCI_DEV(X58_IMC_BUS, X58_CHANNEL_DEV_BASE + channel, 0);

		for (unsigned int slot = 0; slot < X58_DIMMS_PER_CHANNEL; slot++) {
			u32 geometry = slot ? X58_DIMM_GEOMETRY_HIGH_SLOT : 0;
			const unsigned int reg = X58_DIMM_GEOMETRY_REG + 4 * slot;

			if (ctrl->dimm[channel][slot].present)
				geometry |= ctrl->dimm[channel][slot].geometry;
			pci_write_config32(geometry_dev, reg, geometry);
			if (pci_read_config32(geometry_dev, reg) != geometry)
				return false;
		}

		/*
		 * MINIT tags geometry entries one and two with bit 12 when the
		 * channel has at most two populated DIMMs. P6T SE never exposes
		 * the controller's third entry, but it still needs that sentinel.
		 */
		pci_write_config32(geometry_dev, X58_DIMM_GEOMETRY_REG + 8,
				   X58_DIMM_GEOMETRY_HIGH_SLOT);
		if (pci_read_config32(geometry_dev, X58_DIMM_GEOMETRY_REG + 8) !=
		    X58_DIMM_GEOMETRY_HIGH_SLOT)
			return false;

		pci_write_config32(channel_dev, X58_RANK_PRESENCE_REG,
				   ctrl->rankmap[channel]);
		if (pci_read_config32(channel_dev, X58_RANK_PRESENCE_REG) !=
		    ctrl->rankmap[channel])
			return false;
	}

	return true;
}

void x58_raminit_report(const struct x58_raminit_state *ctrl)
{
	printk(BIOS_INFO,
	       "X58: %u MiB, DDR3-800 CL%u, tRCD=%u tRP=%u tRAS=%u tRFC=%u\n",
	       ctrl->total_mb, ctrl->cas, timing_cycles(ctrl->trcd, ctrl->tck),
	       timing_cycles(ctrl->trp, ctrl->tck),
	       timing_cycles(ctrl->tras, ctrl->tck),
	       timing_cycles(ctrl->trfc, ctrl->tck));
	printk(BIOS_INFO, "X58: rank maps: %02x %02x %02x\n",
	       ctrl->rankmap[0], ctrl->rankmap[1], ctrl->rankmap[2]);
}

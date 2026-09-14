/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_RAMINIT_H
#define NORTHBRIDGE_INTEL_X58_RAMINIT_H

#include <device/dram/ddr3.h>
#include <types.h>

#define X58_CHANNELS		3
#define X58_DIMMS_PER_CHANNEL	2

struct x58_dimm {
	bool present;
	u8 spd_address;
	u16 geometry;
	struct dimm_attr_ddr3_st data;
};

struct x58_raminit_state {
	struct x58_dimm dimm[X58_CHANNELS][X58_DIMMS_PER_CHANNEL];
	u32 total_mb;
	u32 tck;
	u32 taa;
	u32 trcd;
	u32 trp;
	u32 tras;
	u32 trfc;
	u16 cas_supported;
	u8 cas;
	u8 rankmap[X58_CHANNELS];
};

bool x58_raminit_add_dimm(struct x58_raminit_state *ctrl, unsigned int channel,
			  unsigned int slot, u8 address,
			  const spd_ddr3_raw_data spd,
			  const struct dimm_attr_ddr3_st *dimm);
bool x58_raminit_select_common_params(struct x58_raminit_state *ctrl);
bool x58_raminit_program_topology(const struct x58_raminit_state *ctrl);
void x58_raminit_report(const struct x58_raminit_state *ctrl);

#endif

/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_CSI_H
#define NORTHBRIDGE_INTEL_X58_CSI_H

#include <types.h>

enum x58_csi_result {
	X58_CSI_SUCCESS = 0,
	X58_CSI_ERROR_IMAGE = 1,
	/* DLL status is handed to the stock wrapper's reset/state handling. */
	X58_CSI_ERROR_STATUS = 2,
};

struct x58_csi_status {
	u32 flags;
	u8 status_class;
	u8 detail;
	u8 speed;
	/* High-byte POST code and next-byte phase from PCI 00:14.1 + 0x9c. */
	u16 progress;
};

/* Initialize the CPU-to-X58 CSI/QPI fabric using the original Intel binary. */
enum x58_csi_result x58_run_csi(struct x58_csi_status *status, u32 boot_state);

#endif

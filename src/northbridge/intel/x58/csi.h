/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_CSI_H
#define NORTHBRIDGE_INTEL_X58_CSI_H

enum x58_csi_result {
	X58_CSI_SUCCESS = 0,
	X58_CSI_ERROR_IMAGE = 1,
	X58_CSI_ERROR_STATUS = 2,
};

/* Initialize the CPU-to-X58 CSI/QPI fabric using the original Intel binary. */
enum x58_csi_result x58_run_csi(void);

#endif

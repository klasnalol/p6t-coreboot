/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_MINIT_H
#define NORTHBRIDGE_INTEL_X58_MINIT_H

enum x58_minit_result {
	X58_MINIT_SUCCESS = 0,
	X58_MINIT_ERROR_IMAGE = 1,
	X58_MINIT_ERROR_CALL = 2,
	X58_MINIT_ERROR_CONTEXT_STATE = 3,
	X58_MINIT_ERROR_CONTEXT_DETAIL = 4,
	X58_MINIT_ERROR_POLICY = 5,
	X58_MINIT_ERROR_MEMORY_MAP = 6,
	X58_MINIT_ERROR_MEMORY_TEST = 7,
};

/* Run the vendor Westmere memory-training binary from CAR. */
enum x58_minit_result x58_run_minit(void);
enum x58_minit_result x58_validate_trained_memory(void);

#endif

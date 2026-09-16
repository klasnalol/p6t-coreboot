/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_MINIT_H
#define NORTHBRIDGE_INTEL_X58_MINIT_H

#include <stdbool.h>

/* Run the vendor Westmere memory-training binary from CAR. */
bool x58_run_minit(void);

#endif

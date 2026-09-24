/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_VENDOR_PE_H
#define NORTHBRIDGE_INTEL_X58_VENDOR_PE_H

#include <stddef.h>
#include <types.h>

/* Load and relocate one of the original X58 PE32 initialization binaries. */
u8 *x58_load_vendor_pe(const char *cbfs_name, size_t expected_size);

#endif

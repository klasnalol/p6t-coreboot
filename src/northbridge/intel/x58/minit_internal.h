/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef NORTHBRIDGE_INTEL_X58_MINIT_INTERNAL_H
#define NORTHBRIDGE_INTEL_X58_MINIT_INTERNAL_H

#include <stdbool.h>
#include <types.h>

/*
 * Reconstructed from ASUS P6T SE AMIBIOS8 MINITDLL.dll.
 * Stock MINITDLL SHA256:
 * a17eee641ab0955f6e4848ac95b761ba94c87b2c4be36c3a150d51ee856f0b6c
 *
 * MINIT describes private IMC fields as a 16-bit bit-position plus an
 * 8-bit transaction span. The usable value width is max(span - 2, 0);
 * the upper two transaction bits select the private write operation.
 */
struct x58_minit_field_desc {
	u16 bit;
	u8 span;
};

#define X58_MINIT_GLOBAL_DESC_COUNT  0x063
#define X58_MINIT_CHANNEL_DESC_COUNT 0x23a
#define X58_MINIT_CFG_CTX_BASE       0x0b2
#define X58_MINIT_CFG_CTX_LAST       0x3da

const struct x58_minit_field_desc *x58_minit_global_desc(u16 index);
const struct x58_minit_field_desc *x58_minit_channel_desc(u16 index);
u16 x58_minit_cfg_index(u16 ctx_offset);

bool x58_minit_read_global(u8 bus, u16 index, u32 *value);
bool x58_minit_read_channel(u8 bus, u8 channel, u16 index, u32 *value);
bool x58_minit_write_global(u8 bus, u16 index, u32 value, u8 op);
bool x58_minit_write_channel(u8 bus, u8 channel, u16 index, u32 value, u8 op);

#endif

/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/io.h>

#include "csi_recovery.h"

bool p6t_se_finish_training(u32 state)
{
	/* Module 55 +0x12ea..+0x135d: preserve its bit-test priority. */
	if (state & 2) {
		outb(0x0e, 0xcf9);
	} else if (state & 4) {
		outb(0x06, 0xcf9);
	} else if (state & 1) {
		u32 reg;

		outl(0x8000a2cc, 0xcf8);
		reg = inl(0xcfc) & 0xfffffbff;
		outl(reg, 0xcfc);
		outl(0x8000a17c, 0xcf8);
		outl(0, 0xcfc);
		outl(0x8000a180, 0xcf8);
		outl(0, 0xcfc);
		outb(0xfe, 0x80);
		outl(0x8000a2cc, 0xcf8);
		outl(inl(0xcfc) | 0x400, 0xcfc);
	} else {
		return false;
	}
	return true;
}

bool p6t_se_csi_postcall(u8 status_class, u8 detail, u32 flags)
{
	if (status_class == 2 && (flags & 0x100)) {
		u16 levels;

		/* Module 55 +0x1060..+0x10ea, including its original access widths. */
		outl(0x8000f848, 0xcf8);
		outl(0x00000500, 0xcfc);
		outl(0x8000f84c, 0xcf8);
		/* IN AL preserves EAX's upper bytes before the stock OUT EAX. */
		outl(0x8000f800 | (inb(0xcfc) | 0x10), 0xcfc);

		outw(inw(0x500) | 0x1100, 0x500);
		outw(inw(0x504) & 0xeeff, 0x504);
		levels = inw(0x50c) & 0xeeff;
		if (detail == 2)
			levels |= 0x1000;
		else if (detail != 1)
			levels |= 0x0100;
		outw(levels, 0x50c);

		outb(inb(0x533) | 1, 0x533);
		outb(inb(0x537) & 0xfe, 0x537);
		outb(inb(0x53b) & 0xfe, 0x53b);
		outl(0x8000f8ac, 0xcf8);
		outb(inb(0xcfe) | 0x04, 0xcfe);
		/* A repeated CSI request can repeat this reset, as in the stock BIOS. */
		outb(0x06, 0xcf9);
		return true;
	}

	/* Original module 55 clears LPC 0xae bit 2 on its non-reset path. */
	outl(0x8000f8ac, 0xcf8);
	outb(inb(0xcfe) & ~0x04, 0xcfe);
	return false;
}

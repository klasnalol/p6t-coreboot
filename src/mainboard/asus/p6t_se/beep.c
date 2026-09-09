/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/io.h>
#include <delay.h>
#include <types.h>

#include "beep.h"

#define PIT_CH2_DATA	0x42
#define PIT_COMMAND	0x43
#define SPEAKER_PORT	0x61

#define PIT_FREQUENCY	1193182
#define BEEP_FREQUENCY	1000

void p6t_se_beep(unsigned int count)
{
	const u16 divisor = PIT_FREQUENCY / BEEP_FREQUENCY;

	for (unsigned int i = 0; i < count; i++) {
		u8 speaker = inb(SPEAKER_PORT);

		/* PIT channel 2, square-wave generator. */
		outb(0xb6, PIT_COMMAND);
		outb(divisor & 0xff, PIT_CH2_DATA);
		outb(divisor >> 8, PIT_CH2_DATA);

		/* Enable PIT channel 2 output to PC speaker. */
		outb(speaker | 0x03, SPEAKER_PORT);

		udelay(120000);

		/* Restore original speaker-control state. */
		outb(speaker, SPEAKER_PORT);

		udelay(120000);
	}

	/* Make separate checkpoint groups easy to distinguish. */
	udelay(400000);
}

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
#define ERROR_BEEP_FREQUENCY	600

static void p6t_se_tone(unsigned int frequency, unsigned int duration_us,
			unsigned int pause_us)
{
	const u16 divisor = PIT_FREQUENCY / frequency;
	u8 speaker = inb(SPEAKER_PORT);

	/* PIT channel 2, square-wave generator. */
	outb(0xb6, PIT_COMMAND);
	outb(divisor & 0xff, PIT_CH2_DATA);
	outb(divisor >> 8, PIT_CH2_DATA);

	/* Enable PIT channel 2 output to PC speaker. */
	outb(speaker | 0x03, SPEAKER_PORT);
	udelay(duration_us);
	outb(speaker, SPEAKER_PORT);
	udelay(pause_us);
}

void p6t_se_beep(unsigned int count)
{
	for (unsigned int i = 0; i < count; i++)
		p6t_se_tone(BEEP_FREQUENCY, 120000, 120000);

	/* Make successive checkpoint groups easy to distinguish. */
	udelay(400000);
}

void p6t_se_beep_error(enum p6t_se_beep_error error)
{
	/*
	 * Speaker-only failure code: one long low tone followed by N short
	 * high tones. Repeat the complete pattern three times so it can be
	 * counted reliably without a POST card or serial console.
	 */
	for (unsigned int repeat = 0; repeat < 3; repeat++) {
		p6t_se_tone(ERROR_BEEP_FREQUENCY, 700000, 350000);
		for (unsigned int i = 0; i < error; i++)
			p6t_se_tone(BEEP_FREQUENCY, 120000, 120000);
		udelay(900000);
	}
}

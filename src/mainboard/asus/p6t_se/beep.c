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
		p6t_se_tone(BEEP_FREQUENCY, 80000, 80000);

	mdelay(220);
}

void p6t_se_beep_error(enum p6t_se_beep_error error)
{
	/* One long low tone plus the error number; do not repeat the boot trace. */
	p6t_se_tone(ERROR_BEEP_FREQUENCY, 450000, 200000);
	for (unsigned int i = 0; i < error; i++)
		p6t_se_tone(BEEP_FREQUENCY, 80000, 80000);
}

void p6t_se_beep_error_detail(enum p6t_se_beep_error error,
			      unsigned int detail)
{
	p6t_se_beep_error(error);
	mdelay(350);
	for (unsigned int i = 0; i < detail; i++)
		p6t_se_tone(BEEP_FREQUENCY, 80000, 80000);
}

void p6t_se_build_csi_packet(u8 packet[P6T_SE_CSI_PACKET_BYTES], u8 result,
			     u8 status_class, u8 status_detail, u16 flags,
			     u16 progress)
{
	u8 checksum = 0xa5;

	packet[0] = result;
	packet[1] = status_class;
	packet[2] = status_detail;
	packet[3] = flags;
	packet[4] = flags >> 8;
	packet[5] = progress >> 8;
	packet[6] = progress;
	for (unsigned int i = 0; i < P6T_SE_CSI_PACKET_BYTES - 1; i++)
		checksum ^= packet[i];
	packet[7] = checksum;
}

void p6t_se_beep_csi_failure(u8 result, u8 status_class, u8 status_detail,
			     u16 flags, u16 progress)
{
	u8 packet[P6T_SE_CSI_PACKET_BYTES];

	p6t_se_build_csi_packet(packet, result, status_class, status_detail,
				flags, progress);
	/* Long 600 Hz sync, then 64 MSB-first bits: 600 Hz = 0, 1 kHz = 1. */
	p6t_se_tone(ERROR_BEEP_FREQUENCY, 450000, 200000);
	for (unsigned int i = 0; i < P6T_SE_CSI_PACKET_BYTES; i++) {
		for (int bit = 7; bit >= 0; bit--)
			p6t_se_tone((packet[i] & BIT(bit)) ? BEEP_FREQUENCY :
					      ERROR_BEEP_FREQUENCY, 65000, 45000);
	}
}

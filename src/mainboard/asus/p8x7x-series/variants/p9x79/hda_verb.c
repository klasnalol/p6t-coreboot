/* SPDX-License-Identifier: GPL-2.0-only */

#include <device/azalia_device.h>

/*
 * Realtek ALC898 HDA codec (standard P9X79; P9X79-Pro/Deluxe revisions may
 * carry ALC1150 — the codec is matched on vendor ID below, so the wrong
 * chip would simply print a "cannot find verbs" warning).
 *
 * TODO(p9x79 phase 2): populate the pin configuration verbs. The verb table
 * is not extractable from the stock AMI BIOS (the HDA driver section is
 * compressed), so until it is decoded the codec is probed but left with its
 * default pin config (no audio output).
 */
static const u32 realtek_alc898_verbs[] = {
	AZALIA_SUBVENDOR(0, 0x104384f8),
};

const u32 pc_beep_verbs[0] = {};

struct azalia_codec mainboard_azalia_codecs[] = {
	{
		.name         = "Realtek ALC898",
		.vendor_id    = 0x10ec0898,
		.subsystem_id = 0x104384f8,
		.address      = 0,
		.verbs        = realtek_alc898_verbs,
		.verb_count   = ARRAY_SIZE(realtek_alc898_verbs),
	},
};

AZALIA_ARRAY_SIZES;

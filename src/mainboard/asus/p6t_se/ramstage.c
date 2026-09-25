/* SPDX-License-Identifier: GPL-2.0-only */

#include <bootstate.h>

#include "beep.h"

static void p6t_se_signal_payload_boot(void *unused)
{
	(void)unused;

	/* Payload handoff is the final speaker checkpoint. */
	p6t_se_beep(6);
}

BOOT_STATE_INIT_ENTRY(BS_PAYLOAD_BOOT, BS_ON_ENTRY, p6t_se_signal_payload_boot, NULL);

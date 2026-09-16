/* SPDX-License-Identifier: GPL-2.0-only */

#include <bootstate.h>

#include "beep.h"

static void p6t_se_signal_payload_boot(void *unused)
{
	(void)unused;

	/* Speaker-only checkpoint: ramstage completed and SeaBIOS is next. */
	p6t_se_beep(2);
}

BOOT_STATE_INIT_ENTRY(BS_PAYLOAD_BOOT, BS_ON_ENTRY, p6t_se_signal_payload_boot, NULL);

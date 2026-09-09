/* SPDX-License-Identifier: GPL-2.0-only */

#define __SIMPLE_DEVICE__

#include <arch/romstage.h>
#include <cpu/x86/smm.h>
#include <types.h>

/* Bring-up placeholders. They must be replaced once X58/IMC RAM init exists. */
uintptr_t cbmem_top_chipset(void)
{
	return 0;
}

void smm_region(uintptr_t *start, size_t *size)
{
	*start = 0;
	*size = 0;
}

void fill_postcar_frame(struct postcar_frame *pcf)
{
	(void)pcf;
}

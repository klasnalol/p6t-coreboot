# SPDX-License-Identifier: GPL-2.0-only

ifeq ($(CONFIG_NORTHBRIDGE_INTEL_X58),y)

romstage-y += memmap.c
romstage-y += minit_internal.c
romstage-y += raminit.c
romstage-y += romstage.c

ramstage-y += memmap.c
ramstage-y += northbridge.c

postcar-y += memmap.c

endif

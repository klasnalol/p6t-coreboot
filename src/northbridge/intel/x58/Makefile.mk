# SPDX-License-Identifier: GPL-2.0-only

ifeq ($(CONFIG_NORTHBRIDGE_INTEL_X58),y)

romstage-y += memmap.c
romstage-y += csi.c
romstage-y += minit.c
romstage-y += minit_internal.c
romstage-y += raminit.c
romstage-y += romstage.c
romstage-y += vendor_pe.c

cbfs-files-y += csi.bin
csi.bin-file := $(call strip_quotes,$(CONFIG_X58_CSI_INIT_FILE))
csi.bin-type := raw
csi.bin-compression := none

cbfs-files-y += minit.bin
minit.bin-file := $(call strip_quotes,$(CONFIG_X58_MINIT_FILE))
minit.bin-type := raw
minit.bin-compression := none

ramstage-y += memmap.c
ramstage-y += northbridge.c
ramstage-y += pcie.c

postcar-y += memmap.c

endif

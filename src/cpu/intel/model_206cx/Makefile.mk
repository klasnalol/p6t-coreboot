ramstage-y += model_206cx_init.c
# SPDX-License-Identifier: GPL-2.0-only

subdirs-y += ../../x86/name
subdirs-y += ../../intel/turbo
subdirs-y += ../../intel/microcode
subdirs-y += ../smm/gen1

cpu_microcode_bins += $(wildcard 3rdparty/intel-microcode/intel-ucode/06-2c-*)

bootblock-y += ../car/non-evict/cache_as_ram.S
bootblock-y += ../car/bootblock.c
bootblock-y += ../../x86/early_reset.S

postcar-y += ../car/non-evict/exit_car.S

romstage-y += ../car/romstage.c

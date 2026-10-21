# SPDX-License-Identifier: GPL-2.0-only

tests-y += p6t-se-beep-test

p6t-se-beep-test-srcs += tests/mainboard/asus/p6t_se/beep-test.c
p6t-se-beep-test-srcs += src/mainboard/asus/p6t_se/beep.c

tests-y += p6t-se-csi-recovery-test

p6t-se-csi-recovery-test-srcs += tests/mainboard/asus/p6t_se/csi-recovery-test.c
p6t-se-csi-recovery-test-srcs += src/mainboard/asus/p6t_se/csi_recovery.c
p6t-se-csi-recovery-test-cflags += \
	-include tests/mainboard/asus/p6t_se/csi-recovery-mock.h

# SPDX-License-Identifier: GPL-2.0-only

tests-y += x58-csi-policy-test
tests-y += x58-minit-policy-test

x58-csi-policy-test-srcs += tests/northbridge/x58/csi_policy-test.c
x58-csi-policy-test-srcs += src/northbridge/intel/x58/csi_policy.c

x58-minit-policy-test-srcs += tests/northbridge/x58/minit_policy-test.c
x58-minit-policy-test-srcs += src/northbridge/intel/x58/minit_policy.c

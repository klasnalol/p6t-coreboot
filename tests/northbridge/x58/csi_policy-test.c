/* SPDX-License-Identifier: GPL-2.0-only */

#include <northbridge/intel/x58/csi_policy.h>
#include <tests/test.h>

static void test_newer_ioh_policy(void **state)
{
	static const u16 group_bases[] = {
		0x014, 0x068, 0x0c5, 0x119, 0x176, 0x1ca,
	};
	u8 policy[X58_CSI_POLICY_SIZE];

	x58_build_csi_policy(policy, 0x13, 0xe0000000);
	assert_int_equal(policy[8], 1);
	assert_int_equal(policy[0x0a], 1);
	assert_int_equal(policy[0x226], 1);
	assert_int_equal(policy[0x182], 1);
	assert_int_equal(policy[0x1d6], 1);
	assert_int_equal(policy[0x01c], 1);
	assert_int_equal(policy[0x01d], 1);

	for (unsigned int group = 0; group < ARRAY_SIZE(group_bases); group++) {
		for (unsigned int port = 0; port < 3; port++) {
			const unsigned int start = group_bases[group] + 0x0f + port * 0x17;

			for (unsigned int tail = 13; tail < 23; tail++)
				assert_int_equal(policy[start + tail], 1);
		}
	}
}

static void test_older_ioh_policy(void **state)
{
	u8 policy[X58_CSI_POLICY_SIZE];

	x58_build_csi_policy(policy, 0x0f, 0xe0000000);
	assert_int_equal(policy[8], 1);
	assert_int_equal(policy[0x0a], 0);
	assert_int_equal(policy[0x226], 0);
	assert_int_equal(policy[0x30], 0);
}

static void test_cmos_override_and_cpu_signature(void **state)
{
	const struct x58_csi_cmos_settings settings = {
		.cmos_58 = 0,
		.cmos_8e = 0,
		.extended_80 = 0x0b,
		.extended_82 = 1,
		.extended_88 = 0x12,
		.extended_89 = 0x34,
	};
	u8 policy[X58_CSI_POLICY_SIZE];

	x58_build_csi_policy(policy, 0x13, 0xe0000000);
	x58_apply_csi_cmos_policy(policy, 0x13, 0x6a4, &settings);
	assert_int_equal(policy[6], 1);
	assert_int_equal(policy[7], 5);
	assert_int_equal(policy[0x01c], 0);
	assert_int_equal(policy[0x01d], 1);
	assert_int_equal(policy[0x17e], 0);
	assert_int_equal(policy[0x17f], 1);

	x58_build_csi_policy(policy, 0x13, 0xe0000000);
	x58_apply_csi_cmos_policy(policy, 0x13, 0x6a0, &settings);
	assert_int_equal(policy[6], 0);
}

static void test_cmos_skip_and_old_revision(void **state)
{
	struct x58_csi_cmos_settings settings = {
		.cmos_58 = 1,
	};
	u8 policy[X58_CSI_POLICY_SIZE];

	x58_build_csi_policy(policy, 0x13, 0xe0000000);
	x58_apply_csi_cmos_policy(policy, 0x13, 0x6a4, &settings);
	assert_int_equal(policy[0x01c], 1);
	assert_int_equal(policy[0x01d], 1);
	assert_int_equal(policy[7], 0);

	settings.cmos_58 = 0;
	settings.extended_88 = 0x21;
	settings.extended_89 = 0xde;
	x58_build_csi_policy(policy, 0x0f, 0xe0000000);
	x58_apply_csi_cmos_policy(policy, 0x0f, 0x6a4, &settings);
	assert_int_equal(policy[7], 0x21);
	assert_int_equal(policy[0x01c], 0);
	assert_int_equal(policy[0x01d], 0);
}

int main(void)
{
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(test_newer_ioh_policy),
		cmocka_unit_test(test_older_ioh_policy),
		cmocka_unit_test(test_cmos_override_and_cpu_signature),
		cmocka_unit_test(test_cmos_skip_and_old_revision),
	};

	return cb_run_group_tests(tests, NULL, NULL);
}

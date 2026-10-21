/* SPDX-License-Identifier: GPL-2.0-only */

#include <northbridge/intel/x58/minit_policy.h>
#include <tests/test.h>

#include "fixtures/minit_policy_replay.h"

static void test_policy_matches_stock_replay(void **state)
{
	const struct p6t_minit_policy_fixture *fixture = *state;
	const struct x58_minit_cmos_settings settings = {
		.cmos_58 = fixture->cmos_58,
		.cmos_8e = fixture->cmos_8e,
		.extended_80 = fixture->extended_80,
		.extended_81 = fixture->extended_81,
		.extended_82 = fixture->extended_82,
		.extended_8e = fixture->extended_8e,
	};
	u8 policy[X58_MINIT_POLICY_SIZE];

	const bool clamp = x58_build_minit_policy(policy, 0xe0000000, fixture->state,
					       fixture->observed_training_pointer, &settings);

	assert_int_equal(clamp, settings.extended_8e > 0x30);
	for (size_t offset = 0; offset < sizeof(policy); offset++) {
		if (policy[offset] != fixture->policy[offset])
			fail_msg("policy[0x%02zx]: coreboot=0x%02x stock=0x%02x",
				 offset, policy[offset], fixture->policy[offset]);
	}
}

int main(void)
{
	struct CMUnitTest tests[ARRAY_SIZE(p6t_minit_policy_fixtures)];

	for (size_t i = 0; i < ARRAY_SIZE(tests); i++) {
		tests[i] = (struct CMUnitTest){
			.name = p6t_minit_policy_fixtures[i].name,
			.test_func = test_policy_matches_stock_replay,
			.initial_state = (void *)&p6t_minit_policy_fixtures[i],
		};
	}

	return cb_run_group_tests(tests, NULL, NULL);
}

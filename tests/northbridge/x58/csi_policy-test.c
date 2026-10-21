/* SPDX-License-Identifier: GPL-2.0-only */

#include <northbridge/intel/x58/csi_policy.h>
#include <tests/test.h>

#include "fixtures/csi_policy_replay.h"

static void test_policy_matches_stock_replay(void **state)
{
	const struct p6t_csi_policy_fixture *fixture = *state;
	u8 policy[X58_CSI_POLICY_SIZE];

	x58_build_csi_policy(policy, fixture->revision, 0xe0000000);
	x58_set_csi_boot_state(policy, fixture->state);
	x58_apply_csi_cmos_policy(policy, fixture->revision, fixture->cpu_signature,
				  &fixture->settings);

	/* Every byte is captured by replaying the original module's instructions. */
	for (size_t offset = 0; offset < sizeof(policy); offset++) {
		if (policy[offset] != fixture->policy[offset])
			fail_msg("policy[0x%03zx]: coreboot=0x%02x stock=0x%02x",
				 offset, policy[offset], fixture->policy[offset]);
	}
}

int main(void)
{
	struct CMUnitTest tests[ARRAY_SIZE(p6t_csi_policy_fixtures)];

	for (size_t i = 0; i < ARRAY_SIZE(tests); i++) {
		tests[i] = (struct CMUnitTest){
			.name = p6t_csi_policy_fixtures[i].name,
			.test_func = test_policy_matches_stock_replay,
			.initial_state = (void *)&p6t_csi_policy_fixtures[i],
		};
	}

	return cb_run_group_tests(tests, NULL, NULL);
}

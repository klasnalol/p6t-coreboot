/* SPDX-License-Identifier: GPL-2.0-only */

#include <mainboard/asus/p6t_se/beep.h>
#include <tests/test.h>

static void test_csi_packet(void **state)
{
	u8 packet[P6T_SE_CSI_PACKET_BYTES];
	u8 checksum = 0xa5;

	p6t_se_build_csi_packet(packet, 2, 1, 3, 0x0120, 0xe9ab);
	assert_int_equal(packet[0], 2);
	assert_int_equal(packet[1], 1);
	assert_int_equal(packet[2], 3);
	assert_int_equal(packet[3], 0x20);
	assert_int_equal(packet[4], 1);
	assert_int_equal(packet[5], 0xe9);
	assert_int_equal(packet[6], 0xab);
	for (unsigned int i = 0; i < P6T_SE_CSI_PACKET_BYTES - 1; i++)
		checksum ^= packet[i];
	assert_int_equal(packet[7], checksum);
}

int main(void)
{
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(test_csi_packet),
	};

	return cb_run_group_tests(tests, NULL, NULL);
}

/* SPDX-License-Identifier: GPL-2.0-only */

#include <mainboard/asus/p6t_se/csi_recovery.h>
#include <tests/test.h>

#include "../../../northbridge/x58/fixtures/csi_postcall_replay.h"
#include "../../../northbridge/x58/fixtures/finish_replay.h"

static const struct p6t_csi_io_fixture *active_io;
static size_t expected_io_count;
static size_t next_io;

static const struct p6t_csi_io_fixture *expect_io(u16 port, u8 width, bool write)
{
	assert_non_null(active_io);
	assert_true(next_io < expected_io_count);
	const struct p6t_csi_io_fixture *expected = &active_io[next_io++];

	if (expected->port != port || expected->width != width || expected->write != write)
		fail_msg("I/O %zu (stock +0x%04x): expected %s%u port 0x%04x, "
			 "got %s%u port 0x%04x", next_io - 1, expected->offset,
			 expected->write ? "out" : "in", expected->width * 8, expected->port,
			 write ? "out" : "in", width * 8, port);
	return expected;
}

u8 inb(u16 port)
{
	return expect_io(port, 1, false)->value;
}

u16 inw(u16 port)
{
	return expect_io(port, 2, false)->value;
}

u32 inl(u16 port)
{
	return expect_io(port, 4, false)->value;
}

void outb(u8 value, u16 port)
{
	assert_int_equal(value, expect_io(port, 1, true)->value);
}

void outw(u16 value, u16 port)
{
	assert_int_equal(value, expect_io(port, 2, true)->value);
}

void outl(u32 value, u16 port)
{
	assert_int_equal(value, expect_io(port, 4, true)->value);
}

static void test_postcall_matches_stock_replay(void **state)
{
	const struct p6t_csi_postcall_fixture *fixture = *state;

	active_io = fixture->io;
	expected_io_count = fixture->io_count;
	next_io = 0;
	assert_int_equal(p6t_se_csi_postcall(fixture->status_class, fixture->detail,
					   fixture->flags), fixture->resets);
	assert_int_equal(next_io, fixture->io_count);
	active_io = NULL;
}

static void test_finish_matches_stock_replay(void **state)
{
	const struct p6t_finish_fixture *fixture = *state;

	active_io = fixture->io;
	expected_io_count = fixture->io_count;
	next_io = 0;
	assert_int_equal(p6t_se_finish_training(fixture->state), fixture->stops);
	assert_int_equal(next_io, fixture->io_count);
	active_io = NULL;
}

int main(void)
{
	struct CMUnitTest tests[ARRAY_SIZE(p6t_csi_postcall_fixtures) +
		ARRAY_SIZE(p6t_finish_fixtures)];

	for (size_t i = 0; i < ARRAY_SIZE(p6t_csi_postcall_fixtures); i++) {
		tests[i] = (struct CMUnitTest){
			.name = p6t_csi_postcall_fixtures[i].name,
			.test_func = test_postcall_matches_stock_replay,
			.initial_state = (void *)&p6t_csi_postcall_fixtures[i],
		};
	}
	for (size_t i = 0; i < ARRAY_SIZE(p6t_finish_fixtures); i++) {
		tests[ARRAY_SIZE(p6t_csi_postcall_fixtures) + i] = (struct CMUnitTest){
			.name = p6t_finish_fixtures[i].name,
			.test_func = test_finish_matches_stock_replay,
			.initial_state = (void *)&p6t_finish_fixtures[i],
		};
	}

	return cb_run_group_tests(tests, NULL, NULL);
}

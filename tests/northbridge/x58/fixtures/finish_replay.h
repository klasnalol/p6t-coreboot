/* SPDX-License-Identifier: GPL-2.0-only */
/* Generated from original module-55 completion instructions. */
#ifndef P6T_FINISH_REPLAY_H
#define P6T_FINISH_REPLAY_H
struct p6t_finish_fixture {
	const char *name;
	u32 state;
	bool stops;
	unsigned int io_count;
	struct p6t_csi_io_fixture io[16];
};
static const struct p6t_finish_fixture p6t_finish_fixtures[] = {
	{
		.name = "state0_seeded0",
		.state = 0,
		.stops = false,
		.io_count = 0,
		.io = {
		},
	},
	{
		.name = "state0_seeded1",
		.state = 0,
		.stops = false,
		.io_count = 0,
		.io = {
		},
	},
	{
		.name = "state1_seeded0",
		.state = 1,
		.stops = true,
		.io_count = 11,
		.io = {
			{ .offset = 0x1319, .port = 0xcf8, .width = 4, .write = true, .value = 0x8000a2cc },
			{ .offset = 0x131c, .port = 0xcfc, .width = 4, .write = false, .value = 0x0 },
			{ .offset = 0x1322, .port = 0xcfc, .width = 4, .write = true, .value = 0x0 },
			{ .offset = 0x132a, .port = 0xcf8, .width = 4, .write = true, .value = 0x8000a17c },
			{ .offset = 0x132f, .port = 0xcfc, .width = 4, .write = true, .value = 0x0 },
			{ .offset = 0x1337, .port = 0xcf8, .width = 4, .write = true, .value = 0x8000a180 },
			{ .offset = 0x133c, .port = 0xcfc, .width = 4, .write = true, .value = 0x0 },
			{ .offset = 0x133f, .port = 0x80, .width = 1, .write = true, .value = 0xfe },
			{ .offset = 0x1345, .port = 0xcf8, .width = 4, .write = true, .value = 0x8000a2cc },
			{ .offset = 0x1348, .port = 0xcfc, .width = 4, .write = false, .value = 0x0 },
			{ .offset = 0x134e, .port = 0xcfc, .width = 4, .write = true, .value = 0x400 },
		},
	},
	{
		.name = "state1_seeded1",
		.state = 1,
		.stops = true,
		.io_count = 11,
		.io = {
			{ .offset = 0x1319, .port = 0xcf8, .width = 4, .write = true, .value = 0x8000a2cc },
			{ .offset = 0x131c, .port = 0xcfc, .width = 4, .write = false, .value = 0xa55aa55a },
			{ .offset = 0x1322, .port = 0xcfc, .width = 4, .write = true, .value = 0xa55aa15a },
			{ .offset = 0x132a, .port = 0xcf8, .width = 4, .write = true, .value = 0x8000a17c },
			{ .offset = 0x132f, .port = 0xcfc, .width = 4, .write = true, .value = 0x0 },
			{ .offset = 0x1337, .port = 0xcf8, .width = 4, .write = true, .value = 0x8000a180 },
			{ .offset = 0x133c, .port = 0xcfc, .width = 4, .write = true, .value = 0x0 },
			{ .offset = 0x133f, .port = 0x80, .width = 1, .write = true, .value = 0xfe },
			{ .offset = 0x1345, .port = 0xcf8, .width = 4, .write = true, .value = 0x8000a2cc },
			{ .offset = 0x1348, .port = 0xcfc, .width = 4, .write = false, .value = 0xa55aa15a },
			{ .offset = 0x134e, .port = 0xcfc, .width = 4, .write = true, .value = 0xa55aa55a },
		},
	},
	{
		.name = "state2_seeded0",
		.state = 2,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0xe },
		},
	},
	{
		.name = "state2_seeded1",
		.state = 2,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0xe },
		},
	},
	{
		.name = "state3_seeded0",
		.state = 3,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0xe },
		},
	},
	{
		.name = "state3_seeded1",
		.state = 3,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0xe },
		},
	},
	{
		.name = "state4_seeded0",
		.state = 4,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0x6 },
		},
	},
	{
		.name = "state4_seeded1",
		.state = 4,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0x6 },
		},
	},
	{
		.name = "state5_seeded0",
		.state = 5,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0x6 },
		},
	},
	{
		.name = "state5_seeded1",
		.state = 5,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0x6 },
		},
	},
	{
		.name = "state6_seeded0",
		.state = 6,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0xe },
		},
	},
	{
		.name = "state6_seeded1",
		.state = 6,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0xe },
		},
	},
	{
		.name = "state7_seeded0",
		.state = 7,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0xe },
		},
	},
	{
		.name = "state7_seeded1",
		.state = 7,
		.stops = true,
		.io_count = 1,
		.io = {
			{ .offset = 0x1357, .port = 0xcf9, .width = 1, .write = true, .value = 0xe },
		},
	},
};
#endif

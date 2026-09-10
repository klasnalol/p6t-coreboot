/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/cpu.h>
#include <bootmode.h>
#include <console/console.h>
#include <timestamp.h>
#include <romstage_common.h>

#if CONFIG(BOARD_ASUS_P6T_SE)
/* Temporary P6T SE car_stage_entry diagnostics. */
void p6t_se_beep(unsigned int count);
#define P6TSE_CAR_BEEP(n) p6t_se_beep(n)
#else
#define P6TSE_CAR_BEEP(n) do { } while (0)
#endif

asmlinkage void car_stage_entry(void)
{
	/* 1: car_stage_entry itself was entered. */
	P6TSE_CAR_BEEP(1);

	timestamp_add_now(TS_ROMSTAGE_START);

	/* 2: timestamp path returned. */
	P6TSE_CAR_BEEP(2);

	/* Assumes the hardware was set up during the bootblock */
	console_init();

	/* 3: romstage console initialization returned. */
	P6TSE_CAR_BEEP(3);

	prevent_unsupported_s3_resume();

	/* 4: S3 check returned; next call is romstage_main(). */
	P6TSE_CAR_BEEP(4);

	romstage_main();
}

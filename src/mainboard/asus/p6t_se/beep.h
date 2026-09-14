/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef MAINBOARD_ASUS_P6T_SE_BEEP_H
#define MAINBOARD_ASUS_P6T_SE_BEEP_H

enum p6t_se_beep_error {
	P6T_SE_BEEP_ERR_NO_VALID_SPD = 1,
	P6T_SE_BEEP_ERR_IMC_DEVICE = 2,
	P6T_SE_BEEP_ERR_IMC_GLOBAL = 3,
	P6T_SE_BEEP_ERR_IMC_CHANNEL = 4,
	P6T_SE_BEEP_ERR_TIMINGS = 5,
	P6T_SE_BEEP_ERR_TOPOLOGY = 6,
	P6T_SE_BEEP_ERR_PCIE_ROOT_PORT = 7,
};

void p6t_se_beep(unsigned int count);
void p6t_se_beep_error(enum p6t_se_beep_error error);

#endif

/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef MAINBOARD_ASUS_P6T_SE_BEEP_H
#define MAINBOARD_ASUS_P6T_SE_BEEP_H

#include <types.h>

#define P6T_SE_CSI_PACKET_BYTES 8

enum p6t_se_beep_error {
	P6T_SE_BEEP_ERR_NO_VALID_SPD = 1,
	P6T_SE_BEEP_ERR_IMC_DEVICE = 2,
	P6T_SE_BEEP_ERR_IMC_GLOBAL = 3,
	P6T_SE_BEEP_ERR_IMC_CHANNEL = 4,
	P6T_SE_BEEP_ERR_TIMINGS = 5,
	P6T_SE_BEEP_ERR_TOPOLOGY = 6,
	P6T_SE_BEEP_ERR_PCIE_ROOT_PORT = 7,
	P6T_SE_BEEP_ERR_MINIT = 8,
	P6T_SE_BEEP_ERR_CSI = 9,
};

void p6t_se_beep(unsigned int count);
void p6t_se_beep_error(enum p6t_se_beep_error error);
void p6t_se_beep_error_detail(enum p6t_se_beep_error error,
			      unsigned int detail);
void p6t_se_build_csi_packet(u8 packet[P6T_SE_CSI_PACKET_BYTES], u8 result,
			     u8 status_class, u8 status_detail, u16 flags,
			     u16 progress);
void p6t_se_beep_csi_failure(u8 result, u8 status_class, u8 status_detail,
			     u16 flags, u16 progress);

#endif

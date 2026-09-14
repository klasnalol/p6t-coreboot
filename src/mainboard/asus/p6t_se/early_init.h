/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef MAINBOARD_ASUS_P6T_SE_EARLY_INIT_H
#define MAINBOARD_ASUS_P6T_SE_EARLY_INIT_H

#include <types.h>

void p6t_se_configure_stock_bases(void);
void p6t_se_select_spd_mux(u8 spd_address);

#endif

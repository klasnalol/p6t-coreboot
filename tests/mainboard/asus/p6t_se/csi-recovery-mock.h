/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef P6T_SE_CSI_RECOVERY_MOCK_H
#define P6T_SE_CSI_RECOVERY_MOCK_H

/* Replace architecture inlines before any source can emit host I/O instructions. */
#define __ARCH_IO_H__
#include <stdint.h>

uint8_t inb(uint16_t port);
uint16_t inw(uint16_t port);
uint32_t inl(uint16_t port);
void outb(uint8_t value, uint16_t port);
void outw(uint16_t value, uint16_t port);
void outl(uint32_t value, uint16_t port);

#endif

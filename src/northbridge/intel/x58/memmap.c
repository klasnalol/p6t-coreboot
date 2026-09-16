/* SPDX-License-Identifier: GPL-2.0-only */

#define __SIMPLE_DEVICE__

#include <arch/romstage.h>
#include <cbmem.h>
#include <commonlib/helpers.h>
#include <cpu/x86/mtrr.h>
#include <cpu/x86/smm.h>
#include <device/pci_ops.h>
#include <types.h>

#define X58_IOH_SYSTEM		PCI_DEV(0, 0x14, 0)
#define X58_TSEGCTRL		0xa8
#define  X58_TSEG_ENABLE	BIT(0)
#define  X58_TSEG_SIZE_SHIFT	1
#define  X58_TSEG_SIZE_MASK	7
#define  X58_TSEG_BASE_MASK	0xfff00000
#define X58_TOLM		0xd0
#define  X58_TOLM_MASK		0xfc000000

static u32 x58_tseg_control(void)
{
	return pci_read_config32(X58_IOH_SYSTEM, X58_TSEGCTRL);
}

static uintptr_t x58_tolm(void)
{
	return pci_read_config32(X58_IOH_SYSTEM, X58_TOLM) & X58_TOLM_MASK;
}

static uintptr_t x58_tseg_base(void)
{
	const u32 tseg = x58_tseg_control();

	if (!(tseg & X58_TSEG_ENABLE))
		return x58_tolm();
	return tseg & X58_TSEG_BASE_MASK;
}

static size_t x58_tseg_size(void)
{
	const u32 tseg = x58_tseg_control();
	const unsigned int encoding =
		(tseg >> X58_TSEG_SIZE_SHIFT) & X58_TSEG_SIZE_MASK;

	if (!(tseg & X58_TSEG_ENABLE) || encoding > 4)
		return 0;
	return (512 * KiB) << encoding;
}

uintptr_t cbmem_top_chipset(void)
{
	/* Keep post-CAR cache ranges naturally aligned without exposing TSEG. */
	return ALIGN_DOWN(x58_tseg_base(), 8 * MiB);
}

void smm_region(uintptr_t *start, size_t *size)
{
	*start = x58_tseg_base();
	*size = x58_tseg_size();
}

void fill_postcar_frame(struct postcar_frame *pcf)
{
	const uintptr_t top = cbmem_top();

	/* Cache CBMEM/ramstage plus the exact SMM region used for relocation. */
	postcar_frame_add_mtrr(pcf, top - 8 * MiB, 8 * MiB, MTRR_TYPE_WRBACK);
	postcar_frame_add_mtrr(pcf, x58_tseg_base(), x58_tseg_size(),
			       MTRR_TYPE_WRBACK);
}

/* SPDX-License-Identifier: GPL-2.0-only */

#include <cbmem.h>
#include <commonlib/helpers.h>
#include <cpu/cpu.h>
#include <device/device.h>
#include <device/pci.h>
#include <device/pci_ops.h>

#define X58_IOH_SYSTEM	PCI_DEV(0, 0x14, 0)
#define X58_TSEGCTRL	0xa8
#define X58_TSEG_BASE_MASK 0xfff00000
#define X58_TOLM	0xd0
#define X58_TOHM_LOW	0xd4
#define X58_TOHM_HIGH	0xd8
#define X58_MEMORY_MASK	0xfc000000

static void x58_domain_read_resources(struct device *dev)
{
	unsigned int index = 3;
	const u32 tolm = pci_s_read_config32(X58_IOH_SYSTEM, X58_TOLM) &
		X58_MEMORY_MASK;
	u64 tohm = pci_s_read_config32(X58_IOH_SYSTEM, X58_TOHM_HIGH);
	const uintptr_t cbmem_top_addr = cbmem_top();
	const uintptr_t tseg_base =
		pci_s_read_config32(X58_IOH_SYSTEM, X58_TSEGCTRL) &
		X58_TSEG_BASE_MASK;

	tohm = (tohm << 32) |
		(pci_s_read_config32(X58_IOH_SYSTEM, X58_TOHM_LOW) &
		 X58_MEMORY_MASK);

	pci_domain_read_resources(dev);
	ram_from_to(dev, index++, 0, 0xa0000);
	mmio_from_to(dev, index++, 0xa0000, 0xc0000);
	reserved_ram_from_to(dev, index++, 0xc0000, 1 * MiB);
	ram_from_to(dev, index++, 1 * MiB, cbmem_top_addr);
	reserved_ram_from_to(dev, index++, cbmem_top_addr, tseg_base);
	mmio_from_to(dev, index++, tseg_base, tolm);
	mmio_from_to(dev, index++, tolm, 4ull * GiB);
	if (tohm > 4ull * GiB)
		upper_ram_end(dev, index++, tohm);
	mmconf_resource(dev, index++);
}

static void x58_domain_set_resources(struct device *dev)
{
	assign_resources(dev->downstream);
}

struct device_operations x58_pci_domain_ops = {
	.read_resources = x58_domain_read_resources,
	.set_resources = x58_domain_set_resources,
	.scan_bus = pci_host_bridge_scan_bus,
	.ops_pci = &pci_dev_ops_pci,
};

struct device_operations x58_cpu_bus_ops = {
	.read_resources = noop_read_resources,
	.set_resources = noop_set_resources,
	.init = mp_cpu_bus_init,
};

struct chip_operations northbridge_intel_x58_ops = {
	.name = "Intel X58 IOH",
};

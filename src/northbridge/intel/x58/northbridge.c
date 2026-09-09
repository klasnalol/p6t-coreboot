/* SPDX-License-Identifier: GPL-2.0-only */

#include <cpu/cpu.h>
#include <device/device.h>
#include <device/pci.h>

static void x58_domain_read_resources(struct device *dev)
{
	pci_domain_read_resources(dev);
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

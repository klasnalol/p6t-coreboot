/* SPDX-License-Identifier: GPL-2.0-only */

#include <console/console.h>
#include <device/device.h>
#include <device/pci.h>
#include <device/pciexp.h>
#include <device/pci_ids.h>
#include <device/pci_ops.h>

/* PCI Express capability registers. The X58 capability starts at 0x90. */
#define X58_PCIE_CAP		0x92
#define  X58_PCIE_CAP_SLOT	BIT(8)
#define X58_PCIE_LINK_STATUS	0xa2
#define  X58_PCIE_LINK_SPEED_MASK	0x000f
#define  X58_PCIE_LINK_WIDTH_MASK	0x03f0
#define  X58_PCIE_LINK_WIDTH_SHIFT	4
#define  X58_PCIE_LINK_TRAINING	BIT(11)
#define  X58_PCIE_DLL_ACTIVE	BIT(13)

/* Present on the first device in each physical PCIe I/O unit. */
#define X58_PCIE_IOU_BIF_CTRL	0x190

static int x58_iou_number(const struct device *dev)
{
	switch (PCI_SLOT(dev->path.pci.devfn)) {
	case 3:
		return 0;
	case 7:
		return 1;
	case 1:
		return 2;
	default:
		return -1;
	}
}

static void x58_pcie_enable(struct device *dev)
{
	/*
	 * PXPCAP.SI is write-once. Every X58 root port instantiated in the
	 * P6T SE devicetree terminates at a physical expansion slot.
	 */
	pci_or_config16(dev, X58_PCIE_CAP, X58_PCIE_CAP_SLOT);
}

static void x58_pcie_init(struct device *dev)
{
	const u16 link = pci_read_config16(dev, X58_PCIE_LINK_STATUS);
	const unsigned int speed = link & X58_PCIE_LINK_SPEED_MASK;
	const unsigned int width =
		(link & X58_PCIE_LINK_WIDTH_MASK) >> X58_PCIE_LINK_WIDTH_SHIFT;
	const int iou = x58_iou_number(dev);

	if (iou >= 0) {
		const u16 bif = pci_read_config16(dev, X58_PCIE_IOU_BIF_CTRL);

		printk(BIOS_INFO, "%s: IOU%d bifurcation %x (strap value is 7)\n",
		       dev_path(dev), iou, bif & 7);
	}

	printk(BIOS_INFO, "%s: PCIe %s, Gen%u x%u%s\n", dev_path(dev),
	       link & X58_PCIE_DLL_ACTIVE ? "link active" : "link down",
	       speed, width,
	       link & X58_PCIE_LINK_TRAINING ? ", training" : "");

	pci_dev_init(dev);
}

static struct device_operations x58_pcie_ops = {
	.read_resources		= pci_bus_read_resources,
	.set_resources		= pci_dev_set_resources,
	.enable_resources	= pci_bus_enable_resources,
	.scan_bus		= pciexp_scan_bridge,
	.reset_bus		= pci_bus_reset,
	.enable			= x58_pcie_enable,
	.init			= x58_pcie_init,
	.ops_pci		= &pci_dev_ops_pci,
};

/* X58 root ports are bus 0, devices 1 through 10, function 0. */
static const unsigned short x58_pcie_ids[] = {
	0x3408, 0x3409, 0x340a, 0x340b, 0x340c,
	0x340d, 0x340e, 0x340f, 0x3410, 0x3411,
	0,
};

static const struct pci_driver x58_pcie_driver __pci_driver = {
	.ops		= &x58_pcie_ops,
	.vendor		= PCI_VID_INTEL,
	.devices	= x58_pcie_ids,
};

/* SPDX-License-Identifier: GPL-2.0-only */

#include <console/console.h>
#include <cpu/cpu.h>
#include <device/device.h>

static void model_206cx_init(struct device *cpu)
{
	(void)cpu;

	/*
	 * Placeholder only.
	 *
	 * Proper Westmere-EP CPU initialization, AP startup and SMM
	 * relocation have not been implemented yet.
	 */
	printk(BIOS_DEBUG, "model_206cx: placeholder CPU init\n");
}

/*
 * Temporary implementation required by mp_cpu_bus_init().
 *
 * Do not attempt AP/SMM initialization until the Westmere-EP MP path
 * has been implemented and validated.
 */
void mp_init_cpus(struct bus *cpu_bus)
{
	(void)cpu_bus;

	printk(BIOS_WARNING,
	       "model_206cx: MP/SMM initialization not implemented\n");
}

static struct device_operations cpu_dev_ops = {
	.init = model_206cx_init,
};

static const struct cpu_device_id cpu_table[] = {
	{ X86_VENDOR_INTEL, 0x206c2, CPUID_EXACT_MATCH_MASK },
	CPU_TABLE_END
};

static const struct cpu_driver driver __cpu_driver = {
	.ops = &cpu_dev_ops,
	.id_table = cpu_table,
};

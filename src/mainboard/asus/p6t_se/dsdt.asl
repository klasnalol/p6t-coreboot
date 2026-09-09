/* SPDX-License-Identifier: GPL-2.0-only */

#include <acpi/acpi.h>

DefinitionBlock(
	"dsdt.aml",
	"DSDT",
	ACPI_DSDT_REV_2,
	OEM_ID,
	ACPI_TABLE_CREATOR,
	0x00000001
)
{
	#include <acpi/dsdt_top.asl>

	OSYS = 2002

	#include <southbridge/intel/common/acpi/platform.asl>

	Scope (\_SB)
	{
		Device (PCI0)
		{
			Name (_HID, EisaId ("PNP0A08"))
			Name (_CID, EisaId ("PNP0A03"))
			Name (_BBN, Zero)

			#include <southbridge/intel/i82801jx/acpi/ich10.asl>
		}
	}

	#include <southbridge/intel/common/acpi/sleepstates.asl>
}

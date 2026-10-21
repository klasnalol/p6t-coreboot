#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-only
"""Offline original module-55 MINIT wrapper replay; see replay_csi.py setup.

All IN/OUT values and retained-training metadata are synthetic. The original
MINIT DLL call is intercepted before execution. This does not train memory or
access host hardware.
"""

import argparse
import hashlib
import json
from pathlib import Path
import struct

import capstone
from unicorn import UC_HOOK_MEM_READ
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_EDI, UC_X86_REG_ESI, UC_X86_REG_ESP

from replay_csi import Replay, CODE_BASE, MODULE_SHA256, verify_module


MINIT_START = 0x1104
MINIT_END = 0x12EA
MINIT_POLICY_SIZE = 0xC4
MINIT_CONTEXT_SIZE = 0x2AF0
METADATA_BASE = 0xFFE50000


def find_minit_call(data):
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    instructions = list(decoder.disasm(data[MINIT_START:MINIT_END], MINIT_START))
    matches = []
    for index, insn in enumerate(instructions[:-1]):
        following = instructions[index + 1]
        if (insn.mnemonic == "mov" and insn.op_str == "eax, 0xfffc1fe0"
                and following.mnemonic == "call" and following.op_str == "eax"):
            matches.append(following.address)
    if len(matches) != 1:
        raise ValueError(f"Expected one MINIT call; found {matches}")
    return matches[0], instructions


class MinitReplay(Replay):
    def __init__(self, data, case):
        self.call_offset, self.decoded = find_minit_call(data)
        super().__init__(data, case)
        self.context = None
        self.context_address = None
        self.pci[0x8000F8A4] = case["lpc_a4"]
        self.pci[0x80FF1400] = case["pci_ff_14_00"]
        self.pci[0x80FE1400] = case["pci_fe_14_00"]
        self.io[0x801] = case["port_801"]
        self.io[0x805] = case["port_805"]
        self.uc.mem_map(METADATA_BASE, 0x1000)
        node = bytearray(0x44)
        struct.pack_into("<I", node, 0, METADATA_BASE + 0x40)
        node[4] = 0x4E if case["metadata_has_tag_4e"] else 0
        struct.pack_into("<I", node, 0x40, 0xFFFFFFFF)
        self.uc.mem_write(METADATA_BASE, bytes(node))
        self.uc.hook_add(UC_HOOK_MEM_READ, self.metadata_read,
                         None, METADATA_BASE, METADATA_BASE + 0xFFF)
        # Reuse the bounded emulator run method with the correct entry below.

    def code(self, uc, address, size, _):
        offset = address - CODE_BASE
        if not (MINIT_START <= offset < MINIT_END or 0x1444 <= offset < 0x147A):
            raise RuntimeError(f"Execution escaped MINIT wrapper/helper at {address:#x}")
        self.instructions.append(offset)
        if offset != self.call_offset:
            return
        if uc.reg_read(UC_X86_REG_EAX) != 0xFFFC1FE0:
            raise RuntimeError("Unexpected MINIT call target")
        self.policy_address = uc.reg_read(UC_X86_REG_EDI)
        self.context_address = uc.reg_read(UC_X86_REG_ESI)
        sp = uc.reg_read(UC_X86_REG_ESP)
        arguments = struct.unpack("<II", bytes(uc.mem_read(sp, 8)))
        if arguments != (self.policy_address, self.context_address):
            raise RuntimeError("MINIT arguments differ from policy/context pointers")
        self.policy = bytes(uc.mem_read(self.policy_address, MINIT_POLICY_SIZE))
        self.context = bytes(uc.mem_read(self.context_address, MINIT_CONTEXT_SIZE))
        self.event("intercepted_dll_call", target=0xFFFC1FE0,
                   policy_size=MINIT_POLICY_SIZE, context_size=MINIT_CONTEXT_SIZE,
                   arguments=list(arguments))
        self.termination = "before_dll_call"
        uc.emu_stop()

    def port_in(self, uc, port, size, user_data):
        if port in (0x801, 0x805):
            value = self.io[port] & ((1 << (8 * size)) - 1)
            self.event("in", port=port, width=size, value=value)
            return value
        return super().port_in(uc, port, size, user_data)

    def metadata_read(self, uc, _access, address, size, _value, _):
        self.event("synthetic_metadata_read", address=address, width=size,
                   value=int.from_bytes(uc.mem_read(address, size), "little"))

    def port_out(self, uc, port, size, value, user_data):
        if port in (0x73, 0x805):
            self.event("out", port=port, width=size, value=value)
            if port == 0x73:
                self.case[f"extended_{self.extended_index:02x}"] = value
            else:
                self.io[port] = value
            return
        return super().port_out(uc, port, size, value, user_data)

    def run(self):
        # Output inputs are preserved even when original instructions write CMOS.
        inputs = dict(self.case)
        self.uc.emu_start(CODE_BASE + MINIT_START, CODE_BASE + MINIT_END,
                          timeout=2_000_000, count=20_000)
        if self.policy is None or self.context is None:
            raise RuntimeError("MINIT replay did not reach DLL call")
        return {
            "inputs": inputs, "policy_hex": self.policy.hex(),
            "policy_sha256": hashlib.sha256(self.policy).hexdigest(),
            "context_hex": self.context.hex(),
            "context_sha256": hashlib.sha256(self.context).hexdigest(),
            "policy_address": self.policy_address, "context_address": self.context_address,
            "termination": self.termination, "instruction_count": len(self.instructions),
            "executed_offsets": self.instructions, "trace": self.trace,
        }


def minit_cases():
    modes = {
        "skip58": {"cmos_58": 1},
        "skip8e": {"cmos_8e": 0xC0},
        "settings_zero": {},
        "settings_bits": {"extended_80": 0xA0, "extended_81": 0x42, "extended_82": 6},
        "ratio_30": {"extended_8e": 0x30},
        "ratio_10": {"extended_8e": 0x10},
        "ratio_clamped": {"extended_8e": 0xFF},
        "saved_tag": {"port_805": 0x14, "metadata_has_tag_4e": True},
        "saved_no_tag": {"port_805": 0x14},
        "helper_lpc_bit": {"lpc_a4": 2, "port_805": 0xFF},
        "helper_port_801": {"port_801": 8, "port_805": 0x14},
        "pci_fallback": {"pci_ff_14_00": 0xFF, "pci_fe_14_00": 0x86},
    }
    for mode, modifications in modes.items():
        for state in (0, 1, 2):
            case = {"name": f"{mode}_state{state}", "revision": 0x13, "state": state,
                    "cmos_58": 0, "cmos_8e": 0, "extended_80": 0,
                    "extended_81": 0, "extended_82": 0, "extended_8e": 0,
                    "lpc_a4": 0, "port_801": 0, "port_805": 0,
                    "pci_ff_14_00": 0x86, "pci_fe_14_00": 0xFF,
                    "metadata_has_tag_4e": False}
            case.update(modifications)
            yield case


def fixture_header(cases):
    fields = ("cmos_58", "cmos_8e", "extended_80", "extended_81", "extended_82", "extended_8e")
    lines = ["/* SPDX-License-Identifier: GPL-2.0-only */",
             "/* Generated by replay_minit.py from original x86 instructions. */",
             f"/* Original module SHA256: {MODULE_SHA256} */",
             "#ifndef P6T_MINIT_POLICY_REPLAY_FIXTURES_H",
             "#define P6T_MINIT_POLICY_REPLAY_FIXTURES_H", "",
             "struct p6t_minit_policy_fixture {", "\tconst char *name;", "\tu8 state;"]
    lines.extend(f"\tu8 {field};" for field in fields)
    lines.extend(["\tu32 observed_training_pointer;", "\tu8 policy[0xc4];", "};", "",
                  "static const struct p6t_minit_policy_fixture p6t_minit_policy_fixtures[] = {"])
    for result in cases:
        case = result["inputs"]
        policy = bytes.fromhex(result["policy_hex"])
        pointer = int.from_bytes(policy[0x4A:0x4E], "little")
        lines.extend(["\t{", f'\t\t.name = "{case["name"]}",', f'\t\t.state = {case["state"]},'])
        lines.extend(f"\t\t.{field} = 0x{case[field]:02x}," for field in fields)
        lines.extend([f"\t\t.observed_training_pointer = 0x{pointer:08x},", "\t\t.policy = {"])
        for offset in range(0, len(policy), 16):
            lines.append("\t\t\t" + ", ".join(f"0x{x:02x}" for x in policy[offset:offset + 16]) + ",")
        lines.extend(["\t\t},", "\t},"])
    lines.extend(["};", "", "#endif", ""])
    return "\n".join(lines)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--module", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--fixtures", type=Path, required=True)
    args = parser.parse_args()
    data = args.module.read_bytes()
    verify_module(data)
    call_offset, instructions = find_minit_call(data)
    cases = [MinitReplay(data, case).run() for case in minit_cases()]
    identity = {"module_sha256": MODULE_SHA256, "module_size": len(data),
                "wrapper_start": MINIT_START, "wrapper_end_exclusive": MINIT_END,
                "dll_call_offset": call_offset, "dll_target": 0xFFFC1FE0,
                "policy_size": MINIT_POLICY_SIZE, "context_size": MINIT_CONTEXT_SIZE,
                "provenance": "Original module-55 x86 wrapper and helper instruction replay in Unicorn.",
                "limitations": ["CMOS/PCI/I/O and retained metadata are explicit synthetic inputs.",
                                "Original MINIT DLL is intercepted and never executed.",
                                "Memory training, hardware state transitions and electrical behavior are not modeled."]}
    args.output.mkdir(parents=True, exist_ok=True)
    args.fixtures.mkdir(parents=True, exist_ok=True)
    (args.output / "minit-policy-cases.json").write_text(json.dumps({"identity": identity, "cases": cases}, indent=2) + "\n")
    decoded = [{"offset": insn.address, "bytes": insn.bytes.hex(),
                "instruction": f"{insn.mnemonic} {insn.op_str}".rstrip()} for insn in instructions]
    (args.output / "minit-wrapper-disassembly.json").write_text(json.dumps({"identity": identity, "instructions": decoded}, indent=2) + "\n")
    (args.fixtures / "minit_policy_replay.h").write_text(fixture_header(cases))
    print(json.dumps({"policy_cases": len(cases), "dll_call_offset": hex(call_offset),
                      "policy_bytes": MINIT_POLICY_SIZE, "context_bytes": MINIT_CONTEXT_SIZE}, indent=2))


if __name__ == "__main__":
    main()

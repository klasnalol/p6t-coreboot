#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-only
"""Replay the stock P6T SE module-55 CSI wrapper in an offline x86 emulator.

The policy is produced by original instructions, never reconstructed in Python.
All hardware inputs are explicit synthetic values. IN/OUT are emulated dictionary
accesses; CPUID is stubbed and the CSI DLL call is intercepted. No target code is
executed natively, and no host hardware is accessed.

Install pinned dependencies in a task-local venv:
  python3 -m venv build/p6t-csi-replay-venv
  build/p6t-csi-replay-venv/bin/pip install unicorn==2.1.4 capstone==5.0.9
"""

import argparse
import hashlib
import json
from pathlib import Path
import struct

import capstone
import unicorn
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE, UC_HOOK_INSN
from unicorn import UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE, UC_MEM_READ
from unicorn.x86_const import (
    UC_X86_INS_IN, UC_X86_INS_OUT, UC_X86_REG_EAX, UC_X86_REG_EBX,
    UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_EDI, UC_X86_REG_EIP,
    UC_X86_REG_ESP, UC_X86_REG_EFLAGS,
)


MODULE_SHA256 = "23d6f3520db4755db3af42c958d6b22c88d7166375c3d7a92ab3c4b4e41b8d64"
FUNCTION_START = 0x4BA
FUNCTION_END = 0x1104
VENDOR_CALL = 0x1025
POLICY_SIZE = 0x450
CODE_BASE = 0x100000
STACK_BASE = 0x200000
STACK_SIZE = 0x10000
RETURN_ADDRESS = 0x300000
MMCONFIG = 0xE0000000


def verify_module(data):
    digest = hashlib.sha256(data).hexdigest()
    if digest != MODULE_SHA256:
        raise ValueError(f"Unsupported module SHA256 {digest}; offsets require revalidation")
    expected = {
        0x29E: bytes.fromhex("e817020000"),  # Direct caller resolves to 0x4ba.
        0x4BA: bytes.fromhex("558becb95004000033c02be18bfcc1e902f3ab"),
        0x4F8: bytes.fromhex("884f0a8b451088470b"),
        0x512: bytes.fromhex("b10133dbc6843b260200000181c3b1000000fec975ee"),
        0x1020: bytes.fromhex("b80070feffffd05a5f"),
        0x10E4: bytes.fromhex("66baf90cb006eef4ebfd"),
        0x1100: bytes.fromhex("8be55dc3"),
    }
    for offset, signature in expected.items():
        if data[offset:offset + len(signature)] != signature:
            raise ValueError(f"Module instruction signature mismatch at {offset:#x}")


def disassembly(data):
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    return [{"offset": insn.address, "bytes": insn.bytes.hex(),
             "instruction": f"{insn.mnemonic} {insn.op_str}".rstrip()}
            for insn in md.disasm(data[FUNCTION_START:FUNCTION_END], FUNCTION_START)]


class Replay:
    def __init__(self, data, case, status=None, seeded_io=False):
        self.uc = Uc(UC_ARCH_X86, UC_MODE_32)
        self.case = case
        self.status = status
        self.trace = []
        self.instructions = []
        self.policy = None
        self.policy_address = None
        self.termination = None
        self.cmos_index = 0
        self.extended_index = 0
        self.pci_address = 0
        self.pci = {}
        self.io = {}
        if seeded_io:
            # Exercise preservation in read-modify-write instructions, including
            # 16-bit GPIO and 8-bit PCI operations. These are synthetic inputs.
            for port in (0x500, 0x504, 0x50C):
                self.io[port] = 0xA55A
            self.io[0x533] = 0xA6
            self.io[0x537] = 0xA7
            self.io[0x53B] = 0xA7
            self.pci[0x8000F84C] = 0x25
            self.pci[0x8000F8AE] = 0xA6
        self.initial_io = dict(self.io)
        self.initial_pci = dict(self.pci)
        self.uc.mem_map(CODE_BASE, (len(data) + 0xFFF) & ~0xFFF)
        self.uc.mem_write(CODE_BASE, data)
        self.uc.mem_map(STACK_BASE, STACK_SIZE)
        self.uc.mem_map(RETURN_ADDRESS, 0x1000)
        self.uc.mem_map(MMCONFIG, 0x1000)
        self.uc.mem_write(MMCONFIG + 8, bytes([case["revision"]]))
        initial_sp = STACK_BASE + STACK_SIZE - 0x100
        self.uc.mem_write(initial_sp, struct.pack("<IIII", RETURN_ADDRESS, 0, 0, case["state"]))
        self.uc.reg_write(UC_X86_REG_ESP, initial_sp)
        self.uc.reg_write(UC_X86_REG_EFLAGS, 2)  # DF=0 for REP STOSD.
        self.uc.hook_add(UC_HOOK_CODE, self.code)
        self.uc.hook_add(UC_HOOK_INSN, self.port_in, None, 1, 0, UC_X86_INS_IN)
        self.uc.hook_add(UC_HOOK_INSN, self.port_out, None, 1, 0, UC_X86_INS_OUT)
        self.uc.hook_add(UC_HOOK_MEM_READ | UC_HOOK_MEM_WRITE, self.mmconfig,
                         None, MMCONFIG, MMCONFIG + 0xFFF)

    def event(self, operation, **kwargs):
        eip = self.uc.reg_read(UC_X86_REG_EIP)
        self.trace.append({"offset": eip - CODE_BASE, "operation": operation, **kwargs})

    def code(self, uc, address, size, _):
        if address == RETURN_ADDRESS:
            self.termination = "returned"
            uc.emu_stop()
            return
        offset = address - CODE_BASE
        if not FUNCTION_START <= offset < FUNCTION_END:
            raise RuntimeError(f"Execution escaped CSI wrapper at {address:#x}")
        self.instructions.append(offset)
        if offset == 0xFF5:
            leaf = uc.reg_read(UC_X86_REG_EAX)
            if leaf != 1:
                raise RuntimeError(f"Unexpected CPUID leaf {leaf:#x}")
            self.event("cpuid", leaf=leaf, eax=self.case["cpu_signature"], ebx=0, ecx=0, edx=0)
            uc.reg_write(UC_X86_REG_EAX, self.case["cpu_signature"])
            for register in (UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX):
                uc.reg_write(register, 0)
            uc.reg_write(UC_X86_REG_EIP, address + size)
        elif offset == VENDOR_CALL:
            target = uc.reg_read(UC_X86_REG_EAX)
            if target != 0xFFFE7000:
                raise RuntimeError(f"Unexpected DLL target {target:#x}")
            self.policy_address = uc.reg_read(UC_X86_REG_EDI)
            sp = uc.reg_read(UC_X86_REG_ESP)
            arguments = struct.unpack("<II", bytes(uc.mem_read(sp, 8)))
            if arguments != (self.policy_address, self.policy_address):
                raise RuntimeError("CSI call arguments do not point to captured policy")
            self.policy = bytes(uc.mem_read(self.policy_address, POLICY_SIZE))
            self.event("intercepted_dll_call", target=target,
                       policy_size=POLICY_SIZE, argument_count=2)
            if self.status is None:
                self.termination = "before_dll_call"
                uc.emu_stop()
                return
            uc.mem_write(self.policy_address + 0x443, struct.pack("<I", self.status["flags"]))
            uc.mem_write(self.policy_address + 0x447, bytes([self.status["class"]]))
            uc.mem_write(self.policy_address + 0x44C, bytes([self.status["detail"]]))
            uc.reg_write(UC_X86_REG_EAX, self.status.get("return_eax", 0))
            self.event("injected_dll_status", **self.status)
            uc.reg_write(UC_X86_REG_EIP, address + size)
        elif bytes(uc.mem_read(address, 1)) == b"\xF4":
            self.event("hlt")
            self.termination = "halt_after_reset_request"
            uc.emu_stop()

    def mmconfig(self, _uc, access, address, size, value, _):
        if access == UC_MEM_READ:
            value = int.from_bytes(self.uc.mem_read(address, size), "little")
            self.event("mmconfig_read", address=address, width=size, value=value)
        else:
            self.event("mmconfig_write", address=address, width=size, value=value)

    def port_in(self, _uc, port, size, _):
        if port == 0x71:
            key = f"cmos_{self.cmos_index:02x}"
            if key not in self.case:
                raise RuntimeError(f"Unspecified CMOS input {key}")
            value = self.case[key]
        elif port == 0x73:
            key = f"extended_{self.extended_index:02x}"
            if key not in self.case:
                raise RuntimeError(f"Unspecified extended CMOS input {key}")
            value = self.case[key]
        elif 0xCFC <= port <= 0xCFF:
            key = (self.pci_address & ~3) + port - 0xCFC
            value = sum(self.pci.get(key + i, 0) << (8 * i) for i in range(size))
        elif port == 0x61:
            value = 0
        elif port in (0x500, 0x504, 0x50C, 0x533, 0x537, 0x53B):
            value = self.io.get(port, 0)
        else:
            raise RuntimeError(f"Unexpected port read {port:#x} width {size}")
        value &= (1 << (size * 8)) - 1
        self.event("in", port=port, width=size, value=value)
        return value

    def port_out(self, _uc, port, size, value, _):
        self.event("out", port=port, width=size, value=value)
        if port == 0x70:
            self.cmos_index = value
        elif port == 0x72:
            self.extended_index = value
        elif port == 0xCF8:
            self.pci_address = value
        elif 0xCFC <= port <= 0xCFF:
            key = (self.pci_address & ~3) + port - 0xCFC
            for i in range(size):
                self.pci[key + i] = (value >> (8 * i)) & 0xFF
        elif port in (0x500, 0x504, 0x50C, 0x533, 0x537, 0x53B, 0xCF9):
            self.io[port] = value
        else:
            raise RuntimeError(f"Unexpected port write {port:#x} width {size}")

    def run(self):
        self.uc.emu_start(CODE_BASE + FUNCTION_START, CODE_BASE + FUNCTION_END,
                          timeout=2_000_000, count=20_000)
        if self.policy is None or self.termination is None:
            raise RuntimeError("Replay did not reach a recognized terminal condition")
        result = {
            "inputs": self.case, "policy_hex": self.policy.hex(),
            "policy_sha256": hashlib.sha256(self.policy).hexdigest(),
            "termination": self.termination,
            "instruction_count": len(self.instructions),
            "executed_offsets": self.instructions, "trace": self.trace,
        }
        if self.status is not None:
            result["injected_status"] = self.status
            result["synthetic_initial_io"] = self.initial_io
            result["synthetic_initial_pci"] = self.initial_pci
            result["final_io"] = self.io
            result["final_pci"] = self.pci
        return result


def policy_cases():
    for revision in (0x0F, 0x10, 0x13, 0x20):
        for cpu in (0x6A0, 0x6A4):
            for mode in ("skip", "override", "fallback"):
                for state in (0, 1):
                    case = {"name": f"rev{revision:02x}_cpu{cpu:03x}_{mode}_state{state}",
                            "revision": revision, "cpu_signature": cpu, "state": state,
                            "cmos_58": int(mode == "skip"), "cmos_8e": 0,
                            "extended_80": 7, "extended_82": 1,
                            "extended_88": 3 if mode == "override" else 0,
                            "extended_89": 0xFC if mode == "override" else 0}
                    yield case
        for mode in ("skip8e", "fallback_zero", "override_auto", "pairs_disabled"):
            case = {"name": f"rev{revision:02x}_cpu6a4_{mode}_state0",
                    "revision": revision, "cpu_signature": 0x6A4, "state": 0,
                    "cmos_58": 0, "cmos_8e": 0xC0 if mode == "skip8e" else 0,
                    "extended_80": 0 if mode == "fallback_zero" else 7,
                    "extended_82": 0 if mode == "pairs_disabled" else 1,
                    "extended_88": 0x20 if mode == "override_auto" else 0,
                    "extended_89": 0xDF if mode == "override_auto" else 0}
            yield case


def fixture_header(cases):
    lines = ["/* SPDX-License-Identifier: GPL-2.0-only */",
             "/* Generated by util/p6t_reverse/replay_csi.py from original x86 instructions. */",
             f"/* Original module SHA256: {MODULE_SHA256} */",
             "#ifndef P6T_CSI_POLICY_REPLAY_FIXTURES_H",
             "#define P6T_CSI_POLICY_REPLAY_FIXTURES_H", "",
             "struct p6t_csi_policy_fixture {",
             "\tconst char *name;", "\tu8 revision;", "\tu16 cpu_signature;",
             "\tu8 state;", "\tstruct x58_csi_cmos_settings settings;",
             "\tu8 policy[X58_CSI_POLICY_SIZE];", "};", "",
             "static const struct p6t_csi_policy_fixture p6t_csi_policy_fixtures[] = {"]
    fields = ("cmos_58", "cmos_8e", "extended_80", "extended_82", "extended_88", "extended_89")
    for result in cases:
        case = result["inputs"]
        lines.extend(["\t{", f'\t\t.name = "{case["name"]}",',
                      f'\t\t.revision = 0x{case["revision"]:02x},',
                      f'\t\t.cpu_signature = 0x{case["cpu_signature"]:03x},',
                      f'\t\t.state = {case["state"]},', "\t\t.settings = {"])
        lines.extend(f"\t\t\t.{field} = 0x{case[field]:02x}," for field in fields)
        lines.extend(["\t\t},", "\t\t.policy = {"])
        policy = bytes.fromhex(result["policy_hex"])
        for offset in range(0, len(policy), 16):
            lines.append("\t\t\t" + ", ".join(f"0x{x:02x}" for x in policy[offset:offset + 16]) + ",")
        lines.extend(["\t\t},", "\t},"])
    lines.extend(["};", "", "#endif", ""])
    return "\n".join(lines)


def postcall_fixture_header(cases):
    lines = ["/* SPDX-License-Identifier: GPL-2.0-only */",
             "/* Generated from original x86 instructions by replay_csi.py. */",
             f"/* Original module SHA256: {MODULE_SHA256} */",
             "#ifndef P6T_CSI_POSTCALL_REPLAY_FIXTURES_H",
             "#define P6T_CSI_POSTCALL_REPLAY_FIXTURES_H", "",
             "struct p6t_csi_io_fixture {",
             "\tu16 offset;", "\tu16 port;", "\tu8 width;", "\tbool write;", "\tu32 value;",
             "};", "", "struct p6t_csi_postcall_fixture {",
             "\tconst char *name;", "\tu8 status_class;", "\tu8 detail;", "\tu32 flags;",
             "\tbool resets;", "\tu8 io_count;", "\tstruct p6t_csi_io_fixture io[24];",
             "};", "",
             "static const struct p6t_csi_postcall_fixture p6t_csi_postcall_fixtures[] = {"]
    for result in cases:
        status = result["injected_status"]
        trace_start = next(i for i, event in enumerate(result["trace"])
                           if event["operation"] == "injected_dll_status") + 1
        events = [event for event in result["trace"][trace_start:]
                  if event["operation"] in ("in", "out")]
        assert len(events) <= 24
        lines.extend(["\t{", f'\t\t.name = "{result["name"]}",',
                      f'\t\t.status_class = {status["class"]},',
                      f'\t\t.detail = {status["detail"]},',
                      f'\t\t.flags = 0x{status["flags"]:03x},',
                      f'\t\t.resets = {str(result["termination"] == "halt_after_reset_request").lower()},',
                      f"\t\t.io_count = {len(events)},", "\t\t.io = {"])
        for event in events:
            write = str(event["operation"] == "out").lower()
            lines.append(f'\t\t\t{{ 0x{event["offset"]:04x}, 0x{event["port"]:04x}, '
                         f'{event["width"]}, {write}, 0x{event["value"]:08x} }},')
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
    cases = [Replay(data, case).run() for case in policy_cases()]
    post = []
    default_case = next(c["inputs"] for c in cases
                        if c["inputs"]["name"] == "rev13_cpu6a4_fallback_state0")
    for status_class, flags, detail in ((0, 0, 0), (1, 0x106, 3), (2, 0x06, 3),
                                      (2, 0x106, 1), (2, 0x106, 2), (2, 0x106, 3),
                                      (2, 0x106, 0), (2, 0x106, 4)):
        for seeded in (False, True):
            status = {"class": status_class, "flags": flags, "detail": detail, "return_eax": 0}
            record = Replay(data, default_case, status, seeded).run()
            record["name"] = f"class{status_class}_flags{flags:03x}_detail{detail}_seeded{int(seeded)}"
            post.append(record)
    identity = {"module_sha256": MODULE_SHA256, "module_size": len(data),
                "wrapper_start": FUNCTION_START, "wrapper_end_exclusive": FUNCTION_END,
                "caller_offset": 0x29E, "dll_call_offset": VENDOR_CALL,
                "unicorn_version": unicorn.__version__, "capstone_version": capstone.__version__,
                "provenance": "Instruction replay of original module-55 bytes; original CSI DLL is intercepted.",
                "limitations": ["CMOS, CPU and PCI/GPIO inputs are synthetic and explicit.",
                                "No target instructions execute natively; no host I/O is performed.",
                                "QPI/DDR/PCIe hardware effects and electrical timing are not modeled.",
                                "DLL postcall traces use injected status; they do not observe CSI initialization.",
                                "Policy state is the low byte of the wrapper's third stack argument."]}
    args.output.mkdir(parents=True, exist_ok=True)
    args.fixtures.mkdir(parents=True, exist_ok=True)
    (args.output / "policy-cases.json").write_text(json.dumps({"identity": identity, "cases": cases}, indent=2) + "\n")
    (args.output / "postcall-traces.json").write_text(json.dumps({"identity": identity, "cases": post}, indent=2) + "\n")
    (args.output / "wrapper-disassembly.json").write_text(json.dumps({"identity": identity, "instructions": disassembly(data)}, indent=2) + "\n")
    (args.fixtures / "csi_policy_replay.h").write_text(fixture_header(cases))
    (args.fixtures / "csi_postcall_replay.h").write_text(postcall_fixture_header(post))
    print(json.dumps({"policy_cases": len(cases), "postcall_cases": len(post),
                      "module_sha256": MODULE_SHA256, "output": str(args.output),
                      "fixture_header": str(args.fixtures / "csi_policy_replay.h")}, indent=2))


if __name__ == "__main__":
    main()

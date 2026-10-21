#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-only
"""Replay original module-55 completion/reset handling with synthetic state."""

import argparse
import json
from pathlib import Path
import struct

from unicorn.x86_const import UC_X86_REG_ESP

from replay_csi import CODE_BASE, RETURN_ADDRESS, Replay, verify_module, MODULE_SHA256


class FinishReplay(Replay):
    def __init__(self, data, state, seeded):
        super().__init__(data, {"revision": 0x13, "state": state})
        self.state = state
        self.seeded = seeded
        pointer = 0x208000
        self.uc.mem_write(pointer + 0x38, struct.pack("<I", state))
        self.uc.mem_write(self.uc.reg_read(UC_X86_REG_ESP) + 4, struct.pack("<I", pointer))
        if seeded:
            for address in (0x8000A2CC, 0x8000A17C, 0x8000A180):
                for i, value in enumerate(bytes.fromhex("5aa55aa5")):
                    self.pci[address + i] = value

    def code(self, uc, address, size, _):
        if address == RETURN_ADDRESS:
            self.termination = "returned"
            uc.emu_stop()
            return
        offset = address - CODE_BASE
        if not 0x12EA <= offset < 0x135E:
            raise RuntimeError(f"Escaped original completion function: {address:#x}")
        self.instructions.append(offset)
        if bytes(uc.mem_read(address, 1)) == b"\xf4":
            self.termination = "halted"
            uc.emu_stop()

    def port_out(self, uc, port, size, value, user_data):
        if port == 0x80:
            self.event("out", port=port, width=size, value=value)
            return
        super().port_out(uc, port, size, value, user_data)

    def run(self):
        self.uc.emu_start(CODE_BASE + 0x12EA, RETURN_ADDRESS + 1,
                          timeout=2_000_000, count=1000)
        if self.termination is None:
            raise RuntimeError("Completion replay did not terminate")
        return {"name": f"state{self.state}_seeded{int(self.seeded)}", "state": self.state,
                "seeded": self.seeded, "termination": self.termination,
                "trace": self.trace, "executed_offsets": self.instructions}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--module", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--fixtures", required=True, type=Path)
    args = parser.parse_args()
    data = args.module.read_bytes()
    verify_module(data)
    if data[0x12EA:0x12EF] != bytes.fromhex("568b742408"):
        raise ValueError("Completion prologue mismatch")
    cases = [FinishReplay(data, state, seeded).run()
             for state in range(8) for seeded in (False, True)]
    for case in cases:
        reset = [x["value"] for x in case["trace"]
                 if x["operation"] == "out" and x["port"] == 0xCF9]
        expected = [0x0E] if case["state"] & 2 else [6] if case["state"] & 4 else []
        assert reset == expected
        assert (case["termination"] == "returned") == (case["state"] == 0)
    args.output.mkdir(parents=True, exist_ok=True)
    args.fixtures.mkdir(parents=True, exist_ok=True)
    evidence = {"module_sha256": MODULE_SHA256,
                "source": "Original instructions 0x12ea..0x135d replayed in Unicorn",
                "limitations": ["Synthetic state and PCI inputs; no host hardware access",
                                "Reset and memory-controller effects are not modeled"],
                "cases": cases}
    (args.output / "finish-traces.json").write_text(json.dumps(evidence, indent=2) + "\n")
    lines = ["/* SPDX-License-Identifier: GPL-2.0-only */",
             "/* Generated from original module-55 completion instructions. */",
             "#ifndef P6T_FINISH_REPLAY_H", "#define P6T_FINISH_REPLAY_H",
             "struct p6t_finish_fixture {", "\tconst char *name;", "\tu32 state;",
             "\tbool stops;", "\tunsigned int io_count;",
             "\tstruct p6t_csi_io_fixture io[16];", "};",
             "static const struct p6t_finish_fixture p6t_finish_fixtures[] = {"]
    for case in cases:
        trace = [x for x in case["trace"] if x["operation"] in ("in", "out")]
        assert len(trace) <= 16
        lines.extend(["\t{", f'\t\t.name = "{case["name"]}",',
                      f'\t\t.state = {case["state"]},',
                      f'\t\t.stops = {str(case["termination"] != "returned").lower()},',
                      f"\t\t.io_count = {len(trace)},", "\t\t.io = {"])
        for item in trace:
            lines.append("\t\t\t{ .offset = 0x%x, .port = 0x%x, .width = %d, "
                         ".write = %s, .value = 0x%x }," %
                         (item["offset"], item["port"], item["width"],
                          str(item["operation"] == "out").lower(), item["value"]))
        lines.extend(["\t\t},", "\t},"])
    lines.extend(["};", "#endif", ""])
    (args.fixtures / "finish_replay.h").write_text("\n".join(lines))
    print(f"Replayed and validated {len(cases)} original completion traces")


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-only
"""Assemble generated pseudocode, replacing bounded batch previews with full replies."""

import argparse
import json
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--batch", type=Path, required=True)
    parser.add_argument("--full", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    if args.output.exists():
        raise ValueError("Output path must be new")
    batch = json.loads(args.batch.read_text())
    full = {item["addr"]: item for item in json.loads(args.full.read_text())["functions"]}
    source = ["/* Generated IDA pseudocode, not original source or a compilable implementation. */",
              "/* Types, names and boundaries are inferred; no motherboard execution was observed. */", ""]
    for item in batch["functions"]:
        code = full.get(item["addr"], {}).get("code", item["analysis"]["decompile"])
        if not code or "chars total]" in code:
            raise ValueError(f"Incomplete pseudocode for {item['addr']}")
        source.extend([f"/* {item['addr']} {item['name']} */", code, ""])
    with args.output.open("x") as destination:
        destination.write("\n".join(source))
    print(f"Assembled {len(batch['functions'])} complete function pseudocode results")


if __name__ == "__main__":
    main()

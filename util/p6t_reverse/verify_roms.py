#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-only
"""Read-only CBFS/blob/config checks and a reproducible candidate ROM manifest."""

import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import tempfile


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--seabios", type=Path, required=True)
    parser.add_argument("--uefi", type=Path, required=True)
    parser.add_argument("--manifest", type=Path, required=True)
    args = parser.parse_args()
    if args.manifest.exists():
        raise ValueError("Manifest must be a new file")
    root = Path(__file__).resolve().parents[2]
    tool = root / "build/cbfstool"
    blobs = {"csi.bin": root / "3rdparty/blobs/northbridge/intel/x58/CSI_INITDLL.dll",
             "minit.bin": root / "3rdparty/blobs/northbridge/intel/x58/MINITDLL.dll"}
    symbols = ("x58_build_csi_policy", "x58_build_minit_policy",
               "p6t_se_csi_postcall", "p6t_se_finish_training")
    records = []
    with tempfile.TemporaryDirectory(prefix="p6t-rom-check-") as temporary:
        for kind, rom, elf in [("seabios", args.seabios, root / "build/seabios-csi-fix/cbfs/fallback/romstage.debug"),
                               ("uefi", args.uefi, root / "build/cbfs/fallback/romstage.debug")]:
            if rom.stat().st_size != 2 * 1024 * 1024:
                raise ValueError(f"Wrong flash image size: {rom}")
            contents = {}
            for name in (*blobs, "config"):
                destination = Path(temporary) / (kind + "-" + name)
                subprocess.run([str(tool), str(rom), "extract", "-n", name, "-f", str(destination)],
                               check=True, capture_output=True)
                contents[name] = destination.read_bytes()
                if name in blobs and contents[name] != blobs[name].read_bytes():
                    raise ValueError(f"Unexpected {name} contents in {rom}")
            config = contents["config"].decode("utf-8")
            selection = "CONFIG_PAYLOAD_SEABIOS=y" if kind == "seabios" else "CONFIG_PAYLOAD_EDK2=y"
            if selection not in config or 'CONFIG_MAINBOARD_DIR="asus/p6t_se"' not in config:
                raise ValueError(f"Wrong board or payload config in {rom}")
            names = subprocess.check_output(["nm", str(elf)], text=True)
            for symbol in symbols:
                if not any(line.split()[-1:] == [symbol] for line in names.splitlines()):
                    raise ValueError(f"Missing integrated function {symbol}")
            records.append({"kind": kind, "path": str(rom), "bytes": rom.stat().st_size,
                            "sha256": digest(rom), "verified_config_selection": selection,
                            "config_sha256": hashlib.sha256(contents["config"]).hexdigest(),
                            "blob_sha256": {name: digest(path) for name, path in blobs.items()},
                            "build_romstage_symbols": list(symbols)})
    source = sorted([*root.glob("src/northbridge/intel/x58/*.[ch]"),
                     *root.glob("src/mainboard/asus/p6t_se/*.[ch]")])
    report = {"images": records,
              "source_sha256": {str(path.relative_to(root)): digest(path) for path in source},
              "validation": "Build, CBFS identity, configuration and linked-symbol checks only",
              "hardware_boot_verified": False, "video_verified": False,
              "full_oem_feature_parity": False}
    args.manifest.parent.mkdir(parents=True, exist_ok=True)
    with args.manifest.open("x") as output:
        json.dump(report, output, indent=2)
        output.write("\n")
    for record in records:
        print(record["kind"], record["bytes"], record["sha256"])


if __name__ == "__main__":
    main()

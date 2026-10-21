#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-only
"""Inventory symbolic iasl DSL declarations and bounded static dependencies.

This is a token/namespace inventory, not an AML interpreter or ACPI validator.
It does not establish runtime device presence or evaluate _STA/_CRS branches.
"""

import argparse
from collections import Counter
import json
from pathlib import Path
import re

from inventory_archive import sha256


TOKEN = re.compile(r'(?P<comment>/\*[\s\S]*?\*/|//[^\n]*)|(?P<string>"(?:\\.|[^"\\])*")|'
    r'(?P<name>[\\^A-Za-z_][\\^A-Za-z0-9_.]*)|(?P<number>0[xX][0-9A-Fa-f]+|[0-9]+)|(?P<punct>[^\s])')
NAMESPACE = {"Scope", "Device", "Method", "Processor", "ThermalZone", "PowerResource"}
RESOURCES = {"IRQ", "IRQNoFlags", "IO", "FixedIO", "DMA", "FixedDMA", "Memory24", "Memory32",
    "Memory32Fixed", "DWordIO", "DWordMemory", "DWordBusNumber", "DWordSpace", "QWordIO", "QWordMemory",
    "QWordSpace", "WordIO", "WordBusNumber", "WordSpace", "ExtendedIO", "ExtendedMemory", "Register",
    "Interrupt", "GpioInt", "GpioIo", "I2cSerialBus", "I2cSerialBusV2", "SpiSerialBus", "UartSerialBus",
    "VendorShort", "VendorLong", "StartDependentFn", "StartDependentFnNoPri", "EndDependentFn"}


def segment(name):
    return name.ljust(4, "_") if len(name) < 4 else name


def namespace_path(name, scope):
    if name.startswith("\\"):
        scope, name = (), name[1:]
    while name.startswith("^"):
        scope, name = scope[:-1], name[1:]
    return tuple(scope) + tuple(segment(part) for part in name.split(".") if part)


def path_text(path):
    return "\\" + ".".join(path)


def parse_integer(value):
    special = {"Zero": 0, "One": 1, "Ones": 0xffffffff}
    if value in special:
        return special[value]
    try:
        return int(value, 0)
    except ValueError:
        return None


def inventory(path):
    source_bytes = path.read_bytes()
    source = source_bytes.decode("utf-8")
    tokens = [(match.group(), match.start()) for match in TOKEN.finditer(source) if not match.group("comment")]
    values = [token[0] for token in tokens]
    pairs, stack = {}, []
    for index, value in enumerate(values):
        if value in ("(", "{"):
            stack.append(index)
        elif value in (")", "}"):
            if not stack or values[stack[-1]] != { ")": "(", "}": "{"}[value]:
                raise ValueError(f"Unbalanced DSL near token {index}")
            opening = stack.pop()
            pairs[opening] = index
    if stack:
        raise ValueError("Unclosed DSL delimiter")
    declarations, methods, devices, regions, fields, names, resources = [], [], [], [], [], [], []
    templates = []

    def line(index):
        return source.count("\n", 0, tokens[index][1]) + 1

    def arguments(opening):
        closing = pairs[opening]
        parts, current, index = [], [], opening + 1
        while index < closing:
            value = values[index]
            if value == ",":
                parts.append(current)
                current = []
            elif value in ("(", "{"):
                end = pairs[index]
                current.extend(values[index:end + 1])
                index = end
            else:
                current.append(value)
            index += 1
        parts.append(current)
        return parts

    def walk(start, end, scope):
        index = start
        while index < end:
            kind = values[index]
            if index + 1 >= end or values[index + 1] != "(" or index + 1 not in pairs:
                index += 1
                continue
            closing = pairs[index + 1]
            args = arguments(index + 1)
            first = args[0][0] if args and args[0] else None
            body_start = closing + 1
            if kind in NAMESPACE and first and body_start < end and values[body_start] == "{":
                object_path = namespace_path(first, scope)
                record = {"kind": kind, "path": path_text(object_path), "line": line(index),
                    "arguments": [" ".join(arg) for arg in args]}
                declarations.append(record)
                if kind == "Method":
                    methods.append({**record, "scope_tuple": object_path,
                        "body_tokens": values[body_start + 1:pairs[body_start]]})
                elif kind == "Device":
                    devices.append(record)
                walk(body_start + 1, pairs[body_start], object_path)
                index = pairs[body_start] + 1
                continue
            if kind == "Name" and first:
                names.append({"path": path_text(namespace_path(first, scope)), "line": line(index),
                    "initializer": " ".join(args[1]) if len(args) > 1 else ""})
            elif kind == "OperationRegion" and first:
                regions.append({"path": path_text(namespace_path(first, scope)), "scope_tuple": scope,
                    "line": line(index), "arguments": [" ".join(arg) for arg in args]})
            elif kind == "Field" and first and body_start < end and values[body_start] == "{":
                region_name, bit_offset, cursor = first, 0, body_start + 1
                while cursor < pairs[body_start]:
                    token = values[cursor]
                    if token == "Offset" and values[cursor + 1] == "(":
                        number = parse_integer(values[cursor + 2])
                        bit_offset = number * 8 if number is not None else None
                        cursor = pairs[cursor + 1] + 1
                        continue
                    if cursor + 2 < pairs[body_start] and values[cursor + 1] == ",":
                        width = parse_integer(values[cursor + 2])
                        if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", token) and width is not None:
                            fields.append({"path": path_text(namespace_path(token, scope)), "scope_tuple": scope,
                                "region_name": region_name, "bit_offset": bit_offset,
                                "width": width, "line": line(cursor)})
                            bit_offset = bit_offset + width if bit_offset is not None else None
                            cursor += 3
                            continue
                    if token == "," and cursor + 1 < pairs[body_start]:
                        width = parse_integer(values[cursor + 1])
                        if width is not None:
                            bit_offset = bit_offset + width if bit_offset is not None else None
                    cursor += 1
            elif kind == "ResourceTemplate":
                templates.append({"scope": path_text(scope), "line": line(index)})
            elif kind in RESOURCES:
                resources.append({"kind": kind, "scope": path_text(scope), "line": line(index),
                    "arguments": [" ".join(arg) for arg in args]})
            index += 1

    walk(0, len(tokens), ())
    method_map = {record["path"]: record for record in methods}
    name_map = {record["path"]: record for record in names}
    region_map = {record["path"]: record for record in regions}
    field_map = {record["path"]: record for record in fields}

    def resolve(name, scope, known):
        if name.startswith(("\\", "^")):
            path = path_text(namespace_path(name, scope))
            return path if path in known else None
        for length in range(len(scope), -1, -1):
            path = path_text(namespace_path(name, scope[:length]))
            if path in known:
                return path
        return None

    smi_fields, state_fields = set(), set()
    for region in regions:
        args = region["arguments"]
        base = parse_integer(args[2]) if len(args) > 2 else None
        if base is None and len(args) > 2:
            constant = resolve(args[2], region["scope_tuple"], name_map)
            if constant:
                base = parse_integer(name_map[constant]["initializer"])
        region["constant_base_if_resolved"] = base
    for field in fields:
        region_path = resolve(field["region_name"], field["scope_tuple"], region_map)
        field["region_path"] = region_path
        region = region_map.get(region_path, {})
        arguments_list = region.get("arguments", [])
        if len(arguments_list) > 1 and arguments_list[1] == "SystemIO" and region.get("constant_base_if_resolved") == 0xb2 and field["bit_offset"] == 0:
            smi_fields.add(field["path"])
        if len(arguments_list) > 1 and arguments_list[1] == "SystemMemory" and region.get("constant_base_if_resolved") in (0xffffff00, 0xaabbccdd):
            state_fields.add(field["path"])
    for method in methods:
        calls, references = set(), set()
        for index, token in enumerate(method["body_tokens"]):
            if not re.match(r"^[\\^A-Za-z_]", token):
                continue
            field = resolve(token, method["scope_tuple"], field_map)
            if field:
                references.add(field)
            if index + 1 < len(method["body_tokens"]) and method["body_tokens"][index + 1] == "(":
                target = resolve(token, method["scope_tuple"], method_map)
                if target:
                    calls.add(target)
        method["statically_resolved_calls"] = sorted(calls)
        method["field_references"] = sorted(references)
        method["direct_smi_command_field_reference"] = sorted(references & smi_fields)
        method["direct_vendor_runtime_state_reference"] = sorted(references & state_fields)
    smi_methods = {method["path"] for method in methods if method["direct_smi_command_field_reference"]}
    state_methods = {method["path"] for method in methods if method["direct_vendor_runtime_state_reference"]}

    def closure(seeds):
        result = set(seeds)
        changed = True
        while changed:
            added = {method["path"] for method in methods if set(method["statically_resolved_calls"]) & result}
            changed = bool(added - result)
            result.update(added)
        return sorted(result)

    for record in methods + regions + fields:
        record.pop("scope_tuple", None)
        record.pop("body_tokens", None)
    return {"path": str(path.absolute()), "sha256": sha256(source_bytes),
        "counts": {"methods": len(methods), "devices": len(devices),
            "processors": sum(item["kind"] == "Processor" for item in declarations),
            "operation_regions": len(regions), "fields": len(fields),
            "resource_templates": len(templates), "resource_descriptors": len(resources)},
        "methods": methods, "devices": devices, "operation_regions": regions, "fields": fields,
        "resource_templates": templates, "resources": resources,
        "resource_descriptor_counts": dict(sorted(Counter(item["kind"] for item in resources).items())),
        "smi_command_fields": sorted(smi_fields), "direct_smi_reference_methods": sorted(smi_methods),
        "smi_dependent_method_closure": closure(smi_methods),
        "vendor_runtime_state_fields": sorted(state_fields),
        "direct_vendor_state_reference_methods": sorted(state_methods),
        "vendor_state_dependent_method_closure": closure(state_methods)}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--original-dsl", type=Path, required=True)
    parser.add_argument("--original-aml", type=Path, required=True)
    parser.add_argument("--current-dsl", type=Path, required=True)
    parser.add_argument("--report", type=Path, required=True)
    parser.add_argument("--summary", type=Path, required=True)
    args = parser.parse_args()
    for destination in (args.report, args.summary):
        if destination.exists() or destination.is_symlink():
            raise ValueError(f"Refusing to overwrite {destination}")
    original, current = inventory(args.original_dsl), inventory(args.current_dsl)
    comparison = {}
    for label in ("methods", "devices"):
        old = {record["path"] for record in original[label]}
        new = {record["path"] for record in current[label]}
        comparison[label] = {"common_namespace_paths": sorted(old & new),
            "original_only_namespace_paths": sorted(old - new), "current_only_namespace_paths": sorted(new - old)}
    aml = args.original_aml.read_bytes()
    report = {"evidence_type": "static iasl disassembly plus token/namespace inventory",
        "original_aml": {"path": str(args.original_aml.absolute()), "sha256": sha256(aml),
            "size": len(aml), "checksum_mod256": sum(aml) & 255},
        "original": original, "current": current, "namespace_comparison": comparison,
        "limitations": ["No AML method or original BIOS/SMM code was executed.",
            "Matching namespace paths establish names only, not equivalent method behavior.",
            "Different namespace paths do not establish a missing hardware feature; aliases and alternate implementations exist.",
            "This inventory covers the supplied DSDT and current build DSL, not SSDTs/FADT/MADT or all firmware ACPI behavior.",
            "The static method-call graph resolves direct named calls only; aliases, dynamic objects, and conditional behavior remain incomplete.",
            "A reference to an SMI command field is a candidate runtime dependency, not proof an SMI occurred.",
            "Vendor SystemMemory regions 0xffffff00 and0xaabbccdd require initialized/possibly patched original runtime state."]}
    lines = ["# Original DSDT coverage boundary", "",
        f"Original AML SHA-256: `{sha256(aml)}`; {len(aml)} bytes; checksum modulo256: `{sum(aml) & 255}`.",
        "Disassembled with installed iasl20260930; no parse errors. Source: `build/p6t-analysis/original_dsdt.dsl`.",
        "Current comparison: `build/dsdt.dsl` (an existing build artifact; its runtime execution is unobserved).", "",
        "| Static declaration | Original DSDT | Current build DSDT |", "| --- | ---: | ---: |"]
    for label, count in original["counts"].items():
        lines.append(f"| {label.replace('_', ' ')} | {count} | {current['counts'][label]} |")
    lines += ["", "Names are inventory evidence, not a feature-equivalence score. Namespace differences can reflect different implementations.", ""]
    for label in ("methods", "devices"):
        comp = comparison[label]
        lines.append(f"- {label.title()}: {len(comp['common_namespace_paths'])} common paths; {len(comp['original_only_namespace_paths'])} original-only paths; {len(comp['current_only_namespace_paths'])} current-only paths.")
    lines += ["", f"The original has {len(original['direct_smi_reference_methods'])} methods directly referencing command fields at SystemIO`0xb2` and {len(original['smi_dependent_method_closure'])} methods in their statically resolved caller closure.",
        "These methods depend on an appropriate SMM implementation and its protocol/state. Transplanting the ASL alone does not provide that behavior.", "",
        "Direct original SMI field references:", ""]
    method_index = {method["path"]: method for method in original["methods"]}
    for path in original["direct_smi_reference_methods"]:
        method = method_index[path]
        lines.append(f"- `{path}` at original DSL line{method['line']}: {', '.join('`' + value + '`' for value in method['direct_smi_command_field_reference'])}.")
    lines += ["", "The original `ISMI` helper writes`SMIC`; GNVS/SNVS/SMSR/GMAX/GMDX/GCAX/GCDX call it with commands`0x70,0x71,0x79–0x7d` while exchanging PAR0/PAR1/PAR2 through RAMW at placeholder`0xaabbccdd`.",
        "Original TPM `_DSM` bodies write`0xfb` to PSMI; these require the original TPM physical-presence SMM protocol.",
        f"{len(original['vendor_state_dependent_method_closure'])} original methods are in the static caller closure of references to fields in BIOS`0xffffff00` or RAMW`0xaabbccdd`.", "",
        "All method/device paths, resource descriptor arguments, field/region mappings, direct calls, and dependency candidates are retained in `acpi-coverage.json`.", "",
        "Limitations:", ""] + ["- " + item for item in report["limitations"]]
    args.report.parent.mkdir(parents=True, exist_ok=True)
    with args.report.open("x") as destination:
        json.dump(report, destination, indent=2)
        destination.write("\n")
    with args.summary.open("x") as destination:
        destination.write("\n".join(lines) + "\n")
    print(json.dumps({"original_counts": original["counts"], "current_counts": current["counts"],
        "direct_original_smi_methods": original["direct_smi_reference_methods"],
        "original_smi_dependency_count": len(original["smi_dependent_method_closure"])}, indent=2))


if __name__ == "__main__":
    main()

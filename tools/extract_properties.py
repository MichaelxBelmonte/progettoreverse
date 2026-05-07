#!/usr/bin/env python3
"""
Extract all property registrations from decompiled code.
Pattern: _DAT_xxx = "_varName"; ... _DAT_xxx = 0xTT00; ... _DAT_xxx = "typeName";
Also finds accessor functions that map offset → property name.
"""

import re
import json
from pathlib import Path
from collections import defaultdict, OrderedDict

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
DECOMPILED = BASE / "ghidra" / "output" / "MikeCore" / "decompiled"
OUT = BASE / "reconstructed"

TYPE_CODES = {
    0x66: "float",
    0x64: "double",
    0x69: "int",
    0x6c: "int64",
    0x5e: "pointer",
    0x63: "char",
    0x42: "bool",
    0x73: "short",
    0x53: "ushort",
    0x49: "uint",
    0x4c: "uint64",
    0x43: "uchar",
}


def extract_registrations_from_file(filepath):
    """Extract property registrations from a decompiled .c file."""
    code = filepath.read_text()
    props = []

    # Pattern: _DAT_xxx = "_varName"; followed within ~5 lines by _DAT_xxx = 0xTT00; and _DAT_xxx = "typeName";
    # Find all ivar name assignments
    name_pattern = re.compile(r'_DAT_([0-9a-f]+)\s*=\s*"(_[a-zA-Z][a-zA-Z0-9_]*)"')
    type_code_pattern = re.compile(r'_DAT_[0-9a-f]+\s*=\s*(0x[0-9a-f]+00)\s*;')
    type_name_pattern = re.compile(r'_DAT_[0-9a-f]+\s*=\s*"([A-Za-z][A-Za-z0-9_ *]+)"')

    lines = code.split('\n')
    for i, line in enumerate(lines):
        name_match = name_pattern.search(line)
        if not name_match:
            continue

        dat_addr = name_match.group(1)
        var_name = name_match.group(2)

        # Look ahead 1-6 lines for type code and type name
        type_code = None
        type_name = None
        for j in range(i + 1, min(i + 8, len(lines))):
            tc_match = type_code_pattern.search(lines[j])
            if tc_match and type_code is None:
                raw = int(tc_match.group(1), 16)
                byte_val = (raw >> 8) & 0xFF
                type_code = TYPE_CODES.get(byte_val, f"unknown_0x{byte_val:02x}")

            tn_match = type_name_pattern.search(lines[j])
            if tn_match and type_name is None:
                candidate = tn_match.group(1)
                # Filter out non-type strings
                if candidate not in ("MUAudioSourcePrincipalItem",) or "GN" in candidate or "MU" in candidate:
                    type_name = candidate

        if type_code or type_name:
            props.append({
                "name": var_name,
                "type_code": type_code or "unknown",
                "type_name": type_name or "",
                "dat_addr": dat_addr,
            })

    return props


def extract_offset_from_accessors(filepath, known_props):
    """Find getter/setter functions that map offset → property name.

    Pattern in small functions:
    - References a property name string
    - Accesses unaff_RDI + 0xNN or *(type*)(param_1 + 0xNN)
    """
    code = filepath.read_text()
    size_match = re.search(r"// Size: (\d+) bytes", code)
    if not size_match:
        return {}

    size = int(size_match.group(1))
    # Only look at small functions (likely getters/setters)
    if size > 3000:
        return {}

    # Find all ivar name references in this function
    ivar_refs = re.findall(r'"(_[a-z][a-zA-Z0-9_]*)"', code)
    if not ivar_refs:
        return {}

    # Find all offset accesses
    offsets = set()
    # Pattern: unaff_RDI + 0xNN or *(type*)(unaff_RDI + 0xNN)
    offsets.update(re.findall(r'unaff_RDI\s*\+\s*(0x[0-9a-f]+)', code))
    offsets.update(re.findall(r'param_1\s*\+\s*(0x[0-9a-f]+)', code))
    # Pattern: unaff_RDI[N] (array indexing, offset = N * 8)
    for idx in re.findall(r'unaff_RDI\[(\d+)\]', code):
        offsets.add(hex(int(idx) * 8))

    # If exactly 1 ivar name and 1-3 offsets, likely a getter/setter
    results = {}
    if len(ivar_refs) == 1 and 1 <= len(offsets) <= 3:
        results[ivar_refs[0]] = sorted(offsets)

    return results


def main():
    OUT.mkdir(exist_ok=True)

    print("=== Extracting property registrations ===")

    # Phase 1: Extract all property registrations
    class_properties = defaultdict(list)
    total_props = 0

    for class_dir in sorted(DECOMPILED.iterdir()):
        if not class_dir.is_dir():
            continue
        class_name = class_dir.name

        for c_file in class_dir.glob("*.c"):
            props = extract_registrations_from_file(c_file)
            if props:
                # Deduplicate by name
                seen = set()
                for p in props:
                    if p["name"] not in seen:
                        seen.add(p["name"])
                        class_properties[class_name].append(p)
                        total_props += 1

    print(f"Found {total_props} property registrations across {len(class_properties)} classes")

    # Phase 2: Extract offset mappings from accessor functions
    print("\n=== Extracting offsets from accessor functions ===")
    class_offsets = defaultdict(dict)  # class → {ivar_name → [offsets]}
    total_offsets = 0

    for class_dir in sorted(DECOMPILED.iterdir()):
        if not class_dir.is_dir():
            continue
        class_name = class_dir.name

        for c_file in class_dir.glob("*.c"):
            prop_names = set(p["name"] for p in class_properties.get(class_name, []))
            offsets = extract_offset_from_accessors(c_file, prop_names)
            for name, offs in offsets.items():
                if name not in class_offsets[class_name]:
                    class_offsets[class_name][name] = offs
                    total_offsets += 1

    print(f"Found {total_offsets} offset mappings")

    # Phase 3: Generate struct definitions
    print("\n=== Generating struct definitions ===")

    all_structs = {}
    for class_name in sorted(class_properties.keys()):
        props = class_properties[class_name]
        offsets = class_offsets.get(class_name, {})

        # Deduplicate and sort
        seen = {}
        for p in props:
            name = p["name"]
            if name not in seen:
                seen[name] = p

        # Add offset info
        for name, p in seen.items():
            if name in offsets:
                p["offsets"] = offsets[name]

        all_structs[class_name] = list(seen.values())

    # Save JSON
    json_path = OUT / "properties.json"
    with open(json_path, "w") as f:
        json.dump(all_structs, f, indent=2, default=str)

    # Generate C++ headers with real types
    header_path = OUT / "structs"
    header_path.mkdir(exist_ok=True)

    classes_with_props = 0
    for class_name, props in sorted(all_structs.items(), key=lambda x: -len(x[1])):
        if not props:
            continue
        classes_with_props += 1

        lines = []
        lines.append(f"// Reconstructed from MikeCore binary — property registration data")
        lines.append(f"// {len(props)} registered properties")
        lines.append(f"")

        # C++ type mapping
        type_map = {
            "float": "float",
            "double": "double",
            "int": "int32_t",
            "int64": "int64_t",
            "uint": "uint32_t",
            "uint64": "uint64_t",
            "char": "char",
            "uchar": "uint8_t",
            "bool": "bool",
            "short": "int16_t",
            "ushort": "uint16_t",
            "pointer": "void*",
        }

        lines.append(f"struct {class_name} {{")

        for p in props:
            tc = p.get("type_code", "unknown")
            tn = p.get("type_name", "")
            offset_info = ""
            if "offsets" in p:
                offset_info = f"  // offset: {', '.join(p['offsets'])}"

            # Determine C++ type
            if tn and "*" in tn:
                cpp_type = tn.replace(" ", "")  # "float *" → "float*"
            elif tn and tn.startswith(("MU", "MD", "GN")):
                cpp_type = f"{tn}*"  # Object pointer
            elif tn == "GNInt":
                cpp_type = "int32_t"
            elif tn == "SInt64":
                cpp_type = "int64_t"
            elif tc in type_map:
                cpp_type = type_map[tc]
            else:
                cpp_type = f"/* {tc} {tn} */ void*"

            lines.append(f"    {cpp_type:20s} {p['name']};{offset_info}")

        lines.append(f"}};")
        lines.append(f"")

        (header_path / f"{class_name}.h").write_text("\n".join(lines))

    # Print summary
    print(f"\nGenerated struct headers for {classes_with_props} classes")
    print(f"Output: {header_path}/")
    print(f"JSON: {json_path}")

    # Top classes by property count
    print(f"\nTop 30 classes by property count:")
    for class_name, props in sorted(all_structs.items(), key=lambda x: -len(x[1]))[:30]:
        n_with_offset = sum(1 for p in props if "offsets" in p)
        types = defaultdict(int)
        for p in props:
            types[p.get("type_code", "?")] += 1
        type_str = ", ".join(f"{t}:{c}" for t, c in sorted(types.items(), key=lambda x: -x[1]))
        print(f"  {class_name:45s} {len(props):4d} props ({n_with_offset} with offset)  [{type_str}]")

    # Total stats
    total_float = sum(1 for props in all_structs.values() for p in props if p.get("type_code") == "float")
    total_double = sum(1 for props in all_structs.values() for p in props if p.get("type_code") == "double")
    total_int = sum(1 for props in all_structs.values() for p in props if p.get("type_code") == "int")
    total_ptr = sum(1 for props in all_structs.values() for p in props if p.get("type_code") == "pointer")
    total_int64 = sum(1 for props in all_structs.values() for p in props if p.get("type_code") == "int64")

    print(f"\nTotal properties: {total_props}")
    print(f"  float:   {total_float}")
    print(f"  double:  {total_double}")
    print(f"  int:     {total_int}")
    print(f"  int64:   {total_int64}")
    print(f"  pointer: {total_ptr}")


if __name__ == "__main__":
    main()

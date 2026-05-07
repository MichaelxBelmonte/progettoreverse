#!/usr/bin/env python3
"""
Extract vtable layouts and class hierarchy from MikeCore binary.
Uses nm to find vtable symbols and analyzes virtual method ordering.
"""

import subprocess
import re
import json
from pathlib import Path
from collections import defaultdict

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
CORE = BASE / "binaries" / "MikeCore"
OUT = BASE / "reconstructed"


def run(cmd):
    r = subprocess.run(cmd, shell=True, capture_output=True, text=True, timeout=60)
    return r.stdout.strip()


def extract_vtables():
    """Extract vtable symbols and typeinfo from binary."""
    print("=== Extracting vtables ===")

    # Get all vtable symbols
    raw = run(f"nm -C '{CORE}' 2>/dev/null | grep -E 'vtable|typeinfo|VTT'")

    vtables = {}
    typeinfo = {}

    for line in raw.splitlines():
        parts = line.split()
        if len(parts) < 3:
            continue
        addr = parts[0]
        sym_type = parts[1]
        name = " ".join(parts[2:])

        if "vtable for" in name:
            class_name = name.replace("vtable for ", "")
            vtables[class_name] = {"addr": addr, "type": sym_type}
        elif "typeinfo for" in name:
            class_name = name.replace("typeinfo for ", "")
            typeinfo[class_name] = {"addr": addr, "type": sym_type}

    print(f"  Vtables found: {len(vtables)}")
    print(f"  Typeinfo found: {len(typeinfo)}")

    return vtables, typeinfo


def extract_typeinfo_hierarchy():
    """Extract class hierarchy from typeinfo name mangling."""
    print("\n=== Extracting class hierarchy ===")

    # Get all typeinfo name symbols
    raw = run(f"nm -C '{CORE}' 2>/dev/null | grep 'typeinfo name for'")

    classes = set()
    for line in raw.splitlines():
        m = re.search(r"typeinfo name for (.+)", line)
        if m:
            classes.add(m.group(1))

    # Try to find inheritance by looking at typeinfo pointers
    # In C++ ABI, typeinfo struct contains pointer to base class typeinfo
    raw_ti = run(f"nm '{CORE}' 2>/dev/null | grep '__ZTI'")  # mangled typeinfo
    raw_tv = run(f"nm '{CORE}' 2>/dev/null | grep '__ZTV'")  # mangled vtable

    hierarchy = {}
    for cls in sorted(classes):
        hierarchy[cls] = {
            "has_vtable": cls in [c for c in classes],
            "prefix": cls[:2] if len(cls) >= 2 else "",
        }

    return classes, hierarchy


def extract_rtti_strings():
    """Extract RTTI class name strings directly from binary."""
    print("\n=== Extracting RTTI class names ===")

    raw = run(f"strings '{CORE}' | grep -E '^[0-9]+(MU|MD|GN|CM)[A-Z]' | head -200")

    rtti_classes = []
    for line in raw.splitlines():
        # RTTI names are like "17MUElementAnalyzer" (length-prefixed)
        m = re.match(r"(\d+)([A-Z][A-Za-z0-9_]+)", line)
        if m:
            length = int(m.group(1))
            name = m.group(2)
            if len(name) == length:
                rtti_classes.append(name)

    print(f"  RTTI class names: {len(rtti_classes)}")
    return rtti_classes


def extract_virtual_methods_from_vtable(vtable_addr):
    """Read vtable entries to find virtual method function pointers."""
    # Use objdump to read data at vtable address
    raw = run(f"objdump -s -j __const --start-address=0x{vtable_addr} "
              f"--stop-address=0x{int(vtable_addr, 16) + 256:x} '{CORE}' 2>/dev/null")
    return raw


def main():
    vtables, typeinfo = extract_vtables()
    classes, hierarchy = extract_typeinfo_hierarchy()
    rtti_classes = extract_rtti_strings()

    # Combine all class info
    all_classes = sorted(set(list(vtables.keys()) + rtti_classes))

    # Categorize
    categories = defaultdict(list)
    for cls in all_classes:
        if cls.startswith("MU"):
            categories["MU_DSP"].append(cls)
        elif cls.startswith("MD"):
            categories["MD_Display"].append(cls)
        elif cls.startswith("GN"):
            categories["GN_Generic"].append(cls)
        elif cls.startswith("CM"):
            categories["CM_Command"].append(cls)
        else:
            categories["Other"].append(cls)

    # Save results
    result = {
        "total_classes": len(all_classes),
        "vtable_count": len(vtables),
        "typeinfo_count": len(typeinfo),
        "rtti_count": len(rtti_classes),
        "categories": {k: len(v) for k, v in categories.items()},
        "vtables": {k: v for k, v in sorted(vtables.items())},
        "classes_by_category": {k: sorted(v) for k, v in categories.items()},
    }

    json_path = OUT / "vtables.json"
    with open(json_path, "w") as f:
        json.dump(result, f, indent=2)

    # Generate hierarchy file
    hier_path = OUT / "class_hierarchy.txt"
    with open(hier_path, "w") as f:
        f.write("# MikeCore Class Hierarchy\n")
        f.write(f"# Total classes with RTTI: {len(all_classes)}\n")
        f.write(f"# Vtables: {len(vtables)}\n\n")

        for cat_name, cat_classes in sorted(categories.items()):
            f.write(f"\n{'='*60}\n")
            f.write(f"  {cat_name} — {len(cat_classes)} classes\n")
            f.write(f"{'='*60}\n\n")

            for cls in cat_classes:
                has_vt = "vtable" if cls in vtables else "      "
                has_ti = "typeinfo" if cls in typeinfo else "        "
                f.write(f"  [{has_vt}] [{has_ti}] {cls}\n")

    # Print summary
    print(f"\n{'='*60}")
    print(f"CLASS HIERARCHY SUMMARY")
    print(f"{'='*60}")
    print(f"Total classes with RTTI: {len(all_classes)}")
    print(f"  MU* (DSP/Music):  {len(categories['MU_DSP'])}")
    print(f"  MD* (Display):    {len(categories['MD_Display'])}")
    print(f"  GN* (Generic):    {len(categories['GN_Generic'])}")
    print(f"  CM* (Command):    {len(categories.get('CM_Command', []))}")
    print(f"  Other:            {len(categories.get('Other', []))}")

    # Print MU* classes (DSP-relevant)
    print(f"\nMU* classes ({len(categories['MU_DSP'])}):")
    for cls in categories['MU_DSP'][:50]:
        print(f"  {cls}")
    if len(categories['MU_DSP']) > 50:
        print(f"  ... +{len(categories['MU_DSP']) - 50} more")

    print(f"\nOutput: {json_path}")
    print(f"Hierarchy: {hier_path}")


if __name__ == "__main__":
    main()

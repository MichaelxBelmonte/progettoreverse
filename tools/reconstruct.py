#!/usr/bin/env python3
"""
Reconstruct C++ classes from Ghidra decompiled output.
Reads decompiled .c files, maps to classes, generates headers.
"""

import os
import re
import json
from pathlib import Path
from collections import defaultdict

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
DECOMPILED = BASE / "ghidra" / "output" / "MikeCore" / "decompiled"
OUT = BASE / "reconstructed"
CORE = BASE / "binaries" / "MikeCore"


def parse_decompiled_file(filepath):
    """Parse a decompiled .c file and extract metadata + code."""
    content = filepath.read_text()

    info = {
        "path": str(filepath),
        "address": "",
        "size": 0,
        "class": "Unknown",
        "strings": [],
        "code": "",
        "signature": "",
        "params": [],
        "local_vars": [],
        "calls": [],
        "ivar_refs": [],
    }

    for line in content.split("\n"):
        if line.startswith("// Address:"):
            info["address"] = line.split(":")[1].strip()
        elif line.startswith("// Size:"):
            m = re.search(r"(\d+)", line)
            if m:
                info["size"] = int(m.group(1))
        elif line.startswith("// Class:"):
            info["class"] = line.split(":", 1)[1].strip()
        elif line.startswith("//   ") and not line.startswith("//   ..."):
            info["strings"].append(line[5:].strip())

    # Extract actual code (after header comments)
    code_start = content.find("\n\n")
    if code_start > 0:
        info["code"] = content[code_start + 2:]

    # Parse function signature
    sig_match = re.search(r"^(\w[\w\s\*]+)\s+(FUN_[0-9a-f]+)\s*\(([^)]*)\)", info["code"], re.MULTILINE)
    if sig_match:
        info["signature"] = sig_match.group(0)
        info["return_type"] = sig_match.group(1).strip()
        params_str = sig_match.group(3)
        if params_str.strip():
            info["params"] = [p.strip() for p in params_str.split(",")]

    # Find all FUN_ calls
    info["calls"] = list(set(re.findall(r"FUN_[0-9a-f]+", info["code"])))

    # Find ivar references (this->field pattern or param_1->field)
    info["ivar_refs"] = list(set(re.findall(r"(?:this|param_1)->(\w+)", info["code"])))

    # Find local variable declarations
    info["local_vars"] = re.findall(r"^\s+(\w[\w\s\*]+)\s+(\w+)\s*[;=]", info["code"], re.MULTILINE)

    return info


def extract_class_fields(functions):
    """Extract probable class fields from ivar references across all methods."""
    fields = defaultdict(lambda: {"count": 0, "types": set()})

    for func in functions:
        for ivar in func["ivar_refs"]:
            fields[ivar]["count"] += 1

    # Try to infer types from usage patterns
    for func in functions:
        code = func["code"]
        for ivar in func["ivar_refs"]:
            # Check for float/double operations
            if re.search(rf"(?:this|param_1)->{ivar}\s*[=<>!]+\s*[\d.]+[fF]?\b", code):
                fields[ivar]["types"].add("float/double")
            # Check for pointer dereference
            if re.search(rf"\*.*(?:this|param_1)->{ivar}", code):
                fields[ivar]["types"].add("pointer")
            # Check for array indexing
            if re.search(rf"(?:this|param_1)->{ivar}\[", code):
                fields[ivar]["types"].add("array/pointer")
            # Check for int operations
            if re.search(rf"(?:this|param_1)->{ivar}\s*[&|^%]", code):
                fields[ivar]["types"].add("int")

    return dict(fields)


def generate_header(class_name, functions, fields):
    """Generate a reconstructed C++ header for a class."""
    lines = []
    lines.append(f"// Reconstructed from MikeCore binary")
    lines.append(f"// {len(functions)} methods, {len(fields)} fields")
    lines.append(f"// WARNING: This is reverse-engineered pseudocode, not compilable C++")
    lines.append(f"")
    lines.append(f"class {class_name} {{")
    lines.append(f"")

    # Fields
    if fields:
        lines.append(f"    // ===== Fields ({len(fields)}) =====")
        for name, info in sorted(fields.items(), key=lambda x: -x[1]["count"]):
            types = ", ".join(info["types"]) if info["types"] else "unknown"
            lines.append(f"    /* {types} */ void* {name};  // used in {info['count']} methods")
        lines.append(f"")

    # Methods sorted by size (largest = most important)
    lines.append(f"    // ===== Methods ({len(functions)}) =====")
    for func in sorted(functions, key=lambda x: -x["size"]):
        addr = func["address"]
        size = func["size"]
        params = ", ".join(func["params"][:6]) if func["params"] else "..."
        n_calls = len(func["calls"])

        # Try to guess method name from strings
        method_name = f"method_{addr}"
        for s in func["strings"]:
            # Look for ClassName::methodName pattern
            m = re.search(rf"{class_name}::(\w+)", s)
            if m:
                method_name = m.group(1)
                break
            # Look for standalone method name patterns
            m = re.search(r"^(\w+)\(\)", s)
            if m:
                method_name = m.group(1)
                break

        lines.append(f"    // @{addr} ({size} bytes, calls {n_calls} functions)")
        if func["strings"]:
            for s in func["strings"][:3]:
                clean = s[:80]
                lines.append(f"    // str: \"{clean}\"")
        lines.append(f"    void {method_name}({params});")
        lines.append(f"")

    lines.append(f"}};")
    return "\n".join(lines)


def generate_implementation(class_name, functions):
    """Generate reconstructed implementation file."""
    lines = []
    lines.append(f"// Reconstructed implementation of {class_name}")
    lines.append(f"// From MikeCore binary — reverse-engineered pseudocode")
    lines.append(f"")
    lines.append(f'#include "{class_name}.h"')
    lines.append(f"")

    for func in sorted(functions, key=lambda x: -x["size"]):
        lines.append(f"// {'=' * 60}")
        lines.append(f"// @{func['address']} — {func['size']} bytes")
        if func["strings"]:
            for s in func["strings"][:5]:
                lines.append(f"// str: \"{s[:100]}\"")
        lines.append(f"// {'=' * 60}")
        lines.append(func["code"])
        lines.append(f"")

    return "\n".join(lines)


def main():
    if not DECOMPILED.exists():
        print(f"ERROR: {DECOMPILED} does not exist")
        print("Run the Ghidra MikeCoreDecompile script first.")
        return

    OUT.mkdir(exist_ok=True)

    # Parse all decompiled files
    print("Parsing decompiled files...")
    all_functions = []
    class_dirs = [d for d in DECOMPILED.iterdir() if d.is_dir()]

    for class_dir in sorted(class_dirs):
        c_files = list(class_dir.glob("*.c"))
        for f in c_files:
            info = parse_decompiled_file(f)
            all_functions.append(info)

    print(f"Parsed {len(all_functions)} functions from {len(class_dirs)} classes")

    # Group by class
    classes = defaultdict(list)
    for func in all_functions:
        classes[func["class"]].append(func)

    # Generate reconstructed files for each class
    print(f"\nGenerating reconstructed code for {len(classes)} classes...")

    stats = {
        "total_functions": len(all_functions),
        "total_classes": len(classes),
        "total_code_bytes": sum(f["size"] for f in all_functions),
        "classes": {}
    }

    for class_name, functions in sorted(classes.items(), key=lambda x: -sum(f["size"] for f in x[1])):
        total_size = sum(f["size"] for f in functions)
        n_funcs = len(functions)

        print(f"  {class_name}: {n_funcs} functions, {total_size:,} bytes")

        # Extract fields
        fields = extract_class_fields(functions)

        # Generate header
        header = generate_header(class_name, functions, fields)
        header_path = OUT / f"{class_name}.h"
        header_path.write_text(header)

        # Generate implementation
        impl = generate_implementation(class_name, functions)
        impl_path = OUT / f"{class_name}.cpp"
        impl_path.write_text(impl)

        stats["classes"][class_name] = {
            "functions": n_funcs,
            "total_bytes": total_size,
            "fields": len(fields),
            "methods_with_names": sum(1 for f in functions if any("::" in s for s in f["strings"])),
        }

    # Save stats
    with open(OUT / "stats.json", "w") as f:
        json.dump(stats, f, indent=2)

    # Print summary
    print(f"\n{'=' * 60}")
    print(f"RECONSTRUCTION SUMMARY")
    print(f"{'=' * 60}")
    print(f"Total functions: {stats['total_functions']}")
    print(f"Total classes: {stats['total_classes']}")
    print(f"Total code: {stats['total_code_bytes']:,} bytes")
    print(f"Output: {OUT}/")
    print()

    # Top classes by code size
    print("Top 20 classes by code size:")
    for name, info in sorted(stats["classes"].items(), key=lambda x: -x[1]["total_bytes"])[:20]:
        print(f"  {name:40s} {info['functions']:4d} funcs  {info['total_bytes']:>10,} bytes  {info['fields']:3d} fields")

    unknown = stats["classes"].get("Unknown", {})
    if unknown:
        print(f"\nUnmapped functions: {unknown.get('functions', 0)} ({unknown.get('total_bytes', 0):,} bytes)")
        print("These need manual classification or better string patterns.")


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""
Clean and annotate ALL decompiled code using:
1. Property offset → name mapping
2. FUN_ → method name mapping
3. Ghidra artifact cleanup
4. Type reconstruction

Transforms unreadable Ghidra output into semi-readable C++ pseudocode.
"""

import re
import json
import os
from pathlib import Path
from collections import defaultdict

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
DECOMPILED = BASE / "ghidra" / "output" / "MikeCore" / "decompiled"
GHIDRA_OUT = BASE / "ghidra" / "output" / "MikeCore"
RECONSTRUCTED = BASE / "reconstructed"
CLEAN_OUT = BASE / "reconstructed" / "clean"


def load_func_names():
    """Load FUN_addr → method name mapping."""
    names = {}
    path = GHIDRA_OUT / "func_names.tsv"
    if path.exists():
        for line in path.read_text().splitlines():
            if line.startswith("#"):
                continue
            parts = line.split("\t")
            if len(parts) >= 2:
                addr = parts[0].strip()
                name = parts[1].strip()
                names[addr] = name
    print(f"Loaded {len(names)} function names")

    # Add known names from our analysis
    known = {
        "015c4e40": "MUSpectralTimeSlice::initFromTimeSignal",
        "015c6700": "MUSpectralTimeSlice::takeDataFromTimeSlice",
        "015c6350": "MUSpectralTimeSlice::getTrueFreqData",
        "00e83120": "GNFastFourierTransformer::create",
        "0003e610": "GNFastFourierTransformer::constructor",
    }
    names.update(known)
    return names


def load_properties():
    """Load class → property list."""
    path = RECONSTRUCTED / "properties.json"
    if path.exists():
        return json.loads(path.read_text())
    return {}


def load_offset_map():
    """Load class → {property → offset} from Ghidra output."""
    offsets = defaultdict(dict)
    path = GHIDRA_OUT / "offset_map.tsv"
    if path.exists():
        for line in path.read_text().splitlines():
            if line.startswith("#"):
                continue
            parts = line.split("\t")
            if len(parts) >= 3:
                cls = parts[0].strip()
                prop = parts[1].strip()
                info = parts[2].strip()
                # Extract offset if present
                m = re.search(r'@(0x[0-9a-f]+)', info)
                if m:
                    offsets[cls][m.group(1)] = prop
    print(f"Loaded offset mappings for {len(offsets)} classes")
    return offsets


def clean_function_code(code, class_name, func_names, properties, offsets):
    """Apply all cleanups to a single function's code."""
    cleaned = code

    # 1. Remove Ghidra warnings
    cleaned = re.sub(r'/\* WARNING:.*?\*/\n?', '', cleaned)

    # 2. Rename unaff_ registers to semantic names
    cleaned = cleaned.replace("unaff_RDI", "this_ptr")
    cleaned = cleaned.replace("unaff_RSI", "arg1")
    cleaned = cleaned.replace("unaff_RDX", "arg2")
    cleaned = cleaned.replace("unaff_RCX", "arg3")
    cleaned = cleaned.replace("unaff_R8", "arg4")
    cleaned = cleaned.replace("unaff_R9", "arg5")

    # 3. Replace FUN_xxxxxxxx with known names
    for m in re.finditer(r'FUN_([0-9a-f]{8})', cleaned):
        addr = m.group(1)
        if addr in func_names:
            name = func_names[addr]
            # Clean the name for use as function call
            safe_name = name.replace("::", "_")
            cleaned = cleaned.replace(f"FUN_{addr}", safe_name)

    # 4. Replace offset accesses with property names where known
    class_offsets = offsets.get(class_name, {})
    for offset, name in class_offsets.items():
        # Pattern: *(type*)(this_ptr + 0xNN)
        pattern = rf'\*\s*\([^)]*\)\s*\(\s*this_ptr\s*\+\s*{offset}\s*\)'
        cleaned = re.sub(pattern, f'this->{name}', cleaned)
        # Pattern: this_ptr + 0xNN (in pointer arithmetic)
        cleaned = re.sub(rf'this_ptr\s*\+\s*{offset}(?!\d)', f'&this->{name}', cleaned)

    # 5. Simplify common Ghidra patterns
    # undefined8 * → void*
    cleaned = re.sub(r'undefined[0-9]*\s*\*', 'void*', cleaned)
    # undefined4 → uint32_t
    cleaned = re.sub(r'\bundefined4\b', 'uint32_t', cleaned)
    cleaned = re.sub(r'\bundefined8\b', 'uint64_t', cleaned)
    cleaned = re.sub(r'\bundefined1\b', 'uint8_t', cleaned)
    cleaned = re.sub(r'\bundefined2\b', 'uint16_t', cleaned)
    cleaned = re.sub(r'\bundefined\b', 'uint8_t', cleaned)
    # longlong → int64_t
    cleaned = cleaned.replace("longlong", "int64_t")
    cleaned = cleaned.replace("ulonglong", "uint64_t")
    # DAT_ → global_
    cleaned = re.sub(r'_?DAT_([0-9a-f]+)', r'g_\1', cleaned)
    # uRam → ram_
    cleaned = re.sub(r'uRam([0-9a-f]+)', r'ram_\1', cleaned)
    # pthread_key_t (misidentified by Ghidra) → void*
    cleaned = cleaned.replace("pthread_key_t", "void*")
    # Remove (code *) casts
    cleaned = re.sub(r'\(code\s*\*\)', '', cleaned)

    # 6. Simplify ___cxa_guard pattern to // STATIC_INIT
    cleaned = re.sub(
        r'if\s*\([^)]*==\s*\'\\0\'\)\s*\{\s*\n\s*\w+\s*=\s*___cxa_guard_acquire\(\);[^}]*___cxa_guard_release\(\);[^}]*\}[^}]*\}',
        '// [STATIC_INIT: property registration]',
        cleaned,
        flags=re.DOTALL
    )

    # 7. Clean up empty lines
    cleaned = re.sub(r'\n{3,}', '\n\n', cleaned)

    return cleaned


def main():
    CLEAN_OUT.mkdir(exist_ok=True, parents=True)

    func_names = load_func_names()
    properties = load_properties()
    offsets = load_offset_map()

    print(f"\nCleaning decompiled code...")

    total_cleaned = 0
    total_classes = 0

    # Process each class directory
    for class_dir in sorted(DECOMPILED.iterdir()):
        if not class_dir.is_dir():
            continue

        class_name = class_dir.name
        c_files = sorted(class_dir.glob("*.c"))
        if not c_files:
            continue

        # Create clean output directory
        clean_class_dir = CLEAN_OUT / class_name
        clean_class_dir.mkdir(exist_ok=True)

        class_props = properties.get(class_name, [])
        class_cleaned = 0

        for c_file in c_files:
            code = c_file.read_text()

            # Apply all cleanups
            cleaned = clean_function_code(code, class_name, func_names, properties, offsets)

            # Add property list as header comment if available
            if class_props:
                prop_header = f"// === {class_name} properties ===\n"
                for p in class_props[:30]:
                    tn = p.get("type_name", p.get("type_code", "?"))
                    prop_header += f"//   {tn:15s} {p['name']}\n"
                if len(class_props) > 30:
                    prop_header += f"//   ... +{len(class_props) - 30} more\n"

                # Insert after initial comments
                insert_pos = cleaned.find("\n\n")
                if insert_pos > 0:
                    cleaned = cleaned[:insert_pos] + "\n" + prop_header + cleaned[insert_pos:]

            # Write cleaned file
            (clean_class_dir / c_file.name).write_text(cleaned)
            class_cleaned += 1

        total_cleaned += class_cleaned
        total_classes += 1

    # Also generate a combined file per class for easy reading
    print(f"\nGenerating combined class files...")
    combined_dir = CLEAN_OUT / "_combined"
    combined_dir.mkdir(exist_ok=True)

    for class_dir in sorted(CLEAN_OUT.iterdir()):
        if not class_dir.is_dir() or class_dir.name.startswith("_"):
            continue

        c_files = sorted(class_dir.glob("*.c"), key=lambda f: -f.stat().st_size)
        if not c_files:
            continue

        lines = []
        lines.append(f"// ===================================================================")
        lines.append(f"// {class_dir.name} — Complete reconstructed pseudocode")
        lines.append(f"// {len(c_files)} functions")
        lines.append(f"// ===================================================================\n")

        class_props = properties.get(class_dir.name, [])
        if class_props:
            lines.append(f"// Registered properties ({len(class_props)}):")
            for p in class_props:
                tn = p.get("type_name", p.get("type_code", "?"))
                lines.append(f"//   {tn:15s} {p['name']}")
            lines.append("")

        for c_file in c_files:
            lines.append(f"\n// {'='*60}")
            lines.append(f"// {c_file.stem}")
            lines.append(f"// {'='*60}")
            content = c_file.read_text()
            # Skip header comments for combined view
            body_start = content.find("// Function:")
            if body_start >= 0:
                lines.append(content[body_start:])
            else:
                lines.append(content)

        (combined_dir / f"{class_dir.name}.c").write_text("\n".join(lines))

    print(f"\n{'='*60}")
    print(f"CODE CLEANUP COMPLETE")
    print(f"{'='*60}")
    print(f"Cleaned: {total_cleaned} functions across {total_classes} classes")
    print(f"Output: {CLEAN_OUT}/")
    print(f"Combined: {combined_dir}/")
    print(f"\nTotal size:")
    total_size = sum(f.stat().st_size for f in CLEAN_OUT.rglob("*.c"))
    print(f"  {total_size / 1024 / 1024:.1f} MB of cleaned pseudocode")


if __name__ == "__main__":
    main()

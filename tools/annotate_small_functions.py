#!/usr/bin/env python3
"""
Annotate small decompiled functions (<3KB) that do math.
These are getters, setters, simple calculations — the most readable code.
Renames fields using known property names where possible.
"""

import re
import json
from pathlib import Path
from collections import defaultdict

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
DECOMPILED = BASE / "ghidra" / "output" / "MikeCore" / "decompiled"
OUT = BASE / "reconstructed"

# Load property registrations
PROPS_PATH = OUT / "properties.json"


def load_properties():
    """Load class → property name mappings."""
    if not PROPS_PATH.exists():
        return {}
    data = json.loads(PROPS_PATH.read_text())
    return data


def classify_function(code, strings):
    """Classify what a small function does."""
    # Remove comments and whitespace
    clean = re.sub(r'//.*', '', code)
    clean = re.sub(r'/\*.*?\*/', '', clean, flags=re.DOTALL)

    # Count operations
    has_return = "return" in clean
    has_assignment = re.search(r'unaff_RDI\[|param_1\[|unaff_RDI\s*\+|param_1\s*\+', clean) is not None
    has_math = any(op in clean for op in ['*', '/', 'sqrt', 'sin', 'cos', 'log', 'exp', 'pow', 'fabs', 'floor', 'ceil'])
    has_vdsp = "vDSP" in clean
    has_loop = "while" in clean or "for" in clean or "do {" in clean
    has_branch = clean.count("if (") > 2
    n_lines = len([l for l in clean.split('\n') if l.strip() and not l.strip().startswith('}')])

    if has_vdsp:
        return "vDSP_operation"
    if n_lines < 8 and has_return and not has_loop:
        if has_math:
            return "simple_calculation"
        return "getter"
    if n_lines < 8 and has_assignment and not has_return:
        return "setter"
    if has_loop and has_math:
        return "math_loop"
    if has_math and not has_loop:
        return "calculation"
    if has_branch and not has_math:
        return "logic_branch"

    return "other"


def annotate_function(code, class_name, props, strings):
    """Add annotations to make the code more readable."""
    annotated = code

    # Replace common Ghidra patterns
    annotated = annotated.replace("unaff_RDI", "this")
    annotated = annotated.replace("unaff_RSI", "arg1")
    annotated = annotated.replace("unaff_RDX", "arg2")
    annotated = annotated.replace("unaff_RCX", "arg3")

    # If we have property names for this class, try to map offsets
    if class_name in props:
        prop_list = props[class_name]
        # We can't reliably map offsets without more info,
        # but we can add comments about known properties
        prop_names = [p["name"] for p in prop_list]
        annotated = f"// Known properties of {class_name}:\n" + \
                    f"// {', '.join(prop_names[:20])}\n" + \
                    ("// ... and more\n" if len(prop_names) > 20 else "") + \
                    annotated

    # Add string reference annotations inline
    for s in strings:
        if s.startswith("_") and len(s) > 2:
            # This is an ivar name - add as comment where relevant
            pass

    return annotated


def main():
    props = load_properties()
    print(f"Loaded properties for {len(props)} classes")

    print("\n=== Analyzing small functions ===")

    DSP_DIRS = [d for d in DECOMPILED.iterdir() if d.is_dir() and
                d.name.startswith(("MU", "GNFast", "GNSym", "GNAudio", "GNComp",
                                   "Pitch", "Quality", "Energy", "Resynth",
                                   "Formant", "DNA", "Window", "Sample"))]

    results = defaultdict(list)
    total_annotated = 0

    for class_dir in sorted(DSP_DIRS):
        class_name = class_dir.name

        for c_file in sorted(class_dir.glob("*.c")):
            code = c_file.read_text()

            # Check size
            size_match = re.search(r"// Size: (\d+) bytes", code)
            if not size_match:
                continue
            size = int(size_match.group(1))
            if size > 3000:
                continue

            # Extract strings
            strings = re.findall(r'//\s+str:\s+"([^"]+)"', code)

            # Get code body
            body_start = code.find("\n{")
            if body_start < 0:
                continue
            body = code[body_start:]

            # Classify
            func_type = classify_function(body, strings)
            if func_type in ("getter", "setter", "other"):
                continue  # Skip trivial

            addr = c_file.stem
            annotated = annotate_function(body, class_name, props, strings)

            results[class_name].append({
                "addr": addr,
                "size": size,
                "type": func_type,
                "strings": strings,
                "code": annotated,
            })
            total_annotated += 1

    print(f"Found {total_annotated} annotatable functions across {len(results)} classes")

    # Save annotated functions
    annot_dir = OUT / "annotated"
    annot_dir.mkdir(exist_ok=True)

    for class_name, funcs in sorted(results.items(), key=lambda x: -len(x[1])):
        if not funcs:
            continue

        lines = []
        lines.append(f"// ===== {class_name} — Annotated small functions =====")
        lines.append(f"// {len(funcs)} readable functions")

        if class_name in props:
            lines.append(f"// Known properties: {len(props[class_name])}")
            for p in props[class_name][:30]:
                tn = p.get("type_name", p.get("type_code", "?"))
                lines.append(f"//   {tn:15s} {p['name']}")
            if len(props[class_name]) > 30:
                lines.append(f"//   ... +{len(props[class_name]) - 30} more")

        lines.append("")

        for func in sorted(funcs, key=lambda x: -x["size"]):
            lines.append(f"// {'='*50}")
            lines.append(f"// @{func['addr']} ({func['size']} bytes) — {func['type']}")
            if func["strings"]:
                for s in func["strings"][:5]:
                    lines.append(f"// str: \"{s[:80]}\"")
            lines.append(func["code"])
            lines.append("")

        (annot_dir / f"{class_name}.c").write_text("\n".join(lines))

    # Print summary
    print(f"\nOutput: {annot_dir}/")

    # Stats by type
    all_types = defaultdict(int)
    for funcs in results.values():
        for f in funcs:
            all_types[f["type"]] += 1

    print(f"\nFunction types:")
    for t, c in sorted(all_types.items(), key=lambda x: -x[1]):
        print(f"  {t:25s} {c:5d}")

    print(f"\nTop classes by readable functions:")
    for class_name, funcs in sorted(results.items(), key=lambda x: -len(x[1]))[:20]:
        types = defaultdict(int)
        for f in funcs:
            types[f["type"]] += 1
        type_str = ", ".join(f"{t}:{c}" for t, c in sorted(types.items(), key=lambda x: -x[1]))
        print(f"  {class_name:40s} {len(funcs):4d} funcs  [{type_str}]")


if __name__ == "__main__":
    main()

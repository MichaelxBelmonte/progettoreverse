#!/usr/bin/env python3
"""
Classify Unknown functions using:
1. Address proximity (same compilation unit = contiguous addresses)
2. Call graph (called by known class → same class)
3. Field access patterns (same struct offsets → same class)
"""

import os
import re
import json
from pathlib import Path
from collections import defaultdict, Counter

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
DECOMPILED = BASE / "ghidra" / "output" / "MikeCore" / "decompiled"
OUT = BASE / "ghidra" / "output" / "MikeCore" / "decompiled"

# ============================================================
# PHASE 0: Load all data
# ============================================================
def load_all():
    """Load index and parse all decompiled files."""
    functions = {}  # addr → {class, size, strings, calls, fields, code_path}

    index_path = OUT / "index.tsv"
    for line in index_path.read_text().splitlines():
        if line.startswith("#"):
            continue
        parts = line.split("\t")
        if len(parts) >= 3:
            addr = parts[0].strip()
            size = int(parts[1].strip()) if parts[1].strip().isdigit() else 0
            cls = parts[2].strip()
            functions[addr] = {
                "class": cls,
                "size": size,
                "calls_out": [],      # functions this calls
                "called_by": [],      # functions that call this
                "fields": set(),      # param_1->field patterns
                "strings": [],
            }

    print(f"Loaded {len(functions)} functions from index")

    # Parse decompiled code for calls and field access
    print("Parsing decompiled code for calls and field access...")
    processed = 0
    for class_dir in DECOMPILED.iterdir():
        if not class_dir.is_dir():
            continue
        for c_file in class_dir.glob("*.c"):
            addr = c_file.stem
            if addr not in functions:
                continue

            code = c_file.read_text()

            # Extract FUN_ calls
            calls = set(re.findall(r"FUN_([0-9a-f]{8})", code))
            functions[addr]["calls_out"] = list(calls)

            # Extract field access patterns (this/param_1 -> field_0xNN)
            fields = set(re.findall(r"(?:unaff_RDI|param_1)\s*(?:\+\s*|->)(?:field_)?(0x[0-9a-f]+)", code))
            # Also catch array-style: *(type *)(param_1 + 0xNN)
            fields.update(re.findall(r"\*\s*\([^)]*\)\s*\(\s*(?:unaff_RDI|param_1)\s*\+\s*(0x[0-9a-f]+)\s*\)", code))
            functions[addr]["fields"] = fields

            # Extract string refs from comments
            strings = re.findall(r'//\s+str:\s+"([^"]+)"', code)
            functions[addr]["strings"] = strings

            processed += 1
            if processed % 500 == 0:
                print(f"  parsed {processed} files...")

    # Build reverse call graph
    for addr, info in functions.items():
        for called in info["calls_out"]:
            if called in functions:
                functions[called]["called_by"].append(addr)

    print(f"Parsed {processed} files")
    return functions


# ============================================================
# PHASE 1: Address proximity clustering
# ============================================================
def phase_address_proximity(functions):
    """Group contiguous Unknown functions near known-class functions."""
    print("\n=== PHASE 1: Address proximity clustering ===")

    # Sort all functions by address
    sorted_addrs = sorted(functions.keys(), key=lambda a: int(a, 16))

    # Build address → index mapping
    addr_to_idx = {addr: i for i, addr in enumerate(sorted_addrs)}

    classified = 0
    MAX_GAP = 0x10000  # 64KB max gap to consider "same compilation unit"

    # For each Unknown function, look at neighbors
    for i, addr in enumerate(sorted_addrs):
        if functions[addr]["class"] != "Unknown":
            continue

        addr_int = int(addr, 16)

        # Look backward for nearest known class
        backward_class = None
        backward_dist = float('inf')
        for j in range(i - 1, max(i - 30, -1), -1):
            neighbor = sorted_addrs[j]
            dist = addr_int - int(neighbor, 16)
            if dist > MAX_GAP:
                break
            if functions[neighbor]["class"] != "Unknown":
                backward_class = functions[neighbor]["class"]
                backward_dist = dist
                break

        # Look forward for nearest known class
        forward_class = None
        forward_dist = float('inf')
        for j in range(i + 1, min(i + 30, len(sorted_addrs))):
            neighbor = sorted_addrs[j]
            dist = int(neighbor, 16) - addr_int
            if dist > MAX_GAP:
                break
            if functions[neighbor]["class"] != "Unknown":
                forward_class = functions[neighbor]["class"]
                forward_dist = dist
                break

        # If both neighbors agree on the class → high confidence
        if backward_class and forward_class and backward_class == forward_class:
            functions[addr]["class"] = backward_class
            functions[addr]["class_source"] = "addr_proximity_both"
            classified += 1
        # If only one neighbor within tight range
        elif backward_class and backward_dist < 0x2000:
            functions[addr]["class"] = backward_class
            functions[addr]["class_source"] = "addr_proximity_backward"
            classified += 1
        elif forward_class and forward_dist < 0x2000:
            functions[addr]["class"] = forward_class
            functions[addr]["class_source"] = "addr_proximity_forward"
            classified += 1

    print(f"  Classified {classified} functions by address proximity")
    return classified


# ============================================================
# PHASE 2: Call graph propagation
# ============================================================
def phase_call_graph(functions):
    """If all callers of a function belong to the same class → assign that class."""
    print("\n=== PHASE 2: Call graph propagation ===")

    classified = 0
    iterations = 0
    max_iterations = 5

    while iterations < max_iterations:
        new_classified = 0
        iterations += 1

        for addr, info in functions.items():
            if info["class"] != "Unknown":
                continue

            # Check callers
            caller_classes = Counter()
            for caller_addr in info["called_by"]:
                if caller_addr in functions:
                    cls = functions[caller_addr]["class"]
                    if cls != "Unknown":
                        caller_classes[cls] += 1

            if not caller_classes:
                continue

            # If one class dominates (>= 60% of callers)
            total_callers = sum(caller_classes.values())
            top_class, top_count = caller_classes.most_common(1)[0]

            if top_count >= max(2, total_callers * 0.6):
                functions[addr]["class"] = top_class
                functions[addr]["class_source"] = f"call_graph_iter{iterations}"
                new_classified += 1

            # Also check: if this function calls mostly one class
            elif not caller_classes:
                callee_classes = Counter()
                for called_addr in info["calls_out"]:
                    if called_addr in functions:
                        cls = functions[called_addr]["class"]
                        if cls != "Unknown":
                            callee_classes[cls] += 1
                if callee_classes:
                    top_class, top_count = callee_classes.most_common(1)[0]
                    total_callees = sum(callee_classes.values())
                    if top_count >= max(3, total_callees * 0.7):
                        functions[addr]["class"] = top_class
                        functions[addr]["class_source"] = f"call_graph_callee_iter{iterations}"
                        new_classified += 1

        classified += new_classified
        print(f"  Iteration {iterations}: classified {new_classified} functions")
        if new_classified == 0:
            break

    print(f"  Total classified by call graph: {classified}")
    return classified


# ============================================================
# PHASE 3: Field access pattern clustering
# ============================================================
def phase_field_patterns(functions):
    """Group functions that access the same struct fields."""
    print("\n=== PHASE 3: Field access pattern clustering ===")

    # Build field signature → class mapping from known functions
    class_field_signatures = defaultdict(lambda: Counter())
    for addr, info in functions.items():
        if info["class"] != "Unknown" and info["fields"]:
            for field in info["fields"]:
                class_field_signatures[info["class"]][field] += 1

    # For each Unknown function, find best matching class by field overlap
    classified = 0
    for addr, info in functions.items():
        if info["class"] != "Unknown" or not info["fields"] or len(info["fields"]) < 3:
            continue

        best_class = None
        best_score = 0

        for cls, field_counts in class_field_signatures.items():
            class_fields = set(field_counts.keys())
            overlap = len(info["fields"] & class_fields)
            if overlap >= 3 and overlap > best_score:
                # Score by overlap ratio
                ratio = overlap / max(len(info["fields"]), 1)
                if ratio >= 0.4:
                    best_score = overlap
                    best_class = cls

        if best_class:
            functions[addr]["class"] = best_class
            functions[addr]["class_source"] = "field_patterns"
            classified += 1

    print(f"  Classified {classified} functions by field patterns")
    return classified


# ============================================================
# MAIN
# ============================================================
def main():
    functions = load_all()

    unknown_before = sum(1 for f in functions.values() if f["class"] == "Unknown")
    unknown_bytes_before = sum(f["size"] for f in functions.values() if f["class"] == "Unknown")
    print(f"\nBefore: {unknown_before} Unknown functions ({unknown_bytes_before:,} bytes)")

    # Run phases
    c1 = phase_address_proximity(functions)
    c2 = phase_call_graph(functions)
    c3 = phase_field_patterns(functions)

    # Second pass of call graph after field patterns added new info
    c4 = phase_call_graph(functions)

    unknown_after = sum(1 for f in functions.values() if f["class"] == "Unknown")
    unknown_bytes_after = sum(f["size"] for f in functions.values() if f["class"] == "Unknown")

    print(f"\n{'='*60}")
    print(f"CLASSIFICATION RESULTS")
    print(f"{'='*60}")
    print(f"Before: {unknown_before} Unknown ({unknown_bytes_before:,} bytes)")
    print(f"After:  {unknown_after} Unknown ({unknown_bytes_after:,} bytes)")
    print(f"Classified: {unknown_before - unknown_after} functions ({unknown_bytes_before - unknown_bytes_after:,} bytes)")
    print(f"  Phase 1 (address proximity): {c1}")
    print(f"  Phase 2 (call graph):        {c2}")
    print(f"  Phase 3 (field patterns):    {c3}")
    print(f"  Phase 4 (call graph round2): {c4}")
    print(f"Reduction: {(unknown_before - unknown_after) / unknown_before * 100:.1f}%")

    # Save updated class map
    print(f"\nSaving results...")

    # Write new index
    new_index = OUT / "index_classified.tsv"
    with open(new_index, "w") as f:
        f.write("# Address\tSize\tClass\tSource\n")
        for addr in sorted(functions.keys(), key=lambda a: int(a, 16)):
            info = functions[addr]
            source = info.get("class_source", "original")
            f.write(f"{addr}\t{info['size']}\t{info['class']}\t{source}\n")

    # Write class summary
    class_stats = defaultdict(lambda: {"count": 0, "bytes": 0, "sources": Counter()})
    for info in functions.values():
        cls = info["class"]
        class_stats[cls]["count"] += 1
        class_stats[cls]["bytes"] += info["size"]
        source = info.get("class_source", "original")
        class_stats[cls]["sources"][source] += 1

    summary_path = OUT / "class_summary_v2.txt"
    with open(summary_path, "w") as f:
        f.write(f"# Classification summary (v2 with clustering)\n")
        f.write(f"# Unknown before: {unknown_before}, after: {unknown_after}\n\n")

        for cls, stats in sorted(class_stats.items(), key=lambda x: -x[1]["bytes"]):
            if cls == "Unknown":
                continue
            sources = ", ".join(f"{s}:{c}" for s, c in stats["sources"].most_common())
            f.write(f"{cls}: {stats['count']} funcs, {stats['bytes']:,} bytes [{sources}]\n")

        f.write(f"\nUnknown: {class_stats['Unknown']['count']} funcs, {class_stats['Unknown']['bytes']:,} bytes\n")

    # Top classes after classification
    print(f"\nTop 30 classes by code size (after classification):")
    for cls, stats in sorted(class_stats.items(), key=lambda x: -x[1]["bytes"])[:30]:
        print(f"  {cls:45s} {stats['count']:5d} funcs  {stats['bytes']:>12,} bytes")

    print(f"\nOutput: {new_index}")
    print(f"Summary: {summary_path}")


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""
Extract DSP parameter values from decompiled .c files.
Reads 7860 decompiled C files and extracts:
  1. Hex float constants assigned to known struct offsets
  2. DAT_* global constants used in DSP comparisons
  3. Property registrations with type codes
  4. Cross-references with offset_map.tsv for property names

Output:
  - ghidra/output/MikeCore/param_values.tsv
  - ghidra/output/MikeCore/dsp_constants.json
"""

import re
import json
import struct
import sys
from pathlib import Path
from collections import defaultdict

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
DECOMPILED = BASE / "ghidra" / "output" / "MikeCore" / "decompiled"
OFFSET_MAP = BASE / "ghidra" / "output" / "MikeCore" / "offset_map.tsv"
PROP_ORDER = BASE / "ghidra" / "output" / "MikeCore" / "property_order.tsv"
OUT_DIR = BASE / "ghidra" / "output" / "MikeCore"

# DSP-heavy classes to prioritize
DSP_CLASSES = {
    "MUElementAnalyzer", "MUSpectralTimeSlice", "MUSpectrumShaper",
    "MULSSGenerator", "MULSSComponentRenderer", "MUSampledFunction",
    "MUAudioSourcePrincipalItem", "MUAudioSourceDescription",
    "MUAudioSourceAttackItem", "MUAudioSourceSibilantItem",
    "MUAudioSourceItem", "MUAudioSourcePropertyPoint",
    "MUPitchMapper", "MUVoiceMapper", "MUPercussivePitchSystem",
    "MUFormant", "MUFilterEngine", "MUElement",
    "PitchDetection", "QualityScoring", "EnergyClaimSystem",
    "Resynthesis", "SubharmonicTracking", "WindowOverlap",
    "SampleRateReduction", "FormantsSynth", "DNA2",
    "GNFastFourierTransformer", "GNSymmetricFIRFilter",
    "MUSpectralPointDNA", "MUPitchClassMapper",
    "MUPitchApproachMapper", "MUPitchMatrixPeak",
    "MUDetectionPitchCenterAssignmentInspector",
    "MUElementRealtimeInfo", "MUPulseTimeline",
}


def hex_to_float(hex_val):
    """Convert a 32-bit hex integer to IEEE 754 float."""
    try:
        if isinstance(hex_val, str):
            hex_val = int(hex_val, 16)
        b = struct.pack('>I', hex_val & 0xFFFFFFFF)
        f = struct.unpack('>f', b)[0]
        if abs(f) < 1e-45 or abs(f) > 1e38:
            return None
        return f
    except:
        return None


def hex_to_double(hex_val):
    """Convert a 64-bit hex integer to IEEE 754 double."""
    try:
        if isinstance(hex_val, str):
            hex_val = int(hex_val, 16)
        b = struct.pack('>Q', hex_val & 0xFFFFFFFFFFFFFFFF)
        d = struct.unpack('>d', b)[0]
        if abs(d) < 1e-300 or abs(d) > 1e300:
            return None
        return d
    except:
        return None


def load_offset_map():
    """Load offset_map.tsv → dict of (class, property) → type."""
    mapping = {}
    if not OFFSET_MAP.exists():
        return mapping
    for line in OFFSET_MAP.read_text().splitlines():
        if line.startswith('#'):
            continue
        parts = line.split('\t')
        if len(parts) >= 3:
            cls, prop, typ = parts[0], parts[1], parts[2]
            mapping[(cls, prop)] = typ
    return mapping


def load_property_order():
    """Load property_order.tsv → dict of (class, index) → property name."""
    props = {}
    if not PROP_ORDER.exists():
        return props
    for line in PROP_ORDER.read_text().splitlines():
        if line.startswith('#'):
            continue
        parts = line.split('\t')
        if len(parts) >= 3:
            cls, idx, prop = parts[0], parts[1], parts[2]
            props[(cls, idx)] = prop
    return props


def extract_hex_float_assignments(code, filepath):
    """Find hex integer constants assigned to struct offsets.
    Pattern: *(undefined4 *)((longlong)unaff_RDI + 0xNN) = 0xHEXVAL;
    These are often IEEE 754 floats stored as raw hex.
    """
    results = []

    # Pattern 1: *(type*)((longlong)VAR + 0xOFFSET) = 0xHEXVAL;
    pat1 = re.compile(
        r'\*\([^)]*\)\s*\(\s*\(?longlong\)?\s*\w+\s*\+\s*(0x[0-9a-f]+)\s*\)\s*=\s*(0x[0-9a-f]+)\s*;',
        re.IGNORECASE
    )
    # Pattern 2: *(type*)(VAR + 0xOFFSET) = 0xHEXVAL;
    pat2 = re.compile(
        r'\*\([^)]*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-f]+)\s*\)\s*=\s*(0x[0-9a-f]+)\s*;',
        re.IGNORECASE
    )

    for pat in [pat1, pat2]:
        for m in pat.finditer(code):
            offset = m.group(1)
            hex_val = int(m.group(2), 16)

            # Try as float
            fval = hex_to_float(hex_val)
            if fval is not None and 1e-10 < abs(fval) < 1e10:
                # Get context line
                start = max(0, m.start() - 40)
                end = min(len(code), m.end() + 20)
                ctx = code[start:end].replace('\n', ' ').strip()

                results.append({
                    'offset': offset,
                    'hex': f"0x{hex_val:08x}",
                    'float_value': fval,
                    'context': ctx,
                    'file': filepath.name,
                })

    return results


def extract_float_literal_assignments(code, filepath):
    """Find direct float assignments to struct offsets.
    Pattern: *(float *)(unaff_RDI + 0xNN) = 1.5;
    """
    results = []

    pat = re.compile(
        r'\*\(\s*float\s*\*\s*\)\s*\(\s*\(?longlong\)?\s*\w+\s*\+\s*(0x[0-9a-f]+)\s*\)\s*=\s*'
        r'(-?[\d]+\.[\d]*(?:[eE][+-]?\d+)?[fF]?)\s*;',
        re.IGNORECASE
    )

    for m in pat.finditer(code):
        offset = m.group(1)
        fval = float(m.group(2).rstrip('fF'))
        if abs(fval) > 1e-15:
            start = max(0, m.start() - 30)
            end = min(len(code), m.end() + 20)
            ctx = code[start:end].replace('\n', ' ').strip()

            results.append({
                'offset': offset,
                'hex': '',
                'float_value': fval,
                'context': ctx,
                'file': filepath.name,
            })

    return results


def extract_dat_constants(code, filepath):
    """Find DAT_* global constants and their usage context.
    Look for patterns where DAT_* is used in comparisons or assignments
    with known property-related operations.
    """
    results = []

    # Find DAT_ references in comparisons: if (value < DAT_XXXXX) or * DAT_XXXXX
    pat = re.compile(r'(DAT_[0-9a-f]+)', re.IGNORECASE)
    lines = code.split('\n')

    for i, line in enumerate(lines):
        for m in pat.finditer(line):
            dat_name = m.group(1)
            # Get surrounding context (this line + 1 before)
            ctx_lines = []
            if i > 0:
                ctx_lines.append(lines[i-1].strip())
            ctx_lines.append(line.strip())
            ctx = ' | '.join(ctx_lines)

            # Check if this line has DSP-relevant keywords
            low = line.lower()
            is_dsp = any(kw in low for kw in [
                'quality', 'pitch', 'harmonic', 'energy', 'attack',
                'frequency', 'amplitude', 'tonality', 'relevance',
                'spectral', 'fft', 'window', 'overlap', 'separation',
                'formant', 'sibilant', 'vibrato', 'rhythm', 'decay',
                '0x10c', '0x114', '0x11c', '0x70', '0x74',
            ])

            if is_dsp:
                results.append({
                    'dat_name': dat_name,
                    'context': ctx[:200],
                    'file': filepath.name,
                    'line': i + 1,
                })

    return results


def extract_property_registrations(code, filepath):
    """Extract property name + type code pairs from registration patterns.
    Pattern: _DAT_xxx = "_propName"; ... _DAT_xxx = 0xTT00; ... _DAT_xxx = "typeName";
    """
    results = []
    name_pat = re.compile(r'_DAT_([0-9a-f]+)\s*=\s*"(_[a-zA-Z][a-zA-Z0-9_]*)"')
    type_code_pat = re.compile(r'_DAT_[0-9a-f]+\s*=\s*(0x[0-9a-f]+00)\s*;')
    type_name_pat = re.compile(r'_DAT_[0-9a-f]+\s*=\s*"([A-Z][A-Za-z0-9_ *]+)"')

    TYPE_CODES = {
        0x66: "float", 0x64: "double", 0x69: "int", 0x6c: "int64",
        0x5e: "pointer", 0x63: "char", 0x42: "bool", 0x62: "bool",
        0x73: "short", 0x53: "ushort", 0x49: "uint", 0x4c: "uint64",
        0x43: "uchar",
    }

    lines = code.split('\n')
    for i, line in enumerate(lines):
        nm = name_pat.search(line)
        if not nm:
            continue

        prop_name = nm.group(2)
        dat_addr = nm.group(1)
        type_code = None
        type_name = None

        for j in range(i + 1, min(i + 8, len(lines))):
            tc = type_code_pat.search(lines[j])
            if tc and type_code is None:
                raw = int(tc.group(1), 16)
                byte_val = (raw >> 8) & 0xFF
                type_code = TYPE_CODES.get(byte_val, f"0x{byte_val:02x}")

            tn = type_name_pat.search(lines[j])
            if tn and type_name is None:
                type_name = tn.group(1)

        results.append({
            'name': prop_name,
            'type_code': type_code or 'unknown',
            'type_name': type_name or '',
            'dat_addr': dat_addr,
            'file': filepath.name,
        })

    return results


def extract_comparison_values(code, filepath):
    """Find float comparisons at known offsets.
    Pattern: if (*(float *)(this + 0xNN) < VALUE)
    or: if (*(float *)(this + 0xNN) <= DAT_XXX && DAT_XXX != *(float*)(this + 0xNN))
    """
    results = []

    # Pattern: *(float *)(VAR + 0xOFFSET) <= FLOATVAL
    pat = re.compile(
        r'\*\(\s*float\s*\*\s*\)\s*\(\s*\(?longlong\)?\s*\w+\s*\+\s*(0x[0-9a-f]+)\s*\)\s*'
        r'(<=?|>=?|==|!=)\s*'
        r'(-?[\d]+\.[\d]*(?:[eE][+-]?\d+)?[fF]?)',
        re.IGNORECASE
    )

    for m in pat.finditer(code):
        offset = m.group(1)
        op = m.group(2)
        val = float(m.group(3).rstrip('fF'))

        start = max(0, m.start() - 30)
        end = min(len(code), m.end() + 30)
        ctx = code[start:end].replace('\n', ' ').strip()

        results.append({
            'offset': offset,
            'operator': op,
            'value': val,
            'context': ctx[:150],
            'file': filepath.name,
        })

    return results


def main():
    print("=" * 60)
    print("  MikeCore Parameter Extractor")
    print("  Reading decompiled .c files (no Ghidra needed)")
    print("=" * 60)

    # Load cross-reference data
    print("\nLoading offset map...")
    offset_map = load_offset_map()
    print(f"  {len(offset_map)} property→type mappings")

    prop_order = load_property_order()
    print(f"  {len(prop_order)} property order entries")

    # Build reverse lookup: for each class, offset → property name
    # This is approximate since we don't have exact offsets in offset_map,
    # but we know the property order
    class_props = defaultdict(list)
    for (cls, prop), typ in offset_map.items():
        class_props[cls].append((prop, typ))

    # Scan all decompiled files
    all_hex_floats = []
    all_float_assignments = []
    all_dat_constants = []
    all_registrations = []
    all_comparisons = []

    class_dirs = sorted(DECOMPILED.iterdir())
    total_files = 0
    total_classes = 0

    for class_dir in class_dirs:
        if not class_dir.is_dir():
            continue
        class_name = class_dir.name
        total_classes += 1

        c_files = sorted(class_dir.glob("*.c"))
        for c_file in c_files:
            total_files += 1
            if total_files % 1000 == 0:
                print(f"  Processed {total_files} files...", file=sys.stderr)

            code = c_file.read_text()

            # 1. Hex float assignments
            hf = extract_hex_float_assignments(code, c_file)
            for r in hf:
                r['class'] = class_name
            all_hex_floats.extend(hf)

            # 2. Direct float assignments
            fa = extract_float_literal_assignments(code, c_file)
            for r in fa:
                r['class'] = class_name
            all_float_assignments.extend(fa)

            # 3. Property registrations
            reg = extract_property_registrations(code, c_file)
            for r in reg:
                r['class'] = class_name
            all_registrations.extend(reg)

            # Only do expensive DAT extraction and comparisons for DSP classes
            if class_name in DSP_CLASSES:
                # 4. DAT constants
                dat = extract_dat_constants(code, c_file)
                for r in dat:
                    r['class'] = class_name
                all_dat_constants.extend(dat)

                # 5. Float comparisons at offsets
                cmp = extract_comparison_values(code, c_file)
                for r in cmp:
                    r['class'] = class_name
                all_comparisons.extend(cmp)

    print(f"\nProcessed {total_files} files across {total_classes} classes")
    print(f"  Hex float assignments:    {len(all_hex_floats)}")
    print(f"  Float literal assignments: {len(all_float_assignments)}")
    print(f"  Property registrations:    {len(all_registrations)}")
    print(f"  DAT constant references:   {len(all_dat_constants)}")
    print(f"  Float comparisons:         {len(all_comparisons)}")

    # ── Build param_values.tsv ──

    print("\n=== Generating param_values.tsv ===")

    # Merge hex float + float literal assignments
    all_assignments = []
    for r in all_hex_floats:
        all_assignments.append({
            'class': r['class'],
            'offset': r['offset'],
            'value': r['float_value'],
            'hex': r['hex'],
            'source': r['file'],
            'context': r['context'],
            'type': 'hex_float',
        })
    for r in all_float_assignments:
        all_assignments.append({
            'class': r['class'],
            'offset': r['offset'],
            'value': r['float_value'],
            'hex': '',
            'source': r['file'],
            'context': r['context'],
            'type': 'float_literal',
        })

    # Write param_values.tsv
    tsv_path = OUT_DIR / "param_values.tsv"
    with open(tsv_path, 'w') as f:
        f.write("# ClassName\tOffset\tValue\tHex\tType\tSourceFile\tContext\n")
        for a in sorted(all_assignments, key=lambda x: (x['class'], x['offset'])):
            f.write(f"{a['class']}\t{a['offset']}\t{a['value']:.8g}\t{a['hex']}\t"
                    f"{a['type']}\t{a['source']}\t{a['context']}\n")

    print(f"  Written {len(all_assignments)} entries to {tsv_path}")

    # ── Build dsp_constants.json ──

    print("\n=== Generating dsp_constants.json ===")

    dsp_data = {
        'hex_float_assignments': [],
        'float_comparisons': [],
        'dat_constants': defaultdict(list),
        'registrations_by_class': defaultdict(list),
        'summary': {},
    }

    # Group assignments by class and find interesting non-zero values
    interesting_assignments = defaultdict(list)
    for a in all_assignments:
        if abs(a['value']) > 1e-15 and abs(a['value']) != 1.0:
            interesting_assignments[a['class']].append(a)

    dsp_data['hex_float_assignments'] = [
        a for a in all_assignments
        if a['class'] in DSP_CLASSES and abs(a['value']) > 1e-15
    ]

    dsp_data['float_comparisons'] = [
        {'class': c['class'], 'offset': c['offset'], 'operator': c['operator'],
         'value': c['value'], 'context': c['context'], 'file': c['file']}
        for c in all_comparisons
        if abs(c['value']) > 1e-15
    ]

    # Deduplicate DAT constants by name
    dat_seen = set()
    for d in all_dat_constants:
        key = (d['class'], d['dat_name'])
        if key not in dat_seen:
            dat_seen.add(key)
            dsp_data['dat_constants'][d['class']].append({
                'name': d['dat_name'],
                'context': d['context'],
                'file': d['file'],
            })

    # Registrations by class
    for r in all_registrations:
        dsp_data['registrations_by_class'][r['class']].append({
            'name': r['name'],
            'type_code': r['type_code'],
            'type_name': r['type_name'],
        })

    # Summary
    dsp_data['summary'] = {
        'total_files': total_files,
        'total_classes': total_classes,
        'total_hex_float_assignments': len(all_hex_floats),
        'total_float_assignments': len(all_float_assignments),
        'total_registrations': len(all_registrations),
        'total_dat_references': len(all_dat_constants),
        'total_comparisons': len(all_comparisons),
        'dsp_classes_found': sorted(
            c for c in DSP_CLASSES
            if (DECOMPILED / c).exists()
        ),
    }

    json_path = OUT_DIR / "dsp_constants.json"
    with open(json_path, 'w') as f:
        json.dump(dsp_data, f, indent=2, default=str)

    print(f"  Written to {json_path}")

    # ── Print summary ──

    print("\n" + "=" * 60)
    print("  RESULTS SUMMARY")
    print("=" * 60)

    # Top DSP classes by number of interesting values
    print("\nDSP classes with extracted values:")
    for cls in sorted(DSP_CLASSES):
        if cls not in interesting_assignments:
            continue
        vals = interesting_assignments[cls]
        print(f"\n  {cls} ({len(vals)} values):")
        # Show unique offset→value pairs
        seen_offsets = {}
        for v in vals:
            key = (v['offset'], round(v['value'], 6))
            if key not in seen_offsets:
                seen_offsets[key] = v
        for (offset, val), v in sorted(seen_offsets.items()):
            print(f"    offset {offset:>6s} = {val:>12.6f}  [{v['type']}]  {v['context'][:50]}")

    # Known critical parameters
    print("\n\nKnown Critical Parameters (from offset analysis):")
    known_offsets = {
        '0x10c': '_itemDetectionQualityLimit (MUElementAnalyzer)',
        '0x114': '_attackItemDetectionQualityLimit (MUElementAnalyzer)',
        '0x11c': '_attackItemDefaultDetectionQualityLimit (MUElementAnalyzer)',
        '0x70': '_windowOverlapForTimeSlices (MUElementAnalyzer)',
        '0x74': '_modelSpectrumSize (MUElementAnalyzer)',
    }

    for offset, desc in known_offsets.items():
        print(f"\n  {offset} → {desc}")
        found = [a for a in all_assignments if a['offset'].lower() == offset.lower()]
        if found:
            for f in found[:5]:
                print(f"    = {f['value']:.8g} ({f['hex']})  in {f['class']}/{f['source']}")
        else:
            print(f"    (no direct assignments found — value is computed at runtime)")

        # Check comparisons
        comps = [c for c in all_comparisons if c['offset'].lower() == offset.lower()]
        if comps:
            print(f"    Comparisons:")
            for c in comps[:5]:
                print(f"      {c['operator']} {c['value']:.6f}  in {c['class']}/{c['file']}")

    # Float comparison summary for DSP classes
    print("\n\nFloat comparisons in DSP code (thresholds/limits):")
    for cls in sorted(DSP_CLASSES):
        comps = [c for c in all_comparisons if c['class'] == cls]
        if not comps:
            continue
        print(f"\n  {cls}:")
        seen = set()
        for c in comps:
            key = (c['offset'], c['operator'], round(c['value'], 6))
            if key not in seen:
                seen.add(key)
                print(f"    [{c['offset']}] {c['operator']} {c['value']:.6f}  {c['context'][:50]}")

    print(f"\n\nOutput files:")
    print(f"  {tsv_path}")
    print(f"  {json_path}")


if __name__ == "__main__":
    main()

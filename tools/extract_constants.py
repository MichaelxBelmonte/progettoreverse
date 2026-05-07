#!/usr/bin/env python3
"""
Extract all numeric constants (tuning parameters) from decompiled DSP code.
Focuses on float/double literals in MU* classes.
"""

import re
import json
from pathlib import Path
from collections import defaultdict

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
DECOMPILED = BASE / "ghidra" / "output" / "MikeCore" / "decompiled"
OUT = BASE / "reconstructed"

# DSP-relevant classes
DSP_CLASSES = [
    "MUElementAnalyzer", "MUSpectralTimeSlice", "MUSpectrumShaper",
    "MULSSGenerator", "MULSSComponentRenderer", "MUSampledFunction",
    "MUAudioSourcePrincipalItem", "MUAudioSourceDescription",
    "MUAudioSourceAttackItem", "MUAudioSourceSibilantItem",
    "MUPitchMapper", "MUVoiceMapper", "MUPercussivePitchSystem",
    "MUScalePitchSystem", "MUFilterEngine", "MUFormant",
    "MUAmplitudeAnalyzer", "MUDataPointFunction",
    "PitchDetection", "QualityScoring", "EnergyClaimSystem",
    "Resynthesis", "SubharmonicTracking", "WindowOverlap",
    "SampleRateReduction", "FormantsSynth", "DNA2",
    "GNFastFourierTransformer", "GNSymmetricFIRFilter",
    "GNAudioProcessor", "GNCompressor",
    "MUNoiseMapper", "MUNoiseRange", "MUSpectralPointDNA",
    "MUPitchClassMapper", "MUPitchApproachMapper",
    "MUTempoAnalyzerEvent", "MUBarSignature",
    "MUAudioFileSource", "MUPulseAssignmentTarget",
    "MUTool", "MUElement",
]


def extract_constants_from_file(filepath):
    """Extract float/double constants from decompiled code."""
    code = filepath.read_text()
    constants = []

    # Skip header comments
    code_start = code.find("\n{")
    if code_start < 0:
        return constants
    code = code[code_start:]

    # Float literals: 1.0, 0.5f, 3.14159, 1e-5, etc.
    for m in re.finditer(r'(?<![a-zA-Z_0-9])(-?(?:\d+\.\d+(?:[eE][+-]?\d+)?|\d+[eE][+-]?\d+))(?:f|F)?(?![a-zA-Z_0-9.])', code):
        val = float(m.group(1))
        # Filter out trivial values and likely addresses
        if val == 0.0 or val == 1.0 or val == -1.0 or val == 2.0 or val == 0.5:
            continue
        if abs(val) > 1e15:  # likely memory addresses
            continue

        # Get surrounding context
        start = max(0, m.start() - 60)
        end = min(len(code), m.end() + 60)
        context = code[start:end].replace("\n", " ").strip()

        constants.append({
            "value": val,
            "raw": m.group(0),
            "context": context,
        })

    # Hex float constants used in comparisons
    for m in re.finditer(r'(?<![a-zA-Z_0-9])(0x[0-9a-fA-F]+)(?=\s*[,;)\]&|])', code):
        try:
            val = int(m.group(1), 16)
            # Common DSP constants as int representation
            if 0x3e000000 < val < 0x43000000:  # float range ~0.1 to ~128.0
                import struct
                fval = struct.unpack('f', struct.pack('I', val))[0]
                if 0.001 < abs(fval) < 10000:
                    start = max(0, m.start() - 40)
                    end = min(len(code), m.end() + 40)
                    context = code[start:end].replace("\n", " ").strip()
                    constants.append({
                        "value": fval,
                        "raw": f"{m.group(1)} (as float: {fval:.6f})",
                        "context": context,
                    })
        except:
            pass

    return constants


def categorize_constant(val, context):
    """Try to categorize a constant based on value and context."""
    ctx = context.lower()

    if "quality" in ctx or "relevance" in ctx:
        return "quality_threshold"
    if "pitch" in ctx or "cent" in ctx or "semitone" in ctx:
        return "pitch_param"
    if "energy" in ctx or "claim" in ctx:
        return "energy_param"
    if "frequency" in ctx or "freq" in ctx or "hz" in ctx:
        return "frequency_param"
    if "amplitude" in ctx or "amp" in ctx or "gain" in ctx or "volume" in ctx:
        return "amplitude_param"
    if "time" in ctx or "duration" in ctx or "sample" in ctx:
        return "time_param"
    if "attack" in ctx or "decay" in ctx or "envelope" in ctx:
        return "envelope_param"
    if "harmonic" in ctx or "subharmonic" in ctx:
        return "harmonic_param"
    if "window" in ctx or "overlap" in ctx:
        return "window_param"
    if "filter" in ctx or "cutoff" in ctx:
        return "filter_param"

    # Value-based heuristics
    if 0 < val < 1:
        return "ratio/weight"
    if 1 < val < 20:
        return "small_multiplier"
    if 20 < val < 22050:
        return "possible_frequency"
    if val in (440.0, 261.63, 130.81):
        return "musical_frequency"
    if abs(val - 1200.0) < 0.1:
        return "cents_per_octave"
    if abs(val - 69.0) < 0.1 or abs(val - 12.0) < 0.1:
        return "midi_constant"

    return "uncategorized"


def main():
    print("=== Extracting numeric constants from DSP classes ===\n")

    all_constants = {}
    total = 0

    # Process DSP classes + Unknown (which contains lots of DSP)
    target_classes = DSP_CLASSES + ["Unknown"]

    for class_name in sorted(set(target_classes)):
        class_dir = DECOMPILED / class_name
        if not class_dir.exists():
            continue

        class_constants = []
        for c_file in sorted(class_dir.glob("*.c")):
            consts = extract_constants_from_file(c_file)
            for c in consts:
                c["file"] = c_file.stem
                c["category"] = categorize_constant(c["value"], c["context"])
            class_constants.extend(consts)

        if class_constants:
            all_constants[class_name] = class_constants
            total += len(class_constants)

    print(f"Total constants extracted: {total}")
    print(f"Classes with constants: {len(all_constants)}")

    # Save full JSON
    json_path = OUT / "constants.json"
    with open(json_path, "w") as f:
        json.dump(all_constants, f, indent=2, default=str)

    # Generate readable summary
    summary_path = OUT / "constants_summary.txt"
    with open(summary_path, "w") as f:
        f.write("# Numeric constants extracted from MikeCore DSP code\n")
        f.write(f"# Total: {total} constants from {len(all_constants)} classes\n\n")

        for class_name in sorted(all_constants.keys()):
            if class_name == "Unknown":
                continue
            consts = all_constants[class_name]
            if not consts:
                continue

            f.write(f"\n{'='*60}\n")
            f.write(f"  {class_name} — {len(consts)} constants\n")
            f.write(f"{'='*60}\n\n")

            # Group by category
            by_cat = defaultdict(list)
            for c in consts:
                by_cat[c["category"]].append(c)

            for cat in sorted(by_cat.keys()):
                items = sorted(by_cat[cat], key=lambda x: abs(x["value"]))
                f.write(f"  [{cat}]\n")
                for c in items[:30]:
                    ctx = c["context"][:70]
                    f.write(f"    {c['value']:>15.6f}  {ctx}\n")
                if len(items) > 30:
                    f.write(f"    ... +{len(items)-30} more\n")
                f.write(f"\n")

    # Print top interesting constants per DSP class
    print(f"\nTop constants per DSP class:")
    for class_name in DSP_CLASSES:
        if class_name not in all_constants:
            continue
        consts = all_constants[class_name]
        # Filter interesting ones
        interesting = [c for c in consts if c["category"] != "uncategorized"]
        if not interesting:
            interesting = consts[:5]
        print(f"\n  {class_name} ({len(consts)} total):")
        for c in interesting[:8]:
            print(f"    {c['value']:>12.4f}  [{c['category']}]  {c['context'][:50]}")

    print(f"\nOutput: {json_path}")
    print(f"Summary: {summary_path}")


if __name__ == "__main__":
    main()

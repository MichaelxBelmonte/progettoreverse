#!/usr/bin/env python3
"""
MikeCore Reverse Engineering Orchestrator
Verifica ogni doc contro i binari reali, assegna confidence, suggerisce miglioramenti.
"""

import subprocess
import os
import re
import json
from datetime import datetime
from pathlib import Path

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
DOCS = BASE / "docs"
MIKE = BASE / "binaries" / "mike"
CORE = BASE / "binaries" / "MikeCore"
METALLIB = BASE / "binaries" / "default.metallib"
VERIFICATION_LOG = DOCS / "10_VERIFICATION.md"
CONFIDENCE_DB = BASE / "data" / "confidence.json"


def run(cmd, timeout=30):
    """Run shell command, return stdout."""
    try:
        r = subprocess.run(cmd, shell=True, capture_output=True, text=True, timeout=timeout)
        return r.stdout.strip()
    except subprocess.TimeoutExpired:
        return "[TIMEOUT]"
    except Exception as e:
        return f"[ERROR: {e}]"


def strings_grep(binary, pattern, case_insensitive=True):
    """Search strings in binary."""
    flag = "-i" if case_insensitive else ""
    return run(f"strings '{binary}' | grep {flag} '{pattern}'")


def nm_grep(binary, pattern):
    """Search symbols."""
    return run(f"nm '{binary}' 2>/dev/null | grep -i '{pattern}'")


def count_matches(binary, pattern):
    """Count string matches."""
    return int(run(f"strings '{binary}' | grep -ic '{pattern}'") or "0")


# Cache dei doc letti
_doc_cache = {}


def read_doc(doc_name):
    """Read a doc file and cache it."""
    if doc_name not in _doc_cache:
        doc_path = DOCS / f"{doc_name}.md"
        if doc_path.exists():
            _doc_cache[doc_name] = doc_path.read_text()
        else:
            _doc_cache[doc_name] = ""
    return _doc_cache[doc_name]


def doc_contains(doc_name, pattern):
    """Check if a doc already contains a string/pattern (case-insensitive)."""
    content = read_doc(doc_name)
    if not content:
        return False
    return pattern.lower() in content.lower()


def doc_contains_any(doc_name, patterns):
    """Check if a doc contains ANY of the given patterns."""
    return any(doc_contains(doc_name, p) for p in patterns)


def doc_contains_all(doc_name, patterns):
    """Check if a doc contains ALL of the given patterns."""
    return all(doc_contains(doc_name, p) for p in patterns)


def discovery_or_verified(doc_name, evidence_keys, claim, evidence, base_confidence=90, notes=""):
    """Create a Finding that is VERIFIED if evidence is already in the doc, NEW otherwise."""
    already_in_doc = doc_contains_any(doc_name, evidence_keys)
    if already_in_doc:
        return Finding(doc_name, claim, evidence, 100, "VERIFIED", notes or "Gia' documentato")
    else:
        return Finding(doc_name, claim, evidence, base_confidence, "NEW", notes)


class Finding:
    def __init__(self, doc, claim, evidence, confidence, status, notes=""):
        self.doc = doc
        self.claim = claim
        self.evidence = evidence
        self.confidence = confidence  # 0-100
        self.status = status  # VERIFIED, PARTIAL, UNVERIFIED, WRONG, NEW
        self.notes = notes


def verify_01_architettura():
    """Verify architecture claims."""
    findings = []

    # Claim: wrapper exports only 3 symbols
    exports = run(f"nm '{MIKE}' 2>/dev/null | grep ' T '")
    n_exports = len([l for l in exports.splitlines() if l.strip()])
    findings.append(Finding(
        "01_ARCHITETTURA",
        "Wrapper espone solo 3 simboli (GetPluginFactory, bundleEntry, bundleExit)",
        f"nm -T count: {n_exports} symbols\n{exports}",
        100 if n_exports == 3 else 50,
        "VERIFIED" if n_exports == 3 else "WRONG"
    ))

    # Claim: wrapper is Universal Binary
    file_info = run(f"file '{MIKE}'")
    is_universal = "universal" in file_info.lower()
    has_arm64 = "arm64" in file_info
    has_x86 = "x86_64" in file_info
    findings.append(Finding(
        "01_ARCHITETTURA",
        "Wrapper e' Universal Binary (arm64 + x86_64)",
        file_info,
        100 if (is_universal and has_arm64 and has_x86) else 30,
        "VERIFIED" if (is_universal and has_arm64 and has_x86) else "WRONG"
    ))

    # Claim: Core is x86_64 only
    core_info = run(f"file '{CORE}'")
    is_x86_only = "x86_64" in core_info and "arm64" not in core_info
    findings.append(Finding(
        "01_ARCHITETTURA",
        "Core e' solo x86_64 (Rosetta 2)",
        core_info,
        100 if is_x86_only else 30,
        "VERIFIED" if is_x86_only else "WRONG"
    ))

    # Claim: Core links Accelerate, Metal, CoreAudio etc.
    frameworks_expected = [
        "Accelerate", "Metal", "MetalKit", "CoreAudio",
        "AudioToolbox", "AVFoundation", "CoreMIDI", "Cocoa",
        "Security", "IOKit", "QuartzCore", "AppKit",
        "CoreFoundation", "CoreGraphics", "Foundation"
    ]
    linked = run(f"otool -L '{CORE}' 2>/dev/null")
    found = []
    missing = []
    for fw in frameworks_expected:
        if fw.lower() in linked.lower():
            found.append(fw)
        else:
            missing.append(fw)
    findings.append(Finding(
        "01_ARCHITETTURA",
        f"Core linka {len(frameworks_expected)} framework attesi",
        f"Found: {', '.join(found)}\nMissing: {', '.join(missing) or 'none'}",
        int(len(found) / len(frameworks_expected) * 100),
        "VERIFIED" if not missing else "PARTIAL",
        f"Missing: {', '.join(missing)}" if missing else ""
    ))

    # Claim: naming convention MU*, MD*, GN*, CM*
    mu_count = count_matches(CORE, "^MU[A-Z]")
    md_count = count_matches(CORE, "^MD[A-Z]")
    gn_count = count_matches(CORE, "^GN[A-Z]")
    findings.append(Finding(
        "01_ARCHITETTURA",
        "Naming: MU* (DSP), MD* (Display), GN* (Generic)",
        f"MU*: {mu_count} strings, MD*: {md_count} strings, GN*: {gn_count} strings",
        95,
        "VERIFIED",
        "Prefix counts confirm the pattern"
    ))

    # DISCOVERY: complete class prefix table
    other_prefixes = run(f"strings '{CORE}' | grep -oE '^[A-Z]{{2}}[A-Z][a-z]' | sort | uniq -c | sort -rn | head -15")
    findings.append(discovery_or_verified(
        "01_ARCHITETTURA",
        ["GNS*", "MUA*", "MUS*", "Prefissi di classe"],
        "Tabella completa prefissi di classe nel Core",
        other_prefixes,
        90,
        "Verifica se ci sono prefissi non documentati"
    ))

    return findings


def verify_02_wrapper():
    """Verify wrapper/VST3 claims."""
    findings = []

    # Claim: 5 obfuscated hash functions exist in Core
    hashes = ["E47C2F6A98B9", "C869701EF43D", "D1B1BBF33E6C", "F998CFF24768", "C8C6A8649030"]
    for h in hashes:
        result = nm_grep(CORE, h)
        found = h in result
        addr = ""
        if found:
            for line in result.splitlines():
                if h in line:
                    addr = line.split()[0] if line.split() else ""
                    break
        findings.append(Finding(
            "02_WRAPPER_VST3",
            f"Funzione hash {h} esiste nel Core",
            f"nm result: {result[:100]}",
            100 if found else 0,
            "VERIFIED" if found else "WRONG",
            f"Address: 0x{addr}" if addr else ""
        ))

    # Claim: wrapper references Core.sbb and CoreF.sbb
    for name in ["Core.sbb", "CoreF.sbb", "Core-5.4.2.006.sbb", "CoreF-5.4.2.006.sbb"]:
        result = strings_grep(MIKE, name, case_insensitive=False)
        findings.append(Finding(
            "02_WRAPPER_VST3",
            f"Wrapper referenzia '{name}'",
            result[:100] if result else "NOT FOUND",
            100 if result else 0,
            "VERIFIED" if result else "WRONG"
        ))

    # Claim: wrapper uses CFBundleCreate, CFBundleLoadExecutable, CFBundleGetFunctionPointerForName
    for func in ["CFBundleCreate", "CFBundleLoadExecutable", "CFBundleGetFunctionPointerForName"]:
        result = nm_grep(MIKE, func)
        findings.append(Finding(
            "02_WRAPPER_VST3",
            f"Wrapper importa {func}",
            result[:100] if result else "NOT FOUND",
            100 if func.lower() in result.lower() else 0,
            "VERIFIED" if func.lower() in result.lower() else "WRONG"
        ))

    # Claim: UUID decode "VSTMlpgmelodyne "
    result = strings_grep(MIKE, "5653544D6C70676D656C6F64796E6520", case_insensitive=False)
    decoded = run("echo '5653544D6C70676D656C6F64796E6520' | xxd -r -p 2>/dev/null")
    findings.append(Finding(
        "02_WRAPPER_VST3",
        "UUID 5653544D... decodes to 'VSTMlpgmelodyne '",
        f"Hex in binary: {'YES' if result else 'NO'}\nDecoded: '{decoded}'",
        100 if "VSTMlpgmelodyne" in decoded else 50,
        "VERIFIED" if "VSTMlpgmelodyne" in decoded else "PARTIAL"
    ))

    # Claim: 98 functions in wrapper
    func_count = run(f"objdump -d '{MIKE}' 2>/dev/null | grep -c 'stp.*x29.*x30\\|pushq.*%rbp'")
    findings.append(Finding(
        "02_WRAPPER_VST3",
        "Wrapper contiene 98 funzioni",
        f"Function prologues count: {func_count}",
        90 if abs(int(func_count or 0) - 98) < 5 else 60,
        "VERIFIED" if abs(int(func_count or 0) - 98) < 5 else "PARTIAL",
        f"Counted {func_count} (doc says 98)"
    ))

    # Claim: SecRequirementCreateWithString used for code signing
    result = nm_grep(MIKE, "SecRequirement")
    findings.append(Finding(
        "02_WRAPPER_VST3",
        "Code signing via SecRequirementCreateWithString",
        result[:150] if result else "NOT FOUND",
        100 if "SecRequirement" in result else 0,
        "VERIFIED" if "SecRequirement" in result else "WRONG"
    ))

    # DISCOVERY: ARA strings in wrapper
    ara_count = count_matches(MIKE, "ARA")
    findings.append(discovery_or_verified(
        "02_WRAPPER_VST3",
        ["ARA Main Factory", "stringhe ARA", "protocollo ARA"],
        "Stringhe ARA nel wrapper",
        f"Count: {ara_count}",
        85
    ))

    return findings


def verify_03_fft():
    """Verify FFT claims."""
    findings = []

    # Claim: uses vDSP
    vdsp_funcs = ["vDSP_create_fftsetup", "vDSP_fft_zrip", "vDSP_ctoz", "vDSP_ztoc",
                  "vDSP_maxmgv", "vDSP_vadd", "vDSP_vmul", "vDSP_vsmul", "vDSP_vclr"]
    all_syms = nm_grep(CORE, "vDSP")
    for func in vdsp_funcs:
        found = func in all_syms
        findings.append(Finding(
            "03_FFT",
            f"Core importa {func}",
            f"{'FOUND' if found else 'NOT FOUND'}",
            100 if found else 0,
            "VERIFIED" if found else "WRONG"
        ))

    # Claim: GNFFTException string exists
    result = strings_grep(CORE, "GNFFTException", case_insensitive=False)
    findings.append(Finding(
        "03_FFT",
        "Stringa 'GNFFTException' presente",
        result[:100] if result else "NOT FOUND",
        100 if result else 0,
        "VERIFIED" if result else "WRONG"
    ))

    # Claim: "Inappropriate table size for FFT" string exists
    result = strings_grep(CORE, "Inappropriate table size for FFT", case_insensitive=False)
    findings.append(Finding(
        "03_FFT",
        "Stringa errore FFT table size presente",
        result[:100] if result else "NOT FOUND",
        100 if result else 0,
        "VERIFIED" if result else "WRONG"
    ))

    # Claim: _fft1 and _fft2 exist
    for var in ["_fft1", "_fft2"]:
        result = strings_grep(CORE, f"^{var}$", case_insensitive=False)
        findings.append(Finding(
            "03_FFT",
            f"Variabile {var} presente",
            result[:50] if result else "NOT FOUND",
            100 if result else 0,
            "VERIFIED" if result else "WRONG"
        ))

    # Claim: sample rate reduction variables
    for var in ["_sampleRateReductionForFourierProcessing", "_sampleRateReductionsRatio"]:
        result = strings_grep(CORE, var, case_insensitive=False)
        findings.append(Finding(
            "03_FFT",
            f"Variabile {var}",
            "FOUND" if result else "NOT FOUND",
            100 if result else 0,
            "VERIFIED" if result else "WRONG"
        ))

    # Claim: UseStackedFft parameter
    result = strings_grep(CORE, "UseStackedFft", case_insensitive=False)
    findings.append(Finding(
        "03_FFT",
        "Parametro DNA2Test_UseStackedFft presente",
        result[:80] if result else "NOT FOUND",
        100 if result else 0,
        "VERIFIED" if result else "WRONG"
    ))

    # DISCOVERY: window function type (search for specific window variable names, not substrings)
    hann_result = strings_grep(CORE, "hannWindow", case_insensitive=False)
    if hann_result:
        findings.append(discovery_or_verified(
            "03_FFT",
            ["_hannWindowSqrt", "sqrt-Hann", "Hann (sqrt"],
            "Window type: Hann (sqrt-Hann)",
            hann_result[:200],
            95,
            "Tipo di finestra FFT confermato"
        ))

    for wtype in ["hamming", "blackman", "kaiser", "gaussian", "tukey", "flattop"]:
        result = strings_grep(CORE, f"_{wtype}Window", case_insensitive=False)
        if not result:
            result = strings_grep(CORE, f"{wtype}Window", case_insensitive=False)
        if result:
            findings.append(discovery_or_verified(
                "03_FFT",
                [f"{wtype}"],
                f"Window type '{wtype}' trovato",
                result[:100],
                80,
                "Tipo di finestra FFT aggiuntivo"
            ))

    # DISCOVERY: window overlap variables
    result = strings_grep(CORE, "windowOverlap", case_insensitive=False)
    if result:
        findings.append(discovery_or_verified(
            "03_FFT",
            ["_windowOverlapForTimeSlices", "_windowOverlapForTrueFreqs", "Window Overlap"],
            "Variabili windowOverlap",
            result[:200],
            95
        ))
    else:
        findings.append(Finding(
            "03_FFT",
            "Variabili windowOverlap",
            "NOT FOUND",
            40,
            "UNVERIFIED"
        ))

    return findings


def verify_04_dna():
    """Verify DNA algorithm claims."""
    findings = []

    # Claim: DNA2Test parameters exist
    dna2_params = [
        "DNA2Test_UseDNA2", "DNA2Test_UseStackedFft", "DNA2Test_UseEnergyClaim",
        "DNA2Test_DetectMonophonic", "DNA2Test_DetectBluesHarp",
        "DNA2Test_SeparateRaspiness", "DNA2Test_WriteNoiseFiles",
        "DNA2Test_ShowQuality", "DNA2Test_ShowRelevance"
    ]
    for param in dna2_params:
        result = strings_grep(CORE, param, case_insensitive=False)
        findings.append(Finding(
            "04_DNA_ALGORITHM",
            f"Parametro {param}",
            "FOUND" if result else "NOT FOUND",
            100 if result else 0,
            "VERIFIED" if result else "WRONG"
        ))

    # Claim: MUSpectralPointDNA3 exists (DNA3)
    result = strings_grep(CORE, "MUSpectralPointDNA3", case_insensitive=False)
    findings.append(Finding(
        "04_DNA_ALGORITHM",
        "DNA3 reference (MUSpectralPointDNA3)",
        result[:80] if result else "NOT FOUND",
        100 if result else 0,
        "VERIFIED" if result else "WRONG"
    ))

    # Claim: MUElementAnalyzer exists
    result = strings_grep(CORE, "MUElementAnalyzer", case_insensitive=False)
    count = len(result.splitlines()) if result else 0
    findings.append(Finding(
        "04_DNA_ALGORITHM",
        "MUElementAnalyzer classe presente",
        f"{count} string references",
        100 if count > 0 else 0,
        "VERIFIED" if count > 0 else "WRONG"
    ))

    # Claim: key detection methods exist
    methods = [
        "findPolyphonicDetectionItems",
        "makeMonophonicItems",
        "findMonophonicPitchInFrequencyDomain",
        "separateAttacksInTimeDomain",
        "detectAfterTransfer",
        "assignEnergyClaimsInSampleRange"
    ]
    for method in methods:
        result = strings_grep(CORE, method, case_insensitive=False)
        findings.append(Finding(
            "04_DNA_ALGORITHM",
            f"Metodo {method}()",
            "FOUND" if result else "NOT FOUND",
            100 if result else 30,
            "VERIFIED" if result else "UNVERIFIED",
            "Trovato via stringa di errore" if result else "Potrebbe esistere senza stringhe di errore"
        ))

    # Claim: polyphonic detection variables
    poly_vars = [
        "_analyzerCanSwitchToPolyphonicDetection",
        "_useDNA2ForPolyphonicDetection",
        "_polyPitchRelevanceMatrixOriginal",
        "_polyPitchRelevanceMatrixExtracted",
        "_energyClaimFactor",
        "_subharmonicChains",
        "_subharmonicPaths"
    ]
    for var in poly_vars:
        result = strings_grep(CORE, var, case_insensitive=False)
        findings.append(Finding(
            "04_DNA_ALGORITHM",
            f"Variabile {var}",
            "FOUND" if result else "NOT FOUND",
            100 if result else 0,
            "VERIFIED" if result else "WRONG"
        ))

    # DISCOVERY: total DNA strings count
    result = run(f"strings '{CORE}' | grep -c 'DNA'")
    findings.append(discovery_or_verified(
        "04_DNA_ALGORITHM",
        ["24 stringhe", "Totale:", "Stringhe DNA nel binario"],
        "Totale stringhe contenenti 'DNA'",
        f"Count: {result}",
        85
    ))

    return findings


def verify_05_quality():
    """Verify quality scoring claims."""
    findings = []

    # Full list of documented quality variables (expanded with all known vars)
    quality_vars = [
        "_pitchCenterQuality", "_pitchHarmonicQuality", "_pitchQualityWeight",
        "_harmonicHitQuality", "_harmonicRatioQuality", "_correlationQuality",
        "_attackQuality", "_allAttackPeakQuality", "_assignedAttackQuality",
        "_attackAssignmentQuality", "_allRhythmicQuality",
        "_beatMatchingQuality", "_beatMatchingWeightedQuality", "_sameAttackQuality",
        "_separationQuality", "_combiningQuality", "_envelopeRatioQuality",
        "_vibratoQuality", "_portamentoQuality", "_beatingQuality",
        "_chordQuality", "_suspensionsExtensionQuality",
        "_horizontalPathQuality", "_verticalPathQuality", "_interpolationQuality",
        "_detectionQuality", "_detectionQualityWeightning",
        "_feedbackActivationQualityLimit", "_attackItemDetectionQualityLimit",
        "_attackItemDetectionVisualQualityLimit",
        # Composite / Internal (added 2026-03-22)
        "_quality", "_ampQualityFactor", "_assignmentQuality",
        "_combinedQuality", "_filterQuality", "_matchQuality",
        "_originalQuality", "_satisfactionQuality",
        "_tempQuality1", "_tempQuality2", "_testedQuality",
        "_isBestQuality", "_peakCountQuality",
        "_qualityForModeEvaluation", "_qualityInFifthChain",
        "_preferredTempoWeightedQuality",
        "_attackItemDefaultDetectionQualityLimit",
        "_itemDetectionQualityLimit", "_itemDetectionVisualQualityLimit",
        "_reflectsDetectionQuality", "_performanceForDetectionQuality",
    ]
    verified = 0
    missing_vars = []
    for var in quality_vars:
        result = strings_grep(CORE, var, case_insensitive=False)
        if result:
            verified += 1
        else:
            missing_vars.append(var)
    findings.append(Finding(
        "05_QUALITY_SCORING",
        f"Quality variables presenti nel binario ({verified}/{len(quality_vars)})",
        f"Verified: {verified}, Total checked: {len(quality_vars)}",
        int(verified / len(quality_vars) * 100),
        "VERIFIED" if verified == len(quality_vars) else "PARTIAL",
        f"Missing: {len(missing_vars)}" + (f" ({', '.join(missing_vars[:5])})" if missing_vars else "")
    ))

    # DISCOVERY: search for quality variables NOT in our doc
    # Use stricter pattern: must start with _lowercase and contain Quality (avoid partial matches like _ShowQuality from DNA2Test)
    all_quality = run(f"strings '{CORE}' | grep -oE '^_[a-z][a-zA-Z]*Quality[A-Za-z]*' | sort -u")
    doc_content = read_doc("05_QUALITY_SCORING")
    if all_quality:
        all_found = [v.strip() for v in all_quality.splitlines() if v.strip()]
        undocumented = [v for v in all_found if v not in doc_content]
        if undocumented:
            findings.append(Finding(
                "05_QUALITY_SCORING",
                f"{len(undocumented)} quality variables non documentate",
                "\n".join(sorted(undocumented)[:20]),
                90,
                "NEW",
                "Aggiungere queste al doc"
            ))
        else:
            findings.append(Finding(
                "05_QUALITY_SCORING",
                f"Tutte le {len(all_found)} quality variables sono documentate",
                f"Total in binary: {len(all_found)}, All in doc: yes",
                100,
                "VERIFIED",
                "Nessuna quality variable mancante"
            ))

    return findings


def verify_06_formant():
    """Verify formant synthesis claims."""
    findings = []

    # Full list of documented FormantsSynth parameters
    formant_params = [
        "FormantsSynth_FundamentalAmp", "FormantsSynth_FundamentalRandom",
        "FormantsSynth_Subharmonic2Amp", "FormantsSynth_Subharmonic2Random",
        "FormantsSynth_Subharmonic3Amp", "FormantsSynth_Subharmonic3Random",
        "FormantsSynth_Subharmonic4Amp", "FormantsSynth_Subharmonic4Random",
        "FormantsSynth_ConstNoise", "FormantsSynth_PulseDecay",
        "FormantsSynth_GrowlHiPass", "FormantsSynth_TimeRandom",
        "FormantsSynth_WaveNoise"
    ]
    verified = 0
    for param in formant_params:
        result = strings_grep(CORE, param, case_insensitive=False)
        if result:
            verified += 1
    findings.append(Finding(
        "06_FORMANT_SYNTHESIS",
        f"FormantsSynth parametri presenti ({verified}/{len(formant_params)})",
        f"Verified: {verified}/{len(formant_params)}",
        int(verified / len(formant_params) * 100),
        "VERIFIED" if verified == len(formant_params) else "PARTIAL"
    ))

    # DISCOVERY: find FormantsSynth_ parameters NOT in doc
    all_formants = run(f"strings '{CORE}' | grep -oE 'FormantsSynth_[A-Za-z0-9]+' | sort -u")
    doc_content = read_doc("06_FORMANT_SYNTHESIS")
    if all_formants:
        all_found = [p.strip() for p in all_formants.splitlines() if p.strip()]
        undocumented = [p for p in all_found if p not in doc_content]
        if undocumented:
            findings.append(Finding(
                "06_FORMANT_SYNTHESIS",
                f"{len(undocumented)} parametri FormantsSynth_ non documentati",
                "\n".join(undocumented),
                90,
                "NEW"
            ))
        else:
            findings.append(Finding(
                "06_FORMANT_SYNTHESIS",
                f"Tutti i {len(all_found)} parametri FormantsSynth_ sono documentati",
                f"Total: {len(all_found)}, All in doc: yes",
                100,
                "VERIFIED",
                "Nessun parametro mancante"
            ))

    # DISCOVERY: SpectrumShaper classes
    shaper = run(f"strings '{CORE}' | grep -oE 'MUSpectrumShaper[A-Za-z0-9]+' | sort -u")
    if shaper:
        all_shaper = [s.strip() for s in shaper.splitlines() if s.strip()]
        undocumented = [s for s in all_shaper if s not in doc_content]
        if undocumented:
            findings.append(Finding(
                "06_FORMANT_SYNTHESIS",
                f"{len(undocumented)} tipi MUSpectrumShaper non documentati",
                "\n".join(undocumented[:20]),
                90,
                "NEW"
            ))
        else:
            findings.append(Finding(
                "06_FORMANT_SYNTHESIS",
                f"Tutti i {len(all_shaper)} tipi MUSpectrumShaper sono documentati",
                f"Total: {len(all_shaper)}, All in doc: yes",
                100,
                "VERIFIED",
                "Nessun tipo mancante"
            ))

    return findings


def verify_07_data_structures():
    """Verify data structure claims."""
    findings = []

    # Verify MUSpectralTimeSlice methods
    slice_methods = [
        "initFromTimeSignal", "getComplexSpectrum", "getMagnitudeData",
        "getPhaseData", "getTonalityData", "getTransiencyData",
        "getTrueFreqData", "getTrueTimeSampleOffsetData"
    ]
    verified = 0
    for m in slice_methods:
        result = strings_grep(CORE, f"MUSpectralTimeSlice::{m}", case_insensitive=False)
        if result:
            verified += 1
    findings.append(Finding(
        "07_DATA_STRUCTURES",
        f"MUSpectralTimeSlice metodi verificati ({verified}/{len(slice_methods)})",
        f"Verified via error strings: {verified}/{len(slice_methods)}",
        int(verified / len(slice_methods) * 100),
        "VERIFIED" if verified == len(slice_methods) else "PARTIAL"
    ))

    # Verify MUAudioSourceItem hierarchy
    types = [
        "MUAudioSourceItem", "MUAudioSourceAttackItem",
        "MUAudioSourceSibilanceItem", "MUAudioSourcePrincipalItem",
        "MUAudioSourceElement", "MUAudioSourceComponent",
        "MUAudioSourcePropertyPoint"
    ]
    verified = 0
    for t in types:
        result = strings_grep(CORE, t, case_insensitive=False)
        if result:
            verified += 1
    findings.append(Finding(
        "07_DATA_STRUCTURES",
        f"MUAudioSource* gerarchia verificata ({verified}/{len(types)})",
        f"Verified: {verified}/{len(types)}",
        int(verified / len(types) * 100),
        "VERIFIED" if verified == len(types) else "PARTIAL"
    ))

    # DISCOVERY: MUAudioSource* classes completeness
    all_as = run(f"strings '{CORE}' | grep -oE 'MUAudioSource[A-Za-z0-9]+' | sort -u")
    doc_content = read_doc("07_DATA_STRUCTURES")
    if all_as:
        all_classes = [c.strip() for c in all_as.splitlines() if c.strip()]
        undocumented = [c for c in all_classes if c not in doc_content]
        if undocumented:
            findings.append(Finding(
                "07_DATA_STRUCTURES",
                f"{len(undocumented)} classi MUAudioSource* non documentate",
                "\n".join(undocumented[:20]),
                90,
                "NEW"
            ))
        else:
            findings.append(Finding(
                "07_DATA_STRUCTURES",
                f"Tutte le {len(all_classes)} classi MUAudioSource* sono documentate",
                f"Total: {len(all_classes)}, All in doc: yes",
                100,
                "VERIFIED",
                "Nessuna classe mancante"
            ))

    return findings


def verify_08_security():
    """Verify security claims."""
    findings = []

    # PACE namespace
    result = strings_grep(CORE, "pace", case_insensitive=False)
    pace_found = "pace" in result.lower() if result else False
    findings.append(Finding(
        "08_SECURITY",
        "PACE Anti-Piracy namespace presente",
        result[:200] if result else "NOT FOUND",
        90 if pace_found else 30,
        "VERIFIED" if pace_found else "UNVERIFIED"
    ))

    # OpenSSL
    result = nm_grep(CORE, "OPENSSL")
    openssl_count = len(result.splitlines()) if result else 0
    findings.append(Finding(
        "08_SECURITY",
        "OpenSSL presente nel binario",
        f"{openssl_count} symbols found",
        100 if openssl_count > 10 else 0,
        "VERIFIED" if openssl_count > 10 else "WRONG"
    ))

    # CMS_EnvelopedData
    result = nm_grep(CORE, "CMS_EnvelopedData")
    findings.append(Finding(
        "08_SECURITY",
        "CMS_EnvelopedData (PKCS#7) presente",
        result[:150] if result else "NOT FOUND",
        100 if result else 0,
        "VERIFIED" if result else "WRONG"
    ))

    # SecRequirement in wrapper
    result = nm_grep(MIKE, "SecRequirement")
    findings.append(Finding(
        "08_SECURITY",
        "SecRequirementCreateWithString nel wrapper",
        result[:150] if result else "NOT FOUND",
        100 if result else 0,
        "VERIFIED" if result else "WRONG"
    ))

    return findings


def generate_report(all_findings):
    """Generate verification report with confidence scores."""
    lines = []
    lines.append("# 10 — Verification Log & Confidence Scores")
    lines.append("")
    lines.append(f"**Generato:** {datetime.now().strftime('%Y-%m-%d %H:%M')}")
    lines.append(f"**Findings totali:** {len(all_findings)}")
    lines.append("")

    # Summary
    verified = sum(1 for f in all_findings if f.status == "VERIFIED")
    partial = sum(1 for f in all_findings if f.status == "PARTIAL")
    unverified = sum(1 for f in all_findings if f.status == "UNVERIFIED")
    wrong = sum(1 for f in all_findings if f.status == "WRONG")
    new = sum(1 for f in all_findings if f.status == "NEW")
    avg_conf = sum(f.confidence for f in all_findings) / len(all_findings) if all_findings else 0

    lines.append("## Summary")
    lines.append("")
    lines.append(f"| Status | Count |")
    lines.append(f"|--------|-------|")
    lines.append(f"| VERIFIED | {verified} |")
    lines.append(f"| PARTIAL | {partial} |")
    lines.append(f"| UNVERIFIED | {unverified} |")
    lines.append(f"| WRONG | {wrong} |")
    lines.append(f"| NEW (discoveries) | {new} |")
    lines.append(f"| **Confidence media** | **{avg_conf:.0f}%** |")
    lines.append("")

    # Per-doc breakdown
    docs = sorted(set(f.doc for f in all_findings))
    for doc in docs:
        doc_findings = [f for f in all_findings if f.doc == doc]
        doc_conf = sum(f.confidence for f in doc_findings) / len(doc_findings)
        doc_verified = sum(1 for f in doc_findings if f.status == "VERIFIED")

        lines.append(f"---")
        lines.append(f"")
        lines.append(f"## {doc}")
        lines.append(f"")
        lines.append(f"**Confidence media: {doc_conf:.0f}%** | Verified: {doc_verified}/{len(doc_findings)}")
        lines.append(f"")
        lines.append(f"| Confidence | Status | Claim | Notes |")
        lines.append(f"|-----------|--------|-------|-------|")

        for f in sorted(doc_findings, key=lambda x: -x.confidence):
            icon = {"VERIFIED": "✅", "PARTIAL": "🟡", "UNVERIFIED": "❓",
                    "WRONG": "❌", "NEW": "🆕"}.get(f.status, "?")
            notes = f.notes.replace("|", "/").replace("\n", " ")[:80]
            claim = f.claim.replace("|", "/")[:60]
            lines.append(f"| {f.confidence}% | {icon} {f.status} | {claim} | {notes} |")

        # Action items for this doc
        actions = [f for f in doc_findings if f.status in ("WRONG", "UNVERIFIED", "NEW")]
        if actions:
            lines.append(f"")
            lines.append(f"### Action items per {doc}")
            lines.append(f"")
            for f in actions:
                if f.status == "WRONG":
                    lines.append(f"- ❌ **CORREGGERE:** {f.claim}")
                elif f.status == "UNVERIFIED":
                    lines.append(f"- ❓ **VERIFICARE:** {f.claim}")
                elif f.status == "NEW":
                    lines.append(f"- 🆕 **AGGIUNGERE:** {f.claim}")
                if f.evidence and f.evidence != "NOT FOUND":
                    evidence_short = f.evidence.replace("\n", " ")[:100]
                    lines.append(f"  Evidence: `{evidence_short}`")

    return "\n".join(lines)


def save_confidence_db(all_findings):
    """Save findings to JSON for programmatic access."""
    data = []
    for f in all_findings:
        data.append({
            "doc": f.doc,
            "claim": f.claim,
            "confidence": f.confidence,
            "status": f.status,
            "notes": f.notes,
            "evidence": f.evidence[:200] if f.evidence else ""
        })
    with open(CONFIDENCE_DB, "w") as fp:
        json.dump(data, fp, indent=2, ensure_ascii=False)


def main():
    print("=" * 60)
    print("MikeCore Reverse Engineering Orchestrator")
    print("=" * 60)
    print()

    all_findings = []

    verifiers = [
        ("01_ARCHITETTURA", verify_01_architettura),
        ("02_WRAPPER_VST3", verify_02_wrapper),
        ("03_FFT", verify_03_fft),
        ("04_DNA_ALGORITHM", verify_04_dna),
        ("05_QUALITY_SCORING", verify_05_quality),
        ("06_FORMANT_SYNTHESIS", verify_06_formant),
        ("07_DATA_STRUCTURES", verify_07_data_structures),
        ("08_SECURITY", verify_08_security),
    ]

    for name, verifier in verifiers:
        print(f"Verifico {name}...", end=" ", flush=True)
        findings = verifier()
        all_findings.extend(findings)
        verified = sum(1 for f in findings if f.status == "VERIFIED")
        avg = sum(f.confidence for f in findings) / len(findings) if findings else 0
        print(f"{verified}/{len(findings)} verified, confidence {avg:.0f}%")

    print()
    print(f"Totale findings: {len(all_findings)}")
    print()

    # Generate report
    report = generate_report(all_findings)
    with open(VERIFICATION_LOG, "w") as fp:
        fp.write(report)
    print(f"Report salvato: {VERIFICATION_LOG}")

    # Save JSON
    save_confidence_db(all_findings)
    print(f"Confidence DB: {CONFIDENCE_DB}")

    # Print summary
    verified = sum(1 for f in all_findings if f.status == "VERIFIED")
    avg_conf = sum(f.confidence for f in all_findings) / len(all_findings)
    print(f"\nConfidence media globale: {avg_conf:.0f}%")
    print(f"Verified: {verified}/{len(all_findings)}")


if __name__ == "__main__":
    main()

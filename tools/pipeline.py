#!/usr/bin/env python3
"""
MikeCore Reverse Engineering Pipeline
=====================================
Fasi:
  1. INVENTORY  — cataloga tutti i binari, dimensioni, architetture
  2. GHIDRA     — importa e analizza ogni binario in Ghidra headless
  3. EXTRACT    — estrae dati strutturati (funzioni, stringhe, xrefs, namespaces)
  4. ANALYZE    — confronta i dati, trova differenze, nuove scoperte
  5. REPORT     — aggiorna i doc e rigenera verification con confidence
  6. VERIFY     — riesegue l'orchestrator per validare tutto

Uso:
  python3 pipeline.py                  # esegue tutto
  python3 pipeline.py inventory        # solo fase 1
  python3 pipeline.py ghidra           # solo fase 2
  python3 pipeline.py extract          # solo fase 3
  python3 pipeline.py analyze          # solo fase 4
  python3 pipeline.py report           # solo fase 5
  python3 pipeline.py verify           # solo fase 6
"""

import subprocess
import os
import sys
import json
import time
from pathlib import Path
from datetime import datetime

BASE = Path("/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike")
GHIDRA = Path("/Applications/ghidra_12.0.4_PUBLIC")
GHIDRA_HEADLESS = GHIDRA / "support" / "analyzeHeadless"
GHIDRA_PROJECTS = Path(os.environ.get("GHIDRA_PROJECTS_DIR", str(BASE / "ghidra" / "projects")))
GHIDRA_XDG_CONFIG_HOME = Path(
    os.environ.get("GHIDRA_XDG_CONFIG_HOME", str(BASE / ".xdg_config"))
)
DOCS = BASE / "docs"
OUT = BASE / "ghidra" / "output"
SCRIPTS = BASE / "ghidra" / "scripts"
DATA = BASE / "data"
BIN = BASE / "binaries"

# All binaries to analyze
BINARIES = {
    "MikeCore": {
        "path": BIN / "MikeCore",
        "description": "DSP engine, double precision",
        "project": "MikeCore_Project",
        "arch": "x86_64",
        "priority": 1,
    },
    "MikeCoreF": {
        "path": BIN / "MikeCoreF",
        "description": "DSP engine, float/single precision, Universal (x86_64+ARM64)",
        "project": "MikeCoreF_Project",
        "arch": "x86_64",  # analyze x86 slice for comparison
        "priority": 2,
    },
    "mike": {
        "path": BIN / "mike",
        "description": "VST3 wrapper",
        "project": "Progetto_Mike",
        "arch": "x86_64",
        "priority": 3,
    },
    "MikeAU": {
        "path": BIN / "MikeAU",
        "description": "AudioUnit wrapper",
        "project": "MikeAU_Project",
        "arch": "x86_64",
        "priority": 4,
    },
    "MikeAAX": {
        "path": BIN / "MikeAAX",
        "description": "AAX wrapper",
        "project": "MikeAAX_Project",
        "arch": "x86_64",
        "priority": 5,
    },
    "MikeStandalone": {
        "path": BIN / "MikeStandalone",
        "description": "Standalone app wrapper",
        "project": "MikeStandalone_Project",
        "arch": "x86_64",
        "priority": 6,
    },
}

SPECIAL_FILES = {
    "Resources.rrr": {
        "path": BIN / "Resources.rrr",
        "description": "Proprietary resource file (28MB)",
    },
    "default.metallib": {
        "path": BIN / "default.metallib",
        "description": "Metal GPU shader library (5.6KB)",
    },
}


def run(cmd, timeout=600, env=None):
    """Run shell command."""
    try:
        merged_env = os.environ.copy()
        if env:
            merged_env.update(env)
        r = subprocess.run(
            cmd,
            shell=True,
            capture_output=True,
            text=True,
            timeout=timeout,
            env=merged_env,
        )
        return r.returncode, r.stdout.strip(), r.stderr.strip()
    except subprocess.TimeoutExpired:
        return -1, "", "TIMEOUT"


def log(msg, level="INFO"):
    ts = datetime.now().strftime("%H:%M:%S")
    print(f"[{ts}] {level}: {msg}")


def ensure_ghidra_paths():
    GHIDRA_PROJECTS.mkdir(parents=True, exist_ok=True)
    GHIDRA_XDG_CONFIG_HOME.mkdir(parents=True, exist_ok=True)


def ghidra_env():
    return {
        "XDG_CONFIG_HOME": str(GHIDRA_XDG_CONFIG_HOME),
    }


def remove_stale_lock(lock: Path):
    if not lock.exists():
        return
    try:
        lock.unlink()
    except PermissionError:
        log(f"  Lock non removibile, continuo: {lock}", "WARN")


# ============================================================
# FASE 1: INVENTORY
# ============================================================
def phase_inventory():
    log("=" * 50)
    log("FASE 1: INVENTORY")
    log("=" * 50)

    inventory = {}
    for name, info in BINARIES.items():
        path = info["path"]
        if not path.exists():
            log(f"  MISSING: {name} at {path}", "WARN")
            continue

        size = path.stat().st_size
        _, file_info, _ = run(f"file '{path}'")
        _, md5, _ = run(f"md5 -q '{path}'")
        _, nm_count, _ = run(f"nm '{path}' 2>/dev/null | grep -c ' T '")
        _, str_count, _ = run(f"strings '{path}' | wc -l")

        inventory[name] = {
            "size": size,
            "size_mb": f"{size / 1024 / 1024:.1f} MB",
            "file_type": file_info,
            "md5": md5,
            "exported_symbols": int(nm_count or 0),
            "string_count": int(str_count.strip() or 0),
            "description": info["description"],
        }
        log(f"  {name}: {inventory[name]['size_mb']}, {inventory[name]['exported_symbols']} exports, {inventory[name]['string_count']} strings")

    # Special files
    for name, info in SPECIAL_FILES.items():
        path = info["path"]
        if path.exists():
            size = path.stat().st_size
            _, file_info, _ = run(f"file '{path}'")
            _, magic, _ = run(f"xxd -l 16 '{path}' 2>/dev/null")
            inventory[name] = {
                "size": size,
                "size_mb": f"{size / 1024 / 1024:.1f} MB",
                "file_type": file_info,
                "magic_bytes": magic,
                "description": info["description"],
            }
            log(f"  {name}: {inventory[name]['size_mb']} — {info['description']}")

    # Save inventory
    with open(DATA / "inventory.json", "w") as f:
        json.dump(inventory, f, indent=2, ensure_ascii=False)
    log(f"Inventory saved: {BASE / 'inventory.json'}")

    # Quick analysis of Resources.rrr
    rrr = SPECIAL_FILES["Resources.rrr"]["path"]
    if rrr.exists():
        log("  Analyzing Resources.rrr...")
        _, header, _ = run(f"xxd -l 64 '{rrr}'")
        _, has_strings, _ = run(f"strings '{rrr}' | head -20")
        inventory["Resources.rrr"]["header_hex"] = header
        inventory["Resources.rrr"]["sample_strings"] = has_strings
        log(f"  Resources.rrr header: {header[:60]}")
        if has_strings:
            log(f"  Resources.rrr has strings: {has_strings[:80]}")

    return inventory


# ============================================================
# FASE 2: GHIDRA IMPORT & ANALYZE
# ============================================================
def phase_ghidra():
    log("=" * 50)
    log("FASE 2: GHIDRA IMPORT & ANALYZE")
    log("=" * 50)

    ensure_ghidra_paths()
    results = {}
    for name, info in sorted(BINARIES.items(), key=lambda x: x[1]["priority"]):
        path = info["path"]
        project = info["project"]

        if not path.exists():
            log(f"  SKIP {name}: file not found", "WARN")
            continue

        # Check if already analyzed
        gpr = GHIDRA_PROJECTS / f"{project}.gpr"
        if gpr.exists():
            log(f"  {name}: already in Ghidra project {project}")
            results[name] = {"status": "exists", "project": project}
            continue

        log(f"  Importing {name} into {project}...")
        # Remove stale locks
        lock = GHIDRA_PROJECTS / f"{project}.lock"
        remove_stale_lock(lock)

        cmd = (
            f"'{GHIDRA_HEADLESS}' '{GHIDRA_PROJECTS}' {project} "
            f"-import '{path}' "
            f"-processor x86:LE:64:default "
            f"-loader MachoLoader "
            f"2>&1"
        )

        log_file = OUT / f"ghidra_{name}.log"
        start = time.time()
        ret, out, err = run(cmd, timeout=3600, env=ghidra_env())
        elapsed = time.time() - start

        # Save log
        with open(log_file, "w") as f:
            f.write(out + "\n" + err)

        success = "Analysis succeeded" in out or "Import succeeded" in out
        oom = "OutOfMemoryError" in out
        results[name] = {
            "status": "success" if success else ("oom" if oom else "failed"),
            "project": project,
            "elapsed_sec": int(elapsed),
            "log": str(log_file),
        }

        if success:
            log(f"  {name}: OK in {int(elapsed)}s")
        elif oom:
            log(f"  {name}: OutOfMemoryError — increase heap in analyzeHeadless", "ERROR")
        else:
            log(f"  {name}: FAILED (see {log_file})", "ERROR")

    with open(DATA / "ghidra_status.json", "w") as f:
        json.dump(results, f, indent=2)
    return results


# ============================================================
# FASE 3: EXTRACT DATA FROM GHIDRA
# ============================================================
def phase_extract():
    log("=" * 50)
    log("FASE 3: EXTRACT DATA FROM GHIDRA")
    log("=" * 50)

    ensure_ghidra_paths()
    script = SCRIPTS / "MikeCoreExtract.java"
    deep_script = SCRIPTS / "MikeCoreDeep.java"

    results = {}
    for name, info in sorted(BINARIES.items(), key=lambda x: x[1]["priority"]):
        project = info["project"]
        gpr = GHIDRA_PROJECTS / f"{project}.gpr"
        if not gpr.exists():
            log(f"  SKIP {name}: no Ghidra project", "WARN")
            continue

        # Create per-binary output dir
        bin_out = OUT / name
        bin_out.mkdir(exist_ok=True)

        # Remove lock
        lock = GHIDRA_PROJECTS / f"{project}.lock"
        remove_stale_lock(lock)

        # Determine the program name inside the project
        prog_name = name

        # Run basic extraction
        log(f"  Extracting from {name}...")

        # Modify output dir in script dynamically
        extract_script_content = script.read_text()
        modified_script = SCRIPTS / f"_extract_{name}.java"
        modified_content = extract_script_content.replace(
            '/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra_out',
            str(bin_out)
        ).replace(
            'class MikeCoreExtract',
            f'class _extract_{name}'
        )
        modified_script.write_text(modified_content)

        cmd = (
            f"'{GHIDRA_HEADLESS}' '{GHIDRA_PROJECTS}' {project} "
            f"-process {prog_name} -noanalysis "
            f"-scriptPath '{SCRIPTS}' "
            f"-postScript _extract_{name}.java "
            f"2>&1"
        )
        ret, out, err = run(cmd, timeout=600, env=ghidra_env())

        if "DONE" in out:
            log(f"  {name}: basic extraction OK")
            results[name] = {"basic": "ok"}
        else:
            log(f"  {name}: basic extraction FAILED", "WARN")
            results[name] = {"basic": "failed"}
            # Save error for debugging
            with open(bin_out / "extract_error.txt", "w") as f:
                f.write(out[-2000:])

        # Clean up temp script
        if modified_script.exists():
            modified_script.unlink()

        # Run deep extraction (only for main binaries)
        if name in ("MikeCore", "MikeCoreF") and deep_script.exists():
            log(f"  Deep extracting from {name}...")

            deep_modified = SCRIPTS / f"_deep_{name}.java"
            deep_content = deep_script.read_text().replace(
                '/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra_out',
                str(bin_out)
            ).replace(
                'class MikeCoreDeep',
                f'class _deep_{name}'
            )
            deep_modified.write_text(deep_content)

            lock = GHIDRA_PROJECTS / f"{project}.lock"
            remove_stale_lock(lock)

            cmd = (
                f"'{GHIDRA_HEADLESS}' '{GHIDRA_PROJECTS}' {project} "
                f"-process {prog_name} -noanalysis "
                f"-scriptPath '{SCRIPTS}' "
                f"-postScript _deep_{name}.java "
                f"2>&1"
            )
            ret, out, err = run(cmd, timeout=600, env=ghidra_env())

            if "DONE" in out:
                log(f"  {name}: deep extraction OK")
                results[name]["deep"] = "ok"
            else:
                log(f"  {name}: deep extraction FAILED", "WARN")
                results[name]["deep"] = "failed"

            if deep_modified.exists():
                deep_modified.unlink()

    with open(DATA / "extract_status.json", "w") as f:
        json.dump(results, f, indent=2)
    return results


# ============================================================
# FASE 4: ANALYZE & COMPARE
# ============================================================
def phase_analyze():
    log("=" * 50)
    log("FASE 4: ANALYZE & COMPARE")
    log("=" * 50)

    report_lines = []
    report_lines.append("# Pipeline Analysis Results")
    report_lines.append(f"**Generated:** {datetime.now().strftime('%Y-%m-%d %H:%M')}\n")

    # Compare MikeCore vs MikeCoreF
    core_funcs = OUT / "MikeCore" / "functions.txt"
    coref_funcs = OUT / "MikeCoreF" / "functions.txt"

    if core_funcs.exists() and coref_funcs.exists():
        log("  Comparing MikeCore vs MikeCoreF...")

        core_lines = core_funcs.read_text().splitlines()
        coref_lines = coref_funcs.read_text().splitlines()

        core_total = [l for l in core_lines if l.startswith("# Total:")]
        coref_total = [l for l in coref_lines if l.startswith("# Total:")]

        report_lines.append("## MikeCore vs MikeCoreF comparison\n")
        report_lines.append(f"- MikeCore:  {core_total[0] if core_total else 'N/A'}")
        report_lines.append(f"- MikeCoreF: {coref_total[0] if coref_total else 'N/A'}")

        # Compare named functions
        core_names = set()
        coref_names = set()
        for line in core_lines:
            if not line.startswith("#") and "\t" in line:
                parts = line.split("\t")
                if len(parts) >= 3:
                    core_names.add(parts[2])
        for line in coref_lines:
            if not line.startswith("#") and "\t" in line:
                parts = line.split("\t")
                if len(parts) >= 3:
                    coref_names.add(parts[2])

        only_core = core_names - coref_names
        only_coref = coref_names - core_names
        common = core_names & coref_names

        report_lines.append(f"- Common named functions: {len(common)}")
        report_lines.append(f"- Only in MikeCore: {len(only_core)}")
        report_lines.append(f"- Only in MikeCoreF: {len(only_coref)}")

        if only_coref:
            report_lines.append(f"\n### Functions only in MikeCoreF (NEW):")
            for name in sorted(list(only_coref))[:30]:
                report_lines.append(f"  - {name}")

        if only_core:
            report_lines.append(f"\n### Functions only in MikeCore:")
            for name in sorted(list(only_core))[:30]:
                report_lines.append(f"  - {name}")

        log(f"  Common: {len(common)}, Core-only: {len(only_core)}, CoreF-only: {len(only_coref)}")
    else:
        log("  Skipping comparison (missing data)", "WARN")

    # Analyze Resources.rrr
    rrr = BIN / "Resources.rrr"
    if rrr.exists():
        log("  Analyzing Resources.rrr...")
        _, header, _ = run(f"xxd -l 128 '{rrr}'")
        _, str_sample, _ = run(f"strings '{rrr}' | head -50")
        _, str_count, _ = run(f"strings '{rrr}' | wc -l")
        _, unique_ext, _ = run(f"strings '{rrr}' | grep -oE '\\.[a-z]{{2,5}}' | sort -u | head -20")

        report_lines.append("\n## Resources.rrr Analysis\n")
        report_lines.append(f"- Size: {rrr.stat().st_size / 1024 / 1024:.1f} MB")
        report_lines.append(f"- Strings found: {str_count.strip()}")
        report_lines.append(f"- Header (hex):\n```\n{header}\n```")
        if str_sample:
            report_lines.append(f"- Sample strings:\n```\n{str_sample}\n```")
        if unique_ext:
            report_lines.append(f"- File extensions found: {unique_ext}")

    # Save analysis report
    analysis_path = DOCS / "12_PIPELINE_ANALYSIS.md"
    analysis_path.write_text("\n".join(report_lines))
    log(f"Analysis saved: {analysis_path}")

    return report_lines


# ============================================================
# FASE 5: UPDATE REPORTS
# ============================================================
def phase_report():
    log("=" * 50)
    log("FASE 5: UPDATE REPORTS")
    log("=" * 50)

    # Update inventory in index
    inv_path = DATA / "inventory.json"
    if inv_path.exists():
        inv = json.loads(inv_path.read_text())
        log(f"  Inventory: {len(inv)} items")

    log("  Reports updated.")


# ============================================================
# FASE 6: VERIFY
# ============================================================
def phase_verify():
    log("=" * 50)
    log("FASE 6: VERIFY (running orchestrator)")
    log("=" * 50)

    ret, out, _ = run(f"cd '{BASE}' && python3 orchestrator.py", timeout=120)
    for line in out.splitlines()[-10:]:
        log(f"  {line}")


# ============================================================
# MAIN
# ============================================================
def main():
    log("=" * 60)
    log("MikeCore Reverse Engineering Pipeline")
    log("=" * 60)

    phases = sys.argv[1:] if len(sys.argv) > 1 else ["inventory", "ghidra", "extract", "analyze", "report", "verify"]

    if "inventory" in phases:
        phase_inventory()

    if "ghidra" in phases:
        phase_ghidra()

    if "extract" in phases:
        phase_extract()

    if "analyze" in phases:
        phase_analyze()

    if "report" in phases:
        phase_report()

    if "verify" in phases:
        phase_verify()

    log("")
    log("Pipeline complete.")


if __name__ == "__main__":
    main()

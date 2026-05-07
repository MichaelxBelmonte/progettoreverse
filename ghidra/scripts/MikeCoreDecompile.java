// Batch decompile all anonymous functions and map to classes
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import java.io.*;
import java.util.*;

public class MikeCoreDecompile extends GhidraScript {

    String outDir = "/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled";
    int MIN_SIZE = 500;       // minimum function size in bytes
    int DECOMPILE_TIMEOUT = 60; // seconds per function

    // Known class → string patterns for mapping
    static final String[][] CLASS_PATTERNS = {
        {"MUElementAnalyzer", "MUElementAnalyzer", "findPolyphonicDetection", "makeMonophonicItems",
         "findMonophonicPitch", "separateAttacks", "detectAfterTransfer", "assignEnergyClaims"},
        {"MUSpectralTimeSlice", "MUSpectralTimeSlice", "initFromTimeSignal", "complexSpectrum",
         "magnitudeData", "phaseData", "tonalityData", "transiencyData", "trueFreqData"},
        {"GNFFT", "GNFFTException", "Inappropriate table size", "fftsetup", "_fft1", "_fft2"},
        {"MUAudioSourceDescription", "MUAudioSourceDescription", "activateItem", "cleanupOverlapping",
         "audioSourcePotentialItems"},
        {"MUAudioSourceItem", "MUAudioSourceItem", "PulseAssignmentTime", "propertyPoints"},
        {"MUSpectrumShaper", "MUSpectrumShaper", "SpectrumShaper"},
        {"FormantsSynth", "FormantsSynth_"},
        {"DNA2", "DNA2Test_", "UseDNA2", "DNA2"},
        {"MUPitchMapper", "PitchMapper", "pitchMap"},
        {"MUVoiceAnalyzer", "VoiceAnalyzer"},
        {"MUAraDocumentController", "MUAraDocument", "araDocument"},
        {"MUAraAudioSource", "MUAraAudio"},
        {"EnergyClaimSystem", "energyClaim", "energyRawMatrix", "_energyClaim"},
        {"PitchDetection", "_pitchMatrix", "pitchRelevance", "pitchCenter", "pitchHarmonic"},
        {"QualityScoring", "Quality", "quality", "_quality"},
        {"Resynthesis", "Resynthesi", "resynth"},
        {"SubharmonicTracking", "subharmonicChain", "subharmonicPath"},
        {"SampleRateReduction", "sampleRateReduction"},
        {"WindowOverlap", "windowOverlap", "hannWindow"},
    };

    DecompInterface decompiler;
    PrintWriter indexWriter;
    PrintWriter classMapWriter;
    Map<String, List<String>> classToFunctions = new TreeMap<>();
    Map<String, Set<String>> funcToStrings = new HashMap<>();
    Map<String, Set<String>> funcToCalls = new HashMap<>();
    int totalDecompiled = 0;
    int totalFailed = 0;

    @Override
    public void run() throws Exception {
        new File(outDir).mkdirs();
        println("=== MikeCoreDecompile START ===");

        // Setup decompiler
        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            println("ERROR: Could not open program in decompiler");
            return;
        }
        println("Decompiler initialized");

        // Open index files
        indexWriter = new PrintWriter(new FileWriter(outDir + "/index.tsv"));
        indexWriter.println("# Address\tSize\tClass\tStringRefs\tCallCount");
        classMapWriter = new PrintWriter(new FileWriter(outDir + "/class_map.tsv"));
        classMapWriter.println("# Class\tFunctionAddr\tSize\tStrings");

        // Collect and sort functions by size (largest first)
        FunctionManager fm = currentProgram.getFunctionManager();
        ArrayList<Function> targets = new ArrayList<>();
        FunctionIterator iter = fm.getFunctions(true);
        while (iter.hasNext()) {
            Function func = iter.next();
            if (func.getName().startsWith("FUN_") && func.getBody().getNumAddresses() >= MIN_SIZE) {
                targets.add(func);
            }
        }
        targets.sort((a, b) -> Long.compare(b.getBody().getNumAddresses(), a.getBody().getNumAddresses()));
        println("Target functions: " + targets.size());

        // Pre-build string reference map for all functions
        println("Building string reference map...");
        buildStringRefMap();

        // Decompile all targets
        int total = targets.size();
        int count = 0;
        long startTime = System.currentTimeMillis();

        for (Function func : targets) {
            if (monitor.isCancelled()) break;
            count++;
            long size = func.getBody().getNumAddresses();
            String addr = func.getEntryPoint().toString();

            if (count % 100 == 0 || count <= 10) {
                long elapsed = (System.currentTimeMillis() - startTime) / 1000;
                long eta = (total - count) * elapsed / Math.max(count, 1);
                println(String.format("[%d/%d] %s (%d bytes) — %ds elapsed, ~%ds remaining",
                    count, total, addr, size, elapsed, eta));
            }

            decompileAndSave(func);
        }

        // Write class summary
        PrintWriter summaryWriter = new PrintWriter(new FileWriter(outDir + "/class_summary.txt"));
        summaryWriter.println("# Class reconstruction summary");
        summaryWriter.println("# Generated: " + new java.text.SimpleDateFormat("yyyy-MM-dd HH:mm").format(new Date()));
        summaryWriter.println("# Total decompiled: " + totalDecompiled);
        summaryWriter.println("# Total failed: " + totalFailed);
        summaryWriter.println();

        for (Map.Entry<String, List<String>> entry : classToFunctions.entrySet()) {
            List<String> funcs = entry.getValue();
            summaryWriter.println(entry.getKey() + ": " + funcs.size() + " functions");
            for (String f : funcs) {
                summaryWriter.println("  " + f);
            }
            summaryWriter.println();
        }
        summaryWriter.close();

        indexWriter.close();
        classMapWriter.close();
        decompiler.dispose();

        long totalTime = (System.currentTimeMillis() - startTime) / 1000;
        println(String.format("=== MikeCoreDecompile DONE === %d decompiled, %d failed, %ds total",
            totalDecompiled, totalFailed, totalTime));
    }

    void buildStringRefMap() throws Exception {
        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        DataIterator dataIter = listing.getDefinedData(true);
        while (dataIter.hasNext()) {
            Data data = dataIter.next();
            if (!data.hasStringValue()) continue;
            String val = data.getDefaultValueRepresentation();
            if (val == null || val.length() < 4) continue;

            // Truncate for storage
            String valTrunc = val.length() > 200 ? val.substring(0, 200) : val;

            Reference[] refs = getReferencesTo(data.getAddress());
            for (Reference ref : refs) {
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func != null && func.getName().startsWith("FUN_")) {
                    String key = func.getEntryPoint().toString();
                    funcToStrings.computeIfAbsent(key, k -> new LinkedHashSet<>()).add(valTrunc);
                }
            }
        }
        println("String refs mapped for " + funcToStrings.size() + " functions");
    }

    String classifyFunction(String addr, Set<String> strings) {
        if (strings == null || strings.isEmpty()) return "Unknown";

        String allStrings = String.join(" ", strings);

        // Try each class pattern
        for (String[] pattern : CLASS_PATTERNS) {
            String className = pattern[0];
            for (int i = 1; i < pattern.length; i++) {
                if (allStrings.contains(pattern[i])) {
                    return className;
                }
            }
        }

        // Fallback: try to find class from error string pattern "ClassName::methodName"
        for (String s : strings) {
            int idx = s.indexOf("::");
            if (idx > 0) {
                String cls = s.substring(0, idx);
                // Clean up: remove quotes and leading chars
                cls = cls.replaceAll("^[^A-Za-z]*", "");
                if (cls.length() > 2 && cls.matches("[A-Z][A-Za-z]+")) {
                    return cls;
                }
            }
        }

        // Try to find MU/MD/GN prefix
        for (String s : strings) {
            if (s.matches(".*\\b(MU[A-Z][a-zA-Z]+).*")) {
                return s.replaceAll(".*\\b(MU[A-Z][a-zA-Z]+).*", "$1");
            }
            if (s.matches(".*\\b(MD[A-Z][a-zA-Z]+).*")) {
                return s.replaceAll(".*\\b(MD[A-Z][a-zA-Z]+).*", "$1");
            }
            if (s.matches(".*\\b(GN[A-Z][a-zA-Z]+).*")) {
                return s.replaceAll(".*\\b(GN[A-Z][a-zA-Z]+).*", "$1");
            }
        }

        return "Unknown";
    }

    void decompileAndSave(Function func) {
        String addr = func.getEntryPoint().toString();
        long size = func.getBody().getNumAddresses();
        Set<String> strings = funcToStrings.get(addr);
        String className = classifyFunction(addr, strings);

        try {
            // Decompile
            DecompileResults results = decompiler.decompileFunction(func, DECOMPILE_TIMEOUT, monitor);

            if (results == null || !results.decompileCompleted()) {
                totalFailed++;
                indexWriter.println(addr + "\t" + size + "\t" + className + "\tDECOMPILE_FAILED\t0");
                return;
            }

            DecompiledFunction decomp = results.getDecompiledFunction();
            if (decomp == null) {
                totalFailed++;
                return;
            }

            String code = decomp.getC();
            if (code == null || code.isEmpty()) {
                totalFailed++;
                return;
            }

            // Create class subdirectory
            String safeClassName = className.replaceAll("[^A-Za-z0-9_]", "_");
            File classDir = new File(outDir + "/" + safeClassName);
            classDir.mkdirs();

            // Write decompiled code
            PrintWriter codeWriter = new PrintWriter(new FileWriter(
                classDir + "/" + addr + ".c"));
            codeWriter.println("// Function: " + func.getName());
            codeWriter.println("// Address: " + addr);
            codeWriter.println("// Size: " + size + " bytes");
            codeWriter.println("// Class: " + className);
            if (strings != null && !strings.isEmpty()) {
                codeWriter.println("// String references:");
                int shown = 0;
                for (String s : strings) {
                    String clean = s.length() > 100 ? s.substring(0, 100) + "..." : s;
                    codeWriter.println("//   " + clean);
                    if (++shown >= 20) {
                        codeWriter.println("//   ... +" + (strings.size() - 20) + " more");
                        break;
                    }
                }
            }
            codeWriter.println();
            codeWriter.println(code);
            codeWriter.close();

            totalDecompiled++;

            // Update indexes
            int callCount = countCalls(code);
            String strSummary = (strings != null) ?
                String.valueOf(strings.size()) + " strings" : "no strings";
            indexWriter.println(addr + "\t" + size + "\t" + className + "\t" + strSummary + "\t" + callCount);

            classToFunctions.computeIfAbsent(className, k -> new ArrayList<>())
                .add(addr + "\t" + size);

            if (!className.equals("Unknown")) {
                classMapWriter.println(className + "\t" + addr + "\t" + size + "\t" + strSummary);
            }

        } catch (Exception e) {
            totalFailed++;
            println("ERROR decompiling " + addr + ": " + e.getMessage());
        }
    }

    int countCalls(String code) {
        int count = 0;
        int idx = 0;
        while ((idx = code.indexOf("FUN_", idx)) >= 0) {
            count++;
            idx += 4;
        }
        return count;
    }
}

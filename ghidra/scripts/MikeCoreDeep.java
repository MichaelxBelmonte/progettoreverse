// Deep extraction: follow xrefs from key error strings to find DSP functions
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.util.*;

public class MikeCoreDeep extends GhidraScript {

    String outDir = "/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra_out";

    @Override
    public void run() throws Exception {
        new File(outDir).mkdirs();
        println("=== MikeCoreDeep START ===");

        // Find functions by searching for string references
        findFunctionsByString("initFromTimeSignal", "spectral_init");
        findFunctionsByString("Inappropriate table size for FFT", "fft_factory");
        findFunctionsByString("GNFFTException", "fft_exception");
        findFunctionsByString("assignEnergyClaimsInSampleRange", "energy_claims");
        findFunctionsByString("findPolyphonicDetectionItems", "poly_detect");
        findFunctionsByString("makeMonophonicItems", "mono_detect");
        findFunctionsByString("findMonophonicPitchInFrequencyDomain", "mono_pitch_freq");
        findFunctionsByString("separateAttacksInTimeDomain", "attack_separation");
        findFunctionsByString("polyphonicDetection", "poly_switch");
        findFunctionsByString("MUSpectralTimeSlice", "spectral_slice");
        findFunctionsByString("complexSpectrum", "complex_spectrum");
        findFunctionsByString("FormantsSynth_", "formant_synth");
        findFunctionsByString("DNA2Test_", "dna2_test");
        findFunctionsByString("StackedFft", "stacked_fft");
        findFunctionsByString("energyClaim", "energy_claim_var");
        findFunctionsByString("relevanceMatrix", "relevance_matrix");
        findFunctionsByString("harmonicPath", "harmonic_path");
        findFunctionsByString("subharmonicChain", "subharmonic_chain");
        findFunctionsByString("_spectrumSize", "spectrum_size");
        findFunctionsByString("windowOverlap", "window_overlap");
        findFunctionsByString("sampleRateReduction", "sr_reduction");
        findFunctionsByString("Resynthesized", "resynthesis");

        // Extract the big anonymous DSP functions
        extractLargestAnonymous();

        println("=== MikeCoreDeep DONE ===");
    }

    void findFunctionsByString(String searchStr, String label) throws Exception {
        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();

        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/deep_" + label + ".txt"));
        f.println("# Search: \"" + searchStr + "\"");
        int found = 0;

        // Scan all defined data for the string
        DataIterator iter = listing.getDefinedData(true);
        while (iter.hasNext()) {
            Data data = iter.next();
            if (!data.hasStringValue()) continue;
            String val = data.getDefaultValueRepresentation();
            if (val == null || !val.contains(searchStr)) continue;

            found++;
            String trunc = val.length() > 120 ? val.substring(0, 120) + "..." : val;
            f.println("STRING @ " + data.getAddress() + ": " + trunc);

            // Follow xrefs
            Reference[] refs = getReferencesTo(data.getAddress());
            for (Reference ref : refs) {
                Address from = ref.getFromAddress();
                Function func = fm.getFunctionContaining(from);
                if (func != null) {
                    f.println("  FUNC: " + func.getName() + " @ " + func.getEntryPoint());
                    f.println("    Size: " + func.getBody().getNumAddresses() + " bytes");
                    f.println("    Ref from: " + from);

                    // Get callers of this function
                    Reference[] callers = getReferencesTo(func.getEntryPoint());
                    Set<String> callerNames = new TreeSet<>();
                    for (Reference caller : callers) {
                        Function callerFunc = fm.getFunctionContaining(caller.getFromAddress());
                        if (callerFunc != null && !callerFunc.equals(func)) {
                            callerNames.add(callerFunc.getName() + "@" + callerFunc.getEntryPoint());
                        }
                    }
                    if (!callerNames.isEmpty()) {
                        f.println("    Called by (" + callerNames.size() + "):");
                        int shown = 0;
                        for (String c : callerNames) {
                            if (shown++ < 15) f.println("      " + c);
                        }
                        if (callerNames.size() > 15) f.println("      ... and " + (callerNames.size() - 15) + " more");
                    }

                    // Get what this function calls
                    Set<String> callees = new TreeSet<>();
                    AddressSetView body = func.getBody();
                    InstructionIterator instrIter = listing.getInstructions(body, true);
                    while (instrIter.hasNext()) {
                        ghidra.program.model.listing.Instruction instr = instrIter.next();
                        for (Reference iref : instr.getReferencesFrom()) {
                            if (iref.getReferenceType().isCall()) {
                                Function target = fm.getFunctionAt(iref.getToAddress());
                                if (target != null) {
                                    callees.add(target.getName() + "@" + target.getEntryPoint());
                                }
                            }
                        }
                    }
                    if (!callees.isEmpty()) {
                        f.println("    Calls (" + callees.size() + "):");
                        int shown = 0;
                        for (String c : callees) {
                            if (shown++ < 20) f.println("      " + c);
                        }
                    }
                }
            }
            f.println();
        }

        if (found == 0) f.println("# NO STRINGS FOUND");
        f.close();
        println(label + ": " + found + " strings found");
    }

    void extractLargestAnonymous() throws Exception {
        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/largest_anonymous.txt"));
        FunctionManager fm = currentProgram.getFunctionManager();

        // Collect all FUN_ functions with their sizes
        ArrayList<String[]> funcs = new ArrayList<>();
        FunctionIterator iter = fm.getFunctions(true);
        while (iter.hasNext()) {
            Function func = iter.next();
            if (func.getName().startsWith("FUN_")) {
                long size = func.getBody().getNumAddresses();
                if (size > 500) {  // only big ones
                    funcs.add(new String[]{
                        String.valueOf(size),
                        func.getEntryPoint().toString(),
                        func.getName()
                    });
                }
            }
        }

        // Sort by size
        funcs.sort((a, b) -> Long.compare(Long.parseLong(b[0]), Long.parseLong(a[0])));

        f.println("# Top 200 largest anonymous functions (likely DSP/core logic)");
        f.println("# Size\tAddress\tName");
        int shown = 0;
        for (String[] entry : funcs) {
            if (shown++ >= 200) break;
            f.println(entry[0] + "\t" + entry[1] + "\t" + entry[2]);
        }
        f.println("# Total anonymous functions > 500 bytes: " + funcs.size());
        f.close();
        println("Largest anonymous: " + funcs.size() + " functions > 500 bytes");
    }
}

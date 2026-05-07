// Extract detailed info from MikeCore
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import java.io.*;
import java.util.*;

public class MikeCoreExtract extends GhidraScript {

    String outDir = "/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra_out";

    @Override
    public void run() throws Exception {
        new File(outDir).mkdirs();
        println("=== MikeCoreExtract START ===");

        extractExports();
        extractFunctions();
        extractNamespaces();
        extractStringXrefs();

        println("=== MikeCoreExtract DONE ===");
    }

    void extractExports() throws Exception {
        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/exports.txt"));
        SymbolTable st = currentProgram.getSymbolTable();
        int count = 0;
        SymbolIterator iter = st.getAllSymbols(true);
        while (iter.hasNext()) {
            Symbol sym = iter.next();
            if (sym.isExternalEntryPoint()) {
                f.println(sym.getAddress() + "\t" + sym.getName());
                count++;
            }
        }
        f.println("# Total: " + count);
        f.close();
        println("Exports: " + count);
    }

    void extractFunctions() throws Exception {
        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/functions.txt"));
        FunctionManager fm = currentProgram.getFunctionManager();
        int total = 0, named = 0;
        FunctionIterator iter = fm.getFunctions(true);
        while (iter.hasNext()) {
            Function func = iter.next();
            total++;
            String name = func.getName();
            if (!name.startsWith("FUN_")) {
                named++;
                Namespace p = func.getParentNamespace();
                String ns = (p != null && !p.isGlobal()) ? p.getName(true) + "::" : "";
                f.println(func.getEntryPoint() + "\t" + func.getBody().getNumAddresses() + "\t" + ns + name);
            }
        }
        f.println("# Total: " + total + " Named: " + named);
        f.close();
        println("Functions: " + total + " total, " + named + " named");
    }

    void extractNamespaces() throws Exception {
        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/namespaces.txt"));
        FunctionManager fm = currentProgram.getFunctionManager();
        TreeMap<String, int[]> ns = new TreeMap<>();
        FunctionIterator iter = fm.getFunctions(true);
        while (iter.hasNext()) {
            Function func = iter.next();
            Namespace p = func.getParentNamespace();
            if (p != null && !p.isGlobal()) {
                String name = p.getName(true);
                int[] v = ns.get(name);
                if (v == null) { v = new int[]{0, 0}; ns.put(name, v); }
                v[0]++;
                v[1] += (int)func.getBody().getNumAddresses();
            }
        }
        ArrayList<Map.Entry<String, int[]>> list = new ArrayList<>(ns.entrySet());
        list.sort((a, b) -> b.getValue()[1] - a.getValue()[1]);
        for (Map.Entry<String, int[]> e : list) {
            f.println(e.getValue()[0] + "\t" + e.getValue()[1] + "\t" + e.getKey());
        }
        f.println("# Total: " + ns.size());
        f.close();
        println("Namespaces: " + ns.size());
    }

    void extractStringXrefs() throws Exception {
        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/dsp_xrefs.txt"));
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();

        String[] keys = {
            "FFT", "fft", "pitch", "Pitch", "formant", "Formant",
            "polyphonic", "DNA", "spectrum", "harmonic",
            "sinusoid", "vocoder", "resynthes", "onset",
            "transient", "envelope", "partial", "MIDI",
            "tempo", "beat", "detect", "Detect",
            "shift", "stretch", "filter", "overlap",
            "phase", "Phase", "frequency", "separation",
            "energy", "relevance", "quality", "attack",
            "sibilant", "vibrato", "portamento", "window"
        };

        Listing listing = currentProgram.getListing();
        DataIterator dataIter = listing.getDefinedData(true);
        int count = 0;

        while (dataIter.hasNext()) {
            Data data = dataIter.next();
            if (!data.hasStringValue()) continue;
            String val = data.getDefaultValueRepresentation();
            if (val == null || val.length() < 5) continue;

            boolean hit = false;
            String matchKw = "";
            for (String kw : keys) {
                if (val.contains(kw)) {
                    hit = true;
                    matchKw = kw;
                    break;
                }
            }
            if (!hit) continue;
            count++;

            // xrefs
            Reference[] refs = getReferencesTo(data.getAddress());
            StringBuilder sb = new StringBuilder();
            for (Reference ref : refs) {
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func != null) {
                    Namespace p = func.getParentNamespace();
                    String ns = (p != null && !p.isGlobal()) ? p.getName(true) + "::" : "";
                    sb.append(ns + func.getName() + "@" + ref.getFromAddress() + "; ");
                }
            }

            String trunc = val.length() > 100 ? val.substring(0, 100) + "..." : val;
            f.println(data.getAddress() + "\t[" + matchKw + "]\t" + trunc);
            if (sb.length() > 0) {
                f.println("  XREFS: " + sb.toString().trim());
            }
        }
        f.println("# Total: " + count);
        f.close();
        println("DSP strings with xrefs: " + count);
    }
}

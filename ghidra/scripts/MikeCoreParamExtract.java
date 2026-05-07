// Extract real parameter values by tracing property registrations to accessor functions
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class MikeCoreParamExtract extends GhidraScript {

    String outDir = "/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore";
    DecompInterface decompiler;

    @Override
    public void run() throws Exception {
        println("=== MikeCoreParamExtract START ===");

        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            println("ERROR: Could not open decompiler");
            return;
        }

        PrintWriter out = new PrintWriter(new FileWriter(outDir + "/param_values.tsv"));
        out.println("# PropertyName\tOffset\tType\tConstantValue\tFormula\tFunction\tConfidence");

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        // Find all property name strings starting with _
        // Pattern: _DAT_xxx = "_propertyName"
        // Then: _DAT_xxx+0x10 = 0xTT00 (type code)
        // The function containing this is the registration function
        // The value at the same struct offset is written elsewhere

        Map<String, List<String[]>> propData = new TreeMap<>();

        // Step 1: Find all ivar strings and their registration functions
        println("Step 1: Finding property registrations...");
        DataIterator dataIter = listing.getDefinedData(true);
        int propCount = 0;

        while (dataIter.hasNext()) {
            Data data = dataIter.next();
            if (!data.hasStringValue()) continue;
            String val = data.getDefaultValueRepresentation();
            if (val == null || !val.startsWith("\"_") || val.length() < 4) continue;
            String propName = val.replace("\"", "");
            if (!propName.matches("_[a-z][a-zA-Z0-9_]+")) continue;

            // Follow xrefs to find registration functions
            Reference[] refs = getReferencesTo(data.getAddress());
            for (Reference ref : refs) {
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null) continue;
                long funcSize = func.getBody().getNumAddresses();

                // Registration functions are medium-large (register many properties)
                // Accessor functions are small (get/set one field)
                // We want BOTH

                // Decompile
                DecompileResults dr = decompiler.decompileFunction(func, 30, monitor);
                if (dr == null || !dr.decompileCompleted()) continue;
                DecompiledFunction df = dr.getDecompiledFunction();
                if (df == null) continue;
                String code = df.getC();
                if (code == null) continue;

                // Find the property name assignment and what's nearby
                String[] lines = code.split("\n");
                for (int i = 0; i < lines.length; i++) {
                    if (!lines[i].contains("\"" + propName + "\"")) continue;

                    // Look for type code nearby (0xTT00)
                    String typeCode = "";
                    for (int j = i + 1; j < Math.min(i + 8, lines.length); j++) {
                        Pattern tcPat = Pattern.compile("=\\s*(0x[0-9a-fA-F]+00)\\s*;");
                        Matcher tcM = tcPat.matcher(lines[j]);
                        if (tcM.find()) {
                            long raw = Long.parseLong(tcM.group(1).substring(2), 16);
                            int byteVal = (int)((raw >> 8) & 0xFF);
                            switch (byteVal) {
                                case 0x66: typeCode = "float"; break;
                                case 0x64: typeCode = "double"; break;
                                case 0x69: typeCode = "int"; break;
                                case 0x6c: typeCode = "int64"; break;
                                case 0x5e: typeCode = "pointer"; break;
                                case 0x62: typeCode = "bool"; break;
                                default: typeCode = "type_0x" + Integer.toHexString(byteVal);
                            }
                            break;
                        }
                    }

                    // Now find ALL offset accesses in this function
                    // to identify which offsets are used with this property
                    Pattern offPat = Pattern.compile(
                        "(?:unaff_RDI|param_1|this_ptr)\\s*\\+\\s*(0x[0-9a-f]+)");

                    // For small functions (< 800 bytes), the offsets are likely
                    // direct property accessors
                    if (funcSize < 800) {
                        Set<String> offsets = new HashSet<>();
                        Matcher offM = offPat.matcher(code);
                        while (offM.find()) {
                            offsets.add(offM.group(1));
                        }

                        // Also look for constant values assigned to those offsets
                        Pattern constPat = Pattern.compile(
                            "(?:unaff_RDI|param_1|this_ptr)\\s*\\+\\s*(0x[0-9a-f]+)\\)\\s*=\\s*(0x[0-9a-f]+)");
                        Matcher constM = constPat.matcher(code);
                        while (constM.find()) {
                            String offset = constM.group(1);
                            String value = constM.group(2);
                            out.println(propName + "\t" + offset + "\t" + typeCode + "\t" +
                                       value + "\t" + "" + "\t" + func.getEntryPoint() + "\t" +
                                       (funcSize < 500 ? "HIGH" : "MEDIUM"));
                        }

                        if (!offsets.isEmpty() && offsets.size() <= 3) {
                            for (String off : offsets) {
                                if (!propData.containsKey(propName)) {
                                    propData.put(propName, new ArrayList<>());
                                }
                                propData.get(propName).add(new String[]{
                                    off, typeCode, func.getEntryPoint().toString(),
                                    String.valueOf(funcSize)
                                });
                            }
                        }
                    }

                    propCount++;
                    break;
                }
            }

            if (monitor.isCancelled()) break;
        }

        // Step 2: For each known offset, search ALL functions for constant writes
        println("Step 2: Finding constant writes to known offsets...");

        // Key offsets we want to find values for
        String[] targetOffsets = {
            "0x10c", // _itemDetectionQualityLimit
            "0x114", // _attackItemDetectionQualityLimit
            "0x11c", // _attackItemDefaultDetectionQualityLimit
            "0x70",  // _windowOverlapForTimeSlices
            "0x74",  // _modelSpectrumSize
        };

        FunctionIterator funcIter = fm.getFunctions(true);
        int funcCount = 0;
        while (funcIter.hasNext()) {
            Function func = funcIter.next();
            if (!func.getName().startsWith("FUN_")) continue;
            long size = func.getBody().getNumAddresses();
            if (size < 100 || size > 50000) continue;

            funcCount++;
            if (funcCount % 1000 == 0) {
                println("  Scanned " + funcCount + " functions...");
            }

            // Quick check: does function body contain interesting bytes?
            // Skip decompilation for functions that don't access our offsets
            DecompileResults dr = decompiler.decompileFunction(func, 15, monitor);
            if (dr == null || !dr.decompileCompleted()) continue;
            DecompiledFunction df = dr.getDecompiledFunction();
            if (df == null) continue;
            String code = df.getC();
            if (code == null) continue;

            for (String targetOff : targetOffsets) {
                if (!code.contains(targetOff)) continue;

                // Find constant writes to this offset
                Pattern writePat = Pattern.compile(
                    "\\+\\s*" + targetOff.replace("0x", "0x0*") +
                    "\\)\\s*=\\s*(0x[0-9a-fA-F]+)\\s*;");
                Matcher writeM = writePat.matcher(code);
                while (writeM.find()) {
                    String value = writeM.group(1);
                    try {
                        long longVal = Long.parseLong(value.substring(2), 16);
                        if (longVal > 0 && longVal != 0xFFFFFFFF) {
                            // Try as float
                            float fval = Float.intBitsToFloat((int)(longVal & 0xFFFFFFFF));
                            if (!Float.isNaN(fval) && Math.abs(fval) > 0.0001 && Math.abs(fval) < 100000) {
                                out.println("OFFSET_" + targetOff + "\t" + targetOff + "\t" +
                                           "float" + "\t" + value + " (" + fval + ")" + "\t" +
                                           "" + "\t" + func.getEntryPoint() + "\t" + "HIGH");
                            }
                        }
                    } catch (Exception e) {}
                }
            }

            if (monitor.isCancelled()) break;
        }

        out.close();
        decompiler.dispose();

        println("Properties found: " + propCount);
        println("Offset mappings: " + propData.size());
        println("=== MikeCoreParamExtract DONE ===");
    }
}

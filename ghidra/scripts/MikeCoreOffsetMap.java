// Extract property offset mappings by analyzing accessor functions and registration patterns
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.mem.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class MikeCoreOffsetMap extends GhidraScript {

    String outDir = "/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore";
    DecompInterface decompiler;

    @Override
    public void run() throws Exception {
        println("=== MikeCoreOffsetMap START ===");

        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            println("ERROR: Could not open decompiler");
            return;
        }

        // Strategy 1: Find small functions that reference exactly one ivar name
        // and access a specific offset → map offset to name
        Map<String, Map<String, String>> classOffsetMap = findOffsetsFromAccessors();

        // Strategy 2: Find property registration functions and extract ordered property lists
        Map<String, List<String[]>> classPropertyOrder = findPropertyRegistrationOrder();

        // Strategy 3: Build FUN_ → method name mapping from error strings
        Map<String, String> funcNameMap = buildFuncNameMap();

        // Save results
        saveOffsetMap(classOffsetMap);
        savePropertyOrder(classPropertyOrder);
        saveFuncNameMap(funcNameMap);

        decompiler.dispose();
        println("=== MikeCoreOffsetMap DONE ===");
    }

    Map<String, Map<String, String>> findOffsetsFromAccessors() throws Exception {
        println("--- Strategy 1: Accessor function analysis ---");

        FunctionManager fm = currentProgram.getFunctionManager();
        Listing listing = currentProgram.getListing();
        Map<String, Map<String, String>> result = new TreeMap<>();

        // Find all ivar name strings (start with _lowercase)
        Map<Address, String> ivarStrings = new HashMap<>();
        DataIterator dataIter = listing.getDefinedData(true);
        while (dataIter.hasNext()) {
            Data data = dataIter.next();
            if (!data.hasStringValue()) continue;
            String val = data.getDefaultValueRepresentation();
            if (val != null && val.startsWith("\"_") && val.length() > 3) {
                String clean = val.replace("\"", "");
                if (clean.matches("_[a-z][a-zA-Z0-9_]+")) {
                    ivarStrings.put(data.getAddress(), clean);
                }
            }
        }
        println("  Found " + ivarStrings.size() + " ivar name strings");

        // For each ivar string, find functions that reference it
        int mapped = 0;
        for (Map.Entry<Address, String> entry : ivarStrings.entrySet()) {
            if (monitor.isCancelled()) break;
            Address strAddr = entry.getKey();
            String ivarName = entry.getValue();

            Reference[] refs = getReferencesTo(strAddr);
            for (Reference ref : refs) {
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null) continue;

                long funcSize = func.getBody().getNumAddresses();
                // Small functions are likely accessors or registration
                // But also check medium functions that are registration functions
                if (funcSize > 15000) continue;

                // Decompile this function
                DecompileResults dr = decompiler.decompileFunction(func, 30, monitor);
                if (dr == null || !dr.decompileCompleted()) continue;
                DecompiledFunction df = dr.getDecompiledFunction();
                if (df == null) continue;
                String code = df.getC();
                if (code == null) continue;

                // Look for the registration pattern:
                // _DAT_xxx = "_ivarName";
                // ... (within 5 lines)
                // _DAT_xxx = 0xTT00;  (type code)
                // _DAT_xxx = "typeName";
                String[] lines = code.split("\n");
                for (int i = 0; i < lines.length; i++) {
                    if (!lines[i].contains("\"" + ivarName + "\"")) continue;

                    // Found the name assignment. Now look for type code and type name nearby
                    String typeCode = null;
                    String typeName = null;

                    for (int j = i + 1; j < Math.min(i + 8, lines.length); j++) {
                        // Type code: 0xTT00
                        Pattern tcPat = Pattern.compile("=\\s*(0x[0-9a-fA-F]+00)\\s*;");
                        java.util.regex.Matcher tcM = tcPat.matcher(lines[j]);
                        if (tcM.find() && typeCode == null) {
                            long raw = Long.parseLong(tcM.group(1).substring(2), 16);
                            int byteVal = (int)((raw >> 8) & 0xFF);
                            switch (byteVal) {
                                case 0x66: typeCode = "float"; break;
                                case 0x64: typeCode = "double"; break;
                                case 0x69: typeCode = "int32_t"; break;
                                case 0x6c: typeCode = "int64_t"; break;
                                case 0x5e: typeCode = "pointer"; break;
                                case 0x63: typeCode = "char"; break;
                                case 0x42: typeCode = "bool"; break;
                                case 0x62: typeCode = "bool"; break;
                                default: typeCode = "unknown_0x" + Integer.toHexString(byteVal);
                            }
                        }

                        // Type name: "float", "double", "GNInt", etc.
                        Pattern tnPat = Pattern.compile("=\\s*\"([A-Za-z][A-Za-z0-9_ *]+)\"\\s*;");
                        java.util.regex.Matcher tnM = tnPat.matcher(lines[j]);
                        if (tnM.find() && typeName == null) {
                            typeName = tnM.group(1);
                        }
                    }

                    if (typeCode != null || typeName != null) {
                        // Determine class from function classification
                        String className = guessClassFromFunction(func, ivarName);

                        result.computeIfAbsent(className, k -> new TreeMap<>());
                        String typeStr = (typeName != null ? typeName : typeCode);
                        result.get(className).put(ivarName, typeStr);
                        mapped++;
                    }
                }

                // Also look for simple accessor pattern:
                // return *(type*)(param_1 + OFFSET); with ivarName reference
                if (funcSize < 500) {
                    Pattern offPat = Pattern.compile("(?:unaff_RDI|param_1)\\s*\\+\\s*(0x[0-9a-f]+)");
                    java.util.regex.Matcher offM = offPat.matcher(code);
                    Set<String> offsets = new HashSet<>();
                    while (offM.find()) {
                        offsets.add(offM.group(1));
                    }

                    // Count ivar name references in this function
                    int ivarCount = 0;
                    for (String s : ivarStrings.values()) {
                        if (code.contains("\"" + s + "\"")) ivarCount++;
                    }

                    // If exactly 1 ivar and 1-2 offsets, strong accessor signal
                    if (ivarCount == 1 && offsets.size() >= 1 && offsets.size() <= 2) {
                        String className = guessClassFromFunction(func, ivarName);
                        String offsetStr = String.join(",", offsets);
                        result.computeIfAbsent(className, k -> new TreeMap<>());
                        String existing = result.get(className).get(ivarName);
                        if (existing == null || !existing.contains("offset")) {
                            String typeStr = result.get(className).getOrDefault(ivarName, "unknown");
                            result.get(className).put(ivarName, typeStr + " @" + offsetStr);
                        }
                    }
                }
            }
        }

        println("  Mapped " + mapped + " property names across " + result.size() + " classes");
        return result;
    }

    String guessClassFromFunction(Function func, String ivarName) {
        // Try to determine class from function's decompiled file location
        Namespace ns = func.getParentNamespace();
        if (ns != null && !ns.isGlobal()) {
            return ns.getName(true);
        }

        // Check if function references a class name string
        // (This is a heuristic)
        return "Unknown_" + func.getEntryPoint().toString().substring(0, 4);
    }

    Map<String, List<String[]>> findPropertyRegistrationOrder() throws Exception {
        println("\n--- Strategy 2: Property registration order ---");

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();
        Map<String, List<String[]>> result = new TreeMap<>();

        // Find large functions that contain many ivar registrations
        // These are class initialization/registration functions
        DataIterator dataIter = listing.getDefinedData(true);
        Map<Address, String> allStrings = new HashMap<>();
        while (dataIter.hasNext()) {
            Data data = dataIter.next();
            if (data.hasStringValue()) {
                String val = data.getDefaultValueRepresentation();
                if (val != null) {
                    allStrings.put(data.getAddress(), val.replace("\"", ""));
                }
            }
        }

        // Look for class names followed by multiple ivar names in memory
        // Pattern: "ClassName" string nearby "_ivarName" strings
        println("  Analyzing string neighborhood patterns...");

        // Group strings by 0x1000 pages
        TreeMap<Long, List<Map.Entry<Address, String>>> pages = new TreeMap<>();
        for (Map.Entry<Address, String> e : allStrings.entrySet()) {
            long page = e.getKey().getOffset() / 0x1000;
            pages.computeIfAbsent(page, k -> new ArrayList<>()).add(e);
        }

        int classesFound = 0;
        for (Map.Entry<Long, List<Map.Entry<Address, String>>> pageEntry : pages.entrySet()) {
            List<Map.Entry<Address, String>> strings = pageEntry.getValue();
            strings.sort(Comparator.comparingLong(e -> e.getKey().getOffset()));

            String currentClass = null;
            List<String[]> currentProps = null;

            for (Map.Entry<Address, String> se : strings) {
                String s = se.getValue();

                // Check if this is a class name (MU*, MD*, GN*)
                if (s.matches("[A-Z]{2}[A-Za-z]+") && !s.startsWith("_")) {
                    if (currentClass != null && currentProps != null && currentProps.size() > 2) {
                        result.put(currentClass, currentProps);
                        classesFound++;
                    }
                    currentClass = s;
                    currentProps = new ArrayList<>();
                }
                // Check if this is an ivar name
                else if (s.matches("_[a-z][a-zA-Z0-9_]+") && currentProps != null) {
                    currentProps.add(new String[]{s, se.getKey().toString()});
                }
                // Check if this is a type name
                else if (currentProps != null && !currentProps.isEmpty() &&
                         (s.equals("float") || s.equals("double") || s.equals("GNInt") ||
                          s.equals("SInt64") || s.equals("bool") || s.endsWith("*"))) {
                    String[] last = currentProps.get(currentProps.size() - 1);
                    if (last.length == 2) {
                        currentProps.set(currentProps.size() - 1, new String[]{last[0], last[1], s});
                    }
                }
            }
            if (currentClass != null && currentProps != null && currentProps.size() > 2) {
                result.put(currentClass, currentProps);
                classesFound++;
            }
        }

        println("  Found property registration for " + classesFound + " classes");
        return result;
    }

    Map<String, String> buildFuncNameMap() throws Exception {
        println("\n--- Strategy 3: Function name mapping ---");

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();
        Map<String, String> nameMap = new TreeMap<>();

        // Find all error strings that contain "ClassName::methodName"
        DataIterator dataIter = listing.getDefinedData(true);
        while (dataIter.hasNext()) {
            Data data = dataIter.next();
            if (!data.hasStringValue()) continue;
            String val = data.getDefaultValueRepresentation();
            if (val == null) continue;
            val = val.replace("\"", "");

            // Match "ClassName::methodName()" or "ClassName::methodName():"
            Pattern p = Pattern.compile("([A-Z][A-Za-z]+)::([a-z][a-zA-Z]+)\\(\\)");
            java.util.regex.Matcher m = p.matcher(val);
            if (!m.find()) continue;

            String className = m.group(1);
            String methodName = m.group(2);

            // Find which function references this string
            Reference[] refs = getReferencesTo(data.getAddress());
            for (Reference ref : refs) {
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func != null && func.getName().startsWith("FUN_")) {
                    String funcAddr = func.getEntryPoint().toString();
                    String fullName = className + "::" + methodName;
                    nameMap.put(funcAddr, fullName);
                }
            }
        }

        // Also map known functions from our analysis
        // vDSP functions, etc.
        FunctionIterator fiter = fm.getFunctions(true);
        while (fiter.hasNext()) {
            Function func = fiter.next();
            String name = func.getName();
            if (!name.startsWith("FUN_") && !name.startsWith("_")) {
                // Named function - add to map
                String addr = func.getEntryPoint().toString();
                nameMap.put(addr, name);
            }
        }

        println("  Mapped " + nameMap.size() + " function names");
        return nameMap;
    }

    void saveOffsetMap(Map<String, Map<String, String>> map) throws Exception {
        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/offset_map.tsv"));
        f.println("# Class\tProperty\tType/Offset");
        for (Map.Entry<String, Map<String, String>> ce : map.entrySet()) {
            for (Map.Entry<String, String> pe : ce.getValue().entrySet()) {
                f.println(ce.getKey() + "\t" + pe.getKey() + "\t" + pe.getValue());
            }
        }
        f.close();
        println("Saved offset map: " + map.size() + " classes");
    }

    void savePropertyOrder(Map<String, List<String[]>> map) throws Exception {
        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/property_order.tsv"));
        f.println("# Class\tIndex\tProperty\tAddress\tType");
        for (Map.Entry<String, List<String[]>> ce : map.entrySet()) {
            int idx = 0;
            for (String[] prop : ce.getValue()) {
                String type = prop.length > 2 ? prop[2] : "";
                f.println(ce.getKey() + "\t" + idx + "\t" + prop[0] + "\t" + prop[1] + "\t" + type);
                idx++;
            }
        }
        f.close();
        println("Saved property order: " + map.size() + " classes");
    }

    void saveFuncNameMap(Map<String, String> map) throws Exception {
        PrintWriter f = new PrintWriter(new FileWriter(outDir + "/func_names.tsv"));
        f.println("# Address\tName");
        for (Map.Entry<String, String> e : map.entrySet()) {
            f.println(e.getKey() + "\t" + e.getValue());
        }
        f.close();
        println("Saved function name map: " + map.size() + " entries");
    }
}

// Function: FUN_010d8920
// Address: 010d8920
// Size: 609 bytes
// Class: MUGrooveBasedQuarterAnalyzer
// String references:
//   "MUGrooveBasedQuarterAnalyzer"

void FUN_010d8920(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_b0;
  void*local_30;
  
  // [STATIC_INIT: property registration]
  if (g_0279f213 == '\0') {
    FUN_011499b0();
    FUN_00e87760();
    FUN_01149cc0();
    local_30 = (void*)0x0;
    if (1 < g_02802630) {
      local_30 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_01149fa0();
    FUN_0114ed60();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_0141eb30();
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    FUN_01149ee0();
    if (local_30 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_01149ee0();
  }
  return;
}


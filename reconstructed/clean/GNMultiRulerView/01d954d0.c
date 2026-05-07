// Function: FUN_01d954d0
// Address: 01d954d0
// Size: 533 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d954d0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_168;
  void*local_28;
  
  // [STATIC_INIT: property registration]
  if (g_027f1753 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_28 = (void*)0x0;
    if (1 < g_02802630) {
      local_28 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_000a32b0();
    FUN_01da1d70();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_168 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_28 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}


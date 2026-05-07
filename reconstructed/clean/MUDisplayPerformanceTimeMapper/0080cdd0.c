// Function: FUN_0080cdd0
// Address: 0080cdd0
// Size: 538 bytes
// Class: MUDisplayPerformanceTimeMapper
// String references:
//   "MUDisplayPerformanceTimeMapper"
// === MUDisplayPerformanceTimeMapper properties ===
//                   _allTimeGrids
//                   _editorViews
//                   _multiTrackViews
//                   _postChangesDisabled


void FUN_0080cdd0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_b8;
  int64_t local_b0;
  int64_t local_a8;
  void*local_60;
  
  if ((g_02733808 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02733758 = FUN_00d4fe50();
    g_02733740 = "MUDisplayPerformanceTimeMapper";
    g_02733748 = 0x58;
    g_02733750 = FUN_0082a620;
    g_02733760 = 0;
    ram_0000000002733768 = 0;
    g_02733770 = 0;
    ram_0000000002733778 = 0;
    g_02733780 = 0;
    ram_0000000002733788 = 0;
    g_02733790 = 0;
    ram_0000000002733798 = 0;
    g_027337a0 = 0;
    ram_00000000027337a8 = 0;
    g_027337b0 = 0;
    ram_00000000027337b8 = 0;
    g_027337c0 = 0;
    ram_00000000027337c8 = 0;
    g_027337d0 = 0;
    ram_00000000027337d8 = 0;
    g_027337e0 = 0;
    ram_00000000027337e8 = 0;
    g_027337f0 = 0;
    _ram_00000000027337f8 = 0;
    g_02733800 = 0;
    ___cxa_guard_release();
  }
  if (g_027337fb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_60 = (void*)0x0;
    if (1 < g_02802630) {
      local_60 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_60 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_0082a6d0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_60 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


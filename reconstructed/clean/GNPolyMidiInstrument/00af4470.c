// Function: FUN_00af4470
// Address: 00af4470
// Size: 580 bytes
// Class: GNPolyMidiInstrument
// String references:
//   "GNPolyMidiInstrument"

void FUN_00af4470(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_f0;
  int64_t local_e0;
  void*local_38;
  
  if ((g_0275bfb0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0275bf00 = FUN_00b0c680();
    g_0275bee8 = "GNPolyMidiInstrument";
    g_0275bef0 = 0xb8;
    g_0275bef8 = FUN_00b10b10;
    g_0275bf08 = 0;
    ram_000000000275bf10 = 0;
    g_0275bf18 = 0;
    ram_000000000275bf20 = 0;
    g_0275bf28 = 0;
    ram_000000000275bf30 = 0;
    g_0275bf38 = 0;
    ram_000000000275bf40 = 0;
    g_0275bf48 = 0;
    ram_000000000275bf50 = 0;
    g_0275bf58 = 0;
    ram_000000000275bf60 = 0;
    g_0275bf68 = 0;
    ram_000000000275bf70 = 0;
    g_0275bf78 = 0;
    ram_000000000275bf80 = 0;
    g_0275bf88 = 0;
    ram_000000000275bf90 = 0;
    g_0275bf98 = 0;
    _ram_000000000275bfa0 = 0;
    g_0275bfa8 = 0;
    ___cxa_guard_release();
  }
  if (g_0275bfa3 == '\0') {
    FUN_00af30e0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_38 = (void*)0x0;
    if (1 < g_02802630) {
      local_38 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_38 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00b10c00();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_e0 != 0) {
      FUN_00d50b20();
    }
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    FUN_00013900();
    if (local_38 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00013900();
  }
  return;
}


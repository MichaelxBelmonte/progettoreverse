// ===================================================================
// GNIconsViewAssoc — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00182050
// ============================================================
// Function: FUN_00182050
// Address: 00182050
// Size: 683 bytes
// Class: GNIconsViewAssoc
// String references:
//   "GNIconsViewAssoc"
//   "GNIconsViewDelegate"

void FUN_00182050(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  int64_t local_80;
  
  if ((g_027f71b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026ed2e8 = FUN_001ba850();
    g_026ed2d0 = "GNIconsViewAssoc";
    g_026ed2d8 = 0x58;
    g_026ed2e0 = FUN_001cd1a0;
    g_026ed2f0 = 0;
    ram_00000000026ed2f8 = 0;
    g_026ed300 = 0;
    ram_00000000026ed308 = 0;
    g_026ed310 = 0;
    ram_00000000026ed318 = 0;
    g_026ed320 = 0;
    ram_00000000026ed328 = 0;
    g_026ed330 = 0;
    ram_00000000026ed338 = 0;
    g_026ed340 = 0;
    ram_00000000026ed348 = 0;
    g_026ed350 = 0;
    ram_00000000026ed358 = 0;
    g_026ed360 = 0;
    ram_00000000026ed368 = 0;
    g_026ed370 = 0;
    ram_00000000026ed378 = 0;
    g_026ed380 = 0;
    _ram_00000000026ed388 = 0;
    g_026ed390 = 0;
    ___cxa_guard_release();
  }
  if (g_026ed38b == '\0') {
    FUN_001ba5f0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < g_02802630) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_001baad0();
    if ((g_027f6db0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_026ed3a0 = "GNIconsViewDelegate";
      g_026ed3b0 = 0;
      g_026ed3a8 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_001cd290();
    FUN_00d50c00();
    uVar3 = FUN_00e87770();
    FUN_00e87920(uVar3,0);
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}


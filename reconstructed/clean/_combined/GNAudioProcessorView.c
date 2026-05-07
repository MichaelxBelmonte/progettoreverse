// ===================================================================
// GNAudioProcessorView — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 00af0870
// ============================================================
// Function: FUN_00af0870
// Address: 00af0870
// Size: 533 bytes
// Class: GNAudioProcessorView
// String references:
//   "GNAudioProcessorView"

void FUN_00af0870(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_30;
  int64_t local_28;
  
  if ((g_02756790 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027566e0 = FUN_0006d940();
    g_027566c8 = "GNAudioProcessorView";
    g_027566d0 = 0x148;
    g_027566d8 = FUN_00afba50;
    g_027566e8 = 0;
    ram_00000000027566f0 = 0;
    g_027566f8 = 0;
    ram_0000000002756700 = 0;
    g_02756708 = 0;
    ram_0000000002756710 = 0;
    g_02756718 = 0;
    ram_0000000002756720 = 0;
    g_02756728 = 0;
    ram_0000000002756730 = 0;
    g_02756738 = 0;
    ram_0000000002756740 = 0;
    g_02756748 = 0;
    ram_0000000002756750 = 0;
    g_02756758 = 0;
    ram_0000000002756760 = 0;
    g_02756768 = 0;
    ram_0000000002756770 = 0;
    g_02756778 = 0;
    _ram_0000000002756780 = 0;
    g_02756788 = 0;
    ___cxa_guard_release();
  }
  if (g_02756783 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000a32b0();
    FUN_00afbaa0();
    FUN_00afbd90();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00b3ca40();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



// ============================================================
// 00af1220
// ============================================================
// Function: FUN_00af1220
// Address: 00af1220
// Size: 556 bytes
// Class: GNAudioProcessorView

void FUN_00af1220(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint64_t local_298;
  uint64_t local_290;
  uint64_t local_268;
  
  lVar1 = FUN_00aff000();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_005fe810();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00aff2e0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00c5af10();
    FUN_00e87920(uVar2,0);
    FUN_00c5ce20();
    if (local_268 != 0) {
      FUN_00d50b20();
    }
    if (local_290 != 0) {
      FUN_00d50b20();
    }
    if (local_298 != 0) {
      FUN_00d50b20();
    }
    FUN_00013900();
    FUN_00013900();
  }
  return;
}


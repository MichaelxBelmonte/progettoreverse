// ===================================================================
// MUMultiTrackTracksView — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 0030e7f0
// ============================================================
// Function: FUN_0030e7f0
// Address: 0030e7f0
// Size: 622 bytes
// Class: MUMultiTrackTracksView
// String references:
//   "MUMultiTrackTracksView"

void FUN_0030e7f0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_198;
  int64_t local_190;
  int64_t local_188;
  void*local_40;
  
  if ((g_02701300 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e80c8 = FUN_0006d940();
    g_027e80b0 = "MUMultiTrackTracksView";
    g_027e80b8 = 0x158;
    g_027e80c0 = FUN_002e0580;
    g_027e80d0 = 0;
    ram_00000000027e80d8 = 0;
    g_027e80e0 = 0;
    g_027e8158 = 0;
    ram_00000000027e8160 = 0;
    g_027e8168 = 0;
    g_027e816a = 1;
    g_027e80e8 = 0;
    ram_00000000027e80f0 = 0;
    g_027e80f8 = 0;
    ram_00000000027e8100 = 0;
    g_027e8108 = 0;
    ram_00000000027e8110 = 0;
    g_027e8118 = 0;
    ram_00000000027e8120 = 0;
    g_027e8128 = 0;
    ram_00000000027e8130 = 0;
    g_027e8138 = 0;
    ram_00000000027e8140 = 0;
    g_027e8148 = 0;
    ram_00000000027e8150 = 0;
    g_027e8173 = 0;
    g_027e816b = 0;
    ___cxa_guard_release();
  }
  if (g_027e816b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_40 = (void*)0x0;
    if (1 < g_02802630) {
      local_40 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_0030eba0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01bcae00();
    FUN_00e87920(uVar2,0);
    FUN_01bcadf0();
    if (local_188 != 0) {
      FUN_00d50b20();
    }
    if (local_190 != 0) {
      FUN_00d50b20();
    }
    if (local_198 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_40 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}


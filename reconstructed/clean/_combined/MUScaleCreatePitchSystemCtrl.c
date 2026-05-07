// ===================================================================
// MUScaleCreatePitchSystemCtrl — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 008112f0
// ============================================================
// Function: FUN_008112f0
// Address: 008112f0
// Size: 528 bytes
// Class: MUScaleCreatePitchSystemCtrl
// String references:
//   "MUScaleCreatePitchSystemCtrl"

void FUN_008112f0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_f0;
  int64_t local_e8;
  int64_t local_e0;
  
  if ((g_02737a48 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02737998 = FUN_00842350();
    g_02737980 = "MUScaleCreatePitchSystemCtrl";
    g_02737988 = 0xb8;
    g_02737990 = FUN_008422e0;
    g_027379a0 = 0;
    ram_00000000027379a8 = 0;
    g_027379b0 = 0;
    ram_00000000027379b8 = 0;
    g_027379c0 = 0;
    ram_00000000027379c8 = 0;
    g_027379d0 = 0;
    ram_00000000027379d8 = 0;
    g_027379e0 = 0;
    ram_00000000027379e8 = 0;
    g_027379f0 = 0;
    ram_00000000027379f8 = 0;
    g_02737a00 = 0;
    ram_0000000002737a08 = 0;
    g_02737a10 = 0;
    ram_0000000002737a18 = 0;
    g_02737a20 = 0;
    ram_0000000002737a28 = 0;
    g_02737a30 = 0;
    _ram_0000000002737a38 = 0;
    g_02737a40 = 0;
    ___cxa_guard_release();
  }
  if (g_02737a3b == '\0') {
    FUN_00811d70();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_00842640();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_e0 != 0) {
      FUN_00d50b20();
    }
    if (local_e8 != 0) {
      FUN_00d50b20();
    }
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    FUN_008425a0();
    FUN_008425a0();
  }
  return;
}


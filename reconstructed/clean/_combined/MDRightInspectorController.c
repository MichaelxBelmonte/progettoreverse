// ===================================================================
// MDRightInspectorController — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//                   _sideButton
//                   _upButton
//                   _downButton


// ============================================================
// 000ee1a0
// ============================================================
// Function: FUN_000ee1a0
// Address: 000ee1a0
// Size: 519 bytes
// Class: MDRightInspectorController
// String references:
//   "MDRightInspectorController"
// === MDRightInspectorController properties ===
//                   _sideButton
//                   _upButton
//                   _downButton


void FUN_000ee1a0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_b8;
  int64_t local_b0;
  int64_t local_a8;
  
  if ((g_026df2a8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026df1f8 = FUN_00015ff0();
    g_026df1e0 = "MDRightInspectorController";
    g_026df1e8 = 0x88;
    g_026df1f0 = FUN_000f0460;
    g_026df200 = 0;
    ram_00000000026df208 = 0;
    g_026df210 = 0;
    g_026df288 = 0;
    ram_00000000026df290 = 0;
    g_026df298 = 0;
    g_026df29a = 1;
    g_026df218 = 0;
    ram_00000000026df220 = 0;
    g_026df228 = 0;
    ram_00000000026df230 = 0;
    g_026df238 = 0;
    ram_00000000026df240 = 0;
    g_026df248 = 0;
    ram_00000000026df250 = 0;
    g_026df258 = 0;
    ram_00000000026df260 = 0;
    g_026df268 = 0;
    ram_00000000026df270 = 0;
    g_026df278 = 0;
    ram_00000000026df280 = 0;
    g_026df2a3 = 0;
    g_026df29b = 0;
    ___cxa_guard_release();
  }
  if (g_026df29b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_000f04b0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_0017a660();
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
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}


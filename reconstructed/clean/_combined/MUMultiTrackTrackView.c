// ===================================================================
// MUMultiTrackTrackView — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (4):
//                   _headerViewController
//                   _isSelected
//                   _trackObjectCount
//                   _fader


// ============================================================
// 0030bdf0
// ============================================================
// Function: FUN_0030bdf0
// Address: 0030bdf0
// Size: 510 bytes
// Class: MUMultiTrackTrackView
// String references:
//   "MUMultiTrackTrackView"
// === MUMultiTrackTrackView properties ===
//                   _headerViewController
//                   _isSelected
//                   _trackObjectCount
//                   _fader


void FUN_0030bdf0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_28;
  
  if ((g_02700f70 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e8258 = FUN_0006d940();
    g_027e8240 = "MUMultiTrackTrackView";
    g_027e8248 = 0x140;
    g_027e8250 = FUN_0030c2d0;
    g_027e8260 = 0;
    ram_00000000027e8268 = 0;
    g_027e8270 = 0;
    g_027e82e8 = 0;
    ram_00000000027e82f0 = 0;
    g_027e82f8 = 0;
    g_027e82fa = 1;
    g_027e8278 = 0;
    ram_00000000027e8280 = 0;
    g_027e8288 = 0;
    ram_00000000027e8290 = 0;
    g_027e8298 = 0;
    ram_00000000027e82a0 = 0;
    g_027e82a8 = 0;
    ram_00000000027e82b0 = 0;
    g_027e82b8 = 0;
    ram_00000000027e82c0 = 0;
    g_027e82c8 = 0;
    ram_00000000027e82d0 = 0;
    g_027e82d8 = 0;
    ram_00000000027e82e0 = 0;
    g_027e8303 = 0;
    g_027e82fb = 0;
    ___cxa_guard_release();
  }
  if (g_027e82fb == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000a32b0();
    FUN_0030c320();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}


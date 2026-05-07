// ===================================================================
// MDTempoEditorHelper — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (8):
//                   _pluginPreferences
//                   _obseverTimelineChanged
//                   _rootViewDidBecomeFirstObserver
//                   _scrollTrackToVisible
//                   _previousRunningJobs
//                   _recentDisplayedJobs
//                   _showsPluginWindowResizeView
//                   _progressView


// ============================================================
// 006f0120
// ============================================================
// Function: FUN_006f0120
// Address: 006f0120
// Size: 508 bytes
// Class: MDTempoEditorHelper
// String references:
//   "MDTempoEditorHelper"
// === MDTempoEditorHelper properties ===
//                   _pluginPreferences
//                   _obseverTimelineChanged
//                   _rootViewDidBecomeFirstObserver
//                   _scrollTrackToVisible
//                   _previousRunningJobs
//                   _recentDisplayedJobs
//                   _showsPluginWindowResizeView
//                   _progressView


void FUN_006f0120(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  
  if ((g_02727bc8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02727b18 = FUN_00d4fe50();
    g_02727b00 = "MDTempoEditorHelper";
    g_02727b08 = 0x38;
    g_02727b10 = FUN_00710b70;
    g_02727b20 = 0;
    ram_0000000002727b28 = 0;
    g_02727b30 = 0;
    g_02727ba8 = 0;
    ram_0000000002727bb0 = 0;
    g_02727bb8 = 0;
    g_02727bba = 1;
    g_02727b38 = 0;
    ram_0000000002727b40 = 0;
    g_02727b48 = 0;
    ram_0000000002727b50 = 0;
    g_02727b58 = 0;
    ram_0000000002727b60 = 0;
    g_02727b68 = 0;
    ram_0000000002727b70 = 0;
    g_02727b78 = 0;
    ram_0000000002727b80 = 0;
    g_02727b88 = 0;
    ram_0000000002727b90 = 0;
    g_02727b98 = 0;
    ram_0000000002727ba0 = 0;
    g_02727bc3 = 0;
    g_02727bbb = 0;
    ___cxa_guard_release();
  }
  if (g_02727bbb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00710bc0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_007ef7b0();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}


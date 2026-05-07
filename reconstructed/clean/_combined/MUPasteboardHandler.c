// ===================================================================
// MUPasteboardHandler — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (12):
//                   _drawingLayer
//                   _isResizingDueToExceededBounds
//                   _isUpdatingDisplay
//                   _showsAttackItemAnchors
//                   _hideBackground
//                   _maxAmplitude
//                   _editingFeedbackPitchCenters
//                   _editingFeedbackSeparatorStartTime
//                   _editingFeedbackSeparatorStartTimeElements
//                   _editingFeedbackSeparatorEndTime
//                   _editingFeedbackSeparatorEndTimeElements
//                   _zoomTool


// ============================================================
// 00808f90
// ============================================================
// Function: FUN_00808f90
// Address: 00808f90
// Size: 572 bytes
// Class: MUPasteboardHandler
// String references:
//   "MUPasteboardHandler"
// === MUPasteboardHandler properties ===
//                   _drawingLayer
//                   _isResizingDueToExceededBounds
//                   _isUpdatingDisplay
//                   _showsAttackItemAnchors
//                   _hideBackground
//                   _maxAmplitude
//                   _editingFeedbackPitchCenters
//                   _editingFeedbackSeparatorStartTime
//                   _editingFeedbackSeparatorStartTimeElements
//                   _editingFeedbackSeparatorEndTime
//                   _editingFeedbackSeparatorEndTimeElements
//                   _zoomTool


void FUN_00808f90(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_80;
  int64_t local_78;
  void*puStack_40;
  
  if ((g_02731020 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02730f70 = FUN_00d4fe50();
    g_02730f58 = "MUPasteboardHandler";
    g_02730f60 = 0x40;
    g_02730f68 = FUN_00820870;
    g_02730f78 = 0;
    ram_0000000002730f80 = 0;
    g_02730f88 = 0;
    ram_0000000002730f90 = 0;
    g_02730f98 = 0;
    ram_0000000002730fa0 = 0;
    g_02730fa8 = 0;
    ram_0000000002730fb0 = 0;
    g_02730fb8 = 0;
    ram_0000000002730fc0 = 0;
    g_02730fc8 = 0;
    ram_0000000002730fd0 = 0;
    g_02730fd8 = 0;
    ram_0000000002730fe0 = 0;
    g_02730fe8 = 0;
    ram_0000000002730ff0 = 0;
    g_02730ff8 = 0;
    ram_0000000002731000 = 0;
    g_02731008 = 0;
    _ram_0000000002731010 = 0;
    g_02731018 = 0;
    ___cxa_guard_release();
  }
  if (g_02731013 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    puStack_40 = (void*)0x0;
    if (1 < g_02802630) {
      puStack_40 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puStack_40 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00820940();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_01c928c0();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (puStack_40 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


// Function: FUN_004b40e0
// Address: 004b40e0
// Size: 542 bytes
// Class: MDToolbarLayouter
// String references:
//   "MDToolbarLayouter"
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b40e0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_178;
  void*local_30;
  
  // [STATIC_INIT: property registration]
  if (g_0270953b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_30 = (void*)0x0;
    if (1 < g_02802630) {
      local_30 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_004b5040();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_30 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}


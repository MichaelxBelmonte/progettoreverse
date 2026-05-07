// Function: FUN_008543e0
// Address: 008543e0
// Size: 1012 bytes
// Class: MUScaleSavePanel
// String references:
//   "MUScaleSavePanel"
// === MUScaleSavePanel properties ===
//                   _titleField
//                   _titleLabel
//                   _newFolderButton
//                   _lastSelectedColumnIndex
//                   _lastSelectedRowIndex
//                   _handleSelectCellInProgress
//                   _modeSwitch
//                   _tuningSwitch
//                   _fundamentalSwitch
//                   _pitchSwitch
//                   _stretchingSwitch
//                   _slideRuleSensitiveRects
//                   _slideRuleSensitiveRectsCents
//                   _showRatios
//                   _showAllRatios
//                   _showRatioModeButton


void FUN_008543e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_008469f0();
  *this_ptr = &g_02649a68;
  FUN_00854980();
  FUN_00854c70();
  FUN_00854f60();
  FUN_00855250();
  FUN_00855540();
  FUN_00855830();
  *(void*)(this_ptr + 0x18) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273b573 == '\0') {
    FUN_00855b20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273b573 == '\0') {
    FUN_00855c90();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273b573 == '\0') {
    FUN_00855e00();
    FUN_00e87980();
  }
  FUN_00855f70();
  FUN_00856260();
  FUN_00856550();
  FUN_00856840();
  FUN_00856b30();
  FUN_00856e20();
  return;
}


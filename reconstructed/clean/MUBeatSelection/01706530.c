// Function: FUN_01706530
// Address: 01706530
// Size: 516 bytes
// Class: MUBeatSelection
// String references:
//   "MUBeatSelection"
// === MUBeatSelection properties ===
//                   _selectionIsTemporary
//                   _isResizable
//                   _drawsBottomBorder
//                   _drawsTopBorder
//                   _showsRegionBar
//                   _tempoEditorDelegate
//                   _showsDestinationRegionStart
//                   _destinationRegionStartAlpha
//                   _destinationRegionStart
//                   _currentRegionStart
//                   _selectedSubdivisionIndex
//                   _enabledRegionIndex


void FUN_01706530(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025fa538;
  *(void*)((int64_t)this_ptr + 0xc) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027cb54b == '\0') {
    FUN_01706760();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027cb54b == '\0') {
    FUN_017068f0();
    FUN_00e87980();
  }
  return;
}


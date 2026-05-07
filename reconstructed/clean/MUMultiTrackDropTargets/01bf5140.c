// Function: FUN_01bf5140
// Address: 01bf5140
// Size: 579 bytes
// Class: MUMultiTrackDropTargets
// String references:
//   "MUMultiTrackDropTargets"
// === MUMultiTrackDropTargets properties ===
//                   _documentViewController
//                   _isBeatGrid
//                   _showSecondsToo
//                   _preferenceKey
//                   _displayBeatGrid
//                   _nudgeBeatGrid
//                   _araRulerDisplayBeatGrid
//                   _araRulerDisplaySecondGrid
//                   _displaySecondGrid
//                   _editSecondGrid
//                   _fineTuneGrid
//                   _nudgeSecondGrid
//                   _displayPerformanceTimeMapper


void FUN_01bf5140(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02662c78;
  FUN_01bf53e0();
  FUN_01bf56a0();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e8543 == '\0') {
    FUN_01bf5960();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e8543 == '\0') {
    FUN_01bf5af0();
    FUN_00e87980();
  }
  FUN_01bf5c80();
  return;
}


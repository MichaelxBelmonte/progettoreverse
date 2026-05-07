// Function: FUN_01c8e070
// Address: 01c8e070
// Size: 568 bytes
// Class: MUSignatureEditorRulerView
// String references:
//   "MUSignatureEditorRulerView"
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c8e070(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0266f0a0;
  this_ptr[2] = &g_0266f9c8;
  FUN_01c8e2d0();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ecfc3 == '\0') {
    FUN_01c8e5f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x141) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ecfc3 == '\0') {
    FUN_01c8e780();
    FUN_00e87980();
  }
  return;
}


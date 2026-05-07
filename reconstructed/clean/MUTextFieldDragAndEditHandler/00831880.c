// Function: FUN_00831880
// Address: 00831880
// Size: 600 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUElementPitchInspector"
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_00831880(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_008258e0();
  this_ptr[0x1a] = &g_0264a7b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02654840;
  this_ptr[0x17] = &g_02654f10;
  this_ptr[0x1a] = &g_02654f60;
  FUN_00831bb0();
  FUN_00831ee0();
  FUN_00832210();
  FUN_00832540();
  FUN_00832800();
  FUN_00832ac0();
  *(void*)(this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_02735003 == '\0') {
    FUN_00832d80();
    FUN_00e87980();
  }
  return;
}


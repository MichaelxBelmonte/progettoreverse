// Function: FUN_008308f0
// Address: 008308f0
// Size: 512 bytes
// Class: MUTextFieldDragAndEditHandler
// String references:
//   "MUTextFieldDragAndEditHandler"
//   "MUElementFormantInspector"
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


void FUN_008308f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_008258e0();
  this_ptr[0x1a] = &g_0264a7b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02652f30;
  this_ptr[0x17] = &g_026535f8;
  this_ptr[0x1a] = &g_02653648;
  FUN_00830b50();
  FUN_00830e80();
  *(void*)(this_ptr + 0x1d) = 0;
  // [STATIC_INIT: property registration]
  if (g_02734d43 == '\0') {
    FUN_00831140();
    FUN_00e87980();
  }
  FUN_008312d0();
  return;
}


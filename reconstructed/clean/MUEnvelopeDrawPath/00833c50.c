// Function: FUN_00833c50
// Address: 00833c50
// Size: 1065 bytes
// Class: MUEnvelopeDrawPath
// String references:
//   "MUEnvelopeDrawPath"
// === MUEnvelopeDrawPath properties ===
//                   _envelopeParamsRecDrawPath
//                   _envelopeParamsLastUpdateTime
//                   _feedsbackEnergyClaimFactor
//                   _energyClaimFactor
//                   _isElementEditable
//                   _showsAmplitudeFactorFunctions
//                   _showsSourceTimeForElementTimeFunctions
//                   _showsBarPositions
//                   _currentEnvelopeSquareness
//                   _envelopeSquarenessTarget
//                   _animatingZoomDuration
//                   _animatingZoomStartTime
//                   _animatingZoomStartRect
//                   _animatingZoomSrcTimeRange
//                   _animatingZoomDstTimeRange
//                   _animatingZoomSrcPitchRange


void FUN_00833c50(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02513860;
  FUN_008340c0();
  FUN_00834440();
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027354fb == '\0') {
    FUN_00834770();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027354fb == '\0') {
    FUN_00834900();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_027354fb == '\0') {
    FUN_00834a90();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_027354fb == '\0') {
    FUN_00834c20();
    FUN_00e87980();
  }
  return;
}


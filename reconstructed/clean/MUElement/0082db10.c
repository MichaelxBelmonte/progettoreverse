// Function: FUN_0082db10
// Address: 0082db10
// Size: 1738 bytes
// Class: MUElement
// String references:
//   "bool"
//   "MUElement"
//   "GNPropertyObserver"
//   "MUAudioSourceComponent"
//   "_showsLeftSeparator"
//   "_feedbacksEditing"
//   "_showsLeftDisjoinArrows"
//   "_showsRightDisjoinArrows"
//   "_selected"
//   "_feedbackDisconnected"
//   "_flagsDirty"
//   "GNInt"
// === MUElement properties ===
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


void FUN_0082db10(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0059c6c0();
  this_ptr[0x2d] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026251e0;
  this_ptr[2] = &g_02625b68;
  this_ptr[0x27] = &g_02625ba8;
  this_ptr[0x2d] = &g_02625bd8;
  this_ptr[0x2e] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0x2f] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0x30] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceComponent");
  }
  *(void*)(this_ptr + 0x31) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x189) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18a) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18b) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18c) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x32) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x194) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e630();
    FUN_00e87980();
  }
  return;
}


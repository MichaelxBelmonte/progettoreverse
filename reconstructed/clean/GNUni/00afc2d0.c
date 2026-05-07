// Function: FUN_00afc2d0
// Address: 00afc2d0
// Size: 1989 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNAudioProcessor"
//   "UInt64"
//   "_loadedTargetRingBufferIndex"
//   "_targetRingBufferSize"
//   "_targetRingBufferMask"
//   "_loadedSourceRingBufferIndex"
//   "_sourceRingBufferSize"
//   "_sourceRingBufferMask"
//   "_targetSampleIndex"
//   "_sourceSampleRate"
//   "_targetSampleRate"
//   "_rateFactor"
//   "double"
//   "GNInt"
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


void FUN_00afc2d0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t arg1;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_02547748;
  this_ptr[0x12] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00afcb90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioProcessor");
  }
  this_ptr[0x13] = *(void*)(arg1 + 0x98);
  this_ptr[0x14] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x15) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = *(void*)(arg1 + 0xb0);
  this_ptr[0x17] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x18) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x19] = *(void*)(arg1 + 200);
  this_ptr[0x1a] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1c] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1d] = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1e) = 0;
  lVar2 = FUN_00afc080();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00afcc80();
    FUN_00e87980();
  }
  return;
}


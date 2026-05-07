// Function: FUN_010f3160
// Address: 010f3160
// Size: 2496 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "MUTimeProgressor"
//   "MURenderParameter"
//   "MURenderer"
//   "_nextPerformanceTime"
//   "MUAudioRingBuffer"
//   "_hostRenderSampleIndex"
//   "double"
//   "_renderSampleIndex"
//   "_performanceTime"
//   "_tempoFactor"
//   "_definesPerformanceTime"
//   "_definesRenderSampleIndex"
//   "_definesHostRenderSampleIndex"
//   "_definesTimeProgressor"
//   "_definesRenderParameter"
//   "_definesProcessingOffline"
//   "_audioInputBufferOffset"
//   ... +0 more
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


void FUN_010f3160(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_025d4e88;
  this_ptr[0x12] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010f3c80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010f3d70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeProgressor");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010f3e60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderParameter");
  }
  *(void*)(this_ptr + 0x1a) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd1) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd2) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd3) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd5) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010f3f50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRingBuffer");
  }
  this_ptr[0x1c] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}


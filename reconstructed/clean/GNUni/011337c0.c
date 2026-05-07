// Function: FUN_011337c0
// Address: 011337c0
// Size: 1743 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNSoundFile"
//   "SInt64"
//   "GNCondition"
//   "GNAudioDevice"
//   "MURenderer"
//   "MUAudioRingBuffer"
//   "GNAudioMeterProcessor"
//   "GNThread"
//   "_enquededRenderersPending"
//   "_deviceSampleIndex"
//   "_requestedDeviceSampleIndex"
//   "GNSoundFilePreloadRange"
//   "_isStoppingRenderThread"
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


void FUN_011337c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_005fea00();
  *this_ptr = &g_025d0f20;
  this_ptr[0x12] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  FUN_01134210();
  FUN_011342f0();
  *(void*)(this_ptr + 0x15) = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011343d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioDevice");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011344c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioMeterProcessor");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011345b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioMeterProcessor");
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011346a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRingBuffer");
  }
  this_ptr[0x1c] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134790();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRingBuffer");
  }
  this_ptr[0x1d] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134880();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSoundFile");
  }
  puVar4 = this_ptr + 0x1e;
  this_ptr[0x1e] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134970();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSoundFilePreloadRange");
  }
  this_ptr[0x1f] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134a60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNThread",param_3,param_4,puVar4);
  }
  *(void*)(this_ptr + 0x20) = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x21] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134b50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCondition");
  }
  return;
}


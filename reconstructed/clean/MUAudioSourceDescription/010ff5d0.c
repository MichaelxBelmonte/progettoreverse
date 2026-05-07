// Function: FUN_010ff5d0
// Address: 010ff5d0
// Size: 3187 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "float"
//   "GNFraction"
//   "MUFunction"
//   "MUAudioSourceComponent"
//   "_sampleCount"
//   "MUAudioSourceDescription"
//   "_energyClaimFactor"
//   "MUAudioSourceItem"
//   "MUPulseAssignmentTarget"
//   "_audioSourceItem"
//   "GNInt"
//   "_startSampleIndex"
//   "_signalEndSampleOffset"
//   "_signalStartSampleOffset"
//   "MUDecomposedAudioSignal"
//   "_owners"
//   "_pitchCenter"
//   ... +9 more
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_010ff5d0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025c7fc8;
  this_ptr[7] = &g_025eefe0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025e6748;
  this_ptr[7] = &g_025e6ba8;
  this_ptr[8] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100450();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100540();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  this_ptr[10] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100630();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xe] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100720();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_owners";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDecomposedAudioSignal");
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x11] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100810();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  *(void*)(this_ptr + 0x12) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0x100000000;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0x100000000;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x15) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xad) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100900();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_rightAdjacentItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  this_ptr[0x17] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011009f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_leftAdjacentItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  this_ptr[0x18] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100ae0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  return;
}


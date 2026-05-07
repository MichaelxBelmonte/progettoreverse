// Function: FUN_005b1e40
// Address: 005b1e40
// Size: 5742 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "_documentControllers"
//   "MDNotificationObserver"
//   "GNList"
//   "GNPlugInHostDocument"
//   "GNData"
//   "GNOperationProgressObserver"
//   "GNDate"
//   "GNJob"
//   "GNJobCompletionController"
//   "MUTrack"
//   "MDDocument"
//   "MDPropertyObserver"
//   "GNHeartbeatHandler"
//   "GNPropertyObserver"
//   "MDTimeGridSetter"
//   "MUPerformanceRenderer"
//   "MUAudioSourceDescription"
//   "MDMetaDocumentController"
//   ... +25 more
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


void FUN_005b1e40(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_005b1650();
  *this_ptr = &g_024ff828;
  this_ptr[9] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[10] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xb] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0250c388;
  this_ptr[9] = &g_0250c9e8;
  this_ptr[10] = &g_0250ca38;
  this_ptr[0xb] = &g_0250ca68;
  FUN_005b3d30();
  FUN_005b3e10();
  this_ptr[0xe] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b3ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPlaybackController");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b3fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocument");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b40d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_documentControllers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMetaDocumentController");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b41c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPlugInHostDocument");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b42b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformanceRenderer");
  }
  puVar4 = this_ptr + 0x13;
  this_ptr[0x13] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b43a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderParameter");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDisplayPerformanceTimeMapper",param_3,param_4,puVar4);
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTimeGridSetter");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURelativeTimeProgressor");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDate");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNData");
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_005b4940();
  FUN_005b4a20();
  *(void*)(this_ptr + 0x1c) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1d] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x1e] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x1f] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x20] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x21] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4ec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  this_ptr[0x22] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x23] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b50a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  this_ptr[0x24] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5190();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNJob");
  }
  this_ptr[0x25] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5280();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNJobCompletionController");
  }
  this_ptr[0x26] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUJobCompletionLock");
  }
  this_ptr[0x27] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUJobCompletionLock");
  }
  this_ptr[0x28] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  this_ptr[0x29] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDRecordingAmplitudeAnalyzer");
  }
  this_ptr[0x2a] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5730();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  *(void*)(this_ptr + 0x2b) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x159) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x2c] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2d) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x169) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2e) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x171) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x172) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x174) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2f) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x179) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_005b5820();
  FUN_005b5900();
  FUN_005b59e0();
  this_ptr[0x33] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5ac0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDViewSettings");
  }
  this_ptr[0x34] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5bb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDEditorDescription");
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5ca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  this_ptr[0x36] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5d90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription");
  }
  return;
}


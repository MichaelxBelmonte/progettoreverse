// ===================================================================
// MUAraDocumentController — Complete reconstructed pseudocode
// 24 functions
// ===================================================================

// Registered properties (40):
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   bool            _realtimeStretchingEnabled
//   bool            _enquededAuxiliaryRenderersPending
//   GNDoubleRange   _hostSelectedVisibleRange
//   bool            _isPlaybackRenderer
//   bool            _isEditorRenderer
//   bool            _isEditorView
//   bool            _doUpdateCycle
//   bool            _archiveIsPotentiallyUnstable
//   bool            _mustSyncPitchSystemsAfterImportingPreM41Archive
//   bool            _isUnstable


// ============================================================
// 006024d0
// ============================================================
// Function: FUN_006024d0
// Address: 006024d0
// Size: 10476 bytes
// Class: MUAraDocumentController
// String references:
//   "bool"
//   "GNFilePath"
//   "MDNotificationObserver"
//   "GNList"
//   "_processor"
//   "SInt64"
//   "MUAraDocumentController"
//   "_isPlaybackRenderer"
//   "_isEditorRenderer"
//   "_isEditorView"
//   "MUAraAudioPlaybackRegion"
//   "MUTimeProgressor"
//   "float"
//   "SInt32"
//   "MDMetaWindowController"
//   "MUTrack"
//   "MDDocumentController"
//   "GNHeartbeatHandler"
//   "MUPerformanceRenderer"
//   "MDPluginDocument"
//   ... +48 more
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_006024d0(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_005fea00();
  this_ptr[0x12] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x13] = &g_02506130;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02501518;
  pcVar3 = &g_02501b50;
  this_ptr[0x12] = &g_02501b50;
  this_ptr[0x13] = &g_02501b80;
  *(void*)(this_ptr + 0x14) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackPreloadRange");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackPreloadRange");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackPreloadRange");
  }
  this_ptr[0x1c] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackPreloadRange");
  }
  this_ptr[0x1d] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605d50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformanceRenderer");
  }
  this_ptr[0x1e] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605e40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeProgressor");
  }
  this_ptr[0x1f] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x20] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605f30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRingBuffer");
  }
  this_ptr[0x21] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentController");
  }
  this_ptr[0x22] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606110();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginDocument");
  }
  _memcpy(pcVar3,section_00000108.segname + 8,param_3);
  *(void*)(this_ptr + 0x47) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x48] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x49) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x249) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24a) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24b) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24c) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24d) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24e) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24f) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4a] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4b] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4c] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4d] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4e] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4f] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606200();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformanceRenderer");
  }
  this_ptr[0x50] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006062f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScrubbingTimeProgressor");
  }
  this_ptr[0x51] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006063e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPlaybackRequest");
  }
  *(void*)(this_ptr + 0x52) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x53] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006064d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeJump");
  }
  *(void*)(this_ptr + 0x54) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x55] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006065c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderSliceTimeContext");
  }
  this_ptr[0x56] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006066b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderSliceTimeContext");
  }
  FUN_006067a0();
  *(void*)(this_ptr + 0x58) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x59] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x5a) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2d1) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2d2) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00606880();
  *(void*)(this_ptr + 0x5c) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2e4) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2e5) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2e6) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x5d] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606960();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  this_ptr[0x5e] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606a50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNConcurrentQueue");
  }
  this_ptr[0x5f] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606b40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNConcurrentQueue");
  }
  this_ptr[0x60] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606c30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_processor";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMetaWindowController");
  }
  this_ptr[0x61] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606d20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraDocumentController");
  }
  this_ptr[0x62] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606e10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraAudioPlaybackRegion");
  }
  this_ptr[99] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606f00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraAudioPlaybackRegion");
  }
  this_ptr[100] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606ff0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  this_ptr[0x65] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006070e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  this_ptr[0x66] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006071d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  this_ptr[0x67] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006072c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  this_ptr[0x68] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006073b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  this_ptr[0x69] = 0;
  this_ptr[0x6a] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x6b) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x359) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x35a) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x6c] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006074a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDAraPluginDocument");
  }
  this_ptr[0x6d] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  *(void*)(this_ptr + 0x6e) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x371) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x6f] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x70] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x71] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x72] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x73] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607a40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x74] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607b30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x75] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  return;
}



// ============================================================
// 016adf20
// ============================================================
// Function: FUN_016adf20
// Address: 016adf20
// Size: 1340 bytes
// Class: MUAraDocumentController
// String references:
//   "MUAraDocumentController"
//   "hostInstance != NULL"
//   "hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize"
//   "hostInstance->audioAccessControllerInterface != NULL"
//   "hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterface...
//   "hostInstance->archivingControllerInterface != NULL"
//   "hostInstance->archivingControllerInterface->structSize >= ARA_IMPLEMENTED_STRUCT_SIZE(ARAArchivingC...
//   "hostInstance->archivingControllerInterface->structSize >= ARA::kARAArchivingControllerInterfaceMinS...
//   "hostInstance->contentAccessControllerInterface->structSize >= ARA::kARAContentAccessControllerInter...
//   "hostInstance->modelUpdateControllerInterface->structSize >= ARA::kARAModelUpdateControllerInterface...
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


uint64_t FUN_016adf20(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *this_ptr;
  uint32_t uVar7;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar7 = FUN_00da7190();
  if (this_ptr == (uint64_t *)0x0) {
    if (g_02802f60 != (void*)0x0) {
      uVar6 = 0;
      if (*g_02802f60 != 0x0) {
        (**g_02802f60)(uVar7,"hostInstance != NULL");
        uVar6 = 0;
      }
      goto LAB_016ae19b;
    }
  }
  else if (*this_ptr < 0x58) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)
                (uVar7,"hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize")
      ;
    }
  }
  else if ((uint64_t *)this_ptr[2] == (uint64_t *)0x0) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar7,"hostInstance->audioAccessControllerInterface != NULL");
    }
  }
  else if (*(uint64_t *)this_ptr[2] < 0x20) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)
                (uVar7,
                 "hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterfaceMinSize"
                );
    }
  }
  else if ((uint64_t *)this_ptr[4] == (uint64_t *)0x0) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar7,"hostInstance->archivingControllerInterface != NULL");
    }
  }
  else {
    iVar4 = 0;
    if (g_027cb0f0 != -1) {
      iVar4 = g_027cb0f0;
    }
    uVar1 = *(uint64_t *)this_ptr[4];
    if (iVar4 < 4) {
      if (0x2f < uVar1) goto LAB_016ae0c6;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA::kARAArchivingControllerInterfaceMinSize"
                  );
      }
    }
    else if (uVar1 < 0x38) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA_IMPLEMENTED_STRUCT_SIZE(ARAArchivingControllerInterface, getDocumentArchiveID)"
                  );
      }
    }
    else {
LAB_016ae0c6:
      if (((uint64_t *)this_ptr[6] == (uint64_t *)0x0) || (0x4f < *(uint64_t *)this_ptr[6])) {
        if (((uint64_t *)this_ptr[8] == (uint64_t *)0x0) || (0x1f < *(uint64_t *)this_ptr[8]))
        {
          if (iVar4 - 2U < 5) {
            if ((g_028ad840 == 0) || (g_028ad849 == '\0')) {
              FUN_00e8cb50();
              if (g_028ad840 == 0) {
                if ((g_027cb3b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                  g_027cb300 = FUN_00d4fe50();
                  g_027cb2e8 = "MUAraDocumentController";
                  g_027cb2f0 = 0x80;
                  g_027cb2f8 = FUN_016be860;
                  g_027cb308 = 0;
                  ram_00000000027cb310 = 0;
                  g_027cb318 = 0;
                  g_027cb390 = 0;
                  ram_00000000027cb398 = 0;
                  g_027cb3a0 = 0;
                  g_027cb3a2 = 1;
                  g_027cb320 = 0;
                  ram_00000000027cb328 = 0;
                  g_027cb330 = 0;
                  ram_00000000027cb338 = 0;
                  g_027cb340 = 0;
                  ram_00000000027cb348 = 0;
                  g_027cb350 = 0;
                  ram_00000000027cb358 = 0;
                  g_027cb360 = 0;
                  ram_00000000027cb368 = 0;
                  g_027cb370 = 0;
                  ram_00000000027cb378 = 0;
                  g_027cb380 = 0;
                  ram_00000000027cb388 = 0;
                  g_027cb3ab = 0;
                  g_027cb3a3 = 0;
                  ___cxa_guard_release();
                }
                lVar5 = FUN_00e86210();
                lVar2 = g_028ad840;
                if (g_028ad840 != lVar5) {
                  if (lVar5 != 0) {
                    FUN_00d50b00();
                  }
                  g_028ad840 = lVar5;
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                }
                if ((lVar5 != 0) && (g_028ad848 == '\0')) {
                  g_028ad848 = '\x01';
                  FUN_00e8cb90();
                }
                g_028ad849 = '\x01';
                FUN_00e8cb70();
              }
              else {
                g_028ad849 = '\x01';
                FUN_00e8cb70();
              }
            }
            FUN_00c811e0();
            plVar3 = local_40;
            if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar7 = (**(code **)(*plVar3 + 0x18))();
            FUN_0167a4d0(uVar7,&g_025f9ff0);
            FUN_0167b270();
            FUN_016b0100();
            FUN_0167b310();
            local_38 = '\0';
            local_40 = plVar3;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d403d0();
            lVar2 = g_026fb7d8;
            if (g_026fb7d8 != 0) {
              FUN_00d50b00();
            }
            local_60 = plVar3;
            local_58 = '\0';
            local_50 = 0;
            local_48 = '\0';
            FUN_00d40470(&local_50,&local_60,1,3);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar6 = FUN_0167aaf0();
            FUN_00d50b20();
            goto LAB_016ae19b;
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
                    (uVar1,
                     "hostInstance->modelUpdateControllerInterface->structSize >= ARA::kARAModelUpdateControllerInterfaceMinSize"
                    );
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)
                  (uVar1,
                   "hostInstance->contentAccessControllerInterface->structSize >= ARA::kARAContentAccessControllerInterfaceMinSize"
                  );
      }
    }
  }
  uVar6 = 0;
LAB_016ae19b:
  FUN_00da71b0();
  return uVar6;
}



// ============================================================
// 016b08f0
// ============================================================
// Function: FUN_016b08f0
// Address: 016b08f0
// Size: 1708 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->getDocumentRoot()->getAudioSources()->getCount() == 0"
//   "documentController->getDocumentRoot()->getAudioModifications()->getCount() == 0"
//   "documentController->getDocumentRoot()->getMusicalContexts()->getCount() == 0"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b08f0(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  char *pcVar5;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t in_stack_ffffffffffffffc0;
  char local_38 [16];
  char local_28 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537d40();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537d40();
        FUN_00d23310();
        param_1 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537fd0();
      pVar4 = (void*)param_1;
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537fd0();
        FUN_00d23310();
        pVar4 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ab0();
        FUN_00d23310();
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01689520();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_01689520();
        FUN_00d23310();
        pcVar5 = &local_70;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_70 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
        if ((local_70 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = g_027cb138;
      if (g_027cb138 != 0) {
        FUN_00d50b00();
      }
      local_90 = 0;
      local_88 = '\0';
      FUN_00d40470(&local_90,&stack0xffffffffffffff60,1,3);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      FUN_00d23f50();
      if ((local_38[0] != '\0') && (this_ptr != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50130();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b2af0
// ============================================================
// Function: FUN_016b2af0
// Address: 016b2af0
// Size: 1369 bytes
// Class: MUAraDocumentController
// String references:
//   "properties != NULL"
//   "properties->structSize >= ARA::kARAAudioSourcePropertiesMinSize"
//   "persistentID != NULL"
//   "gn_strlen(persistentID) > 0"
//   "sampleRate > 10.0"
//   "sampleCount > 1"
//   "properties->channelCount > 0"
//   "false && \"channel layout information uses wrong Companion API\""
//   "!ARA_IMPLEMENTS_FIELD(properties, ARAAudioSourceProperties, channelArrangementDataType)"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b2af0(uint64_t param_1)

{
  double dVar1;
  uint64_t uVar2;
  int iVar3;
  void *pvVar4;
  code *UNRECOVERED_JUMPTABLE;
  int64_t lVar5;
  void* pVar6;
  void* pVar7;
  char *pcVar8;
  uint64_t *arg1;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  if (arg1 == (uint64_t *)0x0) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar8 = "properties != NULL";
LAB_016b2be8:
                                            (*UNRECOVERED_JUMPTABLE)(param_1,pcVar8);
    return;
  }
  if (*arg1 < 0x30) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar8 = "properties->structSize >= ARA::kARAAudioSourcePropertiesMinSize";
    goto LAB_016b2be8;
  }
  uVar2 = arg1[1];
  pvVar4 = _pthread_getspecific((void*)param_1);
  pVar6 = (void*)param_1;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar2 == 0) {
    local_38 = '\0';
    local_40 = 0;
LAB_016b2c08:
    local_50 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_016b2c08;
      FUN_00d50b00();
      local_50 = local_40;
    }
    else {
      local_50 = local_40;
      local_38 = '\0';
    }
  }
  uVar9 = FUN_01667bd0();
  if (local_50 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar2 = arg1[2];
  if (((uVar2 == 0) && (g_02802f60 != (int64_t *)0x0)) && (*g_02802f60 != 0x0))
  {
    (**g_02802f60)(uVar9,"persistentID != NULL");
  }
  iVar3 = FUN_00e7dde0();
  if (((iVar3 < 1) && (g_02802f60 != (int64_t *)0x0)) && (*g_02802f60 != 0x0))
  {
    (**g_02802f60)(extraout_XMM0_Qa,"gn_strlen(persistentID) > 0");
  }
  if ((uVar2 == 0) || (iVar3 = FUN_00e7dde0(), iVar3 < 1)) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01733bc0();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d91a70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01733bc0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  dVar1 = (double)arg1[4];
  if (((dVar1 <= g_0241eeb8) && (g_02802f60 != (int64_t *)0x0)) &&
     (*g_02802f60 != 0x0)) {
    (**g_02802f60)(dVar1,"sampleRate > 10.0");
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01666d20(dVar1);
  if ((((int64_t)arg1[3] < 2) && (g_02802f60 != (int64_t *)0x0)) &&
     (*g_02802f60 != 0x0)) {
    (**g_02802f60)(uVar9,"sampleCount > 1");
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01666df0();
  if ((((int)arg1[5] < 1) && (g_02802f60 != (int64_t *)0x0)) &&
     (*g_02802f60 != 0x0)) {
    uVar9 = (**g_02802f60)(uVar9,"properties->channelCount > 0");
  }
  if (*arg1 < 0x35) {
    pVar7 = 0;
    if (0x30 < *arg1) {
      if (g_02802f60 == (int64_t *)0x0) {
        return;
      }
      if (*g_02802f60 == 0x0) {
        return;
      }
      (**g_02802f60)
                (0,
                 "!ARA_IMPLEMENTS_FIELD(properties, ARAAudioSourceProperties, channelArrangementDataType)"
                );
      return;
    }
    goto switchD_016b2f1a_caseD_0;
  }
  pVar7 = 0x16b3160;
  switch((int)arg1[6]) {
  case 0:
    goto switchD_016b2f1a_caseD_0;
  case 1:
    pVar7 = 0x16b3160;
    break;
  case 2:
    pVar7 = 0x16b3160;
    lVar5 = FUN_00bce6e0();
    if (lVar5 != 0) goto switchD_016b2f1a_caseD_0;
    break;
  case 3:
    pVar7 = 0x16b3160;
    break;
  default:
    pVar7 = pVar6;
    if ((g_02802f60 != (int64_t *)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)
                (uVar9,"false && \"channel layout information uses wrong Companion API\"");
    }
    goto switchD_016b2f1a_caseD_0;
  }
  FUN_00bce6e0();
switchD_016b2f1a_caseD_0:
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016b29c0();
  FUN_01666ee0();
  return;
}



// ============================================================
// 016af970
// ============================================================
// Function: FUN_016af970
// Address: 016af970
// Size: 1313 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "!documentController->isHostEditingDocument()"
//   "documentController->getContentReaders()->getCount() == 0"
//   "audioSource->getDocumentController() == documentController"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


uint32_t FUN_016af970(void*param_1,int64_t param_2,void*param_3)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  void*puVar6;
  char *pcVar7;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int local_60;
  uint32_t uStack_5c;
  char local_58;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  puVar6 = param_1;
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        uVar2 = 0;
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        FUN_01689520();
        pVar5 = (void*)puVar6;
        if (*(int *)(CONCAT44(uStack_5c,local_60) + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar5 = (void*)CONCAT71((int7)((uint64_t)puVar6 >> 8),local_48[0]);
          pcVar7 = local_38;
          if (local_48[0] != '\0') {
            pcVar7 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar7 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
          FUN_00d50b20();
        }
        if ((param_2 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          uVar2 = 0;
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == this_ptr) {
            g_02802f48 = g_02802f48 + 1;
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670b0();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124df10();
            if (local_48[0] == '\0') {
              if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01733b90();
            if (((local_48[0] == '\0') && (local_50 != 0)) &&
               ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != 0)))) {
              FUN_00d50b20();
            }
            FUN_012e16c0();
            if (local_48[0] == '\0') {
              if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            uVar2 = FUN_01684310();
            lVar4 = FUN_000030c0();
            *param_1 = *(void*)(lVar4 + (int64_t)local_60 * 8);
            *param_3 = 0;
            g_02802f48 = g_02802f48 + -1;
            if (local_50 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
          else {
            uVar2 = 0;
            if ((g_02802f60 != (void*)0x0) &&
               (uVar2 = 0, *g_02802f60 != 0x0)) {
              (**g_02802f60)();
            }
          }
        }
      }
      else {
        uVar2 = 0;
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
          uVar2 = 0;
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}



// ============================================================
// 016b4010
// ============================================================
// Function: FUN_016b4010
// Address: 016b4010
// Size: 1064 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
//   "audioModification->isDeactivatedForUndoHistory()"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b4010(void* param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60 [16];
  int local_50;
  uint64_t local_4c;
  char local_38 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_88 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_60[0]);
          pcVar4 = local_38;
          if (local_60[0] != '\0') {
            pcVar4 = local_60;
          }
          local_38[0] = local_60[0];
          *pcVar4 = '\0';
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 == this_ptr) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar2 = FUN_016670a0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01667050();
            if ((param_2 == 0 & (bVar2 ^ 1)) == 0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016678c0();
              if (local_60[0] == '\0') {
                if (local_68 == 0) goto LAB_016b41a8;
                FUN_00d50b00();
                if ((local_60[0] != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_68 == 0) goto LAB_016b41a8;
              local_60[0] = '\0';
              local_4c = 0;
              iVar5 = 0;
              do {
                local_50 = iVar5;
                if (*(int *)(local_68 + 0xc) <= iVar5) {
                  FUN_0049cc10();
                  FUN_00d50b20();
                  goto LAB_016b41a8;
                }
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar1 = FUN_01650890();
                iVar5 = iVar5 + 1;
              } while (cVar1 != '\0');
              if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
                (**g_02802f60)();
              }
              FUN_0049cc10();
              FUN_00d50b20();
            }
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
LAB_016b41a8:
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b38f0
// ============================================================
// Function: FUN_016b38f0
// Address: 016b38f0
// Size: 835 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b38f0(void* param_1,void*param_2)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), uVar4 = extraout_XMM0_Qa, cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
                    (extraout_XMM0_Qa_01,"documentController->isHostEditingDocument()");
        }
      }
      else {
        uVar4 = FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          uVar4 = FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar3 = local_38;
          if (local_48[0] != '\0') {
            pcVar3 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar3 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            uVar4 = (**g_02802f60)
                              (uVar4,"documentController->getContentReaders()->getCount() == 0");
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            uVar4 = FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_0166db10(), uVar4 = extraout_XMM0_Qa_02, cVar1 == '\0')
           ) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)(uVar4,"provided object ref is invalid");
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = FUN_01660830();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if (local_50 == this_ptr) {
            if (param_2 == (void*)0x0) {
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar4 = FUN_01666eb0();
              FUN_01668800(0,uVar4);
            }
            else {
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01668800(*param_2,param_2[1]);
            }
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)
                      (uVar4,"audioSource->getDocumentController() == documentController");
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b4550
// ============================================================
// Function: FUN_016b4550
// Address: 016b4550
// Size: 1004 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
//   "audioSource->getAudioModifications()->getCount() == 0"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b4550(void* param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this_ptr) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660c60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016678c0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537ea0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          FUN_0168a050();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
              (**g_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
                (**g_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b24e0
// ============================================================
// Function: FUN_016b24e0
// Address: 016b24e0
// Size: 943 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "musicalContext->getDocumentController() == documentController"
//   "musicalContext->getRegionSequences()->getCount() == 0"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b24e0(void* param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_01713980(), cVar2 == '\0')) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f550();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this_ptr) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01713cc0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537c10();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
              (**g_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
                (**g_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b2150
// ============================================================
// Function: FUN_016b2150
// Address: 016b2150
// Size: 738 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "musicalContext->getDocumentController() == documentController"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b2150(uint64_t param_1)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  uint64_t uVar4;
  char *pcVar5;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = param_1;
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        FUN_01689520();
        pVar3 = (void*)uVar4;
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar3 = (void*)CONCAT71((int7)(uVar4 >> 8),local_48[0]);
          pcVar5 = local_38;
          if (local_48[0] != '\0') {
            pcVar5 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar5 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_01713980(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0170f550();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == this_ptr) {
            if ((~(uint)param_1 & 0x1c) != 0) {
              pvVar2 = _pthread_getspecific(pVar3);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0170d420((param_1 & 0x10) == 0,(param_1 & 8) == 0,0);
            }
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b19d0
// ============================================================
// Function: FUN_016b19d0
// Address: 016b19d0
// Size: 740 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


int64_t * FUN_016b19d0(void* param_1)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        plVar2 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
          plVar2 = (int64_t *)0x0;
        }
        goto LAB_016b1b79;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_90 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar4 = local_38;
          if (local_48[0] != '\0') {
            pcVar4 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        plVar2 = (int64_t *)FUN_00e8fc40();
        FUN_00274a00();
        (**(code **)(*plVar2 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170cec0();
        FUN_016b1510();
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ae0();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_016b1b79;
      }
      if (g_02802f60 != (void*)0x0) {
        plVar2 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b1b79;
      }
    }
  }
  plVar2 = (int64_t *)0x0;
LAB_016b1b79:
  FUN_00da71b0();
  return plVar2;
}



// ============================================================
// 016b3170
// ============================================================
// Function: FUN_016b3170
// Address: 016b3170
// Size: 740 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


int64_t * FUN_016b3170(void* param_1)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        plVar2 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
          plVar2 = (int64_t *)0x0;
        }
        goto LAB_016b3319;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_90 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar4 = local_38;
          if (local_48[0] != '\0') {
            pcVar4 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        plVar2 = (int64_t *)FUN_00e8fc40();
        FUN_0049c930();
        (**(code **)(*plVar2 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016607b0();
        FUN_016b2af0();
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537d70();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_016b3319;
      }
      if (g_02802f60 != (void*)0x0) {
        plVar2 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b3319;
      }
    }
  }
  plVar2 = (int64_t *)0x0;
LAB_016b3319:
  FUN_00da71b0();
  return plVar2;
}



// ============================================================
// 016b1510
// ============================================================
// Function: FUN_016b1510
// Address: 016b1510
// Size: 913 bytes
// Class: MUAraDocumentController
// String references:
//   "properties != NULL"
//   "properties->structSize >= ARA::kARAMusicalContextPropertiesMinSize"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b1510(void* param_1)

{
  uint64_t uVar1;
  void*puVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  uint64_t *arg1;
  int64_t local_38;
  char local_30;
  
  if (arg1 == (uint64_t *)0x0) {
    if ((g_02802f60 != (int64_t *)0x0) &&
       (UNRECOVERED_JUMPTABLE = *g_02802f60, UNRECOVERED_JUMPTABLE != 0x0)) {
      pcVar4 = "properties != NULL";
LAB_016b1613:
                                              (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
      return;
    }
  }
  else if (*arg1 < 8) {
    if ((g_02802f60 != (int64_t *)0x0) &&
       (UNRECOVERED_JUMPTABLE = *g_02802f60, UNRECOVERED_JUMPTABLE != 0x0)) {
      pcVar4 = "properties->structSize >= ARA::kARAMusicalContextPropertiesMinSize";
      goto LAB_016b1613;
    }
  }
  else {
    if ((*arg1 == 8) || (arg1[1] == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f5a0();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d93290();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_0170f5a0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((*arg1 < 9) || (arg1[1] == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f690();
      uVar1 = *arg1;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f690();
      uVar1 = *arg1;
    }
    if ((uVar1 < 0x15) || (*(int64_t *)((int64_t)arg1 + 0x14) == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f710();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar2 = *(void**)((int64_t)arg1 + 0x14);
      FUN_01cfbee0(*puVar2,puVar2[1],puVar2[2]);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_0170f710();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 016b1e00
// ============================================================
// Function: FUN_016b1e00
// Address: 016b1e00
// Size: 660 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "musicalContext->getDocumentController() == documentController"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b1e00(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_01713980(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0170f550();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == this_ptr) {
            FUN_016b1510();
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016b35a0
// ============================================================
// Function: FUN_016b35a0
// Address: 016b35a0
// Size: 660 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b35a0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == this_ptr) {
            FUN_016b2af0();
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016a5910
// ============================================================
// Function: FUN_016a5910
// Address: 016a5910
// Size: 691 bytes
// Class: MUAraDocumentController
// String references:
//   "bool"
//   "MUAraMusicalContext"
//   "MUAraAudioSource"
//   "MUAraAudioModification"
//   "_isUnstable"
//   "MUAraDocumentData"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016a5910(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  void*puVar11;
  
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
  *this_ptr = &g_025ee8e8;
  this_ptr[7] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5d30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraDocumentData");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5e20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContext");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5f10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioSource");
  }
  puVar11 = this_ptr + 10;
  this_ptr[10] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a6000();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioModification",param_3,param_4,puVar11);
  }
  FUN_016a60f0();
  FUN_016a61d0();
  FUN_016a62b0();
  FUN_016a6390();
  *(void*)(this_ptr + 0xf) = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 016b4a70
// ============================================================
// Function: FUN_016b4a70
// Address: 016b4a70
// Size: 795 bytes
// Class: MUAraDocumentController
// String references:
//   "properties != NULL"
//   "persistentID != NULL"
//   "gn_strlen(persistentID) > 0"
//   "properties->structSize >= ARA::kARAAudioModificationPropertiesMinSize"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b4a70(void* param_1)

{
  uint64_t uVar1;
  int iVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  uint64_t *arg1;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  if (arg1 == (uint64_t *)0x0) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar4 = "properties != NULL";
LAB_016b4b68:
                                            (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
    return;
  }
  if (*arg1 < 0x18) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar4 = "properties->structSize >= ARA::kARAAudioModificationPropertiesMinSize";
    goto LAB_016b4b68;
  }
  uVar1 = arg1[1];
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar1 == 0) {
    local_38 = '\0';
    local_40 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 != '\0') {
      local_50 = local_40;
      local_38 = '\0';
      goto LAB_016b4ba2;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
      local_50 = local_40;
      goto LAB_016b4ba2;
    }
  }
  local_50 = 0;
LAB_016b4ba2:
  FUN_01650680();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = arg1[2];
  if (((uVar1 == 0) && (g_02802f60 != (int64_t *)0x0)) && (*g_02802f60 != 0x0))
  {
    (**g_02802f60)();
  }
  iVar2 = FUN_00e7dde0();
  if (((iVar2 < 1) && (g_02802f60 != (int64_t *)0x0)) && (*g_02802f60 != 0x0))
  {
    (**g_02802f60)();
  }
  if ((uVar1 == 0) || (iVar2 = FUN_00e7dde0(), iVar2 < 1)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01733bc0();
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d91a70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01733bc0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 016b3ce0
// ============================================================
// Function: FUN_016b3ce0
// Address: 016b3ce0
// Size: 646 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "audioSource->getDocumentController() == documentController"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b3ce0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      FUN_01689520();
      if (*(int *)(local_70 + 0xc) != 0) {
        FUN_01689520();
        FUN_00d23310();
        param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
        pcVar3 = local_38;
        if (local_48[0] != '\0') {
          pcVar3 = local_48;
        }
        local_38[0] = local_48[0];
        *pcVar3 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660830();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == this_ptr) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660c60();
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016af230
// ============================================================
// Function: FUN_016af230
// Address: 016af230
// Size: 553 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


uint8_t FUN_016af230(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  uint8_t uVar2;
  char *pcVar3;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        uVar2 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016af3ee;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_78 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_016841e0();
        if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar2 = FUN_0167bc80(param_2);
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        goto LAB_016af3ee;
      }
      if (g_02802f60 != (void*)0x0) {
        uVar2 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016af3ee;
      }
    }
  }
  uVar2 = 0;
LAB_016af3ee:
  FUN_00da71b0();
  return uVar2;
}



// ============================================================
// 016aeee0
// ============================================================
// Function: FUN_016aeee0
// Address: 016aeee0
// Size: 560 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


uint8_t FUN_016aeee0(void)

{
  char cVar1;
  uint8_t uVar2;
  char *pcVar3;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        uVar2 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016af0a5;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_78 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_016841e0();
        if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar2 = FUN_0167bc80(0);
        FUN_0167b310();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        goto LAB_016af0a5;
      }
      if (g_02802f60 != (void*)0x0) {
        uVar2 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016af0a5;
      }
    }
  }
  uVar2 = 0;
LAB_016af0a5:
  FUN_00da71b0();
  return uVar2;
}



// ============================================================
// 016af570
// ============================================================
// Function: FUN_016af570
// Address: 016af570
// Size: 558 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "!documentController->isHostEditingDocument()"
//   "documentController->getContentReaders()->getCount() == 0"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


uint32_t FUN_016af570(void)

{
  code *pcVar1;
  char cVar2;
  uint32_t uVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38 [8];
  char local_30 [8];
  
  if ((this_ptr != 0) && (cVar2 = FUN_0168a120(), cVar2 != '\0')) {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (g_02802f60 == (void*)0x0) {
        return 0;
      }
      pcVar1 = *g_02802f60;
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar4 = local_30;
          if (local_38[0] != '\0') {
            pcVar4 = local_38;
          }
          local_30[0] = local_38[0];
          *pcVar4 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        g_02802f48 = g_02802f48 + 1;
        FUN_01682950();
        if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != 0)) {
          FUN_00d50b20();
        }
        g_02802f48 = g_02802f48 + -1;
        uVar3 = FUN_01684310();
        if (local_40 == 0) {
          return uVar3;
        }
        FUN_00d50b20();
        return uVar3;
      }
      if (g_02802f60 == (void*)0x0) {
        return 0;
      }
      pcVar1 = *g_02802f60;
    }
    if (pcVar1 != 0x0) {
      (*pcVar1)();
    }
    return 0;
  }
  if (g_02802f60 == (void*)0x0) {
    return 0;
  }
  if (*g_02802f60 == 0x0) {
    return 0;
  }
  (**g_02802f60)();
  return 0;
}



// ============================================================
// 016b0100
// ============================================================
// Function: FUN_016b0100
// Address: 016b0100
// Size: 589 bytes
// Class: MUAraDocumentController
// String references:
//   "properties != NULL"
//   "properties->structSize >= ARA::kARADocumentPropertiesMinSize"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016b0100(void* param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  int iVar6;
  uint64_t *arg1;
  int64_t local_60;
  char local_58;
  int64_t local_38;
  
  lVar2 = local_60;
  if (arg1 == (uint64_t *)0x0) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar5 = "properties != NULL";
LAB_016b0211:
                                            (*UNRECOVERED_JUMPTABLE)(param_1,pcVar5);
    return;
  }
  if (*arg1 < 0x10) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar5 = "properties->structSize >= ARA::kARADocumentPropertiesMinSize";
    goto LAB_016b0211;
  }
  FUN_0167ab60();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  uVar1 = arg1[1];
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    if (uVar1 == 0) goto LAB_016b01a3;
LAB_016b022b:
    FUN_00d93290();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_016b01b3;
      FUN_00d50b00();
      local_38 = local_60;
    }
    else {
      local_38 = local_60;
      local_58 = '\0';
    }
  }
  else {
    if (uVar1 != 0) goto LAB_016b022b;
LAB_016b01a3:
    local_58 = '\0';
    local_60 = 0;
LAB_016b01b3:
    local_38 = 0;
  }
  FUN_01538290();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01689950();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_016b0333;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_016b0333;
  for (iVar6 = 0; iVar6 < *(int *)(local_60 + 0xc); iVar6 = iVar6 + 1) {
    FUN_01693550();
  }
  FUN_016be7c0();
  FUN_00d50b20();
LAB_016b0333:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 016a5360
// ============================================================
// Function: FUN_016a5360
// Address: 016a5360
// Size: 612 bytes
// Class: MUAraDocumentController
// String references:
//   "bool"
//   "MUAraDocumentController"
//   "MUAraMusicalContextPersistentData"
//   "_archiveIsPotentiallyUnstable"
//   "_mustSyncPitchSystemsAfterImportingPreM41Archive"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016a5360(void)

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
  int64_t arg1;
  void*this_ptr;
  char *pcVar10;
  
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
  *this_ptr = &g_025f7f28;
  this_ptr[7] = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5650();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraDocumentController");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5740();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContextPersistentData");
  }
  FUN_016a5830();
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 016a1890
// ============================================================
// Function: FUN_016a1890
// Address: 016a1890
// Size: 2625 bytes
// Class: MUAraDocumentController
// String references:
//   "MUAraDocumentController"
//   "GNOperationProgressObserver"
// === MUAraDocumentController properties ===
//   bool            _cacheWarmUpDoWarmUp
//   double          _cacheWarmUpLastStartTime
//   double          _hostPlaybackParamsLastStartTime
//   double          _cacheWarmUpLastCursorTime
//   double          _cacheWarmUpLastLeftCycleQuarter
//   SInt64          _expectedNextAraHostSampleIndex
//   GNInt           _replaceBufferSize
//   double          _renderStateTime
//   bool            _renderStateHostIsPlaying
//   bool            _renderStateRenderingEnabled
//   bool            _shouldTransferContextReset
//   bool            _shouldTransferContextEnabled
//   bool            _lastTransferContextEnabled
//   bool            _hostPlaybackParamsCycleActive
//   bool            _isAAX
//   bool            _hostPlaybackParamsCycleTimeValid
//   double          _hostPlaybackParamsCycleStartQuarter
//   double          _hostPlaybackParamsCycleEndQuarter
//   double          _hostPlaybackParamsCursorTime
//   double          _hostPlaybackParamsTempo
//   SInt64          _hostPlaybackParamsRenderSampleIndex
//   float           _localPlaybackVolume
//   bool            _hostCycleChanged
//   GNInt           _outOfSyncSamples
//   double          _lastHostTempo
//   bool            _tempoMapRecordingState
//   bool            _doRegisterObserver
//   bool            _awaitsFirstTransfer
//   SInt32          _renderLock
//   bool            _callSimulateProcessSamples
//   ... +10 more


void FUN_016a1890(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025f89b0;
  this_ptr[2] = &g_025f8d70;
  FUN_016a2460();
  FUN_016a2790();
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a2ac0();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a2c50();
    FUN_00e87980();
  }
  FUN_016a2de0();
  FUN_016a3110();
  FUN_016a3440();
  FUN_016a3770();
  FUN_016a3aa0();
  FUN_016a3dd0();
  FUN_016a4100();
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a4430();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x71) = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a45c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x72) = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a4750();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x73) = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a48e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a4a70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x75) = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a4c00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x76) = 0;
  // [STATIC_INIT: property registration]
  if (g_027cb3a3 == '\0') {
    FUN_016a4d90();
    FUN_00e87980();
  }
  FUN_016a4f20();
  return;
}


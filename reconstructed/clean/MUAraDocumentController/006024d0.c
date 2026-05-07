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


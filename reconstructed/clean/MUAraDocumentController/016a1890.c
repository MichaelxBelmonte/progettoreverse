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


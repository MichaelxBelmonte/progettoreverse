// Function: FUN_010fd360
// Address: 010fd360
// Size: 1552 bytes
// Class: MUAudioRingBuffer
// String references:
//   "MUAudioRingBuffer"
// === MUAudioRingBuffer properties ===
//                   _pluginDocument
//                   _replaceBufferSize
//                   _renderStateTime
//                   _renderStateHostIsPlaying
//                   _renderStateRenderingEnabled
//                   _shouldTransferContextReset
//                   _shouldTransferContextEnabled
//                   _lastTransferContextEnabled
//                   _hostPlaybackParamsCycleActive
//                   _isAAX
//                   _hostPlaybackParamsCycleTimeValid
//                   _hostPlaybackParamsCycleStartQuarter
//                   _hostPlaybackParamsCycleEndQuarter
//                   _hostPlaybackParamsCursorTime
//                   _hostPlaybackParamsTempo
//                   _hostPlaybackParamsRenderSampleIndex
//                   _localPlaybackRenderer
//                   _localScrubbingTimeProgressor
//                   _localPlaybackPendingRequest
//                   _localPlaybackVolume
//                   _hostCycleTimeJump
//                   _hostCycleChanged
//                   _preallocRenderSliceTimeContext
//                   _recordedTimeContexts
//                   _outOfSyncSamples
//                   _lastHostTempo
//                   _tempoMapRecordingState
//                   _doRegisterObserver
//                   _awaitsFirstTransfer
//                   _unconvertedParameterState
//   ... +14 more


void FUN_010fd360(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c8348;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_0278fe63 == '\0') {
    FUN_010fd9a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278fe63 == '\0') {
    FUN_010fdb10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278fe63 == '\0') {
    FUN_010fdc80();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278fe63 == '\0') {
    FUN_010fddf0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278fe63 == '\0') {
    FUN_010fdf60();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_0278fe63 == '\0') {
    FUN_010fe0d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278fe63 == '\0') {
    FUN_010fe240();
    FUN_00e87980();
  }
  return;
}


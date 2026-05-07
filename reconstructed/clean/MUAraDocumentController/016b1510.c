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


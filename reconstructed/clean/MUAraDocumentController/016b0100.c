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


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


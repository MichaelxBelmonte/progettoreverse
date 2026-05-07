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


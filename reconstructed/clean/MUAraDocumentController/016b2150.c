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


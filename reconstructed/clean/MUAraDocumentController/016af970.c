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


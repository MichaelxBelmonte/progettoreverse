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


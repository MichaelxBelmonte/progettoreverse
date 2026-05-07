// Function: FUN_016b66d0
// Address: 016b66d0
// Size: 943 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioModification->getDocumentController() == documentController"
//   "audioModification->getAudioPlaybackRegions()->getCount() == 0"
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016b66d0(void* param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_01653650(), cVar2 == '\0')) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this_ptr) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164fea0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01538130();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
              (**g_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
                (**g_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}


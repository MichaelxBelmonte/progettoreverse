// Function: FUN_016b8170
// Address: 016b8170
// Size: 701 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "playbackRegion->getDocumentController() == documentController"
//   "headTime != NULL"
//   "tailTime != NULL"
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


void FUN_016b8170(void*param_1,void*param_2)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_48;
  char local_40;
  
  pVar3 = (void*)param_1;
  uVar4 = FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), uVar4 = extraout_XMM0_Qa, cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else if ((arg1 == 0) || (cVar1 = FUN_01658870(), uVar4 = extraout_XMM0_Qa_00, cVar1 == '\0'))
  {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_01654a00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (local_48 == this_ptr) {
      if (param_2 == (void*)0x0) {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar4,"headTime != NULL");
        }
      }
      else if (param_1 == (void*)0x0) {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar4,"tailTime != NULL");
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012f94c0();
        *param_2 = uVar4;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012f9500();
        *param_1 = uVar4;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)
                (uVar4,"playbackRegion->getDocumentController() == documentController");
    }
  }
  FUN_00da71b0();
  return;
}


// Function: FUN_016b9a60
// Address: 016b9a60
// Size: 516 bytes
// Class: MUAraAudioSource
// String references:
//   "!audioSource->isDeactivatedForUndoHistory()"
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


uint32_t FUN_016b9a60(void* param_1,char param_2)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_016670a0();
  if (cVar1 == '\0') {
    if (g_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      cVar1 = (**(code **)(*local_40 + 0x390))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0166b8c0();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016676f0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return uVar2;
        }
        if (local_40 == (int64_t *)0x0) {
          return uVar2;
        }
        FUN_00d50b20();
        return uVar2;
      }
    }
  }
  else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
    (**g_02802f60)();
    return 0;
  }
  return 0;
}


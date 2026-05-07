// Function: FUN_016b8e20
// Address: 016b8e20
// Size: 705 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
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


int64_t * FUN_016b8e20(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        local_48 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b8fdd;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_58 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar4 = local_30;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_016ae690();
        FUN_00c811e0();
        if (local_40[0] == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(param_1);
        plVar5 = local_48;
        if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x18))();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c7820();
        FUN_016b8970();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_016b8fdd;
      }
      if (g_02802f60 != (void*)0x0) {
        local_48 = (int64_t *)0x0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)();
        }
        goto LAB_016b8fdd;
      }
    }
  }
  local_48 = (int64_t *)0x0;
LAB_016b8fdd:
  FUN_00da71b0();
  return local_48;
}


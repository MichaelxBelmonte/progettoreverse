// Function: FUN_01662650
// Address: 01662650
// Size: 1004 bytes
// Class: MUAraAudioSource
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


int64_t * FUN_01662650(uint64_t param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar3 = local_68;
  lVar5 = *(int64_t *)(arg1 + 0x120);
  if (lVar5 != 0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    goto LAB_01662962;
  }
  if (*(int64_t *)(arg1 + 0xf0) != 0) {
    cVar1 = FUN_01667df0();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124e000();
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a500();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        pvVar2 = _pthread_getspecific((void*)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b7f0();
        FUN_00d50b20();
        return this_ptr;
      }
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124e100();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
        goto LAB_0166281f;
      }
    }
    else if (local_68 != 0) {
LAB_0166281f:
      local_60 = '\0';
      local_68 = 0;
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          local_68 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 8);
          cVar1 = FUN_00e34240();
          if ((cVar1 == '\0') && (cVar1 = FUN_00e34a50(), cVar1 == '\0')) {
            FUN_013fb3a0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            pVar4 = (void*)param_1;
            if (local_40 != 0) {
              FUN_013fb3a0();
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0141b7f0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              FUN_00540b60();
              FUN_00d50b20();
              return this_ptr;
            }
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar3 + 0xc));
      }
      FUN_00540b60();
      FUN_00d50b20();
    }
  }
  FUN_0141b1a0();
  lVar5 = *(int64_t *)(arg1 + 0x120);
  lVar3 = lVar5;
  if (lVar5 != local_68) {
    lVar3 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        lVar3 = 0;
        goto LAB_016628e8;
      }
      FUN_00d50b00();
      lVar5 = *(int64_t *)(arg1 + 0x120);
      *(int64_t *)(arg1 + 0x120) = local_68;
    }
    else {
      local_60 = '\0';
LAB_016628e8:
      *(int64_t *)(arg1 + 0x120) = lVar3;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar3 = local_68;
    }
  }
  if ((local_60 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar5 = *(int64_t *)(arg1 + 0x120);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
LAB_01662962:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}


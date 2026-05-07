// Function: FUN_01673990
// Address: 01673990
// Size: 1188 bytes
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


uint FUN_01673990(void* param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = FUN_012c8fb0();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    iVar2 = FUN_012c8fb0();
  }
  else {
    iVar2 = FUN_012c8fb0();
  }
  uVar3 = 0xffffffff;
  if (iVar2 <= iVar1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_012c8fb0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      iVar2 = FUN_012c8fb0();
    }
    else {
      iVar2 = FUN_012c8fb0();
    }
    uVar3 = 1;
    if (iVar1 <= iVar2) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f50();
      if (local_40 == (int64_t *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = (**(code **)(*local_40 + 0x58))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8fc0();
      if (local_40 == (int64_t *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = 0xffffffff;
        if (*(uint *)(local_50 + 0xc) <= *(uint *)((int64_t)local_40 + 0xc)) {
          uVar3 = (uint)(*(uint *)(local_50 + 0xc) < *(uint *)((int64_t)local_40 + 0xc));
        }
        FUN_00d50b20();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


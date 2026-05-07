// Function: FUN_0078d680
// Address: 0078d680
// Size: 700 bytes
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


uint64_t FUN_0078d680(void* param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *local_40;
  char local_38;
  
  FUN_00b160d0();
  iVar2 = (**(code **)(*local_40 + 0x690))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 == 0) {
    return (uint64_t)(0 < iVar2);
  }
  if (iVar2 < 1) {
    return 0;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return 0;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return 0;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0078d7ce;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_0078d7ce:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_0078d92e;
      FUN_00d50b00();
LAB_0078d844:
      iVar1 = 0;
      do {
        iVar3 = iVar1;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_0124a860();
        if (iVar4 <= iVar3) break;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_01240ab0();
        iVar1 = iVar3 + 1;
      } while (iVar5 <= iVar2);
      uVar7 = CONCAT71(0x28025,iVar4 <= iVar3);
      FUN_00d50b20();
    }
    else {
      if (local_40 != (int64_t *)0x0) goto LAB_0078d844;
LAB_0078d92e:
      uVar7 = 0;
    }
    FUN_00d50b20();
    goto LAB_0078d938;
  }
  uVar7 = 0;
LAB_0078d938:
  FUN_00d50b20();
  return uVar7;
}


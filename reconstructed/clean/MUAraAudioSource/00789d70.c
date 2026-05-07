// Function: FUN_00789d70
// Address: 00789d70
// Size: 599 bytes
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


void FUN_00789d70(void* param_1)

{
  void *pvVar1;
  int iVar2;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x628))();
  if (local_70 == 0) {
    bVar3 = true;
  }
  else {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    bVar3 = local_48 == 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      for (iVar2 = 0; iVar2 < *(int *)(local_70 + 0xc); iVar2 = iVar2 + 1) {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e44d0();
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  return;
}


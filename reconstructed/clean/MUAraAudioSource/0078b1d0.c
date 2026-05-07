// Function: FUN_0078b1d0
// Address: 0078b1d0
// Size: 937 bytes
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


void* FUN_0078b1d0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int iVar4;
  uint64_t local_d8;
  int64_t local_c8;
  char local_c0;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint32_t local_50;
  uint32_t uStack_4c;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_70 + 0x450))();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    FUN_01f27fe0();
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_000c4290();
    if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != (int64_t *)0x0) {
      if (0 < *(int *)((int64_t)local_70 + 0xc)) {
        iVar4 = 0;
        do {
          FUN_0051e6f0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int64_t)local_70 + 0xc));
      }
      FUN_0015ee90();
      FUN_00d50b20();
    }
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else if (*(int64_t *)(arg1 + 0x90) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    local_d8 = *(void*)(arg1 + 0x90);
    FUN_00083ea0(2,&local_d8);
    FUN_0078b920();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0078b830();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}


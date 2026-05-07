// Function: FUN_016b8970
// Address: 016b8970
// Size: 873 bytes
// Class: MUAraAudioSource
// String references:
//   "properties != NULL"
//   "musicalContext"
//   "properties->structSize >= ARA::kARARegionSequencePropertiesMinSize"
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


void FUN_016b8970(void* param_1)

{
  uint64_t uVar1;
  void*puVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  uint64_t *arg1;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  if (arg1 == (uint64_t *)0x0) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar4 = "properties != NULL";
LAB_016b8af6:
                                            (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
    return;
  }
  if (*arg1 < 0x1c) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar4 = "properties->structSize >= ARA::kARARegionSequencePropertiesMinSize";
    goto LAB_016b8af6;
  }
  if (*(int64_t *)((int64_t)arg1 + 0x14) == 0) {
    if (g_02802f60 == (int64_t *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *g_02802f60;
    if (UNRECOVERED_JUMPTABLE == 0x0) {
      return;
    }
    pcVar4 = "musicalContext";
    goto LAB_016b8af6;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a40();
  uVar1 = arg1[1];
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar1 == 0) {
    local_38 = '\0';
    local_40 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 != '\0') {
      local_50 = local_40;
      local_38 = '\0';
      goto LAB_016b8b2f;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
      local_50 = local_40;
      goto LAB_016b8b2f;
    }
  }
  local_50 = 0;
LAB_016b8b2f:
  FUN_012c7b60();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7e50();
  if ((*arg1 < 0x1d) || (*(int64_t *)((int64_t)arg1 + 0x1c) == 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c7f30();
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar2 = *(void**)((int64_t)arg1 + 0x1c);
    FUN_01cfbee0(*puVar2,puVar2[1],puVar2[2]);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012c7f30();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


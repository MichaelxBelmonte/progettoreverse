// Function: FUN_00789100
// Address: 00789100
// Size: 708 bytes
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


void FUN_00789100(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  char cVar1;
  int64_t lVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  cVar1 = (char)param_1;
  local_98 = *param_3;
  local_90 = 0;
  FUN_00788fc0(param_1,&local_98);
  lVar2 = local_40;
  pVar6 = (void*)param_1;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0) {
    return;
  }
  if (cVar1 == '\0') {
    if (*param_3 != 0) {
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_016c2e90();
      if (1 < iVar3) {
        pvVar4 = _pthread_getspecific(pVar6);
        if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          local_48 = lVar2;
        }
        else {
          local_48 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c2e90();
        FUN_016c1150();
      }
    }
  }
  else {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = lVar2;
  local_80 = '\0';
  FUN_0132d960();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_78 = g_027ebe30;
  if (g_027ebe30 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = lVar2;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&local_68,3,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


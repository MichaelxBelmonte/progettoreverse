// Function: FUN_0078c610
// Address: 0078c610
// Size: 1467 bytes
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


int64_t * FUN_0078c610(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  void* pVar7;
  int64_t lVar8;
  code *pcVar9;
  int64_t arg1;
  int64_t *this_ptr;
  code *pcVar10;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int local_80;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  
  cVar2 = FUN_00751ba0();
  if (cVar2 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    local_98 = *param_2;
    if ((char)param_2[1] != '\0') {
      *this_ptr = local_98;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return this_ptr;
    }
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      local_90 = '\0';
      local_98 = 0;
      local_80 = -1;
      while( true ) {
        lVar3 = (int64_t)local_80;
        local_80 = local_80 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_80) break;
        local_98 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
        pvVar4 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4c40();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00323290();
    if ((local_90 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    if (*(char *)(arg1 + 0x170) == '\0') {
      pcVar10 = FUN_0165a0b0;
      lVar1 = *param_2;
    }
    else {
      pcVar10 = FUN_0165a070;
      lVar1 = *param_2;
    }
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        pVar6 = 0;
        do {
          lVar3 = local_70;
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4c40();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
              goto LAB_0078c904;
            }
          }
          else if (local_70 != 0) {
LAB_0078c904:
            local_68 = '\0';
            local_70 = 0;
            local_58 = -1;
            while( true ) {
              lVar5 = (int64_t)local_58;
              local_58 = local_58 + 1;
              if (*(int *)(lVar3 + 0xc) <= local_58) break;
              lVar8 = *(int64_t *)(lVar3 + 0x10);
              local_70 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
              pvVar4 = _pthread_getspecific((void*)lVar8);
              pVar7 = (void*)lVar8;
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f51f0();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 != 0) {
                pvVar4 = _pthread_getspecific(pVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f51f0();
                pcVar9 = pcVar10;
                (*pcVar10)();
                pVar7 = (void*)pcVar9;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if (local_70 != local_48) {
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f51f0();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01657380();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01650890();
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar2 == '\0') {
                    local_40 = '\0';
                    FUN_00d21140();
                    local_48 = local_70;
                  }
                }
              }
            }
            FUN_000be170();
            FUN_00d50b20();
          }
          pVar6 = pVar6 + 1;
        } while ((int)pVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
  *this_ptr = local_98;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}


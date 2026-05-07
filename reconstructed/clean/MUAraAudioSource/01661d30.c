// Function: FUN_01661d30
// Address: 01661d30
// Size: 1146 bytes
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


uint64_t FUN_01661d30(int64_t param_1,uint32_t param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  bool bVar10;
  int64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint32_t local_3c;
  int64_t local_38;
  
  local_3c = param_2;
  cVar2 = FUN_01733c10();
  if (cVar2 == '\0') {
    bVar10 = *(int64_t *)(this_ptr + 0xf0) != 0;
  }
  else {
    bVar10 = false;
  }
  *(bool *)(this_ptr + 0xe9) = bVar10;
  FUN_0184a0c0();
  lVar8 = *arg1;
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar8 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(int64_t *)(lVar8 + 0xf0);
  if (lVar8 != 0) {
    FUN_00d50b00();
    lVar4 = *arg1;
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 200) = *(void*)(lVar4 + 200);
    lVar4 = *arg1;
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 0xd8) = *(void*)(lVar4 + 0xd8);
    lVar4 = *arg1;
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    iVar1 = *(int *)(lVar4 + 0xe4);
    *(int *)(this_ptr + 0xe4) = iVar1;
    if (((*(double *)(this_ptr + 0xc0) != *(double *)(this_ptr + 200)) ||
        (NAN(*(double *)(this_ptr + 0xc0)) || NAN(*(double *)(this_ptr + 200)))) ||
       (param_1 = *(int64_t *)(this_ptr + 0xd0), param_1 != *(int64_t *)(this_ptr + 0xd8))) {
      *(void*)(this_ptr + 0xe8) = 1;
    }
    else {
      bVar10 = *(int *)(this_ptr + 0xe0) != iVar1;
      *(bool *)(this_ptr + 0xe8) = bVar10;
      if (!bVar10) {
        local_58 = '\0';
        local_60 = lVar8;
        cVar2 = FUN_01316d80();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (void*)param_1;
        if (cVar2 != '\0') {
          lVar4 = *arg1;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          if (*(int64_t *)(lVar4 + 0xf0) != 0) {
            *(void*)(lVar4 + 0xf0) = 0;
            FUN_00d50b20();
          }
          FUN_01660e50();
          lVar4 = *arg1;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          *(void*)(this_ptr + 0x106) = *(void*)(lVar4 + 0x106);
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar4 = *arg1;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(int64_t *)(lVar4 + 0x120);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          lVar5 = *arg1;
          local_50 = lVar4;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar5 = *arg1;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(int64_t *)(lVar5 + 0x108);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_78 = 1;
          lVar5 = *arg1;
          local_80 = lVar4;
          local_38 = lVar4;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar5 = *arg1;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(int64_t *)(lVar5 + 0x110);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_68 = 1;
          plVar7 = &local_80;
          local_70 = lVar4;
          FUN_01662280(plVar7,&local_50,&local_70);
          lVar5 = local_38;
          pVar6 = (void*)plVar7;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          uVar9 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0166213b;
        }
      }
    }
  }
  pVar6 = (void*)param_1;
  uVar9 = 0;
LAB_0166213b:
  if ((char)local_3c != '\0') {
    lVar4 = *arg1;
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 0x104) = *(void*)(lVar4 + 0x104);
  }
  FUN_01733c40();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return uVar9 & 0xffffffff;
}


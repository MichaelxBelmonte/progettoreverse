// Function: FUN_01672e10
// Address: 01672e10
// Size: 909 bytes
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


uint FUN_01672e10(void* param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int64_t *plVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  uint uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  
  lVar12 = *this_ptr;
  lVar11 = *arg1;
  pvVar6 = _pthread_getspecific(param_1);
  lVar8 = lVar12;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  iVar2 = *(int *)(lVar8 + 0x38);
  pvVar6 = _pthread_getspecific((void*)lVar8);
  pVar9 = (void*)lVar8;
  if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    iVar1 = *(int *)(lVar11 + 0x38);
  }
  else {
    iVar1 = *(int *)(*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                    0x38);
  }
  uVar5 = 0xffffffff;
  if (iVar1 <= iVar2) {
    pvVar6 = _pthread_getspecific(pVar9);
    lVar8 = lVar12;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x38);
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      iVar1 = *(int *)(lVar11 + 0x38);
    }
    else {
      iVar1 = *(int *)(*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                      + 0x38);
    }
    uVar5 = 1;
    if (iVar2 <= iVar1) {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(int64_t *)(lVar12 + 0x40);
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x40);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(int64_t *)(lVar11 + 0x40);
        }
        else {
          lVar8 = *(int64_t *)
                   (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          lVar8 = lVar12;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          plVar4 = *(int64_t **)(lVar8 + 0x40);
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            lVar8 = *(int64_t *)(lVar11 + 0x40);
          }
          else {
            lVar8 = *(int64_t *)
                     (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                     0x40);
          }
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          uVar5 = (**(code **)(*plVar4 + 0x58))();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (uVar5 != 0) {
            return uVar5;
          }
        }
      }
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(int64_t *)(lVar12 + 0x48);
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x48);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(int64_t *)(lVar11 + 0x48);
        }
        else {
          lVar8 = *(int64_t *)
                   (*(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x48);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar12 = *(int64_t *)(lVar12 + 0x48);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar11 = *(int64_t *)(lVar11 + 0x48);
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          uVar3 = *(uint *)(lVar12 + 0xc);
          uVar5 = *(uint *)(lVar11 + 0xc);
          uVar10 = 0xffffffff;
          if (uVar5 <= uVar3) {
            uVar10 = (uint)(uVar5 < uVar3);
          }
          FUN_00d50b20();
          FUN_00d50b20();
          if (uVar10 != 0) {
            return uVar10;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}


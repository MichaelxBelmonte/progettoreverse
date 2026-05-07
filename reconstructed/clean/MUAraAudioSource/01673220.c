// Function: FUN_01673220
// Address: 01673220
// Size: 1228 bytes
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


uint64_t FUN_01673220(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t local_d0;
  char local_c8;
  int64_t local_78;
  char local_70;
  uint local_3c;
  
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713cc0();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  lVar9 = *arg1;
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar9 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  uVar8 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
  if ((*(int *)(*(int64_t *)(lVar9 + 0x60) + 0xc) != 0) && (*(int *)(local_78 + 0xc) != 0)) {
    uVar7 = 0;
    FUN_016738f0(0,FUN_01673990);
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    lVar9 = *arg1;
    pvVar3 = _pthread_getspecific((void*)uVar7);
    if (pvVar3 != (void *)0x0) {
      lVar9 = *arg1;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    lVar9 = *(int64_t *)(lVar9 + 0x60);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    iVar1 = *(int *)(lVar9 + 0xc);
    iVar2 = *(int *)(local_78 + 0xc);
    if (iVar1 == iVar2) {
      if (0 < *(int *)(local_78 + 0xc)) {
        lVar4 = 0;
        do {
          plVar10 = *(int64_t **)(*(int64_t *)(local_78 + 0x10) + lVar4 * 8);
          lVar6 = *(int64_t *)(*(int64_t *)(lVar9 + 0x10) + lVar4 * 8);
          pvVar3 = _pthread_getspecific((void*)uVar7);
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          pvVar3 = _pthread_getspecific((void*)uVar7);
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          lVar6 = *(int64_t *)(lVar6 + 0x50);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar10 + 0x370))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(local_78 + 0xc));
      }
      uVar7 = FUN_01714b60();
      local_3c = (uint)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    }
    else {
      local_3c = (uint)CONCAT71((int7)((uint64_t)local_78 >> 8),iVar2 <= iVar1);
      if (iVar1 != 0) {
        if (0 < *(int *)(local_78 + 0xc)) {
          lVar4 = 0;
          do {
            plVar10 = *(int64_t **)(*(int64_t *)(local_78 + 0x10) + lVar4 * 8);
            FUN_016727d0();
            if (local_c8 == '\0') {
              if (local_d0 != 0) {
                FUN_00d50b00();
                goto LAB_016735c1;
              }
LAB_01673530:
              local_3c = 0;
            }
            else {
              if (local_d0 == 0) goto LAB_01673530;
LAB_016735c1:
              pvVar3 = _pthread_getspecific((void*)uVar7);
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              pvVar3 = _pthread_getspecific((void*)uVar7);
              if ((pvVar3 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                lVar6 = *(int64_t *)(local_d0 + 0x50);
              }
              else {
                lVar6 = *(int64_t *)
                         (*(int64_t *)
                           (local_d0 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x50)
                ;
              }
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              (**(code **)(*plVar10 + 0x370))();
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            lVar4 = lVar4 + 1;
          } while ((int)lVar4 < *(int *)(local_78 + 0xc));
        }
        FUN_01714b60();
      }
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar11 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
    uVar8 = (uint64_t)local_3c;
    if (iVar1 == iVar2) goto LAB_016736d9;
  }
  uVar11 = uVar8 & 0xffffff01;
LAB_016736d9:
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  return uVar11 & 0xffffffff;
}


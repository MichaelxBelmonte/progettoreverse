// Function: FUN_01667210
// Address: 01667210
// Size: 896 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01667210(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int local_80;
  int64_t *local_70;
  char local_68;
  int local_58;
  
  pVar8 = (void*)param_1;
  lVar1 = *(int64_t *)(this_ptr + 0x130);
  if (lVar1 != *arg1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_01849e20();
      pvVar5 = _pthread_getspecific((void*)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = lVar1;
      }
      pVar8 = (void*)param_1;
      FUN_01505de0();
    }
    FUN_00d64850();
    lVar6 = *arg1;
    lVar7 = *(int64_t *)(this_ptr + 0x130);
    if (lVar7 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x130) = lVar6;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (*arg1 != 0) {
      FUN_01667cd0();
      lVar6 = *(int64_t *)(this_ptr + 0xa8);
      if (lVar6 != 0) {
        local_90 = '\0';
        local_98 = 0;
        local_80 = -1;
LAB_01667333:
        while( true ) {
          plVar3 = local_70;
          lVar7 = (int64_t)local_80;
          local_80 = local_80 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_80) break;
          local_98 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar7 * 8);
          pvVar5 = _pthread_getspecific((void*)*(int64_t *)(lVar6 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164fea0();
          if (local_68 == '\0') goto LAB_016673e0;
          if (local_70 != (int64_t *)0x0) goto LAB_01667410;
        }
        FUN_0049cc10();
        pVar8 = (void*)lVar6;
      }
      cVar4 = FUN_0167b240();
      if (cVar4 != '\0') {
        FUN_016676f0();
        if ((local_90 == '\0') && (local_98 != 0)) {
          FUN_00d50b00();
        }
        FUN_01849c50();
        if (local_98 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (lVar1 != 0) {
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
      FUN_00d50b20();
    }
  }
  return;
LAB_016673e0:
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b00();
LAB_01667410:
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_58 = -1;
    while( true ) {
      lVar7 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((int64_t)plVar3 + 0xc) <= local_58) break;
      lVar2 = plVar3[2];
      local_70 = *(int64_t **)(lVar2 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar2);
      plVar9 = local_70;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar9 = (int64_t *)local_70[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x378))();
    }
    FUN_00277f20();
    FUN_00d50b20();
  }
  goto LAB_01667333;
}


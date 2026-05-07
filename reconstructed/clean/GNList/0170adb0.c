// Function: FUN_0170adb0
// Address: 0170adb0
// Size: 1424 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_0170adb0(void)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar9;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  int64_t *local_68;
  char local_60;
  int64_t *local_40;
  char local_38;
  
  FUN_0170ac80();
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar7 = *(int64_t **)(arg1 + 0x40);
  if (plVar7 == (int64_t *)0x0) {
    FUN_00d8ede0();
    plVar7 = local_68;
    if (local_60 != '\0') goto LAB_0170ae36;
    if (local_68 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
    FUN_00d50b00();
  }
  else {
    FUN_00d50b00();
LAB_0170ae36:
    local_60 = '\0';
  }
  if ((local_68 == (int64_t *)0x0) || (plVar7 == (int64_t *)0x0)) {
LAB_0170b2e1:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (plVar7 == (int64_t *)0x0) goto LAB_0170b2f8;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &g_02572358;
    *puVar3 = &g_02572358;
    (*g_02572370)();
    pvVar4 = _pthread_getspecific((void*)puVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c6490();
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0170af0b;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_0170af0b:
      if (0 < *(int *)((int64_t)local_68 + 0xc)) {
        lVar9 = 0;
        do {
          plVar1 = *(int64_t **)(local_68[2] + lVar9 * 8);
          pvVar4 = _pthread_getspecific((void*)puVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0170ac80();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
              goto LAB_0170afca;
            }
          }
          else {
LAB_0170afca:
            if ((local_40 == (int64_t *)0x0) || (local_40 != local_68)) {
              if (local_40 == (int64_t *)0x0) goto LAB_0170af4d;
            }
            else {
              pvVar4 = _pthread_getspecific((void*)puVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                plVar8 = (int64_t *)plVar1[8];
                if (plVar8 == (int64_t *)0x0) goto LAB_0170b020;
LAB_0170b0a0:
                FUN_00d50b00();
                local_38 = '\x01';
                local_40 = plVar8;
                if (plVar7 != plVar8) goto LAB_0170b0c1;
LAB_0170b03a:
                cVar2 = '\x01';
                plVar8 = plVar7;
              }
              else {
                plVar8 = *(int64_t **)
                          (plVar1[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x40);
                if (plVar8 != (int64_t *)0x0) goto LAB_0170b0a0;
LAB_0170b020:
                FUN_00d8ede0();
                if (plVar7 == local_40) goto LAB_0170b03a;
LAB_0170b0c1:
                pvVar4 = _pthread_getspecific((void*)puVar6);
                if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                  lVar5 = plVar1[8];
                  if (lVar5 == 0) goto LAB_0170b0f9;
LAB_0170b132:
                  FUN_00d50b00();
                  local_a8 = '\x01';
                  local_b0 = lVar5;
LAB_0170b14f:
                  pvVar4 = _pthread_getspecific((void*)puVar6);
                  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                    lVar5 = plVar1[8];
                    if (lVar5 == 0) goto LAB_0170b187;
LAB_0170b1ca:
                    FUN_00d50b00();
                    local_a0 = lVar5;
LAB_0170b1e0:
                    local_98 = '\0';
                    local_80 = local_a0;
                  }
                  else {
                    lVar5 = *(int64_t *)
                             (plVar1[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x40);
                    if (lVar5 != 0) goto LAB_0170b1ca;
LAB_0170b187:
                    FUN_00d8ede0();
                    if (local_98 != '\0') goto LAB_0170b1e0;
                    if (local_a0 != 0) {
                      FUN_00d50b00();
                    }
                    local_80 = local_a0;
                  }
                  cVar2 = (**(code **)(*plVar7 + 0x50))();
                  if (local_80 != 0) {
                    FUN_00d50b20();
                  }
                  local_a0 = local_80;
                  if ((local_98 != '\0') && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  lVar5 = *(int64_t *)
                           (plVar1[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x40);
                  if (lVar5 != 0) goto LAB_0170b132;
LAB_0170b0f9:
                  FUN_00d8ede0();
                  if (local_b0 != 0) goto LAB_0170b14f;
                  cVar2 = '\0';
                }
                plVar8 = local_40;
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar2 != '\0') {
                local_38 = '\0';
                FUN_00d21140();
                local_40 = plVar1;
              }
            }
            FUN_00d50b20();
          }
LAB_0170af4d:
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < *(int *)((int64_t)local_68 + 0xc));
      }
      FUN_01911350();
      FUN_00d50b20();
    }
    if (*(int *)((int64_t)puVar3 + 0xc) == 0) {
      FUN_00d50b20();
      goto LAB_0170b2e1;
    }
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  FUN_00d50b20();
LAB_0170b2f8:
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}


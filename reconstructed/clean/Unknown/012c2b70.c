// Function: FUN_012c2b70
// Address: 012c2b70
// Size: 797 bytes
// Class: Unknown

uint64_t FUN_012c2b70(void* param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  int64_t local_88;
  int64_t local_80;
  char local_78;
  
  if (((*(char *)(this_ptr + 0xd0) != '\0') || (*(double *)(this_ptr + 0x100) != 0.0)) ||
     (NAN(*(double *)(this_ptr + 0x100)))) {
    return 0;
  }
  uVar9 = (uint64_t)param_2;
  lVar10 = *arg1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar10 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(int64_t *)(lVar10 + 0xd8);
  if (lVar10 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_00d50b00();
    lVar6 = lVar10;
  }
  lVar11 = *arg1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar11 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  lVar11 = *(int64_t *)(lVar11 + 0xe0);
  local_88 = lVar11;
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    FUN_00d50b00();
  }
  if (lVar6 != 0) {
    local_a8 = 0;
    local_b0 = lVar6;
    FUN_012c2f70(param_2,&local_b0);
    lVar7 = local_80;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    uVar9 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
    if (lVar7 != 0) goto joined_r0x012c2e9f;
  }
  uVar1 = *(uint *)(lVar11 + 0xc);
  if ((int)uVar1 < 1) {
    uVar9 = 0;
  }
  else {
    local_90 = -(uint64_t)uVar1;
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    uVar12 = 1;
    bVar2 = false;
    lVar7 = 0;
    do {
      lVar8 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + -8 + uVar12 * 8);
      if (lVar7 == lVar8) {
        lVar4 = lVar7;
        bVar3 = bVar2;
        if ((!bVar2) && (lVar8 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        lVar4 = lVar8;
        if ((bVar2) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar3;
      lVar7 = lVar4;
      if (lVar7 != lVar6) {
        local_98 = 0;
        local_a0 = lVar7;
        FUN_012c2f70(param_2,&local_a0);
        lVar8 = local_80;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) break;
      }
      uVar9 = CONCAT71((int7)(uVar9 >> 8),uVar12 < uVar1);
      lVar8 = local_90 + uVar12;
      uVar12 = uVar12 + 1;
    } while (lVar8 != 0);
    if ((bVar2) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
joined_r0x012c2e9f:
  if ((lVar10 != 0) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != 0) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return uVar9;
}


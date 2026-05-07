// Function: FUN_01764ec0
// Address: 01764ec0
// Size: 2002 bytes
// Class: Unknown

int64_t * FUN_01764ec0(int64_t *param_1,int64_t *param_2)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t *this_ptr;
  float fVar11;
  float fVar12;
  uint32_t uVar13;
  float fVar14;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  plVar6 = param_1;
  FUN_0173b120();
  pVar5 = (void*)plVar6;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  lVar9 = local_40;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    lVar9 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
  }
  lVar9 = *(int64_t *)(lVar9 + 0x60);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770f00();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  uVar1 = *(uint *)(local_40 + 0xc);
  if (0 < (int)uVar1) {
    lVar3 = *(int64_t *)(*param_2 + 0x10);
    uVar7 = (uint64_t)(uVar1 & 3);
    if ((uint64_t)uVar1 - 1 < 3) {
      fVar11 = 0.0;
      uVar10 = 0;
    }
    else {
      fVar11 = 0.0;
      uVar10 = 0;
      do {
        fVar12 = *(float *)(lVar3 + uVar10 * 4);
        fVar14 = *(float *)(lVar3 + 4 + uVar10 * 4);
        if (fVar12 <= fVar11) {
          fVar12 = fVar11;
        }
        if (fVar14 <= fVar12) {
          fVar14 = fVar12;
        }
        fVar12 = *(float *)(lVar3 + 8 + uVar10 * 4);
        if (fVar12 <= fVar14) {
          fVar12 = fVar14;
        }
        fVar11 = *(float *)(lVar3 + 0xc + uVar10 * 4);
        if (fVar11 <= fVar12) {
          fVar11 = fVar12;
        }
        uVar10 = uVar10 + 4;
      } while ((uVar1 & 0xfffffffc) != uVar10);
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      fVar12 = *(float *)(lVar3 + uVar10 * 4);
      if (fVar12 <= fVar11) {
        fVar12 = fVar11;
      }
      uVar10 = uVar10 + 1;
      fVar11 = fVar12;
    }
  }
  uVar8 = *(void*)(local_40 + 0x10);
  pvVar2 = _pthread_getspecific((void*)uVar8);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar11 = (float)FUN_01779ec0();
  FUN_00e7d780(fVar11 / g_023908e0);
  pVar5 = (void*)uVar8;
  if (0 < *(int *)(local_40 + 0xc)) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)uVar8);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific((void*)uVar8);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = (float)FUN_01779ec0();
      FUN_01779ed0(fVar12 - fVar11);
      pVar5 = (void*)uVar8;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(local_40 + 0xc));
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar4 = *(int64_t *)(local_40 + 0x60);
    lVar3 = local_40;
  }
  else {
    lVar3 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    lVar4 = *(int64_t *)(lVar3 + 0x60);
  }
  pVar5 = (void*)lVar3;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770eb0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(int64_t *)(local_40 + 0x58);
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x58)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736de0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(int64_t *)(local_40 + 0x58);
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x58)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736c00();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    pvVar2 = _pthread_getspecific(pVar5);
    if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(int64_t *)(local_40 + 0x58);
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
               0x58);
    }
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_01736e70();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d214d0(uVar13,*(void*)(lVar3 + 0xc));
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(int64_t *)(local_40 + 0x60);
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x60)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770230(fVar11);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(int64_t *)(local_40 + 0x60);
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x60)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770300();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(int64_t *)(local_40 + 0x60);
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x60)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01775c40();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174bd90();
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}


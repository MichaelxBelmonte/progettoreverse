// Function: FUN_015bc030
// Address: 015bc030
// Size: 776 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015bc030(void* param_1)

{
  int64_t lVar1;
  void*puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  void*puVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t this_ptr;
  float fVar11;
  uint8_t auVar12 [16];
  int64_t local_58;
  char local_50;
  float local_34;
  
  if (*(int *)(this_ptr + 0x40) == 3) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_017f2da0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_017f2d90();
    uVar4 = FUN_00e7d780();
    uVar8 = *(int *)(this_ptr + 0x44) - 1;
    if ((int)uVar4 < *(int *)(this_ptr + 0x44)) {
      uVar8 = uVar4;
    }
    uVar9 = (uint64_t)uVar8;
    if ((int)uVar8 < 0) {
      uVar9 = 0;
    }
    auVar12 = insertps(ZEXT416(*(uint *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) +
                                        uVar9 * 4)),fVar11 * (float)iVar3,0x10);
    divps(g_02411050,auVar12);
    local_34 = (float)_logf();
    fVar11 = (float)_logf();
  }
  else {
    iVar5 = FUN_00e7d780((g_0241145c / *(float *)(this_ptr + 0x8c)) * g_0239109c);
    iVar3 = 300;
    if (iVar5 < 300) {
      iVar3 = iVar5;
    }
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    uVar8 = iVar3 * 2 + 1;
    lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
    puVar2 = *(void**)(local_58 + 0x10);
    *puVar2 = *(void*)(lVar1 + 4);
    if (1 < (int)uVar8) {
      iVar5 = *(int *)(this_ptr + 0x44);
      uVar9 = 1;
      do {
        iVar10 = iVar5 + -1;
        if ((int64_t)uVar9 < (int64_t)iVar5) {
          iVar10 = (int)uVar9;
        }
        puVar2[uVar9] = *(void*)(lVar1 + (int64_t)iVar10 * 4);
        iVar10 = (int)(uVar9 + 1);
        if ((int64_t)iVar5 <= (int64_t)(uVar9 + 1)) {
          iVar10 = iVar5 + -1;
        }
        puVar2[uVar9 + 1] = *(void*)(lVar1 + (int64_t)iVar10 * 4);
        uVar9 = uVar9 + 2;
      } while (uVar9 != uVar8);
    }
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_025f0d98;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    (*g_025f0db0)();
    FUN_015c15b0(1,uVar8);
    fVar11 = *(float *)(*(int64_t *)(local_58 + 0x10) + (int64_t)iVar3 * 4);
    FUN_00d50b20();
    fVar11 = (float)_logf(g_02390124 / fVar11);
    local_34 = (float)_logf((float)iVar3);
    FUN_00d50b20();
  }
  fVar11 = fVar11 / local_34;
  if ((*(float *)(this_ptr + 0x98) != fVar11) || (NAN(*(float *)(this_ptr + 0x98)) || NAN(fVar11))
     ) {
    FUN_00d64850();
    *(float *)(this_ptr + 0x98) = fVar11;
    FUN_00d64910();
  }
  return;
}


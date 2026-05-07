// Function: FUN_019ae3f0
// Address: 019ae3f0
// Size: 1268 bytes
// Class: MUEditorSubview

void FUN_019ae3f0(float *param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  float *pfVar6;
  int64_t lVar7;
  double *in_RDX;
  char *pcVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Dc;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Dd;
  uint32_t uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  uint8_t auVar22 [16];
  int64_t local_a0;
  char local_98 [8];
  float local_40;
  float local_3c;
  char local_38 [8];
  
  fVar21 = (float)((uint64_t)param_2 >> 0x20);
  fVar19 = (float)param_2;
  if ((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) {
    pfVar6 = param_1;
    FUN_00d23310();
    lVar7 = CONCAT71((int7)((uint64_t)pfVar6 >> 8),local_98[0]);
    pcVar8 = local_38;
    if (local_98[0] != '\0') {
      pcVar8 = local_98;
    }
    local_38[0] = local_98[0];
    *pcVar8 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 == 0) {
      local_a0 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    pvVar3 = _pthread_getspecific((void*)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_0125a280();
    pvVar3 = _pthread_getspecific((void*)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_01259520();
    fVar11 = (float)(**(code **)(*this_ptr + 0xc38))();
    local_3c = (float)(**(code **)(*this_ptr + 0xc38))();
    FUN_01e436c0();
    FUN_01e436c0();
    lVar4 = *arg1;
    if (*(int *)(lVar4 + 0xc) < 2) {
      auVar22 = ZEXT416((uint)local_3c);
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      lVar9 = 1;
      local_40 = fVar11;
      do {
        pVar5 = (void*)lVar7;
        lVar7 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar9 * 8);
        if (local_a0 == lVar7) {
          if ((!bVar2) && (local_a0 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (local_a0 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            local_a0 = lVar7;
          }
          else {
            bVar2 = true;
            local_a0 = lVar7;
          }
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_0125a280();
        if (dVar14 < dVar12) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar12 = (double)FUN_0125a280();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (dVar13 < dVar14) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar13 = (double)FUN_01259520();
        }
        uVar15 = (**(code **)(*this_ptr + 0xc38))();
        uVar16 = (uint32_t)((uint64_t)uVar15 >> 0x20);
        fVar11 = (float)uVar15;
        auVar22._8_4_ = extraout_XMM0_Dc;
        auVar22._0_8_ = uVar15;
        auVar22._12_4_ = extraout_XMM0_Dd;
        if (fVar11 <= local_3c) {
          auVar22._0_4_ = local_3c;
        }
        if (local_40 <= fVar11) {
          fVar11 = local_40;
        }
        lVar9 = lVar9 + 1;
        lVar4 = *arg1;
        lVar7 = (int64_t)*(int *)(lVar4 + 0xc);
        local_3c = auVar22._0_4_;
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
        local_40 = fVar11;
      } while (lVar9 < lVar7);
    }
    auVar1._4_4_ = uVar16;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = uVar17;
    auVar1._12_4_ = uVar18;
    auVar22 = insertps(auVar22,auVar1,0x10);
    fVar11 = auVar22._0_4_ + g_0241b5d0;
    fVar23 = auVar22._4_4_ + _UNK_0241b5d4;
    fVar20 = fVar11 - fVar23;
    while (fVar20 < (fVar21 / g_0241b640) * g_0239394c) {
      fVar11 = fVar11 + g_0241b5e0;
      fVar23 = fVar23 + _UNK_0241b5e4;
      fVar20 = fVar11 - fVar23;
    }
    if (in_RDX != (double *)0x0) {
      dVar12 = dVar12 + g_0241b680;
      dVar13 = dVar13 + g_02390108;
      dVar14 = ((double)(fVar19 / g_02390d38) - (dVar13 - dVar12)) * g_023942d0;
      uVar10 = -(uint64_t)(dVar13 - dVar12 < (double)(fVar19 / g_02390d38));
      dVar12 = (double)(~uVar10 & (uint64_t)dVar12 | (uint64_t)(dVar12 - dVar14) & uVar10);
      *in_RDX = dVar12;
      in_RDX[1] = (double)(~uVar10 & (uint64_t)dVar13 | (uint64_t)(dVar14 + dVar13) & uVar10) -
                  dVar12;
    }
    if (param_1 != (float *)0x0) {
      *param_1 = fVar23;
      param_1[1] = fVar20;
    }
    if ((bVar2) && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


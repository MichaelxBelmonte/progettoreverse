// Function: FUN_015bd150
// Address: 015bd150
// Size: 2105 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015bd150(int64_t param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lVar14;
  void* pVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar18;
  float fVar19;
  uint8_t auVar20 [16];
  float fVar21;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  int64_t local_50;
  char local_48;
  
  iVar3 = *(int *)(this_ptr + 0x44);
  lVar17 = *arg1;
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    lVar17 = *arg1;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
    }
  }
  if (iVar3 != *(int *)(lVar17 + 0x44)) {
    return;
  }
  iVar3 = *(int *)(this_ptr + 0x40);
  lVar17 = *arg1;
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    lVar17 = *arg1;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
    }
  }
  if (iVar3 != *(int *)(lVar17 + 0x40)) {
    return;
  }
  FUN_015bdbb0();
  lVar17 = *(int64_t *)(this_ptr + 0x50);
  if (lVar17 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  lVar17 = *(int64_t *)(this_ptr + 0x58);
  if (lVar17 != 0) {
    FUN_00d50b00();
  }
  lVar10 = *arg1;
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    lVar10 = *arg1;
    lVar11 = FUN_00e8b990();
    if (lVar11 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(int64_t *)(lVar10 + 0x50);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  lVar11 = *arg1;
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    lVar11 = *arg1;
    lVar12 = FUN_00e8b990();
    if (lVar12 != 0) {
      lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
    }
  }
  lVar11 = *(int64_t *)(lVar11 + 0x58);
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  auVar20 = g_02416630;
  uVar4 = *(uint *)(this_ptr + 0x44);
  uVar18 = (uint64_t)uVar4;
  if (0 < (int)uVar4) {
    uVar5 = *(uint64_t *)(lVar10 + 0x10);
    uVar6 = *(uint64_t *)(lVar11 + 0x10);
    uVar7 = *(uint64_t *)(lVar17 + 0x10);
    uVar8 = *(uint64_t *)(local_50 + 0x10);
    if (uVar4 < 4) {
      uVar13 = 0;
    }
    else {
      uVar16 = uVar8 + uVar18 * 4;
      uVar13 = 0;
      if (((uVar5 + uVar18 * 4 <= uVar8 || uVar16 <= uVar5) &&
          (uVar6 + uVar18 * 4 <= uVar8 || uVar16 <= uVar6)) &&
         (uVar13 = 0, uVar7 + uVar18 * 4 <= uVar8 || uVar16 <= uVar7)) {
        uVar13 = (uint64_t)(uVar4 & 0xfffffffc);
        uVar16 = (uVar13 - 4 >> 2) + 1;
        if (uVar13 - 4 == 0) {
          lVar12 = 0;
        }
        else {
          lVar14 = -(uVar16 & 0xfffffffffffffffe);
          lVar12 = 0;
          do {
            auVar22 = divps(*(uint8_t (*) [16])(uVar5 + lVar12 * 4),
                            *(uint8_t (*) [16])(uVar6 + lVar12 * 4));
            pfVar1 = (float *)(uVar7 + lVar12 * 4);
            auVar23._4_4_ = pfVar1[1] * auVar22._4_4_;
            auVar23._0_4_ = *pfVar1 * auVar22._0_4_;
            auVar23._8_4_ = pfVar1[2] * auVar22._8_4_;
            auVar23._12_4_ = pfVar1[3] * auVar22._12_4_;
            auVar23 = maxps(auVar20,auVar23);
            *(uint8_t (*) [16])(uVar8 + lVar12 * 4) = auVar23;
            auVar23 = divps(*(uint8_t (*) [16])(uVar5 + 0x10 + lVar12 * 4),
                            *(uint8_t (*) [16])(uVar6 + 0x10 + lVar12 * 4));
            pfVar1 = (float *)(uVar7 + 0x10 + lVar12 * 4);
            auVar22._4_4_ = pfVar1[1] * auVar23._4_4_;
            auVar22._0_4_ = *pfVar1 * auVar23._0_4_;
            auVar22._8_4_ = pfVar1[2] * auVar23._8_4_;
            auVar22._12_4_ = pfVar1[3] * auVar23._12_4_;
            auVar23 = maxps(auVar20,auVar22);
            *(uint8_t (*) [16])(uVar8 + 0x10 + lVar12 * 4) = auVar23;
            lVar12 = lVar12 + 8;
            lVar14 = lVar14 + 2;
          } while (lVar14 != 0);
        }
        param_1 = 0;
        if ((uVar16 & 1) != 0) {
          auVar20 = divps(*(uint8_t (*) [16])(uVar5 + lVar12 * 4),
                          *(uint8_t (*) [16])(uVar6 + lVar12 * 4));
          pfVar1 = (float *)(uVar7 + lVar12 * 4);
          auVar24._0_4_ = *pfVar1 * auVar20._0_4_;
          auVar24._4_4_ = pfVar1[1] * auVar20._4_4_;
          auVar24._8_4_ = pfVar1[2] * auVar20._8_4_;
          auVar24._12_4_ = pfVar1[3] * auVar20._12_4_;
          auVar20 = maxps(g_02416630,auVar24);
          *(uint8_t (*) [16])(uVar8 + lVar12 * 4) = auVar20;
        }
        if (uVar13 == uVar18) goto LAB_015bd535;
      }
    }
    uVar16 = ~uVar13;
    if ((uVar4 & 1) != 0) {
      fVar19 = (*(float *)(uVar5 + uVar13 * 4) / *(float *)(uVar6 + uVar13 * 4)) *
               *(float *)(uVar7 + uVar13 * 4);
      fVar2 = g_0240d16c;
      if (g_0240d16c <= fVar19) {
        fVar2 = fVar19;
      }
      *(float *)(uVar8 + uVar13 * 4) = fVar2;
      uVar13 = uVar13 | 1;
    }
    fVar2 = g_0240d16c;
    param_1 = uVar16 + uVar18;
    if (param_1 != 0) {
      do {
        fVar21 = (*(float *)(uVar5 + uVar13 * 4) / *(float *)(uVar6 + uVar13 * 4)) *
                 *(float *)(uVar7 + uVar13 * 4);
        fVar19 = fVar2;
        if (fVar2 <= fVar21) {
          fVar19 = fVar21;
        }
        *(float *)(uVar8 + uVar13 * 4) = fVar19;
        fVar21 = (*(float *)(uVar5 + 4 + uVar13 * 4) / *(float *)(uVar6 + 4 + uVar13 * 4)) *
                 *(float *)(uVar7 + 4 + uVar13 * 4);
        fVar19 = fVar2;
        if (fVar2 <= fVar21) {
          fVar19 = fVar21;
        }
        *(float *)(uVar8 + 4 + uVar13 * 4) = fVar19;
        uVar13 = uVar13 + 2;
      } while (uVar18 != uVar13);
    }
  }
LAB_015bd535:
  pVar15 = (void*)param_1;
  FUN_015b7cb0();
  lVar12 = *arg1;
  pvVar9 = _pthread_getspecific(pVar15);
  if (pvVar9 != (void *)0x0) {
    lVar12 = *arg1;
    lVar14 = FUN_00e8b990();
    if (lVar14 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
    }
  }
  lVar12 = *(int64_t *)(lVar12 + 0x60);
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  FUN_015b92d0();
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  lVar12 = *arg1;
  pvVar9 = _pthread_getspecific(pVar15);
  if (pvVar9 != (void *)0x0) {
    lVar12 = *arg1;
    lVar14 = FUN_00e8b990();
    if (lVar14 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
    }
  }
  lVar12 = *(int64_t *)(lVar12 + 0x68);
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_015b9470();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  lVar12 = *arg1;
  pvVar9 = _pthread_getspecific(pVar15);
  if (pvVar9 != (void *)0x0) {
    lVar12 = *arg1;
    lVar14 = FUN_00e8b990();
    if (lVar14 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
    }
  }
  fVar2 = *(float *)(lVar12 + 0x90);
  if ((*(float *)(this_ptr + 0x90) != fVar2) || (NAN(*(float *)(this_ptr + 0x90)) || NAN(fVar2)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0x90) = fVar2;
    FUN_00d64910();
  }
  lVar12 = *arg1;
  pvVar9 = _pthread_getspecific(pVar15);
  if (pvVar9 != (void *)0x0) {
    lVar12 = *arg1;
    lVar14 = FUN_00e8b990();
    if (lVar14 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
    }
  }
  fVar2 = *(float *)(lVar12 + 0x94);
  if ((*(float *)(this_ptr + 0x94) != fVar2) || (NAN(*(float *)(this_ptr + 0x94)) || NAN(fVar2)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0x94) = fVar2;
    FUN_00d64910();
  }
  lVar12 = *arg1;
  pvVar9 = _pthread_getspecific(pVar15);
  if (pvVar9 != (void *)0x0) {
    lVar12 = *arg1;
    lVar14 = FUN_00e8b990();
    if (lVar14 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
    }
  }
  fVar2 = *(float *)(lVar12 + 0xa4);
  if ((*(float *)(this_ptr + 0xa4) != fVar2) || (NAN(*(float *)(this_ptr + 0xa4)) || NAN(fVar2)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0xa4) = fVar2;
    FUN_00d64910();
  }
  lVar12 = *arg1;
  pvVar9 = _pthread_getspecific(pVar15);
  if (pvVar9 != (void *)0x0) {
    lVar12 = *arg1;
    lVar14 = FUN_00e8b990();
    if (lVar14 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
    }
  }
  fVar2 = *(float *)(lVar12 + 0xa0);
  if ((*(float *)(this_ptr + 0xa0) != fVar2) || (NAN(*(float *)(this_ptr + 0xa0)) || NAN(fVar2)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0xa0) = fVar2;
    FUN_00d64910();
  }
  lVar12 = *arg1;
  pvVar9 = _pthread_getspecific(pVar15);
  if (pvVar9 != (void *)0x0) {
    lVar12 = *arg1;
    lVar14 = FUN_00e8b990();
    if (lVar14 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
    }
  }
  fVar2 = *(float *)(lVar12 + 0xa8);
  if ((*(float *)(this_ptr + 0xa8) != fVar2) || (NAN(*(float *)(this_ptr + 0xa8)) || NAN(fVar2)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0xa8) = fVar2;
    FUN_00d64910();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return;
}


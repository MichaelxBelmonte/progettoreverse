// Function: FUN_015be4d0
// Address: 015be4d0
// Size: 1212 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015be4d0(float param_1,uint64_t param_2,size_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *in_RCX;
  uint64_t uVar12;
  int64_t *arg1;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t this_ptr;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  float fVar18;
  uint8_t auVar19 [16];
  float fVar20;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  int64_t local_40;
  char local_38;
  
  if (*(int *)(this_ptr + 0x40) == 3) {
    return;
  }
  uVar5 = *(uint *)(this_ptr + 0x44);
  uVar17 = (uint64_t)uVar5;
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(in_RCX,(void *)((uint64_t)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  if (((*(int64_t *)(this_ptr + 0x50) != 0) && (*(int64_t *)(this_ptr + 0x58) != 0)) &&
     (0 < (int)uVar5)) {
    uVar6 = *(uint64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
    uVar7 = *(uint64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10);
    uVar12 = *(uint64_t *)(local_40 + 0x10);
    if (uVar5 < 4) {
      uVar13 = 0;
    }
    else {
      uVar15 = uVar12 + uVar17 * 4;
      uVar13 = 0;
      if ((uVar7 + uVar17 * 4 <= uVar12 || uVar15 <= uVar7) &&
         (uVar6 + uVar17 * 4 <= uVar12 || uVar15 <= uVar6)) {
        uVar13 = (uint64_t)(uVar5 & 0xfffffffc);
        uVar15 = (uVar13 - 4 >> 2) + 1;
        if (uVar13 - 4 == 0) {
          lVar14 = 0;
        }
        else {
          lVar16 = -(uVar15 & 0xfffffffffffffffe);
          lVar14 = 0;
          do {
            auVar21 = divps(*(uint8_t (*) [16])(uVar7 + lVar14 * 4),
                            *(uint8_t (*) [16])(uVar6 + lVar14 * 4));
            *(uint8_t (*) [16])(uVar12 + lVar14 * 4) = auVar21;
            auVar21 = divps(*(uint8_t (*) [16])(uVar7 + 0x10 + lVar14 * 4),
                            *(uint8_t (*) [16])(uVar6 + 0x10 + lVar14 * 4));
            *(uint8_t (*) [16])(uVar12 + 0x10 + lVar14 * 4) = auVar21;
            lVar14 = lVar14 + 8;
            lVar16 = lVar16 + 2;
          } while (lVar16 != 0);
        }
        if ((uVar15 & 1) != 0) {
          auVar21 = divps(*(uint8_t (*) [16])(uVar7 + lVar14 * 4),
                          *(uint8_t (*) [16])(uVar6 + lVar14 * 4));
          *(uint8_t (*) [16])(uVar12 + lVar14 * 4) = auVar21;
        }
        if (uVar13 == uVar17) goto LAB_015be6bd;
      }
    }
    uVar15 = ~uVar13;
    if ((uVar5 & 1) != 0) {
      *(float *)(uVar12 + uVar13 * 4) =
           *(float *)(uVar7 + uVar13 * 4) / *(float *)(uVar6 + uVar13 * 4);
      uVar13 = uVar13 | 1;
    }
    if (uVar15 + uVar17 != 0) {
      do {
        *(float *)(uVar12 + uVar13 * 4) =
             *(float *)(uVar7 + uVar13 * 4) / *(float *)(uVar6 + uVar13 * 4);
        *(float *)(uVar12 + 4 + uVar13 * 4) =
             *(float *)(uVar7 + 4 + uVar13 * 4) / *(float *)(uVar6 + 4 + uVar13 * 4);
        uVar13 = uVar13 + 2;
      } while (uVar17 != uVar13);
    }
  }
LAB_015be6bd:
  **(void**)(*arg1 + 0x10) = (*(void**)(*arg1 + 0x10))[1];
  FUN_00c8e4f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  auVar21 = g_02416630;
  if ((int)uVar5 < 1) goto LAB_015be8e7;
  uVar6 = *(uint64_t *)(local_40 + 0x10);
  uVar7 = *(uint64_t *)(local_40 + 0x10);
  if ((uVar5 < 8) || ((uVar7 < uVar6 + uVar17 * 4 && (uVar6 < uVar7 + uVar17 * 4)))) {
    uVar12 = 0;
  }
  else {
    uVar12 = (uint64_t)(uVar5 & 0xfffffff8);
    uVar15 = (uVar12 - 8 >> 3) + 1;
    if (uVar12 - 8 == 0) {
      lVar14 = 0;
LAB_015be8ad:
      pfVar1 = (float *)(uVar6 + lVar14 * 4);
      pfVar3 = (float *)(uVar6 + 0x10 + lVar14 * 4);
      pfVar2 = (float *)(uVar7 + lVar14 * 4);
      pfVar4 = (float *)(uVar7 + 0x10 + lVar14 * 4);
      auVar19._0_4_ = *pfVar4 * *pfVar3;
      auVar19._4_4_ = pfVar4[1] * pfVar3[1];
      auVar19._8_4_ = pfVar4[2] * pfVar3[2];
      auVar19._12_4_ = pfVar4[3] * pfVar3[3];
      auVar21._4_4_ = pfVar2[1] * pfVar1[1];
      auVar21._0_4_ = *pfVar2 * *pfVar1;
      auVar21._8_4_ = pfVar2[2] * pfVar1[2];
      auVar21._12_4_ = pfVar2[3] * pfVar1[3];
      auVar23 = maxps(g_02416630,auVar21);
      auVar21 = maxps(g_02416630,auVar19);
      *(uint8_t (*) [16])(uVar7 + lVar14 * 4) = auVar23;
      *(uint8_t (*) [16])(uVar7 + 0x10 + lVar14 * 4) = auVar21;
    }
    else {
      lVar16 = -(uVar15 & 0xfffffffffffffffe);
      lVar14 = 0;
      do {
        pfVar1 = (float *)(uVar6 + lVar14 * 4);
        pfVar3 = (float *)(uVar6 + 0x10 + lVar14 * 4);
        pfVar2 = (float *)(uVar7 + lVar14 * 4);
        auVar22._0_4_ = *pfVar2 * *pfVar1;
        auVar22._4_4_ = pfVar2[1] * pfVar1[1];
        auVar22._8_4_ = pfVar2[2] * pfVar1[2];
        auVar22._12_4_ = pfVar2[3] * pfVar1[3];
        pfVar1 = (float *)(uVar7 + 0x10 + lVar14 * 4);
        auVar24._0_4_ = *pfVar1 * *pfVar3;
        auVar24._4_4_ = pfVar1[1] * pfVar3[1];
        auVar24._8_4_ = pfVar1[2] * pfVar3[2];
        auVar24._12_4_ = pfVar1[3] * pfVar3[3];
        pfVar1 = (float *)(uVar7 + 0x20 + lVar14 * 4);
        fVar8 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar20 = pfVar1[3];
        pfVar2 = (float *)(uVar7 + 0x30 + lVar14 * 4);
        fVar9 = pfVar2[1];
        fVar10 = pfVar2[2];
        fVar11 = pfVar2[3];
        auVar25 = maxps(auVar21,auVar22);
        auVar23 = maxps(auVar21,auVar24);
        *(uint8_t (*) [16])(uVar7 + lVar14 * 4) = auVar25;
        *(uint8_t (*) [16])(uVar7 + 0x10 + lVar14 * 4) = auVar23;
        pfVar3 = (float *)(uVar6 + 0x20 + lVar14 * 4);
        auVar25._0_4_ = *pfVar3 * *pfVar1;
        auVar25._4_4_ = pfVar3[1] * fVar8;
        auVar25._8_4_ = pfVar3[2] * fVar18;
        auVar25._12_4_ = pfVar3[3] * fVar20;
        pfVar1 = (float *)(uVar6 + 0x30 + lVar14 * 4);
        auVar24 = maxps(auVar21,auVar25);
        auVar23._4_4_ = pfVar1[1] * fVar9;
        auVar23._0_4_ = *pfVar1 * *pfVar2;
        auVar23._8_4_ = pfVar1[2] * fVar10;
        auVar23._12_4_ = pfVar1[3] * fVar11;
        auVar23 = maxps(auVar21,auVar23);
        *(uint8_t (*) [16])(uVar7 + 0x20 + lVar14 * 4) = auVar24;
        *(uint8_t (*) [16])(uVar7 + 0x30 + lVar14 * 4) = auVar23;
        lVar14 = lVar14 + 0x10;
        lVar16 = lVar16 + 2;
      } while (lVar16 != 0);
      if ((uVar15 & 1) != 0) goto LAB_015be8ad;
    }
    if (uVar12 == uVar17) goto LAB_015be8e7;
  }
  uVar15 = ~uVar12;
  if ((uVar5 & 1) != 0) {
    fVar18 = *(float *)(uVar6 + uVar12 * 4) * *(float *)(uVar7 + uVar12 * 4);
    fVar8 = g_0240d16c;
    if (g_0240d16c <= fVar18) {
      fVar8 = fVar18;
    }
    *(float *)(uVar7 + uVar12 * 4) = fVar8;
    uVar12 = uVar12 | 1;
  }
  fVar8 = g_0240d16c;
  if (uVar15 + uVar17 != 0) {
    do {
      fVar20 = *(float *)(uVar6 + uVar12 * 4) * *(float *)(uVar7 + uVar12 * 4);
      fVar18 = fVar8;
      if (fVar8 <= fVar20) {
        fVar18 = fVar20;
      }
      *(float *)(uVar7 + uVar12 * 4) = fVar18;
      fVar20 = *(float *)(uVar6 + 4 + uVar12 * 4) * *(float *)(uVar7 + 4 + uVar12 * 4);
      fVar18 = fVar8;
      if (fVar8 <= fVar20) {
        fVar18 = fVar20;
      }
      *(float *)(uVar7 + 4 + uVar12 * 4) = fVar18;
      uVar12 = uVar12 + 2;
    } while (uVar17 != uVar12);
  }
LAB_015be8e7:
  if ((*(float *)(this_ptr + 0x8c) != param_1) ||
     (NAN(*(float *)(this_ptr + 0x8c)) || NAN(param_1))) {
    FUN_00d64850();
    *(float *)(this_ptr + 0x8c) = param_1;
    FUN_00d64910();
  }
  FUN_015ba230();
  FUN_015b7cb0();
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


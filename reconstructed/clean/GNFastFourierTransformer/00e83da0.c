// Function: FUN_00e83da0
// Address: 00e83da0
// Size: 733 bytes
// Class: GNFastFourierTransformer

float * FUN_00e83da0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int64_t lVar22;
  char unaff_SIL;
  uint uVar23;
  uint unaff_EDI;
  int64_t lVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  
  pfVar18 = (float *)FUN_00e83010();
  uVar25 = 1;
  if (0 < (int)unaff_EDI) {
    uVar25 = unaff_EDI;
  }
  dVar29 = g_02411080 / (double)(int)uVar25;
  pfVar19 = pfVar18;
  dVar27 = g_023e1728;
  uVar17 = uVar25;
  if ((uVar25 & 1) != 0) {
    *pfVar18 = 0.0;
    pfVar19 = pfVar18 + 1;
    dVar27 = g_023e1728 + dVar29;
    uVar17 = uVar25 - 1;
  }
  if (1 < (int)unaff_EDI) {
    lVar22 = 0;
    do {
      dVar26 = (double)_cos(dVar27);
      pfVar19[lVar22] = (float)((dVar26 + g_0238fee8) * g_023942d0);
      dVar26 = (double)_cos(dVar27 + dVar29);
      pfVar19[lVar22 + 1] = (float)((dVar26 + g_0238fee8) * g_023942d0);
      dVar27 = dVar27 + dVar29 + dVar29;
      lVar22 = lVar22 + 2;
    } while (uVar17 != (uint)lVar22);
  }
  if (unaff_SIL == '\0') goto LAB_00e84056;
  uVar17 = uVar25 - 1;
  pfVar19 = pfVar18;
  if ((uVar25 & 7) == 0) {
    fVar28 = 0.0;
    uVar23 = uVar25;
  }
  else {
    fVar28 = 0.0;
    uVar23 = 0;
    do {
      fVar28 = fVar28 + *pfVar19;
      pfVar19 = pfVar19 + 1;
      uVar23 = uVar23 + 1;
    } while ((uVar25 & 7) != uVar23);
    uVar23 = uVar25 - uVar23;
  }
  if (6 < uVar17) {
    lVar22 = 0;
    do {
      fVar28 = fVar28 + pfVar19[lVar22] + pfVar19[lVar22 + 1] + pfVar19[lVar22 + 2] +
               pfVar19[lVar22 + 3] + pfVar19[lVar22 + 4] + pfVar19[lVar22 + 5] + pfVar19[lVar22 + 6]
               + pfVar19[lVar22 + 7];
      lVar22 = lVar22 + 8;
    } while (uVar23 != (uint)lVar22);
  }
  fVar28 = g_02390124 / fVar28;
  pfVar19 = pfVar18;
  if (6 < uVar17) {
    uVar20 = (uint64_t)uVar17 + 1 & 0xfffffffffffffff8;
    uVar21 = (uVar20 - 8 >> 3) + 1;
    if (uVar20 - 8 == 0) {
      lVar22 = 0;
LAB_00e83ffb:
      pfVar1 = pfVar18 + lVar22;
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      pfVar19 = pfVar18 + lVar22 + 4;
      fVar5 = *pfVar19;
      fVar6 = pfVar19[1];
      fVar7 = pfVar19[2];
      fVar8 = pfVar19[3];
      pfVar19 = pfVar18 + lVar22;
      *pfVar19 = *pfVar1 * fVar28;
      pfVar19[1] = fVar2 * fVar28;
      pfVar19[2] = fVar3 * fVar28;
      pfVar19[3] = fVar4 * fVar28;
      pfVar19 = pfVar18 + lVar22 + 4;
      *pfVar19 = fVar5 * fVar28;
      pfVar19[1] = fVar6 * fVar28;
      pfVar19[2] = fVar7 * fVar28;
      pfVar19[3] = fVar8 * fVar28;
    }
    else {
      lVar24 = -(uVar21 & 0xfffffffffffffffe);
      lVar22 = 0;
      do {
        pfVar1 = pfVar18 + lVar22;
        fVar2 = pfVar1[1];
        fVar3 = pfVar1[2];
        fVar4 = pfVar1[3];
        pfVar19 = pfVar18 + lVar22 + 4;
        fVar5 = *pfVar19;
        fVar6 = pfVar19[1];
        fVar7 = pfVar19[2];
        fVar8 = pfVar19[3];
        pfVar19 = pfVar18 + lVar22 + 8;
        fVar9 = *pfVar19;
        fVar10 = pfVar19[1];
        fVar11 = pfVar19[2];
        fVar12 = pfVar19[3];
        pfVar19 = pfVar18 + lVar22 + 0xc;
        fVar13 = *pfVar19;
        fVar14 = pfVar19[1];
        fVar15 = pfVar19[2];
        fVar16 = pfVar19[3];
        pfVar19 = pfVar18 + lVar22;
        *pfVar19 = *pfVar1 * fVar28;
        pfVar19[1] = fVar2 * fVar28;
        pfVar19[2] = fVar3 * fVar28;
        pfVar19[3] = fVar4 * fVar28;
        pfVar19 = pfVar18 + lVar22 + 4;
        *pfVar19 = fVar5 * fVar28;
        pfVar19[1] = fVar6 * fVar28;
        pfVar19[2] = fVar7 * fVar28;
        pfVar19[3] = fVar8 * fVar28;
        pfVar19 = pfVar18 + lVar22 + 8;
        *pfVar19 = fVar9 * fVar28;
        pfVar19[1] = fVar10 * fVar28;
        pfVar19[2] = fVar11 * fVar28;
        pfVar19[3] = fVar12 * fVar28;
        pfVar19 = pfVar18 + lVar22 + 0xc;
        *pfVar19 = fVar13 * fVar28;
        pfVar19[1] = fVar14 * fVar28;
        pfVar19[2] = fVar15 * fVar28;
        pfVar19[3] = fVar16 * fVar28;
        lVar22 = lVar22 + 0x10;
        lVar24 = lVar24 + 2;
      } while (lVar24 != 0);
      if ((uVar21 & 1) != 0) goto LAB_00e83ffb;
    }
    if ((uint64_t)uVar17 + 1 == uVar20) goto LAB_00e84056;
    uVar25 = uVar25 - (int)uVar20;
    pfVar19 = pfVar18 + uVar20;
  }
  lVar22 = 0;
  do {
    pfVar19[lVar22] = pfVar19[lVar22] * fVar28;
    lVar22 = lVar22 + 1;
  } while (uVar25 != (uint)lVar22);
LAB_00e84056:
  pfVar18[(int)unaff_EDI] = 0.0;
  return pfVar18;
}


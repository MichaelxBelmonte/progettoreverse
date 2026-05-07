// Function: FUN_015c2da0
// Address: 015c2da0
// Size: 1041 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015c2da0(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  uint *puVar2;
  double dVar3;
  uint8_t auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t in_RCX;
  int64_t lVar11;
  float *pfVar12;
  int64_t in_RDX;
  int64_t lVar13;
  uint8_t unaff_SIL;
  undefined7 unaff_00000031;
  uint unaff_EDI;
  int in_R8D;
  float fVar14;
  double dVar15;
  double dVar16;
  uint8_t auVar17 [16];
  double dVar18;
  double dVar19;
  uint8_t auVar20 [16];
  double dVar21;
  float fVar24;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  float fVar25;
  float fVar26;
  uint64_t uVar27;
  uint32_t uVar28;
  uint64_t uVar29;
  float fVar30;
  float fVar31;
  uint32_t uVar32;
  uint32_t uVar33;
  double dVar34;
  float fVar35;
  float fVar37;
  uint8_t auVar36 [16];
  float fVar38;
  float fVar40;
  uint8_t auVar39 [16];
  
  if (((CONCAT71(unaff_00000031,unaff_SIL) != 0) && (in_RDX != 0 || in_RCX != 0)) &&
     (0 < (int)unaff_EDI)) {
    puVar2 = (uint *)CONCAT71(unaff_00000031,unaff_SIL);
    fVar14 = g_0239011c * param_4;
    if (param_2 <= g_0239011c * param_4) {
      fVar14 = param_2;
    }
    dVar15 = (double)___exp10((double)param_1 / g_02395718);
    dVar18 = (double)param_4;
    dVar16 = (double)___sincos_stret(((double)fVar14 * g_02411080) / dVar18);
    dVar3 = g_0238fee8 + dVar15;
    dVar19 = g_023b19a0 + dVar15;
    dVar6 = dVar18 * dVar19;
    if (in_RDX == 0) {
      dVar16 = dVar16 * (SQRT(dVar15) / (double)param_3);
      dVar34 = dVar3 + dVar6 + dVar16;
      dVar5 = (dVar19 + dVar18 * dVar3) * g_023b1e90 * dVar15;
      dVar21 = (dVar3 + dVar6) - dVar16;
      dVar7 = (dVar3 - dVar6) + dVar16;
      dVar19 = dVar19 - dVar18 * dVar3;
      dVar19 = dVar19 + dVar19;
      dVar16 = (dVar3 - dVar6) - dVar16;
      lVar10 = in_RCX;
    }
    else {
      dVar16 = dVar16 * (SQRT(dVar15) / (double)param_3);
      dVar34 = (dVar3 - dVar6) + dVar16;
      dVar5 = (dVar19 - dVar18 * dVar3) * (dVar15 + dVar15);
      dVar21 = (dVar3 - dVar6) - dVar16;
      dVar7 = dVar3 + dVar6 + dVar16;
      dVar19 = (dVar18 * dVar3 + dVar19) * g_023b1e90;
      dVar16 = (dVar3 + dVar6) - dVar16;
      lVar10 = in_RDX;
    }
    fVar14 = (float)dVar7;
    auVar36._0_4_ = (float)dVar5;
    auVar36._4_4_ = (float)(dVar34 * dVar15);
    auVar36._8_8_ = 0;
    auVar23._0_4_ = (float)(dVar21 * dVar15);
    auVar23._4_4_ = (float)dVar19;
    auVar23._8_8_ = 0;
    auVar39._4_4_ = fVar14;
    auVar39._0_4_ = fVar14;
    auVar39._8_8_ = 0;
    auVar36 = divps(auVar36,auVar39);
    auVar39 = divps(auVar23,auVar39);
    if (in_R8D == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = (uint64_t)*puVar2;
    }
    uVar29 = 0;
    fVar14 = (float)dVar16 / fVar14;
    fVar37 = auVar36._4_4_;
    fVar40 = auVar39._4_4_;
    lVar11 = 0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar27;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar27;
    fVar26 = (float)uVar27;
    uVar32 = 0;
    uVar33 = 0;
    do {
      fVar31 = (float)puVar2[lVar11];
      fVar35 = auVar36._0_4_;
      fVar38 = auVar39._0_4_;
      uVar28 = (uint32_t)uVar29;
      uVar9 = (uint64_t)uVar29 >> 0x20;
      fVar30 = (((float)uVar27 * fVar38 + fVar35 * auVar17._0_4_ + fVar37 * fVar31) -
               fVar40 * fVar26) - auVar22._0_4_ * fVar14;
      *(float *)(lVar10 + lVar11 * 4) = fVar30;
      lVar11 = lVar11 + 1;
      uVar27 = auVar17._0_8_;
      uVar29 = auVar17._8_8_;
      auVar22._4_4_ = 0;
      auVar22._0_4_ = fVar26;
      auVar22._8_4_ = uVar32;
      auVar22._12_4_ = uVar33;
      auVar17 = ZEXT416((uint)fVar31);
      fVar26 = fVar30;
      uVar32 = uVar28;
      uVar33 = (int)uVar9;
    } while (unaff_EDI != (uint)lVar11);
    lVar13 = (int64_t)(int)unaff_EDI;
    lVar11 = lVar10 + lVar13 * 4;
    pfVar12 = (float *)(lVar11 + -4);
    if (in_R8D == 0) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = *pfVar12;
    }
    if (in_RDX == 0 || in_RCX == 0) {
      fVar31 = fVar26;
      fVar30 = fVar26;
      uVar8 = unaff_EDI;
      if ((unaff_EDI & 1) != 0) {
        fVar31 = *pfVar12;
        auVar39 = insertps(ZEXT416((uint)fVar26),ZEXT416((uint)fVar31),0x10);
        fVar30 = ((fVar38 * fVar26 + auVar39._4_4_ * fVar37 + auVar39._0_4_ * fVar35) -
                 fVar40 * fVar26) - fVar14 * fVar26;
        *pfVar12 = fVar30;
        pfVar12 = (float *)(lVar11 + -8);
        uVar8 = unaff_EDI - 1;
      }
      if (unaff_EDI != 1) {
        lVar10 = 0;
        fVar24 = fVar26;
        do {
          fVar25 = pfVar12[lVar10 + -1];
          fVar1 = pfVar12[lVar10];
          auVar39 = insertps(ZEXT416((uint)fVar31),ZEXT416((uint)fVar1),0x10);
          fVar26 = ((fVar24 * fVar38 + auVar39._4_4_ * fVar37 + auVar39._0_4_ * fVar35) -
                   fVar40 * fVar30) - fVar26 * fVar14;
          pfVar12[lVar10] = fVar26;
          auVar39 = insertps(ZEXT416((uint)fVar1),ZEXT416((uint)fVar25),0x10);
          fVar30 = ((fVar31 * fVar38 + auVar39._4_4_ * fVar37 + auVar39._0_4_ * fVar35) -
                   fVar40 * fVar26) - fVar30 * fVar14;
          pfVar12[lVar10 + -1] = fVar30;
          lVar10 = lVar10 + -2;
          fVar31 = fVar25;
          fVar24 = fVar1;
        } while (-uVar8 != (int)lVar10);
      }
    }
    else {
      auVar20._4_4_ = fVar26;
      auVar20._0_4_ = fVar26;
      auVar20._8_8_ = 0;
      fVar31 = fVar26;
      do {
        auVar39 = ZEXT416((uint)fVar26);
        fVar26 = *(float *)(lVar10 + -4 + lVar13 * 4);
        auVar23 = insertps(auVar39,ZEXT416((uint)fVar26),0x10);
        fVar24 = auVar23._4_4_ * fVar37;
        fVar25 = auVar23._12_4_ * auVar36._12_4_;
        fVar30 = auVar20._4_4_;
        fVar31 = ((fVar24 + auVar23._0_4_ * fVar35 + fVar38 * auVar20._0_4_) - fVar40 * fVar30) -
                 fVar31 * fVar14;
        *(float *)(lVar10 + -4 + lVar13 * 4) = fVar31;
        *(float *)(in_RCX + -4 + lVar13 * 4) = (float)puVar2[lVar13 + -1] - fVar31;
        auVar4._4_4_ = fVar24;
        auVar4._0_4_ = fVar31;
        auVar4._8_4_ = fVar25;
        auVar4._12_4_ = fVar25;
        auVar20 = insertps(auVar39,auVar4,0x10);
        lVar13 = lVar13 + -1;
        fVar31 = fVar30;
      } while ((int)lVar13 != 0);
    }
  }
  return;
}


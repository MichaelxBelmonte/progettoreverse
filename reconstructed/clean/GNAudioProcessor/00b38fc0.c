// Function: FUN_00b38fc0
// Address: 00b38fc0
// Size: 2182 bytes
// Class: GNAudioProcessor

void FUN_00b38fc0(uint param_1,uint64_t *param_2)

{
  void*puVar1;
  void*puVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  float *pfVar11;
  int64_t lVar12;
  uint64_t *arg1;
  float *pfVar13;
  int64_t lVar14;
  int64_t this_ptr;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint8_t auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_XMM6_Da;
  float fVar33;
  float fVar34;
  float fVar35;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  
  iVar8 = FUN_00b33520();
  if ((iVar8 == 1) && (iVar8 = FUN_00b33590(), iVar8 == 1)) {
    uVar10 = *arg1;
    uVar19 = *param_2;
    if ((*(float *)(this_ptr + 0x90) != 0.0) || (NAN(*(float *)(this_ptr + 0x90)))) {
      uVar18 = *(uint64_t *)(this_ptr + 0xb0);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar18;
      uVar15 = *(uint64_t *)(this_ptr + 0xb8);
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar15;
      if ((int)param_1 < 1) {
        fVar23 = (float)(uVar18 >> 0x20);
        fVar26 = (float)(uVar15 >> 0x20);
        fVar24 = (float)uVar18;
        fVar38 = (float)uVar15;
      }
      else {
        fVar3 = *(float *)(this_ptr + 0x9c);
        uVar5 = *(void*)(this_ptr + 0xa0);
        uVar6 = *(void*)(this_ptr + 0xa8);
        iVar8 = param_1 + 1;
        lVar12 = 0;
        do {
          fVar23 = auVar29._0_4_;
          fVar26 = auVar37._0_4_;
          fVar24 = *(float *)(uVar10 + lVar12);
          auVar36._4_4_ = (float)((uint64_t)uVar5 >> 0x20) * auVar29._4_4_;
          auVar36._12_4_ = auVar29._12_4_ * 0.0;
          fVar38 = ((auVar36._4_4_ + fVar3 * fVar24 + (float)uVar5 * fVar23) - (float)uVar6 * fVar26
                   ) - (float)((uint64_t)uVar6 >> 0x20) * auVar37._4_4_;
          *(float *)(uVar19 + lVar12) = fVar38;
          auVar36._0_4_ = fVar38;
          auVar36._8_4_ = auVar36._12_4_;
          auVar37 = insertps(auVar36,auVar37,0x1c);
          auVar29 = insertps(ZEXT416((uint)fVar24),auVar29,0x1c);
          iVar8 = iVar8 + -1;
          lVar12 = lVar12 + 4;
        } while (1 < iVar8);
      }
      *(float *)(this_ptr + 0xb0) = fVar24;
      *(float *)(this_ptr + 0xb8) = fVar38;
      *(float *)(this_ptr + 0xb4) = fVar23;
      *(float *)(this_ptr + 0xbc) = fVar26;
      return;
    }
    if (uVar10 == uVar19) {
      return;
    }
    if ((int)param_1 < 1) {
      return;
    }
    if ((6 < param_1 - 1) &&
       ((uVar18 = (uint64_t)(param_1 - 1) + 1, uVar10 + uVar18 * 4 <= uVar19 ||
        (uVar19 + uVar18 * 4 <= uVar10)))) {
      uVar17 = uVar18 & 0xfffffffffffffff8;
      uVar15 = (uVar17 - 8 >> 3) + 1;
      uVar20 = (uint64_t)((uint)uVar15 & 3);
      if (uVar17 - 8 < 0x18) {
        lVar12 = 0;
      }
      else {
        lVar16 = -(uVar15 & 0xfffffffffffffffc);
        lVar12 = 0;
        do {
          puVar1 = (void*)(uVar10 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (void*)(uVar10 + 0x10 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (void*)(uVar19 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (void*)(uVar19 + 0x10 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (void*)(uVar10 + 0x20 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (void*)(uVar10 + 0x30 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (void*)(uVar19 + 0x20 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (void*)(uVar19 + 0x30 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (void*)(uVar10 + 0x40 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (void*)(uVar10 + 0x50 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (void*)(uVar19 + 0x40 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (void*)(uVar19 + 0x50 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (void*)(uVar10 + 0x60 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (void*)(uVar10 + 0x70 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (void*)(uVar19 + 0x60 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (void*)(uVar19 + 0x70 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
          lVar16 = lVar16 + 4;
        } while (lVar16 != 0);
      }
      if (uVar20 != 0) {
        lVar16 = uVar10 + lVar12 * 4;
        lVar12 = uVar19 + lVar12 * 4;
        lVar14 = 0;
        do {
          puVar2 = (void*)(lVar16 + lVar14);
          uVar5 = puVar2[1];
          puVar1 = (void*)(lVar16 + 0x10 + lVar14);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (void*)(lVar12 + lVar14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (void*)(lVar12 + 0x10 + lVar14);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar14 = lVar14 + 0x20;
        } while (uVar20 << 5 != lVar14);
      }
      if (uVar18 == uVar17) {
        return;
      }
      param_1 = param_1 - (int)uVar17;
      uVar19 = uVar19 + uVar17 * 4;
      uVar10 = uVar10 + uVar17 * 4;
    }
    iVar8 = param_1 + 1;
    lVar12 = 0;
    do {
      *(void*)(uVar19 + lVar12) = *(void*)(uVar10 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
    return;
  }
  iVar8 = FUN_00b33520();
  if (iVar8 != 2) {
    return;
  }
  iVar8 = FUN_00b33590();
  if (iVar8 != 2) {
    return;
  }
  pfVar11 = (float *)*arg1;
  pfVar21 = (float *)arg1[1];
  pfVar13 = (float *)*param_2;
  pfVar22 = (float *)param_2[1];
  fVar24 = *(float *)(this_ptr + 0x90);
  if ((fVar24 != 0.0) || (NAN(fVar24))) {
    fVar23 = *(float *)(this_ptr + 0x9c);
    fVar26 = *(float *)(this_ptr + 0xa0);
    fVar38 = *(float *)(this_ptr + 0xa4);
    fVar3 = *(float *)(this_ptr + 0xa8);
    fVar4 = *(float *)(this_ptr + 0xac);
    fVar25 = *(float *)(this_ptr + 0xb0);
    fVar34 = *(float *)(this_ptr + 0xb8);
    fVar27 = *(float *)(this_ptr + 0xb4);
    fVar31 = *(float *)(this_ptr + 0xbc);
    fVar35 = fVar25;
    fVar32 = fVar31;
    if (0 < (int)param_1) {
      fVar39 = fVar25;
      uVar9 = param_1;
      fVar28 = fVar27;
      fVar33 = fVar34;
      if ((param_1 & 1) != 0) {
        fVar24 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        unaff_XMM6_Da =
             ((fVar27 * fVar38 + fVar26 * fVar25 + fVar23 * fVar24) - fVar3 * fVar34) -
             fVar31 * fVar4;
        *pfVar13 = unaff_XMM6_Da;
        pfVar13 = pfVar13 + 1;
        fVar31 = fVar34;
        fVar39 = fVar24;
        uVar9 = param_1 - 1;
        fVar28 = fVar25;
        fVar33 = unaff_XMM6_Da;
      }
      fVar35 = fVar24;
      fVar27 = fVar25;
      fVar32 = fVar34;
      fVar34 = unaff_XMM6_Da;
      if (param_1 != 1) {
        iVar8 = uVar9 + 2;
        lVar12 = 0;
        do {
          fVar27 = *(float *)((int64_t)pfVar11 + lVar12);
          fVar31 = ((fVar28 * fVar38 + fVar26 * fVar39 + fVar23 * fVar27) - fVar3 * fVar33) -
                   fVar31 * fVar4;
          *(float *)((int64_t)pfVar13 + lVar12) = fVar31;
          fVar35 = *(float *)((int64_t)pfVar11 + lVar12 + 4);
          fVar33 = ((fVar39 * fVar38 + fVar26 * fVar27 + fVar23 * fVar35) - fVar3 * fVar31) -
                   fVar33 * fVar4;
          *(float *)((int64_t)pfVar13 + lVar12 + 4) = fVar33;
          iVar8 = iVar8 + -2;
          lVar12 = lVar12 + 8;
          fVar39 = fVar35;
          fVar32 = fVar31;
          fVar28 = fVar27;
          fVar34 = fVar33;
        } while (2 < iVar8);
      }
    }
    *(float *)(this_ptr + 0xb0) = fVar35;
    *(float *)(this_ptr + 0xb8) = fVar34;
    *(float *)(this_ptr + 0xb4) = fVar27;
    *(float *)(this_ptr + 0xbc) = fVar32;
    fVar24 = *(float *)(this_ptr + 0xc0);
    fVar25 = *(float *)(this_ptr + 0xc4);
    fVar34 = *(float *)(this_ptr + 200);
    fVar35 = *(float *)(this_ptr + 0xcc);
    fVar28 = fVar24;
    fVar33 = fVar34;
    fVar32 = fVar25;
    fVar39 = fVar35;
    if (0 < (int)param_1) {
      fVar40 = fVar24;
      fVar30 = fVar34;
      uVar9 = param_1;
      if ((param_1 & 1) != 0) {
        fVar27 = *pfVar21;
        pfVar21 = pfVar21 + 1;
        fVar31 = ((fVar25 * fVar38 + fVar26 * fVar24 + fVar23 * fVar27) - fVar3 * fVar34) -
                 fVar35 * fVar4;
        *pfVar22 = fVar31;
        pfVar22 = pfVar22 + 1;
        fVar25 = fVar24;
        fVar40 = fVar27;
        fVar30 = fVar31;
        uVar9 = param_1 - 1;
        fVar35 = fVar34;
      }
      fVar28 = fVar27;
      fVar33 = fVar31;
      fVar32 = fVar24;
      fVar39 = fVar34;
      if (param_1 != 1) {
        iVar8 = uVar9 + 2;
        lVar12 = 0;
        do {
          fVar32 = *(float *)((int64_t)pfVar21 + lVar12);
          fVar35 = ((fVar25 * fVar38 + fVar26 * fVar40 + fVar23 * fVar32) - fVar3 * fVar30) -
                   fVar35 * fVar4;
          *(float *)((int64_t)pfVar22 + lVar12) = fVar35;
          fVar28 = *(float *)((int64_t)pfVar21 + lVar12 + 4);
          fVar30 = ((fVar40 * fVar38 + fVar26 * fVar32 + fVar23 * fVar28) - fVar3 * fVar35) -
                   fVar30 * fVar4;
          *(float *)((int64_t)pfVar22 + lVar12 + 4) = fVar30;
          iVar8 = iVar8 + -2;
          lVar12 = lVar12 + 8;
          fVar25 = fVar32;
          fVar33 = fVar30;
          fVar40 = fVar28;
          fVar39 = fVar35;
        } while (2 < iVar8);
      }
    }
    *(float *)(this_ptr + 0xc0) = fVar28;
    *(float *)(this_ptr + 200) = fVar33;
    *(float *)(this_ptr + 0xc4) = fVar32;
    *(float *)(this_ptr + 0xcc) = fVar39;
    return;
  }
  if ((pfVar11 != pfVar13) && (0 < (int)param_1)) {
    uVar9 = param_1;
    if ((6 < param_1 - 1) &&
       ((uVar19 = (uint64_t)(param_1 - 1) + 1, pfVar11 + uVar19 <= pfVar13 ||
        (pfVar13 + uVar19 <= pfVar11)))) {
      uVar18 = uVar19 & 0xfffffffffffffff8;
      uVar10 = (uVar18 - 8 >> 3) + 1;
      uVar15 = (uint64_t)((uint)uVar10 & 3);
      if (uVar18 - 8 < 0x18) {
        lVar16 = 0;
      }
      else {
        lVar12 = -(uVar10 & 0xfffffffffffffffc);
        lVar16 = 0;
        do {
          uVar5 = *(void*)(pfVar11 + lVar16 + 2);
          uVar6 = *(void*)(pfVar11 + lVar16 + 4);
          uVar7 = *(void*)(pfVar11 + lVar16 + 4 + 2);
          *(void*)(pfVar13 + lVar16) = *(void*)(pfVar11 + lVar16);
          *(void*)(pfVar13 + lVar16 + 2) = uVar5;
          *(void*)(pfVar13 + lVar16 + 4) = uVar6;
          *(void*)(pfVar13 + lVar16 + 4 + 2) = uVar7;
          uVar5 = *(void*)(pfVar11 + lVar16 + 8 + 2);
          uVar6 = *(void*)(pfVar11 + lVar16 + 0xc);
          uVar7 = *(void*)(pfVar11 + lVar16 + 0xc + 2);
          *(void*)(pfVar13 + lVar16 + 8) = *(void*)(pfVar11 + lVar16 + 8);
          *(void*)(pfVar13 + lVar16 + 8 + 2) = uVar5;
          *(void*)(pfVar13 + lVar16 + 0xc) = uVar6;
          *(void*)(pfVar13 + lVar16 + 0xc + 2) = uVar7;
          uVar5 = *(void*)(pfVar11 + lVar16 + 0x10 + 2);
          uVar6 = *(void*)(pfVar11 + lVar16 + 0x14);
          uVar7 = *(void*)(pfVar11 + lVar16 + 0x14 + 2);
          *(void*)(pfVar13 + lVar16 + 0x10) = *(void*)(pfVar11 + lVar16 + 0x10);
          *(void*)(pfVar13 + lVar16 + 0x10 + 2) = uVar5;
          *(void*)(pfVar13 + lVar16 + 0x14) = uVar6;
          *(void*)(pfVar13 + lVar16 + 0x14 + 2) = uVar7;
          uVar5 = *(void*)(pfVar11 + lVar16 + 0x18 + 2);
          uVar6 = *(void*)(pfVar11 + lVar16 + 0x1c);
          uVar7 = *(void*)(pfVar11 + lVar16 + 0x1c + 2);
          *(void*)(pfVar13 + lVar16 + 0x18) = *(void*)(pfVar11 + lVar16 + 0x18);
          *(void*)(pfVar13 + lVar16 + 0x18 + 2) = uVar5;
          *(void*)(pfVar13 + lVar16 + 0x1c) = uVar6;
          *(void*)(pfVar13 + lVar16 + 0x1c + 2) = uVar7;
          lVar16 = lVar16 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar15 != 0) {
        lVar12 = 0;
        do {
          puVar2 = (void*)((int64_t)pfVar11 + lVar12 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar1 = (void*)((int64_t)pfVar11 + lVar12 + lVar16 * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (void*)((int64_t)pfVar13 + lVar12 + lVar16 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (void*)((int64_t)pfVar13 + lVar12 + lVar16 * 4 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (uVar15 << 5 != lVar12);
      }
      if (uVar19 == uVar18) goto LAB_00b39126;
      pfVar13 = pfVar13 + uVar18;
      pfVar11 = pfVar11 + uVar18;
      uVar9 = param_1 - (int)uVar18;
    }
    iVar8 = uVar9 + 1;
    lVar12 = 0;
    do {
      *(void*)((int64_t)pfVar13 + lVar12) = *(void*)((int64_t)pfVar11 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
  }
LAB_00b39126:
  if ((pfVar21 != pfVar22) && (0 < (int)param_1)) {
    if ((6 < param_1 - 1) &&
       ((uVar19 = (uint64_t)(param_1 - 1) + 1, pfVar21 + uVar19 <= pfVar22 ||
        (pfVar22 + uVar19 <= pfVar21)))) {
      uVar15 = uVar19 & 0xfffffffffffffff8;
      uVar10 = (uVar15 - 8 >> 3) + 1;
      uVar18 = (uint64_t)((uint)uVar10 & 3);
      if (uVar15 - 8 < 0x18) {
        lVar16 = 0;
      }
      else {
        lVar12 = -(uVar10 & 0xfffffffffffffffc);
        lVar16 = 0;
        do {
          uVar5 = *(void*)(pfVar21 + lVar16 + 2);
          uVar6 = *(void*)(pfVar21 + lVar16 + 4);
          uVar7 = *(void*)(pfVar21 + lVar16 + 4 + 2);
          *(void*)(pfVar22 + lVar16) = *(void*)(pfVar21 + lVar16);
          *(void*)(pfVar22 + lVar16 + 2) = uVar5;
          *(void*)(pfVar22 + lVar16 + 4) = uVar6;
          *(void*)(pfVar22 + lVar16 + 4 + 2) = uVar7;
          uVar5 = *(void*)(pfVar21 + lVar16 + 8 + 2);
          uVar6 = *(void*)(pfVar21 + lVar16 + 0xc);
          uVar7 = *(void*)(pfVar21 + lVar16 + 0xc + 2);
          *(void*)(pfVar22 + lVar16 + 8) = *(void*)(pfVar21 + lVar16 + 8);
          *(void*)(pfVar22 + lVar16 + 8 + 2) = uVar5;
          *(void*)(pfVar22 + lVar16 + 0xc) = uVar6;
          *(void*)(pfVar22 + lVar16 + 0xc + 2) = uVar7;
          uVar5 = *(void*)(pfVar21 + lVar16 + 0x10 + 2);
          uVar6 = *(void*)(pfVar21 + lVar16 + 0x14);
          uVar7 = *(void*)(pfVar21 + lVar16 + 0x14 + 2);
          *(void*)(pfVar22 + lVar16 + 0x10) = *(void*)(pfVar21 + lVar16 + 0x10);
          *(void*)(pfVar22 + lVar16 + 0x10 + 2) = uVar5;
          *(void*)(pfVar22 + lVar16 + 0x14) = uVar6;
          *(void*)(pfVar22 + lVar16 + 0x14 + 2) = uVar7;
          uVar5 = *(void*)(pfVar21 + lVar16 + 0x18 + 2);
          uVar6 = *(void*)(pfVar21 + lVar16 + 0x1c);
          uVar7 = *(void*)(pfVar21 + lVar16 + 0x1c + 2);
          *(void*)(pfVar22 + lVar16 + 0x18) = *(void*)(pfVar21 + lVar16 + 0x18);
          *(void*)(pfVar22 + lVar16 + 0x18 + 2) = uVar5;
          *(void*)(pfVar22 + lVar16 + 0x1c) = uVar6;
          *(void*)(pfVar22 + lVar16 + 0x1c + 2) = uVar7;
          lVar16 = lVar16 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar18 != 0) {
        lVar12 = 0;
        do {
          puVar2 = (void*)((int64_t)pfVar21 + lVar12 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar1 = (void*)((int64_t)pfVar21 + lVar12 + lVar16 * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (void*)((int64_t)pfVar22 + lVar12 + lVar16 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (void*)((int64_t)pfVar22 + lVar12 + lVar16 * 4 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (uVar18 << 5 != lVar12);
      }
      if (uVar19 == uVar15) {
        return;
      }
      param_1 = param_1 - (int)uVar15;
      pfVar22 = pfVar22 + uVar15;
      pfVar21 = pfVar21 + uVar15;
    }
    iVar8 = param_1 + 1;
    lVar12 = 0;
    do {
      *(void*)((int64_t)pfVar22 + lVar12) = *(void*)((int64_t)pfVar21 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
  }
  return;
}


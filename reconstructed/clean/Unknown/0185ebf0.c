// Function: FUN_0185ebf0
// Address: 0185ebf0
// Size: 1220 bytes
// Class: Unknown

int64_t * FUN_0185ebf0(int64_t *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int64_t lVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  int iVar9;
  uint8_t (*pauVar10) [16];
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint8_t auVar34 [16];
  float fVar35;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  int64_t local_48;
  char local_40;
  char local_38;
  float local_34;
  
  local_34 = g_02390124;
  if (param_4 != 0) {
    if (param_3 == -1) {
      param_3 = (unaff_ESI + param_2) / 2;
    }
    iVar9 = param_2 - param_3;
    if (param_2 - param_3 <= param_3 - unaff_ESI) {
      iVar9 = param_3 - unaff_ESI;
    }
    if (0 < iVar9) {
      local_34 = g_02390124 / (float)iVar9;
    }
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  fVar13 = g_02394274;
  if (unaff_ESI < param_2) {
    lVar11 = (int64_t)unaff_ESI;
    local_38 = (char)param_4;
    if (local_38 == '\0') {
      lVar5 = *(int64_t *)(*param_1 + 0x10);
      pauVar10 = *(uint8_t (**) [16])(local_48 + 0x10);
      auVar36 = ZEXT416(*(uint *)*pauVar10);
      fVar30 = *(float *)(*pauVar10 + 4);
      fVar14 = *(float *)(*pauVar10 + 8);
      fVar28 = *(float *)(*pauVar10 + 0xc);
      auVar34 = ZEXT416(*(uint *)pauVar10[1]);
      fVar18 = *(float *)(pauVar10[1] + 4);
      fVar26 = *(float *)(pauVar10[1] + 8);
      fVar31 = *(float *)(pauVar10[1] + 0xc);
      auVar37 = ZEXT416(*(uint *)pauVar10[2]);
      fVar24 = *(float *)(pauVar10[2] + 4);
      fVar22 = *(float *)(pauVar10[2] + 8);
      fVar20 = *(float *)(pauVar10[2] + 0xc);
      do {
        pfVar4 = *(float **)(*(int64_t *)(lVar5 + lVar11 * 8) + 0x10);
        fVar1 = *pfVar4;
        auVar36._0_4_ = auVar36._0_4_ + fVar1;
        *(float *)*pauVar10 = auVar36._0_4_;
        fVar2 = pfVar4[1];
        fVar30 = fVar30 + fVar2;
        *(float *)(*pauVar10 + 4) = fVar30;
        fVar3 = pfVar4[2];
        fVar14 = fVar14 + fVar3;
        *(float *)(*pauVar10 + 8) = fVar14;
        fVar12 = pfVar4[3];
        fVar28 = fVar28 + fVar12;
        *(float *)(*pauVar10 + 0xc) = fVar28;
        fVar15 = pfVar4[4];
        auVar34._0_4_ = auVar34._0_4_ + fVar15;
        *(float *)pauVar10[1] = auVar34._0_4_;
        fVar16 = pfVar4[5];
        fVar18 = fVar18 + fVar16;
        *(float *)(pauVar10[1] + 4) = fVar18;
        fVar17 = pfVar4[6];
        fVar26 = fVar26 + fVar17;
        *(float *)(pauVar10[1] + 8) = fVar26;
        fVar19 = pfVar4[7];
        fVar31 = fVar31 + fVar19;
        *(float *)(pauVar10[1] + 0xc) = fVar31;
        fVar21 = pfVar4[8];
        auVar37._0_4_ = auVar37._0_4_ + fVar21;
        *(float *)pauVar10[2] = auVar37._0_4_;
        fVar23 = pfVar4[9];
        fVar24 = fVar24 + fVar23;
        *(float *)(pauVar10[2] + 4) = fVar24;
        fVar25 = pfVar4[10];
        fVar22 = fVar22 + fVar25;
        *(float *)(pauVar10[2] + 8) = fVar22;
        fVar27 = pfVar4[0xb];
        fVar20 = fVar20 + fVar27;
        *(float *)(pauVar10[2] + 0xc) = fVar20;
        fVar13 = fVar13 + fVar1 + fVar2 + fVar3 + fVar12 + fVar15 + fVar16 + fVar17 + fVar19 +
                 fVar21 + fVar23 + fVar25 + fVar27;
        lVar11 = lVar11 + 1;
      } while (param_2 != lVar11);
      auVar37 = insertps(auVar37,ZEXT416((uint)fVar24),0x10);
      auVar37 = insertps(auVar37,ZEXT416((uint)fVar22),0x20);
      auVar37 = insertps(auVar37,ZEXT416((uint)fVar20),0x30);
      auVar34 = insertps(auVar34,ZEXT416((uint)fVar18),0x10);
      auVar34 = insertps(auVar34,ZEXT416((uint)fVar26),0x20);
      auVar34 = insertps(auVar34,ZEXT416((uint)fVar31),0x30);
      auVar36 = insertps(auVar36,ZEXT416((uint)fVar30),0x10);
      auVar36 = insertps(auVar36,ZEXT416((uint)fVar14),0x20);
      auVar36 = insertps(auVar36,ZEXT416((uint)fVar28),0x30);
    }
    else {
      param_3 = param_3 - unaff_ESI;
      param_2 = param_2 - unaff_ESI;
      do {
        iVar9 = -param_3;
        if (0 < param_3) {
          iVar9 = param_3;
        }
        fVar14 = g_02390124 - (float)iVar9 * local_34;
        fVar30 = 0.0;
        if (0.0 <= fVar14) {
          fVar30 = fVar14;
        }
        fVar12 = (float)FUN_00e84a50(fVar30);
        pfVar4 = *(float **)(*(int64_t *)(*(int64_t *)(*param_1 + 0x10) + lVar11 * 8) + 0x10);
        pauVar10 = *(uint8_t (**) [16])(local_48 + 0x10);
        fVar30 = *pfVar4;
        fVar32 = fVar30 * fVar12 + *(float *)*pauVar10;
        *(float *)*pauVar10 = fVar32;
        fVar14 = pfVar4[1];
        fVar27 = fVar14 * fVar12 + *(float *)(*pauVar10 + 4);
        *(float *)(*pauVar10 + 4) = fVar27;
        fVar28 = pfVar4[2];
        fVar29 = fVar28 * fVar12 + *(float *)(*pauVar10 + 8);
        *(float *)(*pauVar10 + 8) = fVar29;
        fVar18 = pfVar4[3];
        fVar23 = fVar18 * fVar12 + *(float *)(*pauVar10 + 0xc);
        *(float *)(*pauVar10 + 0xc) = fVar23;
        fVar26 = pfVar4[4];
        fVar33 = fVar26 * fVar12 + *(float *)pauVar10[1];
        *(float *)pauVar10[1] = fVar33;
        fVar31 = pfVar4[5];
        fVar25 = fVar31 * fVar12 + *(float *)(pauVar10[1] + 4);
        *(float *)(pauVar10[1] + 4) = fVar25;
        fVar24 = pfVar4[6];
        fVar15 = fVar24 * fVar12 + *(float *)(pauVar10[1] + 8);
        *(float *)(pauVar10[1] + 8) = fVar15;
        fVar22 = pfVar4[7];
        fVar16 = fVar22 * fVar12 + *(float *)(pauVar10[1] + 0xc);
        *(float *)(pauVar10[1] + 0xc) = fVar16;
        fVar20 = pfVar4[8];
        fVar35 = fVar20 * fVar12 + *(float *)pauVar10[2];
        *(float *)pauVar10[2] = fVar35;
        fVar1 = pfVar4[9];
        fVar17 = fVar1 * fVar12 + *(float *)(pauVar10[2] + 4);
        *(float *)(pauVar10[2] + 4) = fVar17;
        fVar2 = pfVar4[10];
        fVar19 = fVar2 * fVar12 + *(float *)(pauVar10[2] + 8);
        *(float *)(pauVar10[2] + 8) = fVar19;
        fVar3 = pfVar4[0xb];
        fVar21 = *(float *)(pauVar10[2] + 0xc) + fVar12 * fVar3;
        *(float *)(pauVar10[2] + 0xc) = fVar21;
        fVar13 = fVar12 * fVar3 +
                 fVar13 + fVar30 * fVar12 + fVar14 * fVar12 + fVar28 * fVar12 + fVar18 * fVar12 +
                 fVar26 * fVar12 + fVar31 * fVar12 + fVar24 * fVar12 + fVar22 * fVar12 +
                 fVar20 * fVar12 + fVar1 * fVar12 + fVar2 * fVar12;
        lVar11 = lVar11 + 1;
        param_3 = param_3 + -1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      auVar36 = insertps(ZEXT416((uint)fVar35),ZEXT416((uint)fVar17),0x10);
      auVar36 = insertps(auVar36,ZEXT416((uint)fVar19),0x20);
      auVar37 = insertps(auVar36,ZEXT416((uint)fVar21),0x30);
      auVar36 = insertps(ZEXT416((uint)fVar33),ZEXT416((uint)fVar25),0x10);
      auVar36 = insertps(auVar36,ZEXT416((uint)fVar15),0x20);
      auVar34 = insertps(auVar36,ZEXT416((uint)fVar16),0x30);
      auVar36 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)fVar27),0x10);
      auVar36 = insertps(auVar36,ZEXT416((uint)fVar29),0x20);
      auVar36 = insertps(auVar36,ZEXT416((uint)fVar23),0x30);
    }
  }
  else {
    pauVar10 = *(uint8_t (**) [16])(local_48 + 0x10);
    auVar36 = *pauVar10;
    auVar34 = pauVar10[1];
    auVar37 = pauVar10[2];
  }
  auVar6._4_4_ = fVar13;
  auVar6._0_4_ = fVar13;
  auVar6._8_4_ = fVar13;
  auVar6._12_4_ = fVar13;
  auVar36 = divps(auVar36,auVar6);
  *pauVar10 = auVar36;
  auVar7._4_4_ = fVar13;
  auVar7._0_4_ = fVar13;
  auVar7._8_4_ = fVar13;
  auVar7._12_4_ = fVar13;
  auVar36 = divps(auVar34,auVar7);
  pauVar10[1] = auVar36;
  auVar8._4_4_ = fVar13;
  auVar8._0_4_ = fVar13;
  auVar8._8_4_ = fVar13;
  auVar8._12_4_ = fVar13;
  auVar36 = divps(auVar37,auVar8);
  pauVar10[2] = auVar36;
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}


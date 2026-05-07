// Function: FUN_01866e10
// Address: 01866e10
// Size: 2606 bytes
// Class: Unknown

float FUN_01866e10(int64_t *param_1,int param_2)

{
  char cVar1;
  float *pfVar2;
  char *pcVar3;
  float *pfVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint uVar10;
  uint uVar11;
  int iVar12;
  int64_t lVar13;
  int iVar14;
  uint8_t (*pauVar15) [16];
  int64_t lVar16;
  int unaff_ESI;
  uint uVar17;
  float fVar18;
  float fVar19;
  uint8_t auVar20 [16];
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
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_44;
  int64_t local_40;
  char local_38;
  
  FUN_018d88f0(param_1,0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_018da170();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_40 == 0) && ((MACH_HEADER.flags & 0xfffffffc) != 4)) {
    local_44 = g_02391090;
  }
  else {
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    if (unaff_ESI < param_2) {
      lVar13 = *(int64_t *)(*param_1 + 0x10);
      pauVar15 = *(uint8_t (**) [16])(local_40 + 0x10);
      lVar16 = (int64_t)unaff_ESI;
      fVar27 = *(float *)*pauVar15;
      fVar28 = *(float *)(*pauVar15 + 4);
      fVar29 = *(float *)(*pauVar15 + 8);
      fVar30 = *(float *)(*pauVar15 + 0xc);
      fVar23 = *(float *)pauVar15[1];
      fVar24 = *(float *)(pauVar15[1] + 4);
      fVar25 = *(float *)(pauVar15[1] + 8);
      fVar26 = *(float *)(pauVar15[1] + 0xc);
      fVar18 = *(float *)pauVar15[2];
      fVar19 = *(float *)(pauVar15[2] + 4);
      fVar21 = *(float *)(pauVar15[2] + 8);
      fVar22 = *(float *)(pauVar15[2] + 0xc);
      do {
        pfVar2 = *(float **)(*(int64_t *)(lVar13 + lVar16 * 8) + 0x10);
        fVar27 = fVar27 + *pfVar2;
        *(float *)*pauVar15 = fVar27;
        fVar28 = fVar28 + pfVar2[1];
        *(float *)(*pauVar15 + 4) = fVar28;
        fVar29 = fVar29 + pfVar2[2];
        *(float *)(*pauVar15 + 8) = fVar29;
        fVar30 = fVar30 + pfVar2[3];
        *(float *)(*pauVar15 + 0xc) = fVar30;
        fVar23 = fVar23 + pfVar2[4];
        *(float *)pauVar15[1] = fVar23;
        fVar24 = fVar24 + pfVar2[5];
        *(float *)(pauVar15[1] + 4) = fVar24;
        fVar25 = fVar25 + pfVar2[6];
        *(float *)(pauVar15[1] + 8) = fVar25;
        fVar26 = fVar26 + pfVar2[7];
        *(float *)(pauVar15[1] + 0xc) = fVar26;
        fVar18 = fVar18 + pfVar2[8];
        *(float *)pauVar15[2] = fVar18;
        fVar19 = fVar19 + pfVar2[9];
        *(float *)(pauVar15[2] + 4) = fVar19;
        fVar21 = fVar21 + pfVar2[10];
        *(float *)(pauVar15[2] + 8) = fVar21;
        fVar22 = fVar22 + pfVar2[0xb];
        *(float *)(pauVar15[2] + 0xc) = fVar22;
        lVar16 = lVar16 + 1;
      } while (param_2 != lVar16);
    }
    else {
      pauVar15 = *(uint8_t (**) [16])(local_40 + 0x10);
    }
    uVar11 = g_023b3e04;
    fVar27 = g_02394270;
    uVar10 = g_02390140;
    fVar28 = 0.0;
    lVar13 = 0;
    do {
      uVar17 = -(uint)(*(float *)(*pauVar15 + lVar13 * 4) <= fVar27);
      fVar29 = (float)(uVar17 & uVar11 |
                      ~uVar17 & (uint)SQRT(*(float *)(*pauVar15 + lVar13 * 4)) & uVar10);
      *(float *)(*pauVar15 + lVar13 * 4) = fVar29;
      fVar28 = fVar28 + fVar29;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0xc);
    if (g_02394274 < fVar28) {
      auVar20._4_4_ = fVar28;
      auVar20._0_4_ = fVar28;
      auVar20._8_4_ = fVar28;
      auVar20._12_4_ = fVar28;
      auVar20 = divps(*pauVar15,auVar20);
      *pauVar15 = auVar20;
      auVar5._4_4_ = fVar28;
      auVar5._0_4_ = fVar28;
      auVar5._8_4_ = fVar28;
      auVar5._12_4_ = fVar28;
      auVar20 = divps(pauVar15[1],auVar5);
      pauVar15[1] = auVar20;
      auVar6._4_4_ = fVar28;
      auVar6._0_4_ = fVar28;
      auVar6._8_4_ = fVar28;
      auVar6._12_4_ = fVar28;
      auVar20 = divps(pauVar15[2],auVar6);
      pauVar15[2] = auVar20;
    }
    iVar12 = FUN_01715480();
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    if ((*(uint *)(local_40 + 0x18) & 0xfffffffc) == 4) {
      *(void*)(*(int64_t *)(local_40 + 0x10) + (int64_t)iVar12 * 4) = 0x3f000000;
    }
    else {
      FUN_018e1cf0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      pcVar3 = *(char **)(local_40 + 0x10);
      if (*pcVar3 == '\0') {
        cVar1 = pcVar3[1];
        fVar27 = 0.0;
      }
      else {
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        cVar1 = pcVar3[1];
        fVar27 = g_02390124;
      }
      if (cVar1 != '\0') {
        iVar14 = iVar12 + 1;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[2] != '\0') {
        iVar14 = iVar12 + 2;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[3] != '\0') {
        iVar14 = iVar12 + 3;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[4] != '\0') {
        iVar14 = iVar12 + 4;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[5] != '\0') {
        iVar14 = iVar12 + 5;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[6] != '\0') {
        iVar14 = iVar12 + 6;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[7] != '\0') {
        iVar14 = iVar12 + 7;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[8] != '\0') {
        iVar14 = iVar12 + 8;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[9] != '\0') {
        iVar14 = iVar12 + 9;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[10] != '\0') {
        iVar14 = iVar12 + 10;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (pcVar3[0xb] != '\0') {
        iVar12 = iVar12 + 0xb;
        *(void*)
         (*(int64_t *)(local_40 + 0x10) +
         (int64_t)
         (int)(iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc) *
         4) = 0x3f800000;
        fVar27 = fVar27 + g_02390124;
      }
      if (g_02394274 < fVar27) {
        pauVar15 = *(uint8_t (**) [16])(local_40 + 0x10);
        auVar7._4_4_ = fVar27;
        auVar7._0_4_ = fVar27;
        auVar7._8_4_ = fVar27;
        auVar7._12_4_ = fVar27;
        auVar20 = divps(*pauVar15,auVar7);
        *pauVar15 = auVar20;
        auVar8._4_4_ = fVar27;
        auVar8._0_4_ = fVar27;
        auVar8._8_4_ = fVar27;
        auVar8._12_4_ = fVar27;
        auVar20 = divps(pauVar15[1],auVar8);
        pauVar15[1] = auVar20;
        auVar9._4_4_ = fVar27;
        auVar9._0_4_ = fVar27;
        auVar9._8_4_ = fVar27;
        auVar9._12_4_ = fVar27;
        auVar20 = divps(pauVar15[2],auVar9);
        pauVar15[2] = auVar20;
      }
      FUN_00d50b20();
    }
    pfVar2 = *(float **)(local_40 + 0x10);
    fVar27 = *pfVar2;
    pfVar4 = *(float **)(local_40 + 0x10);
    fVar28 = *pfVar4;
    if (((fVar27 != 0.0) || (local_44 = fVar28, NAN(fVar27))) && (local_44 = 0.0, fVar28 < fVar27))
    {
      local_44 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[1];
    fVar28 = pfVar4[1];
    if (((fVar27 != g_0239424c) || (local_84 = fVar28, NAN(fVar27) || NAN(g_0239424c))) &&
       (local_84 = 0.0, fVar28 < fVar27)) {
      local_84 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[2];
    fVar28 = pfVar4[2];
    if (((fVar27 != 0.0) || (local_80 = fVar28, NAN(fVar27))) && (local_80 = 0.0, fVar28 < fVar27))
    {
      local_80 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[3];
    fVar28 = pfVar4[3];
    if (((fVar27 != 0.0) || (local_7c = fVar28, NAN(fVar27))) && (local_7c = 0.0, fVar28 < fVar27))
    {
      local_7c = fVar27 - fVar28;
    }
    fVar27 = pfVar2[4];
    fVar28 = pfVar4[4];
    if (((fVar27 != 0.0) || (local_78 = fVar28, NAN(fVar27))) && (local_78 = 0.0, fVar28 < fVar27))
    {
      local_78 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[5];
    fVar28 = pfVar4[5];
    if (((fVar27 != 0.0) || (local_74 = fVar28, NAN(fVar27))) && (local_74 = 0.0, fVar28 < fVar27))
    {
      local_74 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[6];
    fVar28 = pfVar4[6];
    if (((fVar27 != 0.0) || (local_70 = fVar28, NAN(fVar27))) && (local_70 = 0.0, fVar28 < fVar27))
    {
      local_70 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[7];
    fVar28 = pfVar4[7];
    if (((fVar27 != 0.0) || (local_6c = fVar28, NAN(fVar27))) && (local_6c = 0.0, fVar28 < fVar27))
    {
      local_6c = fVar27 - fVar28;
    }
    fVar27 = pfVar2[8];
    fVar28 = pfVar4[8];
    if (((fVar27 != 0.0) || (local_68 = fVar28, NAN(fVar27))) && (local_68 = 0.0, fVar28 < fVar27))
    {
      local_68 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[9];
    fVar28 = pfVar4[9];
    if (((fVar27 != 0.0) || (local_64 = fVar28, NAN(fVar27))) && (local_64 = 0.0, fVar28 < fVar27))
    {
      local_64 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[10];
    fVar28 = pfVar4[10];
    if (((fVar27 != 0.0) || (local_60 = fVar28, NAN(fVar27))) && (local_60 = 0.0, fVar28 < fVar27))
    {
      local_60 = fVar27 - fVar28;
    }
    fVar27 = pfVar2[0xb];
    fVar28 = pfVar4[0xb];
    if (((fVar27 != 0.0) || (local_5c = fVar28, NAN(fVar27))) && (local_5c = 0.0, fVar28 < fVar27))
    {
      local_5c = fVar27 - fVar28;
    }
    FUN_00d50b20();
    FUN_00d50b20();
    fVar27 = (local_44 + g_0239424c + local_84 + local_80 + local_7c + local_78 + local_74 +
              local_70 + local_6c + local_68 + local_64 + local_60 + local_5c) * g_0241c6c4 +
             g_02390124;
    local_44 = g_02394254;
    if (g_02394254 <= fVar27) {
      local_44 = fVar27;
    }
  }
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_44;
}


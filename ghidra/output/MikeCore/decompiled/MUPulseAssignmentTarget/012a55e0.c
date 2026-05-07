// Function: FUN_012a55e0
// Address: 012a55e0
// Size: 2909 bytes
// Class: MUPulseAssignmentTarget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012a55e0(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  double *pdVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  longlong lVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  undefined8 *puVar42;
  int iVar43;
  longlong lVar44;
  float *pfVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  undefined *puVar48;
  longlong lVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  uint uVar54;
  ulonglong uVar55;
  uint uVar56;
  ulonglong uVar57;
  bool bVar58;
  int iVar59;
  float fVar60;
  int iVar61;
  undefined1 auVar62 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  longlong local_60;
  longlong local_38;
  
  DAT_028ac5c0 = FUN_00e84280();
  DAT_028ac5d0 = FUN_00e84a30();
  lVar36 = FUN_00e83010();
  iVar34 = _UNK_02410ff4;
  iVar33 = _DAT_02410ff0;
  dVar31 = _UNK_0240d0d8;
  dVar30 = _DAT_0240d0d0;
  iVar29 = _UNK_023d92f4;
  iVar28 = _DAT_023d92f0;
  auVar65 = _DAT_023d92e0;
  iVar27 = _UNK_023d92d4;
  iVar43 = _DAT_023d92d0;
  lVar44 = 0;
  iVar59 = _DAT_02392fe0;
  iVar61 = _UNK_02392fe4;
  DAT_028ac748 = lVar36;
  do {
    pdVar1 = (double *)(lVar36 + lVar44 * 8);
    *pdVar1 = (double)iVar59 * dVar30;
    pdVar1[1] = (double)iVar61 * dVar31;
    pdVar1 = (double *)(lVar36 + 0x10 + lVar44 * 8);
    *pdVar1 = (double)(iVar59 + iVar43) * dVar30;
    pdVar1[1] = (double)(iVar61 + iVar27) * dVar31;
    pdVar1 = (double *)(lVar36 + 0x20 + lVar44 * 8);
    *pdVar1 = (double)(iVar59 + auVar65._0_4_) * dVar30;
    pdVar1[1] = (double)(iVar61 + auVar65._4_4_) * dVar31;
    pdVar1 = (double *)(lVar36 + 0x30 + lVar44 * 8);
    *pdVar1 = (double)(iVar59 + iVar28) * dVar30;
    pdVar1[1] = (double)(iVar61 + iVar29) * dVar31;
    lVar44 = lVar44 + 8;
    iVar59 = iVar59 + iVar33;
    iVar61 = iVar61 + iVar34;
  } while (lVar44 != 0x800);
  puVar37 = (undefined8 *)FUN_00e83010();
  uVar32 = _UNK_0240d0e8;
  DAT_028ac5c8 = puVar37;
  *puVar37 = _DAT_0240d0e0;
  puVar37[1] = uVar32;
  *(undefined4 *)(puVar37 + 2) = 0x3f99999a;
  FUN_012a52b0();
  DAT_028ac5d8 = 0x46d55552;
  lVar36 = FUN_00e83010();
  fVar60 = DAT_0240d144;
  fVar21 = DAT_0240d140;
  puVar48 = (undefined *)0x0;
  DAT_028ac5e0 = lVar36;
  do {
    iVar43 = (int)puVar48;
    fVar63 = (float)iVar43 * fVar21;
    if (fVar60 < fVar63) {
LAB_012a5756:
      if (0x1fff < (uint)puVar48) goto LAB_012a577b;
      goto LAB_012a575e;
    }
    *(float *)(lVar36 + (longlong)puVar48 * 4) = fVar63;
    fVar63 = (float)(iVar43 + 1) * fVar21;
    if (fVar60 < fVar63) {
      puVar48 = (undefined *)(ulonglong)(iVar43 + 1);
      goto LAB_012a5756;
    }
    *(float *)(lVar36 + 4 + (longlong)puVar48 * 4) = fVar63;
    puVar48 = puVar48 + 2;
  } while (puVar48 != &DAT_00002000);
  puVar48 = (undefined *)0x0;
LAB_012a575e:
  _memset_pattern16(puVar48,(void *)((ulonglong)(0x2000 - (int)puVar48) << 2),param_3);
LAB_012a577b:
  puVar37 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar37 = &DAT_025f0d98;
  puVar37[2] = 0;
  puVar37[3] = 0;
  puVar37[4] = 0;
  puVar37[5] = 0;
  puVar37[6] = 0;
  puVar37[7] = 0;
  (*DAT_025f0db0)();
  FUN_015c1480(3,0x2000);
  lVar36 = DAT_028ac5e0;
  fVar22 = _UNK_0240d0fc;
  fVar63 = _UNK_0240d0f8;
  fVar60 = _UNK_0240d0f4;
  fVar21 = _DAT_0240d0f0;
  lVar44 = 0;
  do {
    pfVar45 = (float *)(lVar36 + lVar44 * 4);
    fVar6 = pfVar45[1];
    fVar7 = pfVar45[2];
    fVar8 = pfVar45[3];
    pfVar3 = (float *)(lVar36 + 0x10 + lVar44 * 4);
    fVar9 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
    fVar12 = pfVar3[3];
    pfVar3 = (float *)(lVar36 + 0x20 + lVar44 * 4);
    fVar13 = *pfVar3;
    fVar14 = pfVar3[1];
    fVar15 = pfVar3[2];
    fVar16 = pfVar3[3];
    pfVar3 = (float *)(lVar36 + 0x30 + lVar44 * 4);
    fVar17 = *pfVar3;
    fVar18 = pfVar3[1];
    fVar19 = pfVar3[2];
    fVar20 = pfVar3[3];
    pfVar3 = (float *)(lVar36 + lVar44 * 4);
    *pfVar3 = *pfVar45 + fVar21;
    pfVar3[1] = fVar6 + fVar60;
    pfVar3[2] = fVar7 + fVar63;
    pfVar3[3] = fVar8 + fVar22;
    pfVar45 = (float *)(lVar36 + 0x10 + lVar44 * 4);
    *pfVar45 = fVar9 + fVar21;
    pfVar45[1] = fVar10 + fVar60;
    pfVar45[2] = fVar11 + fVar63;
    pfVar45[3] = fVar12 + fVar22;
    pfVar45 = (float *)(lVar36 + 0x20 + lVar44 * 4);
    *pfVar45 = fVar13 + fVar21;
    pfVar45[1] = fVar14 + fVar60;
    pfVar45[2] = fVar15 + fVar63;
    pfVar45[3] = fVar16 + fVar22;
    pfVar45 = (float *)(lVar36 + 0x30 + lVar44 * 4);
    *pfVar45 = fVar17 + fVar21;
    pfVar45[1] = fVar18 + fVar60;
    pfVar45[2] = fVar19 + fVar63;
    pfVar45[3] = fVar20 + fVar22;
    lVar44 = lVar44 + 0x10;
  } while (lVar44 != 0x2000);
  uVar57 = 0x10;
  uVar39 = 0;
  uVar38 = 0;
  lVar36 = 0;
  local_38 = 0;
  do {
    uVar56 = (uint)uVar57;
    if ((int)uVar56 < 0x200) {
      if ((int)uVar56 < 0x40) {
        if (uVar56 == 0x10) {
          local_38 = FUN_00e83da0();
          DAT_028ac5e8 = local_38;
          lVar36 = FUN_00e83da0();
          DAT_028ac5f0 = lVar36;
          uVar38 = FUN_00e83010();
          DAT_028ac698 = uVar38;
          uVar39 = FUN_00e83010();
          DAT_028ac6a0 = uVar39;
        }
        else if (uVar56 == 0x20) {
          local_38 = FUN_00e83da0();
          DAT_028ac5f8 = local_38;
          lVar36 = FUN_00e83da0();
          DAT_028ac600 = lVar36;
          uVar38 = FUN_00e83010();
          DAT_028ac6a8 = uVar38;
          uVar39 = FUN_00e83010();
          DAT_028ac6b0 = uVar39;
        }
      }
      else if (uVar56 == 0x40) {
        local_38 = FUN_00e83da0();
        DAT_028ac608 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac610 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6b8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac6c0 = uVar39;
      }
      else if (uVar56 == 0x80) {
        local_38 = FUN_00e83da0();
        DAT_028ac618 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac620 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6c8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac6d0 = uVar39;
      }
      else if (uVar56 == 0x100) {
        local_38 = FUN_00e83da0();
        DAT_028ac628 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac630 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6d8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac6e0 = uVar39;
      }
    }
    else if ((int)uVar56 < 0x1000) {
      if (uVar56 == 0x200) {
        local_38 = FUN_00e83da0();
        DAT_028ac638 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac640 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6e8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac6f0 = uVar39;
      }
      else if (uVar56 == 0x400) {
        local_38 = FUN_00e83da0();
        DAT_028ac648 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac650 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6f8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac700 = uVar39;
      }
      else if (uVar56 == 0x800) {
        local_38 = FUN_00e83da0();
        DAT_028ac658 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac660 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac708 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac710 = uVar39;
      }
    }
    else if (uVar56 == 0x1000) {
      local_38 = FUN_00e83da0();
      DAT_028ac668 = local_38;
      lVar36 = FUN_00e83da0();
      DAT_028ac670 = lVar36;
      uVar38 = FUN_00e83010();
      DAT_028ac718 = uVar38;
      uVar39 = FUN_00e83010();
      DAT_028ac720 = uVar39;
    }
    else if (uVar56 == 0x2000) {
      local_38 = FUN_00e83da0();
      DAT_028ac678 = local_38;
      lVar36 = FUN_00e83da0();
      DAT_028ac680 = lVar36;
      uVar38 = FUN_00e83010();
      DAT_028ac728 = uVar38;
      uVar39 = FUN_00e83010();
      DAT_028ac730 = uVar39;
    }
    else if (uVar56 == 0x4000) {
      local_38 = FUN_00e83da0();
      DAT_028ac688 = local_38;
      lVar36 = FUN_00e83da0();
      DAT_028ac690 = lVar36;
      uVar38 = FUN_00e83010();
      DAT_028ac738 = uVar38;
      uVar39 = FUN_00e83010();
      DAT_028ac740 = uVar39;
    }
    fVar22 = _UNK_0240d10c;
    fVar63 = _UNK_0240d108;
    fVar60 = _UNK_0240d104;
    fVar21 = _DAT_0240d100;
    uVar35 = uVar56 - 0x10;
    uVar40 = (ulonglong)((uVar35 >> 3) + 2);
    pfVar45 = (float *)(lVar36 + 0x30);
    do {
      pfVar45[-0xc] = pfVar45[-0xc] * fVar21;
      pfVar45[-0xb] = pfVar45[-0xb] * fVar60;
      pfVar45[-10] = pfVar45[-10] * fVar63;
      pfVar45[-9] = pfVar45[-9] * fVar22;
      pfVar45[-8] = pfVar45[-8] * fVar21;
      pfVar45[-7] = pfVar45[-7] * fVar60;
      pfVar45[-6] = pfVar45[-6] * fVar63;
      pfVar45[-5] = pfVar45[-5] * fVar22;
      pfVar45[-4] = pfVar45[-4] * fVar21;
      pfVar45[-3] = pfVar45[-3] * fVar60;
      pfVar45[-2] = pfVar45[-2] * fVar63;
      pfVar45[-1] = pfVar45[-1] * fVar22;
      *pfVar45 = *pfVar45 * fVar21;
      pfVar45[1] = pfVar45[1] * fVar60;
      pfVar45[2] = pfVar45[2] * fVar63;
      pfVar45[3] = pfVar45[3] * fVar22;
      pfVar45 = pfVar45 + 0x10;
      uVar40 = uVar40 - 2;
    } while (uVar40 != 0);
    ___bzero();
    uVar40 = uVar57 >> 2;
    lVar44 = local_38 + 0x10;
    lVar51 = lVar36 + 0x10;
    local_60 = 0;
    lVar49 = 0;
    uVar53 = 0;
    uVar54 = 0;
    do {
      uVar46 = uVar40 * lVar49;
      uVar50 = uVar46 | 1;
      uVar55 = uVar57;
      if (uVar57 < uVar50) {
        uVar55 = uVar50;
      }
      uVar52 = uVar55 - uVar46;
      uVar47 = uVar53;
      if (uVar52 < 8) {
        uVar50 = 0;
LAB_012a5e54:
        pfVar45 = (float *)(uVar38 + uVar50 * 4);
        do {
          *pfVar45 = *(float *)(local_38 + uVar47 * 4) * *(float *)(lVar36 + uVar47 * 4) + *pfVar45;
          uVar47 = uVar47 + 1;
          pfVar45 = pfVar45 + 1;
        } while (uVar47 < uVar57);
      }
      else {
        uVar2 = uVar38 + uVar52 * 4;
        lVar41 = ~uVar46 + uVar55 + uVar50;
        if (uVar38 < (ulonglong)(local_38 + lVar41 * 4) && local_38 + uVar46 * 4 < uVar2) {
          uVar50 = 0;
          goto LAB_012a5e54;
        }
        uVar50 = 0;
        if (uVar38 < (ulonglong)(lVar36 + lVar41 * 4) && lVar36 + uVar46 * 4 < uVar2)
        goto LAB_012a5e54;
        uVar50 = uVar52 & 0xfffffffffffffff8;
        uVar47 = uVar53 + uVar50;
        uVar46 = 0;
        do {
          pfVar4 = (float *)(lVar44 + -0x10 + uVar46 * 4);
          fVar21 = pfVar4[1];
          fVar60 = pfVar4[2];
          fVar63 = pfVar4[3];
          pfVar45 = (float *)(lVar44 + uVar46 * 4);
          fVar22 = *pfVar45;
          fVar6 = pfVar45[1];
          fVar7 = pfVar45[2];
          fVar8 = pfVar45[3];
          pfVar5 = (float *)(lVar51 + -0x10 + uVar46 * 4);
          fVar9 = pfVar5[1];
          fVar10 = pfVar5[2];
          fVar11 = pfVar5[3];
          pfVar45 = (float *)(lVar51 + uVar46 * 4);
          fVar12 = *pfVar45;
          fVar13 = pfVar45[1];
          fVar14 = pfVar45[2];
          fVar15 = pfVar45[3];
          pfVar45 = (float *)(uVar38 + uVar46 * 4);
          fVar16 = pfVar45[1];
          fVar17 = pfVar45[2];
          fVar18 = pfVar45[3];
          pfVar3 = (float *)(uVar38 + 0x10 + uVar46 * 4);
          fVar19 = *pfVar3;
          fVar20 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar3 = (float *)(uVar38 + uVar46 * 4);
          *pfVar3 = *pfVar45 + *pfVar5 * *pfVar4;
          pfVar3[1] = fVar16 + fVar9 * fVar21;
          pfVar3[2] = fVar17 + fVar10 * fVar60;
          pfVar3[3] = fVar18 + fVar11 * fVar63;
          pfVar45 = (float *)(uVar38 + 0x10 + uVar46 * 4);
          *pfVar45 = fVar19 + fVar12 * fVar22;
          pfVar45[1] = fVar20 + fVar13 * fVar6;
          pfVar45[2] = fVar23 + fVar14 * fVar7;
          pfVar45[3] = fVar24 + fVar15 * fVar8;
          uVar46 = uVar46 + 8;
        } while ((uVar55 + local_60 & 0xfffffffffffffff8) != uVar46);
        if (uVar52 != uVar50) goto LAB_012a5e54;
      }
      uVar54 = uVar54 + (int)(uVar57 >> 2);
      uVar53 = uVar53 + uVar40;
      lVar49 = lVar49 + 1;
      lVar44 = lVar44 + uVar40 * 4;
      lVar51 = lVar51 + uVar40 * 4;
      local_60 = local_60 - uVar40;
    } while (uVar54 < uVar56);
    if ((uVar39 < uVar38 + (ulonglong)uVar35 * 4 + 0x40) &&
       (uVar38 < uVar39 + (ulonglong)uVar35 * 4 + 0x40)) {
      lVar44 = 0;
      do {
        fVar60 = DAT_02390124;
        fVar63 = DAT_02390124 - *(float *)(uVar38 + lVar44 * 4);
        fVar21 = 0.0;
        if (0.0 <= fVar63) {
          fVar21 = fVar63;
        }
        *(float *)(uVar39 + lVar44 * 4) = fVar21;
        fVar63 = fVar60 - *(float *)(uVar38 + 4 + lVar44 * 4);
        fVar21 = 0.0;
        if (0.0 <= fVar63) {
          fVar21 = fVar63;
        }
        *(float *)(uVar39 + 4 + lVar44 * 4) = fVar21;
        fVar63 = fVar60 - *(float *)(uVar38 + 8 + lVar44 * 4);
        fVar21 = 0.0;
        if (0.0 <= fVar63) {
          fVar21 = fVar63;
        }
        *(float *)(uVar39 + 8 + lVar44 * 4) = fVar21;
        fVar60 = fVar60 - *(float *)(uVar38 + 0xc + lVar44 * 4);
        fVar21 = 0.0;
        if (0.0 <= fVar60) {
          fVar21 = fVar60;
        }
        *(float *)(uVar39 + 0xc + lVar44 * 4) = fVar21;
        lVar44 = lVar44 + 4;
      } while (uVar56 != (uint)lVar44);
    }
    else {
      lVar51 = (ulonglong)(uVar35 >> 3) + 2;
      lVar44 = 0x30;
      do {
        fVar22 = _UNK_023b2d5c;
        fVar63 = _UNK_023b2d58;
        fVar60 = _UNK_023b2d54;
        fVar21 = _DAT_023b2d50;
        pfVar45 = (float *)((uVar38 - 0x30) + lVar44);
        pfVar3 = (float *)((uVar38 - 0x20) + lVar44);
        auVar64._0_4_ = _DAT_023b2d50 - *pfVar45;
        auVar64._4_4_ = _UNK_023b2d54 - pfVar45[1];
        auVar64._8_4_ = _UNK_023b2d58 - pfVar45[2];
        auVar64._12_4_ = _UNK_023b2d5c - pfVar45[3];
        auVar65._0_4_ = _DAT_023b2d50 - *pfVar3;
        auVar65._4_4_ = _UNK_023b2d54 - pfVar3[1];
        auVar65._8_4_ = _UNK_023b2d58 - pfVar3[2];
        auVar65._12_4_ = _UNK_023b2d5c - pfVar3[3];
        auVar62 = maxps(ZEXT816(0),auVar64);
        auVar65 = maxps(ZEXT816(0),auVar65);
        *(undefined1 (*) [16])((uVar39 - 0x30) + lVar44) = auVar62;
        *(undefined1 (*) [16])((uVar39 - 0x20) + lVar44) = auVar65;
        pfVar3 = (float *)((uVar38 - 0x10) + lVar44);
        pfVar45 = (float *)(uVar38 + lVar44);
        auVar66._0_4_ = fVar21 - *pfVar3;
        auVar66._4_4_ = fVar60 - pfVar3[1];
        auVar66._8_4_ = fVar63 - pfVar3[2];
        auVar66._12_4_ = fVar22 - pfVar3[3];
        auVar62._0_4_ = fVar21 - *pfVar45;
        auVar62._4_4_ = fVar60 - pfVar45[1];
        auVar62._8_4_ = fVar63 - pfVar45[2];
        auVar62._12_4_ = fVar22 - pfVar45[3];
        auVar65 = maxps(ZEXT816(0),auVar66);
        auVar62 = maxps(ZEXT816(0),auVar62);
        *(undefined1 (*) [16])((uVar39 - 0x10) + lVar44) = auVar65;
        *(undefined1 (*) [16])(uVar39 + lVar44) = auVar62;
        lVar44 = lVar44 + 0x40;
        lVar51 = lVar51 + -2;
      } while (lVar51 != 0);
    }
    uVar57 = (ulonglong)(uVar56 * 2);
    if (0x4000 < uVar56 * 2) {
      puVar42 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar42 = &DAT_025f0698;
      *(undefined4 *)(puVar42 + 7) = 0;
      *(undefined1 *)((longlong)puVar42 + 0x3c) = 0;
      puVar42[8] = 0;
      puVar42[9] = 0;
      *(undefined4 *)(puVar42 + 10) = 0;
      (*DAT_025f06b0)();
      if (DAT_028ac598 == puVar42) {
        bVar26 = false;
        bVar25 = false;
      }
      else {
        bVar26 = true;
        bVar25 = true;
        bVar58 = DAT_028ac598 != (undefined8 *)0x0;
        DAT_028ac598 = puVar42;
        if (bVar58) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ac5a0 == '\0') {
        DAT_028ac5a0 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar26;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      if (puVar37 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}



// Function: FUN_00f4f060
// Address: 00f4f060
// Size: 1796 bytes
// Class: GNInt


void FUN_00f4f060(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 (*unaff_RSI) [16];
  undefined8 *unaff_RDI;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 local_100 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  
  auVar41 = *unaff_RSI;
  local_e0._0_4_ = *(undefined4 *)(unaff_RDI + 2);
  iVar7 = 0;
  if (0 < (int)local_e0._0_4_) {
    iVar7 = local_e0._0_4_;
  }
  pauVar10 = (undefined1 (*) [16])*unaff_RDI;
  if ((int)local_e0._0_4_ < 1) {
    pauVar10 = &local_100;
  }
  lVar8 = unaff_RDI[1] - (longlong)pauVar10;
  local_e0._4_4_ = *(undefined4 *)(unaff_RDI + 7);
  if (iVar7 < (int)local_e0._4_4_) {
    iVar7 = local_e0._4_4_;
  }
  pauVar12 = (undefined1 (*) [16])unaff_RDI[5];
  if ((int)local_e0._4_4_ < 1) {
    pauVar12 = &local_100;
  }
  local_b8 = unaff_RDI[6] - (longlong)pauVar12;
  local_e0._8_4_ = *(undefined4 *)(unaff_RDI + 0xc);
  if (iVar7 < (int)local_e0._8_4_) {
    iVar7 = local_e0._8_4_;
  }
  pauVar14 = (undefined1 (*) [16])unaff_RDI[10];
  if ((int)local_e0._8_4_ < 1) {
    pauVar14 = &local_100;
  }
  local_b0 = unaff_RDI[0xb] - (longlong)pauVar14;
  local_e0._12_4_ = *(undefined4 *)(unaff_RDI + 0x11);
  if (iVar7 < (int)local_e0._12_4_) {
    iVar7 = local_e0._12_4_;
  }
  pauVar16 = (undefined1 (*) [16])unaff_RDI[0xf];
  if ((int)local_e0._12_4_ < 1) {
    pauVar16 = &local_100;
  }
  local_a8 = unaff_RDI[0x10] - (longlong)pauVar16;
  local_d0._0_4_ = *(undefined4 *)(unaff_RDI + 0x16);
  if (iVar7 < (int)local_d0._0_4_) {
    iVar7 = local_d0._0_4_;
  }
  pauVar18 = (undefined1 (*) [16])unaff_RDI[0x14];
  if ((int)local_d0._0_4_ < 1) {
    pauVar18 = &local_100;
  }
  local_a0 = unaff_RDI[0x15] - (longlong)pauVar18;
  local_d0._4_4_ = *(undefined4 *)(unaff_RDI + 0x1b);
  if (iVar7 < (int)local_d0._4_4_) {
    iVar7 = local_d0._4_4_;
  }
  pauVar20 = (undefined1 (*) [16])unaff_RDI[0x19];
  if ((int)local_d0._4_4_ < 1) {
    pauVar20 = &local_100;
  }
  local_98 = unaff_RDI[0x1a] - (longlong)pauVar20;
  local_d0._8_4_ = *(undefined4 *)(unaff_RDI + 0x20);
  if (iVar7 < (int)local_d0._8_4_) {
    iVar7 = local_d0._8_4_;
  }
  pauVar22 = (undefined1 (*) [16])unaff_RDI[0x1e];
  if ((int)local_d0._8_4_ < 1) {
    pauVar22 = &local_100;
  }
  local_90 = unaff_RDI[0x1f] - (longlong)pauVar22;
  local_d0._12_4_ = *(undefined4 *)(unaff_RDI + 0x25);
  if (iVar7 < (int)local_d0._12_4_) {
    iVar7 = local_d0._12_4_;
  }
  pauVar24 = (undefined1 (*) [16])unaff_RDI[0x23];
  if ((int)local_d0._12_4_ < 1) {
    pauVar24 = &local_100;
  }
  local_88 = unaff_RDI[0x24] - (longlong)pauVar24;
  if (iVar7 != 0) {
    auVar27 = unaff_RSI[1];
    auVar26 = unaff_RSI[2];
    uVar1 = *(uint *)unaff_RSI[0xf];
    auVar28 = *(undefined1 (*) [16])(unaff_RDI + 3) ^ auVar41 ^ *pauVar10;
    auVar29 = *(undefined1 (*) [16])(unaff_RDI + 8) ^ auVar41 ^ *pauVar12;
    auVar31 = *(undefined1 (*) [16])(unaff_RDI + 0xd) ^ auVar41 ^ *pauVar14;
    auVar33 = *(undefined1 (*) [16])(unaff_RDI + 0x12) ^ auVar41 ^ *pauVar16;
    auVar35 = *(undefined1 (*) [16])(unaff_RDI + 0x17) ^ auVar41 ^ *pauVar18;
    auVar34 = *(undefined1 (*) [16])(unaff_RDI + 0x1c) ^ auVar41 ^ *pauVar20;
    auVar32 = *(undefined1 (*) [16])(unaff_RDI + 0x21) ^ auVar41 ^ *pauVar22;
    auVar30 = *(undefined1 (*) [16])(unaff_RDI + 0x26) ^ auVar41 ^ *pauVar24;
    do {
      auVar28 = aesenc(auVar28,auVar27);
      auVar29 = aesenc(auVar29,auVar27);
      auVar31 = aesenc(auVar31,auVar27);
      auVar33 = aesenc(auVar33,auVar27);
      pauVar11 = pauVar10;
      if ((int)local_e0._0_4_ < 2) {
        pauVar11 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar10 + lVar8;
      if ((int)local_e0._0_4_ < 1) {
        puVar9 = local_100;
      }
      auVar36 = aesenc(auVar34,auVar27);
      lVar8 = (longlong)puVar9 - (longlong)pauVar11;
      auVar38 = aesenc(auVar32,auVar27);
      auVar2 = auVar41 ^ pauVar11[1];
      auVar40 = aesenc(auVar30,auVar27);
      auVar27 = unaff_RSI[3];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar29,auVar26);
      auVar32 = aesenc(auVar31,auVar26);
      auVar34 = aesenc(auVar33,auVar26);
      pauVar13 = pauVar12;
      if ((int)local_e0._4_4_ < 2) {
        pauVar13 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar12 + local_b8;
      if ((int)local_e0._4_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar36,auVar26);
      local_b8 = (longlong)puVar9 - (longlong)pauVar13;
      auVar31 = aesenc(auVar38,auVar26);
      auVar36 = auVar41 ^ pauVar13[1];
      auVar29 = aesenc(auVar40,auVar26);
      auVar26 = unaff_RSI[4];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar15 = pauVar14;
      if ((int)local_e0._8_4_ < 2) {
        pauVar15 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar14 + local_b0;
      if ((int)local_e0._8_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_b0 = (longlong)puVar9 - (longlong)pauVar15;
      auVar31 = aesenc(auVar31,auVar27);
      auVar38 = auVar41 ^ pauVar15[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = unaff_RSI[5];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar17 = pauVar16;
      if ((int)local_e0._12_4_ < 2) {
        pauVar17 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar16 + local_a8;
      if ((int)local_e0._12_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_a8 = (longlong)puVar9 - (longlong)pauVar17;
      auVar31 = aesenc(auVar31,auVar26);
      auVar40 = auVar41 ^ pauVar17[1];
      auVar29 = aesenc(auVar29,auVar26);
      auVar26 = unaff_RSI[6];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar19 = pauVar18;
      if ((int)local_d0._0_4_ < 2) {
        pauVar19 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar18 + local_a0;
      if ((int)local_d0._0_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_a0 = (longlong)puVar9 - (longlong)pauVar19;
      auVar31 = aesenc(auVar31,auVar27);
      auVar3 = auVar41 ^ pauVar19[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = unaff_RSI[7];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar21 = pauVar20;
      if ((int)local_d0._4_4_ < 2) {
        pauVar21 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar20 + local_98;
      if ((int)local_d0._4_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_98 = (longlong)puVar9 - (longlong)pauVar21;
      auVar31 = aesenc(auVar31,auVar26);
      auVar4 = auVar41 ^ pauVar21[1];
      auVar29 = aesenc(auVar29,auVar26);
      auVar26 = unaff_RSI[8];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar23 = pauVar22;
      if ((int)local_d0._8_4_ < 2) {
        pauVar23 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar22 + local_90;
      if ((int)local_d0._8_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_90 = (longlong)puVar9 - (longlong)pauVar23;
      auVar31 = aesenc(auVar31,auVar27);
      auVar5 = auVar41 ^ pauVar23[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = unaff_RSI[9];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar25 = pauVar24;
      if ((int)local_d0._12_4_ < 2) {
        pauVar25 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar24 + local_88;
      if ((int)local_d0._12_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_88 = (longlong)puVar9 - (longlong)pauVar25;
      auVar31 = aesenc(auVar31,auVar26);
      auVar6 = auVar41 ^ pauVar25[1];
      auVar41 = aesenc(auVar29,auVar26);
      auVar26 = unaff_RSI[10];
      if (10 < uVar1) {
        auVar28 = aesenc(auVar28,auVar27);
        auVar30 = aesenc(auVar30,auVar27);
        auVar32 = aesenc(auVar32,auVar27);
        auVar34 = aesenc(auVar34,auVar27);
        auVar35 = aesenc(auVar35,auVar27);
        auVar33 = aesenc(auVar33,auVar27);
        auVar31 = aesenc(auVar31,auVar27);
        auVar41 = aesenc(auVar41,auVar27);
        auVar27 = unaff_RSI[0xb];
        auVar28 = aesenc(auVar28,auVar26);
        auVar30 = aesenc(auVar30,auVar26);
        auVar32 = aesenc(auVar32,auVar26);
        auVar34 = aesenc(auVar34,auVar26);
        auVar35 = aesenc(auVar35,auVar26);
        auVar33 = aesenc(auVar33,auVar26);
        auVar31 = aesenc(auVar31,auVar26);
        auVar41 = aesenc(auVar41,auVar26);
        auVar26 = unaff_RSI[0xc];
        if (uVar1 != 0xb) {
          auVar28 = aesenc(auVar28,auVar27);
          auVar30 = aesenc(auVar30,auVar27);
          auVar32 = aesenc(auVar32,auVar27);
          auVar34 = aesenc(auVar34,auVar27);
          auVar35 = aesenc(auVar35,auVar27);
          auVar33 = aesenc(auVar33,auVar27);
          auVar31 = aesenc(auVar31,auVar27);
          auVar41 = aesenc(auVar41,auVar27);
          auVar27 = unaff_RSI[0xd];
          auVar28 = aesenc(auVar28,auVar26);
          auVar30 = aesenc(auVar30,auVar26);
          auVar32 = aesenc(auVar32,auVar26);
          auVar34 = aesenc(auVar34,auVar26);
          auVar35 = aesenc(auVar35,auVar26);
          auVar33 = aesenc(auVar33,auVar26);
          auVar31 = aesenc(auVar31,auVar26);
          auVar41 = aesenc(auVar41,auVar26);
          auVar26 = unaff_RSI[0xe];
        }
      }
      auVar29 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar28 = vpcmpgtd_avx(local_e0,(undefined1  [16])0x0);
      auVar34 = aesenc(auVar34,auVar27);
      auVar35 = aesenc(auVar35,auVar27);
      local_e0 = vpaddd_avx(auVar28,local_e0);
      auVar37 = aesenc(auVar33,auVar27);
      auVar39 = aesenc(auVar31,auVar27);
      auVar42 = aesenc(auVar41,auVar27);
      auVar27 = unaff_RSI[1];
      auVar28 = aesenclast(auVar29,auVar26);
      auVar29 = aesenclast(auVar30,auVar26);
      auVar31 = aesenclast(auVar32,auVar26);
      auVar41 = vpcmpgtd_avx(local_d0,(undefined1  [16])0x0);
      auVar33 = aesenclast(auVar34,auVar26);
      auVar35 = aesenclast(auVar35,auVar26);
      local_d0 = vpaddd_avx(local_d0,auVar41);
      auVar41 = *unaff_RSI;
      auVar34 = aesenclast(auVar37,auVar26);
      auVar32 = aesenclast(auVar39,auVar26);
      auVar30 = aesenclast(auVar42,auVar26);
      auVar26 = unaff_RSI[2];
      *(undefined1 (*) [16])((longlong)pauVar11 + lVar8) = auVar28;
      pauVar10 = pauVar11 + 1;
      auVar28 = auVar28 ^ auVar2;
      *(undefined1 (*) [16])((longlong)pauVar13 + local_b8) = auVar29;
      pauVar12 = pauVar13 + 1;
      auVar29 = auVar29 ^ auVar36;
      *(undefined1 (*) [16])((longlong)pauVar15 + local_b0) = auVar31;
      pauVar14 = pauVar15 + 1;
      auVar31 = auVar31 ^ auVar38;
      *(undefined1 (*) [16])((longlong)pauVar17 + local_a8) = auVar33;
      pauVar16 = pauVar17 + 1;
      auVar33 = auVar33 ^ auVar40;
      *(undefined1 (*) [16])((longlong)pauVar19 + local_a0) = auVar35;
      pauVar18 = pauVar19 + 1;
      auVar35 = auVar35 ^ auVar3;
      *(undefined1 (*) [16])((longlong)pauVar21 + local_98) = auVar34;
      pauVar20 = pauVar21 + 1;
      auVar34 = auVar34 ^ auVar4;
      *(undefined1 (*) [16])((longlong)pauVar23 + local_90) = auVar32;
      pauVar22 = pauVar23 + 1;
      auVar32 = auVar32 ^ auVar5;
      *(undefined1 (*) [16])((longlong)pauVar25 + local_88) = auVar30;
      pauVar24 = pauVar25 + 1;
      auVar30 = auVar30 ^ auVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



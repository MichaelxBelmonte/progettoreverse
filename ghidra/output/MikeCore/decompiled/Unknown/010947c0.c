// Function: FUN_010947c0
// Address: 010947c0
// Size: 4470 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010947c0(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*unaff_RSI) [16];
  ulonglong *unaff_RDI;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  pauVar1 = unaff_RSI + param_2 * 8;
  uVar11 = *unaff_RDI;
  uVar14 = unaff_RDI[1];
  uVar12 = unaff_RDI[2];
  uVar13 = unaff_RDI[3];
  uVar23 = unaff_RDI[4];
  uVar22 = unaff_RDI[5];
  uVar21 = unaff_RDI[6];
  uVar20 = unaff_RDI[7];
  do {
    auVar2 = vpshufb_avx(*unaff_RSI,_DAT_010937c0);
    auVar3 = vpshufb_avx(unaff_RSI[1],_DAT_010937c0);
    auVar4 = vpshufb_avx(unaff_RSI[2],_DAT_010937c0);
    auVar5 = vpshufb_avx(unaff_RSI[3],_DAT_010937c0);
    auVar6 = vpshufb_avx(unaff_RSI[4],_DAT_010937c0);
    auVar7 = vpshufb_avx(unaff_RSI[5],_DAT_010937c0);
    local_100 = vpaddq_avx(auVar2,_DAT_010932c0);
    auVar8 = vpshufb_avx(unaff_RSI[6],_DAT_010937c0);
    local_f0 = vpaddq_avx(auVar3,_DAT_010932e0);
    auVar9 = vpshufb_avx(unaff_RSI[7],_DAT_010937c0);
    local_e0 = vpaddq_avx(auVar4,_DAT_01093300);
    local_d0 = vpaddq_avx(auVar5,_DAT_01093320);
    local_c0 = vpaddq_avx(auVar6,_DAT_01093340);
    local_b0 = vpaddq_avx(auVar7,_DAT_01093360);
    local_a0 = vpaddq_avx(auVar8,_DAT_01093380);
    local_90 = vpaddq_avx(auVar9,_DAT_010933a0);
    uVar16 = uVar14 ^ uVar12;
    pauVar15 = (undefined1 (*) [16])&DAT_01093340;
    do {
      auVar24 = vpalignr_avx(auVar3,auVar2,8);
      auVar25 = vpalignr_avx(auVar7,auVar6,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar18 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      auVar2 = vpaddq_avx(auVar2,auVar25);
      uVar19 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar23;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar11;
      lVar17 = uVar20 + local_100._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
               (uVar18 >> 0xe | uVar18 << 0x32);
      auVar30 = vpsrlq_avx(auVar9,6);
      uVar13 = uVar13 + lVar17;
      uVar20 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + (uVar16 & (uVar11 ^ uVar14) ^ uVar14);
      auVar28 = vpsllq_avx(auVar9,3);
      auVar2 = vpaddq_avx(auVar2,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar9,0x13);
      uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
      uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar2 = vpaddq_avx(auVar2,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
      lVar17 = uVar21 + local_100._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_100 = vpaddq_avx(auVar2,pauVar15[8]);
      uVar12 = uVar12 + lVar17;
      uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
      auVar24 = vpalignr_avx(auVar4,auVar3,8);
      auVar25 = vpalignr_avx(auVar8,auVar7,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
      auVar3 = vpaddq_avx(auVar3,auVar25);
      uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
      lVar17 = uVar22 + local_f0._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar2,6);
      uVar14 = uVar14 + lVar17;
      uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
      auVar28 = vpsllq_avx(auVar2,3);
      auVar3 = vpaddq_avx(auVar3,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar2,0x13);
      uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
      uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar3 = vpaddq_avx(auVar3,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
      lVar17 = uVar23 + local_f0._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_f0 = vpaddq_avx(auVar3,pauVar15[10]);
      uVar11 = uVar11 + lVar17;
      uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
      auVar24 = vpalignr_avx(auVar5,auVar4,8);
      auVar25 = vpalignr_avx(auVar9,auVar8,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
      auVar4 = vpaddq_avx(auVar4,auVar25);
      uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
      lVar17 = uVar13 + local_e0._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar3,6);
      uVar20 = uVar20 + lVar17;
      uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
      auVar28 = vpsllq_avx(auVar3,3);
      auVar4 = vpaddq_avx(auVar4,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar3,0x13);
      uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
      uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar4 = vpaddq_avx(auVar4,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
      lVar17 = uVar12 + local_e0._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_e0 = vpaddq_avx(auVar4,pauVar15[0xc]);
      uVar21 = uVar21 + lVar17;
      uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
      auVar24 = vpalignr_avx(auVar6,auVar5,8);
      auVar25 = vpalignr_avx(auVar2,auVar9,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      auVar5 = vpaddq_avx(auVar5,auVar25);
      uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
      lVar17 = uVar14 + local_d0._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar4,6);
      uVar22 = uVar22 + lVar17;
      uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
      auVar28 = vpsllq_avx(auVar4,3);
      auVar5 = vpaddq_avx(auVar5,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar4,0x13);
      uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
      uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar5 = vpaddq_avx(auVar5,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
      lVar17 = uVar11 + local_d0._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_d0 = vpaddq_avx(auVar5,pauVar15[0xe]);
      uVar23 = uVar23 + lVar17;
      uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12);
      auVar24 = vpalignr_avx(auVar7,auVar6,8);
      auVar25 = vpalignr_avx(auVar3,auVar2,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      auVar6 = vpaddq_avx(auVar6,auVar25);
      uVar18 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar23;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar11;
      lVar17 = uVar20 + local_c0._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar5,6);
      uVar13 = uVar13 + lVar17;
      uVar20 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar14 ^ uVar12) & (uVar11 ^ uVar14) ^ uVar14);
      auVar28 = vpsllq_avx(auVar5,3);
      auVar6 = vpaddq_avx(auVar6,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar5,0x13);
      uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
      uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar6 = vpaddq_avx(auVar6,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
      lVar17 = uVar21 + local_c0._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_c0 = vpaddq_avx(auVar6,pauVar15[0x10]);
      uVar12 = uVar12 + lVar17;
      uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
      auVar24 = vpalignr_avx(auVar8,auVar7,8);
      auVar25 = vpalignr_avx(auVar4,auVar3,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
      auVar7 = vpaddq_avx(auVar7,auVar25);
      uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
      lVar17 = uVar22 + local_b0._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar6,6);
      uVar14 = uVar14 + lVar17;
      uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
      auVar28 = vpsllq_avx(auVar6,3);
      auVar7 = vpaddq_avx(auVar7,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar6,0x13);
      uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
      uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar7 = vpaddq_avx(auVar7,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
      lVar17 = uVar23 + local_b0._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_b0 = vpaddq_avx(auVar7,pauVar15[0x12]);
      uVar11 = uVar11 + lVar17;
      uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
      auVar24 = vpalignr_avx(auVar9,auVar8,8);
      auVar25 = vpalignr_avx(auVar5,auVar4,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
      auVar8 = vpaddq_avx(auVar8,auVar25);
      uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
      lVar17 = uVar13 + local_a0._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar7,6);
      uVar20 = uVar20 + lVar17;
      uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
      auVar28 = vpsllq_avx(auVar7,3);
      auVar8 = vpaddq_avx(auVar8,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar7,0x13);
      uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
      uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar8 = vpaddq_avx(auVar8,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
      lVar17 = uVar12 + local_a0._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_a0 = vpaddq_avx(auVar8,pauVar15[0x14]);
      uVar21 = uVar21 + lVar17;
      uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
      auVar24 = vpalignr_avx(auVar2,auVar9,8);
      auVar25 = vpalignr_avx(auVar6,auVar5,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      auVar9 = vpaddq_avx(auVar9,auVar25);
      uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
      lVar17 = uVar14 + local_90._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar8,6);
      uVar22 = uVar22 + lVar17;
      uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
      auVar28 = vpsllq_avx(auVar8,3);
      auVar9 = vpaddq_avx(auVar9,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar8,0x13);
      uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
      uVar19 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar18 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      uVar16 = uVar14 ^ uVar12;
      auVar9 = vpaddq_avx(auVar9,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar14;
      lVar17 = uVar11 + local_90._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
               (uVar18 >> 0xe | uVar18 << 0x32);
      local_90 = vpaddq_avx(auVar9,pauVar15[0x16]);
      uVar23 = uVar23 + lVar17;
      uVar11 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + ((uVar12 ^ uVar13) & uVar16 ^ uVar12);
      pauVar10 = pauVar15 + 0x18;
      pauVar15 = pauVar15 + 0x10;
    } while (*(char *)((longlong)*pauVar10 + 7) != '\0');
    uVar18 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
    uVar19 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
    uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar23;
    uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar11;
    lVar17 = uVar20 + local_100._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar18 >> 0xe | uVar18 << 0x32);
    uVar13 = uVar13 + lVar17;
    uVar20 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + (uVar16 & (uVar11 ^ uVar14) ^ uVar14);
    uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
    uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
    lVar17 = uVar21 + local_100._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar12 = uVar12 + lVar17;
    uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
    uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
    uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
    lVar17 = uVar22 + local_f0._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar14 = uVar14 + lVar17;
    uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
    uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
    uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
    lVar17 = uVar23 + local_f0._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar11 = uVar11 + lVar17;
    uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
    uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
    uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
    lVar17 = uVar13 + local_e0._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar20 = uVar20 + lVar17;
    uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
    uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
    uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
    lVar17 = uVar12 + local_e0._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar21 = uVar21 + lVar17;
    uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
    uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
    uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
    lVar17 = uVar14 + local_d0._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar22 = uVar22 + lVar17;
    uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
    uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
    uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
    lVar17 = uVar11 + local_d0._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar23 = uVar23 + lVar17;
    uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12);
    uVar16 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
    uVar18 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar23;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar11;
    lVar17 = uVar20 + local_c0._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar13 = uVar13 + lVar17;
    uVar20 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar14 ^ uVar12) & (uVar11 ^ uVar14) ^ uVar14);
    uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
    uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
    lVar17 = uVar21 + local_c0._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar12 = uVar12 + lVar17;
    uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
    uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
    uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
    lVar17 = uVar22 + local_b0._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar14 = uVar14 + lVar17;
    uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
    uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
    uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
    lVar17 = uVar23 + local_b0._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar11 = uVar11 + lVar17;
    uVar16 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
    uVar23 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
    uVar18 = (uVar16 >> 5 | uVar16 << 0x3b) ^ uVar16;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar11;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar16;
    lVar17 = uVar13 + local_a0._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar20 = uVar20 + lVar17;
    uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar22 ^ uVar21) & (uVar16 ^ uVar22) ^ uVar22);
    uVar23 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
    uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar20;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
    lVar17 = uVar12 + local_a0._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar21 = uVar21 + lVar17;
    uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar16 ^ uVar22) & (uVar13 ^ uVar16) ^ uVar16);
    uVar23 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
    uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar21;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
    lVar17 = uVar14 + local_90._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar22 = uVar22 + lVar17;
    uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar13 ^ uVar16) & (uVar12 ^ uVar13) ^ uVar13);
    uVar23 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
    uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar22;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
    lVar17 = uVar11 + local_90._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12) + *unaff_RDI;
    unaff_RSI = unaff_RSI + 8;
    uVar14 = uVar14 + unaff_RDI[1];
    uVar12 = uVar12 + unaff_RDI[2];
    uVar13 = uVar13 + unaff_RDI[3];
    uVar23 = uVar16 + lVar17 + unaff_RDI[4];
    uVar22 = uVar22 + unaff_RDI[5];
    uVar21 = uVar21 + unaff_RDI[6];
    uVar20 = uVar20 + unaff_RDI[7];
    *unaff_RDI = uVar11;
    unaff_RDI[1] = uVar14;
    unaff_RDI[2] = uVar12;
    unaff_RDI[3] = uVar13;
    unaff_RDI[4] = uVar23;
    unaff_RDI[5] = uVar22;
    unaff_RDI[6] = uVar21;
    unaff_RDI[7] = uVar20;
  } while (unaff_RSI < pauVar1);
  return;
}



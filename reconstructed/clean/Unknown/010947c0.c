// Function: FUN_010947c0
// Address: 010947c0
// Size: 4470 bytes
// Class: Unknown

void FUN_010947c0(uint64_t param_1,int64_t param_2)

{
  uint8_t (*pauVar1) [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t (*pauVar10) [16];
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint8_t (*pauVar15) [16];
  uint8_t (*arg1) [16];
  uint64_t *this_ptr;
  uint64_t uVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t local_100 [16];
  uint8_t local_f0 [16];
  uint8_t local_e0 [16];
  uint8_t local_d0 [16];
  uint8_t local_c0 [16];
  uint8_t local_b0 [16];
  uint8_t local_a0 [16];
  uint8_t local_90 [16];
  
  pauVar1 = arg1 + param_2 * 8;
  uVar11 = *this_ptr;
  uVar14 = this_ptr[1];
  uVar12 = this_ptr[2];
  uVar13 = this_ptr[3];
  uVar23 = this_ptr[4];
  uVar22 = this_ptr[5];
  uVar21 = this_ptr[6];
  uVar20 = this_ptr[7];
  do {
    auVar2 = vpshufb_avx(*arg1,g_010937c0);
    auVar3 = vpshufb_avx(arg1[1],g_010937c0);
    auVar4 = vpshufb_avx(arg1[2],g_010937c0);
    auVar5 = vpshufb_avx(arg1[3],g_010937c0);
    auVar6 = vpshufb_avx(arg1[4],g_010937c0);
    auVar7 = vpshufb_avx(arg1[5],g_010937c0);
    local_100 = vpaddq_avx(auVar2,g_010932c0);
    auVar8 = vpshufb_avx(arg1[6],g_010937c0);
    local_f0 = vpaddq_avx(auVar3,g_010932e0);
    auVar9 = vpshufb_avx(arg1[7],g_010937c0);
    local_e0 = vpaddq_avx(auVar4,g_01093300);
    local_d0 = vpaddq_avx(auVar5,g_01093320);
    local_c0 = vpaddq_avx(auVar6,g_01093340);
    local_b0 = vpaddq_avx(auVar7,g_01093360);
    local_a0 = vpaddq_avx(auVar8,g_01093380);
    local_90 = vpaddq_avx(auVar9,g_010933a0);
    uVar16 = uVar14 ^ uVar12;
    pauVar15 = (uint8_t (*) [16])&g_01093340;
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
    } while (*(char *)((int64_t)*pauVar10 + 7) != '\0');
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
             lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12) + *this_ptr;
    arg1 = arg1 + 8;
    uVar14 = uVar14 + this_ptr[1];
    uVar12 = uVar12 + this_ptr[2];
    uVar13 = uVar13 + this_ptr[3];
    uVar23 = uVar16 + lVar17 + this_ptr[4];
    uVar22 = uVar22 + this_ptr[5];
    uVar21 = uVar21 + this_ptr[6];
    uVar20 = uVar20 + this_ptr[7];
    *this_ptr = uVar11;
    this_ptr[1] = uVar14;
    this_ptr[2] = uVar12;
    this_ptr[3] = uVar13;
    this_ptr[4] = uVar23;
    this_ptr[5] = uVar22;
    this_ptr[6] = uVar21;
    this_ptr[7] = uVar20;
  } while (arg1 < pauVar1);
  return;
}


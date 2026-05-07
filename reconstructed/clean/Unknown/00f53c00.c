// Function: FUN_00f53c00
// Address: 00f53c00
// Size: 4396 bytes
// Class: Unknown

void FUN_00f53c00(uint8_t (*param_1) [16],int64_t param_2,uint8_t (*param_3) [16],
                 uint *param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t (*pauVar5) [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint8_t (*pauVar9) [16];
  uint uVar10;
  uint8_t (*pauVar11) [16];
  uint uVar12;
  int64_t arg1;
  int64_t lVar13;
  uint8_t (*this_ptr) [16];
  int64_t lVar14;
  int iVar15;
  uint8_t (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int64_t lVar23;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  int64_t local_res8;
  uint8_t local_c0 [16];
  uint8_t local_b0 [16];
  uint8_t local_a0 [16];
  uint8_t local_90 [16];
  
  lVar13 = arg1 - (int64_t)this_ptr;
  lVar14 = local_res8 - (int64_t)this_ptr;
  pauVar9 = this_ptr + param_2 * 4;
  auVar35 = *param_3;
  lVar23 = (uint64_t)*(uint *)param_1[0xf] - 9;
  uVar6 = *param_4;
  uVar10 = param_4[1];
  uVar7 = param_4[2];
  uVar8 = param_4[3];
  uVar22 = param_4[4];
  uVar21 = param_4[5];
  uVar20 = param_4[6];
  uVar19 = param_4[7];
  auVar1 = *(uint8_t (*) [16])(&g_00f52b60 + lVar23 * 8);
  auVar2 = *(uint8_t (*) [16])(&g_00f52b70 + lVar23 * 8);
  auVar3 = *(uint8_t (*) [16])(&g_00f52b80 + lVar23 * 8);
  auVar34 = *param_1;
  do {
    auVar31 = vpshufb_avx(*(uint8_t (*) [16])(lVar14 + (int64_t)this_ptr),g_00f52b40);
    auVar26 = vpshufb_avx(*(uint8_t (*) [16])(lVar14 + 0x10 + (int64_t)this_ptr),g_00f52b40)
    ;
    auVar27 = vpshufb_avx(*(uint8_t (*) [16])(lVar14 + 0x20 + (int64_t)this_ptr),g_00f52b40)
    ;
    local_c0 = vpaddd_avx(auVar31,g_00f52940);
    auVar4 = vpshufb_avx(*(uint8_t (*) [16])(lVar14 + 0x30 + (int64_t)this_ptr),g_00f52b40);
    local_b0 = vpaddd_avx(auVar26,g_00f52960);
    local_a0 = vpaddd_avx(auVar27,g_00f52980);
    local_90 = vpaddd_avx(auVar4,g_00f529a0);
    uVar12 = uVar10 ^ uVar7;
    pauVar11 = (uint8_t (*) [16])&g_00f52940;
    do {
      pauVar16 = this_ptr;
      auVar33 = vpalignr_avx(auVar26,auVar31,4);
      auVar24 = vpalignr_avx(auVar4,auVar27,4);
      uVar17 = (uVar22 >> 0xe | uVar22 << 0x12) ^ uVar22;
      auVar28 = vpsrld_avx(auVar33,7);
      uVar18 = (uVar6 >> 9 | uVar6 << 0x17) ^ uVar6;
      auVar31 = vpaddd_avx(auVar31,auVar24);
      uVar17 = (uVar17 >> 5 | uVar17 << 0x1b) ^ uVar22;
      auVar32 = vpsrld_avx(auVar33,3);
      auVar24 = vpslld_avx(auVar33,0xe);
      uVar18 = (uVar18 >> 0xb | uVar18 << 0x15) ^ uVar6;
      iVar15 = uVar19 + local_c0._0_4_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
               (uVar17 >> 6 | uVar17 << 0x1a);
      auVar33 = vpshufd_avx(auVar4,0xfa);
      uVar8 = uVar8 + iVar15;
      auVar29 = vpsrld_avx(auVar28,0xb);
      uVar19 = (uVar18 >> 2 | uVar18 << 0x1e) + iVar15 + (uVar12 & (uVar6 ^ uVar10) ^ uVar10);
      uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
      auVar25 = vpslld_avx(auVar24,0xb);
      uVar17 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
      auVar30 = vpsrld_avx(auVar33,10);
      auVar33 = vpsrlq_avx(auVar33,0x11);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar19;
      auVar31 = vpaddd_avx(auVar31,auVar32 ^ auVar28 ^ auVar24 ^ auVar29 ^ auVar25);
      iVar15 = uVar20 + local_c0._4_4_ + ((uVar22 ^ uVar21) & uVar8 ^ uVar21) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar7 = uVar7 + iVar15;
      auVar24 = vpsrlq_avx(auVar33,2);
      uVar20 = (uVar17 >> 2 | uVar17 << 0x1e) +
               iVar15 + ((uVar6 ^ uVar10) & (uVar19 ^ uVar6) ^ uVar6);
      uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
      auVar33 = vpshufd_avx(auVar30 ^ auVar33 ^ auVar24,0x84);
      uVar17 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar33 = vpsrldq_avx(auVar33,8);
      auVar24 = aesenc(*pauVar16 ^ auVar34 ^ auVar35,param_1[1]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
      auVar35 = vpaddd_avx(auVar31,auVar33);
      auVar34 = vpshufd_avx(auVar35,0x50);
      auVar31 = vpsrld_avx(auVar34,10);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar20;
      iVar15 = uVar21 + local_c0._8_4_ + ((uVar8 ^ uVar22) & uVar7 ^ uVar22) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar34 = vpsrlq_avx(auVar34,0x11);
      uVar10 = uVar10 + iVar15;
      uVar21 = (uVar17 >> 2 | uVar17 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar6) & (uVar20 ^ uVar19) ^ uVar19);
      auVar33 = vpsrlq_avx(auVar34,2);
      uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar34 = vpshufd_avx(auVar31 ^ auVar34 ^ auVar33,0xe8);
      uVar17 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      auVar34 = vpslldq_avx(auVar34,8);
      auVar33 = aesenc(auVar24,param_1[2]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
      iVar15 = uVar22 + local_c0._12_4_;
      auVar31 = vpaddd_avx(auVar35,auVar34);
      local_c0 = vpaddd_avx(auVar31,pauVar11[8]);
      uVar22 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar21;
      iVar15 = iVar15 + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar6 = uVar6 + iVar15;
      uVar22 = (uVar22 >> 2 | uVar22 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar34 = vpalignr_avx(auVar27,auVar26,4);
      auVar35 = vpalignr_avx(auVar31,auVar4,4);
      uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar24 = vpsrld_avx(auVar34,7);
      uVar17 = (uVar22 >> 9 | uVar22 * 0x800000) ^ uVar22;
      auVar35 = vpaddd_avx(auVar26,auVar35);
      auVar28 = aesenc(auVar33,param_1[3]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
      auVar29 = vpsrld_avx(auVar34,3);
      auVar26 = vpslld_avx(auVar34,0xe);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar22;
      iVar15 = uVar8 + local_b0._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar34 = vpshufd_avx(auVar31,0xfa);
      uVar19 = uVar19 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar8 = (uVar17 >> 2 | uVar17 << 0x1e) +
              iVar15 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
      uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar33 = vpslld_avx(auVar26,0xb);
      uVar17 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
      auVar30 = aesenc(auVar28,param_1[4]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
      auVar28 = vpsrld_avx(auVar34,10);
      auVar34 = vpsrlq_avx(auVar34,0x11);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar8;
      auVar35 = vpaddd_avx(auVar35,auVar29 ^ auVar24 ^ auVar26 ^ auVar25 ^ auVar33);
      iVar15 = uVar7 + local_b0._4_4_ + ((uVar6 ^ uVar10) & uVar19 ^ uVar10) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar26 = vpsrlq_avx(auVar34,2);
      uVar7 = (uVar17 >> 2 | uVar17 << 0x1e) +
              iVar15 + ((uVar22 ^ uVar21) & (uVar8 ^ uVar22) ^ uVar22);
      uVar12 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar34 = vpshufd_avx(auVar28 ^ auVar34 ^ auVar26,0x84);
      uVar17 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar34 = vpsrldq_avx(auVar34,8);
      auVar24 = aesenc(auVar30,param_1[5]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar20;
      auVar35 = vpaddd_avx(auVar35,auVar34);
      auVar34 = vpshufd_avx(auVar35,0x50);
      auVar26 = vpsrld_avx(auVar34,10);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar7;
      iVar15 = uVar10 + local_b0._8_4_ + ((uVar19 ^ uVar6) & uVar20 ^ uVar6) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar34 = vpsrlq_avx(auVar34,0x11);
      uVar21 = uVar21 + iVar15;
      uVar10 = (uVar17 >> 2 | uVar17 << 0x1e) +
               iVar15 + ((uVar8 ^ uVar22) & (uVar7 ^ uVar8) ^ uVar8);
      auVar33 = vpsrlq_avx(auVar34,2);
      uVar12 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
      auVar34 = vpshufd_avx(auVar26 ^ auVar34 ^ auVar33,0xe8);
      uVar17 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar34 = vpslldq_avx(auVar34,8);
      auVar33 = aesenc(auVar24,param_1[6]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar21;
      iVar15 = uVar6 + local_b0._12_4_;
      auVar26 = vpaddd_avx(auVar35,auVar34);
      local_b0 = vpaddd_avx(auVar26,pauVar11[10]);
      uVar6 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar10;
      iVar15 = iVar15 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar22 = uVar22 + iVar15;
      uVar6 = (uVar6 >> 2 | uVar6 << 0x1e) + iVar15 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7);
      auVar34 = vpalignr_avx(auVar4,auVar27,4);
      auVar35 = vpalignr_avx(auVar26,auVar31,4);
      uVar12 = (uVar22 >> 0xe | uVar22 * 0x40000) ^ uVar22;
      auVar24 = vpsrld_avx(auVar34,7);
      uVar17 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar35 = vpaddd_avx(auVar27,auVar35);
      auVar28 = aesenc(auVar33,param_1[7]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar22;
      auVar29 = vpsrld_avx(auVar34,3);
      auVar27 = vpslld_avx(auVar34,0xe);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar6;
      iVar15 = uVar19 + local_a0._0_4_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar34 = vpshufd_avx(auVar26,0xfa);
      uVar8 = uVar8 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar19 = (uVar17 >> 2 | uVar17 << 0x1e) +
               iVar15 + ((uVar10 ^ uVar7) & (uVar6 ^ uVar10) ^ uVar10);
      uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
      auVar33 = vpslld_avx(auVar27,0xb);
      uVar17 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar30 = aesenc(auVar28,param_1[8]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
      auVar28 = vpsrld_avx(auVar34,10);
      auVar34 = vpsrlq_avx(auVar34,0x11);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar19;
      auVar35 = vpaddd_avx(auVar35,auVar29 ^ auVar24 ^ auVar27 ^ auVar25 ^ auVar33);
      iVar15 = uVar20 + local_a0._4_4_ + ((uVar22 ^ uVar21) & uVar8 ^ uVar21) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar7 = uVar7 + iVar15;
      auVar27 = vpsrlq_avx(auVar34,2);
      uVar20 = (uVar17 >> 2 | uVar17 << 0x1e) +
               iVar15 + ((uVar6 ^ uVar10) & (uVar19 ^ uVar6) ^ uVar6);
      uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
      auVar34 = vpshufd_avx(auVar28 ^ auVar34 ^ auVar27,0x84);
      uVar17 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar34 = vpsrldq_avx(auVar34,8);
      auVar24 = aesenc(auVar30,param_1[9]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
      auVar35 = vpaddd_avx(auVar35,auVar34);
      auVar34 = vpshufd_avx(auVar35,0x50);
      auVar27 = vpsrld_avx(auVar34,10);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar20;
      iVar15 = uVar21 + local_a0._8_4_ + ((uVar8 ^ uVar22) & uVar7 ^ uVar22) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar34 = vpsrlq_avx(auVar34,0x11);
      uVar10 = uVar10 + iVar15;
      uVar21 = (uVar17 >> 2 | uVar17 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar6) & (uVar20 ^ uVar19) ^ uVar19);
      auVar33 = vpsrlq_avx(auVar34,2);
      uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar34 = vpshufd_avx(auVar27 ^ auVar34 ^ auVar33,0xe8);
      uVar17 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      auVar34 = vpslldq_avx(auVar34,8);
      auVar28 = aesenclast(auVar24,param_1[10]);
      auVar33 = aesenc(auVar24,param_1[10]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
      iVar15 = uVar22 + local_a0._12_4_;
      auVar27 = vpaddd_avx(auVar35,auVar34);
      local_a0 = vpaddd_avx(auVar27,pauVar11[0xc]);
      uVar22 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar21;
      iVar15 = iVar15 + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar6 = uVar6 + iVar15;
      uVar22 = (uVar22 >> 2 | uVar22 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar34 = vpalignr_avx(auVar31,auVar4,4);
      auVar35 = vpalignr_avx(auVar27,auVar26,4);
      uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar25 = vpsrld_avx(auVar34,7);
      uVar17 = (uVar22 >> 9 | uVar22 * 0x800000) ^ uVar22;
      auVar35 = vpaddd_avx(auVar4,auVar35);
      auVar4 = vpand_avx(auVar28,auVar3);
      auVar29 = aesenc(auVar33,param_1[0xb]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
      auVar30 = vpsrld_avx(auVar34,3);
      auVar33 = vpslld_avx(auVar34,0xe);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar22;
      iVar15 = uVar8 + local_90._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar34 = vpshufd_avx(auVar27,0xfa);
      uVar19 = uVar19 + iVar15;
      auVar28 = vpsrld_avx(auVar25,0xb);
      uVar8 = (uVar17 >> 2 | uVar17 << 0x1e) +
              iVar15 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
      uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar24 = vpslld_avx(auVar33,0xb);
      uVar17 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
      auVar36 = aesenclast(auVar29,param_1[0xc]);
      auVar32 = aesenc(auVar29,param_1[0xc]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
      auVar29 = vpsrld_avx(auVar34,10);
      auVar34 = vpsrlq_avx(auVar34,0x11);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar8;
      auVar35 = vpaddd_avx(auVar35,auVar30 ^ auVar25 ^ auVar33 ^ auVar28 ^ auVar24);
      iVar15 = uVar7 + local_90._4_4_ + ((uVar6 ^ uVar10) & uVar19 ^ uVar10) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar33 = vpsrlq_avx(auVar34,2);
      uVar7 = (uVar17 >> 2 | uVar17 << 0x1e) +
              iVar15 + ((uVar22 ^ uVar21) & (uVar8 ^ uVar22) ^ uVar22);
      uVar12 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar34 = vpshufd_avx(auVar29 ^ auVar34 ^ auVar33,0x84);
      uVar17 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar33 = vpsrldq_avx(auVar34,8);
      auVar34 = vpand_avx(auVar36,auVar2);
      auVar28 = aesenc(auVar32,param_1[0xd]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar20;
      auVar35 = vpaddd_avx(auVar35,auVar33);
      auVar33 = vpshufd_avx(auVar35,0x50);
      auVar24 = vpsrld_avx(auVar33,10);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar7;
      iVar15 = uVar10 + local_90._8_4_ + ((uVar19 ^ uVar6) & uVar20 ^ uVar6) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar33 = vpsrlq_avx(auVar33,0x11);
      uVar21 = uVar21 + iVar15;
      uVar10 = (uVar17 >> 2 | uVar17 << 0x1e) +
               iVar15 + ((uVar8 ^ uVar22) & (uVar7 ^ uVar8) ^ uVar8);
      auVar25 = vpsrlq_avx(auVar33,2);
      uVar12 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
      auVar33 = vpshufd_avx(auVar24 ^ auVar33 ^ auVar25,0xe8);
      uVar18 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar24 = vpslldq_avx(auVar33,8);
      auVar33 = vpor_avx(auVar4,auVar34);
      auVar25 = aesenclast(auVar28,param_1[0xe]);
      auVar34 = *param_1;
      uVar17 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar21;
      iVar15 = uVar6 + local_90._12_4_;
      auVar4 = vpaddd_avx(auVar35,auVar24);
      uVar12 = uVar10 ^ uVar7;
      local_90 = vpaddd_avx(auVar4,pauVar11[0xe]);
      uVar6 = (uVar18 >> 0xb | uVar18 << 0x15) ^ uVar10;
      iVar15 = iVar15 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) + (uVar17 >> 6 | uVar17 << 0x1a);
      uVar22 = uVar22 + iVar15;
      uVar6 = (uVar6 >> 2 | uVar6 << 0x1e) + iVar15 + ((uVar7 ^ uVar8) & uVar12 ^ uVar7);
      auVar35 = vpand_avx(auVar25,auVar1);
      auVar35 = vpor_avx(auVar33,auVar35);
      *(uint8_t (*) [16])(lVar13 + (int64_t)pauVar16) = auVar35;
      this_ptr = pauVar16 + 1;
      pauVar5 = pauVar11 + 0x10;
      pauVar11 = pauVar11 + 8;
    } while ((*pauVar5)[3] != '\0');
    uVar17 = (uVar22 >> 0xe | uVar22 * 0x40000) ^ uVar22;
    uVar18 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar17 = (uVar17 >> 5 | uVar17 << 0x1b) ^ uVar22;
    uVar18 = (uVar18 >> 0xb | uVar18 << 0x15) ^ uVar6;
    iVar15 = uVar19 + local_c0._0_4_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
             (uVar17 >> 6 | uVar17 << 0x1a);
    uVar8 = uVar8 + iVar15;
    uVar19 = (uVar18 >> 2 | uVar18 << 0x1e) + iVar15 + (uVar12 & (uVar6 ^ uVar10) ^ uVar10);
    uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar17 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar19;
    iVar15 = uVar20 + local_c0._4_4_ + ((uVar22 ^ uVar21) & uVar8 ^ uVar21) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar7 = uVar7 + iVar15;
    uVar20 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar6 ^ uVar10) & (uVar19 ^ uVar6) ^ uVar6)
    ;
    uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar17 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    auVar35 = aesenc(*this_ptr ^ auVar34 ^ auVar35,param_1[1]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar20;
    iVar15 = uVar21 + local_c0._8_4_ + ((uVar8 ^ uVar22) & uVar7 ^ uVar22) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar21 = (uVar17 >> 2 | uVar17 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar6) & (uVar20 ^ uVar19) ^ uVar19);
    uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar17 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
    auVar35 = aesenc(auVar35,param_1[2]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar21;
    iVar15 = uVar22 + local_c0._12_4_ + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar6 = uVar6 + iVar15;
    uVar22 = (uVar17 >> 2 | uVar17 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
    uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar17 = (uVar22 >> 9 | uVar22 * 0x800000) ^ uVar22;
    auVar35 = aesenc(auVar35,param_1[3]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar22;
    iVar15 = uVar8 + local_b0._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar8 = (uVar17 >> 2 | uVar17 << 0x1e) +
            iVar15 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
    uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar17 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    auVar35 = aesenc(auVar35,param_1[4]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar8;
    iVar15 = uVar7 + local_b0._4_4_ + ((uVar6 ^ uVar10) & uVar19 ^ uVar10) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar7 = (uVar17 >> 2 | uVar17 << 0x1e) +
            iVar15 + ((uVar22 ^ uVar21) & (uVar8 ^ uVar22) ^ uVar22);
    uVar12 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar17 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    auVar35 = aesenc(auVar35,param_1[5]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar20;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar7;
    iVar15 = uVar10 + local_b0._8_4_ + ((uVar19 ^ uVar6) & uVar20 ^ uVar6) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar21 = uVar21 + iVar15;
    uVar10 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar8 ^ uVar22) & (uVar7 ^ uVar8) ^ uVar8);
    uVar12 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar17 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    auVar35 = aesenc(auVar35,param_1[6]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar21;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar10;
    iVar15 = uVar6 + local_b0._12_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar22 = uVar22 + iVar15;
    uVar6 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7);
    uVar12 = (uVar22 >> 0xe | uVar22 * 0x40000) ^ uVar22;
    uVar17 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    auVar35 = aesenc(auVar35,param_1[7]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar22;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar6;
    iVar15 = uVar19 + local_a0._0_4_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar8 = uVar8 + iVar15;
    uVar19 = (uVar17 >> 2 | uVar17 << 0x1e) +
             iVar15 + ((uVar10 ^ uVar7) & (uVar6 ^ uVar10) ^ uVar10);
    uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar17 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    auVar35 = aesenc(auVar35,param_1[8]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar19;
    iVar15 = uVar20 + local_a0._4_4_ + ((uVar22 ^ uVar21) & uVar8 ^ uVar21) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar7 = uVar7 + iVar15;
    uVar20 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar6 ^ uVar10) & (uVar19 ^ uVar6) ^ uVar6)
    ;
    uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar17 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    auVar35 = aesenc(auVar35,param_1[9]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar20;
    iVar15 = uVar21 + local_a0._8_4_ + ((uVar8 ^ uVar22) & uVar7 ^ uVar22) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar21 = (uVar17 >> 2 | uVar17 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar6) & (uVar20 ^ uVar19) ^ uVar19);
    uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar17 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
    auVar31 = aesenclast(auVar35,param_1[10]);
    auVar34 = aesenc(auVar35,param_1[10]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar21;
    iVar15 = uVar22 + local_a0._12_4_ + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar6 = uVar6 + iVar15;
    uVar12 = (uVar17 >> 2 | uVar17 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
    uVar22 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar17 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    auVar35 = vpand_avx(auVar31,auVar3);
    auVar34 = aesenc(auVar34,param_1[0xb]);
    uVar22 = (uVar22 >> 5 | uVar22 << 0x1b) ^ uVar6;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar12;
    iVar15 = uVar8 + local_90._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
             (uVar22 >> 6 | uVar22 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar8 = (uVar17 >> 2 | uVar17 << 0x1e) +
            iVar15 + ((uVar21 ^ uVar20) & (uVar12 ^ uVar21) ^ uVar21);
    uVar22 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar17 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    auVar26 = aesenclast(auVar34,param_1[0xc]);
    auVar31 = aesenc(auVar34,param_1[0xc]);
    uVar22 = (uVar22 >> 5 | uVar22 << 0x1b) ^ uVar19;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar8;
    iVar15 = uVar7 + local_90._4_4_ + ((uVar6 ^ uVar10) & uVar19 ^ uVar10) +
             (uVar22 >> 6 | uVar22 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar7 = (uVar17 >> 2 | uVar17 << 0x1e) +
            iVar15 + ((uVar12 ^ uVar21) & (uVar8 ^ uVar12) ^ uVar12);
    uVar22 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar17 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    auVar34 = vpand_avx(auVar26,auVar2);
    auVar26 = aesenc(auVar31,param_1[0xd]);
    uVar22 = (uVar22 >> 5 | uVar22 << 0x1b) ^ uVar20;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar7;
    iVar15 = uVar10 + local_90._8_4_ + ((uVar19 ^ uVar6) & uVar20 ^ uVar6) +
             (uVar22 >> 6 | uVar22 << 0x1a);
    uVar21 = uVar21 + iVar15;
    uVar10 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar8 ^ uVar12) & (uVar7 ^ uVar8) ^ uVar8);
    uVar22 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar17 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    auVar31 = vpor_avx(auVar35,auVar34);
    auVar35 = aesenclast(auVar26,param_1[0xe]);
    auVar34 = *param_1;
    uVar22 = (uVar22 >> 5 | uVar22 << 0x1b) ^ uVar21;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar10;
    iVar15 = uVar6 + local_90._12_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar22 >> 6 | uVar22 << 0x1a);
    auVar35 = vpand_avx(auVar35,auVar1);
    auVar35 = vpor_avx(auVar31,auVar35);
    *(uint8_t (*) [16])((int64_t)this_ptr + lVar13) = auVar35;
    this_ptr = pauVar16 + 2;
    uVar6 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7) +
            *param_4;
    uVar10 = uVar10 + param_4[1];
    uVar7 = uVar7 + param_4[2];
    uVar8 = uVar8 + param_4[3];
    uVar22 = uVar12 + iVar15 + param_4[4];
    uVar21 = uVar21 + param_4[5];
    uVar20 = uVar20 + param_4[6];
    uVar19 = uVar19 + param_4[7];
    *param_4 = uVar6;
    param_4[1] = uVar10;
    param_4[2] = uVar7;
    param_4[3] = uVar8;
    param_4[4] = uVar22;
    param_4[5] = uVar21;
    param_4[6] = uVar20;
    param_4[7] = uVar19;
  } while (this_ptr < pauVar9);
  *param_3 = auVar35;
  return;
}


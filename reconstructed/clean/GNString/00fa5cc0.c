// Function: FUN_00fa5cc0
// Address: 00fa5cc0
// Size: 2778 bytes
// Class: GNString
// String references:
//   "expand 32-byte k"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00fa5cc0(uint8_t (*param_1) [16],uint64_t param_2,uint8_t (*param_3) [16])

{
  uint8_t (*pauVar1) [32];
  uint8_t auVar2 [32];
  uint8_t auVar3 [32];
  uint8_t auVar4 [32];
  uint8_t auVar5 [32];
  uint8_t auVar6 [32];
  uint8_t auVar7 [32];
  uint8_t auVar8 [32];
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int iVar16;
  uint64_t *arg1;
  uint64_t *this_ptr;
  int64_t lVar17;
  uint8_t auVar18 [32];
  uint8_t auVar19 [32];
  uint8_t auVar20 [32];
  uint8_t auVar21 [32];
  uint8_t auVar22 [32];
  uint8_t auVar23 [32];
  uint8_t auVar24 [32];
  uint8_t auVar25 [32];
  uint8_t auVar26 [32];
  uint8_t auVar27 [32];
  uint8_t auVar28 [32];
  uint8_t auVar29 [32];
  uint8_t auVar30 [32];
  uint8_t auVar31 [32];
  uint8_t auVar32 [32];
  uint8_t auVar33 [32];
  uint8_t auVar34 [32];
  uint8_t auVar35 [32];
  uint8_t auVar36 [32];
  uint8_t local_2a0 [32];
  uint8_t local_280 [32];
  uint8_t local_260 [32];
  uint8_t local_240 [32];
  uint8_t local_220 [32];
  uint8_t local_200 [32];
  uint8_t local_1e0 [32];
  uint8_t local_1c0 [32];
  uint8_t local_1a0 [32];
  uint8_t local_180 [32];
  uint8_t local_160 [32];
  uint8_t local_140 [32];
  uint8_t local_120 [32];
  uint8_t local_100 [32];
  uint8_t local_e0 [32];
  uint8_t local_c0 [32];
  uint8_t local_a0 [32];
  uint8_t local_80 [32];
  uint8_t local_60 [32];
  uint8_t local_40 [32];
  
  auVar24._16_16_ = s_expand_32_byte_k_00fa4200._0_16_;
  auVar24._0_16_ = s_expand_32_byte_k_00fa4200._0_16_;
  auVar21._16_16_ = *param_1;
  auVar21._0_16_ = *param_1;
  auVar29._16_16_ = param_1[1];
  auVar29._0_16_ = param_1[1];
  auVar23._16_16_ = *param_3;
  auVar23._0_16_ = *param_3;
  local_220 = vpshufd_avx2(auVar24,0);
  local_200 = vpshufd_avx2(auVar24,0x55);
  local_1e0 = vpshufd_avx2(auVar24,0xaa);
  local_1c0 = vpshufd_avx2(auVar24,0xff);
  local_1a0 = vpshufd_avx2(auVar21,0);
  local_180 = vpshufd_avx2(auVar21,0x55);
  local_160 = vpshufd_avx2(auVar21,0xaa);
  local_140 = vpshufd_avx2(auVar21,0xff);
  local_120 = vpshufd_avx2(auVar29,0);
  local_100 = vpshufd_avx2(auVar29,0x55);
  local_e0 = vpshufd_avx2(auVar29,0xaa);
  local_c0 = vpshufd_avx2(auVar29,0xff);
  auVar21 = vpshufd_avx2(auVar23,0);
  local_80 = vpshufd_avx2(auVar23,0x55);
  local_a0 = vpaddd_avx2(auVar21,g_00fa4080);
  local_60 = vpshufd_avx2(auVar23,0xaa);
  local_40 = vpshufd_avx2(auVar23,0xff);
  while( true ) {
    iVar16 = 10;
    auVar18 = local_1a0;
    auVar19 = local_180;
    auVar20 = local_160;
    auVar22 = local_140;
    auVar30 = local_a0;
    auVar28 = local_80;
    auVar33 = local_60;
    auVar26 = local_40;
    auVar21 = local_220;
    auVar23 = local_200;
    auVar24 = local_1e0;
    auVar29 = local_1c0;
    auVar7 = local_120;
    auVar8 = local_100;
    local_260 = local_e0;
    local_240 = local_c0;
    do {
      auVar32._16_16_ = g_00fa40c0;
      auVar32._0_16_ = g_00fa40c0;
      auVar21 = vpaddd_avx2(auVar21,auVar18);
      auVar30 = vpshufb_avx2(auVar21 ^ auVar30,auVar32);
      auVar23 = vpaddd_avx2(auVar23,auVar19);
      auVar28 = vpshufb_avx2(auVar23 ^ auVar28,auVar32);
      auVar7 = vpaddd_avx2(auVar7,auVar30);
      auVar25 = vpslld_avx2(auVar7 ^ auVar18,0xc);
      auVar18 = vpsrld_avx2(auVar7 ^ auVar18,0x14);
      auVar18 = vpor_avx2(auVar25,auVar18);
      auVar36._16_16_ = g_00fa40d0;
      auVar36._0_16_ = g_00fa40d0;
      auVar8 = vpaddd_avx2(auVar8,auVar28);
      auVar25 = vpslld_avx2(auVar8 ^ auVar19,0xc);
      auVar19 = vpsrld_avx2(auVar8 ^ auVar19,0x14);
      auVar19 = vpor_avx2(auVar25,auVar19);
      auVar21 = vpaddd_avx2(auVar21,auVar18);
      auVar25 = vpshufb_avx2(auVar21 ^ auVar30,auVar36);
      auVar23 = vpaddd_avx2(auVar23,auVar19);
      auVar36 = vpshufb_avx2(auVar23 ^ auVar28,auVar36);
      auVar7 = vpaddd_avx2(auVar7,auVar25);
      auVar30 = vpslld_avx2(auVar7 ^ auVar18,7);
      auVar18 = vpsrld_avx2(auVar7 ^ auVar18,0x19);
      auVar18 = vpor_avx2(auVar30,auVar18);
      auVar31._16_16_ = g_00fa40c0;
      auVar31._0_16_ = g_00fa40c0;
      auVar8 = vpaddd_avx2(auVar8,auVar36);
      auVar30 = vpslld_avx2(auVar8 ^ auVar19,7);
      auVar19 = vpsrld_avx2(auVar8 ^ auVar19,0x19);
      auVar30 = vpor_avx2(auVar30,auVar19);
      auVar24 = vpaddd_avx2(auVar24,auVar20);
      auVar28 = vpshufb_avx2(auVar24 ^ auVar33,auVar31);
      auVar29 = vpaddd_avx2(auVar29,auVar22);
      auVar33 = vpshufb_avx2(auVar29 ^ auVar26,auVar31);
      auVar19 = vpaddd_avx2(local_260,auVar28);
      auVar26 = vpslld_avx2(auVar19 ^ auVar20,0xc);
      auVar20 = vpsrld_avx2(auVar19 ^ auVar20,0x14);
      auVar26 = vpor_avx2(auVar26,auVar20);
      auVar27._16_16_ = g_00fa40d0;
      auVar27._0_16_ = g_00fa40d0;
      auVar20 = vpaddd_avx2(local_240,auVar33);
      auVar32 = vpslld_avx2(auVar20 ^ auVar22,0xc);
      auVar22 = vpsrld_avx2(auVar20 ^ auVar22,0x14);
      auVar22 = vpor_avx2(auVar32,auVar22);
      auVar24 = vpaddd_avx2(auVar24,auVar26);
      auVar32 = vpshufb_avx2(auVar24 ^ auVar28,auVar27);
      auVar29 = vpaddd_avx2(auVar29,auVar22);
      auVar28 = vpshufb_avx2(auVar29 ^ auVar33,auVar27);
      auVar19 = vpaddd_avx2(auVar19,auVar32);
      auVar33 = vpslld_avx2(auVar19 ^ auVar26,7);
      auVar26 = vpsrld_avx2(auVar19 ^ auVar26,0x19);
      auVar26 = vpor_avx2(auVar33,auVar26);
      auVar34._16_16_ = g_00fa40c0;
      auVar34._0_16_ = g_00fa40c0;
      auVar20 = vpaddd_avx2(auVar20,auVar28);
      auVar33 = vpslld_avx2(auVar20 ^ auVar22,7);
      auVar22 = vpsrld_avx2(auVar20 ^ auVar22,0x19);
      auVar22 = vpor_avx2(auVar33,auVar22);
      auVar21 = vpaddd_avx2(auVar21,auVar30);
      auVar27 = vpshufb_avx2(auVar21 ^ auVar28,auVar34);
      auVar23 = vpaddd_avx2(auVar23,auVar26);
      auVar25 = vpshufb_avx2(auVar23 ^ auVar25,auVar34);
      auVar19 = vpaddd_avx2(auVar19,auVar27);
      auVar28 = vpslld_avx2(auVar19 ^ auVar30,0xc);
      auVar30 = vpsrld_avx2(auVar19 ^ auVar30,0x14);
      auVar28 = vpor_avx2(auVar28,auVar30);
      auVar30._16_16_ = g_00fa40d0;
      auVar30._0_16_ = g_00fa40d0;
      auVar20 = vpaddd_avx2(auVar20,auVar25);
      auVar33 = vpslld_avx2(auVar20 ^ auVar26,0xc);
      auVar26 = vpsrld_avx2(auVar20 ^ auVar26,0x14);
      auVar33 = vpor_avx2(auVar33,auVar26);
      auVar21 = vpaddd_avx2(auVar21,auVar28);
      auVar26 = vpshufb_avx2(auVar21 ^ auVar27,auVar30);
      auVar23 = vpaddd_avx2(auVar23,auVar33);
      auVar30 = vpshufb_avx2(auVar23 ^ auVar25,auVar30);
      local_260 = vpaddd_avx2(auVar19,auVar26);
      auVar25 = vpslld_avx2(local_260 ^ auVar28,7);
      auVar19 = vpsrld_avx2(local_260 ^ auVar28,0x19);
      auVar19 = vpor_avx2(auVar25,auVar19);
      auVar35._16_16_ = g_00fa40c0;
      auVar35._0_16_ = g_00fa40c0;
      local_240 = vpaddd_avx2(auVar20,auVar30);
      auVar28 = vpslld_avx2(local_240 ^ auVar33,7);
      auVar20 = vpsrld_avx2(local_240 ^ auVar33,0x19);
      auVar20 = vpor_avx2(auVar28,auVar20);
      auVar24 = vpaddd_avx2(auVar24,auVar22);
      auVar28 = vpshufb_avx2(auVar24 ^ auVar36,auVar35);
      auVar29 = vpaddd_avx2(auVar29,auVar18);
      auVar33 = vpshufb_avx2(auVar29 ^ auVar32,auVar35);
      auVar7 = vpaddd_avx2(auVar7,auVar28);
      auVar25 = vpslld_avx2(auVar7 ^ auVar22,0xc);
      auVar22 = vpsrld_avx2(auVar7 ^ auVar22,0x14);
      auVar22 = vpor_avx2(auVar25,auVar22);
      auVar25._16_16_ = g_00fa40d0;
      auVar25._0_16_ = g_00fa40d0;
      auVar8 = vpaddd_avx2(auVar8,auVar33);
      auVar36 = vpslld_avx2(auVar8 ^ auVar18,0xc);
      auVar18 = vpsrld_avx2(auVar8 ^ auVar18,0x14);
      auVar18 = vpor_avx2(auVar36,auVar18);
      auVar24 = vpaddd_avx2(auVar24,auVar22);
      auVar28 = vpshufb_avx2(auVar24 ^ auVar28,auVar25);
      auVar29 = vpaddd_avx2(auVar29,auVar18);
      auVar33 = vpshufb_avx2(auVar29 ^ auVar33,auVar25);
      auVar7 = vpaddd_avx2(auVar7,auVar28);
      auVar25 = vpslld_avx2(auVar7 ^ auVar22,7);
      auVar22 = vpsrld_avx2(auVar7 ^ auVar22,0x19);
      auVar22 = vpor_avx2(auVar25,auVar22);
      auVar8 = vpaddd_avx2(auVar8,auVar33);
      auVar25 = vpslld_avx2(auVar8 ^ auVar18,7);
      auVar18 = vpsrld_avx2(auVar8 ^ auVar18,0x19);
      auVar18 = vpor_avx2(auVar25,auVar18);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    auVar21 = vpaddd_avx2(auVar21,local_220);
    auVar23 = vpaddd_avx2(auVar23,local_200);
    auVar24 = vpaddd_avx2(auVar24,local_1e0);
    auVar29 = vpaddd_avx2(auVar29,local_1c0);
    auVar25 = vpunpckldq_avx2(auVar21,auVar23);
    auVar36 = vpunpckldq_avx2(auVar24,auVar29);
    auVar21 = vpunpckhdq_avx2(auVar21,auVar23);
    auVar23 = vpunpckhdq_avx2(auVar24,auVar29);
    auVar32 = vpunpcklqdq_avx2(auVar25,auVar36);
    auVar25 = vpunpckhqdq_avx2(auVar25,auVar36);
    auVar27 = vpunpcklqdq_avx2(auVar21,auVar23);
    auVar36 = vpunpckhqdq_avx2(auVar21,auVar23);
    auVar21 = vpaddd_avx2(auVar18,local_1a0);
    auVar23 = vpaddd_avx2(auVar19,local_180);
    auVar24 = vpaddd_avx2(auVar20,local_160);
    auVar29 = vpaddd_avx2(auVar22,local_140);
    auVar19 = vpunpckldq_avx2(auVar21,auVar23);
    auVar20 = vpunpckldq_avx2(auVar24,auVar29);
    auVar21 = vpunpckhdq_avx2(auVar21,auVar23);
    auVar23 = vpunpckhdq_avx2(auVar24,auVar29);
    auVar29 = vpunpcklqdq_avx2(auVar19,auVar20);
    auVar24 = vpunpckhqdq_avx2(auVar19,auVar20);
    auVar19 = vpunpcklqdq_avx2(auVar21,auVar23);
    auVar21 = vpunpckhqdq_avx2(auVar21,auVar23);
    local_2a0 = vperm2i128_avx2(auVar32,auVar29,0x20);
    auVar32 = vperm2i128_avx2(auVar32,auVar29,0x31);
    auVar31 = vperm2i128_avx2(auVar25,auVar24,0x20);
    auVar25 = vperm2i128_avx2(auVar25,auVar24,0x31);
    auVar34 = vperm2i128_avx2(auVar27,auVar19,0x20);
    auVar27 = vperm2i128_avx2(auVar27,auVar19,0x31);
    auVar35 = vperm2i128_avx2(auVar36,auVar21,0x20);
    auVar36 = vperm2i128_avx2(auVar36,auVar21,0x31);
    auVar21 = vpaddd_avx2(auVar7,local_120);
    auVar23 = vpaddd_avx2(auVar8,local_100);
    auVar24 = vpaddd_avx2(local_260,local_e0);
    auVar29 = vpaddd_avx2(local_240,local_c0);
    auVar7 = vpunpckldq_avx2(auVar21,auVar23);
    auVar8 = vpunpckldq_avx2(auVar24,auVar29);
    auVar21 = vpunpckhdq_avx2(auVar21,auVar23);
    auVar23 = vpunpckhdq_avx2(auVar24,auVar29);
    auVar22 = vpunpcklqdq_avx2(auVar7,auVar8);
    auVar7 = vpunpckhqdq_avx2(auVar7,auVar8);
    auVar18 = vpunpcklqdq_avx2(auVar21,auVar23);
    auVar8 = vpunpckhqdq_avx2(auVar21,auVar23);
    auVar21 = vpaddd_avx2(auVar30,local_a0);
    auVar23 = vpaddd_avx2(auVar28,local_80);
    auVar24 = vpaddd_avx2(auVar33,local_60);
    auVar29 = vpaddd_avx2(auVar26,local_40);
    auVar19 = vpunpckldq_avx2(auVar21,auVar23);
    auVar20 = vpunpckldq_avx2(auVar24,auVar29);
    auVar21 = vpunpckhdq_avx2(auVar21,auVar23);
    auVar23 = vpunpckhdq_avx2(auVar24,auVar29);
    auVar29 = vpunpcklqdq_avx2(auVar19,auVar20);
    auVar24 = vpunpckhqdq_avx2(auVar19,auVar20);
    auVar19 = vpunpcklqdq_avx2(auVar21,auVar23);
    auVar21 = vpunpckhqdq_avx2(auVar21,auVar23);
    auVar23 = vperm2i128_avx2(auVar22,auVar29,0x20);
    auVar29 = vperm2i128_avx2(auVar22,auVar29,0x31);
    auVar20 = vperm2i128_avx2(auVar7,auVar24,0x20);
    auVar24 = vperm2i128_avx2(auVar7,auVar24,0x31);
    auVar7 = vperm2i128_avx2(auVar18,auVar19,0x20);
    auVar19 = vperm2i128_avx2(auVar18,auVar19,0x31);
    auVar22 = vperm2i128_avx2(auVar8,auVar21,0x20);
    auVar21 = vperm2i128_avx2(auVar8,auVar21,0x31);
    local_280._0_8_ = auVar31._0_8_;
    local_280._8_8_ = auVar31._8_8_;
    local_280._16_8_ = auVar31._16_8_;
    local_280._24_8_ = auVar31._24_8_;
    if (param_2 < 0x200) break;
    uVar9 = arg1[1];
    uVar10 = arg1[2];
    uVar11 = arg1[3];
    auVar8 = *(uint8_t (*) [32])(arg1 + 4);
    auVar18 = *(uint8_t (*) [32])(arg1 + 8);
    auVar26 = *(uint8_t (*) [32])(arg1 + 0xc);
    *this_ptr = local_2a0._0_8_ ^ *arg1;
    this_ptr[1] = local_2a0._8_8_ ^ uVar9;
    this_ptr[2] = local_2a0._16_8_ ^ uVar10;
    this_ptr[3] = local_2a0._24_8_ ^ uVar11;
    *(uint8_t (*) [32])(this_ptr + 4) = auVar23 ^ auVar8;
    *(uint8_t (*) [32])(this_ptr + 8) = auVar32 ^ auVar18;
    *(uint8_t (*) [32])(this_ptr + 0xc) = auVar29 ^ auVar26;
    uVar9 = arg1[0x11];
    uVar10 = arg1[0x12];
    uVar11 = arg1[0x13];
    auVar23 = *(uint8_t (*) [32])(arg1 + 0x14);
    auVar29 = *(uint8_t (*) [32])(arg1 + 0x18);
    auVar8 = *(uint8_t (*) [32])(arg1 + 0x1c);
    this_ptr[0x10] = local_280._0_8_ ^ arg1[0x10];
    this_ptr[0x11] = local_280._8_8_ ^ uVar9;
    this_ptr[0x12] = local_280._16_8_ ^ uVar10;
    this_ptr[0x13] = local_280._24_8_ ^ uVar11;
    *(uint8_t (*) [32])(this_ptr + 0x14) = auVar20 ^ auVar23;
    *(uint8_t (*) [32])(this_ptr + 0x18) = auVar25 ^ auVar29;
    *(uint8_t (*) [32])(this_ptr + 0x1c) = auVar24 ^ auVar8;
    auVar23 = *(uint8_t (*) [32])(arg1 + 0x24);
    auVar24 = *(uint8_t (*) [32])(arg1 + 0x28);
    auVar29 = *(uint8_t (*) [32])(arg1 + 0x2c);
    pauVar1 = (uint8_t (*) [32])(arg1 + 0x30);
    *(uint8_t (*) [32])(this_ptr + 0x20) = auVar34 ^ *(uint8_t (*) [32])(arg1 + 0x20);
    *(uint8_t (*) [32])(this_ptr + 0x24) = auVar7 ^ auVar23;
    *(uint8_t (*) [32])(this_ptr + 0x28) = auVar27 ^ auVar24;
    *(uint8_t (*) [32])(this_ptr + 0x2c) = auVar19 ^ auVar29;
    auVar23 = *(uint8_t (*) [32])(arg1 + 0x34);
    auVar24 = *(uint8_t (*) [32])(arg1 + 0x38);
    auVar29 = *(uint8_t (*) [32])(arg1 + 0x3c);
    arg1 = arg1 + 0x40;
    *(uint8_t (*) [32])(this_ptr + 0x30) = auVar35 ^ *pauVar1;
    *(uint8_t (*) [32])(this_ptr + 0x34) = auVar22 ^ auVar23;
    *(uint8_t (*) [32])(this_ptr + 0x38) = auVar36 ^ auVar24;
    *(uint8_t (*) [32])(this_ptr + 0x3c) = auVar21 ^ auVar29;
    this_ptr = this_ptr + 0x40;
    param_2 = param_2 - 0x200;
    if (param_2 == 0) {
      return;
    }
    local_a0 = vpaddd_avx2(local_a0,g_00fa40a0);
  }
  if (param_2 < 0x1c0) {
    if (param_2 < 0x180) {
      if (param_2 < 0x140) {
        if (param_2 < 0x100) {
          if (param_2 < 0xc0) {
            if (param_2 < 0x80) {
              if (param_2 < 0x40) {
                local_280 = auVar23;
                lVar17 = 0;
              }
              else {
                uVar9 = arg1[1];
                uVar10 = arg1[2];
                uVar11 = arg1[3];
                auVar21 = *(uint8_t (*) [32])(arg1 + 4);
                *this_ptr = local_2a0._0_8_ ^ *arg1;
                this_ptr[1] = local_2a0._8_8_ ^ uVar9;
                this_ptr[2] = local_2a0._16_8_ ^ uVar10;
                this_ptr[3] = local_2a0._24_8_ ^ uVar11;
                *(uint8_t (*) [32])(this_ptr + 4) = auVar23 ^ auVar21;
                if (param_2 == 0x40) {
                  return;
                }
                arg1 = arg1 + 8;
                lVar17 = 0;
                local_2a0 = auVar32;
                this_ptr = this_ptr + 8;
                param_2 = param_2 - 0x40;
                local_280 = auVar29;
              }
            }
            else {
              uVar9 = arg1[1];
              uVar10 = arg1[2];
              uVar11 = arg1[3];
              auVar21 = *(uint8_t (*) [32])(arg1 + 4);
              auVar24 = *(uint8_t (*) [32])(arg1 + 8);
              auVar7 = *(uint8_t (*) [32])(arg1 + 0xc);
              *this_ptr = local_2a0._0_8_ ^ *arg1;
              this_ptr[1] = local_2a0._8_8_ ^ uVar9;
              this_ptr[2] = local_2a0._16_8_ ^ uVar10;
              this_ptr[3] = local_2a0._24_8_ ^ uVar11;
              *(uint8_t (*) [32])(this_ptr + 4) = auVar23 ^ auVar21;
              *(uint8_t (*) [32])(this_ptr + 8) = auVar32 ^ auVar24;
              *(uint8_t (*) [32])(this_ptr + 0xc) = auVar29 ^ auVar7;
              if (param_2 == 0x80) {
                return;
              }
              arg1 = arg1 + 0x10;
              lVar17 = 0;
              local_2a0 = auVar31;
              this_ptr = this_ptr + 0x10;
              param_2 = param_2 - 0x80;
              local_280 = auVar20;
            }
          }
          else {
            uVar9 = arg1[1];
            uVar10 = arg1[2];
            uVar11 = arg1[3];
            auVar21 = *(uint8_t (*) [32])(arg1 + 4);
            auVar7 = *(uint8_t (*) [32])(arg1 + 8);
            auVar8 = *(uint8_t (*) [32])(arg1 + 0xc);
            uVar12 = arg1[0x10];
            uVar13 = arg1[0x11];
            uVar14 = arg1[0x12];
            uVar15 = arg1[0x13];
            auVar19 = *(uint8_t (*) [32])(arg1 + 0x14);
            *this_ptr = local_2a0._0_8_ ^ *arg1;
            this_ptr[1] = local_2a0._8_8_ ^ uVar9;
            this_ptr[2] = local_2a0._16_8_ ^ uVar10;
            this_ptr[3] = local_2a0._24_8_ ^ uVar11;
            *(uint8_t (*) [32])(this_ptr + 4) = auVar23 ^ auVar21;
            *(uint8_t (*) [32])(this_ptr + 8) = auVar32 ^ auVar7;
            *(uint8_t (*) [32])(this_ptr + 0xc) = auVar29 ^ auVar8;
            this_ptr[0x10] = local_280._0_8_ ^ uVar12;
            this_ptr[0x11] = local_280._8_8_ ^ uVar13;
            this_ptr[0x12] = local_280._16_8_ ^ uVar14;
            this_ptr[0x13] = local_280._24_8_ ^ uVar15;
            *(uint8_t (*) [32])(this_ptr + 0x14) = auVar20 ^ auVar19;
            if (param_2 == 0xc0) {
              return;
            }
            arg1 = arg1 + 0x18;
            lVar17 = 0;
            local_2a0 = auVar25;
            this_ptr = this_ptr + 0x18;
            param_2 = param_2 - 0xc0;
            local_280 = auVar24;
          }
        }
        else {
          uVar9 = arg1[1];
          uVar10 = arg1[2];
          uVar11 = arg1[3];
          auVar21 = *(uint8_t (*) [32])(arg1 + 4);
          auVar8 = *(uint8_t (*) [32])(arg1 + 8);
          auVar19 = *(uint8_t (*) [32])(arg1 + 0xc);
          uVar12 = arg1[0x10];
          uVar13 = arg1[0x11];
          uVar14 = arg1[0x12];
          uVar15 = arg1[0x13];
          auVar22 = *(uint8_t (*) [32])(arg1 + 0x14);
          auVar18 = *(uint8_t (*) [32])(arg1 + 0x18);
          auVar26 = *(uint8_t (*) [32])(arg1 + 0x1c);
          *this_ptr = local_2a0._0_8_ ^ *arg1;
          this_ptr[1] = local_2a0._8_8_ ^ uVar9;
          this_ptr[2] = local_2a0._16_8_ ^ uVar10;
          this_ptr[3] = local_2a0._24_8_ ^ uVar11;
          *(uint8_t (*) [32])(this_ptr + 4) = auVar23 ^ auVar21;
          *(uint8_t (*) [32])(this_ptr + 8) = auVar32 ^ auVar8;
          *(uint8_t (*) [32])(this_ptr + 0xc) = auVar29 ^ auVar19;
          this_ptr[0x10] = local_280._0_8_ ^ uVar12;
          this_ptr[0x11] = local_280._8_8_ ^ uVar13;
          this_ptr[0x12] = local_280._16_8_ ^ uVar14;
          this_ptr[0x13] = local_280._24_8_ ^ uVar15;
          *(uint8_t (*) [32])(this_ptr + 0x14) = auVar20 ^ auVar22;
          *(uint8_t (*) [32])(this_ptr + 0x18) = auVar25 ^ auVar18;
          *(uint8_t (*) [32])(this_ptr + 0x1c) = auVar24 ^ auVar26;
          if (param_2 == 0x100) {
            return;
          }
          arg1 = arg1 + 0x20;
          lVar17 = 0;
          local_2a0 = auVar34;
          this_ptr = this_ptr + 0x20;
          param_2 = param_2 - 0x100;
          local_280 = auVar7;
        }
      }
      else {
        uVar9 = arg1[1];
        uVar10 = arg1[2];
        uVar11 = arg1[3];
        auVar21 = *(uint8_t (*) [32])(arg1 + 4);
        auVar8 = *(uint8_t (*) [32])(arg1 + 8);
        auVar22 = *(uint8_t (*) [32])(arg1 + 0xc);
        uVar12 = arg1[0x10];
        uVar13 = arg1[0x11];
        uVar14 = arg1[0x12];
        uVar15 = arg1[0x13];
        auVar18 = *(uint8_t (*) [32])(arg1 + 0x14);
        auVar26 = *(uint8_t (*) [32])(arg1 + 0x18);
        auVar30 = *(uint8_t (*) [32])(arg1 + 0x1c);
        auVar28 = *(uint8_t (*) [32])(arg1 + 0x20);
        auVar33 = *(uint8_t (*) [32])(arg1 + 0x24);
        *this_ptr = local_2a0._0_8_ ^ *arg1;
        this_ptr[1] = local_2a0._8_8_ ^ uVar9;
        this_ptr[2] = local_2a0._16_8_ ^ uVar10;
        this_ptr[3] = local_2a0._24_8_ ^ uVar11;
        *(uint8_t (*) [32])(this_ptr + 4) = auVar23 ^ auVar21;
        *(uint8_t (*) [32])(this_ptr + 8) = auVar32 ^ auVar8;
        *(uint8_t (*) [32])(this_ptr + 0xc) = auVar29 ^ auVar22;
        this_ptr[0x10] = local_280._0_8_ ^ uVar12;
        this_ptr[0x11] = local_280._8_8_ ^ uVar13;
        this_ptr[0x12] = local_280._16_8_ ^ uVar14;
        this_ptr[0x13] = local_280._24_8_ ^ uVar15;
        *(uint8_t (*) [32])(this_ptr + 0x14) = auVar20 ^ auVar18;
        *(uint8_t (*) [32])(this_ptr + 0x18) = auVar25 ^ auVar26;
        *(uint8_t (*) [32])(this_ptr + 0x1c) = auVar24 ^ auVar30;
        *(uint8_t (*) [32])(this_ptr + 0x20) = auVar34 ^ auVar28;
        *(uint8_t (*) [32])(this_ptr + 0x24) = auVar7 ^ auVar33;
        if (param_2 == 0x140) {
          return;
        }
        arg1 = arg1 + 0x28;
        lVar17 = 0;
        local_2a0 = auVar27;
        this_ptr = this_ptr + 0x28;
        param_2 = param_2 - 0x140;
        local_280 = auVar19;
      }
    }
    else {
      uVar9 = arg1[1];
      uVar10 = arg1[2];
      uVar11 = arg1[3];
      auVar21 = *(uint8_t (*) [32])(arg1 + 4);
      auVar8 = *(uint8_t (*) [32])(arg1 + 8);
      auVar18 = *(uint8_t (*) [32])(arg1 + 0xc);
      uVar12 = arg1[0x10];
      uVar13 = arg1[0x11];
      uVar14 = arg1[0x12];
      uVar15 = arg1[0x13];
      auVar26 = *(uint8_t (*) [32])(arg1 + 0x14);
      auVar30 = *(uint8_t (*) [32])(arg1 + 0x18);
      auVar28 = *(uint8_t (*) [32])(arg1 + 0x1c);
      auVar33 = *(uint8_t (*) [32])(arg1 + 0x20);
      auVar36 = *(uint8_t (*) [32])(arg1 + 0x24);
      auVar31 = *(uint8_t (*) [32])(arg1 + 0x28);
      auVar2 = *(uint8_t (*) [32])(arg1 + 0x2c);
      *this_ptr = local_2a0._0_8_ ^ *arg1;
      this_ptr[1] = local_2a0._8_8_ ^ uVar9;
      this_ptr[2] = local_2a0._16_8_ ^ uVar10;
      this_ptr[3] = local_2a0._24_8_ ^ uVar11;
      *(uint8_t (*) [32])(this_ptr + 4) = auVar23 ^ auVar21;
      *(uint8_t (*) [32])(this_ptr + 8) = auVar32 ^ auVar8;
      *(uint8_t (*) [32])(this_ptr + 0xc) = auVar29 ^ auVar18;
      this_ptr[0x10] = local_280._0_8_ ^ uVar12;
      this_ptr[0x11] = local_280._8_8_ ^ uVar13;
      this_ptr[0x12] = local_280._16_8_ ^ uVar14;
      this_ptr[0x13] = local_280._24_8_ ^ uVar15;
      *(uint8_t (*) [32])(this_ptr + 0x14) = auVar20 ^ auVar26;
      *(uint8_t (*) [32])(this_ptr + 0x18) = auVar25 ^ auVar30;
      *(uint8_t (*) [32])(this_ptr + 0x1c) = auVar24 ^ auVar28;
      *(uint8_t (*) [32])(this_ptr + 0x20) = auVar34 ^ auVar33;
      *(uint8_t (*) [32])(this_ptr + 0x24) = auVar7 ^ auVar36;
      *(uint8_t (*) [32])(this_ptr + 0x28) = auVar27 ^ auVar31;
      *(uint8_t (*) [32])(this_ptr + 0x2c) = auVar19 ^ auVar2;
      if (param_2 == 0x180) {
        return;
      }
      arg1 = arg1 + 0x30;
      lVar17 = 0;
      local_2a0 = auVar35;
      this_ptr = this_ptr + 0x30;
      param_2 = param_2 - 0x180;
      local_280 = auVar22;
    }
  }
  else {
    uVar9 = arg1[1];
    uVar10 = arg1[2];
    uVar11 = arg1[3];
    auVar8 = *(uint8_t (*) [32])(arg1 + 4);
    auVar18 = *(uint8_t (*) [32])(arg1 + 8);
    auVar26 = *(uint8_t (*) [32])(arg1 + 0xc);
    uVar12 = arg1[0x10];
    uVar13 = arg1[0x11];
    uVar14 = arg1[0x12];
    uVar15 = arg1[0x13];
    auVar30 = *(uint8_t (*) [32])(arg1 + 0x14);
    auVar28 = *(uint8_t (*) [32])(arg1 + 0x18);
    auVar33 = *(uint8_t (*) [32])(arg1 + 0x1c);
    auVar31 = *(uint8_t (*) [32])(arg1 + 0x20);
    auVar2 = *(uint8_t (*) [32])(arg1 + 0x24);
    auVar3 = *(uint8_t (*) [32])(arg1 + 0x28);
    auVar4 = *(uint8_t (*) [32])(arg1 + 0x2c);
    auVar5 = *(uint8_t (*) [32])(arg1 + 0x30);
    auVar6 = *(uint8_t (*) [32])(arg1 + 0x34);
    *this_ptr = local_2a0._0_8_ ^ *arg1;
    this_ptr[1] = local_2a0._8_8_ ^ uVar9;
    this_ptr[2] = local_2a0._16_8_ ^ uVar10;
    this_ptr[3] = local_2a0._24_8_ ^ uVar11;
    *(uint8_t (*) [32])(this_ptr + 4) = auVar23 ^ auVar8;
    *(uint8_t (*) [32])(this_ptr + 8) = auVar32 ^ auVar18;
    *(uint8_t (*) [32])(this_ptr + 0xc) = auVar29 ^ auVar26;
    this_ptr[0x10] = local_280._0_8_ ^ uVar12;
    this_ptr[0x11] = local_280._8_8_ ^ uVar13;
    this_ptr[0x12] = local_280._16_8_ ^ uVar14;
    this_ptr[0x13] = local_280._24_8_ ^ uVar15;
    *(uint8_t (*) [32])(this_ptr + 0x14) = auVar20 ^ auVar30;
    *(uint8_t (*) [32])(this_ptr + 0x18) = auVar25 ^ auVar28;
    *(uint8_t (*) [32])(this_ptr + 0x1c) = auVar24 ^ auVar33;
    *(uint8_t (*) [32])(this_ptr + 0x20) = auVar34 ^ auVar31;
    *(uint8_t (*) [32])(this_ptr + 0x24) = auVar7 ^ auVar2;
    *(uint8_t (*) [32])(this_ptr + 0x28) = auVar27 ^ auVar3;
    *(uint8_t (*) [32])(this_ptr + 0x2c) = auVar19 ^ auVar4;
    *(uint8_t (*) [32])(this_ptr + 0x30) = auVar35 ^ auVar5;
    *(uint8_t (*) [32])(this_ptr + 0x34) = auVar22 ^ auVar6;
    if (param_2 == 0x1c0) {
      return;
    }
    arg1 = arg1 + 0x38;
    lVar17 = 0;
    local_2a0 = auVar36;
    this_ptr = this_ptr + 0x38;
    param_2 = param_2 - 0x1c0;
    local_280 = auVar21;
  }
  do {
    *(byte *)((int64_t)this_ptr + lVar17) =
         *(byte *)((int64_t)arg1 + lVar17) ^ local_2a0[lVar17];
    param_2 = param_2 - 1;
    lVar17 = lVar17 + 1;
  } while (param_2 != 0);
  return;
}


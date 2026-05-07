// Function: FUN_01095980
// Address: 01095980
// Size: 5866 bytes
// Class: Unknown

void FUN_01095980(uint64_t param_1,int64_t param_2)

{
  uint8_t (*pauVar1) [32];
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint8_t (*pauVar9) [32];
  uint8_t (*pauVar10) [32];
  int64_t arg1;
  uint8_t (*pauVar11) [32];
  int64_t *this_ptr;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint8_t (*pauVar17) [32];
  uint64_t uVar18;
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
  uint8_t auStack_550 [1312];
  
  uVar8 = (uint64_t)auStack_550 & 0xfffffffffffff800;
  pauVar1 = (uint8_t (*) [32])(arg1 + param_2 * 0x80);
  pauVar9 = (uint8_t (*) [32])(uVar8 + 0x480);
  *(int64_t **)(uVar8 + 0x500) = this_ptr;
  *(int64_t *)(uVar8 + 0x508) = arg1;
  *(uint8_t (**) [32])(uVar8 + 0x510) = pauVar1;
  *(BADSPACEBASE **)(uVar8 + 0x518) = register0x00000020;
  pauVar11 = (uint8_t (*) [32])(arg1 + 0x80);
  lVar4 = *this_ptr;
  uVar7 = this_ptr[1];
  uVar5 = this_ptr[2];
  pauVar17 = pauVar11;
  if (pauVar11 == pauVar1) {
    pauVar17 = (uint8_t (*) [32])(uVar8 + 0x480);
  }
  uVar6 = this_ptr[3];
  uVar13 = this_ptr[4];
  uVar14 = this_ptr[5];
  uVar15 = this_ptr[6];
  uVar16 = this_ptr[7];
  do {
    auVar19._0_16_ =
         ZEXT116(0) * *(uint8_t (*) [16])*pauVar17 +
         ZEXT116(1) * *(uint8_t (*) [16])pauVar11[-4];
    auVar19._16_16_ =
         ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) +
         ZEXT116(1) * *(uint8_t (*) [16])*pauVar17;
    auVar20._0_16_ =
         ZEXT116(0) * *(uint8_t (*) [16])(*pauVar17 + 0x10) +
         ZEXT116(1) * *(uint8_t (*) [16])(pauVar11[-4] + 0x10);
    auVar20._16_16_ =
         ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) +
         ZEXT116(1) * *(uint8_t (*) [16])(*pauVar17 + 0x10);
    auVar23 = vpshufb_avx2(auVar19,g_010937c0);
    auVar21._0_16_ =
         ZEXT116(0) * *(uint8_t (*) [16])pauVar17[1] +
         ZEXT116(1) * *(uint8_t (*) [16])pauVar11[-3];
    auVar21._16_16_ =
         ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) +
         ZEXT116(1) * *(uint8_t (*) [16])pauVar17[1];
    auVar25 = vpshufb_avx2(auVar20,g_010937c0);
    auVar22._0_16_ =
         ZEXT116(0) * *(uint8_t (*) [16])(pauVar17[1] + 0x10) +
         ZEXT116(1) * *(uint8_t (*) [16])(pauVar11[-3] + 0x10);
    auVar22._16_16_ =
         ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) +
         ZEXT116(1) * *(uint8_t (*) [16])(pauVar17[1] + 0x10);
    auVar26 = vpshufb_avx2(auVar21,g_010937c0);
    auVar28._0_16_ =
         ZEXT116(0) * *(uint8_t (*) [16])pauVar17[2] +
         ZEXT116(1) * *(uint8_t (*) [16])pauVar11[-2];
    auVar28._16_16_ =
         ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) +
         ZEXT116(1) * *(uint8_t (*) [16])pauVar17[2];
    auVar27 = vpshufb_avx2(auVar22,g_010937c0);
    auVar29._0_16_ =
         ZEXT116(0) * *(uint8_t (*) [16])(pauVar17[2] + 0x10) +
         ZEXT116(1) * *(uint8_t (*) [16])(pauVar11[-2] + 0x10);
    auVar29._16_16_ =
         ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) +
         ZEXT116(1) * *(uint8_t (*) [16])(pauVar17[2] + 0x10);
    auVar28 = vpshufb_avx2(auVar28,g_010937c0);
    auVar30._0_16_ =
         ZEXT116(0) * *(uint8_t (*) [16])pauVar17[3] +
         ZEXT116(1) * *(uint8_t (*) [16])pauVar11[-1];
    auVar30._16_16_ =
         ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) +
         ZEXT116(1) * *(uint8_t (*) [16])pauVar17[3];
    auVar29 = vpshufb_avx2(auVar29,g_010937c0);
    auVar31._0_16_ =
         ZEXT116(0) * *(uint8_t (*) [16])(pauVar17[3] + 0x10) +
         ZEXT116(1) * *(uint8_t (*) [16])(pauVar11[-1] + 0x10);
    auVar31._16_16_ =
         ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) +
         ZEXT116(1) * *(uint8_t (*) [16])(pauVar17[3] + 0x10);
    auVar19 = vpaddq_avx2(auVar23,g_010932c0);
    auVar30 = vpshufb_avx2(auVar30,g_010937c0);
    auVar20 = vpaddq_avx2(auVar25,g_010932e0);
    auVar31 = vpshufb_avx2(auVar31,g_010937c0);
    auVar21 = vpaddq_avx2(auVar26,g_01093300);
    auVar22 = vpaddq_avx2(auVar27,g_01093320);
    *pauVar9 = auVar19;
    auVar19 = vpaddq_avx2(auVar28,g_01093340);
    pauVar9[1] = auVar20;
    auVar20 = vpaddq_avx2(auVar29,g_01093360);
    pauVar9[2] = auVar21;
    auVar21 = vpaddq_avx2(auVar30,g_01093380);
    pauVar9[3] = auVar22;
    *(void*)(pauVar9[-5] + 0x18) = *(void*)(pauVar9[4] + 0x18);
    auVar22 = vpaddq_avx2(auVar31,g_010933a0);
    pauVar9[-4] = auVar19;
    uVar18 = 0;
    pauVar9[-3] = auVar20;
    pauVar9[-2] = auVar21;
    uVar12 = uVar7 ^ uVar5;
    pauVar9[-1] = auVar22;
    pauVar1 = pauVar9 + -4;
    pauVar9 = (uint8_t (*) [32])&g_01093440;
    do {
      pauVar10 = pauVar1;
      *(void*)(pauVar10[-5] + 0x18) = *(void*)(pauVar10[-1] + 0x18);
      auVar20 = vpalignr_avx2(auVar25,auVar23,8);
      auVar19 = vpalignr_avx2(auVar29,auVar28,8);
      uVar18 = lVar4 + uVar18;
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar23,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar16 + *(int64_t *)pauVar10[4] + (uVar14 & uVar13) + (~uVar13 & uVar15) +
              ((uVar13 >> 0x29 | uVar13 << 0x17) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0xe | uVar13 << 0x32));
      auVar23 = vpsrlq_avx2(auVar22,7);
      uVar6 = uVar6 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar31,6);
      auVar24 = vpsllq_avx2(auVar31,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar23 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar31,0x13);
      uVar16 = lVar4 + (uVar12 & (uVar18 ^ uVar7) ^ uVar7) +
               ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
               (uVar18 >> 0x1c | uVar18 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar15 + *(int64_t *)(pauVar10[4] + 8) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
              ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
              (uVar6 >> 0xe | uVar6 << 0x32));
      auVar23 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar5 = uVar5 + lVar4;
      auVar19 = vpaddq_avx2(auVar23,pauVar9[-4]);
      pauVar10[-4] = auVar19;
      auVar20 = vpalignr_avx2(auVar26,auVar25,8);
      auVar19 = vpalignr_avx2(auVar30,auVar29,8);
      uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
               (uVar16 >> 0x1c | uVar16 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar25,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar14 + *(int64_t *)pauVar10[5] + (uVar6 & uVar5) + (~uVar5 & uVar13) +
              ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
              (uVar5 >> 0xe | uVar5 << 0x32));
      auVar25 = vpsrlq_avx2(auVar22,7);
      uVar7 = uVar7 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar23,6);
      auVar24 = vpsllq_avx2(auVar23,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar25 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar23,0x13);
      uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
               ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
               (uVar15 >> 0x1c | uVar15 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar13 + *(int64_t *)(pauVar10[5] + 8) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
              ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
              (uVar7 >> 0xe | uVar7 << 0x32));
      auVar25 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar18 = uVar18 + lVar4;
      auVar19 = vpaddq_avx2(auVar25,pauVar9[-3]);
      pauVar10[-3] = auVar19;
      auVar20 = vpalignr_avx2(auVar27,auVar26,8);
      auVar19 = vpalignr_avx2(auVar31,auVar30,8);
      uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
               ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
               (uVar14 >> 0x1c | uVar14 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar26,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar6 + *(int64_t *)pauVar10[6] + (uVar7 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
              (uVar18 >> 0xe | uVar18 << 0x32));
      auVar26 = vpsrlq_avx2(auVar22,7);
      uVar16 = uVar16 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar25,6);
      auVar24 = vpsllq_avx2(auVar25,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar26 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar25,0x13);
      uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
              ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
              (uVar13 >> 0x1c | uVar13 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar5 + *(int64_t *)(pauVar10[6] + 8) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
              ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0xe | uVar16 << 0x32));
      auVar26 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar15 = uVar15 + lVar4;
      auVar19 = vpaddq_avx2(auVar26,pauVar9[-2]);
      pauVar10[-2] = auVar19;
      auVar20 = vpalignr_avx2(auVar28,auVar27,8);
      auVar19 = vpalignr_avx2(auVar23,auVar31,8);
      uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
              ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
              (uVar6 >> 0x1c | uVar6 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar27,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar7 + *(int64_t *)pauVar10[7] + (uVar16 & uVar15) + (~uVar15 & uVar18) +
              ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
              (uVar15 >> 0xe | uVar15 << 0x32));
      auVar27 = vpsrlq_avx2(auVar22,7);
      uVar14 = uVar14 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar26,6);
      auVar24 = vpsllq_avx2(auVar26,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar27 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar26,0x13);
      uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
              ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
              (uVar5 >> 0x1c | uVar5 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar18 + *(int64_t *)(pauVar10[7] + 8) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
              ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
              (uVar14 >> 0xe | uVar14 << 0x32));
      auVar27 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar13 = uVar13 + lVar4;
      auVar19 = vpaddq_avx2(auVar27,pauVar9[-1]);
      pauVar10[-1] = auVar19;
      pauVar1 = pauVar10 + -8;
      *(void*)(pauVar10[-9] + 0x18) = *(void*)(pauVar10[-5] + 0x18);
      auVar20 = vpalignr_avx2(auVar29,auVar28,8);
      auVar19 = vpalignr_avx2(auVar25,auVar23,8);
      uVar18 = lVar4 + ((uVar5 ^ uVar6) & (uVar7 ^ uVar5) ^ uVar5) +
               ((uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
               (uVar7 >> 0x1c | uVar7 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar28,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar16 + *(int64_t *)*pauVar10 + (uVar14 & uVar13) + (~uVar13 & uVar15) +
              ((uVar13 >> 0x29 | uVar13 * 0x800000) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0xe | uVar13 << 0x32));
      auVar28 = vpsrlq_avx2(auVar22,7);
      uVar6 = uVar6 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar27,6);
      auVar24 = vpsllq_avx2(auVar27,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar28 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar27,0x13);
      uVar16 = lVar4 + ((uVar7 ^ uVar5) & (uVar18 ^ uVar7) ^ uVar7) +
               ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
               (uVar18 >> 0x1c | uVar18 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar15 + *(int64_t *)(*pauVar10 + 8) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
              ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
              (uVar6 >> 0xe | uVar6 << 0x32));
      auVar28 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar5 = uVar5 + lVar4;
      auVar19 = vpaddq_avx2(auVar28,*pauVar9);
      *pauVar1 = auVar19;
      auVar20 = vpalignr_avx2(auVar30,auVar29,8);
      auVar19 = vpalignr_avx2(auVar26,auVar25,8);
      uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
               (uVar16 >> 0x1c | uVar16 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar29,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar14 + *(int64_t *)pauVar10[1] + (uVar6 & uVar5) + (~uVar5 & uVar13) +
              ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
              (uVar5 >> 0xe | uVar5 << 0x32));
      auVar29 = vpsrlq_avx2(auVar22,7);
      uVar7 = uVar7 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar28,6);
      auVar24 = vpsllq_avx2(auVar28,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar29 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar28,0x13);
      uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
               ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
               (uVar15 >> 0x1c | uVar15 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar13 + *(int64_t *)(pauVar10[1] + 8) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
              ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
              (uVar7 >> 0xe | uVar7 << 0x32));
      auVar29 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar18 = uVar18 + lVar4;
      auVar19 = vpaddq_avx2(auVar29,pauVar9[1]);
      pauVar10[-7] = auVar19;
      auVar20 = vpalignr_avx2(auVar31,auVar30,8);
      auVar19 = vpalignr_avx2(auVar27,auVar26,8);
      uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
               ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
               (uVar14 >> 0x1c | uVar14 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar30,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar6 + *(int64_t *)pauVar10[2] + (uVar7 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
              (uVar18 >> 0xe | uVar18 << 0x32));
      auVar30 = vpsrlq_avx2(auVar22,7);
      uVar16 = uVar16 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar29,6);
      auVar24 = vpsllq_avx2(auVar29,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar30 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar29,0x13);
      uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
              ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
              (uVar13 >> 0x1c | uVar13 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar5 + *(int64_t *)(pauVar10[2] + 8) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
              ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0xe | uVar16 << 0x32));
      auVar30 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar15 = uVar15 + lVar4;
      auVar19 = vpaddq_avx2(auVar30,pauVar9[2]);
      pauVar10[-6] = auVar19;
      auVar20 = vpalignr_avx2(auVar23,auVar31,8);
      auVar19 = vpalignr_avx2(auVar28,auVar27,8);
      uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
              ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
              (uVar6 >> 0x1c | uVar6 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar31,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar7 + *(int64_t *)pauVar10[3] + (uVar16 & uVar15) + (~uVar15 & uVar18) +
              ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
              (uVar15 >> 0xe | uVar15 << 0x32));
      auVar31 = vpsrlq_avx2(auVar22,7);
      uVar14 = uVar14 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar30,6);
      auVar24 = vpsllq_avx2(auVar30,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar31 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar30,0x13);
      uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
              ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
              (uVar5 >> 0x1c | uVar5 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar18 + *(int64_t *)(pauVar10[3] + 8) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
              ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
              (uVar14 >> 0xe | uVar14 << 0x32));
      uVar12 = uVar7 ^ uVar5;
      auVar31 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar13 = uVar13 + lVar4;
      auVar19 = vpaddq_avx2(auVar31,pauVar9[3]);
      uVar18 = (uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
               (uVar7 >> 0x1c | uVar7 << 0x24);
      lVar4 = lVar4 + ((uVar5 ^ uVar6) & uVar12 ^ uVar5);
      pauVar10[-5] = auVar19;
      pauVar17 = pauVar9 + 4;
      pauVar9 = pauVar9 + 8;
    } while (*(char *)((int64_t)*pauVar17 + 7) != '\0');
    uVar18 = lVar4 + uVar18;
    lVar4 = uVar16 + *(int64_t *)pauVar10[-4] + (uVar14 & uVar13) + (~uVar13 & uVar15) +
            ((uVar13 >> 0x29 | uVar13 * 0x800000) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0xe | uVar13 << 0x32));
    uVar6 = uVar6 + lVar4;
    uVar16 = lVar4 + (uVar12 & (uVar18 ^ uVar7) ^ uVar7) +
             ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
             (uVar18 >> 0x1c | uVar18 << 0x24));
    lVar4 = uVar15 + *(int64_t *)(pauVar10[-4] + 8) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
            ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
            (uVar6 >> 0xe | uVar6 << 0x32));
    uVar5 = uVar5 + lVar4;
    uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
             ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
             (uVar16 >> 0x1c | uVar16 << 0x24));
    lVar4 = uVar14 + *(int64_t *)pauVar10[-3] + (uVar6 & uVar5) + (~uVar5 & uVar13) +
            ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
            (uVar5 >> 0xe | uVar5 << 0x32));
    uVar7 = uVar7 + lVar4;
    uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
             ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
             (uVar15 >> 0x1c | uVar15 << 0x24));
    lVar4 = uVar13 + *(int64_t *)(pauVar10[-3] + 8) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
            ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
            (uVar7 >> 0xe | uVar7 << 0x32));
    uVar18 = uVar18 + lVar4;
    uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
             ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
             (uVar14 >> 0x1c | uVar14 << 0x24));
    lVar4 = uVar6 + *(int64_t *)pauVar10[-2] + (uVar7 & uVar18) + (~uVar18 & uVar5) +
            ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
            (uVar18 >> 0xe | uVar18 << 0x32));
    uVar16 = uVar16 + lVar4;
    uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
            ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
            (uVar13 >> 0x1c | uVar13 << 0x24));
    lVar4 = uVar5 + *(int64_t *)(pauVar10[-2] + 8) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
            ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
            (uVar16 >> 0xe | uVar16 << 0x32));
    uVar15 = uVar15 + lVar4;
    uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
            ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
            (uVar6 >> 0x1c | uVar6 << 0x24));
    lVar4 = uVar7 + *(int64_t *)pauVar10[-1] + (uVar16 & uVar15) + (~uVar15 & uVar18) +
            ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
            (uVar15 >> 0xe | uVar15 << 0x32));
    uVar14 = uVar14 + lVar4;
    uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
            ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
            (uVar5 >> 0x1c | uVar5 << 0x24));
    lVar4 = uVar18 + *(int64_t *)(pauVar10[-1] + 8) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
            ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
            (uVar14 >> 0xe | uVar14 << 0x32));
    uVar13 = uVar13 + lVar4;
    uVar18 = lVar4 + ((uVar5 ^ uVar6) & (uVar7 ^ uVar5) ^ uVar5) +
             ((uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
             (uVar7 >> 0x1c | uVar7 << 0x24));
    lVar4 = uVar16 + *(int64_t *)*pauVar1 + (uVar14 & uVar13) + (~uVar13 & uVar15) +
            ((uVar13 >> 0x29 | uVar13 * 0x800000) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0xe | uVar13 << 0x32));
    uVar6 = uVar6 + lVar4;
    uVar16 = lVar4 + ((uVar7 ^ uVar5) & (uVar18 ^ uVar7) ^ uVar7) +
             ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
             (uVar18 >> 0x1c | uVar18 << 0x24));
    lVar4 = uVar15 + *(int64_t *)(pauVar10[-8] + 8) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
            ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
            (uVar6 >> 0xe | uVar6 << 0x32));
    uVar5 = uVar5 + lVar4;
    uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
             ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
             (uVar16 >> 0x1c | uVar16 << 0x24));
    lVar4 = uVar14 + *(int64_t *)pauVar10[-7] + (uVar6 & uVar5) + (~uVar5 & uVar13) +
            ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
            (uVar5 >> 0xe | uVar5 << 0x32));
    uVar7 = uVar7 + lVar4;
    uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
             ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
             (uVar15 >> 0x1c | uVar15 << 0x24));
    lVar4 = uVar13 + *(int64_t *)(pauVar10[-7] + 8) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
            ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
            (uVar7 >> 0xe | uVar7 << 0x32));
    uVar18 = uVar18 + lVar4;
    uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
             ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
             (uVar14 >> 0x1c | uVar14 << 0x24));
    lVar4 = uVar6 + *(int64_t *)pauVar10[-6] + (uVar7 & uVar18) + (~uVar18 & uVar5) +
            ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
            (uVar18 >> 0xe | uVar18 << 0x32));
    uVar16 = uVar16 + lVar4;
    uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
            ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
            (uVar13 >> 0x1c | uVar13 << 0x24));
    lVar4 = uVar5 + *(int64_t *)(pauVar10[-6] + 8) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
            ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
            (uVar16 >> 0xe | uVar16 << 0x32));
    uVar15 = uVar15 + lVar4;
    uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
            ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
            (uVar6 >> 0x1c | uVar6 << 0x24));
    lVar4 = uVar7 + *(int64_t *)pauVar10[-5] + (uVar16 & uVar15) + (~uVar15 & uVar18) +
            ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
            (uVar15 >> 0xe | uVar15 << 0x32));
    uVar14 = uVar14 + lVar4;
    uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
            ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
            (uVar5 >> 0x1c | uVar5 << 0x24));
    lVar4 = uVar18 + *(int64_t *)(pauVar10[-5] + 8) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
            ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
            (uVar14 >> 0xe | uVar14 << 0x32));
    plVar2 = *(int64_t **)pauVar10[0x20];
    pauVar9 = pauVar10 + 0x1c;
    lVar3 = lVar4 + ((uVar5 ^ uVar6) & (uVar7 ^ uVar5) ^ uVar5) +
            ((uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
            (uVar7 >> 0x1c | uVar7 << 0x24)) + *plVar2;
    uVar7 = uVar7 + plVar2[1];
    uVar5 = uVar5 + plVar2[2];
    uVar6 = uVar6 + plVar2[3];
    uVar13 = uVar13 + lVar4 + plVar2[4];
    uVar14 = uVar14 + plVar2[5];
    uVar15 = uVar15 + plVar2[6];
    uVar16 = uVar16 + plVar2[7];
    *plVar2 = lVar3;
    plVar2[1] = uVar7;
    plVar2[2] = uVar5;
    plVar2[3] = uVar6;
    plVar2[4] = uVar13;
    plVar2[5] = uVar14;
    plVar2[6] = uVar15;
    plVar2[7] = uVar16;
    if (pauVar11 == *(uint8_t (**) [32])(pauVar10[0x20] + 0x10)) {
      return;
    }
    uVar18 = 0;
    uVar12 = uVar7 ^ uVar5;
    do {
      uVar18 = lVar3 + uVar18;
      lVar4 = uVar16 + *(int64_t *)(*pauVar9 + 0x10) + (uVar14 & uVar13) + (~uVar13 & uVar15) +
              ((uVar13 >> 0x29 | uVar13 << 0x17) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0xe | uVar13 << 0x32));
      uVar6 = uVar6 + lVar4;
      uVar16 = lVar4 + (uVar12 & (uVar18 ^ uVar7) ^ uVar7) +
               ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
               (uVar18 >> 0x1c | uVar18 << 0x24));
      lVar4 = uVar15 + *(int64_t *)(*pauVar9 + 0x18) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
              ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
              (uVar6 >> 0xe | uVar6 << 0x32));
      uVar5 = uVar5 + lVar4;
      uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
               (uVar16 >> 0x1c | uVar16 << 0x24));
      lVar4 = uVar14 + *(int64_t *)(pauVar9[1] + 0x10) + (uVar6 & uVar5) + (~uVar5 & uVar13) +
              ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
              (uVar5 >> 0xe | uVar5 << 0x32));
      uVar7 = uVar7 + lVar4;
      uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
               ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
               (uVar15 >> 0x1c | uVar15 << 0x24));
      lVar4 = uVar13 + *(int64_t *)(pauVar9[1] + 0x18) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
              ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
              (uVar7 >> 0xe | uVar7 << 0x32));
      uVar18 = uVar18 + lVar4;
      uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
               ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
               (uVar14 >> 0x1c | uVar14 << 0x24));
      lVar4 = uVar6 + *(int64_t *)(pauVar9[2] + 0x10) + (uVar7 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
              (uVar18 >> 0xe | uVar18 << 0x32));
      uVar16 = uVar16 + lVar4;
      uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
              ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
              (uVar13 >> 0x1c | uVar13 << 0x24));
      lVar4 = uVar5 + *(int64_t *)(pauVar9[2] + 0x18) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
              ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0xe | uVar16 << 0x32));
      uVar15 = uVar15 + lVar4;
      uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
              ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
              (uVar6 >> 0x1c | uVar6 << 0x24));
      lVar4 = uVar7 + *(int64_t *)(pauVar9[3] + 0x10) + (uVar16 & uVar15) + (~uVar15 & uVar18) +
              ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
              (uVar15 >> 0xe | uVar15 << 0x32));
      uVar14 = uVar14 + lVar4;
      uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
              ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
              (uVar5 >> 0x1c | uVar5 << 0x24));
      lVar3 = uVar18 + *(int64_t *)(pauVar9[3] + 0x18) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
              ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
              (uVar14 >> 0xe | uVar14 << 0x32));
      uVar12 = uVar7 ^ uVar5;
      uVar13 = uVar13 + lVar3;
      uVar18 = (uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
               (uVar7 >> 0x1c | uVar7 << 0x24);
      lVar3 = lVar3 + ((uVar5 ^ uVar6) & uVar12 ^ uVar5);
      pauVar9 = pauVar9 + -4;
    } while (pauVar1 <= pauVar9);
    plVar2 = *(int64_t **)pauVar10[0x20];
    pauVar9 = pauVar10 + 0x1c;
    lVar4 = lVar3 + uVar18 + *plVar2;
    uVar7 = uVar7 + plVar2[1];
    uVar5 = uVar5 + plVar2[2];
    uVar6 = uVar6 + plVar2[3];
    uVar13 = uVar13 + plVar2[4];
    uVar14 = uVar14 + plVar2[5];
    pauVar11 = pauVar11 + 8;
    uVar15 = uVar15 + plVar2[6];
    uVar16 = uVar16 + plVar2[7];
    pauVar1 = *(uint8_t (**) [32])(pauVar10[0x20] + 0x10);
    *plVar2 = lVar4;
    pauVar17 = pauVar11;
    if (pauVar11 == pauVar1) {
      pauVar17 = pauVar9;
    }
    plVar2[1] = uVar7;
    plVar2[2] = uVar5;
    plVar2[3] = uVar6;
    plVar2[4] = uVar13;
    plVar2[5] = uVar14;
    plVar2[6] = uVar15;
    plVar2[7] = uVar16;
  } while (pauVar11 <= pauVar1);
  return;
}


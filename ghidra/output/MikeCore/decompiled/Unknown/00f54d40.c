// Function: FUN_00f54d40
// Address: 00f54d40
// Size: 6739 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f54d40(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                 int *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [32];
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  uint uVar19;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  longlong lVar27;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  longlong local_res8;
  undefined1 auStack_270 [576];
  
  uVar15 = (ulonglong)auStack_270 & 0xfffffffffffffc00;
  pauVar16 = (undefined1 (*) [32])(uVar15 + 0x1c0);
  lVar23 = local_res8 - unaff_RDI;
  uVar13 = param_2 * 0x40 + unaff_RDI;
  *(ulonglong *)(uVar15 + 0x210) = uVar13;
  *(undefined1 (**) [16])(uVar15 + 0x220) = param_3;
  *(int **)(uVar15 + 0x228) = param_4;
  *(longlong *)(uVar15 + 0x230) = lVar23;
  *(BADSPACEBASE **)(uVar15 + 0x238) = register0x00000020;
  auVar5 = vpinsrq_avx(ZEXT816(0),unaff_RSI - unaff_RDI,1);
  auVar45 = ZEXT1664(auVar5);
  pauVar1 = param_1 + 8;
  auVar39 = ZEXT1664(*param_3);
  lVar27 = (ulonglong)*(uint *)param_1[0xf] - 9;
  auVar5 = *(undefined1 (*) [16])(&DAT_00f52b60 + lVar27 * 8);
  auVar2 = *(undefined1 (*) [16])(&DAT_00f52b70 + lVar27 * 8);
  auVar3 = *(undefined1 (*) [16])(&DAT_00f52b80 + lVar27 * 8);
  uVar25 = unaff_RDI + 0x40;
  iVar9 = *param_4;
  uVar14 = param_4[1];
  uVar11 = param_4[2];
  pauVar18 = (undefined1 (*) [32])(lVar23 + uVar25);
  if (uVar25 == uVar13) {
    pauVar18 = (undefined1 (*) [32])(uVar15 + 0x1c0);
  }
  uVar12 = param_4[3];
  uVar20 = param_4[4];
  uVar21 = param_4[5];
  uVar22 = param_4[6];
  uVar24 = param_4[7];
  auVar43 = ZEXT1664(*param_1);
  do {
    auVar28._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])*pauVar18 +
         ZEXT116(1) * *(undefined1 (*) [16])(lVar23 + -0x40 + uVar25);
    auVar28._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])*pauVar18;
    auVar38._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(*pauVar18 + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(lVar23 + -0x30 + uVar25);
    auVar38._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(*pauVar18 + 0x10);
    auVar32 = vpshufb_avx2(auVar28,_DAT_00f52b40);
    auVar29._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar18[1] +
         ZEXT116(1) * *(undefined1 (*) [16])(lVar23 + -0x20 + uVar25);
    auVar29._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar18[1];
    auVar34 = vpshufb_avx2(auVar38,_DAT_00f52b40);
    auVar30._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar18[1] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(lVar23 + -0x10 + uVar25);
    auVar30._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar18[1] + 0x10);
    auVar35 = vpshufb_avx2(auVar29,_DAT_00f52b40);
    pauVar26 = (undefined1 (*) [16])(uVar25 - 0x40);
    auVar28 = vpaddd_avx2(auVar32,_DAT_00f52940);
    auVar36 = vpshufb_avx2(auVar30,_DAT_00f52b40);
    auVar38 = vpaddd_avx2(auVar34,_DAT_00f52960);
    auVar29 = vpaddd_avx2(auVar35,_DAT_00f52980);
    auVar30 = vpaddd_avx2(auVar36,_DAT_00f529a0);
    *pauVar16 = auVar28;
    uVar8 = 0;
    pauVar16[1] = auVar38;
    *(undefined8 *)(pauVar16[-3] + 0x18) = *(undefined8 *)(pauVar16[3] + 0x18);
    pauVar16[-2] = auVar29;
    uVar19 = uVar14 ^ uVar11;
    pauVar16[-1] = auVar30;
    pauVar16 = pauVar16 + -2;
    pauVar18 = (undefined1 (*) [32])&DAT_00f529c0;
    do {
      pauVar17 = pauVar16;
      auVar40 = *pauVar26;
      auVar6 = vpinsrq_avx(auVar45._0_16_,pauVar26,0);
      auVar45 = ZEXT1664(auVar6);
      *(undefined8 *)(pauVar17[-3] + 0x18) = *(undefined8 *)(pauVar17[-1] + 0x18);
      auVar38 = vpalignr_avx2(auVar34,auVar32,4);
      auVar28 = vpalignr_avx2(auVar36,auVar35,4);
      uVar8 = iVar9 + uVar8;
      auVar31 = vpsrld_avx2(auVar38,7);
      auVar28 = vpaddd_avx2(auVar32,auVar28);
      auVar37 = vpsrld_avx2(auVar38,3);
      iVar9 = uVar24 + *(int *)pauVar17[2] + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 << 7) ^ (uVar20 >> 0xb | uVar20 << 0x15) ^
              (uVar20 >> 6 | uVar20 << 0x1a));
      auVar29 = vpslld_avx2(auVar38,0xe);
      uVar12 = uVar12 + iVar9;
      auVar38 = vpshufd_avx2(auVar36,0xfa);
      auVar32 = vpsrld_avx2(auVar31,0xb);
      uVar24 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar30 = vpslld_avx2(auVar29,0xb);
      auVar33 = vpsrld_avx2(auVar38,10);
      iVar9 = uVar22 + *(int *)(pauVar17[2] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar38 = vpsrlq_avx2(auVar38,0x11);
      auVar28 = vpaddd_avx2(auVar28,auVar37 ^ auVar31 ^ auVar29 ^ auVar32 ^ auVar30);
      auVar29 = vpsrlq_avx2(auVar38,2);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar24 ^ uVar8) ^ uVar8) +
               ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
               (uVar24 >> 2 | uVar24 * 0x40000000));
      auVar38 = vpshufd_avx2(auVar33 ^ auVar38 ^ auVar29,0x84);
      auVar38 = vpsrldq_avx2(auVar38,8);
      iVar9 = uVar21 + *(int *)(pauVar17[2] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      auVar28 = vpaddd_avx2(auVar28,auVar38);
      uVar14 = uVar14 + iVar9;
      auVar38 = vpshufd_avx2(auVar28,0x50);
      auVar40 = aesenc(auVar40 ^ auVar43._0_16_ ^ auVar39._0_16_,param_1[1]);
      auVar29 = vpsrld_avx2(auVar38,10);
      auVar38 = vpsrlq_avx2(auVar38,0x11);
      uVar21 = iVar9 + ((uVar24 ^ uVar8) & (uVar22 ^ uVar24) ^ uVar24) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      auVar30 = vpsrlq_avx2(auVar38,2);
      auVar38 = vpshufd_avx2(auVar29 ^ auVar38 ^ auVar30,0xe8);
      iVar9 = uVar20 + *(int *)(pauVar17[2] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      auVar38 = vpslldq_avx2(auVar38,8);
      uVar8 = uVar8 + iVar9;
      auVar32 = vpaddd_avx2(auVar28,auVar38);
      auVar41 = aesenc(auVar40,param_1[2]);
      auVar40 = param_1[3];
      auVar28 = vpaddd_avx2(auVar32,*pauVar18);
      pauVar17[-2] = auVar28;
      auVar38 = vpalignr_avx2(auVar35,auVar34,4);
      auVar28 = vpalignr_avx2(auVar32,auVar36,4);
      uVar20 = iVar9 + ((uVar22 ^ uVar24) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      auVar31 = vpsrld_avx2(auVar38,7);
      auVar28 = vpaddd_avx2(auVar34,auVar28);
      auVar37 = vpsrld_avx2(auVar38,3);
      iVar9 = uVar12 + *(int *)pauVar17[3] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar29 = vpslld_avx2(auVar38,0xe);
      uVar24 = uVar24 + iVar9;
      auVar40 = aesenc(auVar41,auVar40);
      auVar38 = vpshufd_avx2(auVar32,0xfa);
      auVar34 = vpsrld_avx2(auVar31,0xb);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      auVar30 = vpslld_avx2(auVar29,0xb);
      auVar33 = vpsrld_avx2(auVar38,10);
      iVar9 = uVar11 + *(int *)(pauVar17[3] + 4) + (uVar8 & uVar24) + (~uVar24 & uVar14) +
              ((uVar24 >> 0x19 | uVar24 * 0x80) ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^
              (uVar24 >> 6 | uVar24 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar38 = vpsrlq_avx2(auVar38,0x11);
      auVar40 = aesenc(auVar40,param_1[4]);
      auVar28 = vpaddd_avx2(auVar28,auVar37 ^ auVar31 ^ auVar29 ^ auVar34 ^ auVar30);
      auVar29 = vpsrlq_avx2(auVar38,2);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      auVar38 = vpshufd_avx2(auVar33 ^ auVar38 ^ auVar29,0x84);
      auVar38 = vpsrldq_avx2(auVar38,8);
      iVar9 = uVar14 + *(int *)(pauVar17[3] + 8) + (uVar24 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      auVar28 = vpaddd_avx2(auVar28,auVar38);
      uVar21 = uVar21 + iVar9;
      auVar38 = vpshufd_avx2(auVar28,0x50);
      auVar40 = aesenc(auVar40,param_1[5]);
      auVar29 = vpsrld_avx2(auVar38,10);
      auVar38 = vpsrlq_avx2(auVar38,0x11);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      auVar30 = vpsrlq_avx2(auVar38,2);
      auVar38 = vpshufd_avx2(auVar29 ^ auVar38 ^ auVar30,0xe8);
      iVar9 = uVar8 + *(int *)(pauVar17[3] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar24) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      auVar38 = vpslldq_avx2(auVar38,8);
      uVar20 = uVar20 + iVar9;
      auVar34 = vpaddd_avx2(auVar28,auVar38);
      auVar41 = aesenc(auVar40,param_1[6]);
      auVar40 = param_1[7];
      auVar28 = vpaddd_avx2(auVar34,pauVar18[1]);
      pauVar17[-1] = auVar28;
      pauVar16 = pauVar17 + -4;
      *(undefined8 *)(pauVar17[-5] + 0x18) = *(undefined8 *)(pauVar17[-3] + 0x18);
      auVar38 = vpalignr_avx2(auVar36,auVar35,4);
      auVar28 = vpalignr_avx2(auVar34,auVar32,4);
      uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
              ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000));
      auVar31 = vpsrld_avx2(auVar38,7);
      auVar28 = vpaddd_avx2(auVar35,auVar28);
      auVar37 = vpsrld_avx2(auVar38,3);
      iVar9 = uVar24 + *(int *)*pauVar17 + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 6 | uVar20 * 0x4000000));
      auVar29 = vpslld_avx2(auVar38,0xe);
      uVar12 = uVar12 + iVar9;
      auVar40 = aesenc(auVar41,auVar40);
      auVar38 = vpshufd_avx2(auVar34,0xfa);
      auVar35 = vpsrld_avx2(auVar31,0xb);
      uVar24 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar30 = vpslld_avx2(auVar29,0xb);
      auVar33 = vpsrld_avx2(auVar38,10);
      iVar9 = uVar22 + *(int *)(*pauVar17 + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar38 = vpsrlq_avx2(auVar38,0x11);
      auVar40 = aesenc(auVar40,*pauVar1);
      auVar28 = vpaddd_avx2(auVar28,auVar37 ^ auVar31 ^ auVar29 ^ auVar35 ^ auVar30);
      auVar29 = vpsrlq_avx2(auVar38,2);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar24 ^ uVar8) ^ uVar8) +
               ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
               (uVar24 >> 2 | uVar24 * 0x40000000));
      auVar38 = vpshufd_avx2(auVar33 ^ auVar38 ^ auVar29,0x84);
      auVar38 = vpsrldq_avx2(auVar38,8);
      iVar9 = uVar21 + *(int *)(*pauVar17 + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      auVar28 = vpaddd_avx2(auVar28,auVar38);
      uVar14 = uVar14 + iVar9;
      auVar38 = vpshufd_avx2(auVar28,0x50);
      auVar40 = aesenc(auVar40,param_1[9]);
      auVar29 = vpsrld_avx2(auVar38,10);
      auVar38 = vpsrlq_avx2(auVar38,0x11);
      uVar21 = iVar9 + ((uVar24 ^ uVar8) & (uVar22 ^ uVar24) ^ uVar24) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      auVar30 = vpsrlq_avx2(auVar38,2);
      auVar38 = vpshufd_avx2(auVar29 ^ auVar38 ^ auVar30,0xe8);
      iVar9 = uVar20 + *(int *)(*pauVar17 + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      auVar38 = vpslldq_avx2(auVar38,8);
      uVar8 = uVar8 + iVar9;
      auVar35 = vpaddd_avx2(auVar28,auVar38);
      auVar41 = aesenclast(auVar40,param_1[10]);
      auVar42 = aesenc(auVar40,param_1[10]);
      auVar40 = param_1[0xb];
      auVar28 = vpaddd_avx2(auVar35,pauVar18[2]);
      *pauVar16 = auVar28;
      auVar38 = vpalignr_avx2(auVar32,auVar36,4);
      auVar28 = vpalignr_avx2(auVar35,auVar34,4);
      uVar20 = iVar9 + ((uVar22 ^ uVar24) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      auVar31 = vpsrld_avx2(auVar38,7);
      auVar28 = vpaddd_avx2(auVar36,auVar28);
      auVar37 = vpsrld_avx2(auVar38,3);
      iVar9 = uVar12 + *(int *)pauVar17[1] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar29 = vpslld_avx2(auVar38,0xe);
      uVar24 = uVar24 + iVar9;
      auVar41 = vpand_avx(auVar41,auVar3);
      auVar40 = aesenc(auVar42,auVar40);
      auVar38 = vpshufd_avx2(auVar35,0xfa);
      auVar36 = vpsrld_avx2(auVar31,0xb);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      auVar30 = vpslld_avx2(auVar29,0xb);
      auVar33 = vpsrld_avx2(auVar38,10);
      iVar9 = uVar11 + *(int *)(pauVar17[1] + 4) + (uVar8 & uVar24) + (~uVar24 & uVar14) +
              ((uVar24 >> 0x19 | uVar24 * 0x80) ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^
              (uVar24 >> 6 | uVar24 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar38 = vpsrlq_avx2(auVar38,0x11);
      auVar44 = aesenclast(auVar40,param_1[0xc]);
      auVar42 = aesenc(auVar40,param_1[0xc]);
      auVar28 = vpaddd_avx2(auVar28,auVar37 ^ auVar31 ^ auVar29 ^ auVar36 ^ auVar30);
      auVar29 = vpsrlq_avx2(auVar38,2);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      auVar38 = vpshufd_avx2(auVar33 ^ auVar38 ^ auVar29,0x84);
      auVar38 = vpsrldq_avx2(auVar38,8);
      iVar9 = uVar14 + *(int *)(pauVar17[1] + 8) + (uVar24 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      auVar28 = vpaddd_avx2(auVar28,auVar38);
      uVar21 = uVar21 + iVar9;
      auVar38 = vpshufd_avx2(auVar28,0x50);
      auVar40 = vpand_avx(auVar44,auVar2);
      auVar44 = aesenc(auVar42,param_1[0xd]);
      auVar29 = vpsrld_avx2(auVar38,10);
      auVar38 = vpsrlq_avx2(auVar38,0x11);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      auVar30 = vpsrlq_avx2(auVar38,2);
      auVar38 = vpshufd_avx2(auVar29 ^ auVar38 ^ auVar30,0xe8);
      iVar9 = uVar8 + *(int *)(pauVar17[1] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar24) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar19 = uVar14 ^ uVar11;
      auVar38 = vpslldq_avx2(auVar38,8);
      uVar20 = uVar20 + iVar9;
      auVar36 = vpaddd_avx2(auVar28,auVar38);
      auVar42 = vpor_avx(auVar41,auVar40);
      auVar41 = aesenclast(auVar44,param_1[0xe]);
      auVar40 = *param_1;
      auVar43 = ZEXT1664(auVar40);
      auVar28 = vpaddd_avx2(auVar36,pauVar18[3]);
      uVar8 = (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000);
      iVar9 = iVar9 + ((uVar11 ^ uVar12) & uVar19 ^ uVar11);
      pauVar17[-3] = auVar28;
      lVar27 = vpextrq_avx(auVar6,1);
      auVar41 = vpand_avx(auVar41,auVar5);
      auVar41 = vpor_avx(auVar42,auVar41);
      auVar39 = ZEXT1664(auVar41);
      *(undefined1 (*) [16])(lVar27 + auVar6._0_8_) = auVar41;
      pauVar26 = (undefined1 (*) [16])(auVar6._0_8_ + 0x10);
      pauVar7 = pauVar18 + 4;
      pauVar18 = pauVar18 + 4;
    } while ((*pauVar7)[3] != '\0');
    auVar6 = vpinsrq_avx(auVar6,pauVar26,0);
    auVar45 = ZEXT1664(auVar6);
    uVar8 = iVar9 + uVar8;
    iVar9 = uVar24 + *(int *)pauVar17[-2] + (uVar21 & uVar20) + (~uVar20 & uVar22) +
            ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
            (uVar20 >> 6 | uVar20 * 0x4000000));
    uVar12 = uVar12 + iVar9;
    uVar24 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar9 = uVar22 + *(int *)(pauVar17[-2] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
            ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
            (uVar12 >> 6 | uVar12 * 0x4000000));
    uVar11 = uVar11 + iVar9;
    uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar24 ^ uVar8) ^ uVar8) +
             ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
             (uVar24 >> 2 | uVar24 * 0x40000000));
    iVar9 = uVar21 + *(int *)(pauVar17[-2] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
            ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
            (uVar11 >> 6 | uVar11 * 0x4000000));
    uVar14 = uVar14 + iVar9;
    auVar40 = aesenc(*pauVar26 ^ auVar40 ^ auVar41,param_1[1]);
    uVar21 = iVar9 + ((uVar24 ^ uVar8) & (uVar22 ^ uVar24) ^ uVar24) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
             (uVar22 >> 2 | uVar22 * 0x40000000));
    iVar9 = uVar20 + *(int *)(pauVar17[-2] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
            ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
            (uVar14 >> 6 | uVar14 * 0x4000000));
    uVar8 = uVar8 + iVar9;
    auVar40 = aesenc(auVar40,param_1[2]);
    uVar20 = iVar9 + ((uVar22 ^ uVar24) & (uVar21 ^ uVar22) ^ uVar22) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
             (uVar21 >> 2 | uVar21 * 0x40000000));
    iVar9 = uVar12 + *(int *)pauVar17[-1] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar24 = uVar24 + iVar9;
    auVar40 = aesenc(auVar40,param_1[3]);
    uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
             (uVar20 >> 2 | uVar20 * 0x40000000));
    iVar9 = uVar11 + *(int *)(pauVar17[-1] + 4) + (uVar8 & uVar24) + (~uVar24 & uVar14) +
            ((uVar24 >> 0x19 | uVar24 * 0x80) ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^
            (uVar24 >> 6 | uVar24 * 0x4000000));
    uVar22 = uVar22 + iVar9;
    auVar40 = aesenc(auVar40,param_1[4]);
    uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
             ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
             (uVar12 >> 2 | uVar12 * 0x40000000));
    iVar9 = uVar14 + *(int *)(pauVar17[-1] + 8) + (uVar24 & uVar22) + (~uVar22 & uVar8) +
            ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
            (uVar22 >> 6 | uVar22 * 0x4000000));
    uVar21 = uVar21 + iVar9;
    auVar40 = aesenc(auVar40,param_1[5]);
    uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
             ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
             (uVar11 >> 2 | uVar11 * 0x40000000));
    iVar9 = uVar8 + *(int *)(pauVar17[-1] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar24) +
            ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
            (uVar21 >> 6 | uVar21 * 0x4000000));
    uVar20 = uVar20 + iVar9;
    auVar40 = aesenc(auVar40,param_1[6]);
    uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
            ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
            (uVar14 >> 2 | uVar14 * 0x40000000));
    iVar9 = uVar24 + *(int *)*pauVar16 + (uVar21 & uVar20) + (~uVar20 & uVar22) +
            ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
            (uVar20 >> 6 | uVar20 * 0x4000000));
    uVar12 = uVar12 + iVar9;
    auVar40 = aesenc(auVar40,param_1[7]);
    uVar24 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar9 = uVar22 + *(int *)(pauVar17[-4] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
            ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
            (uVar12 >> 6 | uVar12 * 0x4000000));
    uVar11 = uVar11 + iVar9;
    auVar40 = aesenc(auVar40,*pauVar1);
    uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar24 ^ uVar8) ^ uVar8) +
             ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
             (uVar24 >> 2 | uVar24 * 0x40000000));
    iVar9 = uVar21 + *(int *)(pauVar17[-4] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
            ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
            (uVar11 >> 6 | uVar11 * 0x4000000));
    uVar14 = uVar14 + iVar9;
    auVar40 = aesenc(auVar40,param_1[9]);
    uVar21 = iVar9 + ((uVar24 ^ uVar8) & (uVar22 ^ uVar24) ^ uVar24) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
             (uVar22 >> 2 | uVar22 * 0x40000000));
    iVar9 = uVar20 + *(int *)(pauVar17[-4] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
            ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
            (uVar14 >> 6 | uVar14 * 0x4000000));
    uVar8 = uVar8 + iVar9;
    auVar42 = aesenclast(auVar40,param_1[10]);
    auVar41 = aesenc(auVar40,param_1[10]);
    uVar20 = iVar9 + ((uVar22 ^ uVar24) & (uVar21 ^ uVar22) ^ uVar22) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
             (uVar21 >> 2 | uVar21 * 0x40000000));
    iVar9 = uVar12 + *(int *)pauVar17[-3] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar24 = uVar24 + iVar9;
    auVar40 = vpand_avx(auVar42,auVar3);
    auVar41 = aesenc(auVar41,param_1[0xb]);
    uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
             (uVar20 >> 2 | uVar20 * 0x40000000));
    iVar9 = uVar11 + *(int *)(pauVar17[-3] + 4) + (uVar8 & uVar24) + (~uVar24 & uVar14) +
            ((uVar24 >> 0x19 | uVar24 * 0x80) ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^
            (uVar24 >> 6 | uVar24 * 0x4000000));
    uVar22 = uVar22 + iVar9;
    auVar44 = aesenclast(auVar41,param_1[0xc]);
    auVar42 = aesenc(auVar41,param_1[0xc]);
    uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
             ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
             (uVar12 >> 2 | uVar12 * 0x40000000));
    iVar9 = uVar14 + *(int *)(pauVar17[-3] + 8) + (uVar24 & uVar22) + (~uVar22 & uVar8) +
            ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
            (uVar22 >> 6 | uVar22 * 0x4000000));
    uVar21 = uVar21 + iVar9;
    auVar41 = vpand_avx(auVar44,auVar2);
    auVar42 = aesenc(auVar42,param_1[0xd]);
    uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
             ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
             (uVar11 >> 2 | uVar11 * 0x40000000));
    iVar9 = uVar8 + *(int *)(pauVar17[-3] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar24) +
            ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
            (uVar21 >> 6 | uVar21 * 0x4000000));
    auVar41 = vpor_avx(auVar40,auVar41);
    auVar40 = aesenclast(auVar42,param_1[0xe]);
    auVar43 = ZEXT1664(*param_1);
    lVar27 = vpextrq_avx(auVar6,1);
    piVar4 = *(int **)(pauVar17[0xd] + 8);
    pauVar18 = pauVar17 + 10;
    auVar40 = vpand_avx(auVar40,auVar5);
    auVar40 = vpor_avx(auVar41,auVar40);
    auVar39 = ZEXT1664(auVar40);
    *(undefined1 (*) [16])(lVar27 + auVar6._0_8_) = auVar40;
    pauVar26 = (undefined1 (*) [16])(auVar6._0_8_ + 0x10);
    iVar10 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
             ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
             (uVar14 >> 2 | uVar14 * 0x40000000)) + *piVar4;
    uVar14 = uVar14 + piVar4[1];
    uVar11 = uVar11 + piVar4[2];
    uVar12 = uVar12 + piVar4[3];
    uVar20 = uVar20 + iVar9 + piVar4[4];
    uVar21 = uVar21 + piVar4[5];
    uVar22 = uVar22 + piVar4[6];
    uVar24 = uVar24 + piVar4[7];
    *piVar4 = iVar10;
    piVar4[1] = uVar14;
    piVar4[2] = uVar11;
    piVar4[3] = uVar12;
    piVar4[4] = uVar20;
    piVar4[5] = uVar21;
    piVar4[6] = uVar22;
    piVar4[7] = uVar24;
    if (pauVar26 == *(undefined1 (**) [16])(pauVar17[0xc] + 0x10)) break;
    uVar8 = 0;
    uVar19 = uVar14 ^ uVar11;
    do {
      auVar6 = vpinsrq_avx(auVar45._0_16_,pauVar26,0);
      auVar45 = ZEXT1664(auVar6);
      uVar8 = iVar10 + uVar8;
      iVar9 = uVar24 + *(int *)(*pauVar18 + 0x10) + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 << 7) ^ (uVar20 >> 0xb | uVar20 << 0x15) ^
              (uVar20 >> 6 | uVar20 << 0x1a));
      uVar12 = uVar12 + iVar9;
      uVar24 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      iVar9 = uVar22 + *(int *)(*pauVar18 + 0x14) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar24 ^ uVar8) ^ uVar8) +
               ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
               (uVar24 >> 2 | uVar24 * 0x40000000));
      iVar9 = uVar21 + *(int *)(*pauVar18 + 0x18) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      uVar14 = uVar14 + iVar9;
      auVar40 = aesenc(*pauVar26 ^ auVar43._0_16_ ^ auVar39._0_16_,param_1[1]);
      uVar21 = iVar9 + ((uVar24 ^ uVar8) & (uVar22 ^ uVar24) ^ uVar24) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      iVar9 = uVar20 + *(int *)(*pauVar18 + 0x1c) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      uVar8 = uVar8 + iVar9;
      auVar40 = aesenc(auVar40,param_1[2]);
      uVar20 = iVar9 + ((uVar22 ^ uVar24) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      iVar9 = uVar12 + *(int *)(pauVar18[1] + 0x10) + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      uVar24 = uVar24 + iVar9;
      auVar40 = aesenc(auVar40,param_1[3]);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      iVar9 = uVar11 + *(int *)(pauVar18[1] + 0x14) + (uVar8 & uVar24) + (~uVar24 & uVar14) +
              ((uVar24 >> 0x19 | uVar24 * 0x80) ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^
              (uVar24 >> 6 | uVar24 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar40 = aesenc(auVar40,param_1[4]);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      iVar9 = uVar14 + *(int *)(pauVar18[1] + 0x18) + (uVar24 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      uVar21 = uVar21 + iVar9;
      auVar40 = aesenc(auVar40,param_1[5]);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      iVar9 = uVar8 + *(int *)(pauVar18[1] + 0x1c) + (uVar22 & uVar21) + (~uVar21 & uVar24) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar20 = uVar20 + iVar9;
      auVar40 = aesenc(auVar40,param_1[6]);
      uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
              ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000));
      iVar9 = uVar24 + *(int *)(pauVar18[-2] + 0x10) + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 6 | uVar20 * 0x4000000));
      uVar12 = uVar12 + iVar9;
      auVar40 = aesenc(auVar40,param_1[7]);
      uVar24 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      iVar9 = uVar22 + *(int *)(pauVar18[-2] + 0x14) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar40 = aesenc(auVar40,*pauVar1);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar24 ^ uVar8) ^ uVar8) +
               ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
               (uVar24 >> 2 | uVar24 * 0x40000000));
      iVar9 = uVar21 + *(int *)(pauVar18[-2] + 0x18) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      uVar14 = uVar14 + iVar9;
      auVar40 = aesenc(auVar40,param_1[9]);
      uVar21 = iVar9 + ((uVar24 ^ uVar8) & (uVar22 ^ uVar24) ^ uVar24) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      iVar9 = uVar20 + *(int *)(pauVar18[-2] + 0x1c) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      uVar8 = uVar8 + iVar9;
      auVar42 = aesenclast(auVar40,param_1[10]);
      auVar41 = aesenc(auVar40,param_1[10]);
      uVar20 = iVar9 + ((uVar22 ^ uVar24) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      iVar9 = uVar12 + *(int *)(pauVar18[-1] + 0x10) + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      uVar24 = uVar24 + iVar9;
      auVar40 = vpand_avx(auVar42,auVar3);
      auVar41 = aesenc(auVar41,param_1[0xb]);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      iVar9 = uVar11 + *(int *)(pauVar18[-1] + 0x14) + (uVar8 & uVar24) + (~uVar24 & uVar14) +
              ((uVar24 >> 0x19 | uVar24 * 0x80) ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^
              (uVar24 >> 6 | uVar24 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar44 = aesenclast(auVar41,param_1[0xc]);
      auVar42 = aesenc(auVar41,param_1[0xc]);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      iVar9 = uVar14 + *(int *)(pauVar18[-1] + 0x18) + (uVar24 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      uVar21 = uVar21 + iVar9;
      auVar41 = vpand_avx(auVar44,auVar2);
      auVar42 = aesenc(auVar42,param_1[0xd]);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      iVar10 = uVar8 + *(int *)(pauVar18[-1] + 0x1c) + (uVar22 & uVar21) + (~uVar21 & uVar24) +
               ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
               (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar19 = uVar14 ^ uVar11;
      uVar20 = uVar20 + iVar10;
      auVar41 = vpor_avx(auVar40,auVar41);
      auVar40 = aesenclast(auVar42,param_1[0xe]);
      auVar43 = ZEXT1664(*param_1);
      uVar8 = (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000);
      iVar10 = iVar10 + ((uVar11 ^ uVar12) & uVar19 ^ uVar11);
      lVar23 = auVar6._0_8_;
      lVar27 = vpextrq_avx(auVar6,1);
      auVar40 = vpand_avx(auVar40,auVar5);
      auVar40 = vpor_avx(auVar41,auVar40);
      auVar39 = ZEXT1664(auVar40);
      pauVar18 = pauVar18 + -4;
      *(undefined1 (*) [16])(lVar27 + lVar23) = auVar40;
      pauVar26 = (undefined1 (*) [16])(lVar23 + 0x10);
    } while (pauVar16 <= pauVar18);
    piVar4 = *(int **)(pauVar17[0xd] + 8);
    uVar25 = lVar23 + 0x50;
    lVar23 = *(longlong *)(pauVar17[0xd] + 0x10);
    pauVar16 = pauVar17 + 10;
    iVar9 = iVar10 + uVar8 + *piVar4;
    uVar14 = uVar14 + piVar4[1];
    uVar11 = uVar11 + piVar4[2];
    uVar12 = uVar12 + piVar4[3];
    uVar20 = uVar20 + piVar4[4];
    uVar21 = uVar21 + piVar4[5];
    uVar22 = uVar22 + piVar4[6];
    uVar24 = uVar24 + piVar4[7];
    uVar13 = *(ulonglong *)(pauVar17[0xc] + 0x10);
    *piVar4 = iVar9;
    pauVar18 = (undefined1 (*) [32])(lVar23 + uVar25);
    if (uVar25 == uVar13) {
      pauVar18 = pauVar16;
    }
    piVar4[1] = uVar14;
    piVar4[2] = uVar11;
    piVar4[3] = uVar12;
    piVar4[4] = uVar20;
    piVar4[5] = uVar21;
    piVar4[6] = uVar22;
    piVar4[7] = uVar24;
  } while (uVar25 <= uVar13);
  **(undefined1 (**) [16])pauVar17[0xd] = auVar40;
  return;
}



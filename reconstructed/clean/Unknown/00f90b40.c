// Function: FUN_00f90b40
// Address: 00f90b40
// Size: 892 bytes
// Class: Unknown

uint64_t FUN_00f90b40(uint64_t param_1,int64_t param_2,ulong *param_3,uint64_t param_4)

{
  uint uVar1;
  ulong *ap;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int64_t lVar11;
  uint32_t extraout_var;
  int64_t lVar12;
  uint32_t extraout_var_00;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t *arg1;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t *this_ptr;
  int iVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint uVar22;
  int64_t *plVar23;
  int64_t lVar24;
  uint8_t auVar25 [16];
  int iVar26;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint8_t auVar27 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  
  uVar1 = *(uint *)(param_2 + 0x28);
  lVar24 = (int64_t)(int)uVar1;
  if (lVar24 == 0) {
    *(void*)(this_ptr + 1) = 0;
    return 1;
  }
  uVar22 = uVar1 * 2;
  lVar11 = _bn_wexpand();
  iVar19 = (int)param_4;
  if (lVar11 == 0) {
    return 0;
  }
  *(uint *)(arg1 + 2) = *(uint *)(arg1 + 2) ^ *(uint *)(param_2 + 0x30);
  iVar9 = _UNK_023d92ec;
  iVar8 = _UNK_023d92e8;
  iVar7 = _UNK_023d92e4;
  iVar6 = g_023d92e0;
  iVar5 = _UNK_023d92dc;
  iVar4 = _UNK_023d92d8;
  iVar3 = _UNK_023d92d4;
  iVar2 = g_023d92d0;
  ap = *(ulong **)(param_2 + 0x20);
  if ((int)uVar1 < 1) {
    *(uint *)(arg1 + 1) = uVar22;
    uVar14 = 0;
    goto LAB_00f90cf4;
  }
  plVar23 = (int64_t *)*arg1;
  iVar19 = (int)arg1[1];
  uVar14 = 1;
  if (1 < (int)uVar22) {
    uVar14 = (uint64_t)uVar22;
  }
  if ((uint)uVar14 < 4) {
    uVar15 = 0;
LAB_00f90c78:
    do {
      plVar23[uVar15] = plVar23[uVar15] & -(uint64_t)((uint)((int)uVar15 - iVar19) >> 0x1f);
      uVar15 = uVar15 + 1;
    } while (uVar14 != uVar15);
  }
  else {
    uVar15 = (uint64_t)((uint)uVar14 & 0x7ffffffc);
    uVar17 = 0;
    iVar26 = g_02392fe0;
    iVar28 = _UNK_02392fe4;
    uVar29 = _UNK_02392fe8;
    uVar30 = _UNK_02392fec;
    do {
      auVar31._0_4_ = (uint)(iVar26 - iVar19) >> 0x1f;
      auVar31._4_4_ = (uint)(iVar28 - iVar19) >> 0x1f;
      auVar31._8_4_ = uVar29 >> 0x1f;
      auVar31._12_4_ = uVar30 >> 0x1f;
      auVar32._0_4_ = (uint)((iVar26 - iVar19) + iVar2) >> 0x1f;
      auVar32._4_4_ = (uint)((iVar28 - iVar19) + iVar3) >> 0x1f;
      auVar32._8_4_ = uVar29 + iVar4 >> 0x1f;
      auVar32._12_4_ = uVar30 + iVar5 >> 0x1f;
      auVar31 = pmovzxdq(auVar31,auVar31);
      auVar32 = pmovzxdq(auVar32,auVar32);
      uVar16 = (plVar23 + uVar17)[1];
      uVar13 = plVar23[uVar17 + 2];
      uVar20 = (plVar23 + uVar17 + 2)[1];
      plVar23[uVar17] = plVar23[uVar17] & -auVar31._0_8_;
      (plVar23 + uVar17)[1] = uVar16 & -auVar31._8_8_;
      plVar23[uVar17 + 2] = uVar13 & -auVar32._0_8_;
      (plVar23 + uVar17 + 2)[1] = uVar20 & -auVar32._8_8_;
      uVar17 = uVar17 + 4;
      iVar26 = iVar26 + iVar6;
      iVar28 = iVar28 + iVar7;
      uVar29 = uVar29 + iVar8;
      uVar30 = uVar30 + iVar9;
    } while (uVar15 != uVar17);
    if (uVar15 != uVar14) goto LAB_00f90c78;
  }
  *(uint *)(arg1 + 1) = uVar22;
  lVar11 = *(int64_t *)(param_2 + 0x50);
  uVar14 = 0;
  uVar22 = uVar1;
  do {
    uVar10 = _bn_mul_add_words((ulong *)(*plVar23 * lVar11),(ulong *)(uint64_t)uVar1,(int)param_3,
                               (ulong)param_4);
    iVar19 = (int)param_4;
    lVar12 = CONCAT44(extraout_var,uVar10) + uVar14;
    uVar15 = lVar12 + plVar23[lVar24];
    uVar14 = (uint64_t)
             (((uint)uVar14 | (uint)(lVar12 != 0)) & (uint)(uVar15 <= (uint64_t)plVar23[lVar24]));
    plVar23[lVar24] = uVar15;
    plVar23 = plVar23 + 1;
    uVar22 = uVar22 - 1;
  } while (uVar22 != 0);
LAB_00f90cf4:
  lVar11 = _bn_wexpand();
  uVar21 = 0;
  if (lVar11 != 0) {
    *(uint *)(this_ptr + 1) = uVar1;
    *(int *)(this_ptr + 2) = (int)arg1[2];
    uVar17 = *this_ptr;
    lVar11 = *arg1;
    uVar15 = lVar11 + lVar24 * 8;
    uVar10 = _bn_sub_words((ulong *)(uint64_t)uVar1,ap,param_3,iVar19);
    uVar21 = 1;
    if (0 < (int)uVar1) {
      uVar20 = (uint64_t)uVar1;
      uVar14 = uVar14 - CONCAT44(extraout_var_00,uVar10);
      uVar13 = ~uVar14;
      if ((uVar1 < 4) ||
         ((uVar17 < (lVar24 + uVar20) * 8 + lVar11 && (uVar15 < uVar17 + uVar20 * 8)))) {
        uVar16 = 0;
      }
      else {
        uVar16 = (uint64_t)(uVar1 & 0xfffffffc);
        auVar25._8_4_ = (int)uVar14;
        auVar25._0_8_ = uVar14;
        auVar25._12_4_ = (int)(uVar14 >> 0x20);
        auVar27._8_4_ = (int)uVar13;
        auVar27._0_8_ = uVar13;
        auVar27._12_4_ = (int)(uVar13 >> 0x20);
        lVar12 = lVar24 * 8 + 0x10 + lVar11;
        uVar18 = 0;
        do {
          auVar31 = *(uint8_t (*) [16])(lVar12 + uVar18 * 8);
          *(uint8_t (*) [16])(uVar17 + uVar18 * 8) =
               *(uint8_t (*) [16])(uVar17 + uVar18 * 8) & auVar27 |
               *(uint8_t (*) [16])(lVar12 + -0x10 + uVar18 * 8) & auVar25;
          *(uint8_t (*) [16])(uVar17 + 0x10 + uVar18 * 8) =
               *(uint8_t (*) [16])(uVar17 + 0x10 + uVar18 * 8) & auVar27 | auVar31 & auVar25;
          *(uint8_t (*) [16])(lVar12 + -0x10 + uVar18 * 8) = (uint8_t  [16])0x0;
          *(uint8_t (*) [16])(lVar12 + uVar18 * 8) = (uint8_t  [16])0x0;
          uVar18 = uVar18 + 4;
        } while (uVar16 != uVar18);
        if (uVar16 == uVar20) {
          return 1;
        }
      }
      uVar18 = ~uVar16;
      if ((uVar1 & 1) != 0) {
        *(uint64_t *)(uVar17 + uVar16 * 8) =
             *(uint64_t *)(uVar17 + uVar16 * 8) & uVar13 |
             *(uint64_t *)(uVar15 + uVar16 * 8) & uVar14;
        *(void*)(uVar15 + uVar16 * 8) = 0;
        uVar16 = uVar16 | 1;
      }
      if (uVar18 + uVar20 != 0) {
        lVar11 = lVar24 * 8 + 8 + lVar11;
        do {
          *(uint64_t *)(uVar17 + uVar16 * 8) =
               *(uint64_t *)(uVar17 + uVar16 * 8) & uVar13 |
               *(uint64_t *)(lVar11 + -8 + uVar16 * 8) & uVar14;
          *(void*)(lVar11 + -8 + uVar16 * 8) = 0;
          *(uint64_t *)(uVar17 + 8 + uVar16 * 8) =
               *(uint64_t *)(uVar17 + 8 + uVar16 * 8) & uVar13 |
               *(uint64_t *)(lVar11 + uVar16 * 8) & uVar14;
          *(void*)(lVar11 + uVar16 * 8) = 0;
          uVar16 = uVar16 + 2;
        } while (uVar20 != uVar16);
      }
    }
  }
  return uVar21;
}


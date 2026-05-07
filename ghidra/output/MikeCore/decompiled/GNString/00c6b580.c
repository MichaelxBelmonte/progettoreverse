// Function: FUN_00c6b580
// Address: 00c6b580
// Size: 3393 bytes
// Class: GNString


void FUN_00c6b580(ushort *param_1,uint param_2,ulonglong param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort *puVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  undefined4 *unaff_RSI;
  uint uVar27;
  uint uVar28;
  undefined4 *unaff_RDI;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  ushort uVar32;
  ushort uVar33;
  uint uVar34;
  uint uVar35;
  ushort uVar36;
  ushort uVar37;
  int iVar38;
  uint uVar39;
  longlong lVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  undefined4 *puVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  undefined4 *puVar48;
  undefined1 auVar49 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar50 [16];
  int local_res8;
  short local_88;
  short local_80;
  short local_70;
  short local_68;
  uint local_5c;
  short local_58;
  short local_40;
  
  iVar12 = 1 << ((byte)(local_res8 - 1U) & 0x1f);
  *unaff_RSI = *unaff_RDI;
  uVar17 = (uint)param_3;
  if (uVar17 == 0) {
    if (unaff_RDI == unaff_RSI) {
      return;
    }
    if ((int)param_2 < 2) {
      return;
    }
    _memcpy((void *)(ulonglong)(local_res8 - 1U),(void *)((ulonglong)(param_2 - 1) << 2),0);
    return;
  }
  uVar27 = 0x20 - param_4;
  bVar14 = (byte)uVar27;
  if (uVar17 == 0x1f) {
    if ((int)param_2 < 2) {
      return;
    }
    uVar25 = (ulonglong)param_2;
    uVar13 = uVar25 - 1;
    uVar23 = 1;
    if ((7 < uVar13) && ((unaff_RDI + uVar25 <= unaff_RSI + 1 || (unaff_RSI + uVar25 <= unaff_RDI)))
       ) {
      uVar18 = uVar13 & 0xfffffffffffffff8;
      uVar23 = uVar18 + 1;
      uVar29 = 0;
      auVar49 = pmovzxdq(ZEXT416(uVar27),ZEXT416(uVar27));
      do {
        piVar1 = unaff_RDI + uVar29;
        iVar12 = piVar1[1];
        iVar46 = piVar1[2];
        iVar22 = piVar1[3];
        piVar2 = unaff_RDI + uVar29 + 1;
        iVar24 = piVar2[1];
        iVar26 = piVar2[2];
        iVar30 = piVar2[3];
        piVar3 = unaff_RDI + uVar29 + 4;
        iVar38 = *piVar3;
        iVar41 = piVar3[1];
        iVar43 = piVar3[2];
        iVar45 = piVar3[3];
        piVar3 = unaff_RDI + uVar29 + 5;
        iVar47 = *piVar3;
        iVar8 = piVar3[1];
        iVar9 = piVar3[2];
        iVar10 = piVar3[3];
        piVar3 = unaff_RSI + uVar29 + 1;
        *piVar3 = (*piVar2 - *piVar1 << auVar49._0_4_) >> auVar49;
        piVar3[1] = (iVar24 - iVar12 << auVar49._4_4_) >> auVar49;
        piVar3[2] = (iVar26 - iVar46 << auVar49._8_4_) >> auVar49;
        piVar3[3] = (iVar30 - iVar22 << auVar49._12_4_) >> auVar49;
        piVar1 = unaff_RSI + uVar29 + 5;
        *piVar1 = (iVar47 - iVar38 << auVar49._0_4_) >> auVar49;
        piVar1[1] = (iVar8 - iVar41 << auVar49._4_4_) >> auVar49;
        piVar1[2] = (iVar9 - iVar43 << auVar49._8_4_) >> auVar49;
        piVar1[3] = (iVar10 - iVar45 << auVar49._12_4_) >> auVar49;
        uVar29 = uVar29 + 8;
      } while (uVar18 != uVar29);
      if (uVar13 == uVar18) {
        return;
      }
    }
    uVar13 = ~uVar23;
    if ((param_2 & 1) == 0) {
      unaff_RSI[uVar23] =
           (int)(unaff_RDI[uVar23] - unaff_RDI[uVar23 - 1] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      uVar23 = uVar23 + 1;
    }
    if (uVar13 + uVar25 == 0) {
      return;
    }
    do {
      unaff_RSI[uVar23] =
           (int)(unaff_RDI[uVar23] - unaff_RDI[uVar23 - 1] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      unaff_RSI[uVar23 + 1] =
           (int)(unaff_RDI[uVar23 + 1] - unaff_RDI[uVar23] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      uVar23 = uVar23 + 2;
    } while (uVar25 != uVar23);
    return;
  }
  uVar42 = uVar17 + 1;
  if (0 < (int)uVar17) {
    uVar25 = (ulonglong)uVar42;
    uVar13 = uVar25 - 1;
    uVar23 = 1;
    if ((7 < uVar13) && ((unaff_RDI + uVar25 <= unaff_RSI + 1 || (unaff_RSI + uVar25 <= unaff_RDI)))
       ) {
      uVar18 = uVar13 & 0xfffffffffffffff8;
      uVar23 = uVar18 + 1;
      uVar29 = 0;
      auVar49 = pmovzxdq(ZEXT416(uVar27),ZEXT416(uVar27));
      do {
        piVar1 = unaff_RDI + uVar29;
        iVar46 = piVar1[1];
        iVar22 = piVar1[2];
        iVar24 = piVar1[3];
        piVar2 = unaff_RDI + uVar29 + 1;
        iVar26 = piVar2[1];
        iVar30 = piVar2[2];
        iVar38 = piVar2[3];
        piVar3 = unaff_RDI + uVar29 + 4;
        piVar4 = unaff_RDI + uVar29 + 5;
        in_XMM3._0_4_ = (*piVar4 - *piVar3 << auVar49._0_4_) >> auVar49;
        in_XMM3._4_4_ = (piVar4[1] - piVar3[1] << auVar49._4_4_) >> auVar49;
        in_XMM3._8_4_ = (piVar4[2] - piVar3[2] << auVar49._8_4_) >> auVar49;
        in_XMM3._12_4_ = (piVar4[3] - piVar3[3] << auVar49._12_4_) >> auVar49;
        piVar3 = unaff_RSI + uVar29 + 1;
        *piVar3 = (*piVar2 - *piVar1 << auVar49._0_4_) >> auVar49;
        piVar3[1] = (iVar26 - iVar46 << auVar49._4_4_) >> auVar49;
        piVar3[2] = (iVar30 - iVar22 << auVar49._8_4_) >> auVar49;
        piVar3[3] = (iVar38 - iVar24 << auVar49._12_4_) >> auVar49;
        *(undefined1 (*) [16])(unaff_RSI + uVar29 + 5) = in_XMM3;
        uVar29 = uVar29 + 8;
      } while (uVar18 != uVar29);
      if (uVar13 == uVar18) goto LAB_00c6b81c;
    }
    uVar13 = ~uVar23;
    if ((uVar42 & 1) == 0) {
      unaff_RSI[uVar23] =
           (int)(unaff_RDI[uVar23] - unaff_RDI[uVar23 - 1] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      uVar23 = uVar23 + 1;
    }
    if (uVar13 + uVar25 != 0) {
      do {
        unaff_RSI[uVar23] =
             (int)(unaff_RDI[uVar23] - unaff_RDI[uVar23 - 1] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        unaff_RSI[uVar23 + 1] =
             (int)(unaff_RDI[uVar23 + 1] - unaff_RDI[uVar23] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        uVar23 = uVar23 + 2;
      } while (uVar25 != uVar23);
    }
  }
LAB_00c6b81c:
  bVar15 = (byte)local_res8;
  if (uVar17 == 4) {
    uVar5 = *param_1;
    uVar17 = (uint)uVar5;
    uVar33 = param_1[1];
    uVar27 = (uint)uVar33;
    uVar36 = param_1[2];
    uVar42 = (uint)uVar36;
    uVar37 = param_1[3];
    uVar39 = (uint)uVar37;
    if (5 < (int)param_2) {
      uVar13 = 5;
      do {
        iVar46 = unaff_RDI[uVar13 - 5];
        iVar30 = iVar46 - unaff_RDI[uVar13 - 1];
        iVar26 = iVar46 - unaff_RDI[uVar13 - 2];
        iVar24 = iVar46 - unaff_RDI[uVar13 - 3];
        iVar22 = iVar46 - unaff_RDI[uVar13 - 4];
        local_40 = (short)uVar17;
        iVar46 = (unaff_RDI[uVar13] -
                  ((iVar12 - ((short)uVar39 * iVar22 +
                             (short)uVar42 * iVar24 + (short)uVar27 * iVar26 + local_40 * iVar30) >>
                   (bVar15 & 0x1f)) + iVar46) << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        uVar28 = iVar46 >> 0x1f | (uint)(0 < iVar46);
        unaff_RSI[uVar13] = iVar46;
        if ((int)uVar28 < 1) {
          if ((int)uVar28 < 0) {
            uVar28 = iVar22 >> 0x1f | (uint)(0 < iVar22);
            uVar39 = uVar39 + uVar28;
            iVar46 = iVar46 - ((int)-(uVar28 * iVar22) >> (bVar15 & 0x1f));
            if (iVar46 < 0) {
              uVar28 = iVar24 >> 0x1f | (uint)(0 < iVar24);
              uVar42 = uVar42 + uVar28;
              iVar46 = iVar46 + ((int)-(uVar28 * iVar24) >> (bVar15 & 0x1f)) * -2;
              if ((iVar46 < 0) &&
                 (uVar28 = iVar26 >> 0x1f | (uint)(0 < iVar26), uVar27 = uVar27 + uVar28,
                 iVar46 + ((int)-(uVar28 * iVar26) >> (bVar15 & 0x1f)) * -3 < 0)) {
                uVar17 = uVar17 + (iVar30 >> 0x1f | (uint)(0 < iVar30));
              }
            }
          }
        }
        else {
          uVar28 = iVar22 >> 0x1f | (uint)(0 < iVar22);
          uVar39 = uVar39 - uVar28;
          iVar38 = (int)(uVar28 * iVar22) >> (bVar15 & 0x1f);
          iVar22 = iVar46 - iVar38;
          if (iVar22 != 0 && iVar38 <= iVar46) {
            uVar28 = iVar24 >> 0x1f | (uint)(0 < iVar24);
            uVar42 = uVar42 - uVar28;
            iVar22 = iVar22 + ((int)(uVar28 * iVar24) >> (bVar15 & 0x1f)) * -2;
            if ((0 < iVar22) &&
               (uVar28 = iVar26 >> 0x1f | (uint)(0 < iVar26), uVar27 = uVar27 - uVar28,
               0 < iVar22 + ((int)(uVar28 * iVar26) >> (bVar15 & 0x1f)) * -3)) {
              uVar17 = uVar17 - (iVar30 >> 0x1f | (uint)(0 < iVar30));
            }
          }
        }
        uVar5 = (ushort)uVar17;
        uVar37 = (ushort)uVar39;
        uVar36 = (ushort)uVar42;
        uVar33 = (ushort)uVar27;
        uVar13 = uVar13 + 1;
      } while (param_2 != uVar13);
    }
    *param_1 = uVar5;
    param_1[1] = uVar33;
    param_1[2] = uVar36;
    param_1[3] = uVar37;
  }
  else if (uVar17 == 8) {
    local_5c = (uint)*param_1;
    uVar5 = param_1[1];
    uVar28 = (uint)uVar5;
    uVar33 = param_1[2];
    uVar39 = (uint)uVar33;
    uVar36 = param_1[3];
    uVar42 = (uint)uVar36;
    uVar37 = param_1[4];
    uVar27 = (uint)uVar37;
    uVar6 = param_1[5];
    uVar17 = (uint)uVar6;
    uVar32 = param_1[6];
    uVar35 = (uint)uVar32;
    uVar7 = param_1[7];
    uVar34 = (uint)uVar7;
    uVar11 = *param_1;
    if (9 < (int)param_2) {
      uVar13 = 9;
      do {
        iVar46 = unaff_RDI[uVar13 - 9];
        iVar24 = iVar46 - unaff_RDI[uVar13 - 1];
        iVar22 = iVar46 - unaff_RDI[uVar13 - 2];
        iVar45 = iVar46 - unaff_RDI[uVar13 - 3];
        iVar26 = iVar46 - unaff_RDI[uVar13 - 4];
        iVar41 = iVar46 - unaff_RDI[uVar13 - 5];
        iVar30 = iVar46 - unaff_RDI[uVar13 - 6];
        iVar43 = iVar46 - unaff_RDI[uVar13 - 7];
        iVar38 = iVar46 - unaff_RDI[uVar13 - 8];
        local_80 = (short)uVar28;
        local_70 = (short)uVar39;
        local_88 = (short)uVar42;
        local_68 = (short)uVar27;
        local_58 = (short)uVar17;
        iVar46 = (unaff_RDI[uVar13] -
                  ((iVar12 - ((short)uVar34 * iVar38 +
                             (short)uVar35 * iVar43 +
                             local_58 * iVar30 +
                             local_68 * iVar41 +
                             local_88 * iVar26 +
                             local_70 * iVar45 +
                             local_80 * iVar22 + (short)(ushort)local_5c * iVar24) >>
                   (bVar15 & 0x1f)) + iVar46) << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        uVar16 = iVar46 >> 0x1f | (uint)(0 < iVar46);
        unaff_RSI[uVar13] = iVar46;
        if ((int)uVar16 < 1) {
          if ((int)uVar16 < 0) {
            uVar16 = iVar38 >> 0x1f | (uint)(0 < iVar38);
            uVar34 = uVar34 + uVar16;
            iVar46 = iVar46 - ((int)-(uVar16 * iVar38) >> (bVar15 & 0x1f));
            if (iVar46 < 0) {
              uVar16 = iVar43 >> 0x1f | (uint)(0 < iVar43);
              uVar35 = uVar35 + uVar16;
              iVar46 = iVar46 + ((int)-(uVar16 * iVar43) >> (bVar15 & 0x1f)) * -2;
              if (iVar46 < 0) {
                uVar16 = iVar30 >> 0x1f | (uint)(0 < iVar30);
                uVar17 = uVar17 + uVar16;
                iVar46 = iVar46 + ((int)-(uVar16 * iVar30) >> (bVar15 & 0x1f)) * -3;
                if (iVar46 < 0) {
                  uVar16 = iVar41 >> 0x1f | (uint)(0 < iVar41);
                  uVar27 = uVar27 + uVar16;
                  iVar46 = iVar46 + ((int)-(uVar16 * iVar41) >> (bVar15 & 0x1f)) * -4;
                  if (iVar46 < 0) {
                    uVar16 = iVar26 >> 0x1f | (uint)(0 < iVar26);
                    uVar42 = uVar42 + uVar16;
                    iVar46 = iVar46 + ((int)-(uVar16 * iVar26) >> (bVar15 & 0x1f)) * -5;
                    if (iVar46 < 0) {
                      uVar16 = iVar45 >> 0x1f | (uint)(0 < iVar45);
                      uVar39 = uVar39 + uVar16;
                      iVar46 = iVar46 + ((int)-(uVar16 * iVar45) >> (bVar15 & 0x1f)) * -6;
                      if ((iVar46 < 0) &&
                         (uVar16 = iVar22 >> 0x1f | (uint)(0 < iVar22), uVar28 = uVar28 + uVar16,
                         iVar46 + ((int)-(uVar16 * iVar22) >> (bVar15 & 0x1f)) * -7 < 0)) {
                        local_5c = local_5c + (iVar24 >> 0x1f | (uint)(0 < iVar24));
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar16 = iVar38 >> 0x1f | (uint)(0 < iVar38);
          uVar34 = uVar34 - uVar16;
          iVar38 = (int)(uVar16 * iVar38) >> (bVar15 & 0x1f);
          iVar47 = iVar46 - iVar38;
          if (iVar47 != 0 && iVar38 <= iVar46) {
            uVar16 = iVar43 >> 0x1f | (uint)(0 < iVar43);
            uVar35 = uVar35 - uVar16;
            iVar47 = iVar47 + ((int)(uVar16 * iVar43) >> (bVar15 & 0x1f)) * -2;
            if (0 < iVar47) {
              uVar16 = iVar30 >> 0x1f | (uint)(0 < iVar30);
              uVar17 = uVar17 - uVar16;
              iVar47 = iVar47 + ((int)(uVar16 * iVar30) >> (bVar15 & 0x1f)) * -3;
              if (0 < iVar47) {
                uVar16 = iVar41 >> 0x1f | (uint)(0 < iVar41);
                uVar27 = uVar27 - uVar16;
                iVar47 = iVar47 + ((int)(uVar16 * iVar41) >> (bVar15 & 0x1f)) * -4;
                if (0 < iVar47) {
                  uVar16 = iVar26 >> 0x1f | (uint)(0 < iVar26);
                  uVar42 = uVar42 - uVar16;
                  iVar47 = iVar47 + ((int)(uVar16 * iVar26) >> (bVar15 & 0x1f)) * -5;
                  if (0 < iVar47) {
                    uVar16 = iVar45 >> 0x1f | (uint)(0 < iVar45);
                    uVar39 = uVar39 - uVar16;
                    iVar47 = iVar47 + ((int)(uVar16 * iVar45) >> (bVar15 & 0x1f)) * -6;
                    if ((0 < iVar47) &&
                       (uVar16 = iVar22 >> 0x1f | (uint)(0 < iVar22), uVar28 = uVar28 - uVar16,
                       0 < iVar47 + ((int)(uVar16 * iVar22) >> (bVar15 & 0x1f)) * -7)) {
                      local_5c = local_5c - (iVar24 >> 0x1f | (uint)(0 < iVar24));
                    }
                  }
                }
              }
            }
          }
        }
        uVar7 = (ushort)uVar34;
        uVar6 = (ushort)uVar17;
        uVar37 = (ushort)uVar27;
        uVar36 = (ushort)uVar42;
        uVar33 = (ushort)uVar39;
        uVar5 = (ushort)uVar28;
        uVar32 = (ushort)uVar35;
        uVar13 = uVar13 + 1;
        uVar11 = (ushort)local_5c;
      } while (param_2 != uVar13);
    }
    local_5c._0_2_ = uVar11;
    *param_1 = (ushort)local_5c;
    param_1[1] = uVar5;
    param_1[2] = uVar33;
    param_1[3] = uVar36;
    param_1[4] = uVar37;
    param_1[5] = uVar6;
    param_1[6] = uVar32;
    param_1[7] = uVar7;
  }
  else if ((int)uVar42 < (int)param_2) {
    uVar13 = param_3 & 0xffffffff;
    if ((int)uVar17 < 1) {
      lVar31 = (longlong)(int)uVar17 + 1;
      lVar19 = 0x100000000 - (uVar13 << 0x20);
      do {
        iVar46 = unaff_RDI[lVar31 - (int)uVar42];
        iVar22 = (unaff_RDI[lVar31] - ((iVar12 >> (bVar15 & 0x1f)) + iVar46) << (bVar14 & 0x1f)) >>
                 (bVar14 & 0x1f);
        lVar40 = lVar31 * 4 + -4;
        unaff_RSI[lVar31] = iVar22;
        uVar17 = iVar22 >> 0x1f | (uint)(0 < iVar22);
        if ((int)uVar17 < 1) {
          if ((int)uVar17 < 0) {
            iVar24 = -1;
            uVar13 = param_3 & 0xffffffff;
            lVar21 = lVar19;
            do {
              if ((int)uVar13 < 1) break;
              uVar13 = (ulonglong)((int)uVar13 - 1);
              iVar26 = iVar46 - *(int *)((longlong)unaff_RDI + (lVar21 >> 0x1e) + lVar40);
              uVar17 = iVar26 >> 0x1f | (uint)(0 < iVar26);
              param_1[uVar13] = param_1[uVar13] + (short)uVar17;
              iVar26 = ((int)-(uVar17 * iVar26) >> (bVar15 & 0x1f)) * iVar24;
              lVar21 = lVar21 + 0x100000000;
              iVar24 = iVar24 + -1;
              iVar22 = iVar22 + iVar26;
            } while (iVar22 < 0);
          }
        }
        else {
          iVar24 = -1;
          uVar13 = param_3 & 0xffffffff;
          lVar21 = lVar19;
          do {
            if ((int)uVar13 < 1) break;
            uVar13 = (ulonglong)((int)uVar13 - 1);
            iVar26 = iVar46 - *(int *)((longlong)unaff_RDI + (lVar21 >> 0x1e) + lVar40);
            uVar17 = iVar26 >> 0x1f | (uint)(0 < iVar26);
            param_1[uVar13] = param_1[uVar13] - (short)uVar17;
            iVar22 = iVar22 + ((int)(uVar17 * iVar26) >> (bVar15 & 0x1f)) * iVar24;
            lVar21 = lVar21 + 0x100000000;
            iVar24 = iVar24 + -1;
          } while (0 < iVar22);
        }
        lVar31 = lVar31 + 1;
      } while ((uint)lVar31 != param_2);
    }
    else {
      lVar19 = (longlong)(int)uVar42;
      uVar23 = (ulonglong)(uVar17 & 0xfffffff8);
      puVar44 = unaff_RDI + lVar19 + -4;
      puVar48 = unaff_RDI + lVar19 + -1;
      lVar40 = 0x100000000 - (uVar13 << 0x20);
      lVar31 = lVar19;
      do {
        iVar46 = unaff_RDI[lVar31 - lVar19];
        if (uVar17 < 8) {
          iVar22 = 0;
          uVar25 = 0;
LAB_00c6bfd1:
          puVar20 = param_1 + uVar25;
          lVar21 = -uVar25;
          do {
            iVar22 = iVar22 + (puVar48[lVar21] - iVar46) * (int)(short)*puVar20;
            lVar21 = lVar21 + -1;
            puVar20 = puVar20 + 1;
          } while (-lVar21 != uVar13);
        }
        else {
          iVar22 = 0;
          iVar24 = 0;
          iVar26 = 0;
          iVar30 = 0;
          lVar21 = 0;
          iVar38 = 0;
          iVar41 = 0;
          iVar43 = 0;
          iVar45 = 0;
          puVar20 = param_1 + 4;
          do {
            in_XMM3 = pmovsxwd(in_XMM3,*(undefined8 *)(puVar20 + -4));
            in_XMM4 = pmovsxwd(in_XMM4,*(undefined8 *)puVar20);
            piVar1 = puVar44 + lVar21 + -4;
            piVar2 = puVar44 + lVar21;
            auVar50._0_4_ = piVar2[3] - iVar46;
            auVar50._4_4_ = piVar2[2] - iVar46;
            auVar50._8_4_ = piVar2[1] - iVar46;
            auVar50._12_4_ = *piVar2 - iVar46;
            auVar49 = pmulld(auVar50,in_XMM3);
            iVar22 = iVar22 + auVar49._0_4_;
            iVar24 = iVar24 + auVar49._4_4_;
            iVar26 = iVar26 + auVar49._8_4_;
            iVar30 = iVar30 + auVar49._12_4_;
            auVar49._0_4_ = piVar1[3] - iVar46;
            auVar49._4_4_ = piVar1[2] - iVar46;
            auVar49._8_4_ = piVar1[1] - iVar46;
            auVar49._12_4_ = *piVar1 - iVar46;
            auVar49 = pmulld(auVar49,in_XMM4);
            iVar38 = iVar38 + auVar49._0_4_;
            iVar41 = iVar41 + auVar49._4_4_;
            iVar43 = iVar43 + auVar49._8_4_;
            iVar45 = iVar45 + auVar49._12_4_;
            puVar20 = puVar20 + 8;
            lVar21 = lVar21 + -8;
          } while (-lVar21 != uVar23);
          iVar22 = iVar45 + iVar30 + iVar41 + iVar24 + iVar43 + iVar26 + iVar38 + iVar22;
          uVar25 = uVar23;
          if (uVar23 != uVar13) goto LAB_00c6bfd1;
        }
        piVar1 = unaff_RDI + lVar31;
        iVar22 = (*piVar1 - ((iVar22 + iVar12 >> (bVar15 & 0x1f)) + iVar46) << (bVar14 & 0x1f)) >>
                 (bVar14 & 0x1f);
        unaff_RSI[lVar31] = iVar22;
        uVar27 = iVar22 >> 0x1f | (uint)(0 < iVar22);
        if ((int)uVar27 < 1) {
          if ((int)uVar27 < 0) {
            iVar24 = -1;
            uVar25 = uVar13;
            lVar21 = lVar40;
            do {
              if ((longlong)uVar25 < 1) break;
              iVar26 = iVar46 - *(int *)((longlong)piVar1 + (lVar21 >> 0x1e) + -4);
              uVar27 = iVar26 >> 0x1f | (uint)(0 < iVar26);
              param_1[uVar17 + iVar24] = param_1[uVar17 + iVar24] + (short)uVar27;
              iVar26 = ((int)-(uVar27 * iVar26) >> (bVar15 & 0x1f)) * iVar24;
              uVar25 = uVar25 - 1;
              lVar21 = lVar21 + 0x100000000;
              iVar24 = iVar24 + -1;
              iVar22 = iVar22 + iVar26;
            } while (iVar22 < 0);
          }
        }
        else {
          iVar24 = -1;
          uVar25 = uVar13;
          lVar21 = lVar40;
          do {
            if ((longlong)uVar25 < 1) break;
            iVar26 = iVar46 - *(int *)((longlong)piVar1 + (lVar21 >> 0x1e) + -4);
            uVar27 = iVar26 >> 0x1f | (uint)(0 < iVar26);
            param_1[uVar17 + iVar24] = param_1[uVar17 + iVar24] - (short)uVar27;
            iVar22 = iVar22 + ((int)(uVar27 * iVar26) >> (bVar15 & 0x1f)) * iVar24;
            uVar25 = uVar25 - 1;
            lVar21 = lVar21 + 0x100000000;
            iVar24 = iVar24 + -1;
          } while (0 < iVar22);
        }
        lVar31 = lVar31 + 1;
        puVar44 = puVar44 + 1;
        puVar48 = puVar48 + 1;
      } while ((uint)lVar31 != param_2);
    }
  }
  return;
}



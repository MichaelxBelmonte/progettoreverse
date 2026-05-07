// Function: FUN_00c6a900
// Address: 00c6a900
// Size: 3094 bytes
// Class: Unknown


void FUN_00c6a900(ushort *param_1,uint param_2,ulonglong param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  ushort *puVar22;
  ushort uVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  int *unaff_RSI;
  uint uVar27;
  uint uVar28;
  int *unaff_RDI;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  uint uVar32;
  int *piVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  ulonglong uVar38;
  ushort uVar39;
  uint uVar40;
  ulonglong uVar41;
  int *piVar42;
  int iVar43;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int local_res8;
  short local_80;
  short local_78;
  short local_70;
  short local_68;
  short local_60;
  short local_50;
  short local_40;
  short local_38;
  
  iVar9 = 1 << ((byte)(local_res8 - 1U) & 0x1f);
  iVar10 = *unaff_RDI;
  *unaff_RSI = iVar10;
  uVar20 = (uint)param_3;
  if (uVar20 == 0) {
    if ((unaff_RDI != unaff_RSI) && (1 < (int)param_2)) {
      _memcpy((void *)(ulonglong)(local_res8 - 1U),(void *)((ulonglong)(param_2 - 1) << 2),0);
    }
  }
  else {
    bVar13 = 0x20 - param_4;
    if (uVar20 == 0x1f) {
      if (1 < (int)param_2) {
        lVar29 = 1;
        if (param_2 != 2) {
          lVar29 = 1;
          do {
            iVar10 = (iVar10 + unaff_RDI[lVar29] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
            unaff_RSI[lVar29] = iVar10;
            iVar10 = (iVar10 + unaff_RDI[lVar29 + 1] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
            unaff_RSI[lVar29 + 1] = iVar10;
            lVar21 = lVar29 - ((ulonglong)param_2 - 1 & 0xfffffffffffffffe);
            lVar29 = lVar29 + 2;
          } while (lVar21 != -1);
        }
        if (((ulonglong)param_2 - 1 & 1) != 0) {
          unaff_RSI[lVar29] = (iVar10 + unaff_RDI[lVar29] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
    }
    else {
      uVar36 = uVar20 + 1;
      if (0 < (int)uVar20) {
        lVar29 = 1;
        if (uVar36 != 2) {
          lVar29 = 1;
          do {
            iVar10 = (iVar10 + unaff_RDI[lVar29] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
            unaff_RSI[lVar29] = iVar10;
            iVar10 = (iVar10 + unaff_RDI[lVar29 + 1] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
            unaff_RSI[lVar29 + 1] = iVar10;
            lVar21 = lVar29 - ((ulonglong)uVar36 - 1 & 0xfffffffffffffffe);
            lVar29 = lVar29 + 2;
          } while (lVar21 != -1);
        }
        if (((ulonglong)uVar36 - 1 & 1) != 0) {
          unaff_RSI[lVar29] = (iVar10 + unaff_RDI[lVar29] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
      bVar14 = (byte)local_res8;
      if (uVar20 == 4) {
        uVar3 = *param_1;
        uVar36 = (uint)uVar3;
        uVar4 = param_1[1];
        uVar20 = (uint)uVar4;
        uVar23 = param_1[2];
        uVar25 = (uint)uVar23;
        uVar39 = param_1[3];
        uVar40 = (uint)uVar39;
        if (5 < (int)param_2) {
          iVar10 = unaff_RSI[4];
          uVar41 = 5;
          do {
            iVar18 = unaff_RSI[uVar41 - 5];
            iVar17 = iVar18 - iVar10;
            iVar31 = iVar18 - unaff_RSI[uVar41 - 2];
            iVar24 = iVar18 - unaff_RSI[uVar41 - 3];
            iVar11 = iVar18 - unaff_RSI[uVar41 - 4];
            local_50 = (short)uVar36;
            local_40 = (short)uVar20;
            iVar19 = unaff_RDI[uVar41];
            iVar10 = (iVar18 + iVar19 +
                      (iVar9 - ((short)uVar40 * iVar11 +
                               (short)uVar25 * iVar24 + local_40 * iVar31 + local_50 * iVar17) >>
                      (bVar14 & 0x1f)) << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
            uVar28 = iVar19 >> 0x1f | (uint)(0 < iVar19);
            unaff_RSI[uVar41] = iVar10;
            if ((int)uVar28 < 1) {
              if ((int)uVar28 < 0) {
                uVar28 = iVar11 >> 0x1f | (uint)(0 < iVar11);
                uVar40 = uVar40 + uVar28;
                iVar19 = iVar19 - ((int)-(uVar28 * iVar11) >> (bVar14 & 0x1f));
                if (iVar19 < 0) {
                  uVar28 = iVar24 >> 0x1f | (uint)(0 < iVar24);
                  uVar25 = uVar25 + uVar28;
                  iVar19 = iVar19 + ((int)-(uVar28 * iVar24) >> (bVar14 & 0x1f)) * -2;
                  if ((iVar19 < 0) &&
                     (uVar28 = iVar31 >> 0x1f | (uint)(0 < iVar31), uVar20 = uVar20 + uVar28,
                     iVar19 + ((int)-(uVar28 * iVar31) >> (bVar14 & 0x1f)) * -3 < 0)) {
                    uVar36 = uVar36 + (iVar17 >> 0x1f | (uint)(0 < iVar17));
                  }
                }
              }
            }
            else {
              uVar28 = iVar11 >> 0x1f | (uint)(0 < iVar11);
              uVar40 = uVar40 - uVar28;
              iVar18 = (int)(uVar28 * iVar11) >> (bVar14 & 0x1f);
              iVar11 = iVar19 - iVar18;
              if (iVar11 != 0 && iVar18 <= iVar19) {
                uVar28 = iVar24 >> 0x1f | (uint)(0 < iVar24);
                uVar25 = uVar25 - uVar28;
                iVar11 = iVar11 + ((int)(uVar28 * iVar24) >> (bVar14 & 0x1f)) * -2;
                if ((0 < iVar11) &&
                   (uVar28 = iVar31 >> 0x1f | (uint)(0 < iVar31), uVar20 = uVar20 - uVar28,
                   0 < iVar11 + ((int)(uVar28 * iVar31) >> (bVar14 & 0x1f)) * -3)) {
                  uVar36 = uVar36 - (iVar17 >> 0x1f | (uint)(0 < iVar17));
                }
              }
            }
            uVar4 = (ushort)uVar20;
            uVar3 = (ushort)uVar36;
            uVar39 = (ushort)uVar40;
            uVar23 = (ushort)uVar25;
            uVar41 = uVar41 + 1;
          } while (param_2 != uVar41);
        }
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar23;
        param_1[3] = uVar39;
      }
      else if (uVar20 == 8) {
        uVar3 = *param_1;
        uVar15 = (uint)uVar3;
        uVar4 = param_1[1];
        uVar28 = (uint)uVar4;
        uVar23 = param_1[2];
        uVar40 = (uint)uVar23;
        uVar39 = param_1[3];
        uVar25 = (uint)uVar39;
        uVar5 = param_1[4];
        uVar36 = (uint)uVar5;
        uVar6 = param_1[5];
        uVar20 = (uint)uVar6;
        uVar7 = param_1[6];
        uVar12 = (uint)uVar7;
        uVar8 = param_1[7];
        uVar32 = (uint)uVar8;
        if (9 < (int)param_2) {
          iVar10 = unaff_RSI[8];
          uVar41 = 9;
          do {
            iVar18 = unaff_RSI[uVar41 - 9];
            iVar17 = iVar18 - iVar10;
            iVar24 = iVar18 - unaff_RSI[uVar41 - 2];
            iVar11 = iVar18 - unaff_RSI[uVar41 - 3];
            iVar43 = iVar18 - unaff_RSI[uVar41 - 4];
            iVar31 = iVar18 - unaff_RSI[uVar41 - 5];
            iVar37 = iVar18 - unaff_RSI[uVar41 - 6];
            iVar35 = iVar18 - unaff_RSI[uVar41 - 7];
            iVar34 = iVar18 - unaff_RSI[uVar41 - 8];
            local_78 = (short)uVar15;
            local_80 = (short)uVar28;
            local_70 = (short)uVar40;
            local_68 = (short)uVar25;
            local_60 = (short)uVar36;
            local_50 = (short)uVar20;
            local_38 = (short)uVar12;
            iVar19 = unaff_RDI[uVar41];
            iVar10 = (iVar18 + iVar19 +
                      (iVar9 - ((short)uVar32 * iVar34 +
                               local_38 * iVar35 +
                               local_50 * iVar37 +
                               local_60 * iVar31 +
                               local_68 * iVar43 +
                               local_70 * iVar11 + local_80 * iVar24 + local_78 * iVar17) >>
                      (bVar14 & 0x1f)) << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
            uVar27 = iVar19 >> 0x1f | (uint)(0 < iVar19);
            unaff_RSI[uVar41] = iVar10;
            if ((int)uVar27 < 1) {
              if ((int)uVar27 < 0) {
                uVar27 = iVar34 >> 0x1f | (uint)(0 < iVar34);
                uVar32 = uVar32 + uVar27;
                iVar19 = iVar19 - ((int)-(uVar27 * iVar34) >> (bVar14 & 0x1f));
                if (iVar19 < 0) {
                  uVar27 = iVar35 >> 0x1f | (uint)(0 < iVar35);
                  uVar12 = uVar12 + uVar27;
                  iVar19 = iVar19 + ((int)-(uVar27 * iVar35) >> (bVar14 & 0x1f)) * -2;
                  if (iVar19 < 0) {
                    uVar27 = iVar37 >> 0x1f | (uint)(0 < iVar37);
                    uVar20 = uVar20 + uVar27;
                    iVar19 = iVar19 + ((int)-(uVar27 * iVar37) >> (bVar14 & 0x1f)) * -3;
                    if (iVar19 < 0) {
                      uVar27 = iVar31 >> 0x1f | (uint)(0 < iVar31);
                      uVar36 = uVar36 + uVar27;
                      iVar19 = iVar19 + ((int)-(uVar27 * iVar31) >> (bVar14 & 0x1f)) * -4;
                      if (iVar19 < 0) {
                        uVar27 = iVar43 >> 0x1f | (uint)(0 < iVar43);
                        uVar25 = uVar25 + uVar27;
                        iVar19 = iVar19 + ((int)-(uVar27 * iVar43) >> (bVar14 & 0x1f)) * -5;
                        if (iVar19 < 0) {
                          uVar27 = iVar11 >> 0x1f | (uint)(0 < iVar11);
                          uVar40 = uVar40 + uVar27;
                          iVar19 = iVar19 + ((int)-(uVar27 * iVar11) >> (bVar14 & 0x1f)) * -6;
                          if ((iVar19 < 0) &&
                             (uVar27 = iVar24 >> 0x1f | (uint)(0 < iVar24), uVar28 = uVar28 + uVar27
                             , iVar19 + ((int)-(uVar27 * iVar24) >> (bVar14 & 0x1f)) * -7 < 0)) {
                            uVar15 = uVar15 + (iVar17 >> 0x1f | (uint)(0 < iVar17));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar27 = iVar34 >> 0x1f | (uint)(0 < iVar34);
              uVar32 = uVar32 - uVar27;
              iVar34 = (int)(uVar27 * iVar34) >> (bVar14 & 0x1f);
              iVar18 = iVar19 - iVar34;
              if (iVar18 != 0 && iVar34 <= iVar19) {
                uVar27 = iVar35 >> 0x1f | (uint)(0 < iVar35);
                uVar12 = uVar12 - uVar27;
                iVar18 = iVar18 + ((int)(uVar27 * iVar35) >> (bVar14 & 0x1f)) * -2;
                if (0 < iVar18) {
                  uVar27 = iVar37 >> 0x1f | (uint)(0 < iVar37);
                  uVar20 = uVar20 - uVar27;
                  iVar18 = iVar18 + ((int)(uVar27 * iVar37) >> (bVar14 & 0x1f)) * -3;
                  if (0 < iVar18) {
                    uVar27 = iVar31 >> 0x1f | (uint)(0 < iVar31);
                    uVar36 = uVar36 - uVar27;
                    iVar18 = iVar18 + ((int)(uVar27 * iVar31) >> (bVar14 & 0x1f)) * -4;
                    if (0 < iVar18) {
                      uVar27 = iVar43 >> 0x1f | (uint)(0 < iVar43);
                      uVar25 = uVar25 - uVar27;
                      iVar18 = iVar18 + ((int)(uVar27 * iVar43) >> (bVar14 & 0x1f)) * -5;
                      if (0 < iVar18) {
                        uVar27 = iVar11 >> 0x1f | (uint)(0 < iVar11);
                        uVar40 = uVar40 - uVar27;
                        iVar18 = iVar18 + ((int)(uVar27 * iVar11) >> (bVar14 & 0x1f)) * -6;
                        if ((0 < iVar18) &&
                           (uVar27 = iVar24 >> 0x1f | (uint)(0 < iVar24), uVar28 = uVar28 - uVar27,
                           0 < iVar18 + ((int)(uVar27 * iVar24) >> (bVar14 & 0x1f)) * -7)) {
                          uVar15 = uVar15 - (iVar17 >> 0x1f | (uint)(0 < iVar17));
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar8 = (ushort)uVar32;
            uVar7 = (ushort)uVar12;
            uVar6 = (ushort)uVar20;
            uVar5 = (ushort)uVar36;
            uVar39 = (ushort)uVar25;
            uVar23 = (ushort)uVar40;
            uVar4 = (ushort)uVar28;
            uVar3 = (ushort)uVar15;
            uVar41 = uVar41 + 1;
          } while (param_2 != uVar41);
        }
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar23;
        param_1[3] = uVar39;
        param_1[4] = uVar5;
        param_1[5] = uVar6;
        param_1[6] = uVar7;
        param_1[7] = uVar8;
      }
      else if ((int)uVar36 < (int)param_2) {
        uVar41 = param_3 & 0xffffffff;
        if ((int)uVar20 < 1) {
          lVar21 = (longlong)(int)uVar20 + 1;
          lVar29 = 0x100000000 - (uVar41 << 0x20);
          do {
            iVar10 = unaff_RSI[lVar21 - (int)uVar36];
            iVar18 = unaff_RDI[lVar21];
            uVar20 = iVar18 >> 0x1f | (uint)(0 < iVar18);
            lVar30 = lVar21 * 4 + -4;
            unaff_RSI[lVar21] =
                 ((iVar9 >> (bVar14 & 0x1f)) + iVar10 + iVar18 << (bVar13 & 0x1f)) >>
                 (bVar13 & 0x1f);
            if ((int)uVar20 < 1) {
              if ((int)uVar20 < 0) {
                iVar19 = -1;
                uVar41 = param_3 & 0xffffffff;
                lVar16 = lVar29;
                do {
                  if ((int)uVar41 < 1) break;
                  uVar41 = (ulonglong)((int)uVar41 - 1);
                  iVar11 = iVar10 - *(int *)((longlong)unaff_RSI + (lVar16 >> 0x1e) + lVar30);
                  uVar20 = iVar11 >> 0x1f | (uint)(0 < iVar11);
                  param_1[uVar41] = param_1[uVar41] + (short)uVar20;
                  iVar11 = ((int)-(uVar20 * iVar11) >> (bVar14 & 0x1f)) * iVar19;
                  lVar16 = lVar16 + 0x100000000;
                  iVar19 = iVar19 + -1;
                  iVar18 = iVar18 + iVar11;
                } while (iVar18 < 0);
              }
            }
            else {
              iVar19 = -1;
              uVar41 = param_3 & 0xffffffff;
              lVar16 = lVar29;
              do {
                if ((int)uVar41 < 1) break;
                uVar41 = (ulonglong)((int)uVar41 - 1);
                iVar11 = iVar10 - *(int *)((longlong)unaff_RSI + (lVar16 >> 0x1e) + lVar30);
                uVar20 = iVar11 >> 0x1f | (uint)(0 < iVar11);
                param_1[uVar41] = param_1[uVar41] - (short)uVar20;
                iVar18 = iVar18 + ((int)(uVar20 * iVar11) >> (bVar14 & 0x1f)) * iVar19;
                lVar16 = lVar16 + 0x100000000;
                iVar19 = iVar19 + -1;
              } while (0 < iVar18);
            }
            lVar21 = lVar21 + 1;
          } while ((uint)lVar21 != param_2);
        }
        else {
          lVar21 = (longlong)(int)uVar36;
          uVar38 = (ulonglong)(uVar20 & 0xfffffff8);
          piVar33 = unaff_RSI + lVar21 + -4;
          piVar42 = unaff_RSI + lVar21 + -1;
          lVar30 = 0x100000000 - (uVar41 << 0x20);
          lVar29 = lVar21;
          do {
            iVar10 = unaff_RSI[lVar29 - lVar21];
            if (uVar20 < 8) {
              iVar18 = 0;
              uVar26 = 0;
LAB_00c6b210:
              puVar22 = param_1 + uVar26;
              lVar16 = -uVar26;
              do {
                iVar18 = iVar18 + (piVar42[lVar16] - iVar10) * (int)(short)*puVar22;
                lVar16 = lVar16 + -1;
                puVar22 = puVar22 + 1;
              } while (-lVar16 != uVar41);
            }
            else {
              iVar18 = 0;
              iVar19 = 0;
              iVar11 = 0;
              iVar17 = 0;
              lVar16 = 0;
              iVar24 = 0;
              iVar31 = 0;
              iVar34 = 0;
              iVar35 = 0;
              puVar22 = param_1 + 4;
              do {
                in_XMM3 = pmovsxwd(in_XMM3,*(undefined8 *)(puVar22 + -4));
                in_XMM4 = pmovsxwd(in_XMM4,*(undefined8 *)puVar22);
                piVar2 = piVar33 + lVar16 + -4;
                piVar1 = piVar33 + lVar16;
                auVar44._0_4_ = piVar1[3] - iVar10;
                auVar44._4_4_ = piVar1[2] - iVar10;
                auVar44._8_4_ = piVar1[1] - iVar10;
                auVar44._12_4_ = *piVar1 - iVar10;
                auVar45 = pmulld(auVar44,in_XMM3);
                iVar18 = iVar18 + auVar45._0_4_;
                iVar19 = iVar19 + auVar45._4_4_;
                iVar11 = iVar11 + auVar45._8_4_;
                iVar17 = iVar17 + auVar45._12_4_;
                auVar45._0_4_ = piVar2[3] - iVar10;
                auVar45._4_4_ = piVar2[2] - iVar10;
                auVar45._8_4_ = piVar2[1] - iVar10;
                auVar45._12_4_ = *piVar2 - iVar10;
                auVar45 = pmulld(auVar45,in_XMM4);
                iVar24 = iVar24 + auVar45._0_4_;
                iVar31 = iVar31 + auVar45._4_4_;
                iVar34 = iVar34 + auVar45._8_4_;
                iVar35 = iVar35 + auVar45._12_4_;
                puVar22 = puVar22 + 8;
                lVar16 = lVar16 + -8;
              } while (-lVar16 != uVar38);
              iVar18 = iVar35 + iVar17 + iVar31 + iVar19 + iVar34 + iVar11 + iVar24 + iVar18;
              uVar26 = uVar38;
              if (uVar38 != uVar41) goto LAB_00c6b210;
            }
            iVar19 = unaff_RDI[lVar29];
            piVar1 = unaff_RSI + lVar29;
            uVar36 = iVar19 >> 0x1f | (uint)(0 < iVar19);
            *piVar1 = ((iVar18 + iVar9 >> (bVar14 & 0x1f)) + iVar10 + iVar19 << (bVar13 & 0x1f)) >>
                      (bVar13 & 0x1f);
            if ((int)uVar36 < 1) {
              if ((int)uVar36 < 0) {
                iVar18 = -1;
                lVar16 = lVar30;
                uVar26 = uVar41;
                do {
                  if ((longlong)uVar26 < 1) break;
                  iVar11 = iVar10 - *(int *)((longlong)piVar1 + (lVar16 >> 0x1e) + -4);
                  uVar36 = iVar11 >> 0x1f | (uint)(0 < iVar11);
                  param_1[uVar20 + iVar18] = param_1[uVar20 + iVar18] + (short)uVar36;
                  iVar11 = ((int)-(uVar36 * iVar11) >> (bVar14 & 0x1f)) * iVar18;
                  uVar26 = uVar26 - 1;
                  lVar16 = lVar16 + 0x100000000;
                  iVar18 = iVar18 + -1;
                  iVar19 = iVar19 + iVar11;
                } while (iVar19 < 0);
              }
            }
            else {
              iVar18 = -1;
              lVar16 = lVar30;
              uVar26 = uVar41;
              do {
                if ((longlong)uVar26 < 1) break;
                iVar11 = iVar10 - *(int *)((longlong)piVar1 + (lVar16 >> 0x1e) + -4);
                uVar36 = iVar11 >> 0x1f | (uint)(0 < iVar11);
                param_1[uVar20 + iVar18] = param_1[uVar20 + iVar18] - (short)uVar36;
                iVar19 = iVar19 + ((int)(uVar36 * iVar11) >> (bVar14 & 0x1f)) * iVar18;
                uVar26 = uVar26 - 1;
                lVar16 = lVar16 + 0x100000000;
                iVar18 = iVar18 + -1;
              } while (0 < iVar19);
            }
            lVar29 = lVar29 + 1;
            piVar33 = piVar33 + 1;
            piVar42 = piVar42 + 1;
          } while ((uint)lVar29 != param_2);
        }
      }
    }
  }
  return;
}



// Function: FUN_00b285a0
// Address: 00b285a0
// Size: 2178 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b285a0(undefined8 param_1,ulonglong param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  float *pfVar31;
  ulonglong uVar32;
  float *unaff_RSI;
  longlong lVar33;
  longlong lVar34;
  uint *unaff_RDI;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  float *local_50;
  longlong local_40;
  longlong local_38;
  
  uVar22 = MXCSR;
  uVar21 = _UNK_023945b4;
  uVar20 = _DAT_023945b0;
  lVar34 = **(longlong **)(unaff_RDI + 4);
  lVar25 = (*(longlong **)(unaff_RDI + 4))[2];
  MXCSR = MXCSR | 0x8000;
  uVar7 = *unaff_RDI;
  if ((~uVar7 & 0x11) == 0) {
    uVar8 = unaff_RDI[1];
    uVar24 = (ulonglong)uVar8;
    if (uVar24 != 0) {
      lVar9 = *(longlong *)(*(longlong *)(unaff_RDI + 4) + 0xf0);
      if (param_2 == 0) {
        if (uVar8 == 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          do {
            pdVar1 = (double *)(lVar9 + uVar24 * 8);
            if (*pdVar1 <= 0.0 && *pdVar1 != 0.0) {
              *(undefined8 *)(lVar9 + uVar24 * 8) = 0;
              pdVar1 = (double *)(lVar9 + 8 + uVar24 * 8);
              if (*pdVar1 <= 0.0 && *pdVar1 != 0.0) goto LAB_00b28af1;
            }
            else {
              pdVar1 = (double *)(lVar9 + 8 + uVar24 * 8);
              if (*pdVar1 <= 0.0 && *pdVar1 != 0.0) {
LAB_00b28af1:
                *(undefined8 *)(lVar9 + 8 + uVar24 * 8) = 0;
              }
            }
            uVar24 = uVar24 + 2;
          } while ((uVar8 & 0xfffffffe) != uVar24);
        }
        if (((uVar8 & 1) != 0) &&
           (pdVar1 = (double *)(lVar9 + uVar24 * 8), *pdVar1 <= 0.0 && *pdVar1 != 0.0)) {
          *(undefined8 *)(lVar9 + uVar24 * 8) = 0;
        }
      }
      else {
        uVar28 = 0;
        pfVar27 = unaff_RSI;
        do {
          dVar50 = 0.0;
          if (param_2 == 1) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            pfVar23 = pfVar27;
            do {
              dVar51 = (double)*pfVar23;
              dVar52 = (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) ^ uVar21,
                                        SUB84(dVar51,0) ^ uVar20);
              if (dVar51 <= dVar52) {
                dVar51 = dVar52;
              }
              if (dVar51 <= dVar50) {
                dVar51 = dVar50;
              }
              dVar50 = (double)pfVar23[uVar24];
              dVar52 = (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) ^ uVar21,
                                        SUB84(dVar50,0) ^ uVar20);
              if (dVar50 <= dVar52) {
                dVar50 = dVar52;
              }
              if (dVar50 <= dVar51) {
                dVar50 = dVar51;
              }
              uVar32 = uVar32 + 2;
              pfVar23 = pfVar23 + uVar24 * 2;
            } while ((param_2 & 0xfffffffffffffffe) != uVar32);
          }
          if ((param_2 & 1) == 0) {
            pdVar1 = (double *)(lVar9 + uVar28 * 8);
            if (*pdVar1 <= dVar50 && dVar50 != *pdVar1) {
LAB_00b286ef:
              *(double *)(lVar9 + uVar28 * 8) = dVar50;
            }
          }
          else {
            dVar51 = (double)unaff_RSI[uVar32 * uVar24 + uVar28];
            dVar52 = (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) ^ uVar21,
                                      SUB84(dVar51,0) ^ uVar20);
            if (dVar51 <= dVar52) {
              dVar51 = dVar52;
            }
            if (dVar51 <= dVar50) {
              dVar51 = dVar50;
            }
            dVar50 = dVar51;
            pdVar1 = (double *)(lVar9 + uVar28 * 8);
            if (*pdVar1 <= dVar50 && dVar50 != *pdVar1) goto LAB_00b286ef;
          }
          uVar28 = uVar28 + 1;
          pfVar27 = pfVar27 + 1;
        } while (uVar28 != uVar24);
      }
    }
  }
  if (((~uVar7 & 0x31) == 0) && (*(longlong *)(*(longlong *)(unaff_RDI + 4) + 0x108) != 0)) {
    if (param_2 != 0) {
      uVar7 = unaff_RDI[1];
      uVar24 = (ulonglong)uVar7;
      if (uVar24 != 0) {
        lVar9 = *(longlong *)(*(longlong *)(unaff_RDI + 4) + 0x110);
        if (uVar7 < 8) {
          lVar26 = 0x18;
          uVar28 = param_2;
          do {
            *(undefined4 *)(lVar9 + -0x18 + lVar26) =
                 *(undefined4 *)((longlong)unaff_RSI + lVar26 + -0x18);
            if (((((uVar7 != 1) &&
                  (*(undefined4 *)(lVar9 + -0x14 + lVar26) =
                        *(undefined4 *)((longlong)unaff_RSI + lVar26 + -0x14), uVar7 != 2)) &&
                 (*(undefined4 *)(lVar9 + -0x10 + lVar26) =
                       *(undefined4 *)((longlong)unaff_RSI + lVar26 + -0x10), uVar7 != 3)) &&
                ((*(undefined4 *)(lVar9 + -0xc + lVar26) =
                       *(undefined4 *)((longlong)unaff_RSI + lVar26 + -0xc), uVar7 != 4 &&
                 (*(undefined4 *)(lVar9 + -8 + lVar26) =
                       *(undefined4 *)((longlong)unaff_RSI + lVar26 + -8), uVar7 != 5)))) &&
               (*(undefined4 *)(lVar9 + -4 + lVar26) =
                     *(undefined4 *)((longlong)unaff_RSI + lVar26 + -4), uVar7 != 6)) {
              *(undefined4 *)(lVar9 + lVar26) = *(undefined4 *)((longlong)unaff_RSI + lVar26);
            }
            lVar26 = lVar26 + uVar24 * 4;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        else {
          uVar28 = (ulonglong)(uVar7 & 0xfffffff8);
          if (uVar28 == uVar24) {
            uVar32 = (uVar28 - 8 >> 3) + 1;
            uVar40 = (ulonglong)((uint)uVar32 & 3);
            lVar26 = lVar9 + 0x70;
            lVar38 = uVar24 * 4;
            pfVar27 = unaff_RSI + 0x1c;
            local_38 = lVar9 + 0x10;
            local_50 = unaff_RSI + 4;
            lVar39 = lVar9 + 0xc;
            pfVar23 = unaff_RSI + 3;
            uVar41 = 0;
            pfVar31 = unaff_RSI;
            local_40 = lVar9;
            do {
              lVar33 = uVar41 * uVar24;
              if (((float *)(lVar9 + lVar33 * 4) < unaff_RSI + lVar33 + uVar24) &&
                 (unaff_RSI + lVar33 < (float *)(lVar9 + (lVar33 + uVar24) * 4))) {
                if (uVar24 - 1 < 3) {
                  uVar29 = 0;
                }
                else {
                  uVar29 = 0;
                  do {
                    *(float *)(lVar39 + -0xc + uVar29 * 4) = pfVar23[uVar29 - 3];
                    *(float *)(lVar39 + -8 + uVar29 * 4) = pfVar23[uVar29 - 2];
                    *(float *)(lVar39 + -4 + uVar29 * 4) = pfVar23[uVar29 - 1];
                    *(float *)(lVar39 + uVar29 * 4) = pfVar23[uVar29];
                    uVar29 = uVar29 + 4;
                  } while ((uVar7 & 0xfffffffc) != uVar29);
                }
                if ((ulonglong)(uVar7 & 3) != 0) {
                  uVar35 = 0;
                  do {
                    *(float *)(local_40 + uVar29 * 4 + uVar35 * 4) = pfVar31[uVar29 + uVar35];
                    uVar35 = uVar35 + 1;
                  } while ((uVar7 & 3) != uVar35);
                }
              }
              else {
                if (uVar28 - 8 < 0x18) {
                  lVar30 = 0;
                }
                else {
                  lVar30 = 0;
                  lVar33 = -(uVar32 & 0xfffffffffffffffc);
                  do {
                    uVar17 = *(undefined8 *)(pfVar27 + lVar30 + -0x1c + 2);
                    uVar18 = *(undefined8 *)(pfVar27 + lVar30 + -0x18);
                    uVar19 = *(undefined8 *)(pfVar27 + lVar30 + -0x18 + 2);
                    puVar2 = (undefined8 *)(lVar26 + -0x70 + lVar30 * 4);
                    *puVar2 = *(undefined8 *)(pfVar27 + lVar30 + -0x1c);
                    puVar2[1] = uVar17;
                    puVar2 = (undefined8 *)(lVar26 + -0x60 + lVar30 * 4);
                    *puVar2 = uVar18;
                    puVar2[1] = uVar19;
                    uVar17 = *(undefined8 *)(pfVar27 + lVar30 + -0x14 + 2);
                    uVar18 = *(undefined8 *)(pfVar27 + lVar30 + -0x10);
                    uVar19 = *(undefined8 *)(pfVar27 + lVar30 + -0x10 + 2);
                    puVar2 = (undefined8 *)(lVar26 + -0x50 + lVar30 * 4);
                    *puVar2 = *(undefined8 *)(pfVar27 + lVar30 + -0x14);
                    puVar2[1] = uVar17;
                    puVar2 = (undefined8 *)(lVar26 + -0x40 + lVar30 * 4);
                    *puVar2 = uVar18;
                    puVar2[1] = uVar19;
                    uVar17 = *(undefined8 *)(pfVar27 + lVar30 + -0xc + 2);
                    uVar18 = *(undefined8 *)(pfVar27 + lVar30 + -8);
                    uVar19 = *(undefined8 *)(pfVar27 + lVar30 + -8 + 2);
                    puVar2 = (undefined8 *)(lVar26 + -0x30 + lVar30 * 4);
                    *puVar2 = *(undefined8 *)(pfVar27 + lVar30 + -0xc);
                    puVar2[1] = uVar17;
                    puVar2 = (undefined8 *)(lVar26 + -0x20 + lVar30 * 4);
                    *puVar2 = uVar18;
                    puVar2[1] = uVar19;
                    pfVar3 = pfVar27 + lVar30 + -4;
                    fVar10 = pfVar3[1];
                    fVar11 = pfVar3[2];
                    fVar12 = pfVar3[3];
                    pfVar4 = pfVar27 + lVar30;
                    fVar13 = *pfVar4;
                    fVar14 = pfVar4[1];
                    fVar15 = pfVar4[2];
                    fVar16 = pfVar4[3];
                    pfVar4 = (float *)(lVar26 + -0x10 + lVar30 * 4);
                    *pfVar4 = *pfVar3;
                    pfVar4[1] = fVar10;
                    pfVar4[2] = fVar11;
                    pfVar4[3] = fVar12;
                    pfVar4 = (float *)(lVar26 + lVar30 * 4);
                    *pfVar4 = fVar13;
                    pfVar4[1] = fVar14;
                    pfVar4[2] = fVar15;
                    pfVar4[3] = fVar16;
                    lVar30 = lVar30 + 0x20;
                    lVar33 = lVar33 + 4;
                  } while (lVar33 != 0);
                }
                if (uVar40 != 0) {
                  lVar33 = local_38 + lVar30 * 4;
                  lVar36 = 0;
                  do {
                    puVar5 = (undefined4 *)((longlong)local_50 + lVar36 + lVar30 * 4 + -0x10);
                    uVar46 = puVar5[1];
                    uVar47 = puVar5[2];
                    uVar48 = puVar5[3];
                    puVar6 = (undefined4 *)((longlong)local_50 + lVar36 + lVar30 * 4);
                    uVar49 = *puVar6;
                    uVar42 = puVar6[1];
                    uVar43 = puVar6[2];
                    uVar44 = puVar6[3];
                    puVar6 = (undefined4 *)(lVar33 + -0x10 + lVar36);
                    *puVar6 = *puVar5;
                    puVar6[1] = uVar46;
                    puVar6[2] = uVar47;
                    puVar6[3] = uVar48;
                    puVar6 = (undefined4 *)(lVar33 + lVar36);
                    *puVar6 = uVar49;
                    puVar6[1] = uVar42;
                    puVar6[2] = uVar43;
                    puVar6[3] = uVar44;
                    lVar36 = lVar36 + 0x20;
                  } while (uVar40 << 5 != lVar36);
                }
              }
              uVar41 = uVar41 + 1;
              lVar26 = lVar26 + lVar38;
              pfVar27 = pfVar27 + uVar24;
              local_38 = local_38 + lVar38;
              local_50 = local_50 + uVar24;
              lVar39 = lVar39 + lVar38;
              pfVar23 = pfVar23 + uVar24;
              local_40 = local_40 + lVar38;
              pfVar31 = pfVar31 + uVar24;
            } while (uVar41 != param_2);
          }
          else {
            uVar32 = (uVar28 - 8 >> 3) + 1;
            uVar40 = (ulonglong)((uint)uVar32 & 3);
            lVar26 = lVar9 + 0x70;
            lVar39 = uVar24 * 4;
            pfVar27 = unaff_RSI + 0x1c;
            local_38 = lVar9 + 0x10;
            pfVar23 = unaff_RSI + 4;
            uVar41 = 0;
            pfVar31 = unaff_RSI;
            lVar38 = lVar9;
            do {
              lVar33 = uVar41 * uVar24;
              if (((float *)(lVar9 + lVar33 * 4) < unaff_RSI + lVar33 + uVar24) &&
                 (unaff_RSI + lVar33 < (float *)(lVar9 + (lVar33 + uVar24) * 4))) {
                uVar29 = 0;
              }
              else {
                if (uVar28 - 8 < 0x18) {
                  lVar30 = 0;
                }
                else {
                  lVar30 = 0;
                  lVar33 = -(uVar32 & 0xfffffffffffffffc);
                  do {
                    uVar17 = *(undefined8 *)(pfVar27 + lVar30 + -0x1c + 2);
                    uVar18 = *(undefined8 *)(pfVar27 + lVar30 + -0x18);
                    uVar19 = *(undefined8 *)(pfVar27 + lVar30 + -0x18 + 2);
                    puVar2 = (undefined8 *)(lVar26 + -0x70 + lVar30 * 4);
                    *puVar2 = *(undefined8 *)(pfVar27 + lVar30 + -0x1c);
                    puVar2[1] = uVar17;
                    puVar2 = (undefined8 *)(lVar26 + -0x60 + lVar30 * 4);
                    *puVar2 = uVar18;
                    puVar2[1] = uVar19;
                    uVar17 = *(undefined8 *)(pfVar27 + lVar30 + -0x14 + 2);
                    uVar18 = *(undefined8 *)(pfVar27 + lVar30 + -0x10);
                    uVar19 = *(undefined8 *)(pfVar27 + lVar30 + -0x10 + 2);
                    puVar2 = (undefined8 *)(lVar26 + -0x50 + lVar30 * 4);
                    *puVar2 = *(undefined8 *)(pfVar27 + lVar30 + -0x14);
                    puVar2[1] = uVar17;
                    puVar2 = (undefined8 *)(lVar26 + -0x40 + lVar30 * 4);
                    *puVar2 = uVar18;
                    puVar2[1] = uVar19;
                    uVar17 = *(undefined8 *)(pfVar27 + lVar30 + -0xc + 2);
                    uVar18 = *(undefined8 *)(pfVar27 + lVar30 + -8);
                    uVar19 = *(undefined8 *)(pfVar27 + lVar30 + -8 + 2);
                    puVar2 = (undefined8 *)(lVar26 + -0x30 + lVar30 * 4);
                    *puVar2 = *(undefined8 *)(pfVar27 + lVar30 + -0xc);
                    puVar2[1] = uVar17;
                    puVar2 = (undefined8 *)(lVar26 + -0x20 + lVar30 * 4);
                    *puVar2 = uVar18;
                    puVar2[1] = uVar19;
                    pfVar3 = pfVar27 + lVar30 + -4;
                    fVar10 = pfVar3[1];
                    fVar11 = pfVar3[2];
                    fVar12 = pfVar3[3];
                    pfVar4 = pfVar27 + lVar30;
                    fVar13 = *pfVar4;
                    fVar14 = pfVar4[1];
                    fVar15 = pfVar4[2];
                    fVar16 = pfVar4[3];
                    pfVar4 = (float *)(lVar26 + -0x10 + lVar30 * 4);
                    *pfVar4 = *pfVar3;
                    pfVar4[1] = fVar10;
                    pfVar4[2] = fVar11;
                    pfVar4[3] = fVar12;
                    pfVar4 = (float *)(lVar26 + lVar30 * 4);
                    *pfVar4 = fVar13;
                    pfVar4[1] = fVar14;
                    pfVar4[2] = fVar15;
                    pfVar4[3] = fVar16;
                    lVar30 = lVar30 + 0x20;
                    lVar33 = lVar33 + 4;
                  } while (lVar33 != 0);
                }
                uVar29 = uVar28;
                if (uVar40 != 0) {
                  lVar33 = local_38 + lVar30 * 4;
                  lVar36 = 0;
                  do {
                    puVar5 = (undefined4 *)((longlong)pfVar23 + lVar36 + lVar30 * 4 + -0x10);
                    uVar46 = puVar5[1];
                    uVar47 = puVar5[2];
                    uVar48 = puVar5[3];
                    puVar6 = (undefined4 *)((longlong)pfVar23 + lVar36 + lVar30 * 4);
                    uVar49 = *puVar6;
                    uVar42 = puVar6[1];
                    uVar43 = puVar6[2];
                    uVar44 = puVar6[3];
                    puVar6 = (undefined4 *)(lVar33 + -0x10 + lVar36);
                    *puVar6 = *puVar5;
                    puVar6[1] = uVar46;
                    puVar6[2] = uVar47;
                    puVar6[3] = uVar48;
                    puVar6 = (undefined4 *)(lVar33 + lVar36);
                    *puVar6 = uVar49;
                    puVar6[1] = uVar42;
                    puVar6[2] = uVar43;
                    puVar6[3] = uVar44;
                    lVar36 = lVar36 + 0x20;
                  } while (uVar40 << 5 != lVar36);
                }
              }
              uVar37 = ~uVar29;
              for (uVar35 = (ulonglong)(uVar7 & 3); uVar35 != 0; uVar35 = uVar35 - 1) {
                *(float *)(lVar38 + uVar29 * 4) = pfVar31[uVar29];
                uVar29 = uVar29 + 1;
              }
              if (2 < uVar37 + uVar24) {
                do {
                  *(float *)(lVar38 + uVar29 * 4) = pfVar31[uVar29];
                  *(float *)(lVar38 + 4 + uVar29 * 4) = pfVar31[uVar29 + 1];
                  *(float *)(lVar38 + 8 + uVar29 * 4) = pfVar31[uVar29 + 2];
                  *(float *)(lVar38 + 0xc + uVar29 * 4) = pfVar31[uVar29 + 3];
                  uVar29 = uVar29 + 4;
                } while (uVar24 != uVar29);
              }
              uVar41 = uVar41 + 1;
              lVar26 = lVar26 + lVar39;
              pfVar27 = pfVar27 + uVar24;
              local_38 = local_38 + lVar39;
              pfVar23 = pfVar23 + uVar24;
              lVar38 = lVar38 + lVar39;
              pfVar31 = pfVar31 + uVar24;
            } while (uVar41 != param_2);
          }
        }
      }
    }
    FUN_00b2a160();
  }
  uVar24 = (ulonglong)unaff_RDI[1];
  if ((uVar24 != 0) && (param_2 != 0)) {
    lVar9 = *(longlong *)(unaff_RDI + 4);
    lVar26 = *(longlong *)(lVar9 + 0x20);
    lVar34 = lVar34 + lVar25 * 8;
    uVar28 = 0;
    do {
      if (*(int *)(lVar26 + uVar28 * 4) != 0) {
        lVar25 = *(longlong *)(lVar9 + 0x80);
        pdVar1 = (double *)(lVar25 + uVar28 * 0x28);
        puVar6 = (undefined4 *)(lVar25 + 8 + uVar28 * 0x28);
        uVar46 = *puVar6;
        uVar47 = puVar6[1];
        uVar48 = puVar6[2];
        uVar49 = puVar6[3];
        puVar6 = (undefined4 *)(lVar25 + 0x18 + uVar28 * 0x28);
        uVar42 = *puVar6;
        uVar43 = puVar6[1];
        uVar44 = puVar6[2];
        uVar45 = puVar6[3];
        lVar25 = 0;
        uVar32 = param_2;
        do {
          dVar50 = ((((double)*(float *)((longlong)unaff_RSI + lVar25) -
                     *(double *)(lVar9 + 0x60) * (double)CONCAT44(uVar47,uVar46)) -
                    *(double *)(lVar9 + 0x68) * (double)CONCAT44(uVar49,uVar48)) -
                   *(double *)(lVar9 + 0x70) * (double)CONCAT44(uVar43,uVar42)) -
                   *(double *)(lVar9 + 0x78) * (double)CONCAT44(uVar45,uVar44);
          *pdVar1 = dVar50;
          *(double *)(lVar34 + lVar25 * 2) =
               (double)CONCAT44(uVar45,uVar44) * *(double *)(lVar9 + 0x50) +
               *(double *)(lVar9 + 0x48) * (double)CONCAT44(uVar43,uVar42) +
               (double)CONCAT44(uVar49,uVar48) * *(double *)(lVar9 + 0x40) +
               *(double *)(lVar9 + 0x38) * (double)CONCAT44(uVar47,uVar46) +
               dVar50 * *(double *)(lVar9 + 0x30);
          uVar42 = *(undefined4 *)(pdVar1 + 2);
          uVar43 = *(undefined4 *)((longlong)pdVar1 + 0x14);
          uVar44 = *(undefined4 *)(pdVar1 + 3);
          uVar45 = *(undefined4 *)((longlong)pdVar1 + 0x1c);
          *(undefined4 *)(pdVar1 + 3) = uVar42;
          *(undefined4 *)((longlong)pdVar1 + 0x1c) = uVar43;
          *(undefined4 *)(pdVar1 + 4) = uVar44;
          *(undefined4 *)((longlong)pdVar1 + 0x24) = uVar45;
          uVar46 = *(undefined4 *)pdVar1;
          uVar47 = *(undefined4 *)((longlong)pdVar1 + 4);
          uVar48 = *(undefined4 *)(pdVar1 + 1);
          uVar49 = *(undefined4 *)((longlong)pdVar1 + 0xc);
          *(undefined4 *)(pdVar1 + 1) = uVar46;
          *(undefined4 *)((longlong)pdVar1 + 0xc) = uVar47;
          *(undefined4 *)(pdVar1 + 2) = uVar48;
          *(undefined4 *)((longlong)pdVar1 + 0x14) = uVar49;
          lVar25 = lVar25 + uVar24 * 4;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
      uVar28 = uVar28 + 1;
      lVar34 = lVar34 + 8;
      unaff_RSI = unaff_RSI + 1;
    } while (uVar28 != uVar24);
  }
  MXCSR = uVar22;
  return;
}



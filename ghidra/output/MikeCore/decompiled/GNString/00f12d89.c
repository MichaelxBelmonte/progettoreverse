// Function: FUN_00f12d89
// Address: 00f12d89
// Size: 5515 bytes
// Class: GNString


longlong FUN_00f12d89(ulonglong *param_1,uint *param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 uVar17;
  char cVar18;
  uint uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  ulonglong *puVar30;
  ulonglong *puVar31;
  int iVar32;
  ulonglong *puVar33;
  ulonglong *puVar34;
  uint uVar35;
  longlong *unaff_RSI;
  ulonglong *puVar36;
  longlong lVar37;
  longlong lVar38;
  longlong unaff_RDI;
  int iVar39;
  ulonglong uVar40;
  ulonglong *puVar41;
  longlong lVar42;
  ulonglong *puVar43;
  ulonglong *puVar44;
  int iVar45;
  ulonglong *puVar46;
  int iVar47;
  ulonglong uVar48;
  uint uVar49;
  uint uVar50;
  ulonglong *puVar51;
  int *local_38;
  
  puVar5 = (ulonglong *)((longlong)param_1 + param_3);
  lVar23 = *(longlong *)(unaff_RDI + 8);
  uVar19 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  iVar45 = (int)lVar23;
  iVar32 = (int)puVar5 - iVar45;
  uVar12 = *(uint *)(unaff_RDI + 0x1c);
  uVar16 = iVar32 - uVar19;
  if (iVar32 - uVar12 <= uVar19) {
    uVar16 = uVar12;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar16 = uVar12;
  }
  uVar12 = *(uint *)(unaff_RDI + 0x18);
  if (uVar12 <= uVar16) {
    lVar23 = _ZSTD_compressBlock_doubleFast(param_1);
    return lVar23;
  }
  uVar48 = (ulonglong)uVar12;
  puVar43 = (ulonglong *)((longlong)param_1 + param_3 + -8);
  uVar19 = *param_2;
  uVar27 = param_2[1];
  if (param_1 < puVar43) {
    lVar13 = *(longlong *)(unaff_RDI + 0x10);
    puVar6 = (ulonglong *)(lVar23 + uVar48);
    puVar20 = (ulonglong *)((ulonglong)uVar16 + lVar13);
    puVar7 = (ulonglong *)(lVar13 + uVar48);
    lVar14 = *(longlong *)(unaff_RDI + 0x70);
    lVar15 = *(longlong *)(unaff_RDI + 0x80);
    cVar18 = (char)*(undefined4 *)(unaff_RDI + 0x104);
    bVar24 = 0x40 - cVar18;
    bVar25 = 0x20 - cVar18;
    bVar26 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
    puVar1 = (ulonglong *)((longlong)puVar5 - 7);
    puVar2 = (ulonglong *)((longlong)puVar5 - 3);
    puVar3 = (ulonglong *)((longlong)puVar5 - 1);
    puVar4 = puVar5 + -4;
    lVar10 = uVar48 + 8 + lVar23;
    puVar46 = param_1;
    do {
      iVar32 = param_4 + -5;
      switch(iVar32) {
      case 0:
        uVar48 = *puVar46;
        lVar37 = -0x30e4432345000000;
        break;
      case 1:
        uVar48 = *puVar46;
        lVar37 = -0x30e4432340650000;
        break;
      case 2:
        uVar48 = *puVar46;
        lVar37 = -0x30e44323405a9d00;
        break;
      case 3:
        uVar48 = *puVar46;
        uVar22 = uVar48 * -0x30e44323485a9b9d;
        goto LAB_00f12f86;
      default:
        uVar22 = (ulonglong)((uint)((int)*puVar46 * -0x61c8864f) >> (bVar25 & 0x1f));
        uVar48 = *puVar46;
        goto LAB_00f12f8d;
      }
      uVar22 = lVar37 * uVar48;
LAB_00f12f86:
      uVar22 = uVar22 >> (bVar24 & 0x3f);
LAB_00f12f8d:
      uVar50 = *(uint *)(lVar15 + uVar22 * 4);
      uVar29 = (ulonglong)uVar50;
      lVar37 = lVar23;
      if (uVar50 < uVar12) {
        lVar37 = lVar13;
      }
      uVar21 = uVar48 * -0x30e44323485a9b9d >> (bVar26 & 0x3f);
      uVar35 = *(uint *)(lVar14 + uVar21 * 4);
      uVar40 = (ulonglong)uVar35;
      lVar38 = lVar23;
      if (uVar35 < uVar12) {
        lVar38 = lVar13;
      }
      iVar47 = (int)puVar46 - iVar45;
      iVar39 = iVar47 + 1;
      uVar49 = iVar39 - uVar19;
      lVar42 = lVar23;
      if (uVar49 < uVar12) {
        lVar42 = lVar13;
      }
      *(int *)(lVar14 + uVar21 * 4) = iVar47;
      *(int *)(lVar15 + uVar22 * 4) = iVar47;
      if (((iVar39 - uVar16 < uVar19) || ((uVar12 - 1) - uVar49 < 3)) ||
         (piVar8 = (int *)(lVar42 + (ulonglong)uVar49), *piVar8 != *(int *)((longlong)puVar46 + 1)))
      {
        puVar51 = puVar46;
        if ((uVar16 < uVar35) && (puVar30 = (ulonglong *)(lVar38 + uVar40), *puVar30 == uVar48)) {
          puVar31 = puVar6;
          puVar44 = puVar5;
          if (uVar35 < uVar12) {
            puVar31 = puVar20;
            puVar44 = puVar7;
          }
          puVar28 = puVar46 + 1;
          puVar34 = puVar30 + 1;
          puVar33 = (ulonglong *)((longlong)puVar46 + (longlong)puVar44 + (8 - (longlong)puVar34));
          if (puVar5 <= puVar33) {
            puVar33 = puVar5;
          }
          puVar36 = puVar34;
          puVar41 = puVar28;
          if (puVar28 < (ulonglong *)((longlong)puVar33 - 7U)) {
            uVar48 = *puVar28 ^ *puVar34;
            if (uVar48 == 0) {
              lVar37 = 0;
              do {
                if ((ulonglong *)((longlong)puVar33 - 7U) <=
                    (ulonglong *)((longlong)puVar46 + lVar37 + 0x10)) {
                  puVar36 = (ulonglong *)((longlong)puVar30 + lVar37 + 0x10);
                  puVar41 = (ulonglong *)((longlong)puVar46 + lVar37 + 0x10);
                  goto LAB_00f134c1;
                }
                lVar42 = lVar37 + 8;
                uVar48 = *(ulonglong *)((longlong)puVar46 + lVar37 + 0x10) ^
                         *(ulonglong *)(lVar38 + uVar40 + 0x10 + lVar37);
                lVar37 = lVar42;
              } while (uVar48 == 0);
              uVar22 = 0;
              if (uVar48 != 0) {
                for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                }
              }
              uVar22 = (uVar22 >> 3) + lVar42;
            }
            else {
              uVar22 = 0;
              if (uVar48 != 0) {
                for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                }
              }
              uVar22 = uVar22 >> 3;
            }
          }
          else {
LAB_00f134c1:
            if ((puVar41 < (ulonglong *)((longlong)puVar33 - 3U)) &&
               ((int)*puVar36 == (int)*puVar41)) {
              puVar41 = (ulonglong *)((longlong)puVar41 + 4);
              puVar36 = (ulonglong *)((longlong)puVar36 + 4);
            }
            if ((puVar41 < (ulonglong *)((longlong)puVar33 - 1U)) &&
               ((short)*puVar36 == (short)*puVar41)) {
              puVar41 = (ulonglong *)((longlong)puVar41 + 2);
              puVar36 = (ulonglong *)((longlong)puVar36 + 2);
            }
            if (puVar41 < puVar33) {
              puVar41 = (ulonglong *)
                        ((longlong)puVar41 + (ulonglong)((char)*puVar36 == (char)*puVar41));
            }
            uVar22 = (longlong)puVar41 - (longlong)puVar28;
          }
          if ((ulonglong *)((longlong)puVar34 + uVar22) == puVar44) {
            puVar28 = (ulonglong *)((longlong)puVar28 + uVar22);
            puVar34 = puVar28;
            puVar44 = puVar6;
            if (puVar28 < puVar1) {
              uVar48 = *puVar28 ^ *puVar6;
              if (uVar48 == 0) {
                lVar37 = 0;
                do {
                  if (puVar1 <= (ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0x10)) {
                    puVar44 = (ulonglong *)(lVar10 + lVar37);
                    puVar34 = (ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0x10);
                    goto LAB_00f13848;
                  }
                  lVar42 = lVar37 + 8;
                  uVar48 = *(ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0x10) ^
                           *(ulonglong *)(lVar10 + lVar37);
                  lVar37 = lVar42;
                } while (uVar48 == 0);
                uVar29 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar29 = (uVar29 >> 3) + lVar42;
              }
              else {
                uVar29 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar29 = uVar29 >> 3;
              }
            }
            else {
LAB_00f13848:
              if ((puVar34 < puVar2) && ((int)*puVar44 == (int)*puVar34)) {
                puVar34 = (ulonglong *)((longlong)puVar34 + 4);
                puVar44 = (ulonglong *)((longlong)puVar44 + 4);
              }
              if ((puVar34 < puVar3) && ((short)*puVar44 == (short)*puVar34)) {
                puVar34 = (ulonglong *)((longlong)puVar34 + 2);
                puVar44 = (ulonglong *)((longlong)puVar44 + 2);
              }
              if (puVar34 < puVar5) {
                puVar34 = (ulonglong *)
                          ((longlong)puVar34 + (ulonglong)((char)*puVar44 == (char)*puVar34));
              }
              uVar29 = (longlong)puVar34 - (longlong)puVar28;
            }
            uVar22 = uVar22 + uVar29;
          }
          lVar42 = uVar22 + 8;
          uVar35 = iVar47 - uVar35;
          if ((puVar31 < puVar30) && (param_1 < puVar46)) {
            puVar30 = (ulonglong *)(lVar38 + uVar40);
            do {
              puVar44 = (ulonglong *)((longlong)puVar46 + -1);
              puVar30 = (ulonglong *)((longlong)puVar30 + -1);
              puVar51 = puVar46;
              if ((*(char *)puVar44 != *(char *)puVar30) ||
                 (lVar42 = lVar42 + 1, puVar51 = puVar44, puVar30 <= puVar31)) break;
              puVar46 = puVar44;
            } while (param_1 < puVar44);
          }
          uVar48 = (longlong)puVar51 - (longlong)param_1;
          if (puVar4 < puVar51) {
            puVar30 = (ulonglong *)unaff_RSI[3];
            puVar44 = param_1;
            puVar46 = puVar30;
            if (param_1 <= puVar4) {
              puVar46 = (ulonglong *)((longlong)puVar30 + ((longlong)puVar4 - (longlong)param_1));
              uVar22 = param_1[1];
              *puVar30 = *param_1;
              puVar30[1] = uVar22;
              puVar44 = puVar4;
              if (0x10 < (longlong)puVar4 - (longlong)param_1) {
                lVar37 = 0x10;
                do {
                  uVar17 = ((undefined8 *)((longlong)param_1 + lVar37))[1];
                  puVar9 = (undefined8 *)((longlong)puVar30 + lVar37);
                  *puVar9 = *(undefined8 *)((longlong)param_1 + lVar37);
                  puVar9[1] = uVar17;
                  puVar11 = (undefined8 *)((longlong)param_1 + lVar37 + 0x10);
                  uVar17 = puVar11[1];
                  puVar9[2] = *puVar11;
                  puVar9[3] = uVar17;
                  lVar37 = lVar37 + 0x20;
                } while (puVar9 + 4 < puVar46);
              }
            }
            if (puVar44 < puVar51) {
              lVar37 = 0;
              do {
                *(undefined1 *)((longlong)puVar46 + lVar37) =
                     *(undefined1 *)((longlong)puVar44 + lVar37);
                lVar37 = lVar37 + 1;
              } while ((longlong)puVar51 - (longlong)puVar44 != lVar37);
            }
LAB_00f139c7:
            unaff_RSI[3] = unaff_RSI[3] + uVar48;
            if (0xffff < uVar48) {
              *(undefined4 *)(unaff_RSI + 9) = 1;
              *(int *)((longlong)unaff_RSI + 0x4c) =
                   (int)((ulonglong)(unaff_RSI[1] - *unaff_RSI) >> 3);
            }
          }
          else {
            puVar46 = (ulonglong *)unaff_RSI[3];
            uVar22 = param_1[1];
            *puVar46 = *param_1;
            puVar46[1] = uVar22;
            lVar37 = unaff_RSI[3];
            if (0x10 < uVar48) {
              uVar22 = param_1[3];
              *(ulonglong *)(lVar37 + 0x10) = param_1[2];
              *(ulonglong *)(lVar37 + 0x18) = uVar22;
              if (0x20 < (longlong)uVar48) {
                lVar38 = 0;
                do {
                  puVar11 = (undefined8 *)((longlong)param_1 + lVar38 + 0x20);
                  uVar17 = puVar11[1];
                  puVar9 = (undefined8 *)(lVar37 + 0x20 + lVar38);
                  *puVar9 = *puVar11;
                  puVar9[1] = uVar17;
                  puVar11 = (undefined8 *)((longlong)param_1 + lVar38 + 0x30);
                  uVar17 = puVar11[1];
                  puVar9[2] = *puVar11;
                  puVar9[3] = uVar17;
                  lVar38 = lVar38 + 0x20;
                } while (puVar9 + 4 < (undefined8 *)(lVar37 + uVar48));
              }
              goto LAB_00f139c7;
            }
            unaff_RSI[3] = lVar37 + uVar48;
          }
          local_38 = (int *)unaff_RSI[1];
          *(short *)(local_38 + 1) = (short)uVar48;
          *local_38 = uVar35 + 3;
LAB_00f13c4b:
          uVar48 = lVar42 - 3;
          uVar27 = uVar19;
          goto LAB_00f13c4e;
        }
        if ((uVar16 < uVar50) &&
           (puVar30 = (ulonglong *)(lVar37 + uVar29), (int)*puVar30 == (int)*puVar46)) {
          uVar48 = *(ulonglong *)((longlong)puVar46 + 1);
          uVar22 = uVar48 * -0x30e44323485a9b9d >> (bVar26 & 0x3f);
          uVar35 = *(uint *)(lVar14 + uVar22 * 4);
          uVar21 = (ulonglong)uVar35;
          lVar38 = lVar23;
          if (uVar35 < uVar12) {
            lVar38 = lVar13;
          }
          *(int *)(lVar14 + uVar22 * 4) = iVar39;
          if ((uVar16 < uVar35) && (puVar44 = (ulonglong *)(lVar38 + uVar21), *puVar44 == uVar48)) {
            puVar30 = puVar6;
            puVar51 = puVar5;
            if (uVar35 < uVar12) {
              puVar30 = puVar20;
              puVar51 = puVar7;
            }
            puVar31 = (ulonglong *)((longlong)puVar46 + 9);
            puVar28 = puVar44 + 1;
            puVar34 = (ulonglong *)((longlong)puVar46 + (longlong)puVar51 + (9 - (longlong)puVar28))
            ;
            if (puVar5 <= puVar34) {
              puVar34 = puVar5;
            }
            puVar33 = puVar28;
            puVar36 = puVar31;
            if (puVar31 < (ulonglong *)((longlong)puVar34 - 7U)) {
              uVar48 = *puVar31 ^ *puVar28;
              if (uVar48 == 0) {
                lVar37 = 0;
                do {
                  if ((ulonglong *)((longlong)puVar34 - 7U) <=
                      (ulonglong *)((longlong)puVar46 + lVar37 + 0x11)) {
                    puVar33 = (ulonglong *)((longlong)puVar44 + lVar37 + 0x10);
                    puVar36 = (ulonglong *)((longlong)puVar46 + lVar37 + 0x11);
                    goto LAB_00f1413c;
                  }
                  lVar42 = lVar37 + 8;
                  uVar48 = *(ulonglong *)((longlong)puVar46 + lVar37 + 0x11) ^
                           *(ulonglong *)(lVar38 + uVar21 + 0x10 + lVar37);
                  lVar37 = lVar42;
                } while (uVar48 == 0);
                uVar22 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar22 = (uVar22 >> 3) + lVar42;
              }
              else {
                uVar22 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar22 = uVar22 >> 3;
              }
            }
            else {
LAB_00f1413c:
              if ((puVar36 < (ulonglong *)((longlong)puVar34 - 3U)) &&
                 ((int)*puVar33 == (int)*puVar36)) {
                puVar36 = (ulonglong *)((longlong)puVar36 + 4);
                puVar33 = (ulonglong *)((longlong)puVar33 + 4);
              }
              if ((puVar36 < (ulonglong *)((longlong)puVar34 - 1U)) &&
                 ((short)*puVar33 == (short)*puVar36)) {
                puVar36 = (ulonglong *)((longlong)puVar36 + 2);
                puVar33 = (ulonglong *)((longlong)puVar33 + 2);
              }
              if (puVar36 < puVar34) {
                puVar36 = (ulonglong *)
                          ((longlong)puVar36 + (ulonglong)((char)*puVar33 == (char)*puVar36));
              }
              uVar22 = (longlong)puVar36 - (longlong)puVar31;
            }
            if ((ulonglong *)((longlong)puVar28 + uVar22) == puVar51) {
              puVar31 = (ulonglong *)((longlong)puVar31 + uVar22);
              puVar28 = puVar31;
              puVar51 = puVar6;
              if (puVar31 < puVar1) {
                uVar48 = *puVar31 ^ *puVar6;
                if (uVar48 == 0) {
                  lVar37 = 0;
                  do {
                    if (puVar1 <= (ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0x11)) {
                      puVar51 = (ulonglong *)(lVar10 + lVar37);
                      puVar28 = (ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0x11);
                      goto LAB_00f14216;
                    }
                    lVar42 = lVar37 + 8;
                    uVar48 = *(ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0x11) ^
                             *(ulonglong *)(lVar10 + lVar37);
                    lVar37 = lVar42;
                  } while (uVar48 == 0);
                  uVar29 = 0;
                  if (uVar48 != 0) {
                    for (; (uVar48 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                    }
                  }
                  uVar29 = (uVar29 >> 3) + lVar42;
                }
                else {
                  uVar29 = 0;
                  if (uVar48 != 0) {
                    for (; (uVar48 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                    }
                  }
                  uVar29 = uVar29 >> 3;
                }
              }
              else {
LAB_00f14216:
                if ((puVar28 < puVar2) && ((int)*puVar51 == (int)*puVar28)) {
                  puVar28 = (ulonglong *)((longlong)puVar28 + 4);
                  puVar51 = (ulonglong *)((longlong)puVar51 + 4);
                }
                if ((puVar28 < puVar3) && ((short)*puVar51 == (short)*puVar28)) {
                  puVar28 = (ulonglong *)((longlong)puVar28 + 2);
                  puVar51 = (ulonglong *)((longlong)puVar51 + 2);
                }
                if (puVar28 < puVar5) {
                  puVar28 = (ulonglong *)
                            ((longlong)puVar28 + (ulonglong)((char)*puVar51 == (char)*puVar28));
                }
                uVar29 = (longlong)puVar28 - (longlong)puVar31;
              }
              uVar22 = uVar22 + uVar29;
            }
            puVar51 = (ulonglong *)((longlong)puVar46 + 1);
            lVar42 = uVar22 + 8;
            uVar35 = iVar39 - uVar35;
            if ((puVar30 < puVar44) && (param_1 < puVar51)) {
              puVar44 = (ulonglong *)(lVar38 + uVar21);
              while (puVar51 = puVar46, puVar44 = (ulonglong *)((longlong)puVar44 + -1),
                    (char)*puVar51 == *(char *)puVar44) {
                lVar42 = lVar42 + 1;
                if ((puVar44 <= puVar30) ||
                   (puVar46 = (ulonglong *)((longlong)puVar51 + -1), puVar51 <= param_1))
                goto LAB_00f13b26;
              }
              puVar51 = (ulonglong *)((longlong)puVar51 + 1);
            }
          }
          else {
            puVar31 = puVar6;
            puVar44 = puVar5;
            if (uVar50 < uVar12) {
              puVar31 = puVar20;
              puVar44 = puVar7;
            }
            puVar28 = (ulonglong *)((longlong)puVar46 + 4);
            puVar34 = (ulonglong *)((longlong)puVar30 + 4);
            puVar33 = (ulonglong *)((longlong)puVar46 + (longlong)puVar44 + (4 - (longlong)puVar34))
            ;
            if (puVar5 <= puVar33) {
              puVar33 = puVar5;
            }
            puVar36 = puVar34;
            puVar41 = puVar28;
            if (puVar28 < (ulonglong *)((longlong)puVar33 - 7U)) {
              uVar48 = *puVar28 ^ *puVar34;
              if (uVar48 == 0) {
                lVar38 = 0;
                do {
                  if ((ulonglong *)((longlong)puVar33 - 7U) <=
                      (ulonglong *)((longlong)puVar46 + lVar38 + 0xc)) {
                    puVar36 = (ulonglong *)((longlong)puVar30 + lVar38 + 0xc);
                    puVar41 = (ulonglong *)((longlong)puVar46 + lVar38 + 0xc);
                    goto LAB_00f135df;
                  }
                  lVar42 = lVar38 + 8;
                  uVar48 = *(ulonglong *)((longlong)puVar46 + lVar38 + 0xc) ^
                           *(ulonglong *)(lVar37 + uVar29 + 0xc + lVar38);
                  lVar38 = lVar42;
                } while (uVar48 == 0);
                uVar22 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar22 = (uVar22 >> 3) + lVar42;
              }
              else {
                uVar22 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar22 = uVar22 >> 3;
              }
            }
            else {
LAB_00f135df:
              if ((puVar41 < (ulonglong *)((longlong)puVar33 - 3U)) &&
                 ((int)*puVar36 == (int)*puVar41)) {
                puVar41 = (ulonglong *)((longlong)puVar41 + 4);
                puVar36 = (ulonglong *)((longlong)puVar36 + 4);
              }
              if ((puVar41 < (ulonglong *)((longlong)puVar33 - 1U)) &&
                 ((short)*puVar36 == (short)*puVar41)) {
                puVar41 = (ulonglong *)((longlong)puVar41 + 2);
                puVar36 = (ulonglong *)((longlong)puVar36 + 2);
              }
              if (puVar41 < puVar33) {
                puVar41 = (ulonglong *)
                          ((longlong)puVar41 + (ulonglong)((char)*puVar36 == (char)*puVar41));
              }
              uVar22 = (longlong)puVar41 - (longlong)puVar28;
            }
            if ((ulonglong *)((longlong)puVar34 + uVar22) == puVar44) {
              puVar28 = (ulonglong *)((longlong)puVar28 + uVar22);
              puVar34 = puVar28;
              puVar44 = puVar6;
              if (puVar28 < puVar1) {
                uVar48 = *puVar28 ^ *puVar6;
                if (uVar48 == 0) {
                  lVar38 = 0;
                  do {
                    if (puVar1 <= (ulonglong *)((longlong)puVar46 + lVar38 + uVar22 + 0xc)) {
                      puVar44 = (ulonglong *)(lVar10 + lVar38);
                      puVar34 = (ulonglong *)((longlong)puVar46 + lVar38 + uVar22 + 0xc);
                      goto LAB_00f13a74;
                    }
                    lVar42 = lVar38 + 8;
                    uVar48 = *(ulonglong *)((longlong)puVar46 + lVar38 + uVar22 + 0xc) ^
                             *(ulonglong *)(lVar10 + lVar38);
                    lVar38 = lVar42;
                  } while (uVar48 == 0);
                  uVar21 = 0;
                  if (uVar48 != 0) {
                    for (; (uVar48 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                    }
                  }
                  uVar21 = (uVar21 >> 3) + lVar42;
                }
                else {
                  uVar21 = 0;
                  if (uVar48 != 0) {
                    for (; (uVar48 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                    }
                  }
                  uVar21 = uVar21 >> 3;
                }
              }
              else {
LAB_00f13a74:
                if ((puVar34 < puVar2) && ((int)*puVar44 == (int)*puVar34)) {
                  puVar34 = (ulonglong *)((longlong)puVar34 + 4);
                  puVar44 = (ulonglong *)((longlong)puVar44 + 4);
                }
                if ((puVar34 < puVar3) && ((short)*puVar44 == (short)*puVar34)) {
                  puVar34 = (ulonglong *)((longlong)puVar34 + 2);
                  puVar44 = (ulonglong *)((longlong)puVar44 + 2);
                }
                if (puVar34 < puVar5) {
                  puVar34 = (ulonglong *)
                            ((longlong)puVar34 + (ulonglong)((char)*puVar44 == (char)*puVar34));
                }
                uVar21 = (longlong)puVar34 - (longlong)puVar28;
              }
              uVar22 = uVar22 + uVar21;
            }
            lVar42 = uVar22 + 4;
            uVar35 = iVar47 - uVar50;
            if ((puVar31 < puVar30) && (param_1 < puVar46)) {
              puVar30 = (ulonglong *)(lVar37 + uVar29);
              do {
                puVar44 = (ulonglong *)((longlong)puVar46 + -1);
                puVar30 = (ulonglong *)((longlong)puVar30 + -1);
                puVar51 = puVar46;
                if ((*(char *)puVar44 != *(char *)puVar30) ||
                   (lVar42 = lVar42 + 1, puVar51 = puVar44, puVar30 <= puVar31)) break;
                puVar46 = puVar44;
              } while (param_1 < puVar44);
            }
          }
LAB_00f13b26:
          uVar48 = (longlong)puVar51 - (longlong)param_1;
          if (puVar4 < puVar51) {
            puVar30 = (ulonglong *)unaff_RSI[3];
            puVar46 = puVar30;
            puVar44 = param_1;
            if (param_1 <= puVar4) {
              puVar46 = (ulonglong *)((longlong)puVar30 + ((longlong)puVar4 - (longlong)param_1));
              uVar22 = param_1[1];
              *puVar30 = *param_1;
              puVar30[1] = uVar22;
              puVar44 = puVar4;
              if (0x10 < (longlong)puVar4 - (longlong)param_1) {
                lVar37 = 0x10;
                do {
                  uVar17 = ((undefined8 *)((longlong)param_1 + lVar37))[1];
                  puVar9 = (undefined8 *)((longlong)puVar30 + lVar37);
                  *puVar9 = *(undefined8 *)((longlong)param_1 + lVar37);
                  puVar9[1] = uVar17;
                  puVar11 = (undefined8 *)((longlong)param_1 + lVar37 + 0x10);
                  uVar17 = puVar11[1];
                  puVar9[2] = *puVar11;
                  puVar9[3] = uVar17;
                  lVar37 = lVar37 + 0x20;
                } while (puVar9 + 4 < puVar46);
              }
            }
            if (puVar44 < puVar51) {
              lVar37 = 0;
              do {
                *(undefined1 *)((longlong)puVar46 + lVar37) =
                     *(undefined1 *)((longlong)puVar44 + lVar37);
                lVar37 = lVar37 + 1;
              } while ((longlong)puVar51 - (longlong)puVar44 != lVar37);
            }
LAB_00f13c08:
            unaff_RSI[3] = unaff_RSI[3] + uVar48;
            if (0xffff < uVar48) {
              *(undefined4 *)(unaff_RSI + 9) = 1;
              *(int *)((longlong)unaff_RSI + 0x4c) =
                   (int)((ulonglong)(unaff_RSI[1] - *unaff_RSI) >> 3);
            }
          }
          else {
            puVar46 = (ulonglong *)unaff_RSI[3];
            uVar22 = param_1[1];
            *puVar46 = *param_1;
            puVar46[1] = uVar22;
            lVar37 = unaff_RSI[3];
            if (0x10 < uVar48) {
              uVar22 = param_1[3];
              *(ulonglong *)(lVar37 + 0x10) = param_1[2];
              *(ulonglong *)(lVar37 + 0x18) = uVar22;
              if (0x20 < (longlong)uVar48) {
                lVar38 = 0;
                do {
                  puVar11 = (undefined8 *)((longlong)param_1 + lVar38 + 0x20);
                  uVar17 = puVar11[1];
                  puVar9 = (undefined8 *)(lVar37 + 0x20 + lVar38);
                  *puVar9 = *puVar11;
                  puVar9[1] = uVar17;
                  puVar11 = (undefined8 *)((longlong)param_1 + lVar38 + 0x30);
                  uVar17 = puVar11[1];
                  puVar9[2] = *puVar11;
                  puVar9[3] = uVar17;
                  lVar38 = lVar38 + 0x20;
                } while (puVar9 + 4 < (undefined8 *)(lVar37 + uVar48));
              }
              goto LAB_00f13c08;
            }
            unaff_RSI[3] = lVar37 + uVar48;
          }
          local_38 = (int *)unaff_RSI[1];
          *(short *)(local_38 + 1) = (short)uVar48;
          *local_38 = uVar35 + 3;
          goto LAB_00f13c4b;
        }
        puVar46 = (ulonglong *)
                  ((longlong)puVar46 + ((longlong)puVar46 - (longlong)param_1 >> 8) + 1);
      }
      else {
        puVar30 = puVar5;
        if (uVar49 < uVar12) {
          puVar30 = puVar7;
        }
        puVar44 = (ulonglong *)((longlong)puVar46 + 5);
        puVar31 = (ulonglong *)(piVar8 + 1);
        puVar51 = (ulonglong *)((longlong)puVar46 + (longlong)puVar30 + (5 - (longlong)puVar31));
        if (puVar5 <= puVar51) {
          puVar51 = puVar5;
        }
        puVar28 = puVar31;
        puVar34 = puVar44;
        if (puVar44 < (ulonglong *)((longlong)puVar51 - 7U)) {
          uVar22 = *puVar44 ^ *puVar31;
          if (uVar22 == 0) {
            lVar37 = 0;
            do {
              if ((ulonglong *)((longlong)puVar51 - 7U) <=
                  (ulonglong *)((longlong)puVar46 + lVar37 + 0xd)) {
                puVar28 = (ulonglong *)((longlong)piVar8 + lVar37 + 0xc);
                puVar34 = (ulonglong *)((longlong)puVar46 + lVar37 + 0xd);
                goto LAB_00f1339e;
              }
              lVar38 = lVar37 + 8;
              uVar48 = *(ulonglong *)((longlong)puVar46 + lVar37 + 0xd) ^
                       *(ulonglong *)(lVar42 + (ulonglong)uVar49 + 0xc + lVar37);
              lVar37 = lVar38;
            } while (uVar48 == 0);
            uVar22 = 0;
            if (uVar48 != 0) {
              for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
              }
            }
            uVar48 = (uVar22 >> 3) + lVar38;
          }
          else {
            uVar48 = 0;
            if (uVar22 != 0) {
              for (; (uVar22 >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
              }
            }
            uVar48 = uVar48 >> 3;
          }
        }
        else {
LAB_00f1339e:
          if ((puVar34 < (ulonglong *)((longlong)puVar51 - 3U)) && ((int)*puVar28 == (int)*puVar34))
          {
            puVar34 = (ulonglong *)((longlong)puVar34 + 4);
            puVar28 = (ulonglong *)((longlong)puVar28 + 4);
          }
          if ((puVar34 < (ulonglong *)((longlong)puVar51 - 1U)) &&
             ((short)*puVar28 == (short)*puVar34)) {
            puVar34 = (ulonglong *)((longlong)puVar34 + 2);
            puVar28 = (ulonglong *)((longlong)puVar28 + 2);
          }
          if (puVar34 < puVar51) {
            puVar34 = (ulonglong *)
                      ((longlong)puVar34 + (ulonglong)((char)*puVar28 == (char)*puVar34));
          }
          uVar48 = (longlong)puVar34 - (longlong)puVar44;
        }
        puVar51 = (ulonglong *)((longlong)puVar46 + 1);
        if ((ulonglong *)((longlong)puVar31 + uVar48) == puVar30) {
          puVar44 = (ulonglong *)((longlong)puVar44 + uVar48);
          puVar31 = puVar44;
          puVar30 = puVar6;
          if (puVar44 < puVar1) {
            uVar22 = *puVar44 ^ *puVar6;
            if (uVar22 == 0) {
              lVar37 = 0;
              do {
                if (puVar1 <= (ulonglong *)((longlong)puVar46 + lVar37 + uVar48 + 0xd)) {
                  puVar30 = (ulonglong *)(lVar10 + lVar37);
                  puVar31 = (ulonglong *)((longlong)puVar46 + lVar37 + uVar48 + 0xd);
                  goto LAB_00f13686;
                }
                lVar38 = lVar37 + 8;
                uVar22 = *(ulonglong *)((longlong)puVar46 + lVar37 + uVar48 + 0xd) ^
                         *(ulonglong *)(lVar10 + lVar37);
                lVar37 = lVar38;
              } while (uVar22 == 0);
              uVar29 = 0;
              if (uVar22 != 0) {
                for (; (uVar22 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                }
              }
              uVar29 = (uVar29 >> 3) + lVar38;
            }
            else {
              uVar29 = 0;
              if (uVar22 != 0) {
                for (; (uVar22 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                }
              }
              uVar29 = uVar29 >> 3;
            }
          }
          else {
LAB_00f13686:
            if ((puVar31 < puVar2) && ((int)*puVar30 == (int)*puVar31)) {
              puVar31 = (ulonglong *)((longlong)puVar31 + 4);
              puVar30 = (ulonglong *)((longlong)puVar30 + 4);
            }
            if ((puVar31 < puVar3) && ((short)*puVar30 == (short)*puVar31)) {
              puVar31 = (ulonglong *)((longlong)puVar31 + 2);
              puVar30 = (ulonglong *)((longlong)puVar30 + 2);
            }
            if (puVar31 < puVar5) {
              puVar31 = (ulonglong *)
                        ((longlong)puVar31 + (ulonglong)((char)*puVar30 == (char)*puVar31));
            }
            uVar29 = (longlong)puVar31 - (longlong)puVar44;
          }
          uVar48 = uVar48 + uVar29;
        }
        uVar22 = (longlong)puVar51 - (longlong)param_1;
        if (puVar4 < puVar51) {
          puVar30 = (ulonglong *)unaff_RSI[3];
          puVar46 = puVar30;
          puVar44 = param_1;
          if (param_1 <= puVar4) {
            puVar46 = (ulonglong *)((longlong)puVar30 + ((longlong)puVar4 - (longlong)param_1));
            uVar29 = param_1[1];
            *puVar30 = *param_1;
            puVar30[1] = uVar29;
            puVar44 = puVar4;
            if (0x10 < (longlong)puVar4 - (longlong)param_1) {
              lVar37 = 0x10;
              do {
                uVar17 = ((undefined8 *)((longlong)param_1 + lVar37))[1];
                puVar9 = (undefined8 *)((longlong)puVar30 + lVar37);
                *puVar9 = *(undefined8 *)((longlong)param_1 + lVar37);
                puVar9[1] = uVar17;
                puVar11 = (undefined8 *)((longlong)param_1 + lVar37 + 0x10);
                uVar17 = puVar11[1];
                puVar9[2] = *puVar11;
                puVar9[3] = uVar17;
                lVar37 = lVar37 + 0x20;
              } while (puVar9 + 4 < puVar46);
            }
          }
          if (puVar44 < puVar51) {
            lVar37 = 0;
            do {
              *(undefined1 *)((longlong)puVar46 + lVar37) =
                   *(undefined1 *)((longlong)puVar44 + lVar37);
              lVar37 = lVar37 + 1;
            } while ((longlong)puVar51 - (longlong)puVar44 != lVar37);
          }
LAB_00f137a3:
          unaff_RSI[3] = unaff_RSI[3] + uVar22;
          if (0xffff < uVar22) {
            *(undefined4 *)(unaff_RSI + 9) = 1;
            *(int *)((longlong)unaff_RSI + 0x4c) =
                 (int)((ulonglong)(unaff_RSI[1] - *unaff_RSI) >> 3);
          }
        }
        else {
          puVar46 = (ulonglong *)unaff_RSI[3];
          uVar29 = param_1[1];
          *puVar46 = *param_1;
          puVar46[1] = uVar29;
          lVar37 = unaff_RSI[3];
          if (0x10 < uVar22) {
            uVar29 = param_1[3];
            *(ulonglong *)(lVar37 + 0x10) = param_1[2];
            *(ulonglong *)(lVar37 + 0x18) = uVar29;
            if (0x20 < (longlong)uVar22) {
              lVar38 = 0;
              do {
                puVar11 = (undefined8 *)((longlong)param_1 + lVar38 + 0x20);
                uVar17 = puVar11[1];
                puVar9 = (undefined8 *)(lVar37 + 0x20 + lVar38);
                *puVar9 = *puVar11;
                puVar9[1] = uVar17;
                puVar11 = (undefined8 *)((longlong)param_1 + lVar38 + 0x30);
                uVar17 = puVar11[1];
                puVar9[2] = *puVar11;
                puVar9[3] = uVar17;
                lVar38 = lVar38 + 0x20;
              } while (puVar9 + 4 < (undefined8 *)(lVar37 + uVar22));
            }
            goto LAB_00f137a3;
          }
          unaff_RSI[3] = lVar37 + uVar22;
        }
        lVar42 = uVar48 + 4;
        local_38 = (int *)unaff_RSI[1];
        *(short *)(local_38 + 1) = (short)uVar22;
        *local_38 = 1;
        uVar48 = uVar48 + 1;
        uVar35 = uVar19;
LAB_00f13c4e:
        if (0xffff < uVar48) {
          *(undefined4 *)(unaff_RSI + 9) = 2;
          *(int *)((longlong)unaff_RSI + 0x4c) =
               (int)((ulonglong)((longlong)local_38 - *unaff_RSI) >> 3);
        }
        puVar46 = (ulonglong *)(lVar42 + (longlong)puVar51);
        *(short *)((longlong)local_38 + 6) = (short)uVar48;
        local_38 = local_38 + 2;
        unaff_RSI[1] = (longlong)local_38;
        param_1 = puVar46;
        uVar19 = uVar35;
        if (puVar43 < puVar46) goto LAB_00f1410b;
        uVar19 = iVar47 + 2;
        lVar37 = *(longlong *)(lVar23 + (ulonglong)uVar19);
        uVar48 = lVar37 * -0x30e44323485a9b9d;
        *(uint *)(lVar14 + (uVar48 >> (bVar26 & 0x3f)) * 4) = uVar19;
        *(int *)(lVar14 + ((ulonglong)(*(longlong *)((longlong)puVar46 + -2) * -0x30e44323485a9b9d)
                          >> (bVar26 & 0x3f)) * 4) = ((int)puVar46 + -2) - iVar45;
        switch(iVar32) {
        case 0:
          lVar38 = -0x30e4432345000000;
          break;
        case 1:
          lVar38 = -0x30e4432340650000;
          break;
        case 2:
          lVar38 = -0x30e44323405a9d00;
          break;
        case 3:
          *(uint *)(lVar15 + (uVar48 >> (bVar24 & 0x3f)) * 4) = uVar19;
          uVar48 = *(longlong *)((longlong)puVar46 + -1) * -0x30e44323485a9b9d;
          goto LAB_00f13d9f;
        default:
          *(uint *)(lVar15 + (ulonglong)
                             ((uint)(*(int *)(lVar23 + (ulonglong)uVar19) * -0x61c8864f) >>
                             (bVar25 & 0x1f)) * 4) = uVar19;
          uVar48 = (ulonglong)
                   ((uint)(*(int *)((longlong)puVar46 + -1) * -0x61c8864f) >> (bVar25 & 0x1f));
          goto LAB_00f13da2;
        }
        *(uint *)(lVar15 + ((ulonglong)(lVar37 * lVar38) >> (bVar24 & 0x3f)) * 4) = uVar19;
        uVar48 = lVar38 * *(longlong *)((longlong)puVar46 + -1);
LAB_00f13d9f:
        uVar48 = uVar48 >> (bVar24 & 0x3f);
LAB_00f13da2:
        *(int *)(lVar15 + uVar48 * 4) = ((int)puVar46 + -1) - iVar45;
        uVar50 = uVar27;
        do {
          uVar49 = uVar35;
          iVar39 = (int)puVar46 - iVar45;
          uVar35 = iVar39 - uVar50;
          lVar37 = lVar23;
          if (uVar35 < uVar12) {
            lVar37 = lVar13;
          }
          param_1 = puVar46;
          uVar19 = uVar49;
          uVar27 = uVar50;
          if (((iVar39 - uVar16 < uVar50) || ((uVar12 - 1) - uVar35 < 3)) ||
             (piVar8 = (int *)(lVar37 + (ulonglong)uVar35), *piVar8 != (int)*puVar46)) break;
          puVar51 = puVar5;
          if (uVar35 < uVar12) {
            puVar51 = puVar7;
          }
          puVar44 = (ulonglong *)((longlong)puVar46 + 4);
          puVar30 = (ulonglong *)(piVar8 + 1);
          puVar31 = (ulonglong *)((longlong)puVar46 + (longlong)puVar51 + (4 - (longlong)puVar30));
          if (puVar5 <= puVar31) {
            puVar31 = puVar5;
          }
          puVar28 = puVar30;
          puVar34 = puVar44;
          if (puVar44 < (ulonglong *)((longlong)puVar31 - 7U)) {
            uVar48 = *puVar44 ^ *puVar30;
            if (uVar48 == 0) {
              lVar38 = 0;
              do {
                if ((ulonglong *)((longlong)puVar31 - 7U) <=
                    (ulonglong *)((longlong)puVar46 + lVar38 + 0xc)) {
                  puVar28 = (ulonglong *)((longlong)piVar8 + lVar38 + 0xc);
                  puVar34 = (ulonglong *)((longlong)puVar46 + lVar38 + 0xc);
                  goto LAB_00f13eb2;
                }
                lVar42 = lVar38 + 8;
                uVar48 = *(ulonglong *)((longlong)puVar46 + lVar38 + 0xc) ^
                         *(ulonglong *)((ulonglong)uVar35 + lVar37 + 0xc + lVar38);
                lVar38 = lVar42;
              } while (uVar48 == 0);
              uVar22 = 0;
              if (uVar48 != 0) {
                for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                }
              }
              uVar22 = (uVar22 >> 3) + lVar42;
            }
            else {
              uVar22 = 0;
              if (uVar48 != 0) {
                for (; (uVar48 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                }
              }
              uVar22 = uVar22 >> 3;
            }
          }
          else {
LAB_00f13eb2:
            if ((puVar34 < (ulonglong *)((longlong)puVar31 - 3U)) &&
               ((int)*puVar28 == (int)*puVar34)) {
              puVar34 = (ulonglong *)((longlong)puVar34 + 4);
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            }
            if ((puVar34 < (ulonglong *)((longlong)puVar31 - 1U)) &&
               ((short)*puVar28 == (short)*puVar34)) {
              puVar34 = (ulonglong *)((longlong)puVar34 + 2);
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            }
            if (puVar34 < puVar31) {
              puVar34 = (ulonglong *)
                        ((longlong)puVar34 + (ulonglong)((char)*puVar28 == (char)*puVar34));
            }
            uVar22 = (longlong)puVar34 - (longlong)puVar44;
          }
          if ((ulonglong *)((longlong)puVar30 + uVar22) == puVar51) {
            puVar44 = (ulonglong *)((longlong)puVar44 + uVar22);
            puVar30 = puVar44;
            puVar51 = puVar6;
            if (puVar44 < puVar1) {
              uVar48 = *puVar44 ^ *puVar6;
              if (uVar48 == 0) {
                lVar37 = 0;
                do {
                  if (puVar1 <= (ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0xc)) {
                    puVar51 = (ulonglong *)(lVar10 + lVar37);
                    puVar30 = (ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0xc);
                    goto LAB_00f13fb0;
                  }
                  lVar38 = lVar37 + 8;
                  uVar48 = *(ulonglong *)((longlong)puVar46 + lVar37 + uVar22 + 0xc) ^
                           *(ulonglong *)(lVar10 + lVar37);
                  lVar37 = lVar38;
                } while (uVar48 == 0);
                uVar29 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar29 = (uVar29 >> 3) + lVar38;
              }
              else {
                uVar29 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar29 = uVar29 >> 3;
              }
            }
            else {
LAB_00f13fb0:
              if ((puVar30 < puVar2) && ((int)*puVar51 == (int)*puVar30)) {
                puVar30 = (ulonglong *)((longlong)puVar30 + 4);
                puVar51 = (ulonglong *)((longlong)puVar51 + 4);
              }
              if ((puVar30 < puVar3) && ((short)*puVar51 == (short)*puVar30)) {
                puVar30 = (ulonglong *)((longlong)puVar30 + 2);
                puVar51 = (ulonglong *)((longlong)puVar51 + 2);
              }
              if (puVar30 < puVar5) {
                puVar30 = (ulonglong *)
                          ((longlong)puVar30 + (ulonglong)((char)*puVar51 == (char)*puVar30));
              }
              uVar29 = (longlong)puVar30 - (longlong)puVar44;
            }
            uVar22 = uVar22 + uVar29;
          }
          if (puVar46 <= puVar4) {
            puVar51 = (ulonglong *)unaff_RSI[3];
            uVar48 = puVar46[1];
            *puVar51 = *puVar46;
            puVar51[1] = uVar48;
            local_38 = (int *)unaff_RSI[1];
          }
          *(undefined2 *)(local_38 + 1) = 0;
          *local_38 = 1;
          if (0xffff < uVar22 + 1) {
            *(undefined4 *)(unaff_RSI + 9) = 2;
            *(int *)((longlong)unaff_RSI + 0x4c) =
                 (int)((ulonglong)((longlong)local_38 - *unaff_RSI) >> 3);
          }
          *(short *)((longlong)local_38 + 6) = (short)(uVar22 + 1);
          local_38 = local_38 + 2;
          unaff_RSI[1] = (longlong)local_38;
          switch(iVar32) {
          case 0:
            uVar48 = *puVar46;
            lVar37 = -0x30e4432345000000;
            break;
          case 1:
            uVar48 = *puVar46;
            lVar37 = -0x30e4432340650000;
            break;
          case 2:
            uVar48 = *puVar46;
            lVar37 = -0x30e44323405a9d00;
            break;
          case 3:
            uVar48 = *puVar46;
            uVar29 = uVar48 * -0x30e44323485a9b9d;
            goto LAB_00f140c3;
          default:
            uVar29 = (ulonglong)((uint)((int)*puVar46 * -0x61c8864f) >> (bVar25 & 0x1f));
            uVar48 = *puVar46;
            goto LAB_00f140ca;
          }
          uVar29 = lVar37 * uVar48;
LAB_00f140c3:
          uVar29 = uVar29 >> (bVar24 & 0x3f);
LAB_00f140ca:
          *(int *)(lVar15 + uVar29 * 4) = iVar39;
          *(int *)(lVar14 + (uVar48 * -0x30e44323485a9b9d >> (bVar26 & 0x3f)) * 4) = iVar39;
          puVar46 = (ulonglong *)((longlong)puVar46 + uVar22 + 4);
          param_1 = puVar46;
          uVar19 = uVar50;
          uVar27 = uVar49;
          uVar35 = uVar50;
          uVar50 = uVar49;
        } while (puVar46 <= puVar43);
      }
LAB_00f1410b:
    } while (puVar46 < puVar43);
  }
  *param_2 = uVar19;
  param_2[1] = uVar27;
  return (longlong)puVar5 - (longlong)param_1;
}



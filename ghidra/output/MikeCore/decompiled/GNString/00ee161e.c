// Function: FUN_00ee161e
// Address: 00ee161e
// Size: 1337 bytes
// Class: GNString


ulonglong FUN_00ee161e(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  ulonglong *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong *puVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong *puVar31;
  
  bVar3 = *(byte *)(unaff_RDI + 0x104);
  uVar18 = 1 << (bVar3 & 0x1f);
  lVar12 = *(longlong *)(unaff_RDI + 8);
  uVar30 = (int)unaff_RSI - (int)lVar12;
  uVar26 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar9 = *(uint *)(unaff_RDI + 0x1c);
  uVar19 = uVar30 - uVar26;
  if (uVar30 - uVar9 <= uVar26) {
    uVar19 = uVar9;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar19 = uVar9;
  }
  uVar9 = uVar30 - uVar18;
  if (uVar30 < uVar18) {
    uVar9 = 0;
  }
  iVar28 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  uVar26 = *(uint *)(unaff_RDI + 0x2c);
  uVar24 = (ulonglong)uVar26;
  bVar15 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  uVar10 = uVar30;
  if (uVar30 < uVar26) {
    uVar10 = uVar26;
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x80);
  uVar26 = *(uint *)(unaff_RDI + 0x18);
  puVar11 = (ulonglong *)((ulonglong)uVar26 + lVar12);
  puVar6 = *(undefined8 **)(unaff_RDI + 0xf8);
  iVar4 = *(int *)(unaff_RDI + 300);
  lVar7 = *(longlong *)(unaff_RDI + 0x70);
  do {
    if (uVar10 == uVar24) break;
    uVar20 = (ulonglong)(*(longlong *)(lVar12 + uVar24) * -0x30e4432345000000) >> (bVar15 & 0x3f);
    *(undefined4 *)(lVar5 + (ulonglong)((uint)uVar24 & ~(-1 << (bVar3 & 0x1f))) * 4) =
         *(undefined4 *)(lVar7 + uVar20 * 4);
    *(uint *)(lVar7 + uVar20 * 4) = (uint)uVar24;
    uVar24 = uVar24 + 1;
  } while (iVar4 == 0);
  *(uint *)(unaff_RDI + 0x2c) = uVar30;
  uVar24 = *unaff_RSI;
  uVar29 = uVar24 * -0x30e4432345000000;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  uVar10 = *(uint *)(lVar7 + (uVar29 >> (bVar15 & 0x3f)) * 4);
  uVar20 = 3;
  if (uVar10 < uVar19) {
LAB_00ee1776:
    uVar18 = 1 << (*(byte *)((longlong)puVar6 + 0x104) & 0x1f);
    pcVar8 = (char *)*puVar6;
    lVar5 = puVar6[1];
    uVar9 = (int)pcVar8 - (int)lVar5;
    uVar19 = uVar9 - uVar18;
    if (uVar9 < uVar18) {
      uVar19 = 0;
    }
    if (iVar28 != 0) {
      uVar10 = *(uint *)(puVar6 + 3);
      uVar16 = *(uint *)(puVar6[0xe] + (uVar29 >> (-*(char *)(puVar6 + 0x21) & 0x3fU)) * 4);
      if (uVar10 <= uVar16) {
        puVar23 = (ulonglong *)((longlong)unaff_RSI + 4);
        lVar7 = puVar6[0x10];
        lVar12 = (ulonglong)uVar26 + lVar12 + 8;
        do {
          uVar29 = (ulonglong)uVar16;
          if (*(int *)(lVar5 + uVar29) == (int)uVar24) {
            puVar31 = (ulonglong *)(lVar5 + uVar29 + 4);
            puVar21 = (ulonglong *)(((longlong)pcVar8 - (longlong)puVar31) + (longlong)puVar23);
            if (param_2 <= puVar21) {
              puVar21 = param_2;
            }
            puVar27 = puVar23;
            puVar17 = puVar31;
            if (puVar23 < (ulonglong *)((longlong)puVar21 - 7U)) {
              uVar13 = *puVar23 ^ *puVar31;
              if (uVar13 == 0) {
                lVar14 = lVar5 + 0xc + uVar29;
                lVar25 = 0;
                do {
                  puVar27 = (ulonglong *)((longlong)unaff_RSI + lVar25 + 0xc);
                  if ((ulonglong *)((longlong)puVar21 - 7U) <= puVar27) {
                    puVar17 = (ulonglong *)(lVar14 + lVar25);
                    goto LAB_00ee18b3;
                  }
                  lVar2 = lVar25 + 8;
                  uVar29 = *(ulonglong *)((longlong)unaff_RSI + lVar25 + 0xc) ^
                           *(ulonglong *)(lVar14 + lVar25);
                  lVar25 = lVar2;
                } while (uVar29 == 0);
                uVar13 = 0;
                if (uVar29 != 0) {
                  for (; (uVar29 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                  }
                }
                uVar29 = (uVar13 >> 3) + lVar2;
              }
              else {
                uVar29 = 0;
                if (uVar13 != 0) {
                  for (; (uVar13 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar29 = uVar29 >> 3;
              }
            }
            else {
LAB_00ee18b3:
              if ((puVar27 < (ulonglong *)((longlong)puVar21 - 3U)) &&
                 ((int)*puVar17 == (int)*puVar27)) {
                puVar27 = (ulonglong *)((longlong)puVar27 + 4);
                puVar17 = (ulonglong *)((longlong)puVar17 + 4);
              }
              if ((puVar27 < (ulonglong *)((longlong)puVar21 - 1U)) &&
                 ((short)*puVar17 == (short)*puVar27)) {
                puVar27 = (ulonglong *)((longlong)puVar27 + 2);
                puVar17 = (ulonglong *)((longlong)puVar17 + 2);
              }
              if (puVar27 < puVar21) {
                puVar27 = (ulonglong *)
                          ((longlong)puVar27 + (ulonglong)((char)*puVar17 == (char)*puVar27));
              }
              uVar29 = (longlong)puVar27 - (longlong)puVar23;
            }
            if ((char *)((longlong)puVar31 + uVar29) == pcVar8) {
              puVar21 = (ulonglong *)((longlong)puVar23 + uVar29);
              puVar31 = puVar21;
              puVar27 = puVar11;
              if (puVar21 < puVar1) {
                uVar13 = *puVar21 ^ *puVar11;
                if (uVar13 == 0) {
                  lVar14 = 0;
                  do {
                    puVar31 = (ulonglong *)((longlong)unaff_RSI + lVar14 + uVar29 + 0xc);
                    if (puVar1 <= puVar31) {
                      puVar27 = (ulonglong *)(lVar14 + lVar12);
                      goto LAB_00ee1983;
                    }
                    lVar25 = lVar14 + 8;
                    uVar13 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + uVar29 + 0xc) ^
                             *(ulonglong *)(lVar12 + lVar14);
                    lVar14 = lVar25;
                  } while (uVar13 == 0);
                  uVar22 = 0;
                  if (uVar13 != 0) {
                    for (; (uVar13 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                    }
                  }
                  uVar22 = (uVar22 >> 3) + lVar25;
                }
                else {
                  uVar22 = 0;
                  if (uVar13 != 0) {
                    for (; (uVar13 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                    }
                  }
                  uVar22 = uVar22 >> 3;
                }
              }
              else {
LAB_00ee1983:
                if ((puVar31 < (ulonglong *)((longlong)param_2 - 3U)) &&
                   ((int)*puVar27 == (int)*puVar31)) {
                  puVar31 = (ulonglong *)((longlong)puVar31 + 4);
                  puVar27 = (ulonglong *)((longlong)puVar27 + 4);
                }
                if ((puVar31 < (ulonglong *)((longlong)param_2 + -1)) &&
                   ((short)*puVar27 == (short)*puVar31)) {
                  puVar31 = (ulonglong *)((longlong)puVar31 + 2);
                  puVar27 = (ulonglong *)((longlong)puVar27 + 2);
                }
                if (puVar31 < param_2) {
                  puVar31 = (ulonglong *)
                            ((longlong)puVar31 + (ulonglong)((char)*puVar27 == (char)*puVar31));
                }
                uVar22 = (longlong)puVar31 - (longlong)puVar21;
              }
              uVar29 = uVar29 + uVar22;
            }
            uVar29 = uVar29 + 4;
            if ((uVar20 < uVar29) &&
               (*param_1 = (ulonglong)((uVar9 + (uVar30 - uVar26) + 3) - uVar16), uVar20 = uVar29,
               (ulonglong *)((longlong)unaff_RSI + uVar29) == param_2)) {
              return uVar29;
            }
          }
          if (uVar16 <= uVar19) {
            return uVar20;
          }
          iVar28 = iVar28 + -1;
          if (iVar28 == 0) {
            return uVar20;
          }
          uVar16 = *(uint *)(lVar7 + (ulonglong)(uVar16 & uVar18 - 1) * 4);
          if (uVar16 < uVar10) {
            return uVar20;
          }
        } while( true );
      }
    }
    return uVar20;
  }
  uVar13 = 3;
  do {
    puVar23 = (ulonglong *)(lVar12 + (ulonglong)uVar10);
    if (*(int *)((uVar13 - 3) + (longlong)puVar23) == *(int *)((longlong)unaff_RSI + (uVar13 - 3)))
    {
      puVar21 = unaff_RSI;
      if (unaff_RSI < puVar1) {
        uVar22 = *unaff_RSI ^ *puVar23;
        if (uVar22 == 0) {
          lVar7 = lVar12 + 8 + (ulonglong)uVar10;
          lVar14 = 0;
          do {
            puVar21 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 8);
            if (puVar1 <= puVar21) {
              puVar23 = (ulonglong *)(lVar7 + lVar14);
              goto LAB_00ee1a7d;
            }
            lVar25 = lVar14 + 8;
            uVar20 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 8) ^
                     *(ulonglong *)(lVar7 + lVar14);
            lVar14 = lVar25;
          } while (uVar20 == 0);
          uVar22 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
            }
          }
          uVar20 = (uVar22 >> 3) + lVar25;
        }
        else {
          uVar20 = 0;
          if (uVar22 != 0) {
            for (; (uVar22 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
            }
          }
          uVar20 = uVar20 >> 3;
        }
      }
      else {
LAB_00ee1a7d:
        if ((puVar21 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar23 == (int)*puVar21)) {
          puVar21 = (ulonglong *)((longlong)puVar21 + 4);
          puVar23 = (ulonglong *)((longlong)puVar23 + 4);
        }
        if ((puVar21 < (ulonglong *)((longlong)param_2 + -1)) &&
           ((short)*puVar23 == (short)*puVar21)) {
          puVar21 = (ulonglong *)((longlong)puVar21 + 2);
          puVar23 = (ulonglong *)((longlong)puVar23 + 2);
        }
        if (puVar21 < param_2) {
          puVar21 = (ulonglong *)((longlong)puVar21 + (ulonglong)((char)*puVar23 == (char)*puVar21))
          ;
        }
        uVar20 = (longlong)puVar21 - (longlong)unaff_RSI;
      }
      if ((uVar13 < uVar20) &&
         (*param_1 = (ulonglong)((uVar30 + 3) - uVar10), uVar13 = uVar20,
         (ulonglong *)((longlong)unaff_RSI + uVar20) == param_2)) goto LAB_00ee1776;
    }
    uVar20 = uVar13;
    if ((uVar10 <= uVar9) ||
       ((iVar28 = iVar28 + -1, iVar28 == 0 ||
        (uVar10 = *(uint *)(lVar5 + (ulonglong)(uVar10 & uVar18 - 1) * 4), uVar13 = uVar20,
        uVar10 < uVar19)))) goto LAB_00ee1776;
  } while( true );
}



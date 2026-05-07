// Function: FUN_00eeadc1
// Address: 00eeadc1
// Size: 2128 bytes
// Class: GNString


ulonglong FUN_00eeadc1(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte bVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong *unaff_RSI;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  int iVar30;
  longlong unaff_RDI;
  ulonglong *puVar31;
  ulonglong uVar32;
  ulonglong *puVar33;
  uint uVar34;
  ulonglong uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong *puVar38;
  ulonglong local_c0;
  
  bVar5 = *(byte *)(unaff_RDI + 0x104);
  uVar37 = 1 << (bVar5 & 0x1f);
  lVar17 = *(longlong *)(unaff_RDI + 8);
  uVar10 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar36 = (int)unaff_RSI - (int)lVar17;
  uVar34 = *(uint *)(unaff_RDI + 0x1c);
  uVar20 = uVar36 - uVar10;
  if (uVar36 - uVar34 <= uVar10) {
    uVar20 = uVar34;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar20 = uVar34;
  }
  uVar34 = uVar36 - uVar37;
  if (uVar36 < uVar37) {
    uVar34 = 0;
  }
  uVar24 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  puVar6 = *(undefined8 **)(unaff_RDI + 0xf8);
  local_c0 = *unaff_RSI;
  uVar12 = local_c0 * -0x30e4432340650000 >> (0x42U - *(char *)(puVar6 + 0x21) & 0x3f);
  lVar7 = *(longlong *)(unaff_RDI + 0x80);
  uVar10 = *(uint *)(unaff_RDI + 0x18);
  uVar18 = (ulonglong)uVar10;
  lVar27 = puVar6[0xe];
  bVar19 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  uVar11 = *(uint *)(unaff_RDI + 0x2c);
  uVar25 = (ulonglong)uVar11;
  uVar9 = uVar36;
  if (uVar36 < uVar11) {
    uVar9 = uVar11;
  }
  puVar4 = (ulonglong *)(lVar17 + uVar18);
  iVar30 = *(int *)(unaff_RDI + 300);
  lVar21 = *(longlong *)(unaff_RDI + 0x70);
  do {
    if (uVar9 == uVar25) break;
    uVar23 = (ulonglong)(*(longlong *)(lVar17 + uVar25) * -0x30e4432340650000) >> (bVar19 & 0x3f);
    *(undefined4 *)(lVar7 + (ulonglong)((uint)uVar25 & ~(-1 << (bVar5 & 0x1f))) * 4) =
         *(undefined4 *)(lVar21 + uVar23 * 4);
    *(uint *)(lVar21 + uVar23 * 4) = (uint)uVar25;
    uVar25 = uVar25 + 1;
  } while (iVar30 == 0);
  *(uint *)(unaff_RDI + 0x2c) = uVar36;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  puVar2 = (ulonglong *)((longlong)param_2 - 3);
  puVar13 = (ulonglong *)((longlong)param_2 + -1);
  uVar11 = *(uint *)(lVar21 + (local_c0 * -0x30e4432340650000 >> (bVar19 & 0x3f)) * 4);
  uVar25 = 3;
  if (uVar11 < uVar20) {
LAB_00eeaf73:
    puVar29 = (ulonglong *)((longlong)unaff_RSI + 4);
    pcVar8 = (char *)*puVar6;
    lVar7 = puVar6[1];
    lVar21 = 0;
    do {
      lVar21 = lVar21 + 1;
    } while (lVar21 != 3);
    uVar34 = 3;
    if (uVar24 < 3) {
      uVar34 = uVar24;
    }
    uVar20 = *(uint *)(lVar27 + (uVar12 << 4 | 0xc));
    uVar23 = (ulonglong)(uVar20 >> 8);
    lVar21 = puVar6[0x10];
    iVar30 = (((int)pcVar8 - (int)lVar7) - uVar10) + uVar36 + 3;
    if (uVar34 != 0) {
      lVar14 = lVar17 + uVar18 + 8;
      uVar35 = 0;
      do {
        uVar10 = *(uint *)(lVar27 + (uVar35 + uVar12 * 4) * 4);
        uVar16 = (ulonglong)uVar10;
        if (uVar16 == 0) {
          return uVar25;
        }
        if (*(int *)(lVar7 + uVar16) == (int)local_c0) {
          puVar38 = (ulonglong *)((int *)(lVar7 + uVar16) + 1);
          puVar31 = (ulonglong *)(((longlong)pcVar8 - (longlong)puVar38) + (longlong)puVar29);
          if (param_2 <= puVar31) {
            puVar31 = param_2;
          }
          puVar28 = puVar29;
          puVar33 = puVar38;
          if (puVar29 < (ulonglong *)((longlong)puVar31 - 7U)) {
            uVar15 = *puVar29 ^ *puVar38;
            if (uVar15 == 0) {
              lVar26 = lVar7 + 0xc + uVar16;
              lVar22 = 0;
              do {
                puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar22 + 0xc);
                if ((ulonglong *)((longlong)puVar31 - 7U) <= puVar28) {
                  puVar33 = (ulonglong *)(lVar26 + lVar22);
                  goto LAB_00eeb0f2;
                }
                lVar3 = lVar22 + 8;
                uVar16 = *(ulonglong *)((longlong)unaff_RSI + lVar22 + 0xc) ^
                         *(ulonglong *)(lVar26 + lVar22);
                lVar22 = lVar3;
              } while (uVar16 == 0);
              uVar15 = 0;
              if (uVar16 != 0) {
                for (; (uVar16 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar16 = (uVar15 >> 3) + lVar3;
            }
            else {
              uVar16 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              uVar16 = uVar16 >> 3;
            }
          }
          else {
LAB_00eeb0f2:
            if ((puVar28 < (ulonglong *)((longlong)puVar31 - 3U)) &&
               ((int)*puVar33 == (int)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              puVar33 = (ulonglong *)((longlong)puVar33 + 4);
            }
            if ((puVar28 < (ulonglong *)((longlong)puVar31 - 1U)) &&
               ((short)*puVar33 == (short)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              puVar33 = (ulonglong *)((longlong)puVar33 + 2);
            }
            if (puVar28 < puVar31) {
              puVar28 = (ulonglong *)
                        ((longlong)puVar28 + (ulonglong)((char)*puVar33 == (char)*puVar28));
            }
            uVar16 = (longlong)puVar28 - (longlong)puVar29;
          }
          if ((char *)((longlong)puVar38 + uVar16) == pcVar8) {
            puVar31 = (ulonglong *)((longlong)puVar29 + uVar16);
            puVar28 = puVar4;
            puVar38 = puVar31;
            if (puVar31 < puVar1) {
              uVar15 = *puVar31 ^ *puVar4;
              if (uVar15 == 0) {
                lVar26 = 0;
                do {
                  puVar38 = (ulonglong *)((longlong)unaff_RSI + lVar26 + uVar16 + 0xc);
                  if (puVar1 <= puVar38) {
                    puVar28 = (ulonglong *)(lVar26 + lVar14);
                    goto LAB_00eeb1d2;
                  }
                  lVar22 = lVar26 + 8;
                  uVar15 = *(ulonglong *)((longlong)unaff_RSI + lVar26 + uVar16 + 0xc) ^
                           *(ulonglong *)(lVar14 + lVar26);
                  lVar26 = lVar22;
                } while (uVar15 == 0);
                uVar32 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                  }
                }
                uVar32 = (uVar32 >> 3) + lVar22;
              }
              else {
                uVar32 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                  }
                }
                uVar32 = uVar32 >> 3;
              }
            }
            else {
LAB_00eeb1d2:
              if ((puVar38 < puVar2) && ((int)*puVar28 == (int)*puVar38)) {
                puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              }
              if ((puVar38 < puVar13) && ((short)*puVar28 == (short)*puVar38)) {
                puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              }
              if (puVar38 < param_2) {
                puVar38 = (ulonglong *)
                          ((longlong)puVar38 + (ulonglong)((char)*puVar28 == (char)*puVar38));
              }
              uVar32 = (longlong)puVar38 - (longlong)puVar31;
            }
            uVar16 = uVar16 + uVar32;
          }
          uVar16 = uVar16 + 4;
          if ((uVar25 < uVar16) &&
             (*param_1 = (ulonglong)(iVar30 - uVar10), uVar25 = uVar16,
             (ulonglong *)((longlong)unaff_RSI + uVar16) == param_2)) {
            return uVar16;
          }
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar34);
    }
    uVar24 = uVar24 - uVar34;
    if ((uVar20 & 0xff) < uVar24) {
      uVar24 = uVar20 & 0xff;
    }
    if (uVar24 != 0) {
      uVar12 = 0;
      do {
        uVar12 = uVar12 + 1;
      } while (uVar24 != uVar12);
      lVar17 = lVar17 + uVar18 + 8;
      uVar34 = 0;
      do {
        uVar20 = *(uint *)(lVar21 + uVar23 * 4);
        uVar12 = (ulonglong)uVar20;
        if (*(int *)(lVar7 + uVar12) == (int)local_c0) {
          puVar38 = (ulonglong *)(lVar7 + uVar12 + 4);
          puVar31 = (ulonglong *)(((longlong)pcVar8 - (longlong)puVar38) + (longlong)puVar29);
          if (param_2 <= puVar31) {
            puVar31 = param_2;
          }
          puVar28 = puVar29;
          puVar33 = puVar38;
          if (puVar29 < (ulonglong *)((longlong)puVar31 - 7U)) {
            uVar18 = *puVar29 ^ *puVar38;
            if (uVar18 == 0) {
              lVar27 = lVar7 + 0xc + uVar12;
              lVar14 = 0;
              do {
                puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 0xc);
                if ((ulonglong *)((longlong)puVar31 - 7U) <= puVar28) {
                  puVar33 = (ulonglong *)(lVar27 + lVar14);
                  goto LAB_00eeb36d;
                }
                lVar26 = lVar14 + 8;
                uVar12 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 0xc) ^
                         *(ulonglong *)(lVar27 + lVar14);
                lVar14 = lVar26;
              } while (uVar12 == 0);
              uVar18 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar12 = (uVar18 >> 3) + lVar26;
            }
            else {
              uVar12 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                }
              }
              uVar12 = uVar12 >> 3;
            }
          }
          else {
LAB_00eeb36d:
            if ((puVar28 < (ulonglong *)((longlong)puVar31 - 3U)) &&
               ((int)*puVar33 == (int)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              puVar33 = (ulonglong *)((longlong)puVar33 + 4);
            }
            if ((puVar28 < (ulonglong *)((longlong)puVar31 - 1U)) &&
               ((short)*puVar33 == (short)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              puVar33 = (ulonglong *)((longlong)puVar33 + 2);
            }
            if (puVar28 < puVar31) {
              puVar28 = (ulonglong *)
                        ((longlong)puVar28 + (ulonglong)((char)*puVar33 == (char)*puVar28));
            }
            uVar12 = (longlong)puVar28 - (longlong)puVar29;
          }
          if ((char *)((longlong)puVar38 + uVar12) == pcVar8) {
            puVar31 = (ulonglong *)((longlong)puVar29 + uVar12);
            puVar28 = puVar4;
            puVar38 = puVar31;
            if (puVar31 < puVar1) {
              uVar18 = *puVar31 ^ *puVar4;
              if (uVar18 == 0) {
                lVar27 = 0;
                do {
                  puVar38 = (ulonglong *)((longlong)unaff_RSI + lVar27 + uVar12 + 0xc);
                  if (puVar1 <= puVar38) {
                    puVar28 = (ulonglong *)(lVar27 + lVar17);
                    goto LAB_00eeb430;
                  }
                  lVar14 = lVar27 + 8;
                  uVar18 = *(ulonglong *)((longlong)unaff_RSI + lVar27 + uVar12 + 0xc) ^
                           *(ulonglong *)(lVar17 + lVar27);
                  lVar27 = lVar14;
                } while (uVar18 == 0);
                uVar35 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                  }
                }
                uVar35 = (uVar35 >> 3) + lVar14;
              }
              else {
                uVar35 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                  }
                }
                uVar35 = uVar35 >> 3;
              }
            }
            else {
LAB_00eeb430:
              if ((puVar38 < puVar2) && ((int)*puVar28 == (int)*puVar38)) {
                puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              }
              if ((puVar38 < puVar13) && ((short)*puVar28 == (short)*puVar38)) {
                puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              }
              if (puVar38 < param_2) {
                puVar38 = (ulonglong *)
                          ((longlong)puVar38 + (ulonglong)((char)*puVar28 == (char)*puVar38));
              }
              uVar35 = (longlong)puVar38 - (longlong)puVar31;
            }
            uVar12 = uVar12 + uVar35;
          }
          uVar12 = uVar12 + 4;
          if ((uVar25 < uVar12) &&
             (*param_1 = (ulonglong)(iVar30 - uVar20), uVar25 = uVar12,
             (ulonglong *)((longlong)unaff_RSI + uVar12) == param_2)) {
            return uVar12;
          }
        }
        uVar34 = uVar34 + 1;
        uVar23 = uVar23 + 1;
      } while (uVar34 != uVar24);
    }
    return uVar25;
  }
  uVar25 = 3;
  do {
    puVar29 = (ulonglong *)(lVar17 + (ulonglong)uVar11);
    if (*(int *)((uVar25 - 3) + (longlong)puVar29) == *(int *)((longlong)unaff_RSI + (uVar25 - 3)))
    {
      puVar31 = unaff_RSI;
      if (unaff_RSI < puVar1) {
        local_c0 = *unaff_RSI;
        uVar23 = *puVar29 ^ local_c0;
        if (uVar23 == 0) {
          lVar21 = lVar17 + 8 + (ulonglong)uVar11;
          lVar14 = 0;
          do {
            puVar31 = (ulonglong *)((longlong)unaff_RSI + lVar14 + 8);
            if (puVar1 <= puVar31) {
              puVar29 = (ulonglong *)(lVar21 + lVar14);
              goto LAB_00eeb531;
            }
            lVar26 = lVar14 + 8;
            uVar23 = *(ulonglong *)((longlong)unaff_RSI + lVar14 + 8) ^
                     *(ulonglong *)(lVar21 + lVar14);
            lVar14 = lVar26;
          } while (uVar23 == 0);
          uVar35 = 0;
          if (uVar23 != 0) {
            for (; (uVar23 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = (uVar35 >> 3) + lVar26;
        }
        else {
          uVar35 = 0;
          if (uVar23 != 0) {
            for (; (uVar23 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = uVar35 >> 3;
        }
      }
      else {
LAB_00eeb531:
        if ((puVar31 < puVar2) && ((int)*puVar29 == (int)*puVar31)) {
          puVar31 = (ulonglong *)((longlong)puVar31 + 4);
          puVar29 = (ulonglong *)((longlong)puVar29 + 4);
        }
        if ((puVar31 < puVar13) && ((short)*puVar29 == (short)*puVar31)) {
          puVar31 = (ulonglong *)((longlong)puVar31 + 2);
          puVar29 = (ulonglong *)((longlong)puVar29 + 2);
        }
        if (puVar31 < param_2) {
          puVar31 = (ulonglong *)((longlong)puVar31 + (ulonglong)((char)*puVar29 == (char)*puVar31))
          ;
        }
        uVar35 = (longlong)puVar31 - (longlong)unaff_RSI;
      }
      if ((uVar25 < uVar35) &&
         (*param_1 = (ulonglong)((uVar36 + 3) - uVar11), uVar25 = uVar35,
         (ulonglong *)((longlong)unaff_RSI + uVar35) == param_2)) goto LAB_00eeaf73;
    }
    if ((uVar11 <= uVar34) ||
       ((uVar24 = uVar24 - 1, uVar24 == 0 ||
        (uVar11 = *(uint *)(lVar7 + (ulonglong)(uVar11 & uVar37 - 1) * 4), uVar11 < uVar20))))
    goto LAB_00eeaf73;
  } while( true );
}



// Function: FUN_00ee9d5c
// Address: 00ee9d5c
// Size: 2069 bytes
// Class: GNString


ulonglong FUN_00ee9d5c(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  ulonglong *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong *puVar23;
  longlong lVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  int iVar28;
  ulonglong *unaff_RSI;
  ulonglong uVar29;
  ulonglong *puVar30;
  longlong unaff_RDI;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong *puVar38;
  ulonglong local_b0;
  
  bVar5 = *(byte *)(unaff_RDI + 0x104);
  uVar35 = 1 << (bVar5 & 0x1f);
  lVar16 = *(longlong *)(unaff_RDI + 8);
  uVar11 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar36 = (int)unaff_RSI - (int)lVar16;
  uVar33 = *(uint *)(unaff_RDI + 0x1c);
  uVar37 = uVar36 - uVar11;
  if (uVar36 - uVar33 <= uVar11) {
    uVar37 = uVar33;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar37 = uVar33;
  }
  uVar33 = uVar36 - uVar35;
  if (uVar36 < uVar35) {
    uVar33 = 0;
  }
  uVar32 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  puVar8 = *(undefined8 **)(unaff_RDI + 0xf8);
  uVar29 = (ulonglong)((uint)*unaff_RSI * -0x61c8864f >> (0x22U - *(char *)(puVar8 + 0x21) & 0x1f));
  lVar9 = *(longlong *)(unaff_RDI + 0x80);
  uVar11 = *(uint *)(unaff_RDI + 0x18);
  uVar17 = (ulonglong)uVar11;
  lVar22 = puVar8[0xe];
  bVar18 = 0x20 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  uVar6 = *(uint *)(unaff_RDI + 0x2c);
  uVar12 = (ulonglong)uVar6;
  uVar7 = uVar36;
  if (uVar36 < uVar6) {
    uVar7 = uVar6;
  }
  puVar4 = (ulonglong *)(lVar16 + uVar17);
  iVar28 = *(int *)(unaff_RDI + 300);
  lVar20 = *(longlong *)(unaff_RDI + 0x70);
  do {
    if (uVar7 == uVar12) break;
    uVar34 = (ulonglong)((uint)(*(int *)(lVar16 + uVar12) * -0x61c8864f) >> (bVar18 & 0x1f));
    *(undefined4 *)(lVar9 + (ulonglong)((uint)uVar12 & ~(-1 << (bVar5 & 0x1f))) * 4) =
         *(undefined4 *)(lVar20 + uVar34 * 4);
    *(uint *)(lVar20 + uVar34 * 4) = (uint)uVar12;
    uVar12 = uVar12 + 1;
  } while (iVar28 == 0);
  *(uint *)(unaff_RDI + 0x2c) = uVar36;
  uVar6 = (uint)*unaff_RSI;
  local_b0 = (ulonglong)uVar6;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  puVar2 = (ulonglong *)((longlong)param_2 - 3);
  puVar19 = (ulonglong *)((longlong)param_2 + -1);
  uVar7 = *(uint *)(lVar20 + (ulonglong)(uVar6 * -0x61c8864f >> (bVar18 & 0x1f)) * 4);
  uVar12 = 3;
  if (uVar7 < uVar37) {
LAB_00ee9ef8:
    local_b0._0_4_ = uVar6;
    puVar30 = (ulonglong *)((longlong)unaff_RSI + 4);
    pcVar10 = (char *)*puVar8;
    lVar9 = puVar8[1];
    lVar20 = 0;
    do {
      lVar20 = lVar20 + 1;
    } while (lVar20 != 3);
    uVar33 = 3;
    if (uVar32 < 3) {
      uVar33 = uVar32;
    }
    uVar37 = *(uint *)(lVar22 + (uVar29 << 4 | 0xc));
    uVar34 = (ulonglong)(uVar37 >> 8);
    lVar20 = puVar8[0x10];
    iVar28 = (((int)pcVar10 - (int)lVar9) - uVar11) + uVar36 + 3;
    if (uVar33 != 0) {
      lVar13 = lVar16 + uVar17 + 8;
      uVar31 = 0;
      do {
        uVar11 = *(uint *)(lVar22 + (uVar31 + uVar29 * 4) * 4);
        uVar15 = (ulonglong)uVar11;
        if (uVar15 == 0) {
          return uVar12;
        }
        if (*(uint *)(lVar9 + uVar15) == (uint)local_b0) {
          puVar38 = (ulonglong *)((uint *)(lVar9 + uVar15) + 1);
          puVar25 = (ulonglong *)(((longlong)pcVar10 - (longlong)puVar38) + (longlong)puVar30);
          if (param_2 <= puVar25) {
            puVar25 = param_2;
          }
          puVar23 = puVar30;
          puVar27 = puVar38;
          if (puVar30 < (ulonglong *)((longlong)puVar25 - 7U)) {
            uVar14 = *puVar30 ^ *puVar38;
            if (uVar14 == 0) {
              lVar24 = lVar9 + 0xc + uVar15;
              lVar21 = 0;
              do {
                puVar23 = (ulonglong *)((longlong)unaff_RSI + lVar21 + 0xc);
                if ((ulonglong *)((longlong)puVar25 - 7U) <= puVar23) {
                  puVar27 = (ulonglong *)(lVar24 + lVar21);
                  goto LAB_00eea06c;
                }
                lVar3 = lVar21 + 8;
                uVar15 = *(ulonglong *)((longlong)unaff_RSI + lVar21 + 0xc) ^
                         *(ulonglong *)(lVar24 + lVar21);
                lVar21 = lVar3;
              } while (uVar15 == 0);
              uVar14 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                }
              }
              uVar15 = (uVar14 >> 3) + lVar3;
            }
            else {
              uVar15 = 0;
              if (uVar14 != 0) {
                for (; (uVar14 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar15 = uVar15 >> 3;
            }
          }
          else {
LAB_00eea06c:
            if ((puVar23 < (ulonglong *)((longlong)puVar25 - 3U)) &&
               ((uint)*puVar27 == (uint)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 4);
              puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            }
            if ((puVar23 < (ulonglong *)((longlong)puVar25 - 1U)) &&
               ((short)*puVar27 == (short)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 2);
              puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            }
            if (puVar23 < puVar25) {
              puVar23 = (ulonglong *)
                        ((longlong)puVar23 + (ulonglong)((char)*puVar27 == (char)*puVar23));
            }
            uVar15 = (longlong)puVar23 - (longlong)puVar30;
          }
          if ((char *)((longlong)puVar38 + uVar15) == pcVar10) {
            puVar25 = (ulonglong *)((longlong)puVar30 + uVar15);
            puVar23 = puVar4;
            puVar38 = puVar25;
            if (puVar25 < puVar1) {
              uVar14 = *puVar25 ^ *puVar4;
              if (uVar14 == 0) {
                lVar24 = 0;
                do {
                  puVar38 = (ulonglong *)((longlong)unaff_RSI + lVar24 + uVar15 + 0xc);
                  if (puVar1 <= puVar38) {
                    puVar23 = (ulonglong *)(lVar24 + lVar13);
                    goto LAB_00eea13e;
                  }
                  lVar21 = lVar24 + 8;
                  uVar14 = *(ulonglong *)((longlong)unaff_RSI + lVar24 + uVar15 + 0xc) ^
                           *(ulonglong *)(lVar13 + lVar24);
                  lVar24 = lVar21;
                } while (uVar14 == 0);
                uVar26 = 0;
                if (uVar14 != 0) {
                  for (; (uVar14 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                  }
                }
                uVar26 = (uVar26 >> 3) + lVar21;
              }
              else {
                uVar26 = 0;
                if (uVar14 != 0) {
                  for (; (uVar14 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                  }
                }
                uVar26 = uVar26 >> 3;
              }
            }
            else {
LAB_00eea13e:
              if ((puVar38 < puVar2) && ((uint)*puVar23 == (uint)*puVar38)) {
                puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                puVar23 = (ulonglong *)((longlong)puVar23 + 4);
              }
              if ((puVar38 < puVar19) && ((short)*puVar23 == (short)*puVar38)) {
                puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                puVar23 = (ulonglong *)((longlong)puVar23 + 2);
              }
              if (puVar38 < param_2) {
                puVar38 = (ulonglong *)
                          ((longlong)puVar38 + (ulonglong)((char)*puVar23 == (char)*puVar38));
              }
              uVar26 = (longlong)puVar38 - (longlong)puVar25;
            }
            uVar15 = uVar15 + uVar26;
          }
          uVar15 = uVar15 + 4;
          if ((uVar12 < uVar15) &&
             (*param_1 = (ulonglong)(iVar28 - uVar11), uVar12 = uVar15,
             (ulonglong *)((longlong)unaff_RSI + uVar15) == param_2)) {
            return uVar15;
          }
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar33);
    }
    uVar32 = uVar32 - uVar33;
    if ((uVar37 & 0xff) < uVar32) {
      uVar32 = uVar37 & 0xff;
    }
    if (uVar32 != 0) {
      uVar29 = 0;
      do {
        uVar29 = uVar29 + 1;
      } while (uVar32 != uVar29);
      lVar16 = lVar16 + uVar17 + 8;
      uVar33 = 0;
      do {
        uVar37 = *(uint *)(lVar20 + uVar34 * 4);
        uVar29 = (ulonglong)uVar37;
        if (*(uint *)(lVar9 + uVar29) == (uint)local_b0) {
          puVar38 = (ulonglong *)(lVar9 + uVar29 + 4);
          puVar25 = (ulonglong *)(((longlong)pcVar10 - (longlong)puVar38) + (longlong)puVar30);
          if (param_2 <= puVar25) {
            puVar25 = param_2;
          }
          puVar23 = puVar30;
          puVar27 = puVar38;
          if (puVar30 < (ulonglong *)((longlong)puVar25 - 7U)) {
            uVar17 = *puVar30 ^ *puVar38;
            if (uVar17 == 0) {
              lVar22 = lVar9 + 0xc + uVar29;
              lVar13 = 0;
              do {
                puVar23 = (ulonglong *)((longlong)unaff_RSI + lVar13 + 0xc);
                if ((ulonglong *)((longlong)puVar25 - 7U) <= puVar23) {
                  puVar27 = (ulonglong *)(lVar22 + lVar13);
                  goto LAB_00eea2d4;
                }
                lVar24 = lVar13 + 8;
                uVar29 = *(ulonglong *)((longlong)unaff_RSI + lVar13 + 0xc) ^
                         *(ulonglong *)(lVar22 + lVar13);
                lVar13 = lVar24;
              } while (uVar29 == 0);
              uVar17 = 0;
              if (uVar29 != 0) {
                for (; (uVar29 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                }
              }
              uVar29 = (uVar17 >> 3) + lVar24;
            }
            else {
              uVar29 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                }
              }
              uVar29 = uVar29 >> 3;
            }
          }
          else {
LAB_00eea2d4:
            if ((puVar23 < (ulonglong *)((longlong)puVar25 - 3U)) &&
               ((uint)*puVar27 == (uint)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 4);
              puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            }
            if ((puVar23 < (ulonglong *)((longlong)puVar25 - 1U)) &&
               ((short)*puVar27 == (short)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 2);
              puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            }
            if (puVar23 < puVar25) {
              puVar23 = (ulonglong *)
                        ((longlong)puVar23 + (ulonglong)((char)*puVar27 == (char)*puVar23));
            }
            uVar29 = (longlong)puVar23 - (longlong)puVar30;
          }
          if ((char *)((longlong)puVar38 + uVar29) == pcVar10) {
            puVar25 = (ulonglong *)((longlong)puVar30 + uVar29);
            puVar23 = puVar4;
            puVar38 = puVar25;
            if (puVar25 < puVar1) {
              uVar17 = *puVar25 ^ *puVar4;
              if (uVar17 == 0) {
                lVar22 = 0;
                do {
                  puVar38 = (ulonglong *)((longlong)unaff_RSI + lVar22 + uVar29 + 0xc);
                  if (puVar1 <= puVar38) {
                    puVar23 = (ulonglong *)(lVar22 + lVar16);
                    goto LAB_00eea390;
                  }
                  lVar13 = lVar22 + 8;
                  uVar17 = *(ulonglong *)((longlong)unaff_RSI + lVar22 + uVar29 + 0xc) ^
                           *(ulonglong *)(lVar16 + lVar22);
                  lVar22 = lVar13;
                } while (uVar17 == 0);
                uVar31 = 0;
                if (uVar17 != 0) {
                  for (; (uVar17 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                  }
                }
                uVar31 = (uVar31 >> 3) + lVar13;
              }
              else {
                uVar31 = 0;
                if (uVar17 != 0) {
                  for (; (uVar17 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                  }
                }
                uVar31 = uVar31 >> 3;
              }
            }
            else {
LAB_00eea390:
              if ((puVar38 < puVar2) && ((uint)*puVar23 == (uint)*puVar38)) {
                puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                puVar23 = (ulonglong *)((longlong)puVar23 + 4);
              }
              if ((puVar38 < puVar19) && ((short)*puVar23 == (short)*puVar38)) {
                puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                puVar23 = (ulonglong *)((longlong)puVar23 + 2);
              }
              if (puVar38 < param_2) {
                puVar38 = (ulonglong *)
                          ((longlong)puVar38 + (ulonglong)((char)*puVar23 == (char)*puVar38));
              }
              uVar31 = (longlong)puVar38 - (longlong)puVar25;
            }
            uVar29 = uVar29 + uVar31;
          }
          uVar29 = uVar29 + 4;
          if ((uVar12 < uVar29) &&
             (*param_1 = (ulonglong)(iVar28 - uVar37), uVar12 = uVar29,
             (ulonglong *)((longlong)unaff_RSI + uVar29) == param_2)) {
            return uVar29;
          }
        }
        uVar33 = uVar33 + 1;
        uVar34 = uVar34 + 1;
      } while (uVar33 != uVar32);
    }
    return uVar12;
  }
  uVar12 = 3;
  do {
    puVar30 = (ulonglong *)(lVar16 + (ulonglong)uVar7);
    if (*(int *)((uVar12 - 3) + (longlong)puVar30) == *(int *)((longlong)unaff_RSI + (uVar12 - 3)))
    {
      puVar25 = unaff_RSI;
      if (unaff_RSI < puVar1) {
        local_b0 = *unaff_RSI;
        uVar34 = *puVar30 ^ local_b0;
        if (uVar34 == 0) {
          lVar20 = lVar16 + 8 + (ulonglong)uVar7;
          lVar13 = 0;
          do {
            puVar25 = (ulonglong *)((longlong)unaff_RSI + lVar13 + 8);
            if (puVar1 <= puVar25) {
              puVar30 = (ulonglong *)(lVar20 + lVar13);
              goto LAB_00eea497;
            }
            lVar24 = lVar13 + 8;
            uVar34 = *(ulonglong *)((longlong)unaff_RSI + lVar13 + 8) ^
                     *(ulonglong *)(lVar20 + lVar13);
            lVar13 = lVar24;
          } while (uVar34 == 0);
          uVar31 = 0;
          if (uVar34 != 0) {
            for (; (uVar34 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
            }
          }
          uVar31 = (uVar31 >> 3) + lVar24;
        }
        else {
          uVar31 = 0;
          if (uVar34 != 0) {
            for (; (uVar34 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
            }
          }
          uVar31 = uVar31 >> 3;
        }
      }
      else {
LAB_00eea497:
        if ((puVar25 < puVar2) && ((uint)*puVar30 == (uint)*puVar25)) {
          puVar25 = (ulonglong *)((longlong)puVar25 + 4);
          puVar30 = (ulonglong *)((longlong)puVar30 + 4);
        }
        if ((puVar25 < puVar19) && ((short)*puVar30 == (short)*puVar25)) {
          puVar25 = (ulonglong *)((longlong)puVar25 + 2);
          puVar30 = (ulonglong *)((longlong)puVar30 + 2);
        }
        if (puVar25 < param_2) {
          puVar25 = (ulonglong *)((longlong)puVar25 + (ulonglong)((char)*puVar30 == (char)*puVar25))
          ;
        }
        uVar31 = (longlong)puVar25 - (longlong)unaff_RSI;
      }
      if ((uVar12 < uVar31) &&
         (*param_1 = (ulonglong)((uVar36 + 3) - uVar7), uVar12 = uVar31, uVar6 = (uint)local_b0,
         (ulonglong *)((longlong)unaff_RSI + uVar31) == param_2)) goto LAB_00ee9ef8;
    }
    uVar6 = (uint)local_b0;
    if ((uVar7 <= uVar33) ||
       ((uVar32 = uVar32 - 1, uVar32 == 0 ||
        (uVar7 = *(uint *)(lVar9 + (ulonglong)(uVar7 & uVar35 - 1) * 4), uVar7 < uVar37))))
    goto LAB_00ee9ef8;
  } while( true );
}



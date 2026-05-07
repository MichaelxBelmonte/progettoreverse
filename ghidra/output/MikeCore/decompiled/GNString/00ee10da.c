// Function: FUN_00ee10da
// Address: 00ee10da
// Size: 1348 bytes
// Class: GNString


ulonglong FUN_00ee10da(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  uint uVar22;
  uint uVar23;
  ulonglong *unaff_RSI;
  longlong lVar24;
  uint uVar25;
  longlong unaff_RDI;
  uint uVar26;
  int iVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong local_70;
  
  bVar3 = *(byte *)(unaff_RDI + 0x104);
  uVar30 = 1 << (bVar3 & 0x1f);
  lVar5 = *(longlong *)(unaff_RDI + 8);
  uVar10 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar22 = (int)unaff_RSI - (int)lVar5;
  uVar11 = *(uint *)(unaff_RDI + 0x1c);
  uVar23 = uVar22 - uVar10;
  if (uVar22 - uVar11 <= uVar10) {
    uVar23 = uVar11;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar23 = uVar11;
  }
  uVar11 = uVar22 - uVar30;
  if (uVar22 < uVar30) {
    uVar11 = 0;
  }
  iVar27 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  uVar10 = *(uint *)(unaff_RDI + 0x2c);
  uVar20 = (ulonglong)uVar10;
  bVar14 = 0x20 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  uVar25 = uVar22;
  if (uVar22 < uVar10) {
    uVar25 = uVar10;
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x80);
  uVar10 = *(uint *)(unaff_RDI + 0x18);
  puVar17 = (ulonglong *)((ulonglong)uVar10 + lVar5);
  puVar7 = *(undefined8 **)(unaff_RDI + 0xf8);
  iVar4 = *(int *)(unaff_RDI + 300);
  lVar8 = *(longlong *)(unaff_RDI + 0x70);
  do {
    if (uVar25 == uVar20) break;
    uVar12 = (ulonglong)((uint)(*(int *)(lVar5 + uVar20) * -0x61c8864f) >> (bVar14 & 0x1f));
    *(undefined4 *)(lVar6 + (ulonglong)((uint)uVar20 & ~(-1 << (bVar3 & 0x1f))) * 4) =
         *(undefined4 *)(lVar8 + uVar12 * 4);
    *(uint *)(lVar8 + uVar12 * 4) = (uint)uVar20;
    uVar20 = uVar20 + 1;
  } while (iVar4 == 0);
  *(uint *)(unaff_RDI + 0x2c) = uVar22;
  local_70._0_4_ = (uint)*unaff_RSI;
  uVar26 = (uint)local_70 * -0x61c8864f;
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  uVar25 = *(uint *)(lVar8 + (ulonglong)(uVar26 >> (bVar14 & 0x1f)) * 4);
  uVar20 = 3;
  if (uVar23 <= uVar25) {
    uVar20 = 3;
    local_70 = (ulonglong)(uint)local_70;
    do {
      puVar18 = (ulonglong *)(lVar5 + (ulonglong)uVar25);
      if (*(int *)((uVar20 - 3) + (longlong)puVar18) == *(int *)((longlong)unaff_RSI + (uVar20 - 3))
         ) {
        puVar21 = unaff_RSI;
        if (unaff_RSI < puVar1) {
          local_70 = *unaff_RSI;
          uVar12 = *puVar18 ^ local_70;
          if (uVar12 == 0) {
            lVar8 = lVar5 + 8 + (ulonglong)uVar25;
            lVar13 = 0;
            do {
              puVar21 = (ulonglong *)((longlong)unaff_RSI + lVar13 + 8);
              if (puVar1 <= puVar21) {
                puVar18 = (ulonglong *)(lVar8 + lVar13);
                goto LAB_00ee1291;
              }
              lVar24 = lVar13 + 8;
              uVar12 = *(ulonglong *)((longlong)unaff_RSI + lVar13 + 8) ^
                       *(ulonglong *)(lVar8 + lVar13);
              lVar13 = lVar24;
            } while (uVar12 == 0);
            uVar29 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
              }
            }
            uVar29 = (uVar29 >> 3) + lVar24;
          }
          else {
            uVar29 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
              }
            }
            uVar29 = uVar29 >> 3;
          }
        }
        else {
LAB_00ee1291:
          if ((puVar21 < (ulonglong *)((longlong)param_2 - 3U)) &&
             ((uint)*puVar18 == (uint)*puVar21)) {
            puVar21 = (ulonglong *)((longlong)puVar21 + 4);
            puVar18 = (ulonglong *)((longlong)puVar18 + 4);
          }
          if ((puVar21 < (ulonglong *)((longlong)param_2 + -1)) &&
             ((short)*puVar18 == (short)*puVar21)) {
            puVar21 = (ulonglong *)((longlong)puVar21 + 2);
            puVar18 = (ulonglong *)((longlong)puVar18 + 2);
          }
          if (puVar21 < param_2) {
            puVar21 = (ulonglong *)
                      ((longlong)puVar21 + (ulonglong)((char)*puVar18 == (char)*puVar21));
          }
          uVar29 = (longlong)puVar21 - (longlong)unaff_RSI;
        }
        if ((uVar20 < uVar29) &&
           (*param_1 = (ulonglong)((uVar22 + 3) - uVar25), uVar20 = uVar29,
           (ulonglong *)((longlong)unaff_RSI + uVar29) == param_2)) goto LAB_00ee1360;
      }
      if ((uVar25 <= uVar11) ||
         ((iVar27 = iVar27 + -1, iVar27 == 0 ||
          (uVar25 = *(uint *)(lVar6 + (ulonglong)(uVar25 & uVar30 - 1) * 4), uVar25 < uVar23))))
      goto LAB_00ee1360;
    } while( true );
  }
LAB_00ee136f:
  uVar30 = 1 << (*(byte *)((longlong)puVar7 + 0x104) & 0x1f);
  pcVar9 = (char *)*puVar7;
  lVar6 = puVar7[1];
  uVar11 = (int)pcVar9 - (int)lVar6;
  uVar23 = uVar11 - uVar30;
  if (uVar11 < uVar30) {
    uVar23 = 0;
  }
  if (iVar27 != 0) {
    uVar25 = *(uint *)(puVar7 + 3);
    uVar26 = *(uint *)(puVar7[0xe] + (ulonglong)(uVar26 >> (-*(char *)(puVar7 + 0x21) & 0x1fU)) * 4)
    ;
    if (uVar25 <= uVar26) {
      puVar18 = (ulonglong *)((longlong)unaff_RSI + 4);
      lVar8 = puVar7[0x10];
      lVar5 = (ulonglong)uVar10 + 8 + lVar5;
      do {
        uVar12 = (ulonglong)uVar26;
        if (*(uint *)(lVar6 + uVar12) == (uint)local_70) {
          puVar28 = (ulonglong *)(lVar6 + uVar12 + 4);
          puVar21 = (ulonglong *)(((longlong)pcVar9 - (longlong)puVar28) + (longlong)puVar18);
          if (param_2 <= puVar21) {
            puVar21 = param_2;
          }
          puVar19 = puVar18;
          puVar15 = puVar28;
          if (puVar18 < (ulonglong *)((longlong)puVar21 - 7U)) {
            uVar29 = *puVar18 ^ *puVar28;
            if (uVar29 == 0) {
              lVar13 = lVar6 + 0xc + uVar12;
              lVar24 = 0;
              do {
                puVar19 = (ulonglong *)((longlong)unaff_RSI + lVar24 + 0xc);
                if ((ulonglong *)((longlong)puVar21 - 7U) <= puVar19) {
                  puVar15 = (ulonglong *)(lVar13 + lVar24);
                  goto LAB_00ee149a;
                }
                lVar2 = lVar24 + 8;
                uVar12 = *(ulonglong *)((longlong)unaff_RSI + lVar24 + 0xc) ^
                         *(ulonglong *)(lVar13 + lVar24);
                lVar24 = lVar2;
              } while (uVar12 == 0);
              uVar29 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                }
              }
              uVar12 = (uVar29 >> 3) + lVar2;
            }
            else {
              uVar12 = 0;
              if (uVar29 != 0) {
                for (; (uVar29 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                }
              }
              uVar12 = uVar12 >> 3;
            }
          }
          else {
LAB_00ee149a:
            if ((puVar19 < (ulonglong *)((longlong)puVar21 - 3U)) &&
               ((uint)*puVar15 == (uint)*puVar19)) {
              puVar19 = (ulonglong *)((longlong)puVar19 + 4);
              puVar15 = (ulonglong *)((longlong)puVar15 + 4);
            }
            if ((puVar19 < (ulonglong *)((longlong)puVar21 - 1U)) &&
               ((short)*puVar15 == (short)*puVar19)) {
              puVar19 = (ulonglong *)((longlong)puVar19 + 2);
              puVar15 = (ulonglong *)((longlong)puVar15 + 2);
            }
            if (puVar19 < puVar21) {
              puVar19 = (ulonglong *)
                        ((longlong)puVar19 + (ulonglong)((char)*puVar15 == (char)*puVar19));
            }
            uVar12 = (longlong)puVar19 - (longlong)puVar18;
          }
          if ((char *)((longlong)puVar28 + uVar12) == pcVar9) {
            puVar21 = (ulonglong *)((longlong)puVar18 + uVar12);
            puVar28 = puVar21;
            puVar19 = puVar17;
            if (puVar21 < puVar1) {
              uVar29 = *puVar21 ^ *puVar17;
              if (uVar29 == 0) {
                lVar13 = 0;
                do {
                  puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar13 + uVar12 + 0xc);
                  if (puVar1 <= puVar28) {
                    puVar19 = (ulonglong *)(lVar13 + lVar5);
                    goto LAB_00ee155f;
                  }
                  lVar24 = lVar13 + 8;
                  uVar29 = *(ulonglong *)((longlong)unaff_RSI + lVar13 + uVar12 + 0xc) ^
                           *(ulonglong *)(lVar5 + lVar13);
                  lVar13 = lVar24;
                } while (uVar29 == 0);
                uVar16 = 0;
                if (uVar29 != 0) {
                  for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                  }
                }
                uVar16 = (uVar16 >> 3) + lVar24;
              }
              else {
                uVar16 = 0;
                if (uVar29 != 0) {
                  for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                  }
                }
                uVar16 = uVar16 >> 3;
              }
            }
            else {
LAB_00ee155f:
              if ((puVar28 < (ulonglong *)((longlong)param_2 - 3U)) &&
                 ((uint)*puVar19 == (uint)*puVar28)) {
                puVar28 = (ulonglong *)((longlong)puVar28 + 4);
                puVar19 = (ulonglong *)((longlong)puVar19 + 4);
              }
              if ((puVar28 < (ulonglong *)((longlong)param_2 + -1)) &&
                 ((short)*puVar19 == (short)*puVar28)) {
                puVar28 = (ulonglong *)((longlong)puVar28 + 2);
                puVar19 = (ulonglong *)((longlong)puVar19 + 2);
              }
              if (puVar28 < param_2) {
                puVar28 = (ulonglong *)
                          ((longlong)puVar28 + (ulonglong)((char)*puVar19 == (char)*puVar28));
              }
              uVar16 = (longlong)puVar28 - (longlong)puVar21;
            }
            uVar12 = uVar12 + uVar16;
          }
          uVar12 = uVar12 + 4;
          if ((uVar20 < uVar12) &&
             (*param_1 = (ulonglong)((uVar11 + (uVar22 - uVar10) + 3) - uVar26), uVar20 = uVar12,
             (ulonglong *)((longlong)unaff_RSI + uVar12) == param_2)) {
            return uVar12;
          }
        }
        if (uVar26 <= uVar23) {
          return uVar20;
        }
        iVar27 = iVar27 + -1;
        if (iVar27 == 0) {
          return uVar20;
        }
        uVar26 = *(uint *)(lVar8 + (ulonglong)(uVar26 & uVar30 - 1) * 4);
        if (uVar26 < uVar25) {
          return uVar20;
        }
      } while( true );
    }
  }
  return uVar20;
LAB_00ee1360:
  uVar26 = (uint)local_70 * -0x61c8864f;
  goto LAB_00ee136f;
}



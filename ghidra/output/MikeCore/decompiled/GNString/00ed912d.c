// Function: FUN_00ed912d
// Address: 00ed912d
// Size: 1316 bytes
// Class: GNString


ulonglong FUN_00ed912d(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong *unaff_RSI;
  ulonglong uVar23;
  longlong unaff_RDI;
  uint uVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  uint uVar27;
  int iVar28;
  ulonglong local_90;
  
  bVar4 = *(byte *)(unaff_RDI + 0x104);
  uVar24 = 1 << (bVar4 & 0x1f);
  lVar6 = *(longlong *)(unaff_RDI + 8);
  uVar22 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar27 = (int)unaff_RSI - (int)lVar6;
  uVar12 = *(uint *)(unaff_RDI + 0x1c);
  uVar19 = uVar27 - uVar22;
  if (uVar27 - uVar12 <= uVar22) {
    uVar19 = uVar12;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar19 = uVar12;
  }
  uVar12 = uVar27 - uVar24;
  if (uVar27 < uVar24) {
    uVar12 = 0;
  }
  iVar28 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  uVar22 = *(uint *)(unaff_RDI + 0x2c);
  uVar20 = (ulonglong)uVar22;
  bVar11 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  uVar13 = uVar27;
  if (uVar27 < uVar22) {
    uVar13 = uVar22;
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x80);
  lVar8 = *(longlong *)(unaff_RDI + 0x10);
  uVar22 = *(uint *)(unaff_RDI + 0x18);
  uVar16 = (ulonglong)uVar22;
  iVar5 = *(int *)(unaff_RDI + 300);
  lVar9 = *(longlong *)(unaff_RDI + 0x70);
  do {
    if (uVar13 == uVar20) break;
    uVar23 = (ulonglong)(*(longlong *)(lVar6 + uVar20) * -0x30e4432345000000) >> (bVar11 & 0x3f);
    *(undefined4 *)(lVar7 + (ulonglong)((uint)uVar20 & ~(-1 << (bVar4 & 0x1f))) * 4) =
         *(undefined4 *)(lVar9 + uVar23 * 4);
    *(uint *)(lVar9 + uVar23 * 4) = (uint)uVar20;
    uVar20 = uVar20 + 1;
  } while (iVar5 == 0);
  *(uint *)(unaff_RDI + 0x2c) = uVar27;
  local_90 = *unaff_RSI;
  uVar13 = *(uint *)(lVar9 + (local_90 * -0x30e4432345000000 >> (bVar11 & 0x3f)) * 4);
  if (uVar13 < uVar19) {
    return 3;
  }
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  puVar2 = (ulonglong *)((longlong)unaff_RSI + 4);
  lVar9 = uVar16 + lVar6 + 8;
  uVar20 = 3;
  do {
    uVar23 = (ulonglong)uVar13;
    if (uVar13 < uVar22) {
      if (*(int *)(lVar8 + uVar23) == (int)local_90) {
        puVar26 = (ulonglong *)(lVar8 + uVar23 + 4);
        puVar14 = (ulonglong *)(((longlong)(lVar8 + uVar16) - (longlong)puVar26) + (longlong)puVar2)
        ;
        if (param_2 <= puVar14) {
          puVar14 = param_2;
        }
        puVar18 = puVar2;
        puVar25 = puVar26;
        if (puVar2 < (ulonglong *)((longlong)puVar14 - 7U)) {
          uVar10 = *puVar2 ^ *puVar26;
          if (uVar10 == 0) {
            lVar17 = lVar8 + 0xc + uVar23;
            lVar21 = 0;
            do {
              puVar18 = (ulonglong *)((longlong)unaff_RSI + lVar21 + 0xc);
              if ((ulonglong *)((longlong)puVar14 - 7U) <= puVar18) {
                puVar25 = (ulonglong *)(lVar17 + lVar21);
                goto LAB_00ed94a9;
              }
              lVar3 = lVar21 + 8;
              uVar23 = *(ulonglong *)((longlong)unaff_RSI + lVar21 + 0xc) ^
                       *(ulonglong *)(lVar17 + lVar21);
              lVar21 = lVar3;
            } while (uVar23 == 0);
            uVar10 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar23 = (uVar10 >> 3) + lVar3;
          }
          else {
            uVar23 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
              }
            }
            uVar23 = uVar23 >> 3;
          }
        }
        else {
LAB_00ed94a9:
          if ((puVar18 < (ulonglong *)((longlong)puVar14 - 3U)) && ((int)*puVar25 == (int)*puVar18))
          {
            puVar18 = (ulonglong *)((longlong)puVar18 + 4);
            puVar25 = (ulonglong *)((longlong)puVar25 + 4);
          }
          if ((puVar18 < (ulonglong *)((longlong)puVar14 - 1U)) &&
             ((short)*puVar25 == (short)*puVar18)) {
            puVar18 = (ulonglong *)((longlong)puVar18 + 2);
            puVar25 = (ulonglong *)((longlong)puVar25 + 2);
          }
          if (puVar18 < puVar14) {
            puVar18 = (ulonglong *)
                      ((longlong)puVar18 + (ulonglong)((char)*puVar25 == (char)*puVar18));
          }
          uVar23 = (longlong)puVar18 - (longlong)puVar2;
        }
        if ((char *)((longlong)puVar26 + uVar23) == (char *)(lVar8 + uVar16)) {
          puVar14 = (ulonglong *)((longlong)puVar2 + uVar23);
          puVar26 = puVar14;
          puVar18 = (ulonglong *)(lVar6 + uVar16);
          if (puVar14 < puVar1) {
            uVar10 = *puVar14 ^ *(ulonglong *)(lVar6 + uVar16);
            if (uVar10 == 0) {
              lVar17 = 0;
              do {
                puVar26 = (ulonglong *)((longlong)unaff_RSI + lVar17 + uVar23 + 0xc);
                if (puVar1 <= puVar26) {
                  puVar18 = (ulonglong *)(lVar17 + lVar9);
                  goto LAB_00ed95a5;
                }
                lVar21 = lVar17 + 8;
                uVar10 = *(ulonglong *)((longlong)unaff_RSI + lVar17 + uVar23 + 0xc) ^
                         *(ulonglong *)(lVar9 + lVar17);
                lVar17 = lVar21;
              } while (uVar10 == 0);
              uVar15 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar15 = (uVar15 >> 3) + lVar21;
            }
            else {
              uVar15 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar15 = uVar15 >> 3;
            }
          }
          else {
LAB_00ed95a5:
            if ((puVar26 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((int)*puVar18 == (int)*puVar26)) {
              puVar26 = (ulonglong *)((longlong)puVar26 + 4);
              puVar18 = (ulonglong *)((longlong)puVar18 + 4);
            }
            if ((puVar26 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar18 == (short)*puVar26)) {
              puVar26 = (ulonglong *)((longlong)puVar26 + 2);
              puVar18 = (ulonglong *)((longlong)puVar18 + 2);
            }
            if (puVar26 < param_2) {
              puVar26 = (ulonglong *)
                        ((longlong)puVar26 + (ulonglong)((char)*puVar18 == (char)*puVar26));
            }
            uVar15 = (longlong)puVar26 - (longlong)puVar14;
          }
          uVar23 = uVar23 + uVar15;
        }
        uVar23 = uVar23 + 4;
LAB_00ed9602:
        if ((uVar20 < uVar23) &&
           (*param_1 = (ulonglong)((uVar27 + 3) - uVar13), uVar20 = uVar23,
           (ulonglong *)(uVar23 + (longlong)unaff_RSI) == param_2)) {
          return uVar23;
        }
      }
    }
    else {
      puVar14 = (ulonglong *)(lVar6 + uVar23);
      if (*(int *)((uVar20 - 3) + (longlong)puVar14) == *(int *)((longlong)unaff_RSI + (uVar20 - 3))
         ) {
        puVar26 = unaff_RSI;
        if (unaff_RSI < puVar1) {
          local_90 = *unaff_RSI;
          uVar10 = *puVar14 ^ local_90;
          if (uVar10 == 0) {
            lVar17 = lVar6 + 8 + uVar23;
            lVar21 = 0;
            do {
              puVar26 = (ulonglong *)((longlong)unaff_RSI + lVar21 + 8);
              if (puVar1 <= puVar26) {
                puVar14 = (ulonglong *)(lVar17 + lVar21);
                goto LAB_00ed93bf;
              }
              lVar3 = lVar21 + 8;
              uVar23 = *(ulonglong *)((longlong)unaff_RSI + lVar21 + 8) ^
                       *(ulonglong *)(lVar17 + lVar21);
              lVar21 = lVar3;
            } while (uVar23 == 0);
            uVar10 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar23 = (uVar10 >> 3) + lVar3;
          }
          else {
            uVar23 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
              }
            }
            uVar23 = uVar23 >> 3;
          }
        }
        else {
LAB_00ed93bf:
          if ((puVar26 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar14 == (int)*puVar26))
          {
            puVar26 = (ulonglong *)((longlong)puVar26 + 4);
            puVar14 = (ulonglong *)((longlong)puVar14 + 4);
          }
          if ((puVar26 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar14 == (short)*puVar26)) {
            puVar26 = (ulonglong *)((longlong)puVar26 + 2);
            puVar14 = (ulonglong *)((longlong)puVar14 + 2);
          }
          if (puVar26 < param_2) {
            puVar26 = (ulonglong *)
                      ((longlong)puVar26 + (ulonglong)((char)*puVar14 == (char)*puVar26));
          }
          uVar23 = (longlong)puVar26 - (longlong)unaff_RSI;
        }
        goto LAB_00ed9602;
      }
    }
    if (uVar13 <= uVar12) {
      return uVar20;
    }
    iVar28 = iVar28 + -1;
    if (iVar28 == 0) {
      return uVar20;
    }
    uVar13 = *(uint *)(lVar7 + (ulonglong)(uVar13 & uVar24 - 1) * 4);
    if (uVar13 < uVar19) {
      return uVar20;
    }
  } while( true );
}



// Function: FUN_00ed8c33
// Address: 00ed8c33
// Size: 1274 bytes
// Class: GNString


ulonglong FUN_00ed8c33(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong *unaff_RSI;
  ulonglong uVar24;
  longlong unaff_RDI;
  uint uVar25;
  ulonglong *puVar26;
  int iVar27;
  ulonglong *puVar28;
  ulonglong local_98;
  
  bVar4 = *(byte *)(unaff_RDI + 0x104);
  uVar25 = 1 << (bVar4 & 0x1f);
  lVar6 = *(longlong *)(unaff_RDI + 8);
  uVar19 = (int)unaff_RSI - (int)lVar6;
  uVar22 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar10 = *(uint *)(unaff_RDI + 0x1c);
  uVar9 = uVar19 - uVar22;
  if (uVar19 - uVar10 <= uVar22) {
    uVar9 = uVar10;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar9 = uVar10;
  }
  uVar10 = uVar19 - uVar25;
  if (uVar19 < uVar25) {
    uVar10 = 0;
  }
  iVar27 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  uVar22 = *(uint *)(unaff_RDI + 0x2c);
  uVar11 = (ulonglong)uVar22;
  bVar15 = 0x20 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  uVar16 = uVar19;
  if (uVar19 < uVar22) {
    uVar16 = uVar22;
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x80);
  lVar8 = *(longlong *)(unaff_RDI + 0x10);
  uVar22 = *(uint *)(unaff_RDI + 0x18);
  uVar24 = (ulonglong)uVar22;
  iVar5 = *(int *)(unaff_RDI + 300);
  lVar12 = *(longlong *)(unaff_RDI + 0x70);
  do {
    if (uVar16 == uVar11) break;
    uVar14 = (ulonglong)((uint)(*(int *)(lVar6 + uVar11) * -0x61c8864f) >> (bVar15 & 0x1f));
    *(undefined4 *)(lVar7 + (ulonglong)((uint)uVar11 & ~(-1 << (bVar4 & 0x1f))) * 4) =
         *(undefined4 *)(lVar12 + uVar14 * 4);
    *(uint *)(lVar12 + uVar14 * 4) = (uint)uVar11;
    uVar11 = uVar11 + 1;
  } while (iVar5 == 0);
  *(uint *)(unaff_RDI + 0x2c) = uVar19;
  local_98 = (ulonglong)(uint)*unaff_RSI;
  uVar16 = *(uint *)(lVar12 + (ulonglong)((uint)*unaff_RSI * -0x61c8864f >> (bVar15 & 0x1f)) * 4);
  if (uVar16 < uVar9) {
    return 3;
  }
  puVar1 = (ulonglong *)((longlong)param_2 - 7);
  puVar2 = (ulonglong *)((longlong)unaff_RSI + 4);
  lVar12 = uVar24 + lVar6 + 8;
  uVar11 = 3;
  do {
    uVar14 = (ulonglong)uVar16;
    if (uVar16 < uVar22) {
      if (*(int *)(lVar8 + uVar14) == (int)local_98) {
        puVar28 = (ulonglong *)(lVar8 + uVar14 + 4);
        puVar17 = (ulonglong *)(((longlong)(lVar8 + uVar24) - (longlong)puVar28) + (longlong)puVar2)
        ;
        if (param_2 <= puVar17) {
          puVar17 = param_2;
        }
        puVar21 = puVar2;
        puVar26 = puVar28;
        if (puVar2 < (ulonglong *)((longlong)puVar17 - 7U)) {
          uVar13 = *puVar2 ^ *puVar28;
          if (uVar13 == 0) {
            lVar20 = lVar8 + 0xc + uVar14;
            lVar23 = 0;
            do {
              puVar21 = (ulonglong *)((longlong)unaff_RSI + lVar23 + 0xc);
              if ((ulonglong *)((longlong)puVar17 - 7U) <= puVar21) {
                puVar26 = (ulonglong *)(lVar20 + lVar23);
                goto LAB_00ed8f87;
              }
              lVar3 = lVar23 + 8;
              uVar14 = *(ulonglong *)((longlong)unaff_RSI + lVar23 + 0xc) ^
                       *(ulonglong *)(lVar20 + lVar23);
              lVar23 = lVar3;
            } while (uVar14 == 0);
            uVar13 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
              }
            }
            uVar14 = (uVar13 >> 3) + lVar3;
          }
          else {
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar14 = uVar14 >> 3;
          }
        }
        else {
LAB_00ed8f87:
          if ((puVar21 < (ulonglong *)((longlong)puVar17 - 3U)) &&
             ((uint)*puVar26 == (uint)*puVar21)) {
            puVar21 = (ulonglong *)((longlong)puVar21 + 4);
            puVar26 = (ulonglong *)((longlong)puVar26 + 4);
          }
          if ((puVar21 < (ulonglong *)((longlong)puVar17 - 1U)) &&
             ((short)*puVar26 == (short)*puVar21)) {
            puVar21 = (ulonglong *)((longlong)puVar21 + 2);
            puVar26 = (ulonglong *)((longlong)puVar26 + 2);
          }
          if (puVar21 < puVar17) {
            puVar21 = (ulonglong *)
                      ((longlong)puVar21 + (ulonglong)((char)*puVar26 == (char)*puVar21));
          }
          uVar14 = (longlong)puVar21 - (longlong)puVar2;
        }
        if ((char *)((longlong)puVar28 + uVar14) == (char *)(lVar8 + uVar24)) {
          puVar17 = (ulonglong *)((longlong)puVar2 + uVar14);
          puVar28 = puVar17;
          puVar21 = (ulonglong *)(lVar6 + uVar24);
          if (puVar17 < puVar1) {
            uVar13 = *puVar17 ^ *(ulonglong *)(lVar6 + uVar24);
            if (uVar13 == 0) {
              lVar20 = 0;
              do {
                puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar20 + uVar14 + 0xc);
                if (puVar1 <= puVar28) {
                  puVar21 = (ulonglong *)(lVar20 + lVar12);
                  goto LAB_00ed907f;
                }
                lVar23 = lVar20 + 8;
                uVar13 = *(ulonglong *)((longlong)unaff_RSI + lVar20 + uVar14 + 0xc) ^
                         *(ulonglong *)(lVar12 + lVar20);
                lVar20 = lVar23;
              } while (uVar13 == 0);
              uVar18 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar18 = (uVar18 >> 3) + lVar23;
            }
            else {
              uVar18 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar18 = uVar18 >> 3;
            }
          }
          else {
LAB_00ed907f:
            if ((puVar28 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((uint)*puVar21 == (uint)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              puVar21 = (ulonglong *)((longlong)puVar21 + 4);
            }
            if ((puVar28 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar21 == (short)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              puVar21 = (ulonglong *)((longlong)puVar21 + 2);
            }
            if (puVar28 < param_2) {
              puVar28 = (ulonglong *)
                        ((longlong)puVar28 + (ulonglong)((char)*puVar21 == (char)*puVar28));
            }
            uVar18 = (longlong)puVar28 - (longlong)puVar17;
          }
          uVar14 = uVar14 + uVar18;
        }
        uVar14 = uVar14 + 4;
LAB_00ed90e2:
        if ((uVar11 < uVar14) &&
           (*param_1 = (ulonglong)((uVar19 + 3) - uVar16), uVar11 = uVar14,
           (ulonglong *)((longlong)unaff_RSI + uVar14) == param_2)) {
          return uVar14;
        }
      }
    }
    else {
      puVar17 = (ulonglong *)(lVar6 + uVar14);
      if (*(int *)((uVar11 - 3) + (longlong)puVar17) == *(int *)((longlong)unaff_RSI + (uVar11 - 3))
         ) {
        puVar28 = unaff_RSI;
        if (unaff_RSI < puVar1) {
          local_98 = *unaff_RSI;
          uVar13 = *puVar17 ^ local_98;
          if (uVar13 == 0) {
            lVar20 = lVar6 + 8 + uVar14;
            lVar23 = 0;
            do {
              puVar28 = (ulonglong *)((longlong)unaff_RSI + lVar23 + 8);
              if (puVar1 <= puVar28) {
                puVar17 = (ulonglong *)(lVar20 + lVar23);
                goto LAB_00ed8ea4;
              }
              lVar3 = lVar23 + 8;
              uVar14 = *(ulonglong *)((longlong)unaff_RSI + lVar23 + 8) ^
                       *(ulonglong *)(lVar20 + lVar23);
              lVar23 = lVar3;
            } while (uVar14 == 0);
            uVar13 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
              }
            }
            uVar14 = (uVar13 >> 3) + lVar3;
          }
          else {
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar14 = uVar14 >> 3;
          }
        }
        else {
LAB_00ed8ea4:
          if ((puVar28 < (ulonglong *)((longlong)param_2 - 3U)) &&
             ((uint)*puVar17 == (uint)*puVar28)) {
            puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            puVar17 = (ulonglong *)((longlong)puVar17 + 4);
          }
          if ((puVar28 < (ulonglong *)((longlong)param_2 - 1U)) &&
             ((short)*puVar17 == (short)*puVar28)) {
            puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            puVar17 = (ulonglong *)((longlong)puVar17 + 2);
          }
          if (puVar28 < param_2) {
            puVar28 = (ulonglong *)
                      ((longlong)puVar28 + (ulonglong)((char)*puVar17 == (char)*puVar28));
          }
          uVar14 = (longlong)puVar28 - (longlong)unaff_RSI;
        }
        goto LAB_00ed90e2;
      }
    }
    if (uVar16 <= uVar10) {
      return uVar11;
    }
    iVar27 = iVar27 + -1;
    if (iVar27 == 0) {
      return uVar11;
    }
    uVar16 = *(uint *)(lVar7 + (ulonglong)(uVar16 & uVar25 - 1) * 4);
    if (uVar16 < uVar9) {
      return uVar11;
    }
  } while( true );
}



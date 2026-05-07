// Function: FUN_00ed3e30
// Address: 00ed3e30
// Size: 1887 bytes
// Class: GNString


ulonglong FUN_00ed3e30(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  uint uVar23;
  int *unaff_RSI;
  longlong lVar24;
  longlong unaff_RDI;
  ulonglong *puVar25;
  byte bVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  uint *puVar30;
  uint uVar31;
  longlong lVar32;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_8c;
  uint local_88;
  uint local_84;
  longlong local_78;
  ulonglong local_70;
  uint *local_68;
  ulonglong *local_60;
  uint local_54;
  uint *local_48;
  
  lVar6 = *(longlong *)(unaff_RDI + 8);
  uVar21 = (ulonglong)*(uint *)(unaff_RDI + 0x2c);
  if (unaff_RSI < (int *)(lVar6 + uVar21)) {
    uVar21 = 0;
  }
  else {
    lVar7 = *(longlong *)(unaff_RDI + 0x70);
    local_78 = *(longlong *)(unaff_RDI + 0x80);
    local_54 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
    bVar26 = 0x20 - (char)*(undefined4 *)(unaff_RDI + 0x108);
    uVar27 = (uint)((longlong)unaff_RSI - lVar6);
    if (*(uint *)(unaff_RDI + 0x2c) < uVar27) {
      do {
        uVar11 = (ulonglong)((uint)(*(int *)(lVar6 + uVar21) * -0x61c8864f) >> (bVar26 & 0x1f));
        uVar5 = *(undefined4 *)(lVar7 + uVar11 * 4);
        uVar12 = (ulonglong)(((uint)uVar21 & local_54) * 2);
        *(uint *)(lVar7 + uVar11 * 4) = (uint)uVar21;
        *(undefined4 *)(local_78 + uVar12 * 4) = uVar5;
        *(undefined4 *)(local_78 + 4 + uVar12 * 4) = 1;
        uVar21 = uVar21 + 1;
      } while (((longlong)unaff_RSI - lVar6 & 0xffffffffU) != uVar21);
      bVar26 = 0x20 - (char)*(undefined4 *)(unaff_RDI + 0x108);
      local_54 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar27;
    uVar21 = (ulonglong)((uint)(*unaff_RSI * -0x61c8864f) >> (bVar26 & 0x1f));
    uVar9 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
    uVar10 = *(uint *)(unaff_RDI + 0x1c);
    local_8c = uVar27 - uVar9;
    if (uVar27 - uVar10 <= uVar9) {
      local_8c = uVar10;
    }
    if (*(int *)(unaff_RDI + 0x28) != 0) {
      local_8c = uVar10;
    }
    uVar10 = 0;
    local_84 = uVar27 - local_54;
    if (uVar27 < local_54) {
      local_84 = uVar10;
    }
    uVar9 = local_8c;
    if (local_8c < local_84) {
      uVar9 = local_84;
    }
    local_88 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
    uVar23 = *(uint *)(lVar7 + uVar21 * 4);
    local_70 = (ulonglong)uVar9;
    local_b8 = local_88;
    local_60 = param_2;
    if (uVar9 < uVar23) {
      do {
        local_b4 = uVar23;
        uVar11 = (ulonglong)((local_b4 & local_54) * 2);
        iVar19 = *(int *)(local_78 + 4 + uVar11 * 4);
        if ((iVar19 != 1) || (local_b8 < 2)) {
          if (iVar19 == 1) {
            *(undefined8 *)(local_78 + uVar11 * 4) = 0;
          }
          local_b4 = uVar10;
          if (uVar10 == 0) goto LAB_00ed42c3;
          break;
        }
        *(uint *)(local_78 + 4 + uVar11 * 4) = uVar10;
        local_b8 = local_b8 - 1;
        uVar23 = *(uint *)(local_78 + uVar11 * 4);
        uVar10 = local_b4;
      } while (uVar9 < uVar23);
      lVar15 = *(longlong *)(unaff_RDI + 0x10);
      do {
        uVar11 = (ulonglong)local_b4;
        puVar22 = (ulonglong *)((ulonglong)*(uint *)(unaff_RDI + 0x18) + lVar15);
        lVar32 = lVar15;
        if (*(uint *)(unaff_RDI + 0x18) <= local_b4) {
          puVar22 = local_60;
          lVar32 = lVar6;
        }
        uVar23 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
        uVar12 = (ulonglong)((local_b4 & uVar23) * 2);
        uVar9 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
        uVar10 = local_b4 - uVar9;
        if (local_b4 - *(uint *)(unaff_RDI + 0x1c) <= uVar9) {
          uVar10 = *(uint *)(unaff_RDI + 0x1c);
        }
        local_b4 = *(uint *)(local_78 + (ulonglong)((local_b4 & local_54) * 2 + 1) * 4);
        local_48 = (uint *)(local_78 + uVar12 * 4);
        puVar30 = (uint *)(local_78 + uVar12 * 4 + 4);
        if ((local_b8 != 0) && (uVar9 = *(uint *)(local_78 + uVar12 * 4), uVar10 < uVar9)) {
          lVar2 = lVar32 + uVar11;
          uVar12 = 0;
          uVar20 = 0;
          uVar31 = local_b8;
          do {
            uVar13 = uVar20;
            if (uVar12 < uVar20) {
              uVar13 = uVar12;
            }
            lVar3 = lVar6 + (ulonglong)uVar9;
            puVar17 = (ulonglong *)(lVar2 + uVar13);
            puVar25 = (ulonglong *)(lVar3 + uVar13);
            puVar29 = puVar17;
            if (puVar17 < (ulonglong *)((longlong)puVar22 - 7U)) {
              uVar16 = *puVar17 ^ *puVar25;
              if (uVar16 == 0) {
                lVar24 = uVar9 + uVar13 + lVar6 + 8;
                lVar4 = uVar11 + lVar32 + 8 + uVar13;
                lVar18 = 0;
                do {
                  puVar29 = (ulonglong *)(lVar4 + lVar18);
                  if ((ulonglong *)((longlong)puVar22 - 7U) <= puVar29) {
                    puVar25 = (ulonglong *)(lVar24 + lVar18);
                    goto LAB_00ed4143;
                  }
                  lVar1 = lVar18 + 8;
                  uVar16 = *(ulonglong *)(lVar4 + lVar18) ^ *(ulonglong *)(lVar24 + lVar18);
                  lVar18 = lVar1;
                } while (uVar16 == 0);
                uVar28 = 0;
                if (uVar16 != 0) {
                  for (; (uVar16 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                  }
                }
                uVar28 = (uVar28 >> 3) + lVar1;
              }
              else {
                uVar28 = 0;
                if (uVar16 != 0) {
                  for (; (uVar16 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                  }
                }
                uVar28 = uVar28 >> 3;
              }
            }
            else {
LAB_00ed4143:
              if ((puVar29 < (ulonglong *)((longlong)puVar22 - 3U)) &&
                 ((int)*puVar25 == (int)*puVar29)) {
                puVar29 = (ulonglong *)((longlong)puVar29 + 4);
                puVar25 = (ulonglong *)((longlong)puVar25 + 4);
              }
              if ((puVar29 < (ulonglong *)((longlong)puVar22 + -1)) &&
                 ((short)*puVar25 == (short)*puVar29)) {
                puVar29 = (ulonglong *)((longlong)puVar29 + 2);
                puVar25 = (ulonglong *)((longlong)puVar25 + 2);
              }
              if (puVar29 < puVar22) {
                puVar29 = (ulonglong *)
                          ((longlong)puVar29 + (ulonglong)((byte)*puVar25 == (byte)*puVar29));
              }
              uVar28 = (longlong)puVar29 - (longlong)puVar17;
            }
            uVar28 = uVar28 + uVar13;
            puVar17 = (ulonglong *)(lVar2 + uVar28);
            if (puVar17 == puVar22) break;
            puVar14 = (uint *)(local_78 + (ulonglong)((uVar9 & uVar23) * 2) * 4);
            if (*(byte *)(lVar3 + uVar28) < (byte)*puVar17) {
              *local_48 = uVar9;
              if (uVar9 <= (uint)local_70) {
                local_48 = &local_c0;
                break;
              }
              puVar14 = puVar14 + 1;
              uVar12 = uVar28;
              uVar28 = uVar20;
              local_48 = puVar14;
            }
            else {
              *puVar30 = uVar9;
              puVar30 = puVar14;
              if (uVar9 <= (uint)local_70) {
                puVar30 = &local_c0;
                break;
              }
            }
            uVar31 = uVar31 - 1;
            if ((uVar31 == 0) || (uVar9 = *puVar14, uVar20 = uVar28, uVar9 <= uVar10)) break;
          } while( true );
        }
        *puVar30 = 0;
        *local_48 = 0;
        local_b8 = local_b8 + 1;
      } while (local_b4 != 0);
    }
LAB_00ed42c3:
    uVar11 = (ulonglong)((local_54 & uVar27) * 2);
    local_68 = (uint *)(local_78 + uVar11 * 4);
    puVar30 = (uint *)(local_78 + uVar11 * 4 + 4);
    iVar19 = uVar27 + 9;
    uVar10 = *(uint *)(lVar7 + uVar21 * 4);
    *(uint *)(lVar7 + uVar21 * 4) = uVar27;
    if (local_8c < uVar10) {
      uVar21 = 0;
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar20 = uVar12;
        if (uVar11 < uVar12) {
          uVar20 = uVar11;
        }
        lVar7 = lVar6 + (ulonglong)uVar10;
        puVar22 = (ulonglong *)((longlong)unaff_RSI + uVar20);
        puVar17 = (ulonglong *)(lVar7 + uVar20);
        puVar25 = puVar22;
        if (puVar22 < (ulonglong *)((longlong)local_60 - 7U)) {
          uVar13 = *puVar22 ^ *puVar17;
          if (uVar13 == 0) {
            lVar32 = uVar10 + uVar20 + lVar6 + 8;
            lVar15 = 0;
            do {
              puVar25 = (ulonglong *)((longlong)unaff_RSI + lVar15 + uVar20 + 8);
              if ((ulonglong *)((longlong)local_60 - 7U) <= puVar25) {
                puVar17 = (ulonglong *)(lVar32 + lVar15);
                goto LAB_00ed43a0;
              }
              lVar2 = lVar15 + 8;
              uVar13 = *(ulonglong *)((longlong)unaff_RSI + lVar15 + uVar20 + 8) ^
                       *(ulonglong *)(lVar32 + lVar15);
              lVar15 = lVar2;
            } while (uVar13 == 0);
            uVar16 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            uVar16 = (uVar16 >> 3) + lVar2;
          }
          else {
            uVar16 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            uVar16 = uVar16 >> 3;
          }
        }
        else {
LAB_00ed43a0:
          if ((puVar25 < (ulonglong *)((longlong)local_60 - 3U)) && ((int)*puVar17 == (int)*puVar25)
             ) {
            puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            puVar17 = (ulonglong *)((longlong)puVar17 + 4);
          }
          if ((puVar25 < (ulonglong *)((longlong)local_60 - 1U)) &&
             ((short)*puVar17 == (short)*puVar25)) {
            puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            puVar17 = (ulonglong *)((longlong)puVar17 + 2);
          }
          if (puVar25 < local_60) {
            puVar25 = (ulonglong *)
                      ((longlong)puVar25 + (ulonglong)((byte)*puVar17 == (byte)*puVar25));
          }
          uVar16 = (longlong)puVar25 - (longlong)puVar22;
        }
        uVar16 = uVar16 + uVar20;
        if (uVar21 < uVar16) {
          iVar8 = uVar10 + (int)uVar16;
          if (uVar16 <= iVar19 - uVar10) {
            iVar8 = iVar19;
          }
          iVar19 = iVar8;
          uVar9 = (uVar27 - uVar10) + 1;
          uVar23 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> uVar23 == 0; uVar23 = uVar23 - 1) {
            }
          }
          uVar9 = 0x1f;
          if ((uint)*param_1 != 0) {
            for (; (uint)*param_1 >> uVar9 == 0; uVar9 = uVar9 - 1) {
            }
          }
          if ((int)((uVar9 ^ 0x1f) - (uVar23 ^ 0x1f)) < ((int)uVar16 - (int)uVar21) * 4) {
            *param_1 = (ulonglong)((uVar27 - uVar10) + 3);
            uVar21 = uVar16;
          }
          if ((ulonglong *)((longlong)unaff_RSI + uVar16) == local_60) goto LAB_00ed4566;
        }
        puVar14 = (uint *)(local_78 + (ulonglong)((uVar10 & local_54) * 2) * 4);
        if (*(byte *)(lVar7 + uVar16) < *(byte *)((longlong)unaff_RSI + uVar16)) {
          *local_68 = uVar10;
          if (uVar10 <= local_84) {
            local_68 = &local_bc;
            goto LAB_00ed4566;
          }
          puVar14 = puVar14 + 1;
          uVar11 = uVar16;
          uVar16 = uVar12;
          local_68 = puVar14;
        }
        else {
          *puVar30 = uVar10;
          puVar30 = puVar14;
          if (uVar10 <= local_84) {
            puVar30 = &local_bc;
            goto LAB_00ed4566;
          }
        }
        local_88 = local_88 - 1;
        if ((local_88 == 0) || (uVar10 = *puVar14, uVar12 = uVar16, uVar10 <= local_8c))
        goto LAB_00ed4566;
      } while( true );
    }
    uVar21 = 0;
LAB_00ed4566:
    *puVar30 = 0;
    *local_68 = 0;
    *(int *)(unaff_RDI + 0x2c) = iVar19 + -8;
  }
  return uVar21;
}



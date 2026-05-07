// Function: FUN_00eadf3b
// Address: 00eadf3b
// Size: 2721 bytes
// Class: Unknown


ulonglong FUN_00eadf3b(ulonglong *param_1,uint *param_2,ulonglong *param_3,int *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  longlong unaff_RSI;
  ulonglong uVar22;
  int *unaff_RDI;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  ulonglong *puVar27;
  longlong lVar28;
  longlong lVar29;
  uint *puVar30;
  int iVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong *puVar35;
  uint local_res8;
  int local_res10;
  uint local_e0;
  uint local_dc [3];
  ulonglong local_a0;
  ulonglong local_80;
  uint *local_48;
  longlong local_40;
  uint *local_38;
  
  lVar6 = *(longlong *)(unaff_RSI + 8);
  uVar21 = (ulonglong)*(uint *)(unaff_RSI + 0x2c);
  if (param_1 < (ulonglong *)(uVar21 + lVar6)) {
    return 0;
  }
  puVar1 = (ulonglong *)((longlong)param_3 - 7);
  puVar2 = (ulonglong *)((longlong)param_3 - 3);
  puVar3 = (ulonglong *)((longlong)param_3 - 1);
  uVar26 = (uint)((longlong)param_1 - lVar6);
  if (*(uint *)(unaff_RSI + 0x2c) < uVar26) {
    lVar29 = *(longlong *)(unaff_RSI + 0x70);
    local_40 = *(longlong *)(unaff_RSI + 0x80);
    do {
      uVar11 = (uint)uVar21;
      uVar33 = (ulonglong)
               ((uint)(*(int *)(lVar6 + uVar21) * -0x61c8864f) >>
               (-*(char *)(unaff_RSI + 0x108) & 0x1fU));
      uVar32 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
      uVar8 = uVar11 - uVar32;
      if (uVar11 < uVar32) {
        uVar8 = 0;
      }
      uVar7 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
      uVar9 = (ulonglong)((uVar11 & uVar32) * 2);
      uVar12 = *(uint *)(unaff_RSI + 0x1c);
      uVar15 = uVar26 - uVar7;
      if (uVar26 - uVar12 <= uVar7) {
        uVar15 = uVar12;
      }
      uVar7 = *(uint *)(lVar29 + uVar33 * 4);
      local_48 = (uint *)(local_40 + uVar9 * 4);
      puVar30 = (uint *)(local_40 + 4 + uVar9 * 4);
      if (*(int *)(unaff_RSI + 0x28) != 0) {
        uVar15 = uVar12;
      }
      uVar5 = *(undefined4 *)(unaff_RSI + 0x10c);
      *(uint *)(lVar29 + uVar33 * 4) = uVar11;
      iVar31 = uVar11 + 9;
      uVar33 = 8;
      if (uVar15 <= uVar7) {
        iVar25 = 1 << ((byte)uVar5 & 0x1f);
        uVar33 = 8;
        local_80 = 0;
        local_a0 = 0;
        puVar19 = puVar30;
        do {
          uVar9 = local_a0;
          if (local_80 < local_a0) {
            uVar9 = local_80;
          }
          lVar24 = lVar6 + (ulonglong)uVar7;
          puVar35 = (ulonglong *)(uVar21 + lVar6 + uVar9);
          puVar18 = (ulonglong *)(lVar24 + uVar9);
          puVar27 = puVar35;
          if (puVar35 < puVar1) {
            uVar22 = *puVar35 ^ *puVar18;
            if (uVar22 == 0) {
              lVar23 = uVar7 + uVar9 + lVar6 + 8;
              lVar34 = lVar6 + 8 + uVar21 + uVar9;
              lVar28 = 0;
              do {
                puVar27 = (ulonglong *)(lVar34 + lVar28);
                if (puVar1 <= puVar27) {
                  puVar18 = (ulonglong *)(lVar23 + lVar28);
                  goto LAB_00eae12f;
                }
                lVar4 = lVar28 + 8;
                uVar22 = *(ulonglong *)(lVar34 + lVar28) ^ *(ulonglong *)(lVar23 + lVar28);
                lVar28 = lVar4;
              } while (uVar22 == 0);
              uVar13 = 0;
              if (uVar22 != 0) {
                for (; (uVar22 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                }
              }
              uVar13 = (uVar13 >> 3) + lVar4;
            }
            else {
              uVar13 = 0;
              if (uVar22 != 0) {
                for (; (uVar22 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                }
              }
              uVar13 = uVar13 >> 3;
            }
          }
          else {
LAB_00eae12f:
            if ((puVar27 < puVar2) && ((uint)*puVar18 == (uint)*puVar27)) {
              puVar27 = (ulonglong *)((longlong)puVar27 + 4);
              puVar18 = (ulonglong *)((longlong)puVar18 + 4);
            }
            if ((puVar27 < puVar3) && ((short)*puVar18 == (short)*puVar27)) {
              puVar27 = (ulonglong *)((longlong)puVar27 + 2);
              puVar18 = (ulonglong *)((longlong)puVar18 + 2);
            }
            if (puVar27 < param_3) {
              puVar27 = (ulonglong *)
                        ((longlong)puVar27 + (ulonglong)((byte)*puVar18 == (byte)*puVar27));
            }
            uVar13 = (longlong)puVar27 - (longlong)puVar35;
          }
          uVar13 = uVar13 + uVar9;
          if ((uVar33 < uVar13) && (uVar33 = uVar13, iVar31 - uVar7 < uVar13)) {
            iVar31 = uVar7 + (int)uVar13;
          }
          puVar35 = (ulonglong *)(uVar21 + lVar6 + uVar13);
          puVar30 = puVar19;
          if (puVar35 == param_3) break;
          puVar30 = (uint *)(local_40 + (ulonglong)((uVar7 & uVar32) * 2) * 4);
          if (*(byte *)(lVar24 + uVar13) < (byte)*puVar35) {
            *local_48 = uVar7;
            if (uVar7 <= uVar8) {
              local_48 = local_dc;
              puVar30 = puVar19;
              break;
            }
            local_48 = puVar30 + 1;
            puVar30 = puVar19;
            puVar19 = local_48;
            local_80 = uVar13;
          }
          else {
            *puVar19 = uVar7;
            puVar19 = puVar30;
            local_a0 = uVar13;
            if (uVar7 <= uVar8) {
              puVar30 = local_dc;
              break;
            }
          }
          iVar25 = iVar25 + -1;
          if ((iVar25 == 0) || (uVar7 = *puVar19, puVar19 = puVar30, uVar7 < uVar15)) break;
        } while( true );
      }
      uVar8 = (int)uVar33 - 0x180;
      if (0xbf < uVar8) {
        uVar8 = 0xc0;
      }
      if (uVar33 < 0x181) {
        uVar8 = 0;
      }
      uVar32 = (iVar31 - uVar11) - 8;
      if (uVar32 < uVar8) {
        uVar32 = uVar8;
      }
      *puVar30 = 0;
      *local_48 = 0;
      uVar21 = (ulonglong)(uVar32 + uVar11);
    } while (uVar32 + uVar11 < uVar26);
  }
  else {
    lVar29 = *(longlong *)(unaff_RSI + 0x70);
    local_40 = *(longlong *)(unaff_RSI + 0x80);
  }
  *(uint *)(unaff_RSI + 0x2c) = uVar26;
  uVar8 = 0xfff;
  if (*(uint *)(unaff_RSI + 0x114) < 0xfff) {
    uVar8 = *(uint *)(unaff_RSI + 0x114);
  }
  uVar21 = (ulonglong)((uint)*param_1 * -0x61c8864f >> (-*(char *)(unaff_RSI + 0x108) & 0x1fU));
  uVar32 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
  uVar11 = uVar26 - uVar32;
  if (uVar26 < uVar32) {
    uVar11 = 0;
  }
  uVar7 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
  uVar12 = *(uint *)(unaff_RSI + 0x1c);
  uVar15 = uVar26 - uVar7;
  if (uVar26 - uVar12 <= uVar7) {
    uVar15 = uVar12;
  }
  if (*(int *)(unaff_RSI + 0x28) != 0) {
    uVar15 = uVar12;
  }
  uVar12 = uVar15;
  if (uVar15 == 0) {
    uVar12 = 1;
  }
  iVar31 = 1 << (*(byte *)(unaff_RSI + 0x10c) & 0x1f);
  uVar7 = *(uint *)(lVar29 + uVar21 * 4);
  uVar33 = (ulonglong)(local_res10 - 1);
  if (local_res8 < 0xfffffffd) {
    iVar25 = *(int *)(unaff_RSI + 0x18);
    puVar35 = (ulonglong *)((longlong)param_1 + 3);
    uVar22 = (ulonglong)local_res8;
    uVar9 = 0;
    do {
      if (uVar22 == 3) {
        uVar16 = *param_4 - 1;
      }
      else {
        uVar16 = param_4[uVar22];
      }
      uVar13 = 0;
      if (((uVar16 - 1 < uVar26 - iVar25) && (uVar15 <= uVar26 - uVar16)) &&
         (((*(uint *)((longlong)param_1 - (ulonglong)uVar16) ^ (uint)*param_1) & 0xffffff) == 0)) {
        lVar24 = -(ulonglong)uVar16;
        puVar18 = (ulonglong *)((longlong)puVar35 + lVar24);
        puVar27 = puVar35;
        if (puVar35 < puVar1) {
          uVar13 = *puVar35 ^ *puVar18;
          if (uVar13 == 0) {
            lVar24 = lVar24 + 0xb;
            lVar34 = 0;
            do {
              puVar27 = (ulonglong *)((longlong)param_1 + lVar34 + 0xb);
              if (puVar1 <= puVar27) {
                puVar18 = (ulonglong *)((longlong)param_1 + lVar34 + lVar24);
                goto LAB_00eae4b7;
              }
              lVar28 = lVar34 + 8;
              uVar13 = *(ulonglong *)((longlong)param_1 + lVar34 + 0xb) ^
                       *(ulonglong *)((longlong)param_1 + lVar34 + lVar24);
              lVar34 = lVar28;
            } while (uVar13 == 0);
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            iVar20 = (int)(uVar14 >> 3) + (int)lVar28;
          }
          else {
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            iVar20 = (int)(uVar14 >> 3);
          }
        }
        else {
LAB_00eae4b7:
          if ((puVar27 < puVar2) && ((uint)*puVar18 == (uint)*puVar27)) {
            puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            puVar18 = (ulonglong *)((longlong)puVar18 + 4);
          }
          if ((puVar27 < puVar3) && ((short)*puVar18 == (short)*puVar27)) {
            puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            puVar18 = (ulonglong *)((longlong)puVar18 + 2);
          }
          if (puVar27 < param_3) {
            puVar27 = (ulonglong *)
                      ((longlong)puVar27 + (ulonglong)((byte)*puVar18 == (byte)*puVar27));
          }
          iVar20 = (int)puVar27 - (int)puVar35;
        }
        uVar13 = (ulonglong)(iVar20 + 3);
      }
      if (uVar33 < uVar13) {
        unaff_RDI[uVar9 * 2] = (1 - local_res8) + (int)uVar22;
        unaff_RDI[uVar9 * 2 + 1] = (uint)uVar13;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        if (uVar8 < (uint)uVar13) {
          return uVar9;
        }
        uVar33 = uVar13;
        if ((ulonglong *)((longlong)param_1 + uVar13) == param_3) {
          return uVar9;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < local_res8 + 3);
  }
  else {
    uVar9 = 0;
  }
  if (uVar33 < 3) {
    lVar24 = *(longlong *)(unaff_RSI + 0x78);
    uVar13 = (ulonglong)*param_2;
    uVar22 = *param_1;
    bVar10 = 0x20 - (char)*(undefined4 *)(unaff_RSI + 0x30);
    if (*param_2 < uVar26) {
      do {
        *(int *)(lVar24 + (ulonglong)
                          ((uint)(*(int *)(lVar6 + uVar13) * 0x35a7bd00) >> (bVar10 & 0x1f)) * 4) =
             (int)uVar13;
        uVar13 = uVar13 + 1;
      } while (((longlong)param_1 - lVar6 & 0xffffffffU) != uVar13);
    }
    *param_2 = uVar26;
    uVar15 = *(uint *)(lVar24 + (ulonglong)((uint)uVar22 * 0x35a7bd00 >> (bVar10 & 0x1f)) * 4);
    uVar22 = (ulonglong)uVar15;
    if ((uVar12 <= uVar15) && (uVar26 - uVar15 < 0x40000)) {
      puVar35 = (ulonglong *)(lVar6 + uVar22);
      puVar18 = param_1;
      if (param_1 < puVar1) {
        uVar13 = *param_1 ^ *puVar35;
        if (uVar13 == 0) {
          lVar24 = 0;
          do {
            if (puVar1 <= (ulonglong *)((longlong)param_1 + lVar24 + 8)) {
              puVar35 = (ulonglong *)(lVar24 + uVar22 + lVar6 + 8);
              puVar18 = (ulonglong *)((longlong)param_1 + lVar24 + 8);
              goto LAB_00eae636;
            }
            lVar34 = lVar24 + 8;
            uVar13 = *(ulonglong *)((longlong)param_1 + lVar24 + 8) ^
                     *(ulonglong *)(uVar22 + lVar6 + 8 + lVar24);
            lVar24 = lVar34;
          } while (uVar13 == 0);
          uVar22 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
            }
          }
          uVar22 = (uVar22 >> 3) + lVar34;
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
LAB_00eae636:
        if ((puVar18 < puVar2) && ((uint)*puVar35 == (uint)*puVar18)) {
          puVar18 = (ulonglong *)((longlong)puVar18 + 4);
          puVar35 = (ulonglong *)((longlong)puVar35 + 4);
        }
        if ((puVar18 < puVar3) && ((short)*puVar35 == (short)*puVar18)) {
          puVar18 = (ulonglong *)((longlong)puVar18 + 2);
          puVar35 = (ulonglong *)((longlong)puVar35 + 2);
        }
        if (puVar18 < param_3) {
          puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)((byte)*puVar35 == (byte)*puVar18))
          ;
        }
        uVar22 = (longlong)puVar18 - (longlong)param_1;
      }
      if (2 < uVar22) {
        *unaff_RDI = (uVar26 - uVar15) + 3;
        unaff_RDI[1] = (int)uVar22;
        if ((uVar8 < uVar22) ||
           (uVar9 = 1, uVar33 = uVar22, (ulonglong *)((longlong)param_1 + uVar22) == param_3)) {
          iVar25 = uVar26 + 1;
          uVar9 = 1;
          goto LAB_00eae74b;
        }
      }
    }
  }
  uVar22 = (ulonglong)((uVar32 & uVar26) * 2);
  local_38 = (uint *)(local_40 + uVar22 * 4);
  puVar30 = (uint *)(local_40 + uVar22 * 4 + 4);
  iVar25 = uVar26 + 9;
  *(uint *)(lVar29 + uVar21 * 4) = uVar26;
  if (uVar12 <= uVar7) {
    uVar21 = 0;
    uVar22 = 0;
    do {
      uVar13 = uVar22;
      if (uVar21 < uVar22) {
        uVar13 = uVar21;
      }
      lVar29 = lVar6 + (ulonglong)uVar7;
      puVar27 = (ulonglong *)((longlong)param_1 + uVar13);
      puVar35 = (ulonglong *)(lVar29 + uVar13);
      puVar18 = puVar27;
      if (puVar27 < puVar1) {
        uVar14 = *puVar27 ^ *puVar35;
        if (uVar14 == 0) {
          lVar34 = uVar7 + uVar13 + lVar6 + 8;
          lVar24 = 0;
          do {
            puVar18 = (ulonglong *)((longlong)param_1 + lVar24 + uVar13 + 8);
            if (puVar1 <= puVar18) {
              puVar35 = (ulonglong *)(lVar34 + lVar24);
              goto LAB_00eae7e8;
            }
            lVar28 = lVar24 + 8;
            uVar14 = *(ulonglong *)((longlong)param_1 + lVar24 + uVar13 + 8) ^
                     *(ulonglong *)(lVar34 + lVar24);
            lVar24 = lVar28;
          } while (uVar14 == 0);
          uVar17 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
            }
          }
          uVar17 = (uVar17 >> 3) + lVar28;
        }
        else {
          uVar17 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
            }
          }
          uVar17 = uVar17 >> 3;
        }
      }
      else {
LAB_00eae7e8:
        if ((puVar18 < puVar2) && ((uint)*puVar35 == (uint)*puVar18)) {
          puVar18 = (ulonglong *)((longlong)puVar18 + 4);
          puVar35 = (ulonglong *)((longlong)puVar35 + 4);
        }
        if ((puVar18 < puVar3) && ((short)*puVar35 == (short)*puVar18)) {
          puVar18 = (ulonglong *)((longlong)puVar18 + 2);
          puVar35 = (ulonglong *)((longlong)puVar35 + 2);
        }
        if (puVar18 < param_3) {
          puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)((byte)*puVar35 == (byte)*puVar18))
          ;
        }
        uVar17 = (longlong)puVar18 - (longlong)puVar27;
      }
      uVar17 = uVar17 + uVar13;
      if (uVar33 < uVar17) {
        iVar20 = uVar7 + (int)uVar17;
        if (uVar17 <= iVar25 - uVar7) {
          iVar20 = iVar25;
        }
        iVar25 = iVar20;
        unaff_RDI[uVar9 * 2] = (uVar26 + 3) - uVar7;
        unaff_RDI[uVar9 * 2 + 1] = (int)uVar17;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        if ((0x1000 < uVar17) ||
           (uVar33 = uVar17, (ulonglong *)((longlong)param_1 + uVar17) == param_3)) break;
      }
      puVar19 = (uint *)(local_40 + (ulonglong)((uVar7 & uVar32) * 2) * 4);
      if (*(byte *)(lVar29 + uVar17) < *(byte *)((longlong)param_1 + uVar17)) {
        *local_38 = uVar7;
        if (uVar7 <= uVar11) {
          local_38 = &local_e0;
          break;
        }
        puVar19 = puVar19 + 1;
        uVar21 = uVar17;
        uVar17 = uVar22;
        local_38 = puVar19;
      }
      else {
        *puVar30 = uVar7;
        puVar30 = puVar19;
        if (uVar7 <= uVar11) {
          puVar30 = &local_e0;
          break;
        }
      }
      iVar31 = iVar31 + -1;
      if ((iVar31 == 0) || (uVar7 = *puVar19, uVar22 = uVar17, uVar7 < uVar12)) break;
    } while( true );
  }
  *puVar30 = 0;
  *local_38 = 0;
  iVar25 = iVar25 + -8;
LAB_00eae74b:
  *(int *)(unaff_RSI + 0x2c) = iVar25;
  return uVar9;
}



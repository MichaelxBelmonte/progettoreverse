// Function: FUN_00eae9dc
// Address: 00eae9dc
// Size: 2189 bytes
// Class: Unknown


ulonglong FUN_00eae9dc(int *param_1,undefined8 param_2,ulonglong *param_3,int *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong unaff_RSI;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong unaff_RDI;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  longlong lVar29;
  ulonglong *puVar30;
  uint local_res8;
  int local_res10;
  uint local_d0;
  uint local_cc;
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong local_b0;
  longlong local_a0;
  longlong local_90;
  longlong local_88;
  ulonglong local_70;
  ulonglong *local_68;
  uint *local_60;
  ulonglong local_50;
  ulonglong *local_48;
  int *local_40;
  
  local_90 = *(longlong *)(unaff_RSI + 8);
  uVar15 = (ulonglong)*(uint *)(unaff_RSI + 0x2c);
  uVar19 = 0;
  if ((int *)(local_90 + uVar15) <= param_1) {
    uVar23 = (int)param_1 - (int)local_90;
    local_70 = (ulonglong)uVar23;
    local_68 = (ulonglong *)((longlong)param_3 + -7);
    local_c8 = (ulonglong *)((longlong)param_3 + -3);
    local_c0 = (ulonglong *)((longlong)param_3 + -1);
    local_48 = param_3;
    local_40 = param_1;
    if (*(uint *)(unaff_RSI + 0x2c) < uVar23) {
      local_b0 = *(longlong *)(unaff_RSI + 0x70);
      local_88 = *(longlong *)(unaff_RSI + 0x80);
      local_a0 = local_90 + 8;
      do {
        uVar10 = (uint)uVar15;
        uVar19 = (ulonglong)
                 ((uint)(*(int *)(local_90 + uVar15) * -0x61c8864f) >>
                 (-*(char *)(unaff_RSI + 0x108) & 0x1fU));
        uVar23 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
        uVar5 = uVar10 - uVar23;
        if (uVar10 < uVar23) {
          uVar5 = 0;
        }
        uVar3 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
        uVar4 = (ulonglong)((uVar10 & uVar23) * 2);
        uVar6 = *(uint *)(unaff_RSI + 0x1c);
        uVar13 = (int)local_70 - uVar3;
        if ((int)local_70 - uVar6 <= uVar3) {
          uVar13 = uVar6;
        }
        uVar3 = *(uint *)(local_b0 + uVar19 * 4);
        puVar28 = (uint *)(local_88 + uVar4 * 4);
        puVar8 = (uint *)(local_88 + 4 + uVar4 * 4);
        if (*(int *)(unaff_RSI + 0x28) != 0) {
          uVar13 = uVar6;
        }
        uVar2 = *(undefined4 *)(unaff_RSI + 0x10c);
        *(uint *)(local_b0 + uVar19 * 4) = uVar10;
        iVar22 = uVar10 + 9;
        uVar19 = 8;
        if (uVar13 <= uVar3) {
          iVar24 = 1 << ((byte)uVar2 & 0x1f);
          uVar19 = 8;
          uVar16 = 0;
          uVar4 = 0;
          do {
            uVar12 = uVar4;
            if (uVar16 < uVar4) {
              uVar12 = uVar16;
            }
            lVar14 = local_90 + (ulonglong)uVar3;
            puVar21 = (ulonglong *)(local_90 + uVar15 + uVar12);
            puVar26 = (ulonglong *)(lVar14 + uVar12);
            puVar30 = puVar21;
            if (puVar21 < local_68) {
              uVar20 = *puVar21 ^ *puVar26;
              if (uVar20 == 0) {
                lVar25 = uVar3 + uVar12 + local_a0;
                lVar9 = local_a0 + uVar15 + uVar12;
                lVar29 = 0;
                do {
                  puVar30 = (ulonglong *)(lVar9 + lVar29);
                  param_3 = local_48;
                  if (local_68 <= puVar30) {
                    puVar26 = (ulonglong *)(lVar25 + lVar29);
                    goto LAB_00eaebca;
                  }
                  lVar1 = lVar29 + 8;
                  uVar20 = *(ulonglong *)(lVar9 + lVar29) ^ *(ulonglong *)(lVar25 + lVar29);
                  lVar29 = lVar1;
                } while (uVar20 == 0);
                uVar27 = 0;
                if (uVar20 != 0) {
                  for (; (uVar20 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                  }
                }
                uVar27 = (uVar27 >> 3) + lVar1;
              }
              else {
                uVar27 = 0;
                if (uVar20 != 0) {
                  for (; (uVar20 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                  }
                }
                uVar27 = uVar27 >> 3;
              }
            }
            else {
LAB_00eaebca:
              if ((puVar30 < local_c8) && ((int)*puVar26 == (int)*puVar30)) {
                puVar30 = (ulonglong *)((longlong)puVar30 + 4);
                puVar26 = (ulonglong *)((longlong)puVar26 + 4);
              }
              if ((puVar30 < local_c0) && ((short)*puVar26 == (short)*puVar30)) {
                puVar30 = (ulonglong *)((longlong)puVar30 + 2);
                puVar26 = (ulonglong *)((longlong)puVar26 + 2);
              }
              if (puVar30 < param_3) {
                puVar30 = (ulonglong *)
                          ((longlong)puVar30 + (ulonglong)((byte)*puVar26 == (byte)*puVar30));
              }
              uVar27 = (longlong)puVar30 - (longlong)puVar21;
            }
            uVar27 = uVar27 + uVar12;
            if ((uVar19 < uVar27) && (uVar19 = uVar27, iVar22 - uVar3 < uVar27)) {
              iVar22 = (int)uVar27 + uVar3;
            }
            puVar26 = (ulonglong *)(local_90 + uVar15 + uVar27);
            if (puVar26 == param_3) break;
            puVar11 = (uint *)(local_88 + (ulonglong)((uVar3 & uVar23) * 2) * 4);
            if (*(byte *)(lVar14 + uVar27) < (byte)*puVar26) {
              *puVar28 = uVar3;
              if (uVar3 <= uVar5) {
                puVar28 = &local_cc;
                break;
              }
              puVar11 = puVar11 + 1;
              uVar16 = uVar27;
              puVar28 = puVar11;
            }
            else {
              *puVar8 = uVar3;
              uVar4 = uVar27;
              puVar8 = puVar11;
              if (uVar3 <= uVar5) {
                puVar8 = &local_cc;
                break;
              }
            }
            iVar24 = iVar24 + -1;
            if ((iVar24 == 0) || (uVar3 = *puVar11, uVar3 < uVar13)) break;
          } while( true );
        }
        uVar23 = (int)uVar19 - 0x180;
        if (0xbf < uVar23) {
          uVar23 = 0xc0;
        }
        if (uVar19 < 0x181) {
          uVar23 = 0;
        }
        uVar5 = (iVar22 - uVar10) - 8;
        if (uVar5 < uVar23) {
          uVar5 = uVar23;
        }
        *puVar8 = 0;
        *puVar28 = 0;
        uVar15 = (ulonglong)(uVar5 + uVar10);
      } while (uVar5 + uVar10 < (uint)local_70);
    }
    else {
      local_b0 = *(longlong *)(unaff_RSI + 0x70);
      local_88 = *(longlong *)(unaff_RSI + 0x80);
      local_70._0_4_ = uVar23;
    }
    *(uint *)(unaff_RSI + 0x2c) = (uint)local_70;
    uVar23 = 0xfff;
    if (*(uint *)(unaff_RSI + 0x114) < 0xfff) {
      uVar23 = *(uint *)(unaff_RSI + 0x114);
    }
    uVar15 = (ulonglong)((uint)(*local_40 * -0x61c8864f) >> (-*(char *)(unaff_RSI + 0x108) & 0x1fU))
    ;
    uVar19 = 0;
    uVar10 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
    uVar5 = (uint)local_70 - uVar10;
    if ((uint)local_70 < uVar10) {
      uVar5 = 0;
    }
    uVar3 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
    uVar6 = *(uint *)(unaff_RSI + 0x1c);
    uVar13 = (uint)local_70 - uVar3;
    if ((uint)local_70 - uVar6 <= uVar3) {
      uVar13 = uVar6;
    }
    if (*(int *)(unaff_RSI + 0x28) != 0) {
      uVar13 = uVar6;
    }
    uVar6 = uVar13;
    if (uVar13 == 0) {
      uVar6 = 1;
    }
    iVar22 = 1 << (*(byte *)(unaff_RSI + 0x10c) & 0x1f);
    uVar3 = *(uint *)(local_b0 + uVar15 * 4);
    uVar4 = (ulonglong)(local_res10 - 1);
    if (local_res8 < 0xfffffffd) {
      iVar24 = *(int *)(unaff_RSI + 0x18);
      puVar26 = (ulonglong *)(local_40 + 1);
      uVar16 = (ulonglong)local_res8;
      uVar19 = 0;
      do {
        if (uVar16 == 3) {
          uVar7 = *param_4 - 1;
        }
        else {
          uVar7 = param_4[uVar16];
        }
        uVar18 = 0;
        if (((uVar7 - 1 < (uint)local_70 - iVar24) && (uVar18 = 0, uVar13 <= (uint)local_70 - uVar7)
            ) && (*local_40 == *(int *)((longlong)local_40 - (ulonglong)uVar7))) {
          lVar14 = -(ulonglong)uVar7;
          puVar30 = (ulonglong *)((longlong)puVar26 + lVar14);
          puVar21 = puVar26;
          if (puVar26 < local_68) {
            uVar12 = *puVar26 ^ *puVar30;
            if (uVar12 == 0) {
              lVar14 = lVar14 + 0xc;
              lVar9 = 0;
              do {
                puVar21 = (ulonglong *)((longlong)local_40 + lVar9 + 0xc);
                if (local_68 <= puVar21) {
                  puVar30 = (ulonglong *)((longlong)local_40 + lVar9 + lVar14);
                  goto LAB_00eaef40;
                }
                lVar29 = lVar9 + 8;
                uVar12 = *(ulonglong *)((longlong)local_40 + lVar9 + 0xc) ^
                         *(ulonglong *)((longlong)local_40 + lVar9 + lVar14);
                lVar9 = lVar29;
              } while (uVar12 == 0);
              uVar20 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
                }
              }
              iVar17 = (int)(uVar20 >> 3) + (int)lVar29;
            }
            else {
              uVar20 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
                }
              }
              iVar17 = (int)(uVar20 >> 3);
            }
          }
          else {
LAB_00eaef40:
            if ((puVar21 < local_c8) && ((int)*puVar30 == (int)*puVar21)) {
              puVar21 = (ulonglong *)((longlong)puVar21 + 4);
              puVar30 = (ulonglong *)((longlong)puVar30 + 4);
            }
            if ((puVar21 < local_c0) && ((short)*puVar30 == (short)*puVar21)) {
              puVar21 = (ulonglong *)((longlong)puVar21 + 2);
              puVar30 = (ulonglong *)((longlong)puVar30 + 2);
            }
            if (puVar21 < local_48) {
              puVar21 = (ulonglong *)
                        ((longlong)puVar21 + (ulonglong)((byte)*puVar30 == (byte)*puVar21));
            }
            iVar17 = (int)puVar21 - (int)puVar26;
          }
          uVar18 = iVar17 + 4;
        }
        uVar12 = (ulonglong)uVar18;
        if (uVar4 < uVar12) {
          *(uint *)(unaff_RDI + uVar19 * 8) = (1 - local_res8) + (int)uVar16;
          *(uint *)(unaff_RDI + 4 + uVar19 * 8) = uVar18;
          uVar19 = (ulonglong)((int)uVar19 + 1);
          if (uVar23 < uVar18) {
            return uVar19;
          }
          uVar4 = uVar12;
          if ((ulonglong *)((longlong)local_40 + uVar12) == local_48) {
            return uVar19;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < local_res8 + 3);
    }
    uVar16 = (ulonglong)((uVar10 & (uint)local_70) * 2);
    local_60 = (uint *)(local_88 + uVar16 * 4);
    puVar28 = (uint *)(local_88 + uVar16 * 4 + 4);
    iVar24 = (uint)local_70 + 9;
    *(uint *)(local_b0 + uVar15 * 4) = (uint)local_70;
    if (uVar6 <= uVar3) {
      uVar15 = 0;
      local_50 = 0;
      do {
        uVar16 = local_50;
        if (uVar15 < local_50) {
          uVar16 = uVar15;
        }
        lVar14 = local_90 + (ulonglong)uVar3;
        puVar26 = (ulonglong *)((longlong)local_40 + uVar16);
        puVar30 = (ulonglong *)(lVar14 + uVar16);
        puVar21 = puVar26;
        if (puVar26 < local_68) {
          uVar12 = *puVar26 ^ *puVar30;
          if (uVar12 == 0) {
            lVar29 = uVar3 + uVar16 + local_90 + 8;
            lVar9 = 0;
            do {
              puVar21 = (ulonglong *)((longlong)local_40 + lVar9 + uVar16 + 8);
              if (local_68 <= puVar21) {
                puVar30 = (ulonglong *)(lVar29 + lVar9);
                goto LAB_00eaf0bb;
              }
              lVar25 = lVar9 + 8;
              uVar12 = *(ulonglong *)((longlong)local_40 + lVar9 + uVar16 + 8) ^
                       *(ulonglong *)(lVar29 + lVar9);
              lVar9 = lVar25;
            } while (uVar12 == 0);
            uVar20 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
              }
            }
            uVar20 = (uVar20 >> 3) + lVar25;
          }
          else {
            uVar20 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
              }
            }
            uVar20 = uVar20 >> 3;
          }
        }
        else {
LAB_00eaf0bb:
          if ((puVar21 < local_c8) && ((int)*puVar30 == (int)*puVar21)) {
            puVar21 = (ulonglong *)((longlong)puVar21 + 4);
            puVar30 = (ulonglong *)((longlong)puVar30 + 4);
          }
          if ((puVar21 < local_c0) && ((short)*puVar30 == (short)*puVar21)) {
            puVar21 = (ulonglong *)((longlong)puVar21 + 2);
            puVar30 = (ulonglong *)((longlong)puVar30 + 2);
          }
          if (puVar21 < local_48) {
            puVar21 = (ulonglong *)
                      ((longlong)puVar21 + (ulonglong)((byte)*puVar30 == (byte)*puVar21));
          }
          uVar20 = (longlong)puVar21 - (longlong)puVar26;
        }
        uVar20 = uVar20 + uVar16;
        if (uVar4 < uVar20) {
          iVar17 = uVar3 + (int)uVar20;
          if (uVar20 <= iVar24 - uVar3) {
            iVar17 = iVar24;
          }
          iVar24 = iVar17;
          *(uint *)(unaff_RDI + uVar19 * 8) = ((uint)local_70 + 3) - uVar3;
          *(int *)(unaff_RDI + 4 + uVar19 * 8) = (int)uVar20;
          uVar19 = (ulonglong)((int)uVar19 + 1);
          if ((0x1000 < uVar20) ||
             (uVar4 = uVar20, (ulonglong *)((longlong)local_40 + uVar20) == local_48)) break;
        }
        puVar8 = (uint *)(local_88 + (ulonglong)((uVar3 & uVar10) * 2) * 4);
        if (*(byte *)(lVar14 + uVar20) < *(byte *)((longlong)local_40 + uVar20)) {
          *local_60 = uVar3;
          if (uVar3 <= uVar5) {
            local_60 = &local_d0;
            break;
          }
          puVar8 = puVar8 + 1;
          uVar15 = uVar20;
          local_60 = puVar8;
        }
        else {
          *puVar28 = uVar3;
          puVar28 = puVar8;
          local_50 = uVar20;
          if (uVar3 <= uVar5) {
            puVar28 = &local_d0;
            break;
          }
        }
        iVar22 = iVar22 + -1;
        if ((iVar22 == 0) || (uVar3 = *puVar8, uVar3 < uVar6)) break;
      } while( true );
    }
    *puVar28 = 0;
    *local_60 = 0;
    *(int *)(unaff_RSI + 0x2c) = iVar24 + -8;
  }
  return uVar19;
}



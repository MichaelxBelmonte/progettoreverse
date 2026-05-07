// Function: FUN_00ee2b99
// Address: 00ee2b99
// Size: 2784 bytes
// Class: GNString


ulonglong FUN_00ee2b99(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *unaff_RSI;
  ulonglong *puVar28;
  longlong lVar29;
  uint uVar30;
  longlong unaff_RDI;
  longlong lVar31;
  ulonglong *puVar32;
  byte bVar33;
  int iVar34;
  ulonglong uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  ulonglong *puVar39;
  uint uVar40;
  uint local_100;
  uint local_fc [5];
  uint local_e8;
  ulonglong local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong *local_b8;
  ulonglong local_b0;
  ulonglong local_a0;
  longlong local_98;
  ulonglong *local_88;
  ulonglong *local_80;
  ulonglong local_78;
  ulonglong *local_70;
  uint local_50;
  uint *local_40;
  
  lVar5 = *(longlong *)(unaff_RDI + 8);
  uVar26 = (ulonglong)*(uint *)(unaff_RDI + 0x2c);
  if (unaff_RSI < (longlong *)(lVar5 + uVar26)) {
    return 0;
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x70);
  local_98 = *(longlong *)(unaff_RDI + 0x80);
  uVar40 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
  local_d8 = (longlong)unaff_RSI - lVar5;
  bVar33 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  if (*(uint *)(unaff_RDI + 0x2c) < (uint)local_d8) {
    do {
      uVar12 = (ulonglong)(*(longlong *)(lVar5 + uVar26) * -0x30e4432345000000) >> (bVar33 & 0x3f);
      uVar3 = *(undefined4 *)(lVar6 + uVar12 * 4);
      uVar13 = (ulonglong)(((uint)uVar26 & uVar40) * 2);
      *(uint *)(lVar6 + uVar12 * 4) = (uint)uVar26;
      *(undefined4 *)(local_98 + uVar13 * 4) = uVar3;
      *(undefined4 *)(local_98 + 4 + uVar13 * 4) = 1;
      uVar26 = uVar26 + 1;
    } while ((local_d8 & 0xffffffff) != uVar26);
    bVar33 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
    uVar40 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
  }
  *(uint *)(unaff_RDI + 0x2c) = (uint)local_d8;
  lVar7 = *unaff_RSI;
  uVar26 = (ulonglong)(lVar7 * -0x30e4432345000000) >> (bVar33 & 0x3f);
  uVar10 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar11 = *(uint *)(unaff_RDI + 0x1c);
  uVar20 = (uint)local_d8 - uVar10;
  if ((uint)local_d8 - uVar11 <= uVar10) {
    uVar20 = uVar11;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar20 = uVar11;
  }
  uVar11 = 0;
  uVar10 = (uint)local_d8 - uVar40;
  if ((uint)local_d8 < uVar40) {
    uVar10 = uVar11;
  }
  local_a0 = (ulonglong)uVar20;
  local_b0 = (ulonglong)uVar10;
  uVar37 = uVar20;
  if (uVar20 < uVar10) {
    uVar37 = uVar10;
  }
  local_50 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  uVar4 = *(uint *)(lVar6 + uVar26 * 4);
  local_78 = (ulonglong)uVar37;
  uVar36 = local_50;
  local_b8 = param_1;
  local_70 = param_2;
  if (uVar37 < uVar4) {
    do {
      local_e8 = uVar4;
      uVar12 = (ulonglong)((local_e8 & uVar40) * 2);
      iVar34 = *(int *)(local_98 + 4 + uVar12 * 4);
      if ((iVar34 != 1) || (uVar36 < 2)) {
        if (iVar34 == 1) {
          *(undefined8 *)(local_98 + uVar12 * 4) = 0;
        }
        local_e8 = uVar11;
        if (uVar11 == 0) goto LAB_00ee3006;
        break;
      }
      *(uint *)(local_98 + 4 + uVar12 * 4) = uVar11;
      uVar36 = uVar36 - 1;
      uVar4 = *(uint *)(local_98 + uVar12 * 4);
      uVar11 = local_e8;
    } while (uVar37 < uVar4);
    local_c0 = *(longlong *)(unaff_RDI + 0x10);
    local_c8 = lVar5 + 8;
    do {
      uVar12 = (ulonglong)local_e8;
      puVar28 = (ulonglong *)((ulonglong)*(uint *)(unaff_RDI + 0x18) + local_c0);
      lVar16 = local_c0;
      if (*(uint *)(unaff_RDI + 0x18) <= local_e8) {
        puVar28 = local_70;
        lVar16 = lVar5;
      }
      uVar20 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
      uVar13 = (ulonglong)((local_e8 & uVar20) * 2);
      uVar10 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
      uVar11 = local_e8 - uVar10;
      if (local_e8 - *(uint *)(unaff_RDI + 0x1c) <= uVar10) {
        uVar11 = *(uint *)(unaff_RDI + 0x1c);
      }
      local_e8 = *(uint *)(local_98 + (ulonglong)((local_e8 & uVar40) * 2 + 1) * 4);
      local_80 = (ulonglong *)(local_98 + uVar13 * 4);
      puVar38 = (uint *)(local_98 + uVar13 * 4 + 4);
      if ((uVar36 != 0) && (uVar10 = *(uint *)(local_98 + uVar13 * 4), uVar11 < uVar10)) {
        lVar27 = lVar16 + uVar12;
        uVar13 = 0;
        uVar22 = 0;
        uVar37 = uVar36;
        do {
          uVar14 = uVar22;
          if (uVar13 < uVar22) {
            uVar14 = uVar13;
          }
          lVar31 = lVar5 + (ulonglong)uVar10;
          puVar18 = (ulonglong *)(lVar27 + uVar14);
          puVar25 = (ulonglong *)(lVar31 + uVar14);
          puVar23 = puVar18;
          if (puVar18 < (ulonglong *)((longlong)puVar28 - 7U)) {
            uVar17 = *puVar18 ^ *puVar25;
            if (uVar17 == 0) {
              lVar29 = uVar10 + uVar14 + local_c8;
              lVar2 = uVar12 + lVar16 + 8 + uVar14;
              lVar19 = 0;
              do {
                puVar23 = (ulonglong *)(lVar2 + lVar19);
                if ((ulonglong *)((longlong)puVar28 - 7U) <= puVar23) {
                  puVar25 = (ulonglong *)(lVar29 + lVar19);
                  goto LAB_00ee2e95;
                }
                lVar1 = lVar19 + 8;
                uVar17 = *(ulonglong *)(lVar2 + lVar19) ^ *(ulonglong *)(lVar29 + lVar19);
                lVar19 = lVar1;
              } while (uVar17 == 0);
              uVar35 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                }
              }
              uVar35 = (uVar35 >> 3) + lVar1;
            }
            else {
              uVar35 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                }
              }
              uVar35 = uVar35 >> 3;
            }
          }
          else {
LAB_00ee2e95:
            if ((puVar23 < (ulonglong *)((longlong)puVar28 - 3U)) &&
               ((int)*puVar25 == (int)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 4);
              puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            }
            if ((puVar23 < (ulonglong *)((longlong)puVar28 + -1)) &&
               ((short)*puVar25 == (short)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 2);
              puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            }
            if (puVar23 < puVar28) {
              puVar23 = (ulonglong *)
                        ((longlong)puVar23 + (ulonglong)((byte)*puVar25 == (byte)*puVar23));
            }
            uVar35 = (longlong)puVar23 - (longlong)puVar18;
          }
          uVar35 = uVar35 + uVar14;
          puVar18 = (ulonglong *)(lVar27 + uVar35);
          if (puVar18 == puVar28) break;
          puVar15 = (uint *)(local_98 + (ulonglong)((uVar10 & uVar20) * 2) * 4);
          if (*(byte *)(lVar31 + uVar35) < (byte)*puVar18) {
            *(uint *)local_80 = uVar10;
            if (uVar10 <= (uint)local_78) {
              local_80 = (ulonglong *)&local_100;
              break;
            }
            puVar15 = puVar15 + 1;
            uVar13 = uVar35;
            uVar35 = uVar22;
            local_80 = (ulonglong *)puVar15;
          }
          else {
            *puVar38 = uVar10;
            puVar38 = puVar15;
            if (uVar10 <= (uint)local_78) {
              puVar38 = &local_100;
              break;
            }
          }
          uVar37 = uVar37 - 1;
          if ((uVar37 == 0) || (uVar10 = *puVar15, uVar22 = uVar35, uVar10 <= uVar11)) break;
        } while( true );
      }
      *puVar38 = 0;
      *(uint *)local_80 = 0;
      uVar36 = uVar36 + 1;
      uVar20 = (uint)local_a0;
      uVar10 = (uint)local_b0;
    } while (local_e8 != 0);
  }
LAB_00ee3006:
  local_b0._0_4_ = uVar10;
  local_a0._0_4_ = uVar20;
  uVar12 = (ulonglong)((uVar40 & (uint)local_d8) * 2);
  local_40 = (uint *)(local_98 + uVar12 * 4);
  iVar34 = (uint)local_d8 + 9;
  uVar11 = *(uint *)(lVar6 + uVar26 * 4);
  *(uint *)(lVar6 + uVar26 * 4) = (uint)local_d8;
  local_88 = (ulonglong *)((longlong)local_70 - 7);
  local_80 = (ulonglong *)((longlong)local_70 - 3);
  local_d0 = (ulonglong *)((longlong)local_70 + -1);
  if ((uint)local_a0 < uVar11) {
    puVar38 = (uint *)(local_98 + uVar12 * 4 + 4);
    uVar26 = 0;
    uVar12 = 0;
    uVar13 = 0;
LAB_00ee3094:
    uVar22 = uVar12;
    if (uVar13 < uVar12) {
      uVar22 = uVar13;
    }
    lVar6 = lVar5 + (ulonglong)uVar11;
    puVar28 = (ulonglong *)((longlong)unaff_RSI + uVar22);
    puVar18 = (ulonglong *)(lVar6 + uVar22);
    puVar25 = puVar28;
    if (puVar28 < local_88) {
      uVar14 = *puVar28 ^ *puVar18;
      if (uVar14 == 0) {
        lVar27 = uVar11 + uVar22 + lVar5 + 8;
        lVar16 = 0;
        do {
          puVar25 = (ulonglong *)((longlong)unaff_RSI + lVar16 + uVar22 + 8);
          if (local_88 <= puVar25) {
            puVar18 = (ulonglong *)(lVar27 + lVar16);
            goto LAB_00ee30cc;
          }
          lVar31 = lVar16 + 8;
          uVar14 = *(ulonglong *)((longlong)unaff_RSI + lVar16 + uVar22 + 8) ^
                   *(ulonglong *)(lVar27 + lVar16);
          lVar16 = lVar31;
        } while (uVar14 == 0);
        uVar17 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
        uVar17 = (uVar17 >> 3) + lVar31;
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
LAB_00ee30cc:
      if ((puVar25 < local_80) && ((int)*puVar18 == (int)*puVar25)) {
        puVar25 = (ulonglong *)((longlong)puVar25 + 4);
        puVar18 = (ulonglong *)((longlong)puVar18 + 4);
      }
      if ((puVar25 < local_d0) && ((short)*puVar18 == (short)*puVar25)) {
        puVar25 = (ulonglong *)((longlong)puVar25 + 2);
        puVar18 = (ulonglong *)((longlong)puVar18 + 2);
      }
      if (puVar25 < local_70) {
        puVar25 = (ulonglong *)((longlong)puVar25 + (ulonglong)((byte)*puVar18 == (byte)*puVar25));
      }
      uVar17 = (longlong)puVar25 - (longlong)puVar28;
    }
    uVar17 = uVar17 + uVar22;
    if (uVar26 < uVar17) {
      if (iVar34 - uVar11 < uVar17) {
        iVar34 = uVar11 + (int)uVar17;
      }
      uVar20 = ((uint)local_d8 - uVar11) + 1;
      uVar10 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> uVar10 == 0; uVar10 = uVar10 - 1) {
        }
      }
      uVar20 = 0x1f;
      if ((uint)*local_b8 != 0) {
        for (; (uint)*local_b8 >> uVar20 == 0; uVar20 = uVar20 - 1) {
        }
      }
      if ((int)((uVar20 ^ 0x1f) - (uVar10 ^ 0x1f)) < ((int)uVar17 - (int)uVar26) * 4) {
        *local_b8 = (ulonglong)(((uint)local_d8 - uVar11) + 3);
        uVar26 = uVar17;
      }
      if ((ulonglong *)((longlong)unaff_RSI + uVar17) == local_70) {
        *puVar38 = 0;
        *local_40 = 0;
        goto LAB_00ee365f;
      }
    }
    puVar15 = (uint *)(local_98 + (ulonglong)((uVar11 & uVar40) * 2) * 4);
    if (*(byte *)((longlong)unaff_RSI + uVar17) <= *(byte *)(lVar6 + uVar17)) {
      *puVar38 = uVar11;
      puVar38 = puVar15;
      uVar12 = uVar17;
      if (uVar11 <= (uint)local_b0) {
        puVar38 = local_fc;
        goto LAB_00ee3286;
      }
LAB_00ee31d8:
      local_50 = local_50 - 1;
      if ((local_50 == 0) || (uVar11 = *puVar15, uVar11 <= (uint)local_a0)) goto LAB_00ee3286;
      goto LAB_00ee3094;
    }
    *local_40 = uVar11;
    if ((uint)local_b0 < uVar11) {
      puVar15 = puVar15 + 1;
      uVar13 = uVar17;
      local_40 = puVar15;
      goto LAB_00ee31d8;
    }
    local_40 = local_fc;
LAB_00ee3286:
    *puVar38 = 0;
    *local_40 = 0;
    if (local_50 == 0) goto LAB_00ee365f;
  }
  else {
    local_40[0] = 0;
    local_40[1] = 0;
    uVar26 = 0;
  }
  puVar8 = *(undefined8 **)(unaff_RDI + 0xf8);
  pbVar9 = (byte *)*puVar8;
  lVar6 = puVar8[1];
  uVar40 = *(uint *)((longlong)puVar8 + 0x1c);
  uVar20 = ~(-1 << (*(char *)((longlong)puVar8 + 0x104) - 1U & 0x1f));
  iVar21 = (int)((longlong)pbVar9 - lVar6);
  uVar11 = iVar21 - uVar20;
  if (iVar21 - uVar40 <= uVar20) {
    uVar11 = uVar40;
  }
  uVar10 = *(uint *)(puVar8[0xe] +
                    ((ulonglong)(lVar7 * -0x30e4432345000000) >> (-*(char *)(puVar8 + 0x21) & 0x3fU)
                    ) * 4);
  if (uVar40 < uVar10) {
    puVar28 = (ulonglong *)(lVar5 + (ulonglong)*(uint *)(unaff_RDI + 0x18));
    uVar37 = *(int *)(unaff_RDI + 0x1c) - iVar21;
    lVar7 = puVar8[0x10];
    lVar16 = (ulonglong)*(uint *)(unaff_RDI + 0x18) + lVar5 + 8;
    uVar13 = 0;
    uVar12 = 0;
    do {
      uVar22 = uVar13;
      if (uVar12 < uVar13) {
        uVar22 = uVar12;
      }
      uVar14 = (ulonglong)uVar10;
      puVar18 = (ulonglong *)((longlong)unaff_RSI + uVar22);
      puVar25 = (ulonglong *)(lVar6 + uVar14 + uVar22);
      puVar23 = (ulonglong *)(((longlong)pbVar9 - (longlong)puVar25) + (longlong)puVar18);
      if (local_70 <= puVar23) {
        puVar23 = local_70;
      }
      puVar32 = puVar25;
      puVar39 = puVar18;
      if (puVar18 < (ulonglong *)((longlong)puVar23 - 7U)) {
        uVar17 = *puVar18 ^ *puVar25;
        if (uVar17 == 0) {
          lVar31 = uVar22 + uVar14 + lVar6 + 8;
          lVar27 = 0;
          do {
            puVar39 = (ulonglong *)((longlong)unaff_RSI + lVar27 + uVar22 + 8);
            if ((ulonglong *)((longlong)puVar23 - 7U) <= puVar39) {
              puVar32 = (ulonglong *)(lVar31 + lVar27);
              goto LAB_00ee3457;
            }
            lVar2 = lVar27 + 8;
            uVar17 = *(ulonglong *)((longlong)unaff_RSI + lVar27 + uVar22 + 8) ^
                     *(ulonglong *)(lVar31 + lVar27);
            lVar27 = lVar2;
          } while (uVar17 == 0);
          uVar35 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = (uVar35 >> 3) + lVar2;
        }
        else {
          uVar35 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = uVar35 >> 3;
        }
      }
      else {
LAB_00ee3457:
        if ((puVar39 < (ulonglong *)((longlong)puVar23 - 3U)) && ((int)*puVar32 == (int)*puVar39)) {
          puVar39 = (ulonglong *)((longlong)puVar39 + 4);
          puVar32 = (ulonglong *)((longlong)puVar32 + 4);
        }
        if ((puVar39 < (ulonglong *)((longlong)puVar23 - 1U)) &&
           ((short)*puVar32 == (short)*puVar39)) {
          puVar39 = (ulonglong *)((longlong)puVar39 + 2);
          puVar32 = (ulonglong *)((longlong)puVar32 + 2);
        }
        if (puVar39 < puVar23) {
          puVar39 = (ulonglong *)((longlong)puVar39 + (ulonglong)((byte)*puVar32 == (byte)*puVar39))
          ;
        }
        uVar35 = (longlong)puVar39 - (longlong)puVar18;
      }
      if ((byte *)((longlong)puVar25 + uVar35) == pbVar9) {
        puVar18 = (ulonglong *)((longlong)puVar18 + uVar35);
        puVar25 = puVar18;
        puVar23 = puVar28;
        if (puVar18 < local_88) {
          uVar17 = *puVar18 ^ *puVar28;
          if (uVar17 == 0) {
            lVar27 = uVar22 + uVar35 + 8;
            lVar31 = 0;
            do {
              puVar25 = (ulonglong *)((longlong)unaff_RSI + lVar31 + lVar27);
              if (local_88 <= puVar25) {
                puVar23 = (ulonglong *)(lVar31 + lVar16);
                goto LAB_00ee3536;
              }
              lVar2 = lVar31 + 8;
              uVar17 = *(ulonglong *)((longlong)unaff_RSI + lVar31 + lVar27) ^
                       *(ulonglong *)(lVar16 + lVar31);
              lVar31 = lVar2;
            } while (uVar17 == 0);
            uVar24 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
              }
            }
            uVar24 = (uVar24 >> 3) + lVar2;
          }
          else {
            uVar24 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
              }
            }
            uVar24 = uVar24 >> 3;
          }
        }
        else {
LAB_00ee3536:
          if ((puVar25 < local_80) && ((int)*puVar23 == (int)*puVar25)) {
            puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            puVar23 = (ulonglong *)((longlong)puVar23 + 4);
          }
          if ((puVar25 < local_d0) && ((short)*puVar23 == (short)*puVar25)) {
            puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            puVar23 = (ulonglong *)((longlong)puVar23 + 2);
          }
          if (puVar25 < local_70) {
            puVar25 = (ulonglong *)
                      ((longlong)puVar25 + (ulonglong)((byte)*puVar23 == (byte)*puVar25));
          }
          uVar24 = (longlong)puVar25 - (longlong)puVar18;
        }
        uVar35 = uVar35 + uVar24;
      }
      uVar35 = uVar35 + uVar22;
      lVar27 = uVar14 + uVar37 + lVar5;
      if (uVar14 + uVar35 < ((longlong)pbVar9 - lVar6 & 0xffffffffU)) {
        lVar27 = lVar6 + uVar14;
      }
      if (uVar26 < uVar35) {
        iVar21 = (uint)local_d8 - (uVar37 + uVar10);
        uVar4 = iVar21 + 1;
        uVar36 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar36 == 0; uVar36 = uVar36 - 1) {
          }
        }
        uVar30 = (uint)*local_b8 + 1;
        uVar4 = 0x1f;
        if (uVar30 != 0) {
          for (; uVar30 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        if ((int)((uVar4 ^ 0x1f) - (uVar36 ^ 0x1f)) < ((int)uVar35 - (int)uVar26) * 4) {
          *local_b8 = (ulonglong)(iVar21 + 3);
          uVar26 = uVar35;
        }
        if ((ulonglong *)((longlong)unaff_RSI + uVar35) == local_70) break;
      }
      puVar38 = (uint *)(lVar7 + (ulonglong)((uVar10 & uVar20) * 2) * 4);
      if (*(byte *)(lVar27 + uVar35) < *(byte *)((longlong)unaff_RSI + uVar35)) {
        if (uVar10 <= uVar11) break;
        puVar38 = puVar38 + 1;
        uVar12 = uVar35;
      }
      else {
        uVar13 = uVar35;
        if (uVar10 <= uVar11) break;
      }
      local_50 = local_50 - 1;
      if ((local_50 == 0) || (uVar10 = *puVar38, uVar10 <= uVar40)) break;
    } while( true );
  }
LAB_00ee365f:
  *(int *)(unaff_RDI + 0x2c) = iVar34 + -8;
  return uVar26;
}



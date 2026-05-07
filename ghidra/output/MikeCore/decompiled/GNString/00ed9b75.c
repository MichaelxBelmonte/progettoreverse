// Function: FUN_00ed9b75
// Address: 00ed9b75
// Size: 3331 bytes
// Class: GNString


ulonglong FUN_00ed9b75(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  int *unaff_RSI;
  longlong lVar31;
  ulonglong *puVar32;
  ulonglong *puVar33;
  longlong unaff_RDI;
  longlong lVar34;
  byte bVar35;
  longlong lVar36;
  ulonglong *puVar37;
  ulonglong *puVar38;
  uint *puVar39;
  ulonglong uVar40;
  ulonglong *puVar41;
  uint uVar42;
  uint uVar43;
  ulonglong *puVar44;
  uint local_128;
  uint local_124 [3];
  ulonglong local_118;
  ulonglong local_108;
  uint *local_100;
  longlong local_d8;
  uint local_d0;
  uint local_c4;
  longlong local_b8;
  uint *local_a8;
  uint local_8c;
  ulonglong *local_80;
  uint *local_68;
  ulonglong local_40;
  
  lVar34 = *(longlong *)(unaff_RDI + 8);
  uVar25 = (ulonglong)*(uint *)(unaff_RDI + 0x2c);
  if (unaff_RSI < (int *)(lVar34 + uVar25)) {
    local_40 = 0;
  }
  else {
    lVar15 = *(longlong *)(unaff_RDI + 0x70);
    lVar4 = *(longlong *)(unaff_RDI + 0x80);
    uVar42 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
    local_108 = (longlong)unaff_RSI - lVar34;
    bVar35 = 0x20 - (char)*(undefined4 *)(unaff_RDI + 0x108);
    if (*(uint *)(unaff_RDI + 0x2c) < (uint)local_108) {
      do {
        uVar10 = (ulonglong)((uint)(*(int *)(lVar34 + uVar25) * -0x61c8864f) >> (bVar35 & 0x1f));
        uVar3 = *(undefined4 *)(lVar15 + uVar10 * 4);
        uVar18 = (ulonglong)(((uint)uVar25 & uVar42) * 2);
        *(uint *)(lVar15 + uVar10 * 4) = (uint)uVar25;
        *(undefined4 *)(lVar4 + uVar18 * 4) = uVar3;
        *(undefined4 *)(lVar4 + 4 + uVar18 * 4) = 1;
        uVar25 = uVar25 + 1;
      } while ((local_108 & 0xffffffff) != uVar25);
      bVar35 = 0x20 - (char)*(undefined4 *)(unaff_RDI + 0x108);
      uVar42 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
    }
    *(uint *)(unaff_RDI + 0x2c) = (uint)local_108;
    uVar25 = (ulonglong)((uint)(*unaff_RSI * -0x61c8864f) >> (bVar35 & 0x1f));
    uVar8 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
    uVar20 = *(uint *)(unaff_RDI + 0x1c);
    uVar5 = (uint)local_108 - uVar8;
    if ((uint)local_108 - uVar20 <= uVar8) {
      uVar5 = uVar20;
    }
    if (*(int *)(unaff_RDI + 0x28) != 0) {
      uVar5 = uVar20;
    }
    uVar10 = 0;
    local_c4 = (uint)local_108 - uVar42;
    if ((uint)local_108 < uVar42) {
      local_c4 = 0;
    }
    uVar20 = uVar5;
    if (uVar5 < local_c4) {
      uVar20 = local_c4;
    }
    local_8c = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
    uVar8 = *(uint *)(lVar15 + uVar25 * 4);
    local_d0 = local_8c;
    local_d8 = lVar34;
    local_80 = param_2;
    if (uVar20 < uVar8) {
      do {
        uVar30 = uVar8;
        uVar18 = (ulonglong)((uVar30 & uVar42) * 2);
        iVar17 = *(int *)(lVar4 + 4 + uVar18 * 4);
        if ((iVar17 != 1) || (local_d0 < 2)) {
          if (iVar17 == 1) {
            *(undefined8 *)(lVar4 + uVar18 * 4) = 0;
          }
          if ((int)uVar10 == 0) goto LAB_00ed9d3a;
          goto LAB_00ed9d66;
        }
        *(int *)(lVar4 + 4 + uVar18 * 4) = (int)uVar10;
        local_d0 = local_d0 - 1;
        uVar8 = *(uint *)(lVar4 + uVar18 * 4);
        uVar10 = (ulonglong)uVar30;
      } while (uVar20 < uVar8);
      uVar10 = (ulonglong)uVar30;
LAB_00ed9d66:
      local_100 = (uint *)(unaff_RDI + 0x18);
      local_b8 = *(longlong *)(unaff_RDI + 0x10);
      lVar11 = local_b8 + 8;
      lVar29 = lVar34 + 8;
      do {
        uVar30 = (uint)uVar10;
        uVar8 = *(uint *)(unaff_RDI + 0x18);
        uVar18 = (ulonglong)uVar8;
        lVar36 = lVar34;
        if (uVar30 < uVar8) {
          lVar36 = local_b8;
        }
        puVar2 = (ulonglong *)(local_b8 + uVar18);
        puVar44 = local_80;
        if (uVar30 < uVar8) {
          puVar44 = puVar2;
        }
        uVar21 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
        uVar22 = (ulonglong)((uVar30 & uVar21) * 2);
        uVar9 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
        uVar6 = uVar30 - uVar9;
        if (uVar30 - *(uint *)(unaff_RDI + 0x1c) <= uVar9) {
          uVar6 = *(uint *)(unaff_RDI + 0x1c);
        }
        local_a8 = (uint *)(lVar4 + uVar22 * 4);
        puVar39 = (uint *)(lVar4 + uVar22 * 4 + 4);
        local_118 = (ulonglong)*(uint *)(lVar4 + (ulonglong)((uVar30 & uVar42) * 2 + 1) * 4);
        if ((local_d0 != 0) && (uVar9 = *(uint *)(lVar4 + uVar22 * 4), uVar6 < uVar9)) {
          puVar32 = (ulonglong *)(lVar34 + uVar18);
          puVar33 = (ulonglong *)((longlong)puVar44 - 7);
          lVar12 = lVar36 + uVar10 + 8;
          lVar36 = lVar36 + uVar10;
          lVar13 = lVar29 + uVar18;
          uVar10 = 0;
          uVar22 = 0;
          uVar43 = local_d0;
          do {
            uVar40 = (ulonglong)uVar9;
            uVar19 = uVar22;
            if (uVar10 < uVar22) {
              uVar19 = uVar10;
            }
            uVar23 = uVar19 + uVar40;
            if ((uVar23 < uVar18) && (uVar8 <= uVar30)) {
              puVar37 = (ulonglong *)(lVar36 + uVar19);
              puVar41 = (ulonglong *)(local_b8 + uVar40 + uVar19);
              puVar26 = (ulonglong *)(((longlong)puVar2 - (longlong)puVar41) + (longlong)puVar37);
              if (puVar44 <= puVar26) {
                puVar26 = puVar44;
              }
              puVar24 = puVar37;
              puVar38 = puVar41;
              if (puVar37 < (ulonglong *)((longlong)puVar26 - 7U)) {
                uVar14 = *puVar37 ^ *puVar41;
                if (uVar14 == 0) {
                  lVar31 = uVar23 + lVar11;
                  lVar34 = 0;
                  do {
                    puVar24 = (ulonglong *)(lVar12 + uVar19 + lVar34);
                    if ((ulonglong *)((longlong)puVar26 - 7U) <= puVar24) {
                      puVar38 = (ulonglong *)(lVar31 + lVar34);
                      goto LAB_00eda08a;
                    }
                    lVar27 = lVar34 + 8;
                    uVar23 = *(ulonglong *)(lVar12 + uVar19 + lVar34) ^
                             *(ulonglong *)(lVar31 + lVar34);
                    lVar34 = lVar27;
                  } while (uVar23 == 0);
                  uVar14 = 0;
                  if (uVar23 != 0) {
                    for (; (uVar23 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                    }
                  }
                  uVar23 = (uVar14 >> 3) + lVar27;
                }
                else {
                  uVar23 = 0;
                  if (uVar14 != 0) {
                    for (; (uVar14 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                    }
                  }
                  uVar23 = uVar23 >> 3;
                }
              }
              else {
LAB_00eda08a:
                if ((puVar24 < (ulonglong *)((longlong)puVar26 - 3U)) &&
                   ((int)*puVar38 == (int)*puVar24)) {
                  puVar24 = (ulonglong *)((longlong)puVar24 + 4);
                  puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                }
                if ((puVar24 < (ulonglong *)((longlong)puVar26 - 1U)) &&
                   ((short)*puVar38 == (short)*puVar24)) {
                  puVar24 = (ulonglong *)((longlong)puVar24 + 2);
                  puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                }
                if (puVar24 < puVar26) {
                  puVar24 = (ulonglong *)
                            ((longlong)puVar24 + (ulonglong)((byte)*puVar38 == (byte)*puVar24));
                }
                uVar23 = (longlong)puVar24 - (longlong)puVar37;
              }
              if ((ulonglong *)((longlong)puVar41 + uVar23) == puVar2) {
                puVar37 = (ulonglong *)((longlong)puVar37 + uVar23);
                puVar41 = puVar37;
                puVar26 = puVar32;
                if (puVar37 < puVar33) {
                  uVar14 = *puVar37 ^ *puVar32;
                  if (uVar14 == 0) {
                    lVar31 = uVar23 + uVar19 + lVar12;
                    lVar34 = 0;
                    do {
                      puVar41 = (ulonglong *)(lVar31 + lVar34);
                      if (puVar33 <= puVar41) {
                        puVar26 = (ulonglong *)(lVar34 + lVar13);
                        goto LAB_00eda192;
                      }
                      lVar27 = lVar34 + 8;
                      uVar14 = *(ulonglong *)(lVar31 + lVar34) ^ *(ulonglong *)(lVar13 + lVar34);
                      lVar34 = lVar27;
                    } while (uVar14 == 0);
                    uVar28 = 0;
                    if (uVar14 != 0) {
                      for (; (uVar14 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                      }
                    }
                    uVar28 = (uVar28 >> 3) + lVar27;
                  }
                  else {
                    uVar28 = 0;
                    if (uVar14 != 0) {
                      for (; (uVar14 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                      }
                    }
                    uVar28 = uVar28 >> 3;
                  }
                }
                else {
LAB_00eda192:
                  if ((puVar41 < (ulonglong *)((longlong)puVar44 - 3U)) &&
                     ((int)*puVar26 == (int)*puVar41)) {
                    puVar41 = (ulonglong *)((longlong)puVar41 + 4);
                    puVar26 = (ulonglong *)((longlong)puVar26 + 4);
                  }
                  if ((puVar41 < (ulonglong *)((longlong)puVar44 + -1)) &&
                     ((short)*puVar26 == (short)*puVar41)) {
                    puVar41 = (ulonglong *)((longlong)puVar41 + 2);
                    puVar26 = (ulonglong *)((longlong)puVar26 + 2);
                  }
                  if (puVar41 < puVar44) {
                    puVar41 = (ulonglong *)
                              ((longlong)puVar41 + (ulonglong)((byte)*puVar26 == (byte)*puVar41));
                  }
                  uVar28 = (longlong)puVar41 - (longlong)puVar37;
                }
                uVar23 = uVar23 + uVar28;
              }
              uVar23 = uVar23 + uVar19;
              lVar31 = uVar40 + local_d8;
              lVar34 = local_d8;
              if (uVar23 + uVar40 < uVar18) {
                lVar31 = local_b8 + uVar40;
              }
            }
            else {
              lVar31 = lVar34;
              if (uVar23 < uVar18) {
                lVar31 = local_b8;
              }
              puVar37 = (ulonglong *)(lVar36 + uVar19);
              puVar41 = (ulonglong *)(uVar40 + lVar31 + uVar19);
              puVar26 = puVar37;
              if (puVar37 < puVar33) {
                uVar14 = *puVar37 ^ *puVar41;
                if (uVar14 == 0) {
                  lVar27 = 0;
                  do {
                    puVar26 = (ulonglong *)(lVar12 + uVar19 + lVar27);
                    if (puVar33 <= puVar26) {
                      puVar41 = (ulonglong *)(lVar27 + lVar31 + uVar23 + 8);
                      goto LAB_00ed9f81;
                    }
                    lVar1 = lVar27 + 8;
                    uVar14 = *(ulonglong *)(lVar12 + uVar19 + lVar27) ^
                             *(ulonglong *)(lVar31 + uVar23 + 8 + lVar27);
                    lVar27 = lVar1;
                  } while (uVar14 == 0);
                  uVar23 = 0;
                  if (uVar14 != 0) {
                    for (; (uVar14 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                    }
                  }
                  uVar23 = (uVar23 >> 3) + lVar1;
                }
                else {
                  uVar23 = 0;
                  if (uVar14 != 0) {
                    for (; (uVar14 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                    }
                  }
                  uVar23 = uVar23 >> 3;
                }
              }
              else {
LAB_00ed9f81:
                if ((puVar26 < (ulonglong *)((longlong)puVar44 - 3U)) &&
                   ((int)*puVar41 == (int)*puVar26)) {
                  puVar26 = (ulonglong *)((longlong)puVar26 + 4);
                  puVar41 = (ulonglong *)((longlong)puVar41 + 4);
                }
                if ((puVar26 < (ulonglong *)((longlong)puVar44 + -1)) &&
                   ((short)*puVar41 == (short)*puVar26)) {
                  puVar26 = (ulonglong *)((longlong)puVar26 + 2);
                  puVar41 = (ulonglong *)((longlong)puVar41 + 2);
                }
                if (puVar26 < puVar44) {
                  puVar26 = (ulonglong *)
                            ((longlong)puVar26 + (ulonglong)((byte)*puVar41 == (byte)*puVar26));
                }
                uVar23 = (longlong)puVar26 - (longlong)puVar37;
              }
              uVar23 = uVar23 + uVar19;
              lVar31 = uVar40 + lVar31;
            }
            if ((ulonglong *)(lVar36 + uVar23) == puVar44) break;
            puVar16 = (uint *)(lVar4 + (ulonglong)((uVar9 & uVar21) * 2) * 4);
            if (*(byte *)(lVar31 + uVar23) < (byte)*(ulonglong *)(lVar36 + uVar23)) {
              *local_a8 = uVar9;
              if (uVar9 <= uVar20) {
                local_a8 = &local_128;
                break;
              }
              puVar16 = puVar16 + 1;
              uVar10 = uVar23;
              uVar23 = uVar22;
              local_a8 = puVar16;
            }
            else {
              *puVar39 = uVar9;
              puVar39 = puVar16;
              if (uVar9 <= uVar20) {
                puVar39 = &local_128;
                break;
              }
            }
            uVar43 = uVar43 - 1;
            if ((uVar43 == 0) || (uVar9 = *puVar16, uVar22 = uVar23, uVar9 <= uVar6)) break;
          } while( true );
        }
        *puVar39 = 0;
        *local_a8 = 0;
        local_d0 = local_d0 + 1;
        uVar10 = local_118 & 0xffffffff;
      } while ((int)local_118 != 0);
    }
    else {
LAB_00ed9d3a:
      local_100 = (uint *)(unaff_RDI + 0x18);
      local_b8 = *(longlong *)(unaff_RDI + 0x10);
    }
    uVar18 = (ulonglong)*local_100;
    uVar10 = (ulonglong)((uVar42 & (uint)local_108) * 2);
    local_68 = (uint *)(lVar4 + uVar10 * 4);
    puVar39 = (uint *)(lVar4 + uVar10 * 4 + 4);
    iVar17 = (uint)local_108 + 9;
    uVar20 = *(uint *)(lVar15 + uVar25 * 4);
    *(uint *)(lVar15 + uVar25 * 4) = (uint)local_108;
    if (uVar5 < uVar20) {
      puVar2 = (ulonglong *)((longlong)local_80 - 7);
      lVar15 = uVar18 + lVar34 + 8;
      local_40 = 0;
      uVar25 = 0;
      uVar10 = 0;
      do {
        uVar19 = (ulonglong)uVar20;
        uVar22 = uVar10;
        if (uVar25 < uVar10) {
          uVar22 = uVar25;
        }
        uVar40 = uVar22 + uVar19;
        if (uVar40 < uVar18) {
          puVar44 = (ulonglong *)((longlong)unaff_RSI + uVar22);
          puVar33 = (ulonglong *)(local_b8 + uVar19 + uVar22);
          puVar32 = (ulonglong *)
                    (((longlong)(local_b8 + uVar18) - (longlong)puVar33) + (longlong)puVar44);
          if (local_80 <= puVar32) {
            puVar32 = local_80;
          }
          puVar26 = puVar33;
          puVar41 = puVar44;
          if (puVar44 < (ulonglong *)((longlong)puVar32 - 7U)) {
            uVar23 = *puVar44 ^ *puVar33;
            if (uVar23 == 0) {
              lVar11 = uVar40 + local_b8 + 8;
              lVar29 = 0;
              do {
                puVar41 = (ulonglong *)((longlong)unaff_RSI + lVar29 + uVar22 + 8);
                if ((ulonglong *)((longlong)puVar32 - 7U) <= puVar41) {
                  puVar26 = (ulonglong *)(lVar11 + lVar29);
                  goto LAB_00eda5ae;
                }
                lVar36 = lVar29 + 8;
                uVar40 = *(ulonglong *)((longlong)unaff_RSI + lVar29 + uVar22 + 8) ^
                         *(ulonglong *)(lVar11 + lVar29);
                lVar29 = lVar36;
              } while (uVar40 == 0);
              uVar23 = 0;
              if (uVar40 != 0) {
                for (; (uVar40 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                }
              }
              uVar40 = (uVar23 >> 3) + lVar36;
            }
            else {
              uVar40 = 0;
              if (uVar23 != 0) {
                for (; (uVar23 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
                }
              }
              uVar40 = uVar40 >> 3;
            }
          }
          else {
LAB_00eda5ae:
            if ((puVar41 < (ulonglong *)((longlong)puVar32 - 3U)) &&
               ((int)*puVar26 == (int)*puVar41)) {
              puVar41 = (ulonglong *)((longlong)puVar41 + 4);
              puVar26 = (ulonglong *)((longlong)puVar26 + 4);
            }
            if ((puVar41 < (ulonglong *)((longlong)puVar32 - 1U)) &&
               ((short)*puVar26 == (short)*puVar41)) {
              puVar41 = (ulonglong *)((longlong)puVar41 + 2);
              puVar26 = (ulonglong *)((longlong)puVar26 + 2);
            }
            if (puVar41 < puVar32) {
              puVar41 = (ulonglong *)
                        ((longlong)puVar41 + (ulonglong)((byte)*puVar26 == (byte)*puVar41));
            }
            uVar40 = (longlong)puVar41 - (longlong)puVar44;
          }
          if ((byte *)((longlong)puVar33 + uVar40) == (byte *)(local_b8 + uVar18)) {
            puVar44 = (ulonglong *)((longlong)puVar44 + uVar40);
            puVar32 = (ulonglong *)(lVar34 + uVar18);
            puVar33 = puVar44;
            if (puVar44 < puVar2) {
              uVar23 = *puVar44 ^ *(ulonglong *)(lVar34 + uVar18);
              if (uVar23 == 0) {
                lVar29 = uVar22 + uVar40 + 8;
                lVar11 = 0;
                do {
                  puVar33 = (ulonglong *)((longlong)unaff_RSI + lVar11 + lVar29);
                  if (puVar2 <= puVar33) {
                    puVar32 = (ulonglong *)(lVar11 + lVar15);
                    goto LAB_00eda6d3;
                  }
                  lVar36 = lVar11 + 8;
                  uVar23 = *(ulonglong *)((longlong)unaff_RSI + lVar11 + lVar29) ^
                           *(ulonglong *)(lVar15 + lVar11);
                  lVar11 = lVar36;
                } while (uVar23 == 0);
                uVar14 = 0;
                if (uVar23 != 0) {
                  for (; (uVar23 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                  }
                }
                uVar14 = (uVar14 >> 3) + lVar36;
              }
              else {
                uVar14 = 0;
                if (uVar23 != 0) {
                  for (; (uVar23 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                  }
                }
                uVar14 = uVar14 >> 3;
              }
            }
            else {
LAB_00eda6d3:
              if ((puVar33 < (ulonglong *)((longlong)local_80 - 3U)) &&
                 ((int)*puVar32 == (int)*puVar33)) {
                puVar33 = (ulonglong *)((longlong)puVar33 + 4);
                puVar32 = (ulonglong *)((longlong)puVar32 + 4);
              }
              if ((puVar33 < (ulonglong *)((longlong)local_80 - 1U)) &&
                 ((short)*puVar32 == (short)*puVar33)) {
                puVar33 = (ulonglong *)((longlong)puVar33 + 2);
                puVar32 = (ulonglong *)((longlong)puVar32 + 2);
              }
              if (puVar33 < local_80) {
                puVar33 = (ulonglong *)
                          ((longlong)puVar33 + (ulonglong)((byte)*puVar32 == (byte)*puVar33));
              }
              uVar14 = (longlong)puVar33 - (longlong)puVar44;
            }
            uVar40 = uVar40 + uVar14;
          }
          uVar40 = uVar40 + uVar22;
          lVar29 = uVar19 + local_d8;
          if (uVar19 + uVar40 < uVar18) {
            lVar29 = local_b8 + uVar19;
          }
        }
        else {
          lVar29 = uVar19 + local_d8;
          puVar44 = (ulonglong *)((longlong)unaff_RSI + uVar22);
          puVar33 = (ulonglong *)(lVar29 + uVar22);
          puVar32 = puVar44;
          if (puVar44 < puVar2) {
            uVar19 = *puVar44 ^ *puVar33;
            if (uVar19 == 0) {
              lVar36 = uVar40 + lVar34 + 8;
              lVar11 = 0;
              do {
                puVar32 = (ulonglong *)((longlong)unaff_RSI + lVar11 + uVar22 + 8);
                if (puVar2 <= puVar32) {
                  puVar33 = (ulonglong *)(lVar36 + lVar11);
                  goto LAB_00eda469;
                }
                lVar12 = lVar11 + 8;
                uVar19 = *(ulonglong *)((longlong)unaff_RSI + lVar11 + uVar22 + 8) ^
                         *(ulonglong *)(lVar36 + lVar11);
                lVar11 = lVar12;
              } while (uVar19 == 0);
              uVar40 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
                }
              }
              uVar40 = (uVar40 >> 3) + lVar12;
            }
            else {
              uVar40 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
                }
              }
              uVar40 = uVar40 >> 3;
            }
          }
          else {
LAB_00eda469:
            if ((puVar32 < (ulonglong *)((longlong)local_80 - 3U)) &&
               ((int)*puVar33 == (int)*puVar32)) {
              puVar32 = (ulonglong *)((longlong)puVar32 + 4);
              puVar33 = (ulonglong *)((longlong)puVar33 + 4);
            }
            if ((puVar32 < (ulonglong *)((longlong)local_80 - 1U)) &&
               ((short)*puVar33 == (short)*puVar32)) {
              puVar32 = (ulonglong *)((longlong)puVar32 + 2);
              puVar33 = (ulonglong *)((longlong)puVar33 + 2);
            }
            if (puVar32 < local_80) {
              puVar32 = (ulonglong *)
                        ((longlong)puVar32 + (ulonglong)((byte)*puVar33 == (byte)*puVar32));
            }
            uVar40 = (longlong)puVar32 - (longlong)puVar44;
          }
          uVar40 = uVar40 + uVar22;
        }
        if (local_40 < uVar40) {
          iVar7 = uVar20 + (int)uVar40;
          if (uVar40 <= iVar17 - uVar20) {
            iVar7 = iVar17;
          }
          uVar8 = ((uint)local_108 - uVar20) + 1;
          uVar30 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> uVar30 == 0; uVar30 = uVar30 - 1) {
            }
          }
          uVar8 = 0x1f;
          if ((uint)*param_1 != 0) {
            for (; (uint)*param_1 >> uVar8 == 0; uVar8 = uVar8 - 1) {
            }
          }
          if ((int)((uVar8 ^ 0x1f) - (uVar30 ^ 0x1f)) < ((int)uVar40 - (int)local_40) * 4) {
            *param_1 = (ulonglong)(((uint)local_108 - uVar20) + 3);
            local_40 = uVar40;
          }
          iVar17 = iVar7;
          if ((ulonglong *)((longlong)unaff_RSI + uVar40) == local_80) goto LAB_00eda84a;
        }
        puVar16 = (uint *)(lVar4 + (ulonglong)((uVar20 & uVar42) * 2) * 4);
        if (*(byte *)(lVar29 + uVar40) < *(byte *)((longlong)unaff_RSI + uVar40)) {
          *local_68 = uVar20;
          if (uVar20 <= local_c4) {
            local_68 = local_124;
            goto LAB_00eda84a;
          }
          puVar16 = puVar16 + 1;
          uVar25 = uVar40;
          uVar40 = uVar10;
          local_68 = puVar16;
        }
        else {
          *puVar39 = uVar20;
          puVar39 = puVar16;
          if (uVar20 <= local_c4) {
            puVar39 = local_124;
            goto LAB_00eda84a;
          }
        }
        local_8c = local_8c - 1;
        if ((local_8c == 0) || (uVar20 = *puVar16, uVar10 = uVar40, uVar20 <= uVar5))
        goto LAB_00eda84a;
      } while( true );
    }
    local_40 = 0;
LAB_00eda84a:
    *puVar39 = 0;
    *local_68 = 0;
    *(int *)(unaff_RDI + 0x2c) = iVar17 + -8;
  }
  return local_40;
}



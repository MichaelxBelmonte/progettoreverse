// Function: FUN_00eda878
// Address: 00eda878
// Size: 3354 bytes
// Class: GNString


ulonglong FUN_00eda878(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  longlong *unaff_RSI;
  ulonglong *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  longlong unaff_RDI;
  ulonglong uVar28;
  uint *puVar29;
  longlong lVar30;
  uint uVar31;
  byte bVar32;
  int iVar33;
  ulonglong *puVar34;
  ulonglong *puVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong *puVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong *puVar43;
  uint uVar44;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint *local_a8;
  longlong local_a0;
  uint *local_48;
  
  lVar5 = *(longlong *)(unaff_RDI + 8);
  uVar20 = (ulonglong)*(uint *)(unaff_RDI + 0x2c);
  if (unaff_RSI < (longlong *)(uVar20 + lVar5)) {
    uVar20 = 0;
  }
  else {
    lVar14 = *(longlong *)(unaff_RDI + 0x70);
    lVar6 = *(longlong *)(unaff_RDI + 0x80);
    uVar44 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
    bVar32 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
    uVar23 = (uint)((longlong)unaff_RSI - lVar5);
    if (*(uint *)(unaff_RDI + 0x2c) < uVar23) {
      do {
        uVar28 = (ulonglong)(*(longlong *)(lVar5 + uVar20) * -0x30e4432345000000) >> (bVar32 & 0x3f)
        ;
        uVar3 = *(undefined4 *)(lVar14 + uVar28 * 4);
        uVar13 = (ulonglong)(((uint)uVar20 & uVar44) * 2);
        *(uint *)(lVar14 + uVar28 * 4) = (uint)uVar20;
        *(undefined4 *)(lVar6 + uVar13 * 4) = uVar3;
        *(undefined4 *)(lVar6 + 4 + uVar13 * 4) = 1;
        uVar20 = uVar20 + 1;
      } while (((longlong)unaff_RSI - lVar5 & 0xffffffffU) != uVar20);
      bVar32 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
      uVar44 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
    }
    *(uint *)(unaff_RDI + 0x2c) = uVar23;
    uVar20 = (ulonglong)(*unaff_RSI * -0x30e4432345000000) >> (bVar32 & 0x3f);
    uVar8 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
    uVar9 = *(uint *)(unaff_RDI + 0x1c);
    uVar36 = uVar23 - uVar8;
    if (uVar23 - uVar9 <= uVar8) {
      uVar36 = uVar9;
    }
    if (*(int *)(unaff_RDI + 0x28) != 0) {
      uVar36 = uVar9;
    }
    uVar9 = uVar23 - uVar44;
    if (uVar23 < uVar44) {
      uVar9 = 0;
    }
    uVar8 = uVar36;
    if (uVar36 < uVar9) {
      uVar8 = uVar9;
    }
    local_124 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
    uVar4 = *(uint *)(lVar14 + uVar20 * 4);
    if (uVar8 < uVar4) {
      uVar24 = 0;
      local_120 = local_124;
      do {
        local_128 = uVar4;
        uVar13 = (ulonglong)((local_128 & uVar44) * 2);
        iVar33 = *(int *)(lVar6 + 4 + uVar13 * 4);
        if ((iVar33 != 1) || (local_120 < 2)) {
          if (iVar33 == 1) {
            *(undefined8 *)(lVar6 + uVar13 * 4) = 0;
          }
          local_128 = uVar24;
          if (uVar24 == 0) goto LAB_00edaa67;
          break;
        }
        *(uint *)(lVar6 + 4 + uVar13 * 4) = uVar24;
        local_120 = local_120 - 1;
        uVar4 = *(uint *)(lVar6 + uVar13 * 4);
        uVar24 = local_128;
      } while (uVar8 < uVar4);
      local_a0 = *(longlong *)(unaff_RDI + 0x10);
      do {
        uVar4 = *(uint *)(unaff_RDI + 0x18);
        uVar13 = (ulonglong)uVar4;
        lVar37 = lVar5;
        if (local_128 < uVar4) {
          lVar37 = local_a0;
        }
        puVar2 = (ulonglong *)(local_a0 + uVar13);
        puVar35 = param_2;
        if (local_128 < uVar4) {
          puVar35 = puVar2;
        }
        uVar16 = ~(-1 << (*(char *)(unaff_RDI + 0x104) - 1U & 0x1f));
        uVar28 = (ulonglong)((local_128 & uVar16) * 2);
        uVar17 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
        uVar24 = local_128 - uVar17;
        if (local_128 - *(uint *)(unaff_RDI + 0x1c) <= uVar17) {
          uVar24 = *(uint *)(unaff_RDI + 0x1c);
        }
        uVar17 = *(uint *)(lVar6 + (ulonglong)((local_128 & uVar44) * 2 + 1) * 4);
        local_a8 = (uint *)(lVar6 + uVar28 * 4);
        puVar29 = (uint *)(lVar6 + uVar28 * 4 + 4);
        if ((local_120 != 0) && (uVar31 = *(uint *)(lVar6 + uVar28 * 4), uVar24 < uVar31)) {
          puVar27 = (ulonglong *)((longlong)puVar35 - 7);
          lVar10 = lVar37 + (ulonglong)local_128 + 8;
          lVar37 = lVar37 + (ulonglong)local_128;
          lVar11 = lVar5 + 8 + uVar13;
          uVar28 = 0;
          uVar38 = 0;
          uVar19 = local_120;
          do {
            uVar41 = uVar38;
            if (uVar28 < uVar38) {
              uVar41 = uVar28;
            }
            uVar42 = (ulonglong)uVar31;
            uVar39 = uVar41 + uVar42;
            if ((uVar39 < uVar13) && (uVar4 <= local_128)) {
              puVar25 = (ulonglong *)(lVar37 + uVar41);
              puVar43 = (ulonglong *)(local_a0 + uVar42 + uVar41);
              puVar21 = (ulonglong *)(((longlong)puVar2 - (longlong)puVar43) + (longlong)puVar25);
              if (puVar35 <= puVar21) {
                puVar21 = puVar35;
              }
              puVar34 = puVar43;
              puVar40 = puVar25;
              if (puVar25 < (ulonglong *)((longlong)puVar21 - 7U)) {
                uVar12 = *puVar25 ^ *puVar43;
                if (uVar12 == 0) {
                  lVar30 = uVar39 + local_a0 + 8;
                  lVar22 = 0;
                  do {
                    puVar40 = (ulonglong *)(lVar10 + uVar41 + lVar22);
                    if ((ulonglong *)((longlong)puVar21 - 7U) <= puVar40) {
                      puVar34 = (ulonglong *)(lVar30 + lVar22);
                      goto LAB_00edadec;
                    }
                    lVar18 = lVar22 + 8;
                    uVar39 = *(ulonglong *)(lVar10 + uVar41 + lVar22) ^
                             *(ulonglong *)(lVar30 + lVar22);
                    lVar22 = lVar18;
                  } while (uVar39 == 0);
                  uVar12 = 0;
                  if (uVar39 != 0) {
                    for (; (uVar39 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                    }
                  }
                  uVar39 = (uVar12 >> 3) + lVar18;
                }
                else {
                  uVar39 = 0;
                  if (uVar12 != 0) {
                    for (; (uVar12 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
                    }
                  }
                  uVar39 = uVar39 >> 3;
                }
              }
              else {
LAB_00edadec:
                if ((puVar40 < (ulonglong *)((longlong)puVar21 - 3U)) &&
                   ((int)*puVar34 == (int)*puVar40)) {
                  puVar40 = (ulonglong *)((longlong)puVar40 + 4);
                  puVar34 = (ulonglong *)((longlong)puVar34 + 4);
                }
                if ((puVar40 < (ulonglong *)((longlong)puVar21 - 1U)) &&
                   ((short)*puVar34 == (short)*puVar40)) {
                  puVar40 = (ulonglong *)((longlong)puVar40 + 2);
                  puVar34 = (ulonglong *)((longlong)puVar34 + 2);
                }
                if (puVar40 < puVar21) {
                  puVar40 = (ulonglong *)
                            ((longlong)puVar40 + (ulonglong)((byte)*puVar34 == (byte)*puVar40));
                }
                uVar39 = (longlong)puVar40 - (longlong)puVar25;
              }
              if ((ulonglong *)((longlong)puVar43 + uVar39) == puVar2) {
                puVar25 = (ulonglong *)((longlong)puVar25 + uVar39);
                puVar21 = (ulonglong *)(uVar13 + lVar5);
                puVar43 = puVar25;
                if (puVar25 < puVar27) {
                  uVar12 = *puVar25 ^ *(ulonglong *)(uVar13 + lVar5);
                  if (uVar12 == 0) {
                    lVar30 = uVar39 + uVar41 + lVar10;
                    lVar22 = 0;
                    do {
                      puVar43 = (ulonglong *)(lVar30 + lVar22);
                      if (puVar27 <= puVar43) {
                        puVar21 = (ulonglong *)(lVar22 + lVar11);
                        goto LAB_00edaef2;
                      }
                      lVar18 = lVar22 + 8;
                      uVar12 = *(ulonglong *)(lVar30 + lVar22) ^ *(ulonglong *)(lVar11 + lVar22);
                      lVar22 = lVar18;
                    } while (uVar12 == 0);
                    uVar26 = 0;
                    if (uVar12 != 0) {
                      for (; (uVar12 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                      }
                    }
                    uVar26 = (uVar26 >> 3) + lVar18;
                  }
                  else {
                    uVar26 = 0;
                    if (uVar12 != 0) {
                      for (; (uVar12 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                      }
                    }
                    uVar26 = uVar26 >> 3;
                  }
                }
                else {
LAB_00edaef2:
                  if ((puVar43 < (ulonglong *)((longlong)puVar35 - 3U)) &&
                     ((int)*puVar21 == (int)*puVar43)) {
                    puVar43 = (ulonglong *)((longlong)puVar43 + 4);
                    puVar21 = (ulonglong *)((longlong)puVar21 + 4);
                  }
                  if ((puVar43 < (ulonglong *)((longlong)puVar35 + -1)) &&
                     ((short)*puVar21 == (short)*puVar43)) {
                    puVar43 = (ulonglong *)((longlong)puVar43 + 2);
                    puVar21 = (ulonglong *)((longlong)puVar21 + 2);
                  }
                  if (puVar43 < puVar35) {
                    puVar43 = (ulonglong *)
                              ((longlong)puVar43 + (ulonglong)((byte)*puVar21 == (byte)*puVar43));
                  }
                  uVar26 = (longlong)puVar43 - (longlong)puVar25;
                }
                uVar39 = uVar39 + uVar26;
              }
              uVar39 = uVar39 + uVar41;
              lVar30 = uVar42 + lVar5;
              if (uVar39 + uVar42 < uVar13) {
                lVar30 = local_a0 + uVar42;
              }
            }
            else {
              lVar22 = lVar5;
              if (uVar39 < uVar13) {
                lVar22 = local_a0;
              }
              lVar30 = uVar42 + lVar22;
              puVar25 = (ulonglong *)(lVar37 + uVar41);
              puVar43 = (ulonglong *)(lVar30 + uVar41);
              puVar21 = puVar25;
              if (puVar25 < puVar27) {
                uVar42 = *puVar25 ^ *puVar43;
                if (uVar42 == 0) {
                  lVar18 = 0;
                  do {
                    puVar21 = (ulonglong *)(lVar10 + uVar41 + lVar18);
                    if (puVar27 <= puVar21) {
                      puVar43 = (ulonglong *)(lVar18 + lVar22 + uVar39 + 8);
                      goto LAB_00edacce;
                    }
                    lVar1 = lVar18 + 8;
                    uVar42 = *(ulonglong *)(lVar10 + uVar41 + lVar18) ^
                             *(ulonglong *)(lVar22 + uVar39 + 8 + lVar18);
                    lVar18 = lVar1;
                  } while (uVar42 == 0);
                  uVar39 = 0;
                  if (uVar42 != 0) {
                    for (; (uVar42 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
                    }
                  }
                  uVar39 = (uVar39 >> 3) + lVar1;
                }
                else {
                  uVar39 = 0;
                  if (uVar42 != 0) {
                    for (; (uVar42 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
                    }
                  }
                  uVar39 = uVar39 >> 3;
                }
              }
              else {
LAB_00edacce:
                if ((puVar21 < (ulonglong *)((longlong)puVar35 - 3U)) &&
                   ((int)*puVar43 == (int)*puVar21)) {
                  puVar21 = (ulonglong *)((longlong)puVar21 + 4);
                  puVar43 = (ulonglong *)((longlong)puVar43 + 4);
                }
                if ((puVar21 < (ulonglong *)((longlong)puVar35 + -1)) &&
                   ((short)*puVar43 == (short)*puVar21)) {
                  puVar21 = (ulonglong *)((longlong)puVar21 + 2);
                  puVar43 = (ulonglong *)((longlong)puVar43 + 2);
                }
                if (puVar21 < puVar35) {
                  puVar21 = (ulonglong *)
                            ((longlong)puVar21 + (ulonglong)((byte)*puVar43 == (byte)*puVar21));
                }
                uVar39 = (longlong)puVar21 - (longlong)puVar25;
              }
              uVar39 = uVar39 + uVar41;
            }
            if ((ulonglong *)(lVar37 + uVar39) == puVar35) break;
            puVar15 = (uint *)(lVar6 + (ulonglong)((uVar31 & uVar16) * 2) * 4);
            if (*(byte *)(lVar30 + uVar39) < (byte)*(ulonglong *)(lVar37 + uVar39)) {
              *local_a8 = uVar31;
              if (uVar31 <= uVar8) {
                local_a8 = &local_130;
                break;
              }
              puVar15 = puVar15 + 1;
              uVar28 = uVar39;
              uVar39 = uVar38;
              local_a8 = puVar15;
            }
            else {
              *puVar29 = uVar31;
              puVar29 = puVar15;
              if (uVar31 <= uVar8) {
                puVar29 = &local_130;
                break;
              }
            }
            uVar19 = uVar19 - 1;
            if ((uVar19 == 0) || (uVar31 = *puVar15, uVar38 = uVar39, uVar31 <= uVar24)) break;
          } while( true );
        }
        local_128 = uVar17;
        *puVar29 = 0;
        *local_a8 = 0;
        local_120 = local_120 + 1;
      } while (local_128 != 0);
    }
    else {
LAB_00edaa67:
      local_a0 = *(longlong *)(unaff_RDI + 0x10);
    }
    uVar28 = (ulonglong)*(uint *)(unaff_RDI + 0x18);
    uVar13 = (ulonglong)((uVar44 & uVar23) * 2);
    local_48 = (uint *)(lVar6 + uVar13 * 4);
    puVar29 = (uint *)(lVar6 + uVar13 * 4 + 4);
    iVar33 = uVar23 + 9;
    uVar8 = *(uint *)(lVar14 + uVar20 * 4);
    *(uint *)(lVar14 + uVar20 * 4) = uVar23;
    if (uVar36 < uVar8) {
      puVar2 = (ulonglong *)((longlong)param_2 - 7);
      lVar14 = uVar28 + lVar5 + 8;
      uVar20 = 0;
      uVar13 = 0;
      uVar38 = 0;
      do {
        uVar39 = (ulonglong)uVar8;
        uVar41 = uVar38;
        if (uVar13 < uVar38) {
          uVar41 = uVar13;
        }
        uVar42 = uVar41 + uVar39;
        if (uVar42 < uVar28) {
          puVar35 = (ulonglong *)((longlong)unaff_RSI + uVar41);
          puVar27 = (ulonglong *)(local_a0 + uVar39 + uVar41);
          puVar25 = (ulonglong *)
                    (((longlong)(local_a0 + uVar28) - (longlong)puVar27) + (longlong)puVar35);
          if (param_2 <= puVar25) {
            puVar25 = param_2;
          }
          puVar21 = puVar27;
          puVar43 = puVar35;
          if (puVar35 < (ulonglong *)((longlong)puVar25 - 7U)) {
            uVar12 = *puVar35 ^ *puVar27;
            if (uVar12 == 0) {
              lVar10 = uVar42 + local_a0 + 8;
              lVar37 = 0;
              do {
                puVar43 = (ulonglong *)((longlong)unaff_RSI + lVar37 + uVar41 + 8);
                if ((ulonglong *)((longlong)puVar25 - 7U) <= puVar43) {
                  puVar21 = (ulonglong *)(lVar10 + lVar37);
                  goto LAB_00edb2d4;
                }
                lVar11 = lVar37 + 8;
                uVar42 = *(ulonglong *)((longlong)unaff_RSI + lVar37 + uVar41 + 8) ^
                         *(ulonglong *)(lVar10 + lVar37);
                lVar37 = lVar11;
              } while (uVar42 == 0);
              uVar12 = 0;
              if (uVar42 != 0) {
                for (; (uVar42 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                }
              }
              uVar42 = (uVar12 >> 3) + lVar11;
            }
            else {
              uVar42 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
                }
              }
              uVar42 = uVar42 >> 3;
            }
          }
          else {
LAB_00edb2d4:
            if ((puVar43 < (ulonglong *)((longlong)puVar25 - 3U)) &&
               ((int)*puVar21 == (int)*puVar43)) {
              puVar43 = (ulonglong *)((longlong)puVar43 + 4);
              puVar21 = (ulonglong *)((longlong)puVar21 + 4);
            }
            if ((puVar43 < (ulonglong *)((longlong)puVar25 - 1U)) &&
               ((short)*puVar21 == (short)*puVar43)) {
              puVar43 = (ulonglong *)((longlong)puVar43 + 2);
              puVar21 = (ulonglong *)((longlong)puVar21 + 2);
            }
            if (puVar43 < puVar25) {
              puVar43 = (ulonglong *)
                        ((longlong)puVar43 + (ulonglong)((byte)*puVar21 == (byte)*puVar43));
            }
            uVar42 = (longlong)puVar43 - (longlong)puVar35;
          }
          if ((byte *)((longlong)puVar27 + uVar42) == (byte *)(local_a0 + uVar28)) {
            puVar35 = (ulonglong *)((longlong)puVar35 + uVar42);
            puVar25 = (ulonglong *)(uVar28 + lVar5);
            puVar27 = puVar35;
            if (puVar35 < puVar2) {
              uVar12 = *puVar35 ^ *(ulonglong *)(uVar28 + lVar5);
              if (uVar12 == 0) {
                lVar37 = uVar42 + uVar41 + 8;
                lVar10 = 0;
                do {
                  puVar27 = (ulonglong *)((longlong)unaff_RSI + lVar10 + lVar37);
                  if (puVar2 <= puVar27) {
                    puVar25 = (ulonglong *)(lVar10 + lVar14);
                    goto LAB_00edb3d1;
                  }
                  lVar11 = lVar10 + 8;
                  uVar12 = *(ulonglong *)((longlong)unaff_RSI + lVar10 + lVar37) ^
                           *(ulonglong *)(lVar14 + lVar10);
                  lVar10 = lVar11;
                } while (uVar12 == 0);
                uVar26 = 0;
                if (uVar12 != 0) {
                  for (; (uVar12 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                  }
                }
                uVar26 = (uVar26 >> 3) + lVar11;
              }
              else {
                uVar26 = 0;
                if (uVar12 != 0) {
                  for (; (uVar12 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                  }
                }
                uVar26 = uVar26 >> 3;
              }
            }
            else {
LAB_00edb3d1:
              if ((puVar27 < (ulonglong *)((longlong)param_2 - 3U)) &&
                 ((int)*puVar25 == (int)*puVar27)) {
                puVar27 = (ulonglong *)((longlong)puVar27 + 4);
                puVar25 = (ulonglong *)((longlong)puVar25 + 4);
              }
              if ((puVar27 < (ulonglong *)((longlong)param_2 - 1U)) &&
                 ((short)*puVar25 == (short)*puVar27)) {
                puVar27 = (ulonglong *)((longlong)puVar27 + 2);
                puVar25 = (ulonglong *)((longlong)puVar25 + 2);
              }
              if (puVar27 < param_2) {
                puVar27 = (ulonglong *)
                          ((longlong)puVar27 + (ulonglong)((byte)*puVar25 == (byte)*puVar27));
              }
              uVar26 = (longlong)puVar27 - (longlong)puVar35;
            }
            uVar42 = uVar42 + uVar26;
          }
          uVar42 = uVar42 + uVar41;
          lVar37 = uVar39 + lVar5;
          if (uVar42 + uVar39 < uVar28) {
            lVar37 = local_a0 + uVar39;
          }
        }
        else {
          puVar35 = (ulonglong *)((longlong)unaff_RSI + uVar41);
          puVar27 = (ulonglong *)(uVar39 + lVar5 + uVar41);
          puVar25 = puVar35;
          if (puVar35 < puVar2) {
            uVar12 = *puVar35 ^ *puVar27;
            if (uVar12 == 0) {
              lVar10 = uVar42 + lVar5 + 8;
              lVar37 = 0;
              do {
                puVar25 = (ulonglong *)((longlong)unaff_RSI + lVar37 + uVar41 + 8);
                if (puVar2 <= puVar25) {
                  puVar27 = (ulonglong *)(lVar10 + lVar37);
                  goto LAB_00edb1da;
                }
                lVar11 = lVar37 + 8;
                uVar42 = *(ulonglong *)((longlong)unaff_RSI + lVar37 + uVar41 + 8) ^
                         *(ulonglong *)(lVar10 + lVar37);
                lVar37 = lVar11;
              } while (uVar42 == 0);
              uVar12 = 0;
              if (uVar42 != 0) {
                for (; (uVar42 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                }
              }
              uVar42 = (uVar12 >> 3) + lVar11;
            }
            else {
              uVar42 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
                }
              }
              uVar42 = uVar42 >> 3;
            }
          }
          else {
LAB_00edb1da:
            if ((puVar25 < (ulonglong *)((longlong)param_2 - 3U)) &&
               ((int)*puVar27 == (int)*puVar25)) {
              puVar25 = (ulonglong *)((longlong)puVar25 + 4);
              puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            }
            if ((puVar25 < (ulonglong *)((longlong)param_2 - 1U)) &&
               ((short)*puVar27 == (short)*puVar25)) {
              puVar25 = (ulonglong *)((longlong)puVar25 + 2);
              puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            }
            if (puVar25 < param_2) {
              puVar25 = (ulonglong *)
                        ((longlong)puVar25 + (ulonglong)((byte)*puVar27 == (byte)*puVar25));
            }
            uVar42 = (longlong)puVar25 - (longlong)puVar35;
          }
          uVar42 = uVar42 + uVar41;
          lVar37 = uVar39 + lVar5;
        }
        if (uVar20 < uVar42) {
          iVar7 = uVar8 + (int)uVar42;
          if (uVar42 <= iVar33 - uVar8) {
            iVar7 = iVar33;
          }
          iVar33 = iVar7;
          uVar4 = (uVar23 - uVar8) + 1;
          uVar24 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> uVar24 == 0; uVar24 = uVar24 - 1) {
            }
          }
          uVar4 = 0x1f;
          if ((uint)*param_1 != 0) {
            for (; (uint)*param_1 >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          if ((int)((uVar4 ^ 0x1f) - (uVar24 ^ 0x1f)) < ((int)uVar42 - (int)uVar20) * 4) {
            *param_1 = (ulonglong)((uVar23 - uVar8) + 3);
            uVar20 = uVar42;
          }
          if ((ulonglong *)((longlong)unaff_RSI + uVar42) == param_2) goto LAB_00edb543;
        }
        puVar15 = (uint *)(lVar6 + (ulonglong)((uVar8 & uVar44) * 2) * 4);
        if (*(byte *)(lVar37 + uVar42) < *(byte *)((longlong)unaff_RSI + uVar42)) {
          *local_48 = uVar8;
          if (uVar8 <= uVar9) {
            local_48 = &local_12c;
            goto LAB_00edb543;
          }
          puVar15 = puVar15 + 1;
          uVar13 = uVar42;
          uVar42 = uVar38;
          local_48 = puVar15;
        }
        else {
          *puVar29 = uVar8;
          puVar29 = puVar15;
          if (uVar8 <= uVar9) {
            puVar29 = &local_12c;
            goto LAB_00edb543;
          }
        }
        local_124 = local_124 - 1;
        if ((local_124 == 0) || (uVar8 = *puVar15, uVar38 = uVar42, uVar8 <= uVar36))
        goto LAB_00edb543;
      } while( true );
    }
    uVar20 = 0;
LAB_00edb543:
    *puVar29 = 0;
    *local_48 = 0;
    *(int *)(unaff_RDI + 0x2c) = iVar33 + -8;
  }
  return uVar20;
}



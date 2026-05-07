// Function: FUN_00eb177b
// Address: 00eb177b
// Size: 4296 bytes
// Class: Unknown


ulonglong FUN_00eb177b(int *param_1,undefined8 param_2,ulonglong *param_3,int *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  byte *pbVar5;
  int *piVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  longlong unaff_RSI;
  longlong lVar32;
  ulonglong *puVar33;
  uint uVar34;
  longlong unaff_RDI;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong *puVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong *puVar40;
  longlong lVar41;
  uint uVar42;
  ulonglong *puVar43;
  ulonglong *puVar44;
  longlong lVar45;
  uint local_res8;
  int local_res10;
  uint local_128;
  uint local_124 [7];
  int *local_108;
  longlong local_f0;
  uint *local_a0;
  ulonglong local_88;
  uint *local_48;
  
  lVar8 = *(longlong *)(unaff_RSI + 8);
  uVar25 = (ulonglong)*(uint *)(unaff_RSI + 0x2c);
  local_88 = 0;
  if ((int *)(lVar8 + uVar25) <= param_1) {
    uVar30 = (int)param_1 - (int)lVar8;
    puVar1 = (ulonglong *)((longlong)param_3 - 7);
    puVar2 = (ulonglong *)((longlong)param_3 - 3);
    puVar3 = (ulonglong *)((longlong)param_3 - 1);
    local_108 = param_4;
    if (*(uint *)(unaff_RSI + 0x2c) < uVar30) {
      lVar41 = *(longlong *)(unaff_RSI + 0x10);
      lVar12 = *(longlong *)(unaff_RSI + 0x70);
      local_f0 = *(longlong *)(unaff_RSI + 0x80);
      lVar11 = lVar8 + 8;
      do {
        uVar38 = (ulonglong)
                 ((uint)(*(int *)(lVar8 + uVar25) * -0x61c8864f) >>
                 (-*(char *)(unaff_RSI + 0x108) & 0x1fU));
        uVar34 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
        uVar14 = *(uint *)(lVar12 + uVar38 * 4);
        uVar10 = (uint)uVar25;
        uVar19 = uVar10 - uVar34;
        if (uVar10 < uVar34) {
          uVar19 = 0;
        }
        uVar31 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
        uVar24 = (ulonglong)((uVar10 & uVar34) * 2);
        uVar20 = *(uint *)(unaff_RSI + 0x1c);
        uVar42 = uVar30 - uVar31;
        if (uVar30 - uVar20 <= uVar31) {
          uVar42 = uVar20;
        }
        uVar15 = (ulonglong)*(uint *)(unaff_RSI + 0x18);
        puVar29 = (uint *)(local_f0 + uVar24 * 4);
        local_48 = (uint *)(local_f0 + 4 + uVar24 * 4);
        if (*(int *)(unaff_RSI + 0x28) != 0) {
          uVar42 = uVar20;
        }
        uVar7 = *(undefined4 *)(unaff_RSI + 0x10c);
        *(uint *)(lVar12 + uVar38 * 4) = uVar10;
        iVar26 = uVar10 + 9;
        uVar38 = 8;
        if (uVar42 <= uVar14) {
          lVar32 = lVar8 + uVar25;
          iVar23 = 1 << ((byte)uVar7 & 0x1f);
          lVar39 = lVar11 + uVar25;
          uVar38 = 8;
          uVar25 = 0;
          uVar24 = 0;
          do {
            uVar28 = (ulonglong)uVar14;
            uVar35 = uVar24;
            if (uVar25 < uVar24) {
              uVar35 = uVar25;
            }
            uVar17 = uVar35 + uVar28;
            if (uVar17 < uVar15) {
              puVar43 = (ulonglong *)(lVar32 + uVar35);
              puVar13 = (ulonglong *)(lVar41 + uVar28 + uVar35);
              puVar37 = (ulonglong *)
                        (((longlong)(lVar41 + uVar15) - (longlong)puVar13) + (longlong)puVar43);
              if (param_3 <= puVar37) {
                puVar37 = param_3;
              }
              puVar44 = puVar13;
              puVar33 = puVar43;
              if (puVar43 < (ulonglong *)((longlong)puVar37 - 7U)) {
                uVar16 = *puVar43 ^ *puVar13;
                if (uVar16 == 0) {
                  lVar27 = uVar17 + lVar41 + 8;
                  lVar45 = 0;
                  do {
                    puVar33 = (ulonglong *)(lVar39 + uVar35 + lVar45);
                    if ((ulonglong *)((longlong)puVar37 - 7U) <= puVar33) {
                      puVar44 = (ulonglong *)(lVar27 + lVar45);
                      goto LAB_00eb1b3c;
                    }
                    lVar4 = lVar45 + 8;
                    uVar17 = *(ulonglong *)(lVar39 + uVar35 + lVar45) ^
                             *(ulonglong *)(lVar27 + lVar45);
                    lVar45 = lVar4;
                  } while (uVar17 == 0);
                  uVar16 = 0;
                  if (uVar17 != 0) {
                    for (; (uVar17 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                    }
                  }
                  uVar17 = (uVar16 >> 3) + lVar4;
                }
                else {
                  uVar17 = 0;
                  if (uVar16 != 0) {
                    for (; (uVar16 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                    }
                  }
                  uVar17 = uVar17 >> 3;
                }
              }
              else {
LAB_00eb1b3c:
                if ((puVar33 < (ulonglong *)((longlong)puVar37 - 3U)) &&
                   ((int)*puVar44 == (int)*puVar33)) {
                  puVar33 = (ulonglong *)((longlong)puVar33 + 4);
                  puVar44 = (ulonglong *)((longlong)puVar44 + 4);
                }
                if ((puVar33 < (ulonglong *)((longlong)puVar37 - 1U)) &&
                   ((short)*puVar44 == (short)*puVar33)) {
                  puVar33 = (ulonglong *)((longlong)puVar33 + 2);
                  puVar44 = (ulonglong *)((longlong)puVar44 + 2);
                }
                if (puVar33 < puVar37) {
                  puVar33 = (ulonglong *)
                            ((longlong)puVar33 + (ulonglong)((byte)*puVar44 == (byte)*puVar33));
                }
                uVar17 = (longlong)puVar33 - (longlong)puVar43;
              }
              if ((byte *)((longlong)puVar13 + uVar17) == (byte *)(lVar41 + uVar15)) {
                puVar43 = (ulonglong *)((longlong)puVar43 + uVar17);
                puVar13 = puVar43;
                puVar37 = (ulonglong *)(lVar8 + uVar15);
                if (puVar43 < puVar1) {
                  uVar16 = *puVar43 ^ *(ulonglong *)(lVar8 + uVar15);
                  if (uVar16 == 0) {
                    lVar27 = uVar17 + uVar35 + lVar39;
                    lVar45 = 0;
                    do {
                      puVar13 = (ulonglong *)(lVar27 + lVar45);
                      if (puVar1 <= puVar13) {
                        puVar37 = (ulonglong *)(lVar45 + lVar11 + uVar15);
                        goto LAB_00eb1c5c;
                      }
                      lVar4 = lVar45 + 8;
                      uVar16 = *(ulonglong *)(lVar27 + lVar45) ^
                               *(ulonglong *)(lVar11 + uVar15 + lVar45);
                      lVar45 = lVar4;
                    } while (uVar16 == 0);
                    uVar36 = 0;
                    if (uVar16 != 0) {
                      for (; (uVar16 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                      }
                    }
                    uVar36 = (uVar36 >> 3) + lVar4;
                  }
                  else {
                    uVar36 = 0;
                    if (uVar16 != 0) {
                      for (; (uVar16 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                      }
                    }
                    uVar36 = uVar36 >> 3;
                  }
                }
                else {
LAB_00eb1c5c:
                  if ((puVar13 < puVar2) && ((int)*puVar37 == (int)*puVar13)) {
                    puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                    puVar37 = (ulonglong *)((longlong)puVar37 + 4);
                  }
                  if ((puVar13 < puVar3) && ((short)*puVar37 == (short)*puVar13)) {
                    puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                    puVar37 = (ulonglong *)((longlong)puVar37 + 2);
                  }
                  if (puVar13 < param_3) {
                    puVar13 = (ulonglong *)
                              ((longlong)puVar13 + (ulonglong)((byte)*puVar37 == (byte)*puVar13));
                  }
                  uVar36 = (longlong)puVar13 - (longlong)puVar43;
                }
                uVar17 = uVar17 + uVar36;
              }
              uVar17 = uVar17 + uVar35;
              lVar45 = uVar28 + lVar8;
              if (uVar17 + uVar28 < uVar15) {
                lVar45 = lVar41 + uVar28;
              }
            }
            else {
              lVar45 = uVar28 + lVar8;
              puVar43 = (ulonglong *)(lVar32 + uVar35);
              puVar13 = (ulonglong *)(lVar45 + uVar35);
              puVar37 = puVar43;
              if (puVar43 < puVar1) {
                uVar28 = *puVar43 ^ *puVar13;
                if (uVar28 == 0) {
                  lVar27 = 0;
                  do {
                    puVar37 = (ulonglong *)(lVar39 + uVar35 + lVar27);
                    if (puVar1 <= puVar37) {
                      puVar13 = (ulonglong *)(uVar17 + lVar11 + lVar27);
                      goto LAB_00eb1a25;
                    }
                    lVar4 = lVar27 + 8;
                    uVar28 = *(ulonglong *)(lVar39 + uVar35 + lVar27) ^
                             *(ulonglong *)(uVar17 + lVar11 + lVar27);
                    lVar27 = lVar4;
                  } while (uVar28 == 0);
                  uVar17 = 0;
                  if (uVar28 != 0) {
                    for (; (uVar28 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                    }
                  }
                  uVar17 = (uVar17 >> 3) + lVar4;
                }
                else {
                  uVar17 = 0;
                  if (uVar28 != 0) {
                    for (; (uVar28 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                    }
                  }
                  uVar17 = uVar17 >> 3;
                }
              }
              else {
LAB_00eb1a25:
                if ((puVar37 < puVar2) && ((int)*puVar13 == (int)*puVar37)) {
                  puVar37 = (ulonglong *)((longlong)puVar37 + 4);
                  puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                }
                if ((puVar37 < puVar3) && ((short)*puVar13 == (short)*puVar37)) {
                  puVar37 = (ulonglong *)((longlong)puVar37 + 2);
                  puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                }
                if (puVar37 < param_3) {
                  puVar37 = (ulonglong *)
                            ((longlong)puVar37 + (ulonglong)((byte)*puVar13 == (byte)*puVar37));
                }
                uVar17 = (longlong)puVar37 - (longlong)puVar43;
              }
              uVar17 = uVar17 + uVar35;
            }
            if ((uVar38 < uVar17) && (uVar38 = uVar17, iVar26 - uVar14 < uVar17)) {
              iVar26 = uVar14 + (int)uVar17;
            }
            if ((ulonglong *)(lVar32 + uVar17) == param_3) break;
            puVar18 = (uint *)(local_f0 + (ulonglong)((uVar14 & uVar34) * 2) * 4);
            if (*(byte *)(lVar45 + uVar17) < (byte)*(ulonglong *)(lVar32 + uVar17)) {
              *puVar29 = uVar14;
              if (uVar14 <= uVar19) {
                puVar29 = local_124;
                break;
              }
              puVar18 = puVar18 + 1;
              uVar25 = uVar17;
              uVar17 = uVar24;
              puVar29 = puVar18;
            }
            else {
              *local_48 = uVar14;
              local_48 = puVar18;
              if (uVar14 <= uVar19) {
                local_48 = local_124;
                break;
              }
            }
            iVar23 = iVar23 + -1;
            if ((iVar23 == 0) || (uVar14 = *puVar18, uVar24 = uVar17, uVar14 < uVar42)) break;
          } while( true );
        }
        uVar14 = (int)uVar38 - 0x180;
        if (0xbf < uVar14) {
          uVar14 = 0xc0;
        }
        if (uVar38 < 0x181) {
          uVar14 = 0;
        }
        uVar19 = (iVar26 - uVar10) - 8;
        if (uVar19 < uVar14) {
          uVar19 = uVar14;
        }
        *local_48 = 0;
        *puVar29 = 0;
        uVar25 = (ulonglong)(uVar19 + uVar10);
      } while (uVar19 + uVar10 < uVar30);
    }
    else {
      lVar41 = *(longlong *)(unaff_RSI + 0x10);
      lVar12 = *(longlong *)(unaff_RSI + 0x70);
      local_f0 = *(longlong *)(unaff_RSI + 0x80);
    }
    *(uint *)(unaff_RSI + 0x2c) = uVar30;
    uVar14 = 0xfff;
    if (*(uint *)(unaff_RSI + 0x114) < 0xfff) {
      uVar14 = *(uint *)(unaff_RSI + 0x114);
    }
    uVar25 = (ulonglong)((uint)(*param_1 * -0x61c8864f) >> (-*(char *)(unaff_RSI + 0x108) & 0x1fU));
    uVar19 = *(uint *)(lVar12 + uVar25 * 4);
    uVar10 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
    uVar34 = *(uint *)(unaff_RSI + 0x18);
    uVar38 = (ulonglong)uVar34;
    uVar20 = uVar30 - uVar10;
    if (uVar30 < uVar10) {
      uVar20 = 0;
    }
    uVar21 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
    uVar42 = *(uint *)(unaff_RSI + 0x1c);
    uVar31 = uVar30 - uVar21;
    if (uVar30 - uVar42 <= uVar21) {
      uVar31 = uVar42;
    }
    if (*(int *)(unaff_RSI + 0x28) != 0) {
      uVar31 = uVar42;
    }
    uVar42 = uVar31;
    if (uVar31 == 0) {
      uVar42 = 1;
    }
    iVar26 = 1 << (*(byte *)(unaff_RSI + 0x10c) & 0x1f);
    pbVar5 = (byte *)(lVar41 + uVar38);
    puVar43 = (ulonglong *)(lVar8 + uVar38);
    uVar24 = (ulonglong)(local_res10 - 1);
    if (local_res8 < 0xfffffffd) {
      puVar13 = (ulonglong *)(param_1 + 1);
      uVar15 = (ulonglong)local_res8;
      lVar11 = lVar8 + uVar38 + 8;
      local_88 = 0;
      do {
        if (uVar15 == 3) {
          uVar21 = *local_108 - 1;
        }
        else {
          uVar21 = local_108[uVar15];
        }
        uVar22 = uVar30 - uVar21;
        if (uVar21 - 1 < uVar30 - uVar34) {
          uVar35 = 0;
          if ((uVar31 <= uVar22) && (*param_1 == *(int *)((longlong)param_1 - (ulonglong)uVar21))) {
            lVar32 = -(ulonglong)uVar21;
            puVar37 = (ulonglong *)((longlong)puVar13 + lVar32);
            puVar33 = puVar13;
            if (puVar13 < puVar1) {
              uVar35 = *puVar13 ^ *puVar37;
              if (uVar35 == 0) {
                lVar32 = lVar32 + 0xc;
                lVar39 = 0;
                do {
                  puVar33 = (ulonglong *)((longlong)param_1 + lVar39 + 0xc);
                  if (puVar1 <= puVar33) {
                    puVar37 = (ulonglong *)((longlong)param_1 + lVar39 + lVar32);
                    goto LAB_00eb207e;
                  }
                  lVar45 = lVar39 + 8;
                  uVar35 = *(ulonglong *)((longlong)param_1 + lVar39 + 0xc) ^
                           *(ulonglong *)((longlong)param_1 + lVar39 + lVar32);
                  lVar39 = lVar45;
                } while (uVar35 == 0);
                uVar28 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                  }
                }
                uVar28 = (uVar28 >> 3) + lVar45;
              }
              else {
                uVar28 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                  }
                }
                uVar28 = uVar28 >> 3;
              }
            }
            else {
LAB_00eb207e:
              if ((puVar33 < puVar2) && ((int)*puVar37 == (int)*puVar33)) {
                puVar33 = (ulonglong *)((longlong)puVar33 + 4);
                puVar37 = (ulonglong *)((longlong)puVar37 + 4);
              }
              if ((puVar33 < puVar3) && ((short)*puVar37 == (short)*puVar33)) {
                puVar33 = (ulonglong *)((longlong)puVar33 + 2);
                puVar37 = (ulonglong *)((longlong)puVar37 + 2);
              }
              if (puVar33 < param_3) {
                puVar33 = (ulonglong *)
                          ((longlong)puVar33 + (ulonglong)((byte)*puVar37 == (byte)*puVar33));
              }
              uVar28 = (longlong)puVar33 - (longlong)puVar13;
            }
LAB_00eb2264:
            uVar35 = (ulonglong)((int)uVar28 + 4);
          }
        }
        else {
          uVar35 = 0;
          if ((uVar21 - 1 < uVar30 - uVar31) && (2 < ~uVar22 + uVar34)) {
            piVar6 = (int *)(lVar41 + (ulonglong)uVar22);
            if (*param_1 == *piVar6) {
              puVar33 = (ulonglong *)(piVar6 + 1);
              puVar37 = (ulonglong *)(((longlong)pbVar5 - (longlong)puVar33) + (longlong)puVar13);
              if (param_3 <= puVar37) {
                puVar37 = param_3;
              }
              puVar44 = puVar13;
              puVar40 = puVar33;
              if (puVar13 < (ulonglong *)((longlong)puVar37 - 7U)) {
                uVar35 = *puVar13 ^ *puVar33;
                if (uVar35 == 0) {
                  lVar39 = (ulonglong)uVar22 + lVar41 + 0xc;
                  lVar32 = 0;
                  do {
                    puVar44 = (ulonglong *)((longlong)param_1 + lVar32 + 0xc);
                    if ((ulonglong *)((longlong)puVar37 - 7U) <= puVar44) {
                      puVar40 = (ulonglong *)(lVar39 + lVar32);
                      goto LAB_00eb2144;
                    }
                    lVar45 = lVar32 + 8;
                    uVar35 = *(ulonglong *)((longlong)param_1 + lVar32 + 0xc) ^
                             *(ulonglong *)(lVar39 + lVar32);
                    lVar32 = lVar45;
                  } while (uVar35 == 0);
                  uVar28 = 0;
                  if (uVar35 != 0) {
                    for (; (uVar35 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                    }
                  }
                  uVar28 = (uVar28 >> 3) + lVar45;
                }
                else {
                  uVar28 = 0;
                  if (uVar35 != 0) {
                    for (; (uVar35 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                    }
                  }
                  uVar28 = uVar28 >> 3;
                }
              }
              else {
LAB_00eb2144:
                if ((puVar44 < (ulonglong *)((longlong)puVar37 - 3U)) &&
                   ((int)*puVar40 == (int)*puVar44)) {
                  puVar44 = (ulonglong *)((longlong)puVar44 + 4);
                  puVar40 = (ulonglong *)((longlong)puVar40 + 4);
                }
                if ((puVar44 < (ulonglong *)((longlong)puVar37 - 1U)) &&
                   ((short)*puVar40 == (short)*puVar44)) {
                  puVar44 = (ulonglong *)((longlong)puVar44 + 2);
                  puVar40 = (ulonglong *)((longlong)puVar40 + 2);
                }
                if (puVar44 < puVar37) {
                  puVar44 = (ulonglong *)
                            ((longlong)puVar44 + (ulonglong)((byte)*puVar40 == (byte)*puVar44));
                }
                uVar28 = (longlong)puVar44 - (longlong)puVar13;
              }
              if ((byte *)((longlong)puVar33 + uVar28) == pbVar5) {
                puVar37 = (ulonglong *)((longlong)puVar13 + uVar28);
                puVar33 = puVar37;
                puVar44 = puVar43;
                if (puVar37 < puVar1) {
                  uVar35 = *puVar37 ^ *puVar43;
                  if (uVar35 == 0) {
                    lVar32 = 0;
                    do {
                      puVar33 = (ulonglong *)((longlong)param_1 + lVar32 + uVar28 + 0xc);
                      if (puVar1 <= puVar33) {
                        puVar44 = (ulonglong *)(lVar32 + lVar11);
                        goto LAB_00eb2219;
                      }
                      lVar39 = lVar32 + 8;
                      uVar35 = *(ulonglong *)((longlong)param_1 + lVar32 + uVar28 + 0xc) ^
                               *(ulonglong *)(lVar11 + lVar32);
                      lVar32 = lVar39;
                    } while (uVar35 == 0);
                    uVar17 = 0;
                    if (uVar35 != 0) {
                      for (; (uVar35 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                      }
                    }
                    uVar17 = (uVar17 >> 3) + lVar39;
                  }
                  else {
                    uVar17 = 0;
                    if (uVar35 != 0) {
                      for (; (uVar35 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                      }
                    }
                    uVar17 = uVar17 >> 3;
                  }
                }
                else {
LAB_00eb2219:
                  if ((puVar33 < puVar2) && ((int)*puVar44 == (int)*puVar33)) {
                    puVar33 = (ulonglong *)((longlong)puVar33 + 4);
                    puVar44 = (ulonglong *)((longlong)puVar44 + 4);
                  }
                  if ((puVar33 < puVar3) && ((short)*puVar44 == (short)*puVar33)) {
                    puVar33 = (ulonglong *)((longlong)puVar33 + 2);
                    puVar44 = (ulonglong *)((longlong)puVar44 + 2);
                  }
                  if (puVar33 < param_3) {
                    puVar33 = (ulonglong *)
                              ((longlong)puVar33 + (ulonglong)((byte)*puVar44 == (byte)*puVar33));
                  }
                  uVar17 = (longlong)puVar33 - (longlong)puVar37;
                }
                uVar28 = uVar28 + uVar17;
              }
              goto LAB_00eb2264;
            }
          }
        }
        if (uVar24 < uVar35) {
          *(uint *)(unaff_RDI + local_88 * 8) = (1 - local_res8) + (int)uVar15;
          *(uint *)(unaff_RDI + 4 + local_88 * 8) = (uint)uVar35;
          local_88 = (ulonglong)((int)local_88 + 1);
          if (uVar14 < (uint)uVar35) {
            return local_88;
          }
          uVar24 = uVar35;
          if ((ulonglong *)((longlong)param_1 + uVar35) == param_3) {
            return local_88;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_res8 + 3);
    }
    else {
      local_88 = 0;
    }
    uVar15 = (ulonglong)((uVar10 & uVar30) * 2);
    local_a0 = (uint *)(local_f0 + uVar15 * 4);
    puVar29 = (uint *)(local_f0 + uVar15 * 4 + 4);
    iVar23 = uVar30 + 9;
    *(uint *)(lVar12 + uVar25 * 4) = uVar30;
    if (uVar42 <= uVar19) {
      lVar12 = uVar38 + lVar8 + 8;
      uVar25 = 0;
      uVar15 = 0;
      do {
        uVar35 = uVar15;
        if (uVar25 < uVar15) {
          uVar35 = uVar25;
        }
        uVar17 = (ulonglong)uVar19;
        uVar28 = uVar35 + uVar17;
        if (uVar28 < uVar38) {
          puVar13 = (ulonglong *)((longlong)param_1 + uVar35);
          puVar37 = (ulonglong *)(lVar41 + uVar17 + uVar35);
          puVar33 = (ulonglong *)(((longlong)pbVar5 - (longlong)puVar37) + (longlong)puVar13);
          if (param_3 <= puVar33) {
            puVar33 = param_3;
          }
          puVar40 = puVar37;
          puVar44 = puVar13;
          if (puVar13 < (ulonglong *)((longlong)puVar33 - 7U)) {
            uVar16 = *puVar13 ^ *puVar37;
            if (uVar16 == 0) {
              lVar32 = uVar28 + lVar41 + 8;
              lVar11 = 0;
              do {
                puVar44 = (ulonglong *)((longlong)param_1 + lVar11 + uVar35 + 8);
                if ((ulonglong *)((longlong)puVar33 - 7U) <= puVar44) {
                  puVar40 = (ulonglong *)(lVar32 + lVar11);
                  goto LAB_00eb259e;
                }
                lVar39 = lVar11 + 8;
                uVar28 = *(ulonglong *)((longlong)param_1 + lVar11 + uVar35 + 8) ^
                         *(ulonglong *)(lVar32 + lVar11);
                lVar11 = lVar39;
              } while (uVar28 == 0);
              uVar16 = 0;
              if (uVar28 != 0) {
                for (; (uVar28 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              uVar28 = (uVar16 >> 3) + lVar39;
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
LAB_00eb259e:
            if ((puVar44 < (ulonglong *)((longlong)puVar33 - 3U)) &&
               ((int)*puVar40 == (int)*puVar44)) {
              puVar44 = (ulonglong *)((longlong)puVar44 + 4);
              puVar40 = (ulonglong *)((longlong)puVar40 + 4);
            }
            if ((puVar44 < (ulonglong *)((longlong)puVar33 - 1U)) &&
               ((short)*puVar40 == (short)*puVar44)) {
              puVar44 = (ulonglong *)((longlong)puVar44 + 2);
              puVar40 = (ulonglong *)((longlong)puVar40 + 2);
            }
            if (puVar44 < puVar33) {
              puVar44 = (ulonglong *)
                        ((longlong)puVar44 + (ulonglong)((byte)*puVar40 == (byte)*puVar44));
            }
            uVar28 = (longlong)puVar44 - (longlong)puVar13;
          }
          if ((byte *)((longlong)puVar37 + uVar28) == pbVar5) {
            puVar13 = (ulonglong *)((longlong)puVar13 + uVar28);
            puVar33 = puVar43;
            puVar37 = puVar13;
            if (puVar13 < puVar1) {
              uVar16 = *puVar13 ^ *puVar43;
              if (uVar16 == 0) {
                lVar11 = uVar35 + uVar28 + 8;
                lVar32 = 0;
                do {
                  puVar37 = (ulonglong *)((longlong)param_1 + lVar32 + lVar11);
                  if (puVar1 <= puVar37) {
                    puVar33 = (ulonglong *)(lVar32 + lVar12);
                    goto LAB_00eb26d0;
                  }
                  lVar39 = lVar32 + 8;
                  uVar16 = *(ulonglong *)((longlong)param_1 + lVar32 + lVar11) ^
                           *(ulonglong *)(lVar12 + lVar32);
                  lVar32 = lVar39;
                } while (uVar16 == 0);
                uVar36 = 0;
                if (uVar16 != 0) {
                  for (; (uVar16 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                  }
                }
                uVar36 = (uVar36 >> 3) + lVar39;
              }
              else {
                uVar36 = 0;
                if (uVar16 != 0) {
                  for (; (uVar16 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                  }
                }
                uVar36 = uVar36 >> 3;
              }
            }
            else {
LAB_00eb26d0:
              if ((puVar37 < puVar2) && ((int)*puVar33 == (int)*puVar37)) {
                puVar37 = (ulonglong *)((longlong)puVar37 + 4);
                puVar33 = (ulonglong *)((longlong)puVar33 + 4);
              }
              if ((puVar37 < puVar3) && ((short)*puVar33 == (short)*puVar37)) {
                puVar37 = (ulonglong *)((longlong)puVar37 + 2);
                puVar33 = (ulonglong *)((longlong)puVar33 + 2);
              }
              if (puVar37 < param_3) {
                puVar37 = (ulonglong *)
                          ((longlong)puVar37 + (ulonglong)((byte)*puVar33 == (byte)*puVar37));
              }
              uVar36 = (longlong)puVar37 - (longlong)puVar13;
            }
            uVar28 = uVar28 + uVar36;
          }
          uVar28 = uVar28 + uVar35;
          lVar11 = uVar17 + lVar8;
          if (uVar17 + uVar28 < uVar38) {
            lVar11 = lVar41 + uVar17;
          }
        }
        else {
          lVar11 = uVar17 + lVar8;
          puVar13 = (ulonglong *)((longlong)param_1 + uVar35);
          puVar37 = (ulonglong *)(lVar11 + uVar35);
          puVar33 = puVar13;
          if (puVar13 < puVar1) {
            uVar17 = *puVar13 ^ *puVar37;
            if (uVar17 == 0) {
              lVar39 = uVar28 + lVar8 + 8;
              lVar32 = 0;
              do {
                puVar33 = (ulonglong *)((longlong)param_1 + lVar32 + uVar35 + 8);
                if (puVar1 <= puVar33) {
                  puVar37 = (ulonglong *)(lVar39 + lVar32);
                  goto LAB_00eb2453;
                }
                lVar45 = lVar32 + 8;
                uVar28 = *(ulonglong *)((longlong)param_1 + lVar32 + uVar35 + 8) ^
                         *(ulonglong *)(lVar39 + lVar32);
                lVar32 = lVar45;
              } while (uVar28 == 0);
              uVar17 = 0;
              if (uVar28 != 0) {
                for (; (uVar28 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                }
              }
              uVar28 = (uVar17 >> 3) + lVar45;
            }
            else {
              uVar28 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                }
              }
              uVar28 = uVar28 >> 3;
            }
          }
          else {
LAB_00eb2453:
            if ((puVar33 < puVar2) && ((int)*puVar37 == (int)*puVar33)) {
              puVar33 = (ulonglong *)((longlong)puVar33 + 4);
              puVar37 = (ulonglong *)((longlong)puVar37 + 4);
            }
            if ((puVar33 < puVar3) && ((short)*puVar37 == (short)*puVar33)) {
              puVar33 = (ulonglong *)((longlong)puVar33 + 2);
              puVar37 = (ulonglong *)((longlong)puVar37 + 2);
            }
            if (puVar33 < param_3) {
              puVar33 = (ulonglong *)
                        ((longlong)puVar33 + (ulonglong)((byte)*puVar37 == (byte)*puVar33));
            }
            uVar28 = (longlong)puVar33 - (longlong)puVar13;
          }
          uVar28 = uVar28 + uVar35;
        }
        if (uVar24 < uVar28) {
          iVar9 = uVar19 + (int)uVar28;
          if (uVar28 <= iVar23 - uVar19) {
            iVar9 = iVar23;
          }
          iVar23 = iVar9;
          *(uint *)(unaff_RDI + local_88 * 8) = (uVar30 + 3) - uVar19;
          *(int *)(unaff_RDI + 4 + local_88 * 8) = (int)uVar28;
          local_88 = (ulonglong)((int)local_88 + 1);
          if ((0x1000 < uVar28) ||
             (uVar24 = uVar28, (ulonglong *)((longlong)param_1 + uVar28) == param_3)) break;
        }
        puVar18 = (uint *)(local_f0 + (ulonglong)((uVar19 & uVar10) * 2) * 4);
        if (*(byte *)(lVar11 + uVar28) < *(byte *)((longlong)param_1 + uVar28)) {
          *local_a0 = uVar19;
          if (uVar19 <= uVar20) {
            local_a0 = &local_128;
            break;
          }
          puVar18 = puVar18 + 1;
          uVar25 = uVar28;
          uVar28 = uVar15;
          local_a0 = puVar18;
        }
        else {
          *puVar29 = uVar19;
          puVar29 = puVar18;
          if (uVar19 <= uVar20) {
            puVar29 = &local_128;
            break;
          }
        }
        iVar26 = iVar26 + -1;
        if ((iVar26 == 0) || (uVar19 = *puVar18, uVar15 = uVar28, uVar19 < uVar42)) break;
      } while( true );
    }
    *puVar29 = 0;
    *local_a0 = 0;
    *(int *)(unaff_RSI + 0x2c) = iVar23 + -8;
  }
  return local_88;
}



// Function: FUN_00eb389a
// Address: 00eb389a
// Size: 4183 bytes
// Class: Unknown


ulonglong FUN_00eb389a(longlong *param_1,undefined8 param_2,ulonglong *param_3,int *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  longlong unaff_RSI;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong unaff_RDI;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  uint *puVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong *puVar38;
  int iVar39;
  ulonglong *puVar40;
  ulonglong *puVar41;
  uint local_res8;
  int local_res10;
  uint local_120;
  uint local_11c [3];
  longlong local_110;
  longlong local_108;
  int *local_f8;
  ulonglong *local_f0;
  ulonglong *local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_c8;
  uint *local_a8;
  ulonglong local_90;
  uint *local_38;
  
  lVar6 = *(longlong *)(unaff_RSI + 8);
  uVar19 = (ulonglong)*(uint *)(unaff_RSI + 0x2c);
  uVar16 = 0;
  if ((longlong *)(lVar6 + uVar19) <= param_1) {
    uVar8 = (int)param_1 - (int)lVar6;
    local_c8 = (ulonglong)uVar8;
    puVar1 = (ulonglong *)((longlong)param_3 - 7);
    local_f0 = (ulonglong *)((longlong)param_3 + -3);
    local_e8 = (ulonglong *)((longlong)param_3 + -1);
    local_f8 = param_4;
    if (*(uint *)(unaff_RSI + 0x2c) < uVar8) {
      local_d8 = *(longlong *)(unaff_RSI + 0x10);
      local_e0 = *(longlong *)(unaff_RSI + 0x70);
      local_108 = *(longlong *)(unaff_RSI + 0x80);
      local_110 = lVar6 + 8;
      lVar9 = local_d8 + 8;
      do {
        uVar16 = (ulonglong)(*(longlong *)(lVar6 + uVar19) * -0x30e4432340650000) >>
                 (-*(char *)(unaff_RSI + 0x108) & 0x3fU);
        uVar23 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
        uVar8 = *(uint *)(local_e0 + uVar16 * 4);
        uVar12 = (uint)uVar19;
        uVar11 = uVar12 - uVar23;
        if (uVar12 < uVar23) {
          uVar11 = 0;
        }
        uVar24 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
        uVar10 = (ulonglong)((uVar12 & uVar23) * 2);
        uVar31 = *(uint *)(unaff_RSI + 0x1c);
        uVar34 = (int)local_c8 - uVar24;
        if ((int)local_c8 - uVar31 <= uVar24) {
          uVar34 = uVar31;
        }
        uVar20 = (ulonglong)*(uint *)(unaff_RSI + 0x18);
        local_a8 = (uint *)(local_108 + uVar10 * 4);
        puVar35 = (uint *)(local_108 + 4 + uVar10 * 4);
        if (*(int *)(unaff_RSI + 0x28) != 0) {
          uVar34 = uVar31;
        }
        uVar5 = *(undefined4 *)(unaff_RSI + 0x10c);
        *(uint *)(local_e0 + uVar16 * 4) = uVar12;
        iVar39 = uVar12 + 9;
        uVar16 = 8;
        if (uVar34 <= uVar8) {
          lVar21 = uVar19 + lVar6;
          iVar25 = 1 << ((byte)uVar5 & 0x1f);
          lVar36 = local_110 + uVar19;
          uVar16 = 8;
          local_90 = 0;
          uVar19 = 0;
          do {
            uVar29 = (ulonglong)uVar8;
            uVar10 = uVar19;
            if (local_90 < uVar19) {
              uVar10 = local_90;
            }
            uVar33 = uVar10 + uVar29;
            if (uVar33 < uVar20) {
              puVar27 = (ulonglong *)(lVar21 + uVar10);
              puVar17 = (ulonglong *)(local_d8 + uVar29 + uVar10);
              puVar40 = (ulonglong *)
                        (((longlong)(local_d8 + uVar20) - (longlong)puVar17) + (longlong)puVar27);
              if (param_3 <= puVar40) {
                puVar40 = param_3;
              }
              puVar41 = puVar17;
              puVar14 = puVar27;
              if (puVar27 < (ulonglong *)((longlong)puVar40 - 7U)) {
                uVar26 = *puVar27 ^ *puVar17;
                if (uVar26 == 0) {
                  lVar32 = uVar33 + lVar9;
                  lVar37 = 0;
                  do {
                    puVar14 = (ulonglong *)(lVar36 + uVar10 + lVar37);
                    if ((ulonglong *)((longlong)puVar40 - 7U) <= puVar14) {
                      puVar41 = (ulonglong *)(lVar32 + lVar37);
                      goto LAB_00eb3c74;
                    }
                    lVar2 = lVar37 + 8;
                    uVar33 = *(ulonglong *)(lVar36 + uVar10 + lVar37) ^
                             *(ulonglong *)(lVar32 + lVar37);
                    lVar37 = lVar2;
                  } while (uVar33 == 0);
                  uVar26 = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                    }
                  }
                  uVar33 = (uVar26 >> 3) + lVar2;
                }
                else {
                  uVar33 = 0;
                  if (uVar26 != 0) {
                    for (; (uVar26 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                    }
                  }
                  uVar33 = uVar33 >> 3;
                }
              }
              else {
LAB_00eb3c74:
                if ((puVar14 < (ulonglong *)((longlong)puVar40 - 3U)) &&
                   ((int)*puVar41 == (int)*puVar14)) {
                  puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                  puVar41 = (ulonglong *)((longlong)puVar41 + 4);
                }
                if ((puVar14 < (ulonglong *)((longlong)puVar40 - 1U)) &&
                   ((short)*puVar41 == (short)*puVar14)) {
                  puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                  puVar41 = (ulonglong *)((longlong)puVar41 + 2);
                }
                if (puVar14 < puVar40) {
                  puVar14 = (ulonglong *)
                            ((longlong)puVar14 + (ulonglong)((byte)*puVar41 == (byte)*puVar14));
                }
                uVar33 = (longlong)puVar14 - (longlong)puVar27;
              }
              if ((byte *)((longlong)puVar17 + uVar33) == (byte *)(local_d8 + uVar20)) {
                puVar27 = (ulonglong *)((longlong)puVar27 + uVar33);
                puVar40 = (ulonglong *)(lVar6 + uVar20);
                puVar17 = puVar27;
                if (puVar27 < puVar1) {
                  uVar26 = *puVar27 ^ *(ulonglong *)(lVar6 + uVar20);
                  if (uVar26 == 0) {
                    lVar32 = uVar33 + uVar10 + lVar36;
                    lVar37 = 0;
                    do {
                      puVar17 = (ulonglong *)(lVar32 + lVar37);
                      if (puVar1 <= puVar17) {
                        puVar40 = (ulonglong *)(lVar37 + local_110 + uVar20);
                        goto LAB_00eb3d73;
                      }
                      lVar2 = lVar37 + 8;
                      uVar26 = *(ulonglong *)(lVar32 + lVar37) ^
                               *(ulonglong *)(local_110 + uVar20 + lVar37);
                      lVar37 = lVar2;
                    } while (uVar26 == 0);
                    uVar30 = 0;
                    if (uVar26 != 0) {
                      for (; (uVar26 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                      }
                    }
                    uVar30 = (uVar30 >> 3) + lVar2;
                  }
                  else {
                    uVar30 = 0;
                    if (uVar26 != 0) {
                      for (; (uVar26 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                      }
                    }
                    uVar30 = uVar30 >> 3;
                  }
                }
                else {
LAB_00eb3d73:
                  if ((puVar17 < local_f0) && ((int)*puVar40 == (int)*puVar17)) {
                    puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                    puVar40 = (ulonglong *)((longlong)puVar40 + 4);
                  }
                  if ((puVar17 < local_e8) && ((short)*puVar40 == (short)*puVar17)) {
                    puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                    puVar40 = (ulonglong *)((longlong)puVar40 + 2);
                  }
                  if (puVar17 < param_3) {
                    puVar17 = (ulonglong *)
                              ((longlong)puVar17 + (ulonglong)((byte)*puVar40 == (byte)*puVar17));
                  }
                  uVar30 = (longlong)puVar17 - (longlong)puVar27;
                }
                uVar33 = uVar33 + uVar30;
              }
              uVar33 = uVar33 + uVar10;
              lVar37 = uVar29 + lVar6;
              if (uVar33 + uVar29 < uVar20) {
                lVar37 = local_d8 + uVar29;
              }
            }
            else {
              puVar17 = (ulonglong *)(lVar21 + uVar10);
              puVar40 = (ulonglong *)(uVar29 + lVar6 + uVar10);
              puVar27 = puVar17;
              if (puVar17 < puVar1) {
                uVar26 = *puVar17 ^ *puVar40;
                if (uVar26 == 0) {
                  lVar37 = 0;
                  do {
                    puVar27 = (ulonglong *)(lVar36 + uVar10 + lVar37);
                    if (puVar1 <= puVar27) {
                      puVar40 = (ulonglong *)(uVar33 + local_110 + lVar37);
                      goto LAB_00eb3b65;
                    }
                    lVar32 = lVar37 + 8;
                    uVar26 = *(ulonglong *)(lVar36 + uVar10 + lVar37) ^
                             *(ulonglong *)(uVar33 + local_110 + lVar37);
                    lVar37 = lVar32;
                  } while (uVar26 == 0);
                  uVar33 = 0;
                  if (uVar26 != 0) {
                    for (; (uVar26 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                    }
                  }
                  uVar33 = (uVar33 >> 3) + lVar32;
                }
                else {
                  uVar33 = 0;
                  if (uVar26 != 0) {
                    for (; (uVar26 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                    }
                  }
                  uVar33 = uVar33 >> 3;
                }
              }
              else {
LAB_00eb3b65:
                if ((puVar27 < local_f0) && ((int)*puVar40 == (int)*puVar27)) {
                  puVar27 = (ulonglong *)((longlong)puVar27 + 4);
                  puVar40 = (ulonglong *)((longlong)puVar40 + 4);
                }
                if ((puVar27 < local_e8) && ((short)*puVar40 == (short)*puVar27)) {
                  puVar27 = (ulonglong *)((longlong)puVar27 + 2);
                  puVar40 = (ulonglong *)((longlong)puVar40 + 2);
                }
                if (puVar27 < param_3) {
                  puVar27 = (ulonglong *)
                            ((longlong)puVar27 + (ulonglong)((byte)*puVar40 == (byte)*puVar27));
                }
                uVar33 = (longlong)puVar27 - (longlong)puVar17;
              }
              uVar33 = uVar33 + uVar10;
              lVar37 = uVar29 + lVar6;
            }
            if ((uVar16 < uVar33) && (uVar16 = uVar33, iVar39 - uVar8 < uVar33)) {
              iVar39 = uVar8 + (int)uVar33;
            }
            if ((ulonglong *)(lVar21 + uVar33) == param_3) break;
            puVar18 = (uint *)(local_108 + (ulonglong)((uVar8 & uVar23) * 2) * 4);
            if (*(byte *)(lVar37 + uVar33) < (byte)*(ulonglong *)(lVar21 + uVar33)) {
              *local_a8 = uVar8;
              if (uVar8 <= uVar11) {
                local_a8 = local_11c;
                break;
              }
              puVar18 = puVar18 + 1;
              local_a8 = puVar18;
              local_90 = uVar33;
            }
            else {
              *puVar35 = uVar8;
              puVar35 = puVar18;
              uVar19 = uVar33;
              if (uVar8 <= uVar11) {
                puVar35 = local_11c;
                break;
              }
            }
            iVar25 = iVar25 + -1;
            if ((iVar25 == 0) || (uVar8 = *puVar18, uVar8 < uVar34)) break;
          } while( true );
        }
        uVar8 = (int)uVar16 - 0x180;
        if (0xbf < uVar8) {
          uVar8 = 0xc0;
        }
        if (uVar16 < 0x181) {
          uVar8 = 0;
        }
        uVar11 = (iVar39 - uVar12) - 8;
        if (uVar11 < uVar8) {
          uVar11 = uVar8;
        }
        *puVar35 = 0;
        *local_a8 = 0;
        uVar19 = (ulonglong)(uVar11 + uVar12);
      } while (uVar11 + uVar12 < (uint)local_c8);
    }
    else {
      local_d8 = *(longlong *)(unaff_RSI + 0x10);
      local_e0 = *(longlong *)(unaff_RSI + 0x70);
      local_108 = *(longlong *)(unaff_RSI + 0x80);
      local_c8._0_4_ = uVar8;
    }
    *(uint *)(unaff_RSI + 0x2c) = (uint)local_c8;
    uVar8 = 0xfff;
    if (*(uint *)(unaff_RSI + 0x114) < 0xfff) {
      uVar8 = *(uint *)(unaff_RSI + 0x114);
    }
    uVar19 = (ulonglong)(*param_1 * -0x30e4432340650000) >> (-*(char *)(unaff_RSI + 0x108) & 0x3fU);
    uVar11 = *(uint *)(local_e0 + uVar19 * 4);
    uVar16 = 0;
    uVar31 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
    uVar23 = *(uint *)(unaff_RSI + 0x18);
    uVar10 = (ulonglong)uVar23;
    uVar12 = (uint)local_c8 - uVar31;
    if ((uint)local_c8 < uVar31) {
      uVar12 = 0;
    }
    uVar15 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
    uVar34 = *(uint *)(unaff_RSI + 0x1c);
    uVar24 = (uint)local_c8 - uVar15;
    if ((uint)local_c8 - uVar34 <= uVar15) {
      uVar24 = uVar34;
    }
    if (*(int *)(unaff_RSI + 0x28) != 0) {
      uVar24 = uVar34;
    }
    uVar34 = uVar24;
    if (uVar24 == 0) {
      uVar34 = 1;
    }
    iVar39 = 1 << (*(byte *)(unaff_RSI + 0x10c) & 0x1f);
    pbVar3 = (byte *)(local_d8 + uVar10);
    puVar17 = (ulonglong *)(lVar6 + uVar10);
    uVar20 = (ulonglong)(local_res10 - 1);
    if (local_res8 < 0xfffffffd) {
      puVar40 = (ulonglong *)((longlong)param_1 + 4);
      uVar29 = (ulonglong)local_res8;
      lVar9 = uVar10 + lVar6 + 8;
      uVar16 = 0;
      do {
        if (uVar29 == 3) {
          uVar15 = *local_f8 - 1;
        }
        else {
          uVar15 = local_f8[uVar29];
        }
        uVar13 = (uint)local_c8 - uVar15;
        if (uVar15 - 1 < (uint)local_c8 - uVar23) {
          uVar33 = 0;
          if ((uVar24 <= uVar13) &&
             ((int)*param_1 == *(int *)((longlong)param_1 - (ulonglong)uVar15))) {
            lVar21 = -(ulonglong)uVar15;
            puVar27 = (ulonglong *)((longlong)puVar40 + lVar21);
            puVar14 = puVar40;
            if (puVar40 < puVar1) {
              uVar33 = *puVar40 ^ *puVar27;
              if (uVar33 == 0) {
                lVar21 = lVar21 + 0xc;
                lVar36 = 0;
                do {
                  puVar14 = (ulonglong *)((longlong)param_1 + lVar36 + 0xc);
                  if (puVar1 <= puVar14) {
                    puVar27 = (ulonglong *)((longlong)param_1 + lVar36 + lVar21);
                    goto LAB_00eb4168;
                  }
                  lVar37 = lVar36 + 8;
                  uVar33 = *(ulonglong *)((longlong)param_1 + lVar36 + 0xc) ^
                           *(ulonglong *)((longlong)param_1 + lVar36 + lVar21);
                  lVar36 = lVar37;
                } while (uVar33 == 0);
                uVar26 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                  }
                }
                uVar26 = (uVar26 >> 3) + lVar37;
              }
              else {
                uVar26 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                  }
                }
                uVar26 = uVar26 >> 3;
              }
            }
            else {
LAB_00eb4168:
              if ((puVar14 < local_f0) && ((int)*puVar27 == (int)*puVar14)) {
                puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                puVar27 = (ulonglong *)((longlong)puVar27 + 4);
              }
              if ((puVar14 < local_e8) && ((short)*puVar27 == (short)*puVar14)) {
                puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                puVar27 = (ulonglong *)((longlong)puVar27 + 2);
              }
              if (puVar14 < param_3) {
                puVar14 = (ulonglong *)
                          ((longlong)puVar14 + (ulonglong)((byte)*puVar27 == (byte)*puVar14));
              }
              uVar26 = (longlong)puVar14 - (longlong)puVar40;
            }
LAB_00eb4359:
            uVar33 = (ulonglong)((int)uVar26 + 4);
          }
        }
        else {
          uVar33 = 0;
          if ((uVar15 - 1 < (uint)local_c8 - uVar24) && (2 < ~uVar13 + uVar23)) {
            piVar4 = (int *)(local_d8 + (ulonglong)uVar13);
            if ((int)*param_1 == *piVar4) {
              puVar14 = (ulonglong *)(piVar4 + 1);
              puVar27 = (ulonglong *)(((longlong)pbVar3 - (longlong)puVar14) + (longlong)puVar40);
              if (param_3 <= puVar27) {
                puVar27 = param_3;
              }
              puVar38 = puVar14;
              puVar41 = puVar40;
              if (puVar40 < (ulonglong *)((longlong)puVar27 - 7U)) {
                uVar33 = *puVar40 ^ *puVar14;
                if (uVar33 == 0) {
                  lVar36 = (ulonglong)uVar13 + local_d8 + 0xc;
                  lVar21 = 0;
                  do {
                    puVar41 = (ulonglong *)((longlong)param_1 + lVar21 + 0xc);
                    if ((ulonglong *)((longlong)puVar27 - 7U) <= puVar41) {
                      puVar38 = (ulonglong *)(lVar36 + lVar21);
                      goto LAB_00eb4234;
                    }
                    lVar37 = lVar21 + 8;
                    uVar33 = *(ulonglong *)((longlong)param_1 + lVar21 + 0xc) ^
                             *(ulonglong *)(lVar36 + lVar21);
                    lVar21 = lVar37;
                  } while (uVar33 == 0);
                  uVar26 = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                    }
                  }
                  uVar26 = (uVar26 >> 3) + lVar37;
                }
                else {
                  uVar26 = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                    }
                  }
                  uVar26 = uVar26 >> 3;
                }
              }
              else {
LAB_00eb4234:
                if ((puVar41 < (ulonglong *)((longlong)puVar27 - 3U)) &&
                   ((int)*puVar38 == (int)*puVar41)) {
                  puVar41 = (ulonglong *)((longlong)puVar41 + 4);
                  puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                }
                if ((puVar41 < (ulonglong *)((longlong)puVar27 - 1U)) &&
                   ((short)*puVar38 == (short)*puVar41)) {
                  puVar41 = (ulonglong *)((longlong)puVar41 + 2);
                  puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                }
                if (puVar41 < puVar27) {
                  puVar41 = (ulonglong *)
                            ((longlong)puVar41 + (ulonglong)((byte)*puVar38 == (byte)*puVar41));
                }
                uVar26 = (longlong)puVar41 - (longlong)puVar40;
              }
              if ((byte *)((longlong)puVar14 + uVar26) == pbVar3) {
                puVar27 = (ulonglong *)((longlong)puVar40 + uVar26);
                puVar14 = puVar27;
                puVar41 = puVar17;
                if (puVar27 < puVar1) {
                  uVar33 = *puVar27 ^ *puVar17;
                  if (uVar33 == 0) {
                    lVar21 = 0;
                    do {
                      puVar14 = (ulonglong *)((longlong)param_1 + lVar21 + uVar26 + 0xc);
                      if (puVar1 <= puVar14) {
                        puVar41 = (ulonglong *)(lVar21 + lVar9);
                        goto LAB_00eb4310;
                      }
                      lVar36 = lVar21 + 8;
                      uVar33 = *(ulonglong *)((longlong)param_1 + lVar21 + uVar26 + 0xc) ^
                               *(ulonglong *)(lVar9 + lVar21);
                      lVar21 = lVar36;
                    } while (uVar33 == 0);
                    uVar30 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                      }
                    }
                    uVar30 = (uVar30 >> 3) + lVar36;
                  }
                  else {
                    uVar30 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                      }
                    }
                    uVar30 = uVar30 >> 3;
                  }
                }
                else {
LAB_00eb4310:
                  if ((puVar14 < local_f0) && ((int)*puVar41 == (int)*puVar14)) {
                    puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                    puVar41 = (ulonglong *)((longlong)puVar41 + 4);
                  }
                  if ((puVar14 < local_e8) && ((short)*puVar41 == (short)*puVar14)) {
                    puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                    puVar41 = (ulonglong *)((longlong)puVar41 + 2);
                  }
                  if (puVar14 < param_3) {
                    puVar14 = (ulonglong *)
                              ((longlong)puVar14 + (ulonglong)((byte)*puVar41 == (byte)*puVar14));
                  }
                  uVar30 = (longlong)puVar14 - (longlong)puVar27;
                }
                uVar26 = uVar26 + uVar30;
              }
              goto LAB_00eb4359;
            }
          }
        }
        if (uVar20 < uVar33) {
          *(uint *)(unaff_RDI + uVar16 * 8) = (1 - local_res8) + (int)uVar29;
          *(uint *)(unaff_RDI + 4 + uVar16 * 8) = (uint)uVar33;
          uVar16 = (ulonglong)((int)uVar16 + 1);
          if (uVar8 < (uint)uVar33) {
            return uVar16;
          }
          uVar20 = uVar33;
          if ((ulonglong *)((longlong)param_1 + uVar33) == param_3) {
            return uVar16;
          }
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < local_res8 + 3);
    }
    uVar29 = (ulonglong)((uVar31 & (uint)local_c8) * 2);
    local_38 = (uint *)(local_108 + uVar29 * 4);
    puVar35 = (uint *)(local_108 + uVar29 * 4 + 4);
    iVar25 = (uint)local_c8 + 9;
    *(uint *)(local_e0 + uVar19 * 4) = (uint)local_c8;
    if (uVar34 <= uVar11) {
      lVar9 = uVar10 + lVar6 + 8;
      uVar29 = 0;
      uVar19 = 0;
      do {
        uVar33 = uVar19;
        if (uVar29 < uVar19) {
          uVar33 = uVar29;
        }
        uVar30 = (ulonglong)uVar11;
        uVar26 = uVar33 + uVar30;
        if (uVar26 < uVar10) {
          puVar14 = (ulonglong *)((longlong)param_1 + uVar33);
          puVar40 = (ulonglong *)(local_d8 + uVar30 + uVar33);
          puVar27 = (ulonglong *)(((longlong)pbVar3 - (longlong)puVar40) + (longlong)puVar14);
          if (param_3 <= puVar27) {
            puVar27 = param_3;
          }
          puVar38 = puVar40;
          puVar41 = puVar14;
          if (puVar14 < (ulonglong *)((longlong)puVar27 - 7U)) {
            uVar22 = *puVar14 ^ *puVar40;
            if (uVar22 == 0) {
              lVar36 = uVar26 + local_d8 + 8;
              lVar21 = 0;
              do {
                puVar41 = (ulonglong *)((longlong)param_1 + lVar21 + uVar33 + 8);
                if ((ulonglong *)((longlong)puVar27 - 7U) <= puVar41) {
                  puVar38 = (ulonglong *)(lVar36 + lVar21);
                  goto LAB_00eb466d;
                }
                lVar37 = lVar21 + 8;
                uVar26 = *(ulonglong *)((longlong)param_1 + lVar21 + uVar33 + 8) ^
                         *(ulonglong *)(lVar36 + lVar21);
                lVar21 = lVar37;
              } while (uVar26 == 0);
              uVar22 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                }
              }
              uVar26 = (uVar22 >> 3) + lVar37;
            }
            else {
              uVar26 = 0;
              if (uVar22 != 0) {
                for (; (uVar22 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                }
              }
              uVar26 = uVar26 >> 3;
            }
          }
          else {
LAB_00eb466d:
            if ((puVar41 < (ulonglong *)((longlong)puVar27 - 3U)) &&
               ((int)*puVar38 == (int)*puVar41)) {
              puVar41 = (ulonglong *)((longlong)puVar41 + 4);
              puVar38 = (ulonglong *)((longlong)puVar38 + 4);
            }
            if ((puVar41 < (ulonglong *)((longlong)puVar27 - 1U)) &&
               ((short)*puVar38 == (short)*puVar41)) {
              puVar41 = (ulonglong *)((longlong)puVar41 + 2);
              puVar38 = (ulonglong *)((longlong)puVar38 + 2);
            }
            if (puVar41 < puVar27) {
              puVar41 = (ulonglong *)
                        ((longlong)puVar41 + (ulonglong)((byte)*puVar38 == (byte)*puVar41));
            }
            uVar26 = (longlong)puVar41 - (longlong)puVar14;
          }
          if ((byte *)((longlong)puVar40 + uVar26) == pbVar3) {
            puVar14 = (ulonglong *)((longlong)puVar14 + uVar26);
            puVar40 = puVar14;
            puVar27 = puVar17;
            if (puVar14 < puVar1) {
              uVar22 = *puVar14 ^ *puVar17;
              if (uVar22 == 0) {
                lVar21 = uVar33 + uVar26 + 8;
                lVar36 = 0;
                do {
                  puVar40 = (ulonglong *)((longlong)param_1 + lVar36 + lVar21);
                  if (puVar1 <= puVar40) {
                    puVar27 = (ulonglong *)(lVar36 + lVar9);
                    goto LAB_00eb4769;
                  }
                  lVar37 = lVar36 + 8;
                  uVar22 = *(ulonglong *)((longlong)param_1 + lVar36 + lVar21) ^
                           *(ulonglong *)(lVar9 + lVar36);
                  lVar36 = lVar37;
                } while (uVar22 == 0);
                uVar28 = 0;
                if (uVar22 != 0) {
                  for (; (uVar22 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                  }
                }
                uVar28 = (uVar28 >> 3) + lVar37;
              }
              else {
                uVar28 = 0;
                if (uVar22 != 0) {
                  for (; (uVar22 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                  }
                }
                uVar28 = uVar28 >> 3;
              }
            }
            else {
LAB_00eb4769:
              if ((puVar40 < local_f0) && ((int)*puVar27 == (int)*puVar40)) {
                puVar40 = (ulonglong *)((longlong)puVar40 + 4);
                puVar27 = (ulonglong *)((longlong)puVar27 + 4);
              }
              if ((puVar40 < local_e8) && ((short)*puVar27 == (short)*puVar40)) {
                puVar40 = (ulonglong *)((longlong)puVar40 + 2);
                puVar27 = (ulonglong *)((longlong)puVar27 + 2);
              }
              if (puVar40 < param_3) {
                puVar40 = (ulonglong *)
                          ((longlong)puVar40 + (ulonglong)((byte)*puVar27 == (byte)*puVar40));
              }
              uVar28 = (longlong)puVar40 - (longlong)puVar14;
            }
            uVar26 = uVar26 + uVar28;
          }
          uVar26 = uVar26 + uVar33;
          lVar21 = uVar30 + lVar6;
          if (uVar30 + uVar26 < uVar10) {
            lVar21 = local_d8 + uVar30;
          }
        }
        else {
          lVar21 = uVar30 + lVar6;
          puVar40 = (ulonglong *)((longlong)param_1 + uVar33);
          puVar27 = (ulonglong *)(lVar21 + uVar33);
          puVar14 = puVar40;
          if (puVar40 < puVar1) {
            uVar30 = *puVar40 ^ *puVar27;
            if (uVar30 == 0) {
              lVar37 = uVar26 + lVar6 + 8;
              lVar36 = 0;
              do {
                puVar14 = (ulonglong *)((longlong)param_1 + lVar36 + uVar33 + 8);
                if (puVar1 <= puVar14) {
                  puVar27 = (ulonglong *)(lVar37 + lVar36);
                  goto LAB_00eb4556;
                }
                lVar32 = lVar36 + 8;
                uVar26 = *(ulonglong *)((longlong)param_1 + lVar36 + uVar33 + 8) ^
                         *(ulonglong *)(lVar37 + lVar36);
                lVar36 = lVar32;
              } while (uVar26 == 0);
              uVar30 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                }
              }
              uVar26 = (uVar30 >> 3) + lVar32;
            }
            else {
              uVar26 = 0;
              if (uVar30 != 0) {
                for (; (uVar30 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                }
              }
              uVar26 = uVar26 >> 3;
            }
          }
          else {
LAB_00eb4556:
            if ((puVar14 < local_f0) && ((int)*puVar27 == (int)*puVar14)) {
              puVar14 = (ulonglong *)((longlong)puVar14 + 4);
              puVar27 = (ulonglong *)((longlong)puVar27 + 4);
            }
            if ((puVar14 < local_e8) && ((short)*puVar27 == (short)*puVar14)) {
              puVar14 = (ulonglong *)((longlong)puVar14 + 2);
              puVar27 = (ulonglong *)((longlong)puVar27 + 2);
            }
            if (puVar14 < param_3) {
              puVar14 = (ulonglong *)
                        ((longlong)puVar14 + (ulonglong)((byte)*puVar27 == (byte)*puVar14));
            }
            uVar26 = (longlong)puVar14 - (longlong)puVar40;
          }
          uVar26 = uVar26 + uVar33;
        }
        if (uVar20 < uVar26) {
          iVar7 = uVar11 + (int)uVar26;
          if (uVar26 <= iVar25 - uVar11) {
            iVar7 = iVar25;
          }
          iVar25 = iVar7;
          *(uint *)(unaff_RDI + uVar16 * 8) = ((uint)local_c8 + 3) - uVar11;
          *(int *)(unaff_RDI + 4 + uVar16 * 8) = (int)uVar26;
          uVar16 = (ulonglong)((int)uVar16 + 1);
          if ((0x1000 < uVar26) ||
             (uVar20 = uVar26, (ulonglong *)((longlong)param_1 + uVar26) == param_3)) break;
        }
        puVar18 = (uint *)(local_108 + (ulonglong)((uVar11 & uVar31) * 2) * 4);
        if (*(byte *)(lVar21 + uVar26) < *(byte *)((longlong)param_1 + uVar26)) {
          *local_38 = uVar11;
          if (uVar11 <= uVar12) {
            local_38 = &local_120;
            break;
          }
          puVar18 = puVar18 + 1;
          uVar29 = uVar26;
          local_38 = puVar18;
        }
        else {
          *puVar35 = uVar11;
          uVar19 = uVar26;
          puVar35 = puVar18;
          if (uVar11 <= uVar12) {
            puVar35 = &local_120;
            break;
          }
        }
        iVar39 = iVar39 + -1;
        if ((iVar39 == 0) || (uVar11 = *puVar18, uVar11 < uVar34)) break;
      } while( true );
    }
    *puVar35 = 0;
    *local_38 = 0;
    *(int *)(unaff_RSI + 0x2c) = iVar25 + -8;
  }
  return uVar16;
}



// Function: FUN_00eb48f1
// Address: 00eb48f1
// Size: 4533 bytes
// Class: Unknown


ulonglong FUN_00eb48f1(ulonglong *param_1,uint *param_2,ulonglong *param_3,int *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  byte bVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong *puVar32;
  uint uVar33;
  longlong unaff_RSI;
  longlong lVar34;
  uint uVar35;
  int *unaff_RDI;
  ulonglong uVar36;
  ulonglong *puVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  longlong lVar41;
  ulonglong uVar42;
  int iVar43;
  ulonglong *puVar44;
  uint uVar45;
  bool bVar46;
  uint local_res8;
  int local_res10;
  uint local_128;
  uint local_124;
  uint local_120;
  char local_11c;
  uint local_118;
  ulonglong local_e8;
  longlong local_c0;
  int local_b8;
  ulonglong local_90;
  uint *local_78;
  longlong local_50;
  uint *local_48;
  uint *local_38;
  
  lVar7 = *(longlong *)(unaff_RSI + 8);
  uVar30 = (ulonglong)*(uint *)(unaff_RSI + 0x2c);
  if (param_1 < (ulonglong *)(lVar7 + uVar30)) {
    return 0;
  }
  puVar1 = (ulonglong *)((longlong)param_3 - 7);
  puVar2 = (ulonglong *)((longlong)param_3 - 3);
  puVar3 = (ulonglong *)((longlong)param_3 - 1);
  uVar38 = (uint)((longlong)param_1 - lVar7);
  if (*(uint *)(unaff_RSI + 0x2c) < uVar38) {
    local_c0 = *(longlong *)(unaff_RSI + 0x70);
    local_50 = *(longlong *)(unaff_RSI + 0x80);
    do {
      uVar13 = (uint)uVar30;
      uVar25 = (ulonglong)
               ((uint)(*(int *)(lVar7 + uVar30) * -0x61c8864f) >>
               (-*(char *)(unaff_RSI + 0x108) & 0x1fU));
      uVar35 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
      uVar12 = uVar13 - uVar35;
      if (uVar13 < uVar35) {
        uVar12 = 0;
      }
      uVar11 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
      uVar24 = (ulonglong)((uVar13 & uVar35) * 2);
      uVar14 = *(uint *)(unaff_RSI + 0x1c);
      uVar39 = uVar38 - uVar11;
      if (uVar38 - uVar14 <= uVar11) {
        uVar39 = uVar14;
      }
      uVar11 = *(uint *)(local_c0 + uVar25 * 4);
      local_38 = (uint *)(local_50 + uVar24 * 4);
      local_78 = (uint *)(local_50 + 4 + uVar24 * 4);
      if (*(int *)(unaff_RSI + 0x28) != 0) {
        uVar39 = uVar14;
      }
      uVar5 = *(undefined4 *)(unaff_RSI + 0x10c);
      *(uint *)(local_c0 + uVar25 * 4) = uVar13;
      iVar29 = uVar13 + 9;
      uVar25 = 8;
      if (uVar39 <= uVar11) {
        iVar43 = 1 << ((byte)uVar5 & 0x1f);
        uVar25 = 8;
        local_e8 = 0;
        uVar24 = 0;
        do {
          uVar21 = uVar24;
          if (local_e8 < uVar24) {
            uVar21 = local_e8;
          }
          lVar10 = lVar7 + (ulonglong)uVar11;
          puVar16 = (ulonglong *)(lVar7 + uVar30 + uVar21);
          puVar44 = (ulonglong *)(lVar10 + uVar21);
          puVar28 = puVar16;
          if (puVar16 < puVar1) {
            uVar18 = *puVar16 ^ *puVar44;
            if (uVar18 == 0) {
              lVar41 = uVar11 + uVar21 + lVar7 + 8;
              lVar34 = lVar7 + 8 + uVar30 + uVar21;
              lVar17 = 0;
              do {
                puVar28 = (ulonglong *)(lVar34 + lVar17);
                if (puVar1 <= puVar28) {
                  puVar44 = (ulonglong *)(lVar41 + lVar17);
                  goto LAB_00eb4b0a;
                }
                lVar31 = lVar17 + 8;
                uVar18 = *(ulonglong *)(lVar34 + lVar17) ^ *(ulonglong *)(lVar41 + lVar17);
                lVar17 = lVar31;
              } while (uVar18 == 0);
              uVar42 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
                }
              }
              uVar42 = (uVar42 >> 3) + lVar31;
            }
            else {
              uVar42 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
                }
              }
              uVar42 = uVar42 >> 3;
            }
          }
          else {
LAB_00eb4b0a:
            if ((puVar28 < puVar2) && ((uint)*puVar44 == (uint)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              puVar44 = (ulonglong *)((longlong)puVar44 + 4);
            }
            if ((puVar28 < puVar3) && ((short)*puVar44 == (short)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              puVar44 = (ulonglong *)((longlong)puVar44 + 2);
            }
            if (puVar28 < param_3) {
              puVar28 = (ulonglong *)
                        ((longlong)puVar28 + (ulonglong)((byte)*puVar44 == (byte)*puVar28));
            }
            uVar42 = (longlong)puVar28 - (longlong)puVar16;
          }
          uVar42 = uVar42 + uVar21;
          if ((uVar25 < uVar42) && (uVar25 = uVar42, iVar29 - uVar11 < uVar42)) {
            iVar29 = uVar11 + (int)uVar42;
          }
          puVar16 = (ulonglong *)(lVar7 + uVar30 + uVar42);
          if (puVar16 == param_3) break;
          puVar40 = (uint *)(local_50 + (ulonglong)((uVar11 & uVar35) * 2) * 4);
          if (*(byte *)(lVar10 + uVar42) < (byte)*puVar16) {
            *local_38 = uVar11;
            if (uVar11 <= uVar12) {
              local_38 = &local_124;
              break;
            }
            puVar40 = puVar40 + 1;
            local_e8 = uVar42;
            local_38 = puVar40;
          }
          else {
            *local_78 = uVar11;
            local_78 = puVar40;
            uVar24 = uVar42;
            if (uVar11 <= uVar12) {
              local_78 = &local_124;
              break;
            }
          }
          iVar43 = iVar43 + -1;
          if ((iVar43 == 0) || (uVar11 = *puVar40, uVar11 < uVar39)) break;
        } while( true );
      }
      uVar12 = (int)uVar25 - 0x180;
      if (0xbf < uVar12) {
        uVar12 = 0xc0;
      }
      if (uVar25 < 0x181) {
        uVar12 = 0;
      }
      uVar35 = (iVar29 - uVar13) - 8;
      if (uVar35 < uVar12) {
        uVar35 = uVar12;
      }
      *local_78 = 0;
      *local_38 = 0;
      uVar30 = (ulonglong)(uVar35 + uVar13);
    } while (uVar35 + uVar13 < uVar38);
  }
  else {
    local_c0 = *(longlong *)(unaff_RSI + 0x70);
    local_50 = *(longlong *)(unaff_RSI + 0x80);
  }
  *(uint *)(unaff_RSI + 0x2c) = uVar38;
  uVar12 = 0xfff;
  if (*(uint *)(unaff_RSI + 0x114) < 0xfff) {
    uVar12 = *(uint *)(unaff_RSI + 0x114);
  }
  uVar30 = (ulonglong)((uint)*param_1 * -0x61c8864f >> (-*(char *)(unaff_RSI + 0x108) & 0x1fU));
  local_78 = (uint *)0x0;
  uVar13 = ~(-1 << (*(char *)(unaff_RSI + 0x104) - 1U & 0x1f));
  uVar35 = uVar38 - uVar13;
  if (uVar38 < uVar13) {
    uVar35 = 0;
  }
  uVar11 = 1 << (*(byte *)(unaff_RSI + 0x100) & 0x1f);
  uVar14 = *(uint *)(unaff_RSI + 0x1c);
  uVar39 = uVar38 - uVar11;
  if (uVar38 - uVar14 <= uVar11) {
    uVar39 = uVar14;
  }
  if (*(int *)(unaff_RSI + 0x28) != 0) {
    uVar39 = uVar14;
  }
  uVar14 = uVar39;
  if (uVar39 == 0) {
    uVar14 = 1;
  }
  local_b8 = 1 << (*(byte *)(unaff_RSI + 0x10c) & 0x1f);
  puVar8 = *(undefined8 **)(unaff_RSI + 0xf8);
  pbVar9 = (byte *)*puVar8;
  lVar10 = puVar8[1];
  iVar29 = (int)((longlong)pbVar9 - lVar10);
  uVar45 = uVar39 - iVar29;
  uVar25 = (ulonglong)uVar45;
  local_120 = ~(-1 << (*(char *)((longlong)puVar8 + 0x104) - 1U & 0x1f));
  uVar11 = *(uint *)((longlong)puVar8 + 0x1c);
  local_118 = iVar29 - local_120;
  if (iVar29 - uVar11 <= local_120) {
    local_118 = uVar11;
  }
  local_90 = (ulonglong)(local_res10 - 1);
  uVar23 = *(uint *)(local_c0 + uVar30 * 4);
  uVar6 = *(uint *)(unaff_RSI + 0x18);
  uVar24 = (ulonglong)uVar6;
  puVar16 = (ulonglong *)(lVar7 + uVar24);
  local_11c = (char)*(undefined4 *)(puVar8 + 0x21);
  if (local_res8 < 0xfffffffd) {
    puVar44 = (ulonglong *)((longlong)param_1 + 3);
    uVar21 = (ulonglong)local_res8;
    lVar17 = uVar24 + lVar7 + 8;
    local_78 = (uint *)0x0;
    do {
      if (uVar21 == 3) {
        uVar33 = *param_4 - 1;
      }
      else {
        uVar33 = param_4[uVar21];
      }
      uVar22 = uVar38 - uVar33;
      if (uVar33 - 1 < uVar38 - uVar6) {
        uVar18 = 0;
        if ((uVar39 <= uVar22) &&
           (((*(uint *)((longlong)param_1 - (ulonglong)uVar33) ^ (uint)*param_1) & 0xffffff) == 0))
        {
          lVar34 = -(ulonglong)uVar33;
          puVar28 = (ulonglong *)((longlong)puVar44 + lVar34);
          puVar26 = puVar44;
          if (puVar44 < puVar1) {
            uVar18 = *puVar44 ^ *puVar28;
            if (uVar18 == 0) {
              lVar34 = lVar34 + 0xb;
              lVar41 = 0;
              do {
                puVar26 = (ulonglong *)((longlong)param_1 + lVar41 + 0xb);
                if (puVar1 <= puVar26) {
                  puVar28 = (ulonglong *)((longlong)param_1 + lVar41 + lVar34);
                  goto LAB_00eb4fff;
                }
                lVar31 = lVar41 + 8;
                uVar18 = *(ulonglong *)((longlong)param_1 + lVar41 + 0xb) ^
                         *(ulonglong *)((longlong)param_1 + lVar41 + lVar34);
                lVar41 = lVar31;
              } while (uVar18 == 0);
              uVar42 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
                }
              }
              uVar42 = (uVar42 >> 3) + lVar31;
            }
            else {
              uVar42 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
                }
              }
              uVar42 = uVar42 >> 3;
            }
          }
          else {
LAB_00eb4fff:
            if ((puVar26 < puVar2) && ((uint)*puVar28 == (uint)*puVar26)) {
              puVar26 = (ulonglong *)((longlong)puVar26 + 4);
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
            }
            if ((puVar26 < puVar3) && ((short)*puVar28 == (short)*puVar26)) {
              puVar26 = (ulonglong *)((longlong)puVar26 + 2);
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
            }
            if (puVar26 < param_3) {
              puVar26 = (ulonglong *)
                        ((longlong)puVar26 + (ulonglong)((byte)*puVar28 == (byte)*puVar26));
            }
            uVar42 = (longlong)puVar26 - (longlong)puVar44;
          }
LAB_00eb5241:
          uVar18 = (ulonglong)((int)uVar42 + 3);
        }
      }
      else {
        uVar18 = 0;
        if ((uVar33 - 1 < uVar38 - (uVar45 + uVar11)) && (2 < ~uVar22 + uVar6)) {
          puVar40 = (uint *)((uVar22 - uVar25) + lVar10);
          if (((*puVar40 ^ (uint)*param_1) & 0xffffff) == 0) {
            puVar26 = (ulonglong *)((longlong)puVar40 + 3);
            puVar28 = (ulonglong *)(((longlong)pbVar9 - (longlong)puVar26) + (longlong)puVar44);
            if (param_3 <= puVar28) {
              puVar28 = param_3;
            }
            puVar32 = puVar26;
            puVar37 = puVar44;
            if (puVar44 < (ulonglong *)((longlong)puVar28 - 7U)) {
              uVar18 = *puVar44 ^ *puVar26;
              if (uVar18 == 0) {
                lVar41 = (ulonglong)uVar22 + (lVar10 - uVar25) + 0xb;
                lVar34 = 0;
                do {
                  puVar37 = (ulonglong *)((longlong)param_1 + lVar34 + 0xb);
                  if ((ulonglong *)((longlong)puVar28 - 7U) <= puVar37) {
                    puVar32 = (ulonglong *)(lVar41 + lVar34);
                    goto LAB_00eb50e6;
                  }
                  lVar31 = lVar34 + 8;
                  uVar18 = *(ulonglong *)((longlong)param_1 + lVar34 + 0xb) ^
                           *(ulonglong *)(lVar41 + lVar34);
                  lVar34 = lVar31;
                } while (uVar18 == 0);
                uVar42 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
                  }
                }
                uVar42 = (uVar42 >> 3) + lVar31;
              }
              else {
                uVar42 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
                  }
                }
                uVar42 = uVar42 >> 3;
              }
            }
            else {
LAB_00eb50e6:
              if ((puVar37 < (ulonglong *)((longlong)puVar28 - 3U)) &&
                 ((uint)*puVar32 == (uint)*puVar37)) {
                puVar37 = (ulonglong *)((longlong)puVar37 + 4);
                puVar32 = (ulonglong *)((longlong)puVar32 + 4);
              }
              if ((puVar37 < (ulonglong *)((longlong)puVar28 - 1U)) &&
                 ((short)*puVar32 == (short)*puVar37)) {
                puVar37 = (ulonglong *)((longlong)puVar37 + 2);
                puVar32 = (ulonglong *)((longlong)puVar32 + 2);
              }
              if (puVar37 < puVar28) {
                puVar37 = (ulonglong *)
                          ((longlong)puVar37 + (ulonglong)((byte)*puVar32 == (byte)*puVar37));
              }
              uVar42 = (longlong)puVar37 - (longlong)puVar44;
            }
            if ((byte *)((longlong)puVar26 + uVar42) == pbVar9) {
              puVar28 = (ulonglong *)((longlong)puVar44 + uVar42);
              puVar26 = puVar28;
              puVar37 = puVar16;
              if (puVar28 < puVar1) {
                uVar18 = *puVar28 ^ *puVar16;
                if (uVar18 == 0) {
                  lVar34 = 0;
                  do {
                    puVar26 = (ulonglong *)((longlong)param_1 + lVar34 + uVar42 + 0xb);
                    if (puVar1 <= puVar26) {
                      puVar37 = (ulonglong *)(lVar34 + lVar17);
                      goto LAB_00eb51dd;
                    }
                    lVar41 = lVar34 + 8;
                    uVar18 = *(ulonglong *)((longlong)param_1 + lVar34 + uVar42 + 0xb) ^
                             *(ulonglong *)(lVar17 + lVar34);
                    lVar34 = lVar41;
                  } while (uVar18 == 0);
                  uVar36 = 0;
                  if (uVar18 != 0) {
                    for (; (uVar18 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                    }
                  }
                  uVar36 = (uVar36 >> 3) + lVar41;
                }
                else {
                  uVar36 = 0;
                  if (uVar18 != 0) {
                    for (; (uVar18 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                    }
                  }
                  uVar36 = uVar36 >> 3;
                }
              }
              else {
LAB_00eb51dd:
                if ((puVar26 < puVar2) && ((uint)*puVar37 == (uint)*puVar26)) {
                  puVar26 = (ulonglong *)((longlong)puVar26 + 4);
                  puVar37 = (ulonglong *)((longlong)puVar37 + 4);
                }
                if ((puVar26 < puVar3) && ((short)*puVar37 == (short)*puVar26)) {
                  puVar26 = (ulonglong *)((longlong)puVar26 + 2);
                  puVar37 = (ulonglong *)((longlong)puVar37 + 2);
                }
                if (puVar26 < param_3) {
                  puVar26 = (ulonglong *)
                            ((longlong)puVar26 + (ulonglong)((byte)*puVar37 == (byte)*puVar26));
                }
                uVar36 = (longlong)puVar26 - (longlong)puVar28;
              }
              uVar42 = uVar42 + uVar36;
            }
            goto LAB_00eb5241;
          }
        }
      }
      if (local_90 < uVar18) {
        unaff_RDI[(longlong)local_78 * 2] = (1 - local_res8) + (int)uVar21;
        unaff_RDI[(longlong)local_78 * 2 + 1] = (uint)uVar18;
        local_78 = (uint *)(ulonglong)((int)local_78 + 1);
        if (uVar12 < (uint)uVar18) {
          return (ulonglong)local_78;
        }
        local_90 = uVar18;
        if ((ulonglong *)((longlong)param_1 + uVar18) == param_3) {
          return (ulonglong)local_78;
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < local_res8 + 3);
  }
  if (local_90 < 3) {
    lVar17 = *(longlong *)(unaff_RSI + 0x78);
    uVar18 = (ulonglong)*param_2;
    uVar21 = *param_1;
    bVar20 = 0x20 - (char)*(undefined4 *)(unaff_RSI + 0x30);
    if (*param_2 < uVar38) {
      do {
        *(int *)(lVar17 + (ulonglong)
                          ((uint)(*(int *)(lVar7 + uVar18) * 0x35a7bd00) >> (bVar20 & 0x1f)) * 4) =
             (int)uVar18;
        uVar18 = uVar18 + 1;
      } while (((longlong)param_1 - lVar7 & 0xffffffffU) != uVar18);
    }
    *param_2 = uVar38;
    uVar39 = *(uint *)(lVar17 + (ulonglong)((uint)uVar21 * 0x35a7bd00 >> (bVar20 & 0x1f)) * 4);
    uVar21 = (ulonglong)uVar39;
    if ((uVar14 <= uVar39) && (uVar38 - uVar39 < 0x40000)) {
      puVar44 = (ulonglong *)(lVar7 + uVar21);
      puVar28 = param_1;
      if (param_1 < puVar1) {
        uVar18 = *param_1 ^ *puVar44;
        if (uVar18 == 0) {
          lVar17 = 0;
          do {
            if (puVar1 <= (ulonglong *)((longlong)param_1 + lVar17 + 8)) {
              puVar44 = (ulonglong *)(lVar17 + uVar21 + lVar7 + 8);
              puVar28 = (ulonglong *)((longlong)param_1 + lVar17 + 8);
              goto LAB_00eb5375;
            }
            lVar34 = lVar17 + 8;
            uVar18 = *(ulonglong *)((longlong)param_1 + lVar17 + 8) ^
                     *(ulonglong *)(uVar21 + lVar7 + 8 + lVar17);
            lVar17 = lVar34;
          } while (uVar18 == 0);
          uVar21 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
            }
          }
          uVar21 = (uVar21 >> 3) + lVar34;
        }
        else {
          uVar21 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
            }
          }
          uVar21 = uVar21 >> 3;
        }
      }
      else {
LAB_00eb5375:
        if ((puVar28 < puVar2) && ((uint)*puVar44 == (uint)*puVar28)) {
          puVar28 = (ulonglong *)((longlong)puVar28 + 4);
          puVar44 = (ulonglong *)((longlong)puVar44 + 4);
        }
        if ((puVar28 < puVar3) && ((short)*puVar44 == (short)*puVar28)) {
          puVar28 = (ulonglong *)((longlong)puVar28 + 2);
          puVar44 = (ulonglong *)((longlong)puVar44 + 2);
        }
        if (puVar28 < param_3) {
          puVar28 = (ulonglong *)((longlong)puVar28 + (ulonglong)((byte)*puVar44 == (byte)*puVar28))
          ;
        }
        uVar21 = (longlong)puVar28 - (longlong)param_1;
      }
      if (2 < uVar21) {
        *unaff_RDI = (uVar38 - uVar39) + 3;
        unaff_RDI[1] = (int)uVar21;
        if ((uVar12 < uVar21) ||
           (local_78 = (uint *)0x1, local_90 = uVar21,
           (ulonglong *)((longlong)param_1 + uVar21) == param_3)) {
          iVar29 = uVar38 + 1;
          local_78 = (uint *)0x1;
          goto LAB_00eb5a19;
        }
      }
    }
  }
  uVar21 = (ulonglong)((uVar13 & uVar38) * 2);
  local_48 = (uint *)(local_50 + uVar21 * 4);
  iVar29 = uVar38 + 9;
  *(uint *)(local_c0 + uVar30 * 4) = uVar38;
  if (uVar23 < uVar14) {
    local_48[0] = 0;
    local_48[1] = 0;
LAB_00eb56cb:
    uVar12 = *(uint *)(puVar8[0xe] +
                      (ulonglong)((uint)*param_1 * -0x61c8864f >> (-local_11c & 0x1fU)) * 4);
    if (uVar11 < uVar12) {
      lVar17 = puVar8[0x10];
      lVar34 = lVar7 + uVar24 + 8;
      uVar24 = 0;
      uVar30 = 0;
      do {
        uVar21 = uVar30;
        if (uVar24 < uVar30) {
          uVar21 = uVar24;
        }
        uVar18 = (ulonglong)uVar12;
        puVar44 = (ulonglong *)((longlong)param_1 + uVar21);
        puVar28 = (ulonglong *)(lVar10 + uVar18 + uVar21);
        puVar26 = (ulonglong *)(((longlong)pbVar9 - (longlong)puVar28) + (longlong)puVar44);
        if (param_3 <= puVar26) {
          puVar26 = param_3;
        }
        puVar32 = puVar28;
        puVar37 = puVar44;
        if (puVar44 < (ulonglong *)((longlong)puVar26 - 7U)) {
          uVar42 = *puVar44 ^ *puVar28;
          if (uVar42 == 0) {
            lVar31 = uVar21 + uVar18 + lVar10 + 8;
            lVar41 = 0;
            do {
              puVar37 = (ulonglong *)((longlong)param_1 + lVar41 + uVar21 + 8);
              if ((ulonglong *)((longlong)puVar26 - 7U) <= puVar37) {
                puVar32 = (ulonglong *)(lVar31 + lVar41);
                goto LAB_00eb580f;
              }
              lVar4 = lVar41 + 8;
              uVar42 = *(ulonglong *)((longlong)param_1 + lVar41 + uVar21 + 8) ^
                       *(ulonglong *)(lVar31 + lVar41);
              lVar41 = lVar4;
            } while (uVar42 == 0);
            uVar36 = 0;
            if (uVar42 != 0) {
              for (; (uVar42 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
              }
            }
            uVar36 = (uVar36 >> 3) + lVar4;
          }
          else {
            uVar36 = 0;
            if (uVar42 != 0) {
              for (; (uVar42 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
              }
            }
            uVar36 = uVar36 >> 3;
          }
        }
        else {
LAB_00eb580f:
          if ((puVar37 < (ulonglong *)((longlong)puVar26 - 3U)) &&
             ((uint)*puVar32 == (uint)*puVar37)) {
            puVar37 = (ulonglong *)((longlong)puVar37 + 4);
            puVar32 = (ulonglong *)((longlong)puVar32 + 4);
          }
          if ((puVar37 < (ulonglong *)((longlong)puVar26 - 1U)) &&
             ((short)*puVar32 == (short)*puVar37)) {
            puVar37 = (ulonglong *)((longlong)puVar37 + 2);
            puVar32 = (ulonglong *)((longlong)puVar32 + 2);
          }
          if (puVar37 < puVar26) {
            puVar37 = (ulonglong *)
                      ((longlong)puVar37 + (ulonglong)((byte)*puVar32 == (byte)*puVar37));
          }
          uVar36 = (longlong)puVar37 - (longlong)puVar44;
        }
        if ((byte *)((longlong)puVar28 + uVar36) == pbVar9) {
          puVar44 = (ulonglong *)((longlong)puVar44 + uVar36);
          puVar28 = puVar44;
          puVar26 = puVar16;
          if (puVar44 < puVar1) {
            uVar42 = *puVar44 ^ *puVar16;
            if (uVar42 == 0) {
              lVar41 = uVar36 + uVar21 + 8;
              lVar31 = 0;
              do {
                puVar28 = (ulonglong *)((longlong)param_1 + lVar31 + lVar41);
                if (puVar1 <= puVar28) {
                  puVar26 = (ulonglong *)(lVar31 + lVar34);
                  goto LAB_00eb58ef;
                }
                lVar4 = lVar31 + 8;
                uVar42 = *(ulonglong *)((longlong)param_1 + lVar31 + lVar41) ^
                         *(ulonglong *)(lVar34 + lVar31);
                lVar31 = lVar4;
              } while (uVar42 == 0);
              uVar27 = 0;
              if (uVar42 != 0) {
                for (; (uVar42 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                }
              }
              uVar27 = (uVar27 >> 3) + lVar4;
            }
            else {
              uVar27 = 0;
              if (uVar42 != 0) {
                for (; (uVar42 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                }
              }
              uVar27 = uVar27 >> 3;
            }
          }
          else {
LAB_00eb58ef:
            if ((puVar28 < puVar2) && ((uint)*puVar26 == (uint)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              puVar26 = (ulonglong *)((longlong)puVar26 + 4);
            }
            if ((puVar28 < puVar3) && ((short)*puVar26 == (short)*puVar28)) {
              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              puVar26 = (ulonglong *)((longlong)puVar26 + 2);
            }
            if (puVar28 < param_3) {
              puVar28 = (ulonglong *)
                        ((longlong)puVar28 + (ulonglong)((byte)*puVar26 == (byte)*puVar28));
            }
            uVar27 = (longlong)puVar28 - (longlong)puVar44;
          }
          uVar36 = uVar36 + uVar27;
        }
        uVar36 = uVar36 + uVar21;
        lVar41 = uVar25 + uVar18 + lVar7;
        if (uVar36 + uVar18 < ((longlong)pbVar9 - lVar10 & 0xffffffffU)) {
          lVar41 = lVar10 + uVar18;
        }
        if (local_90 < uVar36) {
          iVar15 = uVar45 + uVar12;
          iVar43 = iVar15 + (int)uVar36;
          if (uVar36 <= (uint)(iVar29 - iVar15)) {
            iVar43 = iVar29;
          }
          iVar29 = iVar43;
          unaff_RDI[(longlong)local_78 * 2] = (uVar38 + 3) - iVar15;
          unaff_RDI[(longlong)local_78 * 2 + 1] = (int)uVar36;
          local_78 = (uint *)(ulonglong)((int)local_78 + 1);
          if ((0x1000 < uVar36) ||
             (local_90 = uVar36, (ulonglong *)((longlong)param_1 + uVar36) == param_3)) break;
        }
        if (uVar12 <= local_118) break;
        bVar46 = *(byte *)(lVar41 + uVar36) < *(byte *)((longlong)param_1 + uVar36);
        if (bVar46) {
          uVar24 = uVar36;
          uVar36 = uVar30;
        }
        uVar30 = uVar36;
        local_b8 = local_b8 + -1;
        if ((local_b8 == 0) ||
           (uVar12 = *(uint *)(lVar17 + ((ulonglong)bVar46 | (ulonglong)((uVar12 & local_120) * 2))
                                        * 4), uVar12 <= uVar11)) break;
      } while( true );
    }
  }
  else {
    puVar40 = (uint *)(local_50 + uVar21 * 4 + 4);
    uVar30 = 0;
    uVar21 = 0;
    iVar43 = iVar29;
LAB_00eb5488:
    uVar18 = uVar21;
    if (uVar30 < uVar21) {
      uVar18 = uVar30;
    }
    lVar17 = lVar7 + (ulonglong)uVar23;
    puVar44 = (ulonglong *)((longlong)param_1 + uVar18);
    puVar28 = (ulonglong *)(lVar17 + uVar18);
    puVar26 = puVar44;
    if (puVar44 < puVar1) {
      uVar42 = *puVar44 ^ *puVar28;
      if (uVar42 == 0) {
        lVar41 = uVar23 + uVar18 + lVar7 + 8;
        lVar34 = 0;
        do {
          puVar26 = (ulonglong *)((longlong)param_1 + lVar34 + uVar18 + 8);
          if (puVar1 <= puVar26) {
            puVar28 = (ulonglong *)(lVar41 + lVar34);
            goto LAB_00eb54cd;
          }
          lVar31 = lVar34 + 8;
          uVar42 = *(ulonglong *)((longlong)param_1 + lVar34 + uVar18 + 8) ^
                   *(ulonglong *)(lVar41 + lVar34);
          lVar34 = lVar31;
        } while (uVar42 == 0);
        uVar36 = 0;
        if (uVar42 != 0) {
          for (; (uVar42 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
          }
        }
        uVar36 = (uVar36 >> 3) + lVar31;
      }
      else {
        uVar36 = 0;
        if (uVar42 != 0) {
          for (; (uVar42 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
          }
        }
        uVar36 = uVar36 >> 3;
      }
    }
    else {
LAB_00eb54cd:
      if ((puVar26 < puVar2) && ((uint)*puVar28 == (uint)*puVar26)) {
        puVar26 = (ulonglong *)((longlong)puVar26 + 4);
        puVar28 = (ulonglong *)((longlong)puVar28 + 4);
      }
      if ((puVar26 < puVar3) && ((short)*puVar28 == (short)*puVar26)) {
        puVar26 = (ulonglong *)((longlong)puVar26 + 2);
        puVar28 = (ulonglong *)((longlong)puVar28 + 2);
      }
      if (puVar26 < param_3) {
        puVar26 = (ulonglong *)((longlong)puVar26 + (ulonglong)((byte)*puVar28 == (byte)*puVar26));
      }
      uVar36 = (longlong)puVar26 - (longlong)puVar44;
    }
    uVar36 = uVar36 + uVar18;
    if (local_90 < uVar36) {
      uVar12 = iVar29 - uVar23;
      iVar29 = iVar43;
      if (uVar12 < uVar36) {
        iVar29 = (int)uVar36 + uVar23;
      }
      unaff_RDI[(longlong)local_78 * 2] = (uVar38 + 3) - uVar23;
      unaff_RDI[(longlong)local_78 * 2 + 1] = (int)uVar36;
      local_78 = (uint *)(ulonglong)((int)local_78 + 1);
      if ((0x1000 < uVar36) ||
         (iVar43 = iVar29, local_90 = uVar36, (ulonglong *)((longlong)param_1 + uVar36) == param_3))
      {
        *puVar40 = 0;
        *local_48 = 0;
        goto LAB_00eb5a0e;
      }
    }
    puVar19 = (uint *)(local_50 + (ulonglong)((uVar23 & uVar13) * 2) * 4);
    if (*(byte *)((longlong)param_1 + uVar36) <= *(byte *)(lVar17 + uVar36)) {
      *puVar40 = uVar23;
      puVar40 = puVar19;
      if (uVar23 <= uVar35) {
        puVar40 = &local_128;
        goto LAB_00eb56a9;
      }
LAB_00eb55f3:
      local_b8 = local_b8 + -1;
      if ((local_b8 == 0) || (uVar23 = *puVar19, uVar21 = uVar36, uVar23 < uVar14))
      goto LAB_00eb56a9;
      goto LAB_00eb5488;
    }
    *local_48 = uVar23;
    if (uVar35 < uVar23) {
      puVar19 = puVar19 + 1;
      uVar30 = uVar36;
      uVar36 = uVar21;
      local_48 = puVar19;
      goto LAB_00eb55f3;
    }
    local_48 = &local_128;
LAB_00eb56a9:
    *puVar40 = 0;
    *local_48 = 0;
    if (local_b8 != 0) goto LAB_00eb56cb;
  }
LAB_00eb5a0e:
  iVar29 = iVar29 + -8;
LAB_00eb5a19:
  *(int *)(unaff_RSI + 0x2c) = iVar29;
  return (ulonglong)local_78;
}



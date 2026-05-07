// Function: FUN_00eb5aa6
// Address: 00eb5aa6
// Size: 3860 bytes
// Class: Unknown

uint64_t FUN_00eb5aa6(int *param_1,uint64_t param_2,uint64_t *param_3,int *param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint32_t uVar6;
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  void*puVar10;
  byte *pbVar11;
  int64_t lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint *puVar19;
  uint uVar20;
  uint64_t uVar21;
  uint uVar22;
  uint64_t uVar23;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t *puVar27;
  uint64_t uVar28;
  uint64_t *puVar29;
  int64_t lVar30;
  uint64_t *puVar31;
  uint uVar32;
  int64_t arg1;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  int64_t this_ptr;
  int64_t lVar36;
  uint64_t uVar37;
  uint64_t *puVar38;
  int64_t lVar39;
  uint uVar40;
  uint64_t uVar41;
  int iVar42;
  uint uVar43;
  uint *puVar44;
  int iVar45;
  uint64_t *puVar46;
  bool bVar47;
  uint local_res8;
  int local_res10;
  uint local_108;
  uint local_104 [2];
  uint local_fc;
  uint local_f8;
  char local_f4;
  int *local_f0;
  int local_b0;
  uint64_t local_90;
  int64_t local_88;
  uint *local_78;
  uint *local_40;
  uint64_t uVar24;
  
  lVar9 = *(int64_t *)(arg1 + 8);
  uVar26 = (uint64_t)*(uint *)(arg1 + 0x2c);
  if (param_1 < (int *)(lVar9 + uVar26)) {
    return 0;
  }
  uVar40 = (int)param_1 - (int)lVar9;
  puVar1 = (uint64_t *)((int64_t)param_3 - 7);
  puVar2 = (uint64_t *)((int64_t)param_3 - 3);
  puVar3 = (uint64_t *)((int64_t)param_3 - 1);
  local_f0 = param_4;
  if (*(uint *)(arg1 + 0x2c) < uVar40) {
    lVar39 = *(int64_t *)(arg1 + 0x70);
    local_88 = *(int64_t *)(arg1 + 0x80);
    do {
      uVar20 = (uint)uVar26;
      uVar24 = (uint64_t)
               ((uint)(*(int *)(lVar9 + uVar26) * -0x61c8864f) >>
               (-*(char *)(arg1 + 0x108) & 0x1fU));
      uVar13 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
      uVar14 = uVar20 - uVar13;
      if (uVar20 < uVar13) {
        uVar14 = 0;
      }
      uVar34 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
      uVar23 = (uint64_t)((uVar20 & uVar13) * 2);
      uVar15 = *(uint *)(arg1 + 0x1c);
      uVar43 = uVar40 - uVar34;
      if (uVar40 - uVar15 <= uVar34) {
        uVar43 = uVar15;
      }
      uVar34 = *(uint *)(lVar39 + uVar24 * 4);
      local_40 = (uint *)(local_88 + uVar23 * 4);
      local_78 = (uint *)(local_88 + 4 + uVar23 * 4);
      if (*(int *)(arg1 + 0x28) != 0) {
        uVar43 = uVar15;
      }
      uVar6 = *(void*)(arg1 + 0x10c);
      *(uint *)(lVar39 + uVar24 * 4) = uVar20;
      iVar42 = uVar20 + 9;
      if (uVar43 <= uVar34) {
        iVar45 = 1 << ((byte)uVar6 & 0x1f);
        uVar41 = 8;
        uVar23 = 0;
        uVar24 = 0;
        do {
          uVar21 = uVar24;
          if (uVar23 < uVar24) {
            uVar21 = uVar23;
          }
          lVar12 = lVar9 + (uint64_t)uVar34;
          puVar5 = (uint64_t *)(lVar9 + uVar26 + uVar21);
          puVar29 = (uint64_t *)(lVar12 + uVar21);
          puVar27 = puVar5;
          if (puVar5 < puVar1) {
            uVar18 = *puVar5 ^ *puVar29;
            if (uVar18 == 0) {
              lVar30 = uVar34 + uVar21 + lVar9 + 8;
              lVar17 = lVar9 + 8 + uVar26 + uVar21;
              lVar36 = 0;
              do {
                puVar27 = (uint64_t *)(lVar17 + lVar36);
                if (puVar1 <= puVar27) {
                  puVar29 = (uint64_t *)(lVar30 + lVar36);
                  goto LAB_00eb5c7d;
                }
                lVar4 = lVar36 + 8;
                uVar18 = *(uint64_t *)(lVar17 + lVar36) ^ *(uint64_t *)(lVar30 + lVar36);
                lVar36 = lVar4;
              } while (uVar18 == 0);
              uVar25 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
              uVar25 = (uVar25 >> 3) + lVar4;
            }
            else {
              uVar25 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
              uVar25 = uVar25 >> 3;
            }
          }
          else {
LAB_00eb5c7d:
            if ((puVar27 < puVar2) && ((int)*puVar29 == (int)*puVar27)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            }
            if ((puVar27 < puVar3) && ((short)*puVar29 == (short)*puVar27)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            }
            if (puVar27 < param_3) {
              puVar27 = (uint64_t *)
                        ((int64_t)puVar27 + (uint64_t)((byte)*puVar29 == (byte)*puVar27));
            }
            uVar25 = (int64_t)puVar27 - (int64_t)puVar5;
          }
          uVar25 = uVar25 + uVar21;
          if ((uVar41 < uVar25) && (uVar41 = uVar25, iVar42 - uVar34 < uVar25)) {
            iVar42 = uVar34 + (int)uVar25;
          }
          puVar5 = (uint64_t *)(lVar9 + uVar26 + uVar25);
          if (puVar5 == param_3) goto LAB_00eb5e09;
          puVar44 = (uint *)(local_88 + (uint64_t)((uVar34 & uVar13) * 2) * 4);
          if (*(byte *)(lVar12 + uVar25) < (byte)*puVar5) {
            *local_40 = uVar34;
            if (uVar34 <= uVar14) {
              local_40 = local_104;
              goto LAB_00eb5e09;
            }
            puVar44 = puVar44 + 1;
            uVar23 = uVar25;
            local_40 = puVar44;
          }
          else {
            *local_78 = uVar34;
            local_78 = puVar44;
            uVar24 = uVar25;
            if (uVar34 <= uVar14) {
              local_78 = local_104;
              goto LAB_00eb5e09;
            }
          }
          iVar45 = iVar45 + -1;
          if ((iVar45 == 0) || (uVar34 = *puVar44, uVar34 < uVar43)) goto LAB_00eb5e09;
        } while( true );
      }
      uVar41 = 8;
LAB_00eb5e09:
      uVar14 = (int)uVar41 - 0x180;
      if (0xbf < uVar14) {
        uVar14 = 0xc0;
      }
      if (uVar41 < 0x181) {
        uVar14 = 0;
      }
      uVar13 = (iVar42 - uVar20) - 8;
      if (uVar13 < uVar14) {
        uVar13 = uVar14;
      }
      *local_78 = 0;
      *local_40 = 0;
      uVar26 = (uint64_t)(uVar13 + uVar20);
    } while (uVar13 + uVar20 < uVar40);
  }
  else {
    lVar39 = *(int64_t *)(arg1 + 0x70);
    local_88 = *(int64_t *)(arg1 + 0x80);
  }
  *(uint *)(arg1 + 0x2c) = uVar40;
  uVar14 = 0xfff;
  if (*(uint *)(arg1 + 0x114) < 0xfff) {
    uVar14 = *(uint *)(arg1 + 0x114);
  }
  uVar26 = (uint64_t)((uint)(*param_1 * -0x61c8864f) >> (-*(char *)(arg1 + 0x108) & 0x1fU));
  local_90 = 0;
  uVar13 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
  uVar20 = uVar40 - uVar13;
  if (uVar40 < uVar13) {
    uVar20 = 0;
  }
  uVar34 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
  uVar15 = *(uint *)(arg1 + 0x1c);
  uVar43 = uVar40 - uVar34;
  if (uVar40 - uVar15 <= uVar34) {
    uVar43 = uVar15;
  }
  if (*(int *)(arg1 + 0x28) != 0) {
    uVar43 = uVar15;
  }
  uVar15 = uVar43;
  if (uVar43 == 0) {
    uVar15 = 1;
  }
  local_b0 = 1 << (*(byte *)(arg1 + 0x10c) & 0x1f);
  puVar10 = *(void**)(arg1 + 0xf8);
  pbVar11 = (byte *)*puVar10;
  lVar12 = puVar10[1];
  iVar42 = (int)((int64_t)pbVar11 - lVar12);
  uVar22 = uVar43 - iVar42;
  uVar24 = (uint64_t)uVar22;
  local_f8 = ~(-1 << (*(char *)((int64_t)puVar10 + 0x104) - 1U & 0x1f));
  uVar34 = *(uint *)((int64_t)puVar10 + 0x1c);
  local_fc = iVar42 - local_f8;
  if (iVar42 - uVar34 <= local_f8) {
    local_fc = uVar34;
  }
  uVar23 = (uint64_t)(local_res10 - 1);
  uVar7 = *(uint *)(lVar39 + uVar26 * 4);
  uVar8 = *(uint *)(arg1 + 0x18);
  uVar41 = (uint64_t)uVar8;
  puVar5 = (uint64_t *)(lVar9 + uVar41);
  local_f4 = (char)*(void*)(puVar10 + 0x21);
  if (local_res8 < 0xfffffffd) {
    puVar29 = (uint64_t *)(param_1 + 1);
    uVar21 = (uint64_t)local_res8;
    lVar17 = uVar41 + lVar9 + 8;
    local_90 = 0;
    do {
      if (uVar21 == 3) {
        uVar35 = *local_f0 - 1;
      }
      else {
        uVar35 = local_f0[uVar21];
      }
      uVar32 = uVar40 - uVar35;
      if (uVar35 - 1 < uVar40 - uVar8) {
        uVar18 = 0;
        if ((uVar43 <= uVar32) && (*param_1 == *(int *)((int64_t)param_1 - (uint64_t)uVar35))) {
          lVar36 = -(uint64_t)uVar35;
          puVar27 = (uint64_t *)((int64_t)puVar29 + lVar36);
          puVar46 = puVar29;
          if (puVar29 < puVar1) {
            uVar18 = *puVar29 ^ *puVar27;
            if (uVar18 == 0) {
              lVar36 = lVar36 + 0xc;
              lVar30 = 0;
              do {
                puVar46 = (uint64_t *)((int64_t)param_1 + lVar30 + 0xc);
                if (puVar1 <= puVar46) {
                  puVar27 = (uint64_t *)((int64_t)param_1 + lVar30 + lVar36);
                  goto LAB_00eb6185;
                }
                lVar4 = lVar30 + 8;
                uVar18 = *(uint64_t *)((int64_t)param_1 + lVar30 + 0xc) ^
                         *(uint64_t *)((int64_t)param_1 + lVar30 + lVar36);
                lVar30 = lVar4;
              } while (uVar18 == 0);
              uVar25 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
              uVar25 = (uVar25 >> 3) + lVar4;
            }
            else {
              uVar25 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
              uVar25 = uVar25 >> 3;
            }
          }
          else {
LAB_00eb6185:
            if ((puVar46 < puVar2) && ((int)*puVar27 == (int)*puVar46)) {
              puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
            }
            if ((puVar46 < puVar3) && ((short)*puVar27 == (short)*puVar46)) {
              puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            }
            if (puVar46 < param_3) {
              puVar46 = (uint64_t *)
                        ((int64_t)puVar46 + (uint64_t)((byte)*puVar27 == (byte)*puVar46));
            }
            uVar25 = (int64_t)puVar46 - (int64_t)puVar29;
          }
LAB_00eb631a:
          uVar18 = (uint64_t)((int)uVar25 + 4);
        }
      }
      else {
        uVar18 = 0;
        if ((uVar35 - 1 < uVar40 - (uVar22 + uVar34)) && (2 < ~uVar32 + uVar8)) {
          piVar33 = (int *)((uVar32 - uVar24) + lVar12);
          if (*param_1 == *piVar33) {
            puVar46 = (uint64_t *)(piVar33 + 1);
            puVar27 = (uint64_t *)(((int64_t)pbVar11 - (int64_t)puVar46) + (int64_t)puVar29);
            if (param_3 <= puVar27) {
              puVar27 = param_3;
            }
            puVar38 = puVar29;
            puVar31 = puVar46;
            if (puVar29 < (uint64_t *)((int64_t)puVar27 - 7U)) {
              uVar18 = *puVar29 ^ *puVar46;
              if (uVar18 == 0) {
                lVar30 = (uint64_t)uVar32 + (lVar12 - uVar24) + 0xc;
                lVar36 = 0;
                do {
                  puVar38 = (uint64_t *)((int64_t)param_1 + lVar36 + 0xc);
                  if ((uint64_t *)((int64_t)puVar27 - 7U) <= puVar38) {
                    puVar31 = (uint64_t *)(lVar30 + lVar36);
                    goto LAB_00eb620b;
                  }
                  lVar4 = lVar36 + 8;
                  uVar18 = *(uint64_t *)((int64_t)param_1 + lVar36 + 0xc) ^
                           *(uint64_t *)(lVar30 + lVar36);
                  lVar36 = lVar4;
                } while (uVar18 == 0);
                uVar25 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                  }
                }
                uVar25 = (uVar25 >> 3) + lVar4;
              }
              else {
                uVar25 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                  }
                }
                uVar25 = uVar25 >> 3;
              }
            }
            else {
LAB_00eb620b:
              if ((puVar38 < (uint64_t *)((int64_t)puVar27 - 3U)) &&
                 ((int)*puVar31 == (int)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
              }
              if ((puVar38 < (uint64_t *)((int64_t)puVar27 - 1U)) &&
                 ((short)*puVar31 == (short)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
              }
              if (puVar38 < puVar27) {
                puVar38 = (uint64_t *)
                          ((int64_t)puVar38 + (uint64_t)((byte)*puVar31 == (byte)*puVar38));
              }
              uVar25 = (int64_t)puVar38 - (int64_t)puVar29;
            }
            if ((byte *)((int64_t)puVar46 + uVar25) == pbVar11) {
              puVar27 = (uint64_t *)((int64_t)puVar29 + uVar25);
              puVar38 = puVar5;
              puVar46 = puVar27;
              if (puVar27 < puVar1) {
                uVar18 = *puVar27 ^ *puVar5;
                if (uVar18 == 0) {
                  lVar36 = 0;
                  do {
                    puVar46 = (uint64_t *)((int64_t)param_1 + lVar36 + uVar25 + 0xc);
                    if (puVar1 <= puVar46) {
                      puVar38 = (uint64_t *)(lVar36 + lVar17);
                      goto LAB_00eb62d1;
                    }
                    lVar30 = lVar36 + 8;
                    uVar18 = *(uint64_t *)((int64_t)param_1 + lVar36 + uVar25 + 0xc) ^
                             *(uint64_t *)(lVar17 + lVar36);
                    lVar36 = lVar30;
                  } while (uVar18 == 0);
                  uVar37 = 0;
                  if (uVar18 != 0) {
                    for (; (uVar18 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
                    }
                  }
                  uVar37 = (uVar37 >> 3) + lVar30;
                }
                else {
                  uVar37 = 0;
                  if (uVar18 != 0) {
                    for (; (uVar18 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
                    }
                  }
                  uVar37 = uVar37 >> 3;
                }
              }
              else {
LAB_00eb62d1:
                if ((puVar46 < puVar2) && ((int)*puVar38 == (int)*puVar46)) {
                  puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                }
                if ((puVar46 < puVar3) && ((short)*puVar38 == (short)*puVar46)) {
                  puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                }
                if (puVar46 < param_3) {
                  puVar46 = (uint64_t *)
                            ((int64_t)puVar46 + (uint64_t)((byte)*puVar38 == (byte)*puVar46));
                }
                uVar37 = (int64_t)puVar46 - (int64_t)puVar27;
              }
              uVar25 = uVar25 + uVar37;
            }
            goto LAB_00eb631a;
          }
        }
      }
      if (uVar23 < uVar18) {
        *(uint *)(this_ptr + local_90 * 8) = (1 - local_res8) + (int)uVar21;
        *(uint *)(this_ptr + 4 + local_90 * 8) = (uint)uVar18;
        local_90 = (uint64_t)((int)local_90 + 1);
        if (uVar14 < (uint)uVar18) {
          return local_90;
        }
        uVar23 = uVar18;
        if ((uint64_t *)((int64_t)param_1 + uVar18) == param_3) {
          return local_90;
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < local_res8 + 3);
  }
  uVar21 = (uint64_t)((uVar13 & uVar40) * 2);
  local_40 = (uint *)(local_88 + uVar21 * 4);
  iVar42 = uVar40 + 9;
  *(uint *)(lVar39 + uVar26 * 4) = uVar40;
  if (uVar7 < uVar15) {
    local_40[0] = 0;
    local_40[1] = 0;
  }
  else {
    puVar44 = (uint *)(local_88 + uVar21 * 4 + 4);
    uVar21 = 0;
    uVar26 = 0;
    iVar45 = iVar42;
LAB_00eb640a:
    uVar18 = uVar26;
    if (uVar21 < uVar26) {
      uVar18 = uVar21;
    }
    lVar39 = lVar9 + (uint64_t)uVar7;
    puVar29 = (uint64_t *)((int64_t)param_1 + uVar18);
    puVar27 = (uint64_t *)(lVar39 + uVar18);
    puVar46 = puVar29;
    if (puVar29 < puVar1) {
      uVar25 = *puVar29 ^ *puVar27;
      if (uVar25 == 0) {
        lVar36 = uVar7 + uVar18 + lVar9 + 8;
        lVar17 = 0;
        do {
          puVar46 = (uint64_t *)((int64_t)param_1 + lVar17 + uVar18 + 8);
          if (puVar1 <= puVar46) {
            puVar27 = (uint64_t *)(lVar36 + lVar17);
            goto LAB_00eb644a;
          }
          lVar30 = lVar17 + 8;
          uVar25 = *(uint64_t *)((int64_t)param_1 + lVar17 + uVar18 + 8) ^
                   *(uint64_t *)(lVar36 + lVar17);
          lVar17 = lVar30;
        } while (uVar25 == 0);
        uVar37 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
          }
        }
        uVar37 = (uVar37 >> 3) + lVar30;
      }
      else {
        uVar37 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
          }
        }
        uVar37 = uVar37 >> 3;
      }
    }
    else {
LAB_00eb644a:
      if ((puVar46 < puVar2) && ((int)*puVar27 == (int)*puVar46)) {
        puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
        puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
      }
      if ((puVar46 < puVar3) && ((short)*puVar27 == (short)*puVar46)) {
        puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
        puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
      }
      if (puVar46 < param_3) {
        puVar46 = (uint64_t *)((int64_t)puVar46 + (uint64_t)((byte)*puVar27 == (byte)*puVar46));
      }
      uVar37 = (int64_t)puVar46 - (int64_t)puVar29;
    }
    uVar37 = uVar37 + uVar18;
    if (uVar23 < uVar37) {
      uVar14 = iVar42 - uVar7;
      iVar42 = iVar45;
      if (uVar14 < uVar37) {
        iVar42 = (int)uVar37 + uVar7;
      }
      *(uint *)(this_ptr + local_90 * 8) = (uVar40 + 3) - uVar7;
      *(int *)(this_ptr + 4 + local_90 * 8) = (int)uVar37;
      local_90 = (uint64_t)((int)local_90 + 1);
      if ((0x1000 < uVar37) ||
         (uVar23 = uVar37, iVar45 = iVar42, (uint64_t *)((int64_t)param_1 + uVar37) == param_3)) {
        *puVar44 = 0;
        *local_40 = 0;
        goto LAB_00eb698f;
      }
    }
    puVar19 = (uint *)(local_88 + (uint64_t)((uVar7 & uVar13) * 2) * 4);
    if (*(byte *)((int64_t)param_1 + uVar37) <= *(byte *)(lVar39 + uVar37)) {
      *puVar44 = uVar7;
      puVar44 = puVar19;
      uVar26 = uVar37;
      if (uVar7 <= uVar20) {
        puVar44 = &local_108;
        goto LAB_00eb661c;
      }
LAB_00eb6560:
      local_b0 = local_b0 + -1;
      if ((local_b0 == 0) || (uVar7 = *puVar19, uVar7 < uVar15)) goto LAB_00eb661c;
      goto LAB_00eb640a;
    }
    *local_40 = uVar7;
    if (uVar20 < uVar7) {
      puVar19 = puVar19 + 1;
      uVar21 = uVar37;
      local_40 = puVar19;
      goto LAB_00eb6560;
    }
    local_40 = &local_108;
LAB_00eb661c:
    *puVar44 = 0;
    *local_40 = 0;
    if (local_b0 == 0) goto LAB_00eb698f;
  }
  uVar14 = *(uint *)(puVar10[0xe] +
                    (uint64_t)((uint)(*param_1 * -0x61c8864f) >> (-local_f4 & 0x1fU)) * 4);
  if (uVar34 < uVar14) {
    lVar39 = puVar10[0x10];
    lVar17 = lVar9 + uVar41 + 8;
    uVar41 = 0;
    uVar26 = 0;
    do {
      uVar21 = uVar26;
      if (uVar41 < uVar26) {
        uVar21 = uVar41;
      }
      uVar18 = (uint64_t)uVar14;
      puVar46 = (uint64_t *)((int64_t)param_1 + uVar21);
      puVar29 = (uint64_t *)(lVar12 + uVar18 + uVar21);
      puVar27 = (uint64_t *)(((int64_t)pbVar11 - (int64_t)puVar29) + (int64_t)puVar46);
      if (param_3 <= puVar27) {
        puVar27 = param_3;
      }
      puVar31 = puVar29;
      puVar38 = puVar46;
      if (puVar46 < (uint64_t *)((int64_t)puVar27 - 7U)) {
        uVar25 = *puVar46 ^ *puVar29;
        if (uVar25 == 0) {
          lVar30 = uVar21 + uVar18 + lVar12 + 8;
          lVar36 = 0;
          do {
            puVar38 = (uint64_t *)((int64_t)param_1 + lVar36 + uVar21 + 8);
            if ((uint64_t *)((int64_t)puVar27 - 7U) <= puVar38) {
              puVar31 = (uint64_t *)(lVar30 + lVar36);
              goto LAB_00eb6773;
            }
            lVar4 = lVar36 + 8;
            uVar25 = *(uint64_t *)((int64_t)param_1 + lVar36 + uVar21 + 8) ^
                     *(uint64_t *)(lVar30 + lVar36);
            lVar36 = lVar4;
          } while (uVar25 == 0);
          uVar37 = 0;
          if (uVar25 != 0) {
            for (; (uVar25 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
            }
          }
          uVar37 = (uVar37 >> 3) + lVar4;
        }
        else {
          uVar37 = 0;
          if (uVar25 != 0) {
            for (; (uVar25 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
            }
          }
          uVar37 = uVar37 >> 3;
        }
      }
      else {
LAB_00eb6773:
        if ((puVar38 < (uint64_t *)((int64_t)puVar27 - 3U)) && ((int)*puVar31 == (int)*puVar38)) {
          puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
          puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
        }
        if ((puVar38 < (uint64_t *)((int64_t)puVar27 - 1U)) &&
           ((short)*puVar31 == (short)*puVar38)) {
          puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
          puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
        }
        if (puVar38 < puVar27) {
          puVar38 = (uint64_t *)((int64_t)puVar38 + (uint64_t)((byte)*puVar31 == (byte)*puVar38))
          ;
        }
        uVar37 = (int64_t)puVar38 - (int64_t)puVar46;
      }
      if ((byte *)((int64_t)puVar29 + uVar37) == pbVar11) {
        puVar46 = (uint64_t *)((int64_t)puVar46 + uVar37);
        puVar29 = puVar46;
        puVar27 = puVar5;
        if (puVar46 < puVar1) {
          uVar25 = *puVar46 ^ *puVar5;
          if (uVar25 == 0) {
            lVar36 = uVar37 + uVar21 + 8;
            lVar30 = 0;
            do {
              puVar29 = (uint64_t *)((int64_t)param_1 + lVar30 + lVar36);
              if (puVar1 <= puVar29) {
                puVar27 = (uint64_t *)(lVar30 + lVar17);
                goto LAB_00eb685d;
              }
              lVar4 = lVar30 + 8;
              uVar25 = *(uint64_t *)((int64_t)param_1 + lVar30 + lVar36) ^
                       *(uint64_t *)(lVar17 + lVar30);
              lVar30 = lVar4;
            } while (uVar25 == 0);
            uVar28 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
              }
            }
            uVar28 = (uVar28 >> 3) + lVar4;
          }
          else {
            uVar28 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
              }
            }
            uVar28 = uVar28 >> 3;
          }
        }
        else {
LAB_00eb685d:
          if ((puVar29 < puVar2) && ((int)*puVar27 == (int)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
          }
          if ((puVar29 < puVar3) && ((short)*puVar27 == (short)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
          }
          if (puVar29 < param_3) {
            puVar29 = (uint64_t *)
                      ((int64_t)puVar29 + (uint64_t)((byte)*puVar27 == (byte)*puVar29));
          }
          uVar28 = (int64_t)puVar29 - (int64_t)puVar46;
        }
        uVar37 = uVar37 + uVar28;
      }
      uVar37 = uVar37 + uVar21;
      lVar36 = uVar18 + uVar24 + lVar9;
      if (uVar37 + uVar18 < ((int64_t)pbVar11 - lVar12 & 0xffffffffU)) {
        lVar36 = lVar12 + uVar18;
      }
      if (uVar23 < uVar37) {
        iVar16 = uVar22 + uVar14;
        iVar45 = iVar16 + (int)uVar37;
        if (uVar37 <= (uint)(iVar42 - iVar16)) {
          iVar45 = iVar42;
        }
        iVar42 = iVar45;
        *(uint *)(this_ptr + local_90 * 8) = (uVar40 + 3) - iVar16;
        *(int *)(this_ptr + 4 + local_90 * 8) = (int)uVar37;
        local_90 = (uint64_t)((int)local_90 + 1);
        if ((0x1000 < uVar37) ||
           (uVar23 = uVar37, (uint64_t *)((int64_t)param_1 + uVar37) == param_3)) break;
      }
      if (uVar14 <= local_fc) break;
      bVar47 = *(byte *)(lVar36 + uVar37) < *(byte *)((int64_t)param_1 + uVar37);
      if (bVar47) {
        uVar41 = uVar37;
        uVar37 = uVar26;
      }
      uVar26 = uVar37;
      local_b0 = local_b0 + -1;
      if ((local_b0 == 0) ||
         (uVar14 = *(uint *)(lVar39 + ((uint64_t)bVar47 | (uint64_t)((uVar14 & local_f8) * 2)) * 4
                            ), uVar14 <= uVar34)) break;
    } while( true );
  }
LAB_00eb698f:
  *(int *)(arg1 + 0x2c) = iVar42 + -8;
  return local_90;
}


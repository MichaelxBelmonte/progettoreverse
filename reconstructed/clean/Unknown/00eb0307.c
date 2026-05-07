// Function: FUN_00eb0307
// Address: 00eb0307
// Size: 5236 bytes
// Class: Unknown

uint64_t FUN_00eb0307(uint64_t *param_1,uint *param_2,uint64_t *param_3,int *param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint32_t uVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  uint uVar21;
  uint uVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint64_t uVar25;
  int iVar26;
  int64_t arg1;
  uint64_t uVar27;
  int64_t lVar28;
  int64_t lVar29;
  uint64_t *puVar30;
  uint *puVar31;
  uint uVar32;
  int *this_ptr;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint64_t *puVar36;
  uint64_t uVar37;
  uint64_t *puVar38;
  uint *puVar39;
  uint uVar40;
  uint64_t *puVar41;
  uint64_t uVar42;
  uint64_t *puVar43;
  int64_t lVar44;
  uint local_res8;
  int local_res10;
  uint local_128;
  uint local_124 [5];
  int64_t local_110;
  int64_t local_e0;
  int64_t local_d8;
  uint64_t *local_c0;
  uint64_t *local_b8;
  uint *local_a8;
  uint *local_a0;
  uint *local_60;
  uint64_t local_50;
  
  lVar8 = *(int64_t *)(arg1 + 8);
  uVar20 = (uint64_t)*(uint *)(arg1 + 0x2c);
  if (param_1 < (uint64_t *)(lVar8 + uVar20)) {
    return 0;
  }
  uVar16 = (int64_t)param_1 - lVar8;
  puVar1 = (uint64_t *)((int64_t)param_3 - 7);
  local_c0 = (uint64_t *)((int64_t)param_3 + -3);
  local_b8 = (uint64_t *)((int64_t)param_3 + -1);
  uVar12 = (uint)uVar16;
  local_e0 = lVar8;
  if (*(uint *)(arg1 + 0x2c) < uVar12) {
    lVar44 = *(int64_t *)(arg1 + 0x10);
    local_d8 = *(int64_t *)(arg1 + 0x70);
    local_110 = *(int64_t *)(arg1 + 0x80);
    lVar17 = lVar8 + 8;
    do {
      uVar33 = (uint)uVar20;
      uVar37 = (uint64_t)
               ((uint)(*(int *)(lVar8 + uVar20) * -0x61c8864f) >>
               (-*(char *)(arg1 + 0x108) & 0x1fU));
      uVar40 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
      uVar13 = *(uint *)(local_d8 + uVar37 * 4);
      uVar35 = uVar33 - uVar40;
      if (uVar33 < uVar40) {
        uVar35 = 0;
      }
      uVar21 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
      uVar42 = (uint64_t)((uVar33 & uVar40) * 2);
      uVar14 = *(uint *)(arg1 + 0x1c);
      uVar32 = uVar12 - uVar21;
      if (uVar12 - uVar14 <= uVar21) {
        uVar32 = uVar14;
      }
      uVar27 = (uint64_t)*(uint *)(arg1 + 0x18);
      local_a8 = (uint *)(local_110 + uVar42 * 4);
      local_60 = (uint *)(local_110 + 4 + uVar42 * 4);
      if (*(int *)(arg1 + 0x28) != 0) {
        uVar32 = uVar14;
      }
      uVar4 = *(void*)(arg1 + 0x10c);
      *(uint *)(local_d8 + uVar37 * 4) = uVar33;
      iVar34 = uVar33 + 9;
      if (uVar32 <= uVar13) {
        lVar28 = local_e0 + uVar20;
        iVar26 = 1 << ((byte)uVar4 & 0x1f);
        lVar29 = lVar17 + uVar20;
        uVar42 = 8;
        uVar20 = 0;
        uVar37 = 0;
        do {
          uVar25 = (uint64_t)uVar13;
          uVar9 = uVar37;
          if (uVar20 < uVar37) {
            uVar9 = uVar20;
          }
          uVar10 = uVar9 + uVar25;
          if (uVar10 < uVar27) {
            puVar41 = (uint64_t *)(lVar28 + uVar9);
            puVar19 = (uint64_t *)(lVar44 + uVar25 + uVar9);
            puVar38 = (uint64_t *)
                      (((int64_t)(lVar44 + uVar27) - (int64_t)puVar19) + (int64_t)puVar41);
            if (param_3 <= puVar38) {
              puVar38 = param_3;
            }
            puVar43 = puVar19;
            puVar36 = puVar41;
            if (puVar41 < (uint64_t *)((int64_t)puVar38 - 7U)) {
              uVar18 = *puVar41 ^ *puVar19;
              if (uVar18 == 0) {
                lVar24 = uVar10 + lVar44 + 8;
                lVar8 = 0;
                do {
                  puVar36 = (uint64_t *)(lVar29 + uVar9 + lVar8);
                  if ((uint64_t *)((int64_t)puVar38 - 7U) <= puVar36) {
                    puVar43 = (uint64_t *)(lVar24 + lVar8);
                    goto LAB_00eb06fa;
                  }
                  lVar23 = lVar8 + 8;
                  uVar10 = *(uint64_t *)(lVar29 + uVar9 + lVar8) ^ *(uint64_t *)(lVar24 + lVar8);
                  lVar8 = lVar23;
                } while (uVar10 == 0);
                uVar18 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                  }
                }
                uVar10 = (uVar18 >> 3) + lVar23;
              }
              else {
                uVar10 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                  }
                }
                uVar10 = uVar10 >> 3;
              }
            }
            else {
LAB_00eb06fa:
              if ((puVar36 < (uint64_t *)((int64_t)puVar38 - 3U)) &&
                 ((uint)*puVar43 == (uint)*puVar36)) {
                puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
                puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
              }
              if ((puVar36 < (uint64_t *)((int64_t)puVar38 - 1U)) &&
                 ((short)*puVar43 == (short)*puVar36)) {
                puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
                puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
              }
              if (puVar36 < puVar38) {
                puVar36 = (uint64_t *)
                          ((int64_t)puVar36 + (uint64_t)((byte)*puVar43 == (byte)*puVar36));
              }
              uVar10 = (int64_t)puVar36 - (int64_t)puVar41;
            }
            if ((byte *)((int64_t)puVar19 + uVar10) == (byte *)(lVar44 + uVar27)) {
              puVar41 = (uint64_t *)((int64_t)puVar41 + uVar10);
              puVar19 = puVar41;
              puVar38 = (uint64_t *)(local_e0 + uVar27);
              if (puVar41 < puVar1) {
                uVar18 = *puVar41 ^ *(uint64_t *)(local_e0 + uVar27);
                if (uVar18 == 0) {
                  lVar24 = uVar10 + uVar9 + lVar29;
                  lVar8 = 0;
                  do {
                    puVar19 = (uint64_t *)(lVar24 + lVar8);
                    if (puVar1 <= puVar19) {
                      puVar38 = (uint64_t *)(lVar8 + lVar17 + uVar27);
                      goto LAB_00eb080f;
                    }
                    lVar23 = lVar8 + 8;
                    uVar18 = *(uint64_t *)(lVar24 + lVar8) ^
                             *(uint64_t *)(lVar17 + uVar27 + lVar8);
                    lVar8 = lVar23;
                  } while (uVar18 == 0);
                  uVar7 = 0;
                  if (uVar18 != 0) {
                    for (; (uVar18 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                    }
                  }
                  uVar7 = (uVar7 >> 3) + lVar23;
                }
                else {
                  uVar7 = 0;
                  if (uVar18 != 0) {
                    for (; (uVar18 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                    }
                  }
                  uVar7 = uVar7 >> 3;
                }
              }
              else {
LAB_00eb080f:
                if ((puVar19 < local_c0) && ((uint)*puVar38 == (uint)*puVar19)) {
                  puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                }
                if ((puVar19 < local_b8) && ((short)*puVar38 == (short)*puVar19)) {
                  puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                }
                if (puVar19 < param_3) {
                  puVar19 = (uint64_t *)
                            ((int64_t)puVar19 + (uint64_t)((byte)*puVar38 == (byte)*puVar19));
                }
                uVar7 = (int64_t)puVar19 - (int64_t)puVar41;
              }
              uVar10 = uVar10 + uVar7;
            }
            uVar10 = uVar10 + uVar9;
            lVar8 = local_e0;
            lVar24 = uVar25 + local_e0;
            if (uVar10 + uVar25 < uVar27) {
              lVar24 = lVar44 + uVar25;
            }
          }
          else {
            lVar24 = uVar25 + lVar8;
            puVar41 = (uint64_t *)(lVar28 + uVar9);
            puVar19 = (uint64_t *)(lVar24 + uVar9);
            puVar38 = puVar41;
            if (puVar41 < puVar1) {
              uVar25 = *puVar41 ^ *puVar19;
              if (uVar25 == 0) {
                lVar23 = 0;
                do {
                  puVar38 = (uint64_t *)(lVar29 + uVar9 + lVar23);
                  if (puVar1 <= puVar38) {
                    puVar19 = (uint64_t *)(uVar10 + lVar17 + lVar23);
                    goto LAB_00eb05e7;
                  }
                  lVar2 = lVar23 + 8;
                  uVar25 = *(uint64_t *)(lVar29 + uVar9 + lVar23) ^
                           *(uint64_t *)(uVar10 + lVar17 + lVar23);
                  lVar23 = lVar2;
                } while (uVar25 == 0);
                uVar10 = 0;
                if (uVar25 != 0) {
                  for (; (uVar25 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                  }
                }
                uVar10 = (uVar10 >> 3) + lVar2;
              }
              else {
                uVar10 = 0;
                if (uVar25 != 0) {
                  for (; (uVar25 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                  }
                }
                uVar10 = uVar10 >> 3;
              }
            }
            else {
LAB_00eb05e7:
              if ((puVar38 < local_c0) && ((uint)*puVar19 == (uint)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
              }
              if ((puVar38 < local_b8) && ((short)*puVar19 == (short)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
              }
              if (puVar38 < param_3) {
                puVar38 = (uint64_t *)
                          ((int64_t)puVar38 + (uint64_t)((byte)*puVar19 == (byte)*puVar38));
              }
              uVar10 = (int64_t)puVar38 - (int64_t)puVar41;
            }
            uVar10 = uVar10 + uVar9;
          }
          if ((uVar42 < uVar10) && (uVar42 = uVar10, iVar34 - uVar13 < uVar10)) {
            iVar34 = uVar13 + (int)uVar10;
          }
          if ((uint64_t *)(lVar28 + uVar10) == param_3) goto LAB_00eb0973;
          puVar39 = (uint *)(local_110 + (uint64_t)((uVar13 & uVar40) * 2) * 4);
          if (*(byte *)(lVar24 + uVar10) < (byte)*(uint64_t *)(lVar28 + uVar10)) {
            *local_a8 = uVar13;
            if (uVar13 <= uVar35) {
              local_a8 = local_124;
              goto LAB_00eb0973;
            }
            puVar39 = puVar39 + 1;
            uVar20 = uVar10;
            uVar10 = uVar37;
            local_a8 = puVar39;
          }
          else {
            *local_60 = uVar13;
            local_60 = puVar39;
            if (uVar13 <= uVar35) {
              local_60 = local_124;
              goto LAB_00eb0973;
            }
          }
          iVar26 = iVar26 + -1;
          if ((iVar26 == 0) || (uVar13 = *puVar39, uVar37 = uVar10, uVar13 < uVar32))
          goto LAB_00eb0973;
        } while( true );
      }
      uVar42 = 8;
LAB_00eb0973:
      uVar13 = (int)uVar42 - 0x180;
      if (0xbf < uVar13) {
        uVar13 = 0xc0;
      }
      if (uVar42 < 0x181) {
        uVar13 = 0;
      }
      uVar35 = (iVar34 - uVar33) - 8;
      if (uVar35 < uVar13) {
        uVar35 = uVar13;
      }
      *local_60 = 0;
      *local_a8 = 0;
      uVar20 = (uint64_t)(uVar35 + uVar33);
    } while (uVar35 + uVar33 < uVar12);
  }
  else {
    lVar44 = *(int64_t *)(arg1 + 0x10);
    local_d8 = *(int64_t *)(arg1 + 0x70);
    local_110 = *(int64_t *)(arg1 + 0x80);
  }
  *(uint *)(arg1 + 0x2c) = uVar12;
  uVar13 = 0xfff;
  if (*(uint *)(arg1 + 0x114) < 0xfff) {
    uVar13 = *(uint *)(arg1 + 0x114);
  }
  uVar20 = (uint64_t)((uint)*param_1 * -0x61c8864f >> (-*(char *)(arg1 + 0x108) & 0x1fU));
  local_50 = 0;
  uVar35 = *(uint *)(local_d8 + uVar20 * 4);
  uVar40 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
  uVar33 = *(uint *)(arg1 + 0x18);
  uVar37 = (uint64_t)uVar33;
  uVar14 = uVar12 - uVar40;
  if (uVar12 < uVar40) {
    uVar14 = 0;
  }
  uVar6 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
  uVar32 = *(uint *)(arg1 + 0x1c);
  uVar21 = uVar12 - uVar6;
  if (uVar12 - uVar32 <= uVar6) {
    uVar21 = uVar32;
  }
  if (*(int *)(arg1 + 0x28) != 0) {
    uVar21 = uVar32;
  }
  uVar32 = uVar21;
  if (uVar21 == 0) {
    uVar32 = 1;
  }
  iVar34 = 1 << (*(byte *)(arg1 + 0x10c) & 0x1f);
  pbVar3 = (byte *)(lVar44 + uVar37);
  puVar41 = (uint64_t *)(lVar8 + uVar37);
  uVar42 = (uint64_t)(local_res10 - 1);
  if (local_res8 < 0xfffffffd) {
    puVar19 = (uint64_t *)((int64_t)param_1 + 3);
    uVar27 = (uint64_t)local_res8;
    lVar8 = lVar8 + uVar37 + 8;
    local_50 = 0;
    do {
      if (uVar27 == 3) {
        uVar6 = *param_4 - 1;
      }
      else {
        uVar6 = param_4[uVar27];
      }
      uVar15 = uVar12 - uVar6;
      if (uVar6 - 1 < uVar12 - uVar33) {
        uVar22 = 0;
        if ((uVar21 <= uVar15) &&
           (uVar22 = 0,
           ((*(uint *)((int64_t)param_1 - (uint64_t)uVar6) ^ (uint)*param_1) & 0xffffff) == 0)) {
          lVar17 = -(uint64_t)uVar6;
          puVar38 = (uint64_t *)((int64_t)puVar19 + lVar17);
          puVar36 = puVar19;
          if (puVar19 < puVar1) {
            uVar9 = *puVar19 ^ *puVar38;
            if (uVar9 == 0) {
              lVar17 = lVar17 + 0xb;
              uVar9 = 0;
              do {
                puVar36 = (uint64_t *)((int64_t)param_1 + uVar9 + 0xb);
                if (puVar1 <= puVar36) {
                  puVar38 = (uint64_t *)((int64_t)param_1 + uVar9 + lVar17);
                  goto LAB_00eb0c49;
                }
                uVar10 = uVar9 + 8;
                uVar18 = *(uint64_t *)((int64_t)param_1 + uVar9 + 0xb) ^
                         *(uint64_t *)((int64_t)param_1 + uVar9 + lVar17);
                uVar9 = uVar10;
              } while (uVar18 == 0);
              uVar25 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
              uVar25 = uVar25 >> 3;
LAB_00eb0e27:
              uVar25 = uVar25 + uVar10;
            }
            else {
              uVar25 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
              uVar25 = uVar25 >> 3;
            }
          }
          else {
LAB_00eb0c49:
            if ((puVar36 < local_c0) && ((uint)*puVar38 == (uint)*puVar36)) {
              puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            }
            if ((puVar36 < local_b8) && ((short)*puVar38 == (short)*puVar36)) {
              puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            }
            if (puVar36 < param_3) {
              puVar36 = (uint64_t *)
                        ((int64_t)puVar36 + (uint64_t)((byte)*puVar38 == (byte)*puVar36));
            }
            uVar25 = (int64_t)puVar36 - (int64_t)puVar19;
          }
LAB_00eb0e2e:
          uVar22 = (int)uVar25 + 3;
        }
      }
      else {
        uVar22 = 0;
        if ((uVar6 - 1 < uVar12 - uVar21) && (2 < ~uVar15 + uVar33)) {
          puVar39 = (uint *)(lVar44 + (uint64_t)uVar15);
          if (((*puVar39 ^ (uint)*param_1) & 0xffffff) == 0) {
            puVar36 = (uint64_t *)((int64_t)puVar39 + 3);
            puVar38 = (uint64_t *)(((int64_t)pbVar3 - (int64_t)puVar36) + (int64_t)puVar19);
            if (param_3 <= puVar38) {
              puVar38 = param_3;
            }
            puVar43 = puVar19;
            puVar30 = puVar36;
            if (puVar19 < (uint64_t *)((int64_t)puVar38 - 7U)) {
              uVar9 = *puVar19 ^ *puVar36;
              if (uVar9 == 0) {
                lVar28 = (uint64_t)uVar15 + lVar44 + 0xb;
                lVar17 = 0;
                do {
                  puVar43 = (uint64_t *)((int64_t)param_1 + lVar17 + 0xb);
                  if ((uint64_t *)((int64_t)puVar38 - 7U) <= puVar43) {
                    puVar30 = (uint64_t *)(lVar28 + lVar17);
                    goto LAB_00eb0d15;
                  }
                  lVar29 = lVar17 + 8;
                  uVar9 = *(uint64_t *)((int64_t)param_1 + lVar17 + 0xb) ^
                          *(uint64_t *)(lVar28 + lVar17);
                  lVar17 = lVar29;
                } while (uVar9 == 0);
                uVar25 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                  }
                }
                uVar25 = (uVar25 >> 3) + lVar29;
              }
              else {
                uVar25 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                  }
                }
                uVar25 = uVar25 >> 3;
              }
            }
            else {
LAB_00eb0d15:
              if ((puVar43 < (uint64_t *)((int64_t)puVar38 - 3U)) &&
                 ((uint)*puVar30 == (uint)*puVar43)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
                puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
              }
              if ((puVar43 < (uint64_t *)((int64_t)puVar38 - 1U)) &&
                 ((short)*puVar30 == (short)*puVar43)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
              }
              if (puVar43 < puVar38) {
                puVar43 = (uint64_t *)
                          ((int64_t)puVar43 + (uint64_t)((byte)*puVar30 == (byte)*puVar43));
              }
              uVar25 = (int64_t)puVar43 - (int64_t)puVar19;
            }
            if ((byte *)((int64_t)puVar36 + uVar25) == pbVar3) {
              puVar38 = (uint64_t *)((int64_t)puVar19 + uVar25);
              puVar43 = puVar41;
              puVar36 = puVar38;
              if (puVar38 < puVar1) {
                uVar9 = *puVar38 ^ *puVar41;
                if (uVar9 == 0) {
                  lVar17 = 0;
                  do {
                    puVar36 = (uint64_t *)((int64_t)param_1 + lVar17 + uVar25 + 0xb);
                    if (puVar1 <= puVar36) {
                      puVar43 = (uint64_t *)(lVar17 + lVar8);
                      goto LAB_00eb0dde;
                    }
                    lVar28 = lVar17 + 8;
                    uVar9 = *(uint64_t *)((int64_t)param_1 + lVar17 + uVar25 + 0xb) ^
                            *(uint64_t *)(lVar8 + lVar17);
                    lVar17 = lVar28;
                  } while (uVar9 == 0);
                  uVar10 = 0;
                  if (uVar9 != 0) {
                    for (; (uVar9 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                    }
                  }
                  uVar10 = (uVar10 >> 3) + lVar28;
                }
                else {
                  uVar10 = 0;
                  if (uVar9 != 0) {
                    for (; (uVar9 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                    }
                  }
                  uVar10 = uVar10 >> 3;
                }
              }
              else {
LAB_00eb0dde:
                if ((puVar36 < local_c0) && ((uint)*puVar43 == (uint)*puVar36)) {
                  puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
                  puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
                }
                if ((puVar36 < local_b8) && ((short)*puVar43 == (short)*puVar36)) {
                  puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
                  puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                }
                if (puVar36 < param_3) {
                  puVar36 = (uint64_t *)
                            ((int64_t)puVar36 + (uint64_t)((byte)*puVar43 == (byte)*puVar36));
                }
                uVar10 = (int64_t)puVar36 - (int64_t)puVar38;
              }
              goto LAB_00eb0e27;
            }
            goto LAB_00eb0e2e;
          }
        }
      }
      uVar9 = (uint64_t)uVar22;
      if (uVar42 < uVar9) {
        this_ptr[local_50 * 2] = (1 - local_res8) + (int)uVar27;
        this_ptr[local_50 * 2 + 1] = uVar22;
        local_50 = (uint64_t)((int)local_50 + 1);
        if (uVar13 < uVar22) {
          return local_50;
        }
        uVar42 = uVar9;
        if ((uint64_t *)((int64_t)param_1 + uVar9) == param_3) {
          return local_50;
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 < local_res8 + 3);
  }
  if (uVar42 < 3) {
    lVar8 = *(int64_t *)(arg1 + 0x78);
    uVar9 = (uint64_t)*param_2;
    uVar27 = *param_1;
    bVar11 = 0x20 - (char)*(void*)(arg1 + 0x30);
    if (*param_2 < uVar12) {
      do {
        *(int *)(lVar8 + (uint64_t)
                         ((uint)(*(int *)(local_e0 + uVar9) * 0x35a7bd00) >> (bVar11 & 0x1f)) * 4) =
             (int)uVar9;
        uVar9 = uVar9 + 1;
      } while ((uVar16 & 0xffffffff) != uVar9);
    }
    *param_2 = uVar12;
    uVar21 = *(uint *)(lVar8 + (uint64_t)((uint)uVar27 * 0x35a7bd00 >> (bVar11 & 0x1f)) * 4);
    uVar16 = (uint64_t)uVar21;
    if ((uVar32 <= uVar21) && (uVar12 - uVar21 < 0x40000)) {
      if (uVar21 < uVar33) {
        puVar19 = (uint64_t *)(lVar44 + uVar16);
        puVar38 = (uint64_t *)(((int64_t)pbVar3 - (int64_t)puVar19) + (int64_t)param_1);
        if (param_3 <= puVar38) {
          puVar38 = param_3;
        }
        puVar36 = param_1;
        puVar43 = puVar19;
        if (param_1 < (uint64_t *)((int64_t)puVar38 - 7U)) {
          uVar27 = *param_1 ^ *puVar19;
          if (uVar27 == 0) {
            lVar8 = 0;
            do {
              if ((uint64_t *)((int64_t)puVar38 - 7U) <=
                  (uint64_t *)((int64_t)param_1 + lVar8 + 8)) {
                puVar43 = (uint64_t *)(lVar8 + uVar16 + lVar44 + 8);
                puVar36 = (uint64_t *)((int64_t)param_1 + lVar8 + 8);
                goto LAB_00eb10b4;
              }
              lVar17 = lVar8 + 8;
              uVar27 = *(uint64_t *)((int64_t)param_1 + lVar8 + 8) ^
                       *(uint64_t *)(uVar16 + lVar44 + 8 + lVar8);
              lVar8 = lVar17;
            } while (uVar27 == 0);
            uVar16 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            uVar16 = (uVar16 >> 3) + lVar17;
          }
          else {
            uVar16 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            uVar16 = uVar16 >> 3;
          }
        }
        else {
LAB_00eb10b4:
          if ((puVar36 < (uint64_t *)((int64_t)puVar38 - 3U)) &&
             ((uint)*puVar43 == (uint)*puVar36)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
            puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
          }
          if ((puVar36 < (uint64_t *)((int64_t)puVar38 - 1U)) &&
             ((short)*puVar43 == (short)*puVar36)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
            puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
          }
          if (puVar36 < puVar38) {
            puVar36 = (uint64_t *)
                      ((int64_t)puVar36 + (uint64_t)((byte)*puVar43 == (byte)*puVar36));
          }
          uVar16 = (int64_t)puVar36 - (int64_t)param_1;
        }
        if ((byte *)((int64_t)puVar19 + uVar16) == pbVar3) {
          puVar19 = (uint64_t *)((int64_t)param_1 + uVar16);
          puVar36 = puVar19;
          puVar38 = puVar41;
          if (puVar19 < puVar1) {
            uVar27 = *puVar19 ^ *puVar41;
            if (uVar27 == 0) {
              lVar8 = 0;
              do {
                if (puVar1 <= (uint64_t *)((int64_t)param_1 + lVar8 + uVar16 + 8)) {
                  puVar38 = (uint64_t *)(lVar8 + 8 + uVar37 + local_e0);
                  puVar36 = (uint64_t *)((int64_t)param_1 + lVar8 + uVar16 + 8);
                  goto LAB_00eb11dd;
                }
                lVar17 = lVar8 + 8;
                uVar27 = *(uint64_t *)((int64_t)param_1 + lVar8 + uVar16 + 8) ^
                         *(uint64_t *)(uVar37 + local_e0 + 8 + lVar8);
                lVar8 = lVar17;
              } while (uVar27 == 0);
              uVar9 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar9 = (uVar9 >> 3) + lVar17;
            }
            else {
              uVar9 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar9 = uVar9 >> 3;
            }
          }
          else {
LAB_00eb11dd:
            if ((puVar36 < local_c0) && ((uint)*puVar38 == (uint)*puVar36)) {
              puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            }
            if ((puVar36 < local_b8) && ((short)*puVar38 == (short)*puVar36)) {
              puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            }
            if (puVar36 < param_3) {
              puVar36 = (uint64_t *)
                        ((int64_t)puVar36 + (uint64_t)((byte)*puVar38 == (byte)*puVar36));
            }
            uVar9 = (int64_t)puVar36 - (int64_t)puVar19;
          }
          uVar16 = uVar16 + uVar9;
        }
      }
      else {
        puVar19 = (uint64_t *)(local_e0 + uVar16);
        puVar38 = param_1;
        if (param_1 < puVar1) {
          uVar27 = *param_1 ^ *puVar19;
          if (uVar27 == 0) {
            lVar8 = 0;
            do {
              if (puVar1 <= (uint64_t *)((int64_t)param_1 + lVar8 + 8)) {
                puVar19 = (uint64_t *)(lVar8 + uVar16 + local_e0 + 8);
                puVar38 = (uint64_t *)((int64_t)param_1 + lVar8 + 8);
                goto LAB_00eb0fc1;
              }
              lVar17 = lVar8 + 8;
              uVar27 = *(uint64_t *)((int64_t)param_1 + lVar8 + 8) ^
                       *(uint64_t *)(uVar16 + local_e0 + 8 + lVar8);
              lVar8 = lVar17;
            } while (uVar27 == 0);
            uVar16 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            uVar16 = (uVar16 >> 3) + lVar17;
          }
          else {
            uVar16 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            uVar16 = uVar16 >> 3;
          }
        }
        else {
LAB_00eb0fc1:
          if ((puVar38 < local_c0) && ((uint)*puVar19 == (uint)*puVar38)) {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
          }
          if ((puVar38 < local_b8) && ((short)*puVar19 == (short)*puVar38)) {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
          }
          if (puVar38 < param_3) {
            puVar38 = (uint64_t *)
                      ((int64_t)puVar38 + (uint64_t)((byte)*puVar19 == (byte)*puVar38));
          }
          uVar16 = (int64_t)puVar38 - (int64_t)param_1;
        }
      }
      if (2 < uVar16) {
        *this_ptr = (uVar12 - uVar21) + 3;
        this_ptr[1] = (int)uVar16;
        if ((uVar13 < uVar16) ||
           (local_50 = 1, uVar42 = uVar16, (uint64_t *)((int64_t)param_1 + uVar16) == param_3)) {
          iVar26 = uVar12 + 1;
          local_50 = 1;
          goto LAB_00eb12d2;
        }
      }
    }
  }
  uVar16 = (uint64_t)((uVar40 & uVar12) * 2);
  local_a0 = (uint *)(local_110 + uVar16 * 4);
  puVar39 = (uint *)(local_110 + uVar16 * 4 + 4);
  iVar26 = uVar12 + 9;
  *(uint *)(local_d8 + uVar20 * 4) = uVar12;
  if (uVar32 <= uVar35) {
    lVar8 = uVar37 + local_e0 + 8;
    uVar16 = 0;
    uVar20 = 0;
    do {
      uVar27 = uVar20;
      if (uVar16 < uVar20) {
        uVar27 = uVar16;
      }
      uVar25 = (uint64_t)uVar35;
      uVar9 = uVar27 + uVar25;
      if (uVar9 < uVar37) {
        puVar36 = (uint64_t *)((int64_t)param_1 + uVar27);
        puVar19 = (uint64_t *)(lVar44 + uVar25 + uVar27);
        puVar38 = (uint64_t *)(((int64_t)pbVar3 - (int64_t)puVar19) + (int64_t)puVar36);
        if (param_3 <= puVar38) {
          puVar38 = param_3;
        }
        puVar30 = puVar19;
        puVar43 = puVar36;
        if (puVar36 < (uint64_t *)((int64_t)puVar38 - 7U)) {
          uVar10 = *puVar36 ^ *puVar19;
          if (uVar10 == 0) {
            lVar28 = uVar9 + lVar44 + 8;
            lVar17 = 0;
            do {
              puVar43 = (uint64_t *)((int64_t)param_1 + lVar17 + uVar27 + 8);
              if ((uint64_t *)((int64_t)puVar38 - 7U) <= puVar43) {
                puVar30 = (uint64_t *)(lVar28 + lVar17);
                goto LAB_00eb14ee;
              }
              lVar29 = lVar17 + 8;
              uVar9 = *(uint64_t *)((int64_t)param_1 + lVar17 + uVar27 + 8) ^
                      *(uint64_t *)(lVar28 + lVar17);
              lVar17 = lVar29;
            } while (uVar9 == 0);
            uVar10 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar9 = (uVar10 >> 3) + lVar29;
          }
          else {
            uVar9 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
              }
            }
            uVar9 = uVar9 >> 3;
          }
        }
        else {
LAB_00eb14ee:
          if ((puVar43 < (uint64_t *)((int64_t)puVar38 - 3U)) &&
             ((uint)*puVar30 == (uint)*puVar43)) {
            puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
            puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
          }
          if ((puVar43 < (uint64_t *)((int64_t)puVar38 - 1U)) &&
             ((short)*puVar30 == (short)*puVar43)) {
            puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
            puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
          }
          if (puVar43 < puVar38) {
            puVar43 = (uint64_t *)
                      ((int64_t)puVar43 + (uint64_t)((byte)*puVar30 == (byte)*puVar43));
          }
          uVar9 = (int64_t)puVar43 - (int64_t)puVar36;
        }
        if ((byte *)((int64_t)puVar19 + uVar9) == pbVar3) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + uVar9);
          puVar19 = puVar36;
          puVar38 = puVar41;
          if (puVar36 < puVar1) {
            uVar10 = *puVar36 ^ *puVar41;
            if (uVar10 == 0) {
              lVar17 = uVar27 + uVar9 + 8;
              lVar28 = 0;
              do {
                puVar19 = (uint64_t *)((int64_t)param_1 + lVar28 + lVar17);
                if (puVar1 <= puVar19) {
                  puVar38 = (uint64_t *)(lVar28 + lVar8);
                  goto LAB_00eb15d8;
                }
                lVar29 = lVar28 + 8;
                uVar10 = *(uint64_t *)((int64_t)param_1 + lVar28 + lVar17) ^
                         *(uint64_t *)(lVar8 + lVar28);
                lVar28 = lVar29;
              } while (uVar10 == 0);
              uVar18 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar18 = (uVar18 >> 3) + lVar29;
            }
            else {
              uVar18 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar18 = uVar18 >> 3;
            }
          }
          else {
LAB_00eb15d8:
            if ((puVar19 < local_c0) && ((uint)*puVar38 == (uint)*puVar19)) {
              puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            }
            if ((puVar19 < local_b8) && ((short)*puVar38 == (short)*puVar19)) {
              puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            }
            if (puVar19 < param_3) {
              puVar19 = (uint64_t *)
                        ((int64_t)puVar19 + (uint64_t)((byte)*puVar38 == (byte)*puVar19));
            }
            uVar18 = (int64_t)puVar19 - (int64_t)puVar36;
          }
          uVar9 = uVar9 + uVar18;
        }
        uVar9 = uVar9 + uVar27;
        lVar17 = uVar25 + local_e0;
        if (uVar25 + uVar9 < uVar37) {
          lVar17 = lVar44 + uVar25;
        }
      }
      else {
        lVar17 = uVar25 + local_e0;
        puVar19 = (uint64_t *)((int64_t)param_1 + uVar27);
        puVar38 = (uint64_t *)(lVar17 + uVar27);
        puVar36 = puVar19;
        if (puVar19 < puVar1) {
          uVar25 = *puVar19 ^ *puVar38;
          if (uVar25 == 0) {
            lVar29 = uVar9 + local_e0 + 8;
            lVar28 = 0;
            do {
              puVar36 = (uint64_t *)((int64_t)param_1 + lVar28 + uVar27 + 8);
              if (puVar1 <= puVar36) {
                puVar38 = (uint64_t *)(lVar29 + lVar28);
                goto LAB_00eb13ee;
              }
              lVar24 = lVar28 + 8;
              uVar9 = *(uint64_t *)((int64_t)param_1 + lVar28 + uVar27 + 8) ^
                      *(uint64_t *)(lVar29 + lVar28);
              lVar28 = lVar24;
            } while (uVar9 == 0);
            uVar25 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
              }
            }
            uVar9 = (uVar25 >> 3) + lVar24;
          }
          else {
            uVar9 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
              }
            }
            uVar9 = uVar9 >> 3;
          }
        }
        else {
LAB_00eb13ee:
          if ((puVar36 < local_c0) && ((uint)*puVar38 == (uint)*puVar36)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
          }
          if ((puVar36 < local_b8) && ((short)*puVar38 == (short)*puVar36)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
          }
          if (puVar36 < param_3) {
            puVar36 = (uint64_t *)
                      ((int64_t)puVar36 + (uint64_t)((byte)*puVar38 == (byte)*puVar36));
          }
          uVar9 = (int64_t)puVar36 - (int64_t)puVar19;
        }
        uVar9 = uVar9 + uVar27;
      }
      if (uVar42 < uVar9) {
        iVar5 = uVar35 + (int)uVar9;
        if (uVar9 <= iVar26 - uVar35) {
          iVar5 = iVar26;
        }
        iVar26 = iVar5;
        this_ptr[local_50 * 2] = (uVar12 + 3) - uVar35;
        this_ptr[local_50 * 2 + 1] = (int)uVar9;
        local_50 = (uint64_t)((int)local_50 + 1);
        if ((0x1000 < uVar9) ||
           (uVar42 = uVar9, (uint64_t *)((int64_t)param_1 + uVar9) == param_3)) break;
      }
      puVar31 = (uint *)(local_110 + (uint64_t)((uVar35 & uVar40) * 2) * 4);
      if (*(byte *)(lVar17 + uVar9) < *(byte *)((int64_t)param_1 + uVar9)) {
        *local_a0 = uVar35;
        if (uVar35 <= uVar14) {
          local_a0 = &local_128;
          break;
        }
        puVar31 = puVar31 + 1;
        uVar16 = uVar9;
        local_a0 = puVar31;
      }
      else {
        *puVar39 = uVar35;
        uVar20 = uVar9;
        puVar39 = puVar31;
        if (uVar35 <= uVar14) {
          puVar39 = &local_128;
          break;
        }
      }
      iVar34 = iVar34 + -1;
      if ((iVar34 == 0) || (uVar35 = *puVar31, uVar35 < uVar32)) break;
    } while( true );
  }
  *puVar39 = 0;
  *local_a0 = 0;
  iVar26 = iVar26 + -8;
LAB_00eb12d2:
  *(int *)(arg1 + 0x2c) = iVar26;
  return local_50;
}


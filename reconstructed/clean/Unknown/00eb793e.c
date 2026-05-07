// Function: FUN_00eb793e
// Address: 00eb793e
// Size: 3972 bytes
// Class: Unknown

uint64_t FUN_00eb793e(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int *param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint uVar4;
  int64_t lVar5;
  void*puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint *puVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  uint64_t *puVar25;
  uint uVar26;
  int64_t arg1;
  int64_t lVar27;
  uint uVar28;
  int64_t this_ptr;
  uint64_t uVar29;
  uint64_t *puVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  uint64_t uVar33;
  uint uVar34;
  uint64_t uVar35;
  uint64_t *puVar36;
  int64_t lVar37;
  int iVar38;
  int64_t lVar39;
  uint64_t *puVar40;
  int iVar41;
  uint uVar42;
  uint *puVar43;
  bool bVar44;
  uint local_res8;
  int local_res10;
  uint local_114;
  uint local_110 [2];
  uint local_108;
  uint local_104;
  char local_100;
  uint local_fc;
  uint64_t local_f8;
  int64_t local_f0;
  uint64_t *local_e8;
  uint64_t *local_e0;
  uint64_t *local_d8;
  int64_t local_78;
  uint64_t local_70;
  uint *local_60;
  uint *local_50;
  
  lVar5 = *(int64_t *)(arg1 + 8);
  uVar29 = (uint64_t)*(uint *)(arg1 + 0x2c);
  if (param_1 < (int64_t *)(lVar5 + uVar29)) {
    return 0;
  }
  uVar34 = (int)param_1 - (int)lVar5;
  puVar1 = (uint64_t *)((int64_t)param_3 - 7);
  local_e8 = (uint64_t *)((int64_t)param_3 + -3);
  local_e0 = (uint64_t *)((int64_t)param_3 + -1);
  if (*(uint *)(arg1 + 0x2c) < uVar34) {
    lVar37 = *(int64_t *)(arg1 + 0x70);
    local_78 = *(int64_t *)(arg1 + 0x80);
    do {
      uVar9 = (uint)uVar29;
      uVar12 = (uint64_t)(*(int64_t *)(lVar5 + uVar29) * -0x30e4432340650000) >>
               (-*(char *)(arg1 + 0x108) & 0x3fU);
      uVar42 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
      uVar8 = uVar9 - uVar42;
      if (uVar9 < uVar42) {
        uVar8 = 0;
      }
      uVar28 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
      uVar13 = (uint64_t)((uVar9 & uVar42) * 2);
      uVar10 = *(uint *)(arg1 + 0x1c);
      uVar24 = uVar34 - uVar28;
      if (uVar34 - uVar10 <= uVar28) {
        uVar24 = uVar10;
      }
      uVar28 = *(uint *)(lVar37 + uVar12 * 4);
      local_50 = (uint *)(local_78 + uVar13 * 4);
      puVar43 = (uint *)(local_78 + 4 + uVar13 * 4);
      if (*(int *)(arg1 + 0x28) != 0) {
        uVar24 = uVar10;
      }
      uVar3 = *(void*)(arg1 + 0x10c);
      *(uint *)(lVar37 + uVar12 * 4) = uVar9;
      iVar41 = uVar9 + 9;
      uVar12 = 8;
      if (uVar24 <= uVar28) {
        iVar38 = 1 << ((byte)uVar3 & 0x1f);
        uVar12 = 8;
        uVar13 = 0;
        uVar33 = 0;
        do {
          uVar19 = uVar33;
          if (uVar13 < uVar33) {
            uVar19 = uVar13;
          }
          lVar17 = lVar5 + (uint64_t)uVar28;
          puVar40 = (uint64_t *)(lVar5 + uVar29 + uVar19);
          puVar32 = (uint64_t *)(lVar17 + uVar19);
          puVar30 = puVar40;
          if (puVar40 < puVar1) {
            uVar20 = *puVar40 ^ *puVar32;
            if (uVar20 == 0) {
              lVar39 = uVar28 + uVar19 + lVar5 + 8;
              lVar14 = lVar5 + 8 + uVar29 + uVar19;
              lVar27 = 0;
              do {
                puVar30 = (uint64_t *)(lVar14 + lVar27);
                if (puVar1 <= puVar30) {
                  puVar32 = (uint64_t *)(lVar39 + lVar27);
                  goto LAB_00eb7b85;
                }
                lVar2 = lVar27 + 8;
                uVar20 = *(uint64_t *)(lVar14 + lVar27) ^ *(uint64_t *)(lVar39 + lVar27);
                lVar27 = lVar2;
              } while (uVar20 == 0);
              uVar15 = 0;
              if (uVar20 != 0) {
                for (; (uVar20 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar15 = (uVar15 >> 3) + lVar2;
            }
            else {
              uVar15 = 0;
              if (uVar20 != 0) {
                for (; (uVar20 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar15 = uVar15 >> 3;
            }
          }
          else {
LAB_00eb7b85:
            if ((puVar30 < local_e8) && ((int)*puVar32 == (int)*puVar30)) {
              puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            }
            if ((puVar30 < local_e0) && ((short)*puVar32 == (short)*puVar30)) {
              puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            }
            if (puVar30 < param_3) {
              puVar30 = (uint64_t *)
                        ((int64_t)puVar30 + (uint64_t)((byte)*puVar32 == (byte)*puVar30));
            }
            uVar15 = (int64_t)puVar30 - (int64_t)puVar40;
          }
          uVar15 = uVar15 + uVar19;
          if ((uVar12 < uVar15) && (uVar12 = uVar15, iVar41 - uVar28 < uVar15)) {
            iVar41 = uVar28 + (int)uVar15;
          }
          puVar40 = (uint64_t *)(lVar5 + uVar29 + uVar15);
          if (puVar40 == param_3) break;
          puVar16 = (uint *)(local_78 + (uint64_t)((uVar28 & uVar42) * 2) * 4);
          if (*(byte *)(lVar17 + uVar15) < (byte)*puVar40) {
            *local_50 = uVar28;
            if (uVar28 <= uVar8) {
              local_50 = local_110;
              break;
            }
            puVar16 = puVar16 + 1;
            uVar13 = uVar15;
            uVar15 = uVar33;
            local_50 = puVar16;
          }
          else {
            *puVar43 = uVar28;
            puVar43 = puVar16;
            if (uVar28 <= uVar8) {
              puVar43 = local_110;
              break;
            }
          }
          iVar38 = iVar38 + -1;
          if ((iVar38 == 0) || (uVar28 = *puVar16, uVar33 = uVar15, uVar28 < uVar24)) break;
        } while( true );
      }
      uVar8 = (int)uVar12 - 0x180;
      if (0xbf < uVar8) {
        uVar8 = 0xc0;
      }
      if (uVar12 < 0x181) {
        uVar8 = 0;
      }
      uVar42 = (iVar41 - uVar9) - 8;
      if (uVar42 < uVar8) {
        uVar42 = uVar8;
      }
      *puVar43 = 0;
      *local_50 = 0;
      uVar29 = (uint64_t)(uVar42 + uVar9);
    } while (uVar42 + uVar9 < uVar34);
  }
  else {
    lVar37 = *(int64_t *)(arg1 + 0x70);
    local_78 = *(int64_t *)(arg1 + 0x80);
  }
  *(uint *)(arg1 + 0x2c) = uVar34;
  uVar8 = 0xfff;
  if (*(uint *)(arg1 + 0x114) < 0xfff) {
    uVar8 = *(uint *)(arg1 + 0x114);
  }
  lVar17 = *param_1;
  uVar29 = (uint64_t)(lVar17 * -0x30e4432340650000) >> (-*(char *)(arg1 + 0x108) & 0x3fU);
  local_70 = 0;
  uVar9 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
  uVar42 = uVar34 - uVar9;
  if (uVar34 < uVar9) {
    uVar42 = 0;
  }
  uVar28 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
  uVar10 = *(uint *)(arg1 + 0x1c);
  uVar24 = uVar34 - uVar28;
  if (uVar34 - uVar10 <= uVar28) {
    uVar24 = uVar10;
  }
  if (*(int *)(arg1 + 0x28) != 0) {
    uVar24 = uVar10;
  }
  uVar10 = uVar24;
  if (uVar24 == 0) {
    uVar10 = 1;
  }
  local_f8 = (uint64_t)(uint)(1 << (*(byte *)(arg1 + 0x10c) & 0x1f));
  puVar6 = *(void**)(arg1 + 0xf8);
  pbVar7 = (byte *)*puVar6;
  local_f0 = puVar6[1];
  uVar12 = (int64_t)pbVar7 - local_f0;
  iVar41 = (int)uVar12;
  uVar28 = uVar24 - iVar41;
  uVar13 = (uint64_t)uVar28;
  local_104 = ~(-1 << (*(char *)((int64_t)puVar6 + 0x104) - 1U & 0x1f));
  local_fc = *(uint *)((int64_t)puVar6 + 0x1c);
  local_108 = iVar41 - local_104;
  if (iVar41 - local_fc <= local_104) {
    local_108 = local_fc;
  }
  uVar33 = (uint64_t)(local_res10 - 1);
  uVar22 = *(uint *)(lVar37 + uVar29 * 4);
  uVar4 = *(uint *)(arg1 + 0x18);
  uVar19 = (uint64_t)uVar4;
  local_d8 = (uint64_t *)(lVar5 + uVar19);
  local_100 = (char)*(void*)(puVar6 + 0x21);
  if (local_res8 < 0xfffffffd) {
    puVar40 = (uint64_t *)((int64_t)param_1 + 4);
    uVar20 = (uint64_t)local_res8;
    lVar14 = uVar19 + lVar5 + 8;
    local_70 = 0;
    do {
      if (uVar20 == 3) {
        uVar26 = *param_4 - 1;
      }
      else {
        uVar26 = param_4[uVar20];
      }
      uVar21 = uVar34 - uVar26;
      if (uVar26 - 1 < uVar34 - uVar4) {
        uVar15 = 0;
        if ((uVar24 <= uVar21) && ((int)*param_1 == *(int *)((int64_t)param_1 - (uint64_t)uVar26))
           ) {
          lVar27 = -(uint64_t)uVar26;
          puVar32 = (uint64_t *)((int64_t)puVar40 + lVar27);
          puVar30 = puVar40;
          if (puVar40 < puVar1) {
            uVar15 = *puVar40 ^ *puVar32;
            if (uVar15 == 0) {
              lVar27 = lVar27 + 0xc;
              lVar39 = 0;
              do {
                puVar30 = (uint64_t *)((int64_t)param_1 + lVar39 + 0xc);
                if (puVar1 <= puVar30) {
                  puVar32 = (uint64_t *)((int64_t)param_1 + lVar39 + lVar27);
                  goto LAB_00eb8018;
                }
                lVar2 = lVar39 + 8;
                uVar15 = *(uint64_t *)((int64_t)param_1 + lVar39 + 0xc) ^
                         *(uint64_t *)((int64_t)param_1 + lVar39 + lVar27);
                lVar39 = lVar2;
              } while (uVar15 == 0);
              uVar18 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar18 = (uVar18 >> 3) + lVar2;
LAB_00eb8168:
              iVar41 = (int)uVar18;
            }
            else {
              uVar18 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              iVar41 = (int)(uVar18 >> 3);
            }
          }
          else {
LAB_00eb8018:
            if ((puVar30 < local_e8) && ((int)*puVar32 == (int)*puVar30)) {
              puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            }
            if ((puVar30 < local_e0) && ((short)*puVar32 == (short)*puVar30)) {
              puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            }
            if (puVar30 < param_3) {
              puVar30 = (uint64_t *)
                        ((int64_t)puVar30 + (uint64_t)((byte)*puVar32 == (byte)*puVar30));
            }
            iVar41 = (int)puVar30 - (int)puVar40;
          }
LAB_00eb8227:
          uVar15 = (uint64_t)(iVar41 + 4);
        }
      }
      else {
        uVar15 = 0;
        if ((uVar26 - 1 < uVar34 - (uVar28 + local_fc)) && (2 < ~uVar21 + uVar4)) {
          piVar23 = (int *)((uVar21 - uVar13) + local_f0);
          if ((int)*param_1 == *piVar23) {
            puVar30 = (uint64_t *)(piVar23 + 1);
            puVar32 = (uint64_t *)(((int64_t)pbVar7 - (int64_t)puVar30) + (int64_t)puVar40);
            if (param_3 <= puVar32) {
              puVar32 = param_3;
            }
            puVar25 = puVar30;
            puVar36 = puVar40;
            if (puVar40 < (uint64_t *)((int64_t)puVar32 - 7U)) {
              uVar15 = *puVar40 ^ *puVar30;
              if (uVar15 == 0) {
                lVar39 = (uint64_t)uVar21 + (local_f0 - uVar13) + 0xc;
                lVar27 = 0;
                do {
                  puVar36 = (uint64_t *)((int64_t)param_1 + lVar27 + 0xc);
                  if ((uint64_t *)((int64_t)puVar32 - 7U) <= puVar36) {
                    puVar25 = (uint64_t *)(lVar39 + lVar27);
                    goto LAB_00eb80f8;
                  }
                  lVar2 = lVar27 + 8;
                  uVar15 = *(uint64_t *)((int64_t)param_1 + lVar27 + 0xc) ^
                           *(uint64_t *)(lVar39 + lVar27);
                  lVar27 = lVar2;
                } while (uVar15 == 0);
                uVar18 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                  }
                }
                uVar18 = (uVar18 >> 3) + lVar2;
              }
              else {
                uVar18 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                  }
                }
                uVar18 = uVar18 >> 3;
              }
            }
            else {
LAB_00eb80f8:
              if ((puVar36 < (uint64_t *)((int64_t)puVar32 - 3U)) &&
                 ((int)*puVar25 == (int)*puVar36)) {
                puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
                puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
              }
              if ((puVar36 < (uint64_t *)((int64_t)puVar32 - 1U)) &&
                 ((short)*puVar25 == (short)*puVar36)) {
                puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
                puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
              }
              if (puVar36 < puVar32) {
                puVar36 = (uint64_t *)
                          ((int64_t)puVar36 + (uint64_t)((byte)*puVar25 == (byte)*puVar36));
              }
              uVar18 = (int64_t)puVar36 - (int64_t)puVar40;
            }
            if ((byte *)((int64_t)puVar30 + uVar18) != pbVar7) goto LAB_00eb8168;
            puVar32 = (uint64_t *)((int64_t)puVar40 + uVar18);
            puVar36 = local_d8;
            puVar30 = puVar32;
            if (puVar32 < puVar1) {
              uVar15 = *puVar32 ^ *local_d8;
              if (uVar15 == 0) {
                lVar27 = 0;
                do {
                  puVar30 = (uint64_t *)((int64_t)param_1 + lVar27 + uVar18 + 0xc);
                  if (puVar1 <= puVar30) {
                    puVar36 = (uint64_t *)(lVar27 + lVar14);
                    goto LAB_00eb81d7;
                  }
                  lVar39 = lVar27 + 8;
                  uVar15 = *(uint64_t *)((int64_t)param_1 + lVar27 + uVar18 + 0xc) ^
                           *(uint64_t *)(lVar14 + lVar27);
                  lVar27 = lVar39;
                } while (uVar15 == 0);
                uVar35 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                  }
                }
                iVar41 = (int)(uVar35 >> 3) + (int)lVar39;
              }
              else {
                uVar35 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                  }
                }
                iVar41 = (int)(uVar35 >> 3);
              }
            }
            else {
LAB_00eb81d7:
              if ((puVar30 < local_e8) && ((int)*puVar36 == (int)*puVar30)) {
                puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
                puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
              }
              if ((puVar30 < local_e0) && ((short)*puVar36 == (short)*puVar30)) {
                puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
                puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
              }
              if (puVar30 < param_3) {
                puVar30 = (uint64_t *)
                          ((int64_t)puVar30 + (uint64_t)((byte)*puVar36 == (byte)*puVar30));
              }
              iVar41 = (int)puVar30 - (int)puVar32;
            }
            iVar41 = (int)uVar18 + iVar41;
            goto LAB_00eb8227;
          }
        }
      }
      if (uVar33 < uVar15) {
        *(uint *)(this_ptr + local_70 * 8) = (1 - local_res8) + (int)uVar20;
        *(uint *)(this_ptr + 4 + local_70 * 8) = (uint)uVar15;
        local_70 = (uint64_t)((int)local_70 + 1);
        if (uVar8 < (uint)uVar15) {
          return local_70;
        }
        uVar33 = uVar15;
        if ((uint64_t *)((int64_t)param_1 + uVar15) == param_3) {
          return local_70;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < local_res8 + 3);
  }
  uVar20 = (uint64_t)((uVar9 & uVar34) * 2);
  local_60 = (uint *)(local_78 + uVar20 * 4);
  iVar41 = uVar34 + 9;
  *(uint *)(lVar37 + uVar29 * 4) = uVar34;
  if (uVar22 < uVar10) {
    local_60[0] = 0;
    local_60[1] = 0;
  }
  else {
    puVar43 = (uint *)(local_78 + uVar20 * 4 + 4);
    uVar29 = 0;
    uVar20 = 0;
    iVar38 = iVar41;
LAB_00eb830f:
    uVar15 = uVar20;
    if (uVar29 < uVar20) {
      uVar15 = uVar29;
    }
    lVar37 = lVar5 + (uint64_t)uVar22;
    puVar40 = (uint64_t *)((int64_t)param_1 + uVar15);
    puVar32 = (uint64_t *)(lVar37 + uVar15);
    puVar30 = puVar40;
    if (puVar40 < puVar1) {
      uVar18 = *puVar40 ^ *puVar32;
      if (uVar18 == 0) {
        lVar27 = uVar22 + uVar15 + lVar5 + 8;
        lVar14 = 0;
        do {
          puVar30 = (uint64_t *)((int64_t)param_1 + lVar14 + uVar15 + 8);
          if (puVar1 <= puVar30) {
            puVar32 = (uint64_t *)(lVar27 + lVar14);
            goto LAB_00eb8354;
          }
          lVar39 = lVar14 + 8;
          uVar18 = *(uint64_t *)((int64_t)param_1 + lVar14 + uVar15 + 8) ^
                   *(uint64_t *)(lVar27 + lVar14);
          lVar14 = lVar39;
        } while (uVar18 == 0);
        uVar35 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
          }
        }
        uVar35 = (uVar35 >> 3) + lVar39;
      }
      else {
        uVar35 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
          }
        }
        uVar35 = uVar35 >> 3;
      }
    }
    else {
LAB_00eb8354:
      if ((puVar30 < local_e8) && ((int)*puVar32 == (int)*puVar30)) {
        puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
        puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
      }
      if ((puVar30 < local_e0) && ((short)*puVar32 == (short)*puVar30)) {
        puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
        puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
      }
      if (puVar30 < param_3) {
        puVar30 = (uint64_t *)((int64_t)puVar30 + (uint64_t)((byte)*puVar32 == (byte)*puVar30));
      }
      uVar35 = (int64_t)puVar30 - (int64_t)puVar40;
    }
    uVar35 = uVar35 + uVar15;
    if (uVar33 < uVar35) {
      uVar8 = iVar41 - uVar22;
      iVar41 = iVar38;
      if (uVar8 < uVar35) {
        iVar41 = uVar22 + (int)uVar35;
      }
      *(uint *)(this_ptr + local_70 * 8) = (uVar34 + 3) - uVar22;
      *(int *)(this_ptr + 4 + local_70 * 8) = (int)uVar35;
      local_70 = (uint64_t)((int)local_70 + 1);
      if ((0x1000 < uVar35) ||
         (uVar33 = uVar35, iVar38 = iVar41, (uint64_t *)((int64_t)param_1 + uVar35) == param_3)) {
        *puVar43 = 0;
        *local_60 = 0;
        goto LAB_00eb889e;
      }
    }
    puVar16 = (uint *)(local_78 + (uint64_t)((uVar22 & uVar9) * 2) * 4);
    if (*(byte *)((int64_t)param_1 + uVar35) <= *(byte *)(lVar37 + uVar35)) {
      *puVar43 = uVar22;
      puVar43 = puVar16;
      if (uVar22 <= uVar42) {
        puVar43 = &local_114;
        goto LAB_00eb850f;
      }
LAB_00eb8461:
      uVar8 = (int)local_f8 - 1;
      local_f8 = (uint64_t)uVar8;
      if ((uVar8 == 0) || (uVar22 = *puVar16, uVar20 = uVar35, uVar22 < uVar10)) goto LAB_00eb850f;
      goto LAB_00eb830f;
    }
    *local_60 = uVar22;
    if (uVar42 < uVar22) {
      puVar16 = puVar16 + 1;
      uVar29 = uVar35;
      uVar35 = uVar20;
      local_60 = puVar16;
      goto LAB_00eb8461;
    }
    local_60 = &local_114;
LAB_00eb850f:
    *puVar43 = 0;
    *local_60 = 0;
    if ((int)local_f8 == 0) goto LAB_00eb889e;
  }
  uVar8 = *(uint *)(puVar6[0xe] +
                   ((uint64_t)(lVar17 * -0x30e4432340650000) >> (-local_100 & 0x3fU)) * 4);
  if (local_fc < uVar8) {
    lVar37 = puVar6[0x10];
    lVar17 = uVar19 + lVar5 + 8;
    uVar19 = 0;
    uVar29 = 0;
    do {
      uVar20 = uVar29;
      if (uVar19 < uVar29) {
        uVar20 = uVar19;
      }
      uVar15 = (uint64_t)uVar8;
      puVar40 = (uint64_t *)((int64_t)param_1 + uVar20);
      puVar32 = (uint64_t *)(local_f0 + uVar15 + uVar20);
      puVar30 = (uint64_t *)(((int64_t)pbVar7 - (int64_t)puVar32) + (int64_t)puVar40);
      if (param_3 <= puVar30) {
        puVar30 = param_3;
      }
      puVar25 = puVar32;
      puVar36 = puVar40;
      if (puVar40 < (uint64_t *)((int64_t)puVar30 - 7U)) {
        uVar18 = *puVar40 ^ *puVar32;
        if (uVar18 == 0) {
          lVar27 = uVar20 + uVar15 + local_f0 + 8;
          lVar14 = 0;
          do {
            puVar36 = (uint64_t *)((int64_t)param_1 + lVar14 + uVar20 + 8);
            if ((uint64_t *)((int64_t)puVar30 - 7U) <= puVar36) {
              puVar25 = (uint64_t *)(lVar27 + lVar14);
              goto LAB_00eb867d;
            }
            lVar39 = lVar14 + 8;
            uVar18 = *(uint64_t *)((int64_t)param_1 + lVar14 + uVar20 + 8) ^
                     *(uint64_t *)(lVar27 + lVar14);
            lVar14 = lVar39;
          } while (uVar18 == 0);
          uVar35 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = (uVar35 >> 3) + lVar39;
        }
        else {
          uVar35 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = uVar35 >> 3;
        }
      }
      else {
LAB_00eb867d:
        if ((puVar36 < (uint64_t *)((int64_t)puVar30 - 3U)) && ((int)*puVar25 == (int)*puVar36)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
          puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
        }
        if ((puVar36 < (uint64_t *)((int64_t)puVar30 - 1U)) &&
           ((short)*puVar25 == (short)*puVar36)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
          puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
        }
        if (puVar36 < puVar30) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((byte)*puVar25 == (byte)*puVar36))
          ;
        }
        uVar35 = (int64_t)puVar36 - (int64_t)puVar40;
      }
      if ((byte *)((int64_t)puVar32 + uVar35) == pbVar7) {
        puVar40 = (uint64_t *)((int64_t)puVar40 + uVar35);
        puVar30 = local_d8;
        puVar32 = puVar40;
        if (puVar40 < puVar1) {
          uVar18 = *puVar40 ^ *local_d8;
          if (uVar18 == 0) {
            lVar14 = uVar35 + uVar20 + 8;
            lVar27 = 0;
            do {
              puVar32 = (uint64_t *)((int64_t)param_1 + lVar27 + lVar14);
              if (puVar1 <= puVar32) {
                puVar30 = (uint64_t *)(lVar27 + lVar17);
                goto LAB_00eb8774;
              }
              lVar39 = lVar27 + 8;
              uVar18 = *(uint64_t *)((int64_t)param_1 + lVar27 + lVar14) ^
                       *(uint64_t *)(lVar17 + lVar27);
              lVar27 = lVar39;
            } while (uVar18 == 0);
            uVar31 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
              }
            }
            uVar31 = (uVar31 >> 3) + lVar39;
          }
          else {
            uVar31 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
              }
            }
            uVar31 = uVar31 >> 3;
          }
        }
        else {
LAB_00eb8774:
          if ((puVar32 < local_e8) && ((int)*puVar30 == (int)*puVar32)) {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
          }
          if ((puVar32 < local_e0) && ((short)*puVar30 == (short)*puVar32)) {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
          }
          if (puVar32 < param_3) {
            puVar32 = (uint64_t *)
                      ((int64_t)puVar32 + (uint64_t)((byte)*puVar30 == (byte)*puVar32));
          }
          uVar31 = (int64_t)puVar32 - (int64_t)puVar40;
        }
        uVar35 = uVar35 + uVar31;
      }
      uVar35 = uVar35 + uVar20;
      lVar14 = uVar15 + uVar13 + lVar5;
      if (uVar35 + uVar15 < (uVar12 & 0xffffffff)) {
        lVar14 = local_f0 + uVar15;
      }
      if (uVar33 < uVar35) {
        iVar11 = uVar28 + uVar8;
        iVar38 = iVar11 + (int)uVar35;
        if (uVar35 <= (uint)(iVar41 - iVar11)) {
          iVar38 = iVar41;
        }
        iVar41 = iVar38;
        *(uint *)(this_ptr + local_70 * 8) = (uVar34 + 3) - iVar11;
        *(int *)(this_ptr + 4 + local_70 * 8) = (int)uVar35;
        local_70 = (uint64_t)((int)local_70 + 1);
        if ((0x1000 < uVar35) ||
           (uVar33 = uVar35, (uint64_t *)((int64_t)param_1 + uVar35) == param_3)) break;
      }
      if (uVar8 <= local_108) break;
      bVar44 = *(byte *)(lVar14 + uVar35) < *(byte *)((int64_t)param_1 + uVar35);
      if (bVar44) {
        uVar19 = uVar35;
        uVar35 = uVar29;
      }
      uVar29 = uVar35;
      uVar9 = (int)local_f8 - 1;
      local_f8 = (uint64_t)uVar9;
      if ((uVar9 == 0) ||
         (uVar8 = *(uint *)(lVar37 + ((uint64_t)bVar44 | (uint64_t)((uVar8 & local_104) * 2)) * 4)
         , uVar8 <= local_fc)) break;
    } while( true );
  }
LAB_00eb889e:
  *(int *)(arg1 + 0x2c) = iVar41 + -8;
  return local_70;
}


// Function: FUN_00eafab8
// Address: 00eafab8
// Size: 2127 bytes
// Class: Unknown

uint64_t FUN_00eafab8(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint uVar4;
  uint *puVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t arg1;
  uint64_t uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int64_t this_ptr;
  uint64_t uVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  int64_t lVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  uint uVar29;
  int64_t lVar30;
  uint64_t *puVar31;
  uint local_res8;
  int local_res10;
  uint local_c8;
  uint local_c4;
  uint64_t *local_c0;
  uint64_t *local_b8;
  int64_t local_a8;
  int64_t local_a0;
  int64_t local_98;
  int64_t local_78;
  uint64_t local_70;
  uint64_t *local_68;
  uint *local_60;
  uint64_t *local_50;
  int64_t *local_48;
  uint *local_40;
  
  lVar16 = *(int64_t *)(arg1 + 8);
  uVar15 = (uint64_t)*(uint *)(arg1 + 0x2c);
  uVar23 = 0;
  if ((int64_t *)(lVar16 + uVar15) <= param_1) {
    uVar29 = (int)param_1 - (int)lVar16;
    local_70 = (uint64_t)uVar29;
    local_68 = (uint64_t *)((int64_t)param_3 + -7);
    local_c0 = (uint64_t *)((int64_t)param_3 + -3);
    local_b8 = (uint64_t *)((int64_t)param_3 + -1);
    local_98 = lVar16;
    local_50 = param_3;
    local_48 = param_1;
    if (*(uint *)(arg1 + 0x2c) < uVar29) {
      local_a8 = *(int64_t *)(arg1 + 0x70);
      local_78 = *(int64_t *)(arg1 + 0x80);
      local_a0 = lVar16 + 8;
      do {
        uVar11 = (uint)uVar15;
        uVar23 = (uint64_t)(*(int64_t *)(lVar16 + uVar15) * -0x30e4432340650000) >>
                 (-*(char *)(arg1 + 0x108) & 0x3fU);
        uVar14 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
        uVar29 = uVar11 - uVar14;
        if (uVar11 < uVar14) {
          uVar29 = 0;
        }
        uVar18 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
        uVar12 = (uint64_t)((uVar11 & uVar14) * 2);
        uVar7 = *(uint *)(arg1 + 0x1c);
        uVar4 = (int)local_70 - uVar18;
        if ((int)local_70 - uVar7 <= uVar18) {
          uVar4 = uVar7;
        }
        uVar18 = *(uint *)(local_a8 + uVar23 * 4);
        local_40 = (uint *)(local_78 + uVar12 * 4);
        puVar28 = (uint *)(local_78 + 4 + uVar12 * 4);
        if (*(int *)(arg1 + 0x28) != 0) {
          uVar4 = uVar7;
        }
        uVar3 = *(void*)(arg1 + 0x10c);
        *(uint *)(local_a8 + uVar23 * 4) = uVar11;
        iVar27 = uVar11 + 9;
        uVar23 = 8;
        if (uVar4 <= uVar18) {
          lVar9 = lVar16 + uVar15;
          iVar26 = 1 << ((byte)uVar3 & 0x1f);
          uVar23 = 8;
          uVar17 = 0;
          uVar12 = 0;
          do {
            uVar13 = uVar12;
            if (uVar17 < uVar12) {
              uVar13 = uVar17;
            }
            lVar30 = lVar16 + (uint64_t)uVar18;
            puVar31 = (uint64_t *)(lVar9 + uVar13);
            puVar22 = (uint64_t *)(lVar30 + uVar13);
            puVar24 = puVar31;
            if (puVar31 < local_68) {
              uVar10 = *puVar31 ^ *puVar22;
              if (uVar10 == 0) {
                lVar6 = uVar18 + uVar13 + local_a0;
                lVar2 = local_a0 + uVar15 + uVar13;
                lVar25 = 0;
                do {
                  puVar24 = (uint64_t *)(lVar2 + lVar25);
                  param_3 = local_50;
                  lVar16 = local_98;
                  if (local_68 <= puVar24) {
                    puVar22 = (uint64_t *)(lVar6 + lVar25);
                    goto LAB_00eafc85;
                  }
                  lVar1 = lVar25 + 8;
                  uVar10 = *(uint64_t *)(lVar2 + lVar25) ^ *(uint64_t *)(lVar6 + lVar25);
                  lVar25 = lVar1;
                } while (uVar10 == 0);
                uVar21 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                uVar21 = (uVar21 >> 3) + lVar1;
              }
              else {
                uVar21 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                uVar21 = uVar21 >> 3;
              }
            }
            else {
LAB_00eafc85:
              if ((puVar24 < local_c0) && ((int)*puVar22 == (int)*puVar24)) {
                puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
                puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
              }
              if ((puVar24 < local_b8) && ((short)*puVar22 == (short)*puVar24)) {
                puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
                puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
              }
              if (puVar24 < param_3) {
                puVar24 = (uint64_t *)
                          ((int64_t)puVar24 + (uint64_t)((byte)*puVar22 == (byte)*puVar24));
              }
              uVar21 = (int64_t)puVar24 - (int64_t)puVar31;
            }
            uVar21 = uVar21 + uVar13;
            if ((uVar23 < uVar21) && (uVar23 = uVar21, iVar27 - uVar18 < uVar21)) {
              iVar27 = uVar18 + (int)uVar21;
            }
            puVar31 = (uint64_t *)(lVar9 + uVar21);
            if (puVar31 == param_3) break;
            puVar5 = (uint *)(local_78 + (uint64_t)((uVar18 & uVar14) * 2) * 4);
            if (*(byte *)(lVar30 + uVar21) < (byte)*puVar31) {
              *local_40 = uVar18;
              if (uVar18 <= uVar29) {
                local_40 = &local_c4;
                break;
              }
              puVar5 = puVar5 + 1;
              uVar17 = uVar21;
              local_40 = puVar5;
            }
            else {
              *puVar28 = uVar18;
              puVar28 = puVar5;
              uVar12 = uVar21;
              if (uVar18 <= uVar29) {
                puVar28 = &local_c4;
                break;
              }
            }
            iVar26 = iVar26 + -1;
            if ((iVar26 == 0) || (uVar18 = *puVar5, uVar18 < uVar4)) break;
          } while( true );
        }
        uVar29 = (int)uVar23 - 0x180;
        if (0xbf < uVar29) {
          uVar29 = 0xc0;
        }
        if (uVar23 < 0x181) {
          uVar29 = 0;
        }
        uVar14 = (iVar27 - uVar11) - 8;
        if (uVar14 < uVar29) {
          uVar14 = uVar29;
        }
        *puVar28 = 0;
        *local_40 = 0;
        uVar15 = (uint64_t)(uVar14 + uVar11);
      } while (uVar14 + uVar11 < (uint)local_70);
    }
    else {
      local_a8 = *(int64_t *)(arg1 + 0x70);
      local_78 = *(int64_t *)(arg1 + 0x80);
      local_70._0_4_ = uVar29;
    }
    *(uint *)(arg1 + 0x2c) = (uint)local_70;
    uVar29 = 0xfff;
    if (*(uint *)(arg1 + 0x114) < 0xfff) {
      uVar29 = *(uint *)(arg1 + 0x114);
    }
    uVar15 = (uint64_t)(*local_48 * -0x30e4432340650000) >> (-*(char *)(arg1 + 0x108) & 0x3fU)
    ;
    uVar23 = 0;
    uVar11 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
    uVar14 = (uint)local_70 - uVar11;
    if ((uint)local_70 < uVar11) {
      uVar14 = 0;
    }
    uVar18 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
    uVar7 = *(uint *)(arg1 + 0x1c);
    uVar4 = (uint)local_70 - uVar18;
    if ((uint)local_70 - uVar7 <= uVar18) {
      uVar4 = uVar7;
    }
    if (*(int *)(arg1 + 0x28) != 0) {
      uVar4 = uVar7;
    }
    uVar7 = uVar4;
    if (uVar4 == 0) {
      uVar7 = 1;
    }
    iVar27 = 1 << (*(byte *)(arg1 + 0x10c) & 0x1f);
    uVar18 = *(uint *)(local_a8 + uVar15 * 4);
    uVar12 = (uint64_t)(local_res10 - 1);
    if (local_res8 < 0xfffffffd) {
      iVar26 = *(int *)(arg1 + 0x18);
      puVar31 = (uint64_t *)((int64_t)local_48 + 4);
      uVar17 = (uint64_t)local_res8;
      uVar23 = 0;
      do {
        if (uVar17 == 3) {
          uVar8 = *param_4 - 1;
        }
        else {
          uVar8 = param_4[uVar17];
        }
        uVar19 = 0;
        if (((uVar8 - 1 < (uint)local_70 - iVar26) && (uVar4 <= (uint)local_70 - uVar8)) &&
           (uVar19 = 0, (int)*local_48 == *(int *)((int64_t)local_48 - (uint64_t)uVar8))) {
          lVar16 = -(uint64_t)uVar8;
          puVar22 = (uint64_t *)((int64_t)puVar31 + lVar16);
          puVar24 = puVar31;
          if (puVar31 < local_68) {
            uVar13 = *puVar31 ^ *puVar22;
            if (uVar13 == 0) {
              lVar16 = lVar16 + 0xc;
              lVar9 = 0;
              do {
                puVar24 = (uint64_t *)((int64_t)local_48 + lVar9 + 0xc);
                if (local_68 <= puVar24) {
                  puVar22 = (uint64_t *)((int64_t)local_48 + lVar9 + lVar16);
                  goto LAB_00eaffc4;
                }
                lVar30 = lVar9 + 8;
                uVar13 = *(uint64_t *)((int64_t)local_48 + lVar9 + 0xc) ^
                         *(uint64_t *)((int64_t)local_48 + lVar9 + lVar16);
                lVar9 = lVar30;
              } while (uVar13 == 0);
              uVar10 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              iVar20 = (int)(uVar10 >> 3) + (int)lVar30;
            }
            else {
              uVar10 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              iVar20 = (int)(uVar10 >> 3);
            }
          }
          else {
LAB_00eaffc4:
            if ((puVar24 < local_c0) && ((int)*puVar22 == (int)*puVar24)) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
              puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            }
            if ((puVar24 < local_b8) && ((short)*puVar22 == (short)*puVar24)) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
              puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
            }
            if (puVar24 < local_50) {
              puVar24 = (uint64_t *)
                        ((int64_t)puVar24 + (uint64_t)((byte)*puVar22 == (byte)*puVar24));
            }
            iVar20 = (int)puVar24 - (int)puVar31;
          }
          uVar19 = iVar20 + 4;
        }
        uVar13 = (uint64_t)uVar19;
        if (uVar12 < uVar13) {
          *(uint *)(this_ptr + uVar23 * 8) = (1 - local_res8) + (int)uVar17;
          *(uint *)(this_ptr + 4 + uVar23 * 8) = uVar19;
          uVar23 = (uint64_t)((int)uVar23 + 1);
          if (uVar29 < uVar19) {
            return uVar23;
          }
          uVar12 = uVar13;
          if ((uint64_t *)((int64_t)local_48 + uVar13) == local_50) {
            return uVar23;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < local_res8 + 3);
    }
    uVar17 = (uint64_t)((uVar11 & (uint)local_70) * 2);
    local_60 = (uint *)(local_78 + uVar17 * 4);
    puVar28 = (uint *)(local_78 + uVar17 * 4 + 4);
    iVar26 = (uint)local_70 + 9;
    *(uint *)(local_a8 + uVar15 * 4) = (uint)local_70;
    if (uVar7 <= uVar18) {
      uVar17 = 0;
      uVar15 = 0;
      do {
        uVar13 = uVar15;
        if (uVar17 < uVar15) {
          uVar13 = uVar17;
        }
        lVar16 = local_98 + (uint64_t)uVar18;
        puVar24 = (uint64_t *)((int64_t)local_48 + uVar13);
        puVar31 = (uint64_t *)(lVar16 + uVar13);
        puVar22 = puVar24;
        if (puVar24 < local_68) {
          uVar10 = *puVar24 ^ *puVar31;
          if (uVar10 == 0) {
            lVar30 = uVar18 + uVar13 + local_98 + 8;
            lVar9 = 0;
            do {
              puVar22 = (uint64_t *)((int64_t)local_48 + lVar9 + uVar13 + 8);
              if (local_68 <= puVar22) {
                puVar31 = (uint64_t *)(lVar30 + lVar9);
                goto LAB_00eb0175;
              }
              lVar2 = lVar9 + 8;
              uVar10 = *(uint64_t *)((int64_t)local_48 + lVar9 + uVar13 + 8) ^
                       *(uint64_t *)(lVar30 + lVar9);
              lVar9 = lVar2;
            } while (uVar10 == 0);
            uVar21 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            uVar21 = (uVar21 >> 3) + lVar2;
          }
          else {
            uVar21 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            uVar21 = uVar21 >> 3;
          }
        }
        else {
LAB_00eb0175:
          if ((puVar22 < local_c0) && ((int)*puVar31 == (int)*puVar22)) {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          }
          if ((puVar22 < local_b8) && ((short)*puVar31 == (short)*puVar22)) {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
          }
          if (puVar22 < local_50) {
            puVar22 = (uint64_t *)
                      ((int64_t)puVar22 + (uint64_t)((byte)*puVar31 == (byte)*puVar22));
          }
          uVar21 = (int64_t)puVar22 - (int64_t)puVar24;
        }
        uVar21 = uVar21 + uVar13;
        if (uVar12 < uVar21) {
          iVar20 = uVar18 + (int)uVar21;
          if (uVar21 <= iVar26 - uVar18) {
            iVar20 = iVar26;
          }
          iVar26 = iVar20;
          *(uint *)(this_ptr + uVar23 * 8) = ((uint)local_70 + 3) - uVar18;
          *(int *)(this_ptr + 4 + uVar23 * 8) = (int)uVar21;
          uVar23 = (uint64_t)((int)uVar23 + 1);
          if ((0x1000 < uVar21) ||
             (uVar12 = uVar21, (uint64_t *)((int64_t)local_48 + uVar21) == local_50)) break;
        }
        puVar5 = (uint *)(local_78 + (uint64_t)((uVar18 & uVar11) * 2) * 4);
        if (*(byte *)(lVar16 + uVar21) < *(byte *)((int64_t)local_48 + uVar21)) {
          *local_60 = uVar18;
          if (uVar18 <= uVar14) {
            local_60 = &local_c8;
            break;
          }
          puVar5 = puVar5 + 1;
          uVar17 = uVar21;
          local_60 = puVar5;
        }
        else {
          *puVar28 = uVar18;
          puVar28 = puVar5;
          uVar15 = uVar21;
          if (uVar18 <= uVar14) {
            puVar28 = &local_c8;
            break;
          }
        }
        iVar27 = iVar27 + -1;
        if ((iVar27 == 0) || (uVar18 = *puVar5, uVar18 < uVar7)) break;
      } while( true );
    }
    *puVar28 = 0;
    *local_60 = 0;
    *(int *)(arg1 + 0x2c) = iVar26 + -8;
  }
  return uVar23;
}


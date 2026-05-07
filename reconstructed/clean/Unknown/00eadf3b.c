// Function: FUN_00eadf3b
// Address: 00eadf3b
// Size: 2721 bytes
// Class: Unknown

uint64_t FUN_00eadf3b(uint64_t *param_1,uint *param_2,uint64_t *param_3,int *param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  uint uVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  uint *puVar19;
  int iVar20;
  uint64_t uVar21;
  int64_t arg1;
  uint64_t uVar22;
  int *this_ptr;
  int64_t lVar23;
  int64_t lVar24;
  int iVar25;
  uint uVar26;
  uint64_t *puVar27;
  int64_t lVar28;
  int64_t lVar29;
  uint *puVar30;
  int iVar31;
  uint uVar32;
  uint64_t uVar33;
  int64_t lVar34;
  uint64_t *puVar35;
  uint local_res8;
  int local_res10;
  uint local_e0;
  uint local_dc [3];
  uint64_t local_a0;
  uint64_t local_80;
  uint *local_48;
  int64_t local_40;
  uint *local_38;
  
  lVar6 = *(int64_t *)(arg1 + 8);
  uVar21 = (uint64_t)*(uint *)(arg1 + 0x2c);
  if (param_1 < (uint64_t *)(uVar21 + lVar6)) {
    return 0;
  }
  puVar1 = (uint64_t *)((int64_t)param_3 - 7);
  puVar2 = (uint64_t *)((int64_t)param_3 - 3);
  puVar3 = (uint64_t *)((int64_t)param_3 - 1);
  uVar26 = (uint)((int64_t)param_1 - lVar6);
  if (*(uint *)(arg1 + 0x2c) < uVar26) {
    lVar29 = *(int64_t *)(arg1 + 0x70);
    local_40 = *(int64_t *)(arg1 + 0x80);
    do {
      uVar11 = (uint)uVar21;
      uVar33 = (uint64_t)
               ((uint)(*(int *)(lVar6 + uVar21) * -0x61c8864f) >>
               (-*(char *)(arg1 + 0x108) & 0x1fU));
      uVar32 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
      uVar8 = uVar11 - uVar32;
      if (uVar11 < uVar32) {
        uVar8 = 0;
      }
      uVar7 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
      uVar9 = (uint64_t)((uVar11 & uVar32) * 2);
      uVar12 = *(uint *)(arg1 + 0x1c);
      uVar15 = uVar26 - uVar7;
      if (uVar26 - uVar12 <= uVar7) {
        uVar15 = uVar12;
      }
      uVar7 = *(uint *)(lVar29 + uVar33 * 4);
      local_48 = (uint *)(local_40 + uVar9 * 4);
      puVar30 = (uint *)(local_40 + 4 + uVar9 * 4);
      if (*(int *)(arg1 + 0x28) != 0) {
        uVar15 = uVar12;
      }
      uVar5 = *(void*)(arg1 + 0x10c);
      *(uint *)(lVar29 + uVar33 * 4) = uVar11;
      iVar31 = uVar11 + 9;
      uVar33 = 8;
      if (uVar15 <= uVar7) {
        iVar25 = 1 << ((byte)uVar5 & 0x1f);
        uVar33 = 8;
        local_80 = 0;
        local_a0 = 0;
        puVar19 = puVar30;
        do {
          uVar9 = local_a0;
          if (local_80 < local_a0) {
            uVar9 = local_80;
          }
          lVar24 = lVar6 + (uint64_t)uVar7;
          puVar35 = (uint64_t *)(uVar21 + lVar6 + uVar9);
          puVar18 = (uint64_t *)(lVar24 + uVar9);
          puVar27 = puVar35;
          if (puVar35 < puVar1) {
            uVar22 = *puVar35 ^ *puVar18;
            if (uVar22 == 0) {
              lVar23 = uVar7 + uVar9 + lVar6 + 8;
              lVar34 = lVar6 + 8 + uVar21 + uVar9;
              lVar28 = 0;
              do {
                puVar27 = (uint64_t *)(lVar34 + lVar28);
                if (puVar1 <= puVar27) {
                  puVar18 = (uint64_t *)(lVar23 + lVar28);
                  goto LAB_00eae12f;
                }
                lVar4 = lVar28 + 8;
                uVar22 = *(uint64_t *)(lVar34 + lVar28) ^ *(uint64_t *)(lVar23 + lVar28);
                lVar28 = lVar4;
              } while (uVar22 == 0);
              uVar13 = 0;
              if (uVar22 != 0) {
                for (; (uVar22 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                }
              }
              uVar13 = (uVar13 >> 3) + lVar4;
            }
            else {
              uVar13 = 0;
              if (uVar22 != 0) {
                for (; (uVar22 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                }
              }
              uVar13 = uVar13 >> 3;
            }
          }
          else {
LAB_00eae12f:
            if ((puVar27 < puVar2) && ((uint)*puVar18 == (uint)*puVar27)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
            }
            if ((puVar27 < puVar3) && ((short)*puVar18 == (short)*puVar27)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
              puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
            }
            if (puVar27 < param_3) {
              puVar27 = (uint64_t *)
                        ((int64_t)puVar27 + (uint64_t)((byte)*puVar18 == (byte)*puVar27));
            }
            uVar13 = (int64_t)puVar27 - (int64_t)puVar35;
          }
          uVar13 = uVar13 + uVar9;
          if ((uVar33 < uVar13) && (uVar33 = uVar13, iVar31 - uVar7 < uVar13)) {
            iVar31 = uVar7 + (int)uVar13;
          }
          puVar35 = (uint64_t *)(uVar21 + lVar6 + uVar13);
          puVar30 = puVar19;
          if (puVar35 == param_3) break;
          puVar30 = (uint *)(local_40 + (uint64_t)((uVar7 & uVar32) * 2) * 4);
          if (*(byte *)(lVar24 + uVar13) < (byte)*puVar35) {
            *local_48 = uVar7;
            if (uVar7 <= uVar8) {
              local_48 = local_dc;
              puVar30 = puVar19;
              break;
            }
            local_48 = puVar30 + 1;
            puVar30 = puVar19;
            puVar19 = local_48;
            local_80 = uVar13;
          }
          else {
            *puVar19 = uVar7;
            puVar19 = puVar30;
            local_a0 = uVar13;
            if (uVar7 <= uVar8) {
              puVar30 = local_dc;
              break;
            }
          }
          iVar25 = iVar25 + -1;
          if ((iVar25 == 0) || (uVar7 = *puVar19, puVar19 = puVar30, uVar7 < uVar15)) break;
        } while( true );
      }
      uVar8 = (int)uVar33 - 0x180;
      if (0xbf < uVar8) {
        uVar8 = 0xc0;
      }
      if (uVar33 < 0x181) {
        uVar8 = 0;
      }
      uVar32 = (iVar31 - uVar11) - 8;
      if (uVar32 < uVar8) {
        uVar32 = uVar8;
      }
      *puVar30 = 0;
      *local_48 = 0;
      uVar21 = (uint64_t)(uVar32 + uVar11);
    } while (uVar32 + uVar11 < uVar26);
  }
  else {
    lVar29 = *(int64_t *)(arg1 + 0x70);
    local_40 = *(int64_t *)(arg1 + 0x80);
  }
  *(uint *)(arg1 + 0x2c) = uVar26;
  uVar8 = 0xfff;
  if (*(uint *)(arg1 + 0x114) < 0xfff) {
    uVar8 = *(uint *)(arg1 + 0x114);
  }
  uVar21 = (uint64_t)((uint)*param_1 * -0x61c8864f >> (-*(char *)(arg1 + 0x108) & 0x1fU));
  uVar32 = ~(-1 << (*(char *)(arg1 + 0x104) - 1U & 0x1f));
  uVar11 = uVar26 - uVar32;
  if (uVar26 < uVar32) {
    uVar11 = 0;
  }
  uVar7 = 1 << (*(byte *)(arg1 + 0x100) & 0x1f);
  uVar12 = *(uint *)(arg1 + 0x1c);
  uVar15 = uVar26 - uVar7;
  if (uVar26 - uVar12 <= uVar7) {
    uVar15 = uVar12;
  }
  if (*(int *)(arg1 + 0x28) != 0) {
    uVar15 = uVar12;
  }
  uVar12 = uVar15;
  if (uVar15 == 0) {
    uVar12 = 1;
  }
  iVar31 = 1 << (*(byte *)(arg1 + 0x10c) & 0x1f);
  uVar7 = *(uint *)(lVar29 + uVar21 * 4);
  uVar33 = (uint64_t)(local_res10 - 1);
  if (local_res8 < 0xfffffffd) {
    iVar25 = *(int *)(arg1 + 0x18);
    puVar35 = (uint64_t *)((int64_t)param_1 + 3);
    uVar22 = (uint64_t)local_res8;
    uVar9 = 0;
    do {
      if (uVar22 == 3) {
        uVar16 = *param_4 - 1;
      }
      else {
        uVar16 = param_4[uVar22];
      }
      uVar13 = 0;
      if (((uVar16 - 1 < uVar26 - iVar25) && (uVar15 <= uVar26 - uVar16)) &&
         (((*(uint *)((int64_t)param_1 - (uint64_t)uVar16) ^ (uint)*param_1) & 0xffffff) == 0)) {
        lVar24 = -(uint64_t)uVar16;
        puVar18 = (uint64_t *)((int64_t)puVar35 + lVar24);
        puVar27 = puVar35;
        if (puVar35 < puVar1) {
          uVar13 = *puVar35 ^ *puVar18;
          if (uVar13 == 0) {
            lVar24 = lVar24 + 0xb;
            lVar34 = 0;
            do {
              puVar27 = (uint64_t *)((int64_t)param_1 + lVar34 + 0xb);
              if (puVar1 <= puVar27) {
                puVar18 = (uint64_t *)((int64_t)param_1 + lVar34 + lVar24);
                goto LAB_00eae4b7;
              }
              lVar28 = lVar34 + 8;
              uVar13 = *(uint64_t *)((int64_t)param_1 + lVar34 + 0xb) ^
                       *(uint64_t *)((int64_t)param_1 + lVar34 + lVar24);
              lVar34 = lVar28;
            } while (uVar13 == 0);
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            iVar20 = (int)(uVar14 >> 3) + (int)lVar28;
          }
          else {
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            iVar20 = (int)(uVar14 >> 3);
          }
        }
        else {
LAB_00eae4b7:
          if ((puVar27 < puVar2) && ((uint)*puVar18 == (uint)*puVar27)) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
          }
          if ((puVar27 < puVar3) && ((short)*puVar18 == (short)*puVar27)) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
          }
          if (puVar27 < param_3) {
            puVar27 = (uint64_t *)
                      ((int64_t)puVar27 + (uint64_t)((byte)*puVar18 == (byte)*puVar27));
          }
          iVar20 = (int)puVar27 - (int)puVar35;
        }
        uVar13 = (uint64_t)(iVar20 + 3);
      }
      if (uVar33 < uVar13) {
        this_ptr[uVar9 * 2] = (1 - local_res8) + (int)uVar22;
        this_ptr[uVar9 * 2 + 1] = (uint)uVar13;
        uVar9 = (uint64_t)((int)uVar9 + 1);
        if (uVar8 < (uint)uVar13) {
          return uVar9;
        }
        uVar33 = uVar13;
        if ((uint64_t *)((int64_t)param_1 + uVar13) == param_3) {
          return uVar9;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < local_res8 + 3);
  }
  else {
    uVar9 = 0;
  }
  if (uVar33 < 3) {
    lVar24 = *(int64_t *)(arg1 + 0x78);
    uVar13 = (uint64_t)*param_2;
    uVar22 = *param_1;
    bVar10 = 0x20 - (char)*(void*)(arg1 + 0x30);
    if (*param_2 < uVar26) {
      do {
        *(int *)(lVar24 + (uint64_t)
                          ((uint)(*(int *)(lVar6 + uVar13) * 0x35a7bd00) >> (bVar10 & 0x1f)) * 4) =
             (int)uVar13;
        uVar13 = uVar13 + 1;
      } while (((int64_t)param_1 - lVar6 & 0xffffffffU) != uVar13);
    }
    *param_2 = uVar26;
    uVar15 = *(uint *)(lVar24 + (uint64_t)((uint)uVar22 * 0x35a7bd00 >> (bVar10 & 0x1f)) * 4);
    uVar22 = (uint64_t)uVar15;
    if ((uVar12 <= uVar15) && (uVar26 - uVar15 < 0x40000)) {
      puVar35 = (uint64_t *)(lVar6 + uVar22);
      puVar18 = param_1;
      if (param_1 < puVar1) {
        uVar13 = *param_1 ^ *puVar35;
        if (uVar13 == 0) {
          lVar24 = 0;
          do {
            if (puVar1 <= (uint64_t *)((int64_t)param_1 + lVar24 + 8)) {
              puVar35 = (uint64_t *)(lVar24 + uVar22 + lVar6 + 8);
              puVar18 = (uint64_t *)((int64_t)param_1 + lVar24 + 8);
              goto LAB_00eae636;
            }
            lVar34 = lVar24 + 8;
            uVar13 = *(uint64_t *)((int64_t)param_1 + lVar24 + 8) ^
                     *(uint64_t *)(uVar22 + lVar6 + 8 + lVar24);
            lVar24 = lVar34;
          } while (uVar13 == 0);
          uVar22 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
            }
          }
          uVar22 = (uVar22 >> 3) + lVar34;
        }
        else {
          uVar22 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
            }
          }
          uVar22 = uVar22 >> 3;
        }
      }
      else {
LAB_00eae636:
        if ((puVar18 < puVar2) && ((uint)*puVar35 == (uint)*puVar18)) {
          puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
          puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
        }
        if ((puVar18 < puVar3) && ((short)*puVar35 == (short)*puVar18)) {
          puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
          puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
        }
        if (puVar18 < param_3) {
          puVar18 = (uint64_t *)((int64_t)puVar18 + (uint64_t)((byte)*puVar35 == (byte)*puVar18))
          ;
        }
        uVar22 = (int64_t)puVar18 - (int64_t)param_1;
      }
      if (2 < uVar22) {
        *this_ptr = (uVar26 - uVar15) + 3;
        this_ptr[1] = (int)uVar22;
        if ((uVar8 < uVar22) ||
           (uVar9 = 1, uVar33 = uVar22, (uint64_t *)((int64_t)param_1 + uVar22) == param_3)) {
          iVar25 = uVar26 + 1;
          uVar9 = 1;
          goto LAB_00eae74b;
        }
      }
    }
  }
  uVar22 = (uint64_t)((uVar32 & uVar26) * 2);
  local_38 = (uint *)(local_40 + uVar22 * 4);
  puVar30 = (uint *)(local_40 + uVar22 * 4 + 4);
  iVar25 = uVar26 + 9;
  *(uint *)(lVar29 + uVar21 * 4) = uVar26;
  if (uVar12 <= uVar7) {
    uVar21 = 0;
    uVar22 = 0;
    do {
      uVar13 = uVar22;
      if (uVar21 < uVar22) {
        uVar13 = uVar21;
      }
      lVar29 = lVar6 + (uint64_t)uVar7;
      puVar27 = (uint64_t *)((int64_t)param_1 + uVar13);
      puVar35 = (uint64_t *)(lVar29 + uVar13);
      puVar18 = puVar27;
      if (puVar27 < puVar1) {
        uVar14 = *puVar27 ^ *puVar35;
        if (uVar14 == 0) {
          lVar34 = uVar7 + uVar13 + lVar6 + 8;
          lVar24 = 0;
          do {
            puVar18 = (uint64_t *)((int64_t)param_1 + lVar24 + uVar13 + 8);
            if (puVar1 <= puVar18) {
              puVar35 = (uint64_t *)(lVar34 + lVar24);
              goto LAB_00eae7e8;
            }
            lVar28 = lVar24 + 8;
            uVar14 = *(uint64_t *)((int64_t)param_1 + lVar24 + uVar13 + 8) ^
                     *(uint64_t *)(lVar34 + lVar24);
            lVar24 = lVar28;
          } while (uVar14 == 0);
          uVar17 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
            }
          }
          uVar17 = (uVar17 >> 3) + lVar28;
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
LAB_00eae7e8:
        if ((puVar18 < puVar2) && ((uint)*puVar35 == (uint)*puVar18)) {
          puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
          puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
        }
        if ((puVar18 < puVar3) && ((short)*puVar35 == (short)*puVar18)) {
          puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
          puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
        }
        if (puVar18 < param_3) {
          puVar18 = (uint64_t *)((int64_t)puVar18 + (uint64_t)((byte)*puVar35 == (byte)*puVar18))
          ;
        }
        uVar17 = (int64_t)puVar18 - (int64_t)puVar27;
      }
      uVar17 = uVar17 + uVar13;
      if (uVar33 < uVar17) {
        iVar20 = uVar7 + (int)uVar17;
        if (uVar17 <= iVar25 - uVar7) {
          iVar20 = iVar25;
        }
        iVar25 = iVar20;
        this_ptr[uVar9 * 2] = (uVar26 + 3) - uVar7;
        this_ptr[uVar9 * 2 + 1] = (int)uVar17;
        uVar9 = (uint64_t)((int)uVar9 + 1);
        if ((0x1000 < uVar17) ||
           (uVar33 = uVar17, (uint64_t *)((int64_t)param_1 + uVar17) == param_3)) break;
      }
      puVar19 = (uint *)(local_40 + (uint64_t)((uVar7 & uVar32) * 2) * 4);
      if (*(byte *)(lVar29 + uVar17) < *(byte *)((int64_t)param_1 + uVar17)) {
        *local_38 = uVar7;
        if (uVar7 <= uVar11) {
          local_38 = &local_e0;
          break;
        }
        puVar19 = puVar19 + 1;
        uVar21 = uVar17;
        uVar17 = uVar22;
        local_38 = puVar19;
      }
      else {
        *puVar30 = uVar7;
        puVar30 = puVar19;
        if (uVar7 <= uVar11) {
          puVar30 = &local_e0;
          break;
        }
      }
      iVar31 = iVar31 + -1;
      if ((iVar31 == 0) || (uVar7 = *puVar19, uVar22 = uVar17, uVar7 < uVar12)) break;
    } while( true );
  }
  *puVar30 = 0;
  *local_38 = 0;
  iVar25 = iVar25 + -8;
LAB_00eae74b:
  *(int *)(arg1 + 0x2c) = iVar25;
  return uVar9;
}


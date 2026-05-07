// Function: FUN_00ee3679
// Address: 00ee3679
// Size: 2784 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ee3679(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  void*puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint *puVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  uint uVar20;
  int iVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  uint64_t uVar24;
  uint64_t *puVar25;
  uint64_t uVar26;
  int64_t lVar27;
  int64_t *arg1;
  uint64_t *puVar28;
  int64_t lVar29;
  uint uVar30;
  int64_t this_ptr;
  int64_t lVar31;
  uint64_t *puVar32;
  byte bVar33;
  int iVar34;
  uint64_t uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  uint64_t *puVar39;
  uint uVar40;
  uint local_100;
  uint local_fc [5];
  uint local_e8;
  uint64_t local_d8;
  uint64_t *local_d0;
  int64_t local_c8;
  int64_t local_c0;
  uint64_t *local_b8;
  uint64_t local_b0;
  uint64_t local_a0;
  int64_t local_98;
  uint64_t *local_88;
  uint64_t *local_80;
  uint64_t local_78;
  uint64_t *local_70;
  uint local_50;
  uint *local_40;
  
  lVar5 = *(int64_t *)(this_ptr + 8);
  uVar26 = (uint64_t)*(uint *)(this_ptr + 0x2c);
  if (arg1 < (int64_t *)(lVar5 + uVar26)) {
    return 0;
  }
  lVar6 = *(int64_t *)(this_ptr + 0x70);
  local_98 = *(int64_t *)(this_ptr + 0x80);
  uVar40 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
  local_d8 = (int64_t)arg1 - lVar5;
  bVar33 = 0x40 - (char)*(void*)(this_ptr + 0x108);
  if (*(uint *)(this_ptr + 0x2c) < (uint)local_d8) {
    do {
      uVar12 = (uint64_t)(*(int64_t *)(lVar5 + uVar26) * -0x30e4432340650000) >> (bVar33 & 0x3f);
      uVar3 = *(void*)(lVar6 + uVar12 * 4);
      uVar13 = (uint64_t)(((uint)uVar26 & uVar40) * 2);
      *(uint *)(lVar6 + uVar12 * 4) = (uint)uVar26;
      *(void*)(local_98 + uVar13 * 4) = uVar3;
      *(void*)(local_98 + 4 + uVar13 * 4) = 1;
      uVar26 = uVar26 + 1;
    } while ((local_d8 & 0xffffffff) != uVar26);
    bVar33 = 0x40 - (char)*(void*)(this_ptr + 0x108);
    uVar40 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
  }
  *(uint *)(this_ptr + 0x2c) = (uint)local_d8;
  lVar7 = *arg1;
  uVar26 = (uint64_t)(lVar7 * -0x30e4432340650000) >> (bVar33 & 0x3f);
  uVar10 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar11 = *(uint *)(this_ptr + 0x1c);
  uVar20 = (uint)local_d8 - uVar10;
  if ((uint)local_d8 - uVar11 <= uVar10) {
    uVar20 = uVar11;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar20 = uVar11;
  }
  uVar11 = 0;
  uVar10 = (uint)local_d8 - uVar40;
  if ((uint)local_d8 < uVar40) {
    uVar10 = uVar11;
  }
  local_a0 = (uint64_t)uVar20;
  local_b0 = (uint64_t)uVar10;
  uVar37 = uVar20;
  if (uVar20 < uVar10) {
    uVar37 = uVar10;
  }
  local_50 = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
  uVar4 = *(uint *)(lVar6 + uVar26 * 4);
  local_78 = (uint64_t)uVar37;
  uVar36 = local_50;
  local_b8 = param_1;
  local_70 = param_2;
  if (uVar37 < uVar4) {
    do {
      local_e8 = uVar4;
      uVar12 = (uint64_t)((local_e8 & uVar40) * 2);
      iVar34 = *(int *)(local_98 + 4 + uVar12 * 4);
      if ((iVar34 != 1) || (uVar36 < 2)) {
        if (iVar34 == 1) {
          *(void*)(local_98 + uVar12 * 4) = 0;
        }
        local_e8 = uVar11;
        if (uVar11 == 0) goto LAB_00ee3ae6;
        break;
      }
      *(uint *)(local_98 + 4 + uVar12 * 4) = uVar11;
      uVar36 = uVar36 - 1;
      uVar4 = *(uint *)(local_98 + uVar12 * 4);
      uVar11 = local_e8;
    } while (uVar37 < uVar4);
    local_c0 = *(int64_t *)(this_ptr + 0x10);
    local_c8 = lVar5 + 8;
    do {
      uVar12 = (uint64_t)local_e8;
      puVar28 = (uint64_t *)((uint64_t)*(uint *)(this_ptr + 0x18) + local_c0);
      lVar16 = local_c0;
      if (*(uint *)(this_ptr + 0x18) <= local_e8) {
        puVar28 = local_70;
        lVar16 = lVar5;
      }
      uVar20 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
      uVar13 = (uint64_t)((local_e8 & uVar20) * 2);
      uVar10 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
      uVar11 = local_e8 - uVar10;
      if (local_e8 - *(uint *)(this_ptr + 0x1c) <= uVar10) {
        uVar11 = *(uint *)(this_ptr + 0x1c);
      }
      local_e8 = *(uint *)(local_98 + (uint64_t)((local_e8 & uVar40) * 2 + 1) * 4);
      local_80 = (uint64_t *)(local_98 + uVar13 * 4);
      puVar38 = (uint *)(local_98 + uVar13 * 4 + 4);
      if ((uVar36 != 0) && (uVar10 = *(uint *)(local_98 + uVar13 * 4), uVar11 < uVar10)) {
        lVar27 = lVar16 + uVar12;
        uVar13 = 0;
        uVar22 = 0;
        uVar37 = uVar36;
        do {
          uVar14 = uVar22;
          if (uVar13 < uVar22) {
            uVar14 = uVar13;
          }
          lVar31 = lVar5 + (uint64_t)uVar10;
          puVar18 = (uint64_t *)(lVar27 + uVar14);
          puVar25 = (uint64_t *)(lVar31 + uVar14);
          puVar23 = puVar18;
          if (puVar18 < (uint64_t *)((int64_t)puVar28 - 7U)) {
            uVar17 = *puVar18 ^ *puVar25;
            if (uVar17 == 0) {
              lVar29 = uVar10 + uVar14 + local_c8;
              lVar2 = uVar12 + lVar16 + 8 + uVar14;
              lVar19 = 0;
              do {
                puVar23 = (uint64_t *)(lVar2 + lVar19);
                if ((uint64_t *)((int64_t)puVar28 - 7U) <= puVar23) {
                  puVar25 = (uint64_t *)(lVar29 + lVar19);
                  goto LAB_00ee3975;
                }
                lVar1 = lVar19 + 8;
                uVar17 = *(uint64_t *)(lVar2 + lVar19) ^ *(uint64_t *)(lVar29 + lVar19);
                lVar19 = lVar1;
              } while (uVar17 == 0);
              uVar35 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                }
              }
              uVar35 = (uVar35 >> 3) + lVar1;
            }
            else {
              uVar35 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                }
              }
              uVar35 = uVar35 >> 3;
            }
          }
          else {
LAB_00ee3975:
            if ((puVar23 < (uint64_t *)((int64_t)puVar28 - 3U)) &&
               ((int)*puVar25 == (int)*puVar23)) {
              puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            }
            if ((puVar23 < (uint64_t *)((int64_t)puVar28 + -1)) &&
               ((short)*puVar25 == (short)*puVar23)) {
              puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
            }
            if (puVar23 < puVar28) {
              puVar23 = (uint64_t *)
                        ((int64_t)puVar23 + (uint64_t)((byte)*puVar25 == (byte)*puVar23));
            }
            uVar35 = (int64_t)puVar23 - (int64_t)puVar18;
          }
          uVar35 = uVar35 + uVar14;
          puVar18 = (uint64_t *)(lVar27 + uVar35);
          if (puVar18 == puVar28) break;
          puVar15 = (uint *)(local_98 + (uint64_t)((uVar10 & uVar20) * 2) * 4);
          if (*(byte *)(lVar31 + uVar35) < (byte)*puVar18) {
            *(uint *)local_80 = uVar10;
            if (uVar10 <= (uint)local_78) {
              local_80 = (uint64_t *)&local_100;
              break;
            }
            puVar15 = puVar15 + 1;
            uVar13 = uVar35;
            uVar35 = uVar22;
            local_80 = (uint64_t *)puVar15;
          }
          else {
            *puVar38 = uVar10;
            puVar38 = puVar15;
            if (uVar10 <= (uint)local_78) {
              puVar38 = &local_100;
              break;
            }
          }
          uVar37 = uVar37 - 1;
          if ((uVar37 == 0) || (uVar10 = *puVar15, uVar22 = uVar35, uVar10 <= uVar11)) break;
        } while( true );
      }
      *puVar38 = 0;
      *(uint *)local_80 = 0;
      uVar36 = uVar36 + 1;
      uVar20 = (uint)local_a0;
      uVar10 = (uint)local_b0;
    } while (local_e8 != 0);
  }
LAB_00ee3ae6:
  local_b0._0_4_ = uVar10;
  local_a0._0_4_ = uVar20;
  uVar12 = (uint64_t)((uVar40 & (uint)local_d8) * 2);
  local_40 = (uint *)(local_98 + uVar12 * 4);
  iVar34 = (uint)local_d8 + 9;
  uVar11 = *(uint *)(lVar6 + uVar26 * 4);
  *(uint *)(lVar6 + uVar26 * 4) = (uint)local_d8;
  local_88 = (uint64_t *)((int64_t)local_70 - 7);
  local_80 = (uint64_t *)((int64_t)local_70 - 3);
  local_d0 = (uint64_t *)((int64_t)local_70 + -1);
  if ((uint)local_a0 < uVar11) {
    puVar38 = (uint *)(local_98 + uVar12 * 4 + 4);
    uVar26 = 0;
    uVar12 = 0;
    uVar13 = 0;
LAB_00ee3b74:
    uVar22 = uVar12;
    if (uVar13 < uVar12) {
      uVar22 = uVar13;
    }
    lVar6 = lVar5 + (uint64_t)uVar11;
    puVar28 = (uint64_t *)((int64_t)arg1 + uVar22);
    puVar18 = (uint64_t *)(lVar6 + uVar22);
    puVar25 = puVar28;
    if (puVar28 < local_88) {
      uVar14 = *puVar28 ^ *puVar18;
      if (uVar14 == 0) {
        lVar27 = uVar11 + uVar22 + lVar5 + 8;
        lVar16 = 0;
        do {
          puVar25 = (uint64_t *)((int64_t)arg1 + lVar16 + uVar22 + 8);
          if (local_88 <= puVar25) {
            puVar18 = (uint64_t *)(lVar27 + lVar16);
            goto LAB_00ee3bac;
          }
          lVar31 = lVar16 + 8;
          uVar14 = *(uint64_t *)((int64_t)arg1 + lVar16 + uVar22 + 8) ^
                   *(uint64_t *)(lVar27 + lVar16);
          lVar16 = lVar31;
        } while (uVar14 == 0);
        uVar17 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
        uVar17 = (uVar17 >> 3) + lVar31;
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
LAB_00ee3bac:
      if ((puVar25 < local_80) && ((int)*puVar18 == (int)*puVar25)) {
        puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
        puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
      }
      if ((puVar25 < local_d0) && ((short)*puVar18 == (short)*puVar25)) {
        puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
        puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
      }
      if (puVar25 < local_70) {
        puVar25 = (uint64_t *)((int64_t)puVar25 + (uint64_t)((byte)*puVar18 == (byte)*puVar25));
      }
      uVar17 = (int64_t)puVar25 - (int64_t)puVar28;
    }
    uVar17 = uVar17 + uVar22;
    if (uVar26 < uVar17) {
      if (iVar34 - uVar11 < uVar17) {
        iVar34 = uVar11 + (int)uVar17;
      }
      uVar20 = ((uint)local_d8 - uVar11) + 1;
      uVar10 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> uVar10 == 0; uVar10 = uVar10 - 1) {
        }
      }
      uVar20 = 0x1f;
      if ((uint)*local_b8 != 0) {
        for (; (uint)*local_b8 >> uVar20 == 0; uVar20 = uVar20 - 1) {
        }
      }
      if ((int)((uVar20 ^ 0x1f) - (uVar10 ^ 0x1f)) < ((int)uVar17 - (int)uVar26) * 4) {
        *local_b8 = (uint64_t)(((uint)local_d8 - uVar11) + 3);
        uVar26 = uVar17;
      }
      if ((uint64_t *)((int64_t)arg1 + uVar17) == local_70) {
        *puVar38 = 0;
        *local_40 = 0;
        goto LAB_00ee413f;
      }
    }
    puVar15 = (uint *)(local_98 + (uint64_t)((uVar11 & uVar40) * 2) * 4);
    if (*(byte *)((int64_t)arg1 + uVar17) <= *(byte *)(lVar6 + uVar17)) {
      *puVar38 = uVar11;
      puVar38 = puVar15;
      uVar12 = uVar17;
      if (uVar11 <= (uint)local_b0) {
        puVar38 = local_fc;
        goto LAB_00ee3d66;
      }
LAB_00ee3cb8:
      local_50 = local_50 - 1;
      if ((local_50 == 0) || (uVar11 = *puVar15, uVar11 <= (uint)local_a0)) goto LAB_00ee3d66;
      goto LAB_00ee3b74;
    }
    *local_40 = uVar11;
    if ((uint)local_b0 < uVar11) {
      puVar15 = puVar15 + 1;
      uVar13 = uVar17;
      local_40 = puVar15;
      goto LAB_00ee3cb8;
    }
    local_40 = local_fc;
LAB_00ee3d66:
    *puVar38 = 0;
    *local_40 = 0;
    if (local_50 == 0) goto LAB_00ee413f;
  }
  else {
    local_40[0] = 0;
    local_40[1] = 0;
    uVar26 = 0;
  }
  puVar8 = *(void**)(this_ptr + 0xf8);
  pbVar9 = (byte *)*puVar8;
  lVar6 = puVar8[1];
  uVar40 = *(uint *)((int64_t)puVar8 + 0x1c);
  uVar20 = ~(-1 << (*(char *)((int64_t)puVar8 + 0x104) - 1U & 0x1f));
  iVar21 = (int)((int64_t)pbVar9 - lVar6);
  uVar11 = iVar21 - uVar20;
  if (iVar21 - uVar40 <= uVar20) {
    uVar11 = uVar40;
  }
  uVar10 = *(uint *)(puVar8[0xe] +
                    ((uint64_t)(lVar7 * -0x30e4432340650000) >> (-*(char *)(puVar8 + 0x21) & 0x3fU)
                    ) * 4);
  if (uVar40 < uVar10) {
    puVar28 = (uint64_t *)(lVar5 + (uint64_t)*(uint *)(this_ptr + 0x18));
    uVar37 = *(int *)(this_ptr + 0x1c) - iVar21;
    lVar7 = puVar8[0x10];
    lVar16 = (uint64_t)*(uint *)(this_ptr + 0x18) + lVar5 + 8;
    uVar13 = 0;
    uVar12 = 0;
    do {
      uVar22 = uVar13;
      if (uVar12 < uVar13) {
        uVar22 = uVar12;
      }
      uVar14 = (uint64_t)uVar10;
      puVar18 = (uint64_t *)((int64_t)arg1 + uVar22);
      puVar25 = (uint64_t *)(lVar6 + uVar14 + uVar22);
      puVar23 = (uint64_t *)(((int64_t)pbVar9 - (int64_t)puVar25) + (int64_t)puVar18);
      if (local_70 <= puVar23) {
        puVar23 = local_70;
      }
      puVar32 = puVar25;
      puVar39 = puVar18;
      if (puVar18 < (uint64_t *)((int64_t)puVar23 - 7U)) {
        uVar17 = *puVar18 ^ *puVar25;
        if (uVar17 == 0) {
          lVar31 = uVar22 + uVar14 + lVar6 + 8;
          lVar27 = 0;
          do {
            puVar39 = (uint64_t *)((int64_t)arg1 + lVar27 + uVar22 + 8);
            if ((uint64_t *)((int64_t)puVar23 - 7U) <= puVar39) {
              puVar32 = (uint64_t *)(lVar31 + lVar27);
              goto LAB_00ee3f37;
            }
            lVar2 = lVar27 + 8;
            uVar17 = *(uint64_t *)((int64_t)arg1 + lVar27 + uVar22 + 8) ^
                     *(uint64_t *)(lVar31 + lVar27);
            lVar27 = lVar2;
          } while (uVar17 == 0);
          uVar35 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = (uVar35 >> 3) + lVar2;
        }
        else {
          uVar35 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = uVar35 >> 3;
        }
      }
      else {
LAB_00ee3f37:
        if ((puVar39 < (uint64_t *)((int64_t)puVar23 - 3U)) && ((int)*puVar32 == (int)*puVar39)) {
          puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
          puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
        }
        if ((puVar39 < (uint64_t *)((int64_t)puVar23 - 1U)) &&
           ((short)*puVar32 == (short)*puVar39)) {
          puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
          puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
        }
        if (puVar39 < puVar23) {
          puVar39 = (uint64_t *)((int64_t)puVar39 + (uint64_t)((byte)*puVar32 == (byte)*puVar39))
          ;
        }
        uVar35 = (int64_t)puVar39 - (int64_t)puVar18;
      }
      if ((byte *)((int64_t)puVar25 + uVar35) == pbVar9) {
        puVar18 = (uint64_t *)((int64_t)puVar18 + uVar35);
        puVar25 = puVar18;
        puVar23 = puVar28;
        if (puVar18 < local_88) {
          uVar17 = *puVar18 ^ *puVar28;
          if (uVar17 == 0) {
            lVar27 = uVar22 + uVar35 + 8;
            lVar31 = 0;
            do {
              puVar25 = (uint64_t *)((int64_t)arg1 + lVar31 + lVar27);
              if (local_88 <= puVar25) {
                puVar23 = (uint64_t *)(lVar31 + lVar16);
                goto LAB_00ee4016;
              }
              lVar2 = lVar31 + 8;
              uVar17 = *(uint64_t *)((int64_t)arg1 + lVar31 + lVar27) ^
                       *(uint64_t *)(lVar16 + lVar31);
              lVar31 = lVar2;
            } while (uVar17 == 0);
            uVar24 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
              }
            }
            uVar24 = (uVar24 >> 3) + lVar2;
          }
          else {
            uVar24 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
              }
            }
            uVar24 = uVar24 >> 3;
          }
        }
        else {
LAB_00ee4016:
          if ((puVar25 < local_80) && ((int)*puVar23 == (int)*puVar25)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
          }
          if ((puVar25 < local_d0) && ((short)*puVar23 == (short)*puVar25)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
          }
          if (puVar25 < local_70) {
            puVar25 = (uint64_t *)
                      ((int64_t)puVar25 + (uint64_t)((byte)*puVar23 == (byte)*puVar25));
          }
          uVar24 = (int64_t)puVar25 - (int64_t)puVar18;
        }
        uVar35 = uVar35 + uVar24;
      }
      uVar35 = uVar35 + uVar22;
      lVar27 = uVar14 + uVar37 + lVar5;
      if (uVar14 + uVar35 < ((int64_t)pbVar9 - lVar6 & 0xffffffffU)) {
        lVar27 = lVar6 + uVar14;
      }
      if (uVar26 < uVar35) {
        iVar21 = (uint)local_d8 - (uVar37 + uVar10);
        uVar4 = iVar21 + 1;
        uVar36 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar36 == 0; uVar36 = uVar36 - 1) {
          }
        }
        uVar30 = (uint)*local_b8 + 1;
        uVar4 = 0x1f;
        if (uVar30 != 0) {
          for (; uVar30 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        if ((int)((uVar4 ^ 0x1f) - (uVar36 ^ 0x1f)) < ((int)uVar35 - (int)uVar26) * 4) {
          *local_b8 = (uint64_t)(iVar21 + 3);
          uVar26 = uVar35;
        }
        if ((uint64_t *)((int64_t)arg1 + uVar35) == local_70) break;
      }
      puVar38 = (uint *)(lVar7 + (uint64_t)((uVar10 & uVar20) * 2) * 4);
      if (*(byte *)(lVar27 + uVar35) < *(byte *)((int64_t)arg1 + uVar35)) {
        if (uVar10 <= uVar11) break;
        puVar38 = puVar38 + 1;
        uVar12 = uVar35;
      }
      else {
        uVar13 = uVar35;
        if (uVar10 <= uVar11) break;
      }
      local_50 = local_50 - 1;
      if ((local_50 == 0) || (uVar10 = *puVar38, uVar10 <= uVar40)) break;
    } while( true );
  }
LAB_00ee413f:
  *(int *)(this_ptr + 0x2c) = iVar34 + -8;
  return uVar26;
}


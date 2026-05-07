// Function: FUN_00ee2090
// Address: 00ee2090
// Size: 2825 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ee2090(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  uint uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  uint uVar25;
  int iVar26;
  int *arg1;
  int64_t lVar27;
  uint uVar28;
  int64_t this_ptr;
  int64_t lVar29;
  uint64_t *puVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  byte bVar33;
  uint64_t uVar34;
  uint uVar35;
  uint64_t *puVar36;
  uint uVar37;
  uint *puVar38;
  uint local_100;
  uint local_fc [3];
  uint local_f0;
  int64_t local_e0;
  uint64_t local_d8;
  uint64_t *local_d0;
  int64_t local_c0;
  uint64_t *local_b8;
  uint64_t local_b0;
  int local_a0;
  int64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t *local_80;
  uint64_t *local_70;
  uint64_t *local_68;
  uint *local_60;
  uint local_3c;
  uint *local_38;
  
  lVar4 = *(int64_t *)(this_ptr + 8);
  uVar22 = (uint64_t)*(uint *)(this_ptr + 0x2c);
  if (arg1 < (int *)(lVar4 + uVar22)) {
    return 0;
  }
  lVar5 = *(int64_t *)(this_ptr + 0x70);
  local_98 = *(int64_t *)(this_ptr + 0x80);
  uVar37 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
  local_d8 = (int64_t)arg1 - lVar4;
  bVar33 = 0x20 - (char)*(void*)(this_ptr + 0x108);
  if (*(uint *)(this_ptr + 0x2c) < (uint)local_d8) {
    do {
      uVar10 = (uint64_t)((uint)(*(int *)(lVar4 + uVar22) * -0x61c8864f) >> (bVar33 & 0x1f));
      uVar2 = *(void*)(lVar5 + uVar10 * 4);
      uVar16 = (uint64_t)(((uint)uVar22 & uVar37) * 2);
      *(uint *)(lVar5 + uVar10 * 4) = (uint)uVar22;
      *(void*)(local_98 + uVar16 * 4) = uVar2;
      *(void*)(local_98 + 4 + uVar16 * 4) = 1;
      uVar22 = uVar22 + 1;
    } while ((local_d8 & 0xffffffff) != uVar22);
    bVar33 = 0x20 - (char)*(void*)(this_ptr + 0x108);
    uVar37 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
  }
  *(uint *)(this_ptr + 0x2c) = (uint)local_d8;
  uVar22 = (uint64_t)((uint)(*arg1 * -0x61c8864f) >> (bVar33 & 0x1f));
  uVar8 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar9 = *(uint *)(this_ptr + 0x1c);
  uVar21 = (uint)local_d8 - uVar8;
  if ((uint)local_d8 - uVar9 <= uVar8) {
    uVar21 = uVar9;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar21 = uVar9;
  }
  uVar9 = 0;
  uVar8 = (uint)local_d8 - uVar37;
  if ((uint)local_d8 < uVar37) {
    uVar8 = uVar9;
  }
  local_88 = (uint64_t)uVar21;
  local_b0 = (uint64_t)uVar8;
  uVar35 = uVar21;
  if (uVar21 < uVar8) {
    uVar35 = uVar8;
  }
  local_3c = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
  uVar3 = *(uint *)(lVar5 + uVar22 * 4);
  local_80 = (uint64_t *)(uint64_t)uVar35;
  local_90 = (uint64_t)uVar37;
  uVar25 = local_3c;
  local_b8 = param_1;
  local_68 = param_2;
  if (uVar35 < uVar3) {
    do {
      local_f0 = uVar3;
      uVar10 = (uint64_t)((local_f0 & uVar37) * 2);
      iVar26 = *(int *)(local_98 + 4 + uVar10 * 4);
      if ((iVar26 != 1) || (uVar25 < 2)) {
        if (iVar26 == 1) {
          *(void*)(local_98 + uVar10 * 4) = 0;
        }
        local_f0 = uVar9;
        if (uVar9 == 0) goto LAB_00ee2500;
        break;
      }
      *(uint *)(local_98 + 4 + uVar10 * 4) = uVar9;
      uVar25 = uVar25 - 1;
      uVar3 = *(uint *)(local_98 + uVar10 * 4);
      uVar9 = local_f0;
    } while (uVar35 < uVar3);
    local_c0 = *(int64_t *)(this_ptr + 0x10);
    local_e0 = lVar4 + 8;
    do {
      uVar10 = (uint64_t)local_f0;
      puVar20 = (uint64_t *)((uint64_t)*(uint *)(this_ptr + 0x18) + local_c0);
      lVar13 = local_c0;
      if (*(uint *)(this_ptr + 0x18) <= local_f0) {
        puVar20 = local_68;
        lVar13 = lVar4;
      }
      uVar21 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
      uVar16 = (uint64_t)((local_f0 & uVar21) * 2);
      uVar8 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
      uVar9 = local_f0 - uVar8;
      if (local_f0 - *(uint *)(this_ptr + 0x1c) <= uVar8) {
        uVar9 = *(uint *)(this_ptr + 0x1c);
      }
      local_f0 = *(uint *)(local_98 + (uint64_t)((local_f0 & uVar37) * 2 + 1) * 4);
      local_60 = (uint *)(local_98 + uVar16 * 4);
      puVar38 = (uint *)(local_98 + uVar16 * 4 + 4);
      if ((uVar25 != 0) && (uVar37 = *(uint *)(local_98 + uVar16 * 4), uVar9 < uVar37)) {
        lVar14 = lVar13 + uVar10;
        uVar16 = 0;
        uVar23 = 0;
        uVar8 = uVar25;
        do {
          uVar11 = uVar23;
          if (uVar16 < uVar23) {
            uVar11 = uVar16;
          }
          lVar15 = lVar4 + (uint64_t)uVar37;
          puVar18 = (uint64_t *)(lVar14 + uVar11);
          puVar32 = (uint64_t *)(lVar15 + uVar11);
          puVar24 = puVar18;
          if (puVar18 < (uint64_t *)((int64_t)puVar20 - 7U)) {
            uVar17 = *puVar18 ^ *puVar32;
            if (uVar17 == 0) {
              lVar27 = uVar37 + uVar11 + local_e0;
              lVar29 = uVar10 + lVar13 + 8 + uVar11;
              lVar19 = 0;
              do {
                puVar24 = (uint64_t *)(lVar29 + lVar19);
                if ((uint64_t *)((int64_t)puVar20 - 7U) <= puVar24) {
                  puVar32 = (uint64_t *)(lVar27 + lVar19);
                  goto LAB_00ee2385;
                }
                lVar1 = lVar19 + 8;
                uVar17 = *(uint64_t *)(lVar29 + lVar19) ^ *(uint64_t *)(lVar27 + lVar19);
                lVar19 = lVar1;
              } while (uVar17 == 0);
              uVar34 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
                }
              }
              uVar34 = (uVar34 >> 3) + lVar1;
            }
            else {
              uVar34 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
                }
              }
              uVar34 = uVar34 >> 3;
            }
          }
          else {
LAB_00ee2385:
            if ((puVar24 < (uint64_t *)((int64_t)puVar20 - 3U)) &&
               ((int)*puVar32 == (int)*puVar24)) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            }
            if ((puVar24 < (uint64_t *)((int64_t)puVar20 + -1)) &&
               ((short)*puVar32 == (short)*puVar24)) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            }
            if (puVar24 < puVar20) {
              puVar24 = (uint64_t *)
                        ((int64_t)puVar24 + (uint64_t)((byte)*puVar32 == (byte)*puVar24));
            }
            uVar34 = (int64_t)puVar24 - (int64_t)puVar18;
          }
          uVar34 = uVar34 + uVar11;
          puVar18 = (uint64_t *)(lVar14 + uVar34);
          if (puVar18 == puVar20) break;
          puVar12 = (uint *)(local_98 + (uint64_t)((uVar37 & uVar21) * 2) * 4);
          if (*(byte *)(lVar15 + uVar34) < (byte)*puVar18) {
            *local_60 = uVar37;
            if (uVar37 <= (uint)local_80) {
              local_60 = &local_100;
              break;
            }
            puVar12 = puVar12 + 1;
            uVar16 = uVar34;
            uVar34 = uVar23;
            local_60 = puVar12;
          }
          else {
            *puVar38 = uVar37;
            puVar38 = puVar12;
            if (uVar37 <= (uint)local_80) {
              puVar38 = &local_100;
              break;
            }
          }
          uVar8 = uVar8 - 1;
          if ((uVar8 == 0) || (uVar37 = *puVar12, uVar23 = uVar34, uVar37 <= uVar9)) break;
        } while( true );
      }
      *puVar38 = 0;
      *local_60 = 0;
      uVar25 = uVar25 + 1;
      uVar37 = (uint)local_90;
      uVar21 = (uint)local_88;
      uVar8 = (uint)local_b0;
    } while (local_f0 != 0);
  }
LAB_00ee2500:
  local_b0._0_4_ = uVar8;
  local_88._0_4_ = uVar21;
  local_90._0_4_ = uVar37;
  uVar10 = (uint64_t)(((uint)local_90 & (uint)local_d8) * 2);
  local_38 = (uint *)(local_98 + uVar10 * 4);
  local_a0 = (uint)local_d8 + 9;
  uVar37 = *(uint *)(lVar5 + uVar22 * 4);
  *(uint *)(lVar5 + uVar22 * 4) = (uint)local_d8;
  local_70 = (uint64_t *)((int64_t)local_68 - 7);
  local_d0 = (uint64_t *)((int64_t)local_68 - 3);
  local_80 = (uint64_t *)((int64_t)local_68 + -1);
  if ((uint)local_88 < uVar37) {
    puVar38 = (uint *)(local_98 + uVar10 * 4 + 4);
    uVar22 = 0;
    uVar10 = 0;
    uVar16 = 0;
LAB_00ee258b:
    uVar23 = uVar10;
    if (uVar16 < uVar10) {
      uVar23 = uVar16;
    }
    lVar5 = lVar4 + (uint64_t)uVar37;
    puVar20 = (uint64_t *)((int64_t)arg1 + uVar23);
    puVar18 = (uint64_t *)(lVar5 + uVar23);
    puVar32 = puVar20;
    if (puVar20 < local_70) {
      uVar11 = *puVar20 ^ *puVar18;
      if (uVar11 == 0) {
        lVar14 = uVar37 + uVar23 + lVar4 + 8;
        lVar13 = 0;
        do {
          puVar32 = (uint64_t *)((int64_t)arg1 + lVar13 + uVar23 + 8);
          if (local_70 <= puVar32) {
            puVar18 = (uint64_t *)(lVar14 + lVar13);
            goto LAB_00ee25c9;
          }
          lVar15 = lVar13 + 8;
          uVar11 = *(uint64_t *)((int64_t)arg1 + lVar13 + uVar23 + 8) ^
                   *(uint64_t *)(lVar14 + lVar13);
          lVar13 = lVar15;
        } while (uVar11 == 0);
        uVar17 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
        uVar17 = (uVar17 >> 3) + lVar15;
      }
      else {
        uVar17 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
        uVar17 = uVar17 >> 3;
      }
    }
    else {
LAB_00ee25c9:
      if ((puVar32 < local_d0) && ((int)*puVar18 == (int)*puVar32)) {
        puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
        puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
      }
      if ((puVar32 < local_80) && ((short)*puVar18 == (short)*puVar32)) {
        puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
        puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
      }
      if (puVar32 < local_68) {
        puVar32 = (uint64_t *)((int64_t)puVar32 + (uint64_t)((byte)*puVar18 == (byte)*puVar32));
      }
      uVar17 = (int64_t)puVar32 - (int64_t)puVar20;
    }
    uVar17 = uVar17 + uVar23;
    if (uVar22 < uVar17) {
      if (local_a0 - uVar37 < uVar17) {
        local_a0 = (int)uVar17 + uVar37;
      }
      uVar9 = ((uint)local_d8 - uVar37) + 1;
      uVar21 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> uVar21 == 0; uVar21 = uVar21 - 1) {
        }
      }
      uVar9 = 0x1f;
      if ((uint)*local_b8 != 0) {
        for (; (uint)*local_b8 >> uVar9 == 0; uVar9 = uVar9 - 1) {
        }
      }
      if ((int)((uVar9 ^ 0x1f) - (uVar21 ^ 0x1f)) < ((int)uVar17 - (int)uVar22) * 4) {
        *local_b8 = (uint64_t)(((uint)local_d8 - uVar37) + 3);
        uVar22 = uVar17;
      }
      if ((uint64_t *)((int64_t)arg1 + uVar17) == local_68) {
        *puVar38 = 0;
        *local_38 = 0;
        goto LAB_00ee2b7b;
      }
    }
    puVar12 = (uint *)(local_98 + (uint64_t)((uVar37 & (uint)local_90) * 2) * 4);
    if (*(byte *)((int64_t)arg1 + uVar17) <= *(byte *)(lVar5 + uVar17)) {
      *puVar38 = uVar37;
      puVar38 = puVar12;
      uVar10 = uVar17;
      if (uVar37 <= (uint)local_b0) {
        puVar38 = local_fc;
        goto LAB_00ee27a1;
      }
LAB_00ee26e8:
      local_3c = local_3c - 1;
      if ((local_3c == 0) || (uVar37 = *puVar12, uVar37 <= (uint)local_88)) goto LAB_00ee27a1;
      goto LAB_00ee258b;
    }
    *local_38 = uVar37;
    if ((uint)local_b0 < uVar37) {
      puVar12 = puVar12 + 1;
      uVar16 = uVar17;
      local_38 = puVar12;
      goto LAB_00ee26e8;
    }
    local_38 = local_fc;
LAB_00ee27a1:
    *puVar38 = 0;
    *local_38 = 0;
    if (local_3c == 0) goto LAB_00ee2b7b;
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    uVar22 = 0;
  }
  puVar6 = *(void**)(this_ptr + 0xf8);
  pbVar7 = (byte *)*puVar6;
  lVar5 = puVar6[1];
  uVar37 = *(uint *)((int64_t)puVar6 + 0x1c);
  uVar21 = ~(-1 << (*(char *)((int64_t)puVar6 + 0x104) - 1U & 0x1f));
  iVar26 = (int)((int64_t)pbVar7 - lVar5);
  uVar9 = iVar26 - uVar21;
  if (iVar26 - uVar37 <= uVar21) {
    uVar9 = uVar37;
  }
  uVar8 = *(uint *)(puVar6[0xe] +
                   (uint64_t)
                   ((uint)(*arg1 * -0x61c8864f) >> (-*(char *)(puVar6 + 0x21) & 0x1fU)) * 4);
  if (uVar37 < uVar8) {
    puVar20 = (uint64_t *)(lVar4 + (uint64_t)*(uint *)(this_ptr + 0x18));
    uVar35 = *(int *)(this_ptr + 0x1c) - iVar26;
    lVar13 = puVar6[0x10];
    lVar14 = (uint64_t)*(uint *)(this_ptr + 0x18) + lVar4 + 8;
    uVar10 = 0;
    uVar16 = 0;
    do {
      uVar23 = uVar16;
      if (uVar10 < uVar16) {
        uVar23 = uVar10;
      }
      uVar11 = (uint64_t)uVar8;
      puVar18 = (uint64_t *)((int64_t)arg1 + uVar23);
      puVar32 = (uint64_t *)(uVar11 + lVar5 + uVar23);
      puVar24 = (uint64_t *)(((int64_t)pbVar7 - (int64_t)puVar32) + (int64_t)puVar18);
      if (local_68 <= puVar24) {
        puVar24 = local_68;
      }
      puVar30 = puVar32;
      puVar36 = puVar18;
      if (puVar18 < (uint64_t *)((int64_t)puVar24 - 7U)) {
        uVar17 = *puVar18 ^ *puVar32;
        if (uVar17 == 0) {
          lVar29 = uVar23 + uVar11 + lVar5 + 8;
          lVar15 = 0;
          do {
            puVar36 = (uint64_t *)((int64_t)arg1 + lVar15 + uVar23 + 8);
            if ((uint64_t *)((int64_t)puVar24 - 7U) <= puVar36) {
              puVar30 = (uint64_t *)(lVar29 + lVar15);
              goto LAB_00ee2971;
            }
            lVar19 = lVar15 + 8;
            uVar17 = *(uint64_t *)((int64_t)arg1 + lVar15 + uVar23 + 8) ^
                     *(uint64_t *)(lVar29 + lVar15);
            lVar15 = lVar19;
          } while (uVar17 == 0);
          uVar34 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          uVar34 = (uVar34 >> 3) + lVar19;
        }
        else {
          uVar34 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          uVar34 = uVar34 >> 3;
        }
      }
      else {
LAB_00ee2971:
        if ((puVar36 < (uint64_t *)((int64_t)puVar24 - 3U)) && ((int)*puVar30 == (int)*puVar36)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
          puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
        }
        if ((puVar36 < (uint64_t *)((int64_t)puVar24 - 1U)) &&
           ((short)*puVar30 == (short)*puVar36)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
          puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
        }
        if (puVar36 < puVar24) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((byte)*puVar30 == (byte)*puVar36))
          ;
        }
        uVar34 = (int64_t)puVar36 - (int64_t)puVar18;
      }
      if ((byte *)((int64_t)puVar32 + uVar34) == pbVar7) {
        puVar18 = (uint64_t *)((int64_t)puVar18 + uVar34);
        puVar24 = puVar20;
        puVar32 = puVar18;
        if (puVar18 < local_70) {
          uVar17 = *puVar18 ^ *puVar20;
          if (uVar17 == 0) {
            lVar15 = uVar34 + uVar23 + 8;
            lVar29 = 0;
            do {
              puVar32 = (uint64_t *)((int64_t)arg1 + lVar29 + lVar15);
              if (local_70 <= puVar32) {
                puVar24 = (uint64_t *)(lVar29 + lVar14);
                goto LAB_00ee2a49;
              }
              lVar19 = lVar29 + 8;
              uVar17 = *(uint64_t *)((int64_t)arg1 + lVar29 + lVar15) ^
                       *(uint64_t *)(lVar14 + lVar29);
              lVar29 = lVar19;
            } while (uVar17 == 0);
            uVar31 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
              }
            }
            uVar31 = (uVar31 >> 3) + lVar19;
          }
          else {
            uVar31 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
              }
            }
            uVar31 = uVar31 >> 3;
          }
        }
        else {
LAB_00ee2a49:
          if ((puVar32 < local_d0) && ((int)*puVar24 == (int)*puVar32)) {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
          }
          if ((puVar32 < local_80) && ((short)*puVar24 == (short)*puVar32)) {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          }
          if (puVar32 < local_68) {
            puVar32 = (uint64_t *)
                      ((int64_t)puVar32 + (uint64_t)((byte)*puVar24 == (byte)*puVar32));
          }
          uVar31 = (int64_t)puVar32 - (int64_t)puVar18;
        }
        uVar34 = uVar34 + uVar31;
      }
      uVar34 = uVar34 + uVar23;
      lVar15 = uVar11 + uVar35 + lVar4;
      if (uVar34 + uVar11 < ((int64_t)pbVar7 - lVar5 & 0xffffffffU)) {
        lVar15 = uVar11 + lVar5;
      }
      if (uVar22 < uVar34) {
        iVar26 = ((uint)local_d8 - uVar35) - uVar8;
        uVar3 = iVar26 + 1;
        uVar25 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar25 == 0; uVar25 = uVar25 - 1) {
          }
        }
        uVar28 = (uint)*local_b8 + 1;
        uVar3 = 0x1f;
        if (uVar28 != 0) {
          for (; uVar28 >> uVar3 == 0; uVar3 = uVar3 - 1) {
          }
        }
        if ((int)((uVar3 ^ 0x1f) - (uVar25 ^ 0x1f)) < ((int)uVar34 - (int)uVar22) * 4) {
          *local_b8 = (uint64_t)(iVar26 + 3);
          uVar22 = uVar34;
        }
        if ((uint64_t *)((int64_t)arg1 + uVar34) == local_68) break;
      }
      puVar38 = (uint *)(lVar13 + (uint64_t)((uVar8 & uVar21) * 2) * 4);
      if (*(byte *)(lVar15 + uVar34) < *(byte *)((int64_t)arg1 + uVar34)) {
        if (uVar8 <= uVar9) break;
        puVar38 = puVar38 + 1;
        uVar10 = uVar34;
        uVar34 = uVar16;
      }
      else if (uVar8 <= uVar9) break;
      local_3c = local_3c - 1;
      if ((local_3c == 0) || (uVar8 = *puVar38, uVar16 = uVar34, uVar8 <= uVar37)) break;
    } while( true );
  }
LAB_00ee2b7b:
  *(int *)(this_ptr + 0x2c) = local_a0 + -8;
  return uVar22;
}


// Function: FUN_00ed4cbf
// Address: 00ed4cbf
// Size: 1840 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed4cbf(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint *puVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint uVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar22;
  uint64_t *puVar23;
  byte bVar24;
  uint *puVar25;
  uint uVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  uint uVar29;
  uint uVar30;
  int64_t lVar31;
  uint64_t *puVar32;
  uint local_b8;
  uint local_b4 [2];
  uint local_ac;
  uint64_t local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int64_t local_78;
  uint64_t local_70;
  uint64_t *local_68;
  uint *local_58;
  uint *local_50;
  uint64_t local_38;
  
  lVar6 = *(int64_t *)(this_ptr + 8);
  uVar20 = (uint64_t)*(uint *)(this_ptr + 0x2c);
  if (arg1 < (int64_t *)(lVar6 + uVar20)) {
    local_38 = 0;
  }
  else {
    lVar7 = *(int64_t *)(this_ptr + 0x70);
    local_78 = *(int64_t *)(this_ptr + 0x80);
    uVar29 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
    local_90 = (int64_t)arg1 - lVar6;
    bVar24 = 0x40 - (char)*(void*)(this_ptr + 0x108);
    if (*(uint *)(this_ptr + 0x2c) < (uint)local_90) {
      do {
        uVar10 = (uint64_t)(*(int64_t *)(lVar6 + uVar20) * -0x30e4432340650000) >> (bVar24 & 0x3f)
        ;
        uVar5 = *(void*)(lVar7 + uVar10 * 4);
        uVar11 = (uint64_t)(((uint)uVar20 & uVar29) * 2);
        *(uint *)(lVar7 + uVar10 * 4) = (uint)uVar20;
        *(void*)(local_78 + uVar11 * 4) = uVar5;
        *(void*)(local_78 + 4 + uVar11 * 4) = 1;
        uVar20 = uVar20 + 1;
      } while ((local_90 & 0xffffffff) != uVar20);
      bVar24 = 0x40 - (char)*(void*)(this_ptr + 0x108);
      uVar29 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
    }
    *(uint *)(this_ptr + 0x2c) = (uint)local_90;
    uVar20 = (uint64_t)(*arg1 * -0x30e4432340650000) >> (bVar24 & 0x3f);
    uVar9 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
    uVar26 = *(uint *)(this_ptr + 0x1c);
    local_84 = (uint)local_90 - uVar9;
    if ((uint)local_90 - uVar26 <= uVar9) {
      local_84 = uVar26;
    }
    if (*(int *)(this_ptr + 0x28) != 0) {
      local_84 = uVar26;
    }
    uVar26 = 0;
    local_7c = (uint)local_90 - uVar29;
    if ((uint)local_90 < uVar29) {
      local_7c = uVar26;
    }
    uVar9 = local_84;
    if (local_84 < local_7c) {
      uVar9 = local_7c;
    }
    local_80 = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
    uVar19 = *(uint *)(lVar7 + uVar20 * 4);
    local_70 = (uint64_t)uVar9;
    local_88 = local_80;
    local_68 = param_2;
    if (uVar9 < uVar19) {
      do {
        local_ac = uVar19;
        uVar10 = (uint64_t)((local_ac & uVar29) * 2);
        iVar15 = *(int *)(local_78 + 4 + uVar10 * 4);
        if ((iVar15 != 1) || (local_88 < 2)) {
          if (iVar15 == 1) {
            *(void*)(local_78 + uVar10 * 4) = 0;
          }
          local_ac = uVar26;
          if (uVar26 == 0) goto LAB_00ed515d;
          break;
        }
        *(uint *)(local_78 + 4 + uVar10 * 4) = uVar26;
        local_88 = local_88 - 1;
        uVar19 = *(uint *)(local_78 + uVar10 * 4);
        uVar26 = local_ac;
      } while (uVar9 < uVar19);
      lVar13 = *(int64_t *)(this_ptr + 0x10);
      do {
        uVar10 = (uint64_t)local_ac;
        puVar21 = (uint64_t *)((uint64_t)*(uint *)(this_ptr + 0x18) + lVar13);
        lVar31 = lVar13;
        if (*(uint *)(this_ptr + 0x18) <= local_ac) {
          puVar21 = local_68;
          lVar31 = lVar6;
        }
        uVar9 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
        uVar11 = (uint64_t)((local_ac & uVar9) * 2);
        uVar19 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
        uVar26 = local_ac - uVar19;
        if (local_ac - *(uint *)(this_ptr + 0x1c) <= uVar19) {
          uVar26 = *(uint *)(this_ptr + 0x1c);
        }
        local_ac = *(uint *)(local_78 + (uint64_t)((local_ac & uVar29) * 2 + 1) * 4);
        local_50 = (uint *)(local_78 + uVar11 * 4);
        puVar25 = (uint *)(local_78 + uVar11 * 4 + 4);
        if ((local_88 != 0) && (uVar19 = *(uint *)(local_78 + uVar11 * 4), uVar26 < uVar19)) {
          lVar2 = lVar31 + uVar10;
          uVar11 = 0;
          uVar12 = 0;
          uVar30 = local_88;
          do {
            uVar22 = uVar12;
            if (uVar11 < uVar12) {
              uVar22 = uVar11;
            }
            lVar3 = lVar6 + (uint64_t)uVar19;
            puVar32 = (uint64_t *)(lVar2 + uVar22);
            puVar23 = (uint64_t *)(lVar3 + uVar22);
            puVar28 = puVar32;
            if (puVar32 < (uint64_t *)((int64_t)puVar21 - 7U)) {
              uVar16 = *puVar32 ^ *puVar23;
              if (uVar16 == 0) {
                lVar18 = uVar19 + uVar22 + lVar6 + 8;
                lVar4 = uVar10 + lVar31 + 8 + uVar22;
                lVar17 = 0;
                do {
                  puVar28 = (uint64_t *)(lVar4 + lVar17);
                  if ((uint64_t *)((int64_t)puVar21 - 7U) <= puVar28) {
                    puVar23 = (uint64_t *)(lVar18 + lVar17);
                    goto LAB_00ed4fd3;
                  }
                  lVar1 = lVar17 + 8;
                  uVar16 = *(uint64_t *)(lVar4 + lVar17) ^ *(uint64_t *)(lVar18 + lVar17);
                  lVar17 = lVar1;
                } while (uVar16 == 0);
                uVar27 = 0;
                if (uVar16 != 0) {
                  for (; (uVar16 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                  }
                }
                uVar27 = (uVar27 >> 3) + lVar1;
              }
              else {
                uVar27 = 0;
                if (uVar16 != 0) {
                  for (; (uVar16 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                  }
                }
                uVar27 = uVar27 >> 3;
              }
            }
            else {
LAB_00ed4fd3:
              if ((puVar28 < (uint64_t *)((int64_t)puVar21 - 3U)) &&
                 ((int)*puVar23 == (int)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
              }
              if ((puVar28 < (uint64_t *)((int64_t)puVar21 + -1)) &&
                 ((short)*puVar23 == (short)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
              }
              if (puVar28 < puVar21) {
                puVar28 = (uint64_t *)
                          ((int64_t)puVar28 + (uint64_t)((byte)*puVar23 == (byte)*puVar28));
              }
              uVar27 = (int64_t)puVar28 - (int64_t)puVar32;
            }
            uVar27 = uVar27 + uVar22;
            puVar32 = (uint64_t *)(lVar2 + uVar27);
            if (puVar32 == puVar21) break;
            puVar14 = (uint *)(local_78 + (uint64_t)((uVar19 & uVar9) * 2) * 4);
            if (*(byte *)(lVar3 + uVar27) < (byte)*puVar32) {
              *local_50 = uVar19;
              if (uVar19 <= (uint)local_70) {
                local_50 = &local_b8;
                break;
              }
              puVar14 = puVar14 + 1;
              uVar11 = uVar27;
              uVar27 = uVar12;
              local_50 = puVar14;
            }
            else {
              *puVar25 = uVar19;
              puVar25 = puVar14;
              if (uVar19 <= (uint)local_70) {
                puVar25 = &local_b8;
                break;
              }
            }
            uVar30 = uVar30 - 1;
            if ((uVar30 == 0) || (uVar19 = *puVar14, uVar12 = uVar27, uVar19 <= uVar26)) break;
          } while( true );
        }
        *puVar25 = 0;
        *local_50 = 0;
        local_88 = local_88 + 1;
      } while (local_ac != 0);
    }
LAB_00ed515d:
    uVar10 = (uint64_t)((uVar29 & (uint)local_90) * 2);
    local_58 = (uint *)(local_78 + uVar10 * 4);
    puVar25 = (uint *)(local_78 + uVar10 * 4 + 4);
    iVar15 = (uint)local_90 + 9;
    uVar26 = *(uint *)(lVar7 + uVar20 * 4);
    *(uint *)(lVar7 + uVar20 * 4) = (uint)local_90;
    if (local_84 < uVar26) {
      local_38 = 0;
      uVar20 = 0;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        if (uVar20 < uVar10) {
          uVar11 = uVar20;
        }
        lVar7 = lVar6 + (uint64_t)uVar26;
        puVar21 = (uint64_t *)((int64_t)arg1 + uVar11);
        puVar32 = (uint64_t *)(lVar7 + uVar11);
        puVar23 = puVar21;
        if (puVar21 < (uint64_t *)((int64_t)local_68 - 7U)) {
          uVar12 = *puVar21 ^ *puVar32;
          if (uVar12 == 0) {
            lVar31 = uVar26 + uVar11 + lVar6 + 8;
            lVar13 = 0;
            do {
              puVar23 = (uint64_t *)((int64_t)arg1 + lVar13 + uVar11 + 8);
              if ((uint64_t *)((int64_t)local_68 - 7U) <= puVar23) {
                puVar32 = (uint64_t *)(lVar31 + lVar13);
                goto LAB_00ed5223;
              }
              lVar2 = lVar13 + 8;
              uVar12 = *(uint64_t *)((int64_t)arg1 + lVar13 + uVar11 + 8) ^
                       *(uint64_t *)(lVar31 + lVar13);
              lVar13 = lVar2;
            } while (uVar12 == 0);
            uVar22 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
              }
            }
            uVar22 = (uVar22 >> 3) + lVar2;
          }
          else {
            uVar22 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
              }
            }
            uVar22 = uVar22 >> 3;
          }
        }
        else {
LAB_00ed5223:
          if ((puVar23 < (uint64_t *)((int64_t)local_68 - 3U)) && ((int)*puVar32 == (int)*puVar23)
             ) {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
          }
          if ((puVar23 < (uint64_t *)((int64_t)local_68 - 1U)) &&
             ((short)*puVar32 == (short)*puVar23)) {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          }
          if (puVar23 < local_68) {
            puVar23 = (uint64_t *)
                      ((int64_t)puVar23 + (uint64_t)((byte)*puVar32 == (byte)*puVar23));
          }
          uVar22 = (int64_t)puVar23 - (int64_t)puVar21;
        }
        uVar22 = uVar22 + uVar11;
        if (local_38 < uVar22) {
          iVar8 = uVar26 + (int)uVar22;
          if (uVar22 <= iVar15 - uVar26) {
            iVar8 = iVar15;
          }
          iVar15 = iVar8;
          uVar9 = ((uint)local_90 - uVar26) + 1;
          uVar19 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> uVar19 == 0; uVar19 = uVar19 - 1) {
            }
          }
          uVar9 = 0x1f;
          if ((uint)*param_1 != 0) {
            for (; (uint)*param_1 >> uVar9 == 0; uVar9 = uVar9 - 1) {
            }
          }
          if ((int)((uVar9 ^ 0x1f) - (uVar19 ^ 0x1f)) < ((int)uVar22 - (int)local_38) * 4) {
            *param_1 = (uint64_t)(((uint)local_90 - uVar26) + 3);
            local_38 = uVar22;
          }
          if ((uint64_t *)((int64_t)arg1 + uVar22) == local_68) goto LAB_00ed53c5;
        }
        puVar14 = (uint *)(local_78 + (uint64_t)((uVar26 & uVar29) * 2) * 4);
        if (*(byte *)(lVar7 + uVar22) < *(byte *)((int64_t)arg1 + uVar22)) {
          *local_58 = uVar26;
          if (uVar26 <= local_7c) {
            local_58 = local_b4;
            goto LAB_00ed53c5;
          }
          puVar14 = puVar14 + 1;
          uVar20 = uVar22;
          uVar22 = uVar10;
          local_58 = puVar14;
        }
        else {
          *puVar25 = uVar26;
          puVar25 = puVar14;
          if (uVar26 <= local_7c) {
            puVar25 = local_b4;
            goto LAB_00ed53c5;
          }
        }
        local_80 = local_80 - 1;
        if ((local_80 == 0) || (uVar26 = *puVar14, uVar10 = uVar22, uVar26 <= local_84))
        goto LAB_00ed53c5;
      } while( true );
    }
    local_38 = 0;
LAB_00ed53c5:
    *puVar25 = 0;
    *local_58 = 0;
    *(int *)(this_ptr + 0x2c) = iVar15 + -8;
  }
  return local_38;
}


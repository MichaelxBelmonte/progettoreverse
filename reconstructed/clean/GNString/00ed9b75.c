// Function: FUN_00ed9b75
// Address: 00ed9b75
// Size: 3331 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed9b75(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint32_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint *puVar16;
  int iVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint uVar20;
  uint uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  int64_t lVar27;
  uint64_t uVar28;
  int64_t lVar29;
  uint uVar30;
  int *arg1;
  int64_t lVar31;
  uint64_t *puVar32;
  uint64_t *puVar33;
  int64_t this_ptr;
  int64_t lVar34;
  byte bVar35;
  int64_t lVar36;
  uint64_t *puVar37;
  uint64_t *puVar38;
  uint *puVar39;
  uint64_t uVar40;
  uint64_t *puVar41;
  uint uVar42;
  uint uVar43;
  uint64_t *puVar44;
  uint local_128;
  uint local_124 [3];
  uint64_t local_118;
  uint64_t local_108;
  uint *local_100;
  int64_t local_d8;
  uint local_d0;
  uint local_c4;
  int64_t local_b8;
  uint *local_a8;
  uint local_8c;
  uint64_t *local_80;
  uint *local_68;
  uint64_t local_40;
  
  lVar34 = *(int64_t *)(this_ptr + 8);
  uVar25 = (uint64_t)*(uint *)(this_ptr + 0x2c);
  if (arg1 < (int *)(lVar34 + uVar25)) {
    local_40 = 0;
  }
  else {
    lVar15 = *(int64_t *)(this_ptr + 0x70);
    lVar4 = *(int64_t *)(this_ptr + 0x80);
    uVar42 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
    local_108 = (int64_t)arg1 - lVar34;
    bVar35 = 0x20 - (char)*(void*)(this_ptr + 0x108);
    if (*(uint *)(this_ptr + 0x2c) < (uint)local_108) {
      do {
        uVar10 = (uint64_t)((uint)(*(int *)(lVar34 + uVar25) * -0x61c8864f) >> (bVar35 & 0x1f));
        uVar3 = *(void*)(lVar15 + uVar10 * 4);
        uVar18 = (uint64_t)(((uint)uVar25 & uVar42) * 2);
        *(uint *)(lVar15 + uVar10 * 4) = (uint)uVar25;
        *(void*)(lVar4 + uVar18 * 4) = uVar3;
        *(void*)(lVar4 + 4 + uVar18 * 4) = 1;
        uVar25 = uVar25 + 1;
      } while ((local_108 & 0xffffffff) != uVar25);
      bVar35 = 0x20 - (char)*(void*)(this_ptr + 0x108);
      uVar42 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
    }
    *(uint *)(this_ptr + 0x2c) = (uint)local_108;
    uVar25 = (uint64_t)((uint)(*arg1 * -0x61c8864f) >> (bVar35 & 0x1f));
    uVar8 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
    uVar20 = *(uint *)(this_ptr + 0x1c);
    uVar5 = (uint)local_108 - uVar8;
    if ((uint)local_108 - uVar20 <= uVar8) {
      uVar5 = uVar20;
    }
    if (*(int *)(this_ptr + 0x28) != 0) {
      uVar5 = uVar20;
    }
    uVar10 = 0;
    local_c4 = (uint)local_108 - uVar42;
    if ((uint)local_108 < uVar42) {
      local_c4 = 0;
    }
    uVar20 = uVar5;
    if (uVar5 < local_c4) {
      uVar20 = local_c4;
    }
    local_8c = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
    uVar8 = *(uint *)(lVar15 + uVar25 * 4);
    local_d0 = local_8c;
    local_d8 = lVar34;
    local_80 = param_2;
    if (uVar20 < uVar8) {
      do {
        uVar30 = uVar8;
        uVar18 = (uint64_t)((uVar30 & uVar42) * 2);
        iVar17 = *(int *)(lVar4 + 4 + uVar18 * 4);
        if ((iVar17 != 1) || (local_d0 < 2)) {
          if (iVar17 == 1) {
            *(void*)(lVar4 + uVar18 * 4) = 0;
          }
          if ((int)uVar10 == 0) goto LAB_00ed9d3a;
          goto LAB_00ed9d66;
        }
        *(int *)(lVar4 + 4 + uVar18 * 4) = (int)uVar10;
        local_d0 = local_d0 - 1;
        uVar8 = *(uint *)(lVar4 + uVar18 * 4);
        uVar10 = (uint64_t)uVar30;
      } while (uVar20 < uVar8);
      uVar10 = (uint64_t)uVar30;
LAB_00ed9d66:
      local_100 = (uint *)(this_ptr + 0x18);
      local_b8 = *(int64_t *)(this_ptr + 0x10);
      lVar11 = local_b8 + 8;
      lVar29 = lVar34 + 8;
      do {
        uVar30 = (uint)uVar10;
        uVar8 = *(uint *)(this_ptr + 0x18);
        uVar18 = (uint64_t)uVar8;
        lVar36 = lVar34;
        if (uVar30 < uVar8) {
          lVar36 = local_b8;
        }
        puVar2 = (uint64_t *)(local_b8 + uVar18);
        puVar44 = local_80;
        if (uVar30 < uVar8) {
          puVar44 = puVar2;
        }
        uVar21 = ~(-1 << (*(char *)(this_ptr + 0x104) - 1U & 0x1f));
        uVar22 = (uint64_t)((uVar30 & uVar21) * 2);
        uVar9 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
        uVar6 = uVar30 - uVar9;
        if (uVar30 - *(uint *)(this_ptr + 0x1c) <= uVar9) {
          uVar6 = *(uint *)(this_ptr + 0x1c);
        }
        local_a8 = (uint *)(lVar4 + uVar22 * 4);
        puVar39 = (uint *)(lVar4 + uVar22 * 4 + 4);
        local_118 = (uint64_t)*(uint *)(lVar4 + (uint64_t)((uVar30 & uVar42) * 2 + 1) * 4);
        if ((local_d0 != 0) && (uVar9 = *(uint *)(lVar4 + uVar22 * 4), uVar6 < uVar9)) {
          puVar32 = (uint64_t *)(lVar34 + uVar18);
          puVar33 = (uint64_t *)((int64_t)puVar44 - 7);
          lVar12 = lVar36 + uVar10 + 8;
          lVar36 = lVar36 + uVar10;
          lVar13 = lVar29 + uVar18;
          uVar10 = 0;
          uVar22 = 0;
          uVar43 = local_d0;
          do {
            uVar40 = (uint64_t)uVar9;
            uVar19 = uVar22;
            if (uVar10 < uVar22) {
              uVar19 = uVar10;
            }
            uVar23 = uVar19 + uVar40;
            if ((uVar23 < uVar18) && (uVar8 <= uVar30)) {
              puVar37 = (uint64_t *)(lVar36 + uVar19);
              puVar41 = (uint64_t *)(local_b8 + uVar40 + uVar19);
              puVar26 = (uint64_t *)(((int64_t)puVar2 - (int64_t)puVar41) + (int64_t)puVar37);
              if (puVar44 <= puVar26) {
                puVar26 = puVar44;
              }
              puVar24 = puVar37;
              puVar38 = puVar41;
              if (puVar37 < (uint64_t *)((int64_t)puVar26 - 7U)) {
                uVar14 = *puVar37 ^ *puVar41;
                if (uVar14 == 0) {
                  lVar31 = uVar23 + lVar11;
                  lVar34 = 0;
                  do {
                    puVar24 = (uint64_t *)(lVar12 + uVar19 + lVar34);
                    if ((uint64_t *)((int64_t)puVar26 - 7U) <= puVar24) {
                      puVar38 = (uint64_t *)(lVar31 + lVar34);
                      goto LAB_00eda08a;
                    }
                    lVar27 = lVar34 + 8;
                    uVar23 = *(uint64_t *)(lVar12 + uVar19 + lVar34) ^
                             *(uint64_t *)(lVar31 + lVar34);
                    lVar34 = lVar27;
                  } while (uVar23 == 0);
                  uVar14 = 0;
                  if (uVar23 != 0) {
                    for (; (uVar23 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                    }
                  }
                  uVar23 = (uVar14 >> 3) + lVar27;
                }
                else {
                  uVar23 = 0;
                  if (uVar14 != 0) {
                    for (; (uVar14 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                    }
                  }
                  uVar23 = uVar23 >> 3;
                }
              }
              else {
LAB_00eda08a:
                if ((puVar24 < (uint64_t *)((int64_t)puVar26 - 3U)) &&
                   ((int)*puVar38 == (int)*puVar24)) {
                  puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                }
                if ((puVar24 < (uint64_t *)((int64_t)puVar26 - 1U)) &&
                   ((short)*puVar38 == (short)*puVar24)) {
                  puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                }
                if (puVar24 < puVar26) {
                  puVar24 = (uint64_t *)
                            ((int64_t)puVar24 + (uint64_t)((byte)*puVar38 == (byte)*puVar24));
                }
                uVar23 = (int64_t)puVar24 - (int64_t)puVar37;
              }
              if ((uint64_t *)((int64_t)puVar41 + uVar23) == puVar2) {
                puVar37 = (uint64_t *)((int64_t)puVar37 + uVar23);
                puVar41 = puVar37;
                puVar26 = puVar32;
                if (puVar37 < puVar33) {
                  uVar14 = *puVar37 ^ *puVar32;
                  if (uVar14 == 0) {
                    lVar31 = uVar23 + uVar19 + lVar12;
                    lVar34 = 0;
                    do {
                      puVar41 = (uint64_t *)(lVar31 + lVar34);
                      if (puVar33 <= puVar41) {
                        puVar26 = (uint64_t *)(lVar34 + lVar13);
                        goto LAB_00eda192;
                      }
                      lVar27 = lVar34 + 8;
                      uVar14 = *(uint64_t *)(lVar31 + lVar34) ^ *(uint64_t *)(lVar13 + lVar34);
                      lVar34 = lVar27;
                    } while (uVar14 == 0);
                    uVar28 = 0;
                    if (uVar14 != 0) {
                      for (; (uVar14 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                      }
                    }
                    uVar28 = (uVar28 >> 3) + lVar27;
                  }
                  else {
                    uVar28 = 0;
                    if (uVar14 != 0) {
                      for (; (uVar14 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                      }
                    }
                    uVar28 = uVar28 >> 3;
                  }
                }
                else {
LAB_00eda192:
                  if ((puVar41 < (uint64_t *)((int64_t)puVar44 - 3U)) &&
                     ((int)*puVar26 == (int)*puVar41)) {
                    puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
                    puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
                  }
                  if ((puVar41 < (uint64_t *)((int64_t)puVar44 + -1)) &&
                     ((short)*puVar26 == (short)*puVar41)) {
                    puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
                    puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
                  }
                  if (puVar41 < puVar44) {
                    puVar41 = (uint64_t *)
                              ((int64_t)puVar41 + (uint64_t)((byte)*puVar26 == (byte)*puVar41));
                  }
                  uVar28 = (int64_t)puVar41 - (int64_t)puVar37;
                }
                uVar23 = uVar23 + uVar28;
              }
              uVar23 = uVar23 + uVar19;
              lVar31 = uVar40 + local_d8;
              lVar34 = local_d8;
              if (uVar23 + uVar40 < uVar18) {
                lVar31 = local_b8 + uVar40;
              }
            }
            else {
              lVar31 = lVar34;
              if (uVar23 < uVar18) {
                lVar31 = local_b8;
              }
              puVar37 = (uint64_t *)(lVar36 + uVar19);
              puVar41 = (uint64_t *)(uVar40 + lVar31 + uVar19);
              puVar26 = puVar37;
              if (puVar37 < puVar33) {
                uVar14 = *puVar37 ^ *puVar41;
                if (uVar14 == 0) {
                  lVar27 = 0;
                  do {
                    puVar26 = (uint64_t *)(lVar12 + uVar19 + lVar27);
                    if (puVar33 <= puVar26) {
                      puVar41 = (uint64_t *)(lVar27 + lVar31 + uVar23 + 8);
                      goto LAB_00ed9f81;
                    }
                    lVar1 = lVar27 + 8;
                    uVar14 = *(uint64_t *)(lVar12 + uVar19 + lVar27) ^
                             *(uint64_t *)(lVar31 + uVar23 + 8 + lVar27);
                    lVar27 = lVar1;
                  } while (uVar14 == 0);
                  uVar23 = 0;
                  if (uVar14 != 0) {
                    for (; (uVar14 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                    }
                  }
                  uVar23 = (uVar23 >> 3) + lVar1;
                }
                else {
                  uVar23 = 0;
                  if (uVar14 != 0) {
                    for (; (uVar14 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                    }
                  }
                  uVar23 = uVar23 >> 3;
                }
              }
              else {
LAB_00ed9f81:
                if ((puVar26 < (uint64_t *)((int64_t)puVar44 - 3U)) &&
                   ((int)*puVar41 == (int)*puVar26)) {
                  puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
                  puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
                }
                if ((puVar26 < (uint64_t *)((int64_t)puVar44 + -1)) &&
                   ((short)*puVar41 == (short)*puVar26)) {
                  puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
                  puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
                }
                if (puVar26 < puVar44) {
                  puVar26 = (uint64_t *)
                            ((int64_t)puVar26 + (uint64_t)((byte)*puVar41 == (byte)*puVar26));
                }
                uVar23 = (int64_t)puVar26 - (int64_t)puVar37;
              }
              uVar23 = uVar23 + uVar19;
              lVar31 = uVar40 + lVar31;
            }
            if ((uint64_t *)(lVar36 + uVar23) == puVar44) break;
            puVar16 = (uint *)(lVar4 + (uint64_t)((uVar9 & uVar21) * 2) * 4);
            if (*(byte *)(lVar31 + uVar23) < (byte)*(uint64_t *)(lVar36 + uVar23)) {
              *local_a8 = uVar9;
              if (uVar9 <= uVar20) {
                local_a8 = &local_128;
                break;
              }
              puVar16 = puVar16 + 1;
              uVar10 = uVar23;
              uVar23 = uVar22;
              local_a8 = puVar16;
            }
            else {
              *puVar39 = uVar9;
              puVar39 = puVar16;
              if (uVar9 <= uVar20) {
                puVar39 = &local_128;
                break;
              }
            }
            uVar43 = uVar43 - 1;
            if ((uVar43 == 0) || (uVar9 = *puVar16, uVar22 = uVar23, uVar9 <= uVar6)) break;
          } while( true );
        }
        *puVar39 = 0;
        *local_a8 = 0;
        local_d0 = local_d0 + 1;
        uVar10 = local_118 & 0xffffffff;
      } while ((int)local_118 != 0);
    }
    else {
LAB_00ed9d3a:
      local_100 = (uint *)(this_ptr + 0x18);
      local_b8 = *(int64_t *)(this_ptr + 0x10);
    }
    uVar18 = (uint64_t)*local_100;
    uVar10 = (uint64_t)((uVar42 & (uint)local_108) * 2);
    local_68 = (uint *)(lVar4 + uVar10 * 4);
    puVar39 = (uint *)(lVar4 + uVar10 * 4 + 4);
    iVar17 = (uint)local_108 + 9;
    uVar20 = *(uint *)(lVar15 + uVar25 * 4);
    *(uint *)(lVar15 + uVar25 * 4) = (uint)local_108;
    if (uVar5 < uVar20) {
      puVar2 = (uint64_t *)((int64_t)local_80 - 7);
      lVar15 = uVar18 + lVar34 + 8;
      local_40 = 0;
      uVar25 = 0;
      uVar10 = 0;
      do {
        uVar19 = (uint64_t)uVar20;
        uVar22 = uVar10;
        if (uVar25 < uVar10) {
          uVar22 = uVar25;
        }
        uVar40 = uVar22 + uVar19;
        if (uVar40 < uVar18) {
          puVar44 = (uint64_t *)((int64_t)arg1 + uVar22);
          puVar33 = (uint64_t *)(local_b8 + uVar19 + uVar22);
          puVar32 = (uint64_t *)
                    (((int64_t)(local_b8 + uVar18) - (int64_t)puVar33) + (int64_t)puVar44);
          if (local_80 <= puVar32) {
            puVar32 = local_80;
          }
          puVar26 = puVar33;
          puVar41 = puVar44;
          if (puVar44 < (uint64_t *)((int64_t)puVar32 - 7U)) {
            uVar23 = *puVar44 ^ *puVar33;
            if (uVar23 == 0) {
              lVar11 = uVar40 + local_b8 + 8;
              lVar29 = 0;
              do {
                puVar41 = (uint64_t *)((int64_t)arg1 + lVar29 + uVar22 + 8);
                if ((uint64_t *)((int64_t)puVar32 - 7U) <= puVar41) {
                  puVar26 = (uint64_t *)(lVar11 + lVar29);
                  goto LAB_00eda5ae;
                }
                lVar36 = lVar29 + 8;
                uVar40 = *(uint64_t *)((int64_t)arg1 + lVar29 + uVar22 + 8) ^
                         *(uint64_t *)(lVar11 + lVar29);
                lVar29 = lVar36;
              } while (uVar40 == 0);
              uVar23 = 0;
              if (uVar40 != 0) {
                for (; (uVar40 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                }
              }
              uVar40 = (uVar23 >> 3) + lVar36;
            }
            else {
              uVar40 = 0;
              if (uVar23 != 0) {
                for (; (uVar23 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
                }
              }
              uVar40 = uVar40 >> 3;
            }
          }
          else {
LAB_00eda5ae:
            if ((puVar41 < (uint64_t *)((int64_t)puVar32 - 3U)) &&
               ((int)*puVar26 == (int)*puVar41)) {
              puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
              puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
            }
            if ((puVar41 < (uint64_t *)((int64_t)puVar32 - 1U)) &&
               ((short)*puVar26 == (short)*puVar41)) {
              puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
              puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
            }
            if (puVar41 < puVar32) {
              puVar41 = (uint64_t *)
                        ((int64_t)puVar41 + (uint64_t)((byte)*puVar26 == (byte)*puVar41));
            }
            uVar40 = (int64_t)puVar41 - (int64_t)puVar44;
          }
          if ((byte *)((int64_t)puVar33 + uVar40) == (byte *)(local_b8 + uVar18)) {
            puVar44 = (uint64_t *)((int64_t)puVar44 + uVar40);
            puVar32 = (uint64_t *)(lVar34 + uVar18);
            puVar33 = puVar44;
            if (puVar44 < puVar2) {
              uVar23 = *puVar44 ^ *(uint64_t *)(lVar34 + uVar18);
              if (uVar23 == 0) {
                lVar29 = uVar22 + uVar40 + 8;
                lVar11 = 0;
                do {
                  puVar33 = (uint64_t *)((int64_t)arg1 + lVar11 + lVar29);
                  if (puVar2 <= puVar33) {
                    puVar32 = (uint64_t *)(lVar11 + lVar15);
                    goto LAB_00eda6d3;
                  }
                  lVar36 = lVar11 + 8;
                  uVar23 = *(uint64_t *)((int64_t)arg1 + lVar11 + lVar29) ^
                           *(uint64_t *)(lVar15 + lVar11);
                  lVar11 = lVar36;
                } while (uVar23 == 0);
                uVar14 = 0;
                if (uVar23 != 0) {
                  for (; (uVar23 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                  }
                }
                uVar14 = (uVar14 >> 3) + lVar36;
              }
              else {
                uVar14 = 0;
                if (uVar23 != 0) {
                  for (; (uVar23 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                  }
                }
                uVar14 = uVar14 >> 3;
              }
            }
            else {
LAB_00eda6d3:
              if ((puVar33 < (uint64_t *)((int64_t)local_80 - 3U)) &&
                 ((int)*puVar32 == (int)*puVar33)) {
                puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
                puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
              }
              if ((puVar33 < (uint64_t *)((int64_t)local_80 - 1U)) &&
                 ((short)*puVar32 == (short)*puVar33)) {
                puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
                puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
              }
              if (puVar33 < local_80) {
                puVar33 = (uint64_t *)
                          ((int64_t)puVar33 + (uint64_t)((byte)*puVar32 == (byte)*puVar33));
              }
              uVar14 = (int64_t)puVar33 - (int64_t)puVar44;
            }
            uVar40 = uVar40 + uVar14;
          }
          uVar40 = uVar40 + uVar22;
          lVar29 = uVar19 + local_d8;
          if (uVar19 + uVar40 < uVar18) {
            lVar29 = local_b8 + uVar19;
          }
        }
        else {
          lVar29 = uVar19 + local_d8;
          puVar44 = (uint64_t *)((int64_t)arg1 + uVar22);
          puVar33 = (uint64_t *)(lVar29 + uVar22);
          puVar32 = puVar44;
          if (puVar44 < puVar2) {
            uVar19 = *puVar44 ^ *puVar33;
            if (uVar19 == 0) {
              lVar36 = uVar40 + lVar34 + 8;
              lVar11 = 0;
              do {
                puVar32 = (uint64_t *)((int64_t)arg1 + lVar11 + uVar22 + 8);
                if (puVar2 <= puVar32) {
                  puVar33 = (uint64_t *)(lVar36 + lVar11);
                  goto LAB_00eda469;
                }
                lVar12 = lVar11 + 8;
                uVar19 = *(uint64_t *)((int64_t)arg1 + lVar11 + uVar22 + 8) ^
                         *(uint64_t *)(lVar36 + lVar11);
                lVar11 = lVar12;
              } while (uVar19 == 0);
              uVar40 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
                }
              }
              uVar40 = (uVar40 >> 3) + lVar12;
            }
            else {
              uVar40 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
                }
              }
              uVar40 = uVar40 >> 3;
            }
          }
          else {
LAB_00eda469:
            if ((puVar32 < (uint64_t *)((int64_t)local_80 - 3U)) &&
               ((int)*puVar33 == (int)*puVar32)) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((puVar32 < (uint64_t *)((int64_t)local_80 - 1U)) &&
               ((short)*puVar33 == (short)*puVar32)) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            }
            if (puVar32 < local_80) {
              puVar32 = (uint64_t *)
                        ((int64_t)puVar32 + (uint64_t)((byte)*puVar33 == (byte)*puVar32));
            }
            uVar40 = (int64_t)puVar32 - (int64_t)puVar44;
          }
          uVar40 = uVar40 + uVar22;
        }
        if (local_40 < uVar40) {
          iVar7 = uVar20 + (int)uVar40;
          if (uVar40 <= iVar17 - uVar20) {
            iVar7 = iVar17;
          }
          uVar8 = ((uint)local_108 - uVar20) + 1;
          uVar30 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> uVar30 == 0; uVar30 = uVar30 - 1) {
            }
          }
          uVar8 = 0x1f;
          if ((uint)*param_1 != 0) {
            for (; (uint)*param_1 >> uVar8 == 0; uVar8 = uVar8 - 1) {
            }
          }
          if ((int)((uVar8 ^ 0x1f) - (uVar30 ^ 0x1f)) < ((int)uVar40 - (int)local_40) * 4) {
            *param_1 = (uint64_t)(((uint)local_108 - uVar20) + 3);
            local_40 = uVar40;
          }
          iVar17 = iVar7;
          if ((uint64_t *)((int64_t)arg1 + uVar40) == local_80) goto LAB_00eda84a;
        }
        puVar16 = (uint *)(lVar4 + (uint64_t)((uVar20 & uVar42) * 2) * 4);
        if (*(byte *)(lVar29 + uVar40) < *(byte *)((int64_t)arg1 + uVar40)) {
          *local_68 = uVar20;
          if (uVar20 <= local_c4) {
            local_68 = local_124;
            goto LAB_00eda84a;
          }
          puVar16 = puVar16 + 1;
          uVar25 = uVar40;
          uVar40 = uVar10;
          local_68 = puVar16;
        }
        else {
          *puVar39 = uVar20;
          puVar39 = puVar16;
          if (uVar20 <= local_c4) {
            puVar39 = local_124;
            goto LAB_00eda84a;
          }
        }
        local_8c = local_8c - 1;
        if ((local_8c == 0) || (uVar20 = *puVar16, uVar10 = uVar40, uVar20 <= uVar5))
        goto LAB_00eda84a;
      } while( true );
    }
    local_40 = 0;
LAB_00eda84a:
    *puVar39 = 0;
    *local_68 = 0;
    *(int *)(this_ptr + 0x2c) = iVar17 + -8;
  }
  return local_40;
}


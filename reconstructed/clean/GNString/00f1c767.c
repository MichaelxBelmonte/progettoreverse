// Function: FUN_00f1c767
// Address: 00f1c767
// Size: 3846 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_00f1c767(uint64_t *param_1,uint *param_2,int64_t param_3,int param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  void*puVar7;
  uint *puVar8;
  int64_t lVar9;
  void*puVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint uVar13;
  uint64_t uVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  int64_t lVar20;
  byte bVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint64_t uVar26;
  uint64_t *puVar27;
  uint uVar28;
  uint64_t *puVar29;
  uint uVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  uint uVar33;
  int iVar34;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t *puVar35;
  int64_t lVar36;
  int64_t lVar37;
  int *piVar38;
  uint uVar39;
  uint64_t *puVar40;
  uint64_t *puVar41;
  uint64_t *puVar42;
  uint uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint64_t *puVar47;
  uint64_t uVar48;
  uint64_t *local_98;
  uint64_t *local_88;
  uint64_t local_70;
  uint64_t *local_58;
  
  lVar20 = *(int64_t *)(this_ptr + 8);
  iVar15 = (int)lVar20;
  iVar34 = (int)param_1 - iVar15;
  uVar30 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  iVar23 = (int)param_3 + iVar34;
  uVar25 = *(uint *)(this_ptr + 0x1c);
  uVar13 = iVar23 - uVar30;
  if (iVar23 - uVar25 <= uVar30) {
    uVar13 = uVar25;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar13 = uVar25;
  }
  uVar25 = *(uint *)(this_ptr + 0x18);
  uVar48 = (uint64_t)uVar25;
  if (uVar25 < uVar13) {
    uVar48 = (uint64_t)uVar13;
  }
  if (uVar25 <= uVar13) {
    lVar20 = _ZSTD_compressBlock_fast(param_1);
    return lVar20;
  }
  uVar45 = (uint64_t)(*(int *)(this_ptr + 0x114) + (uint)(*(int *)(this_ptr + 0x114) == 0) + 1);
  puVar4 = (uint64_t *)((int64_t)param_1 + param_3);
  puVar40 = (uint64_t *)((int64_t)param_1 + param_3 + -8);
  uVar25 = param_2[1];
  uVar43 = iVar34 - uVar13;
  uVar17 = 0;
  uVar30 = uVar25;
  if (uVar43 <= uVar25) {
    uVar30 = uVar17;
    uVar17 = uVar25;
  }
  uVar25 = *param_2;
  uVar39 = 0;
  uVar33 = uVar25;
  if (uVar25 < uVar43) {
    uVar33 = 0;
    uVar39 = uVar25;
  }
  puVar18 = (uint64_t *)((int64_t)param_1 + uVar45 + 1);
  local_88 = param_1;
  if (puVar18 < puVar40) {
    lVar11 = *(int64_t *)(this_ptr + 0x70);
    lVar12 = *(int64_t *)(this_ptr + 0x10);
    puVar5 = (uint64_t *)(lVar20 + uVar48);
    puVar6 = (uint64_t *)(lVar12 + uVar48);
    cVar16 = (char)*(void*)(this_ptr + 0x108);
    bVar21 = 0x40 - cVar16;
    bVar22 = 0x20 - cVar16;
    puVar1 = (uint64_t *)((int64_t)puVar4 - 7);
    puVar2 = puVar4 + -4;
    lVar9 = uVar48 + 8 + lVar20;
    do {
      iVar34 = param_4 + -5;
      switch(iVar34) {
      case 0:
        lVar36 = -0x30e4432345000000;
        break;
      case 1:
        lVar36 = -0x30e4432340650000;
        break;
      case 2:
        lVar36 = -0x30e44323405a9d00;
        break;
      case 3:
        uVar26 = *local_88 * -0x30e44323485a9b9d >> (bVar21 & 0x3f);
        local_70 = (uint64_t)(*(int64_t *)((int64_t)local_88 + 1) * -0x30e44323485a9b9d) >>
                   (bVar21 & 0x3f);
        goto LAB_00f1c99e;
      default:
        uVar26 = (uint64_t)((uint)*local_88 * -0x61c8864f >> (bVar22 & 0x1f));
        local_70 = (uint64_t)
                   ((uint)(*(int *)((int64_t)local_88 + 1) * -0x61c8864f) >> (bVar22 & 0x1f));
        goto LAB_00f1c99e;
      }
      uVar26 = *local_88 * lVar36 >> (bVar21 & 0x3f);
      local_70 = (uint64_t)(lVar36 * *(int64_t *)((int64_t)local_88 + 1)) >> (bVar21 & 0x3f);
LAB_00f1c99e:
      local_58 = (uint64_t *)((int64_t)local_88 + 1);
      local_98 = local_88 + 0x10;
      uVar25 = *(uint *)(lVar11 + uVar26 * 4);
      uVar43 = (uint)uVar48;
      uVar31 = uVar45;
      puVar32 = (uint64_t *)((int64_t)local_88 + uVar45);
      lVar36 = lVar20;
      puVar27 = local_88;
      if (uVar25 < uVar43) {
        lVar36 = lVar12;
      }
      while( true ) {
        puVar29 = puVar32;
        puVar42 = puVar18;
        uVar24 = ((int)puVar29 - iVar15) - uVar39;
        lVar37 = lVar20;
        if (uVar24 < uVar43) {
          lVar37 = lVar12;
        }
        if ((uVar39 == 0) || (uVar43 - uVar24 < 4)) {
          uVar28 = (uint)*puVar29 ^ 1;
        }
        else {
          uVar28 = *(uint *)(lVar37 + (uint64_t)uVar24);
        }
        uVar44 = (int64_t)puVar27 - lVar20;
        *(int *)(lVar11 + uVar26 * 4) = (int)uVar44;
        puVar18 = puVar4;
        if ((uint)*puVar29 == uVar28) {
          if (uVar24 < uVar43) {
            puVar18 = puVar6;
          }
          uVar26 = (uint64_t)
                   (*(char *)((int64_t)puVar29 - 1) == *(char *)(lVar37 + -1 + (uint64_t)uVar24));
          uVar31 = uVar26 | 4;
          iVar23 = 1;
          puVar32 = (uint64_t *)((lVar37 + (uint64_t)uVar24) - uVar26);
          puVar27 = (uint64_t *)((int64_t)puVar29 - uVar26);
          uVar24 = uVar39;
          goto LAB_00f1cd78;
        }
        if (uVar25 < uVar13) {
          uVar24 = (uint)*puVar27;
          uVar28 = uVar24 ^ 1;
        }
        else {
          uVar28 = *(uint *)(lVar36 + (uint64_t)uVar25);
          uVar24 = (uint)*puVar27;
        }
        if (uVar24 == uVar28) break;
        uVar25 = *(uint *)(lVar11 + local_70 * 4);
        lVar36 = lVar20;
        if (uVar25 < uVar43) {
          lVar36 = lVar12;
        }
        switch(iVar34) {
        case 0:
          lVar37 = -0x30e4432345000000;
          break;
        case 1:
          lVar37 = -0x30e4432340650000;
          break;
        case 2:
          lVar37 = -0x30e44323405a9d00;
          break;
        case 3:
          uVar26 = *puVar29 * -0x30e44323485a9b9d;
          goto LAB_00f1cafb;
        default:
          uVar26 = (uint64_t)((uint)*puVar29 * -0x61c8864f >> (bVar22 & 0x1f));
          goto LAB_00f1cb02;
        }
        uVar26 = lVar37 * *puVar29;
LAB_00f1cafb:
        uVar26 = uVar26 >> (bVar21 & 0x3f);
LAB_00f1cb02:
        uVar44 = (int64_t)local_58 - lVar20;
        *(int *)(lVar11 + local_70 * 4) = (int)uVar44;
        if (uVar25 < uVar13) {
          uVar24 = (uint)*local_58;
          uVar28 = uVar24 ^ 1;
        }
        else {
          uVar28 = *(uint *)(lVar36 + (uint64_t)uVar25);
          uVar24 = (uint)*local_58;
        }
        puVar27 = local_58;
        local_70 = uVar26;
        local_58 = puVar29;
        if (uVar24 == uVar28) break;
        uVar25 = *(uint *)(lVar11 + uVar26 * 4);
        lVar36 = lVar20;
        if (uVar25 < uVar43) {
          lVar36 = lVar12;
        }
        switch(iVar34) {
        case 0:
          lVar37 = -0x30e4432345000000;
          break;
        case 1:
          lVar37 = -0x30e4432340650000;
          break;
        case 2:
          lVar37 = -0x30e44323405a9d00;
          break;
        case 3:
          local_70 = *puVar42 * -0x30e44323485a9b9d;
          goto LAB_00f1cbd5;
        default:
          local_70 = (uint64_t)((uint)*puVar42 * -0x61c8864f >> (bVar22 & 0x1f));
          goto LAB_00f1cbe3;
        }
        local_70 = lVar37 * *puVar42;
LAB_00f1cbd5:
        local_70 = local_70 >> (bVar21 & 0x3f);
LAB_00f1cbe3:
        puVar32 = (uint64_t *)((int64_t)puVar29 + uVar31);
        puVar18 = (uint64_t *)((int64_t)puVar42 + uVar31);
        if (local_98 <= puVar32) {
          uVar31 = uVar31 + 1;
          local_98 = local_98 + 0x10;
        }
        local_58 = puVar42;
        puVar27 = puVar29;
        if (puVar40 <= puVar18) goto LAB_00f1d629;
      }
      uVar24 = (int)uVar44 - uVar25;
      puVar42 = puVar5;
      if (uVar25 < uVar43) {
        puVar18 = puVar6;
        puVar42 = (uint64_t *)((uint64_t)uVar13 + lVar12);
      }
      puVar32 = (uint64_t *)(lVar36 + (uint64_t)uVar25);
      iVar23 = uVar24 + 3;
      uVar31 = 4;
      uVar30 = uVar39;
      if ((puVar42 < puVar32) && (local_88 < puVar27)) {
        uVar31 = 4;
        puVar32 = (uint64_t *)((uint64_t)uVar25 + lVar36);
        do {
          puVar35 = (uint64_t *)((int64_t)puVar32 - 1);
          puVar29 = (uint64_t *)((int64_t)puVar27 + -1);
          if ((*(char *)puVar29 != (char)*puVar35) ||
             (uVar31 = uVar31 + 1, puVar32 = puVar35, puVar27 = puVar29, puVar35 <= puVar42)) break;
        } while (local_88 < puVar29);
      }
LAB_00f1cd78:
      puVar42 = (uint64_t *)((int64_t)puVar27 + uVar31);
      puVar29 = (uint64_t *)((int64_t)puVar32 + uVar31);
      puVar35 = (uint64_t *)(((int64_t)puVar18 - (int64_t)puVar29) + (int64_t)puVar42);
      if (puVar4 <= puVar35) {
        puVar35 = puVar4;
      }
      puVar41 = puVar29;
      puVar47 = puVar42;
      if (puVar42 < (uint64_t *)((int64_t)puVar35 - 7U)) {
        uVar26 = *puVar42 ^ *puVar29;
        if (uVar26 == 0) {
          lVar36 = 0;
          do {
            if ((uint64_t *)((int64_t)puVar35 - 7U) <=
                (uint64_t *)((int64_t)puVar27 + lVar36 + uVar31 + 8)) {
              puVar41 = (uint64_t *)((int64_t)puVar32 + lVar36 + uVar31 + 8);
              puVar47 = (uint64_t *)((int64_t)puVar27 + lVar36 + 8 + uVar31);
              goto LAB_00f1ce4d;
            }
            lVar37 = lVar36 + 8;
            uVar26 = *(uint64_t *)((int64_t)puVar27 + lVar36 + uVar31 + 8) ^
                     *(uint64_t *)((int64_t)puVar32 + lVar36 + uVar31 + 8);
            lVar36 = lVar37;
          } while (uVar26 == 0);
          uVar46 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar46 & 1) == 0; uVar46 = uVar46 + 1) {
            }
          }
          uVar46 = (uVar46 >> 3) + lVar37;
        }
        else {
          uVar46 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar46 & 1) == 0; uVar46 = uVar46 + 1) {
            }
          }
          uVar46 = uVar46 >> 3;
        }
      }
      else {
LAB_00f1ce4d:
        if ((puVar47 < (uint64_t *)((int64_t)puVar35 - 3U)) && ((uint)*puVar41 == (uint)*puVar47))
        {
          puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
          puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
        }
        if ((puVar47 < (uint64_t *)((int64_t)puVar35 - 1U)) &&
           ((short)*puVar41 == (short)*puVar47)) {
          puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
          puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
        }
        if (puVar47 < puVar35) {
          puVar47 = (uint64_t *)((int64_t)puVar47 + (uint64_t)((char)*puVar41 == (char)*puVar47))
          ;
        }
        uVar46 = (int64_t)puVar47 - (int64_t)puVar42;
      }
      if ((uint64_t *)((int64_t)puVar29 + uVar46) == puVar18) {
        puVar42 = (uint64_t *)((int64_t)puVar42 + uVar46);
        puVar32 = puVar42;
        puVar18 = puVar5;
        if (puVar42 < puVar1) {
          uVar26 = *puVar42 ^ *puVar5;
          if (uVar26 == 0) {
            lVar36 = uVar31 + uVar46 + 8;
            lVar37 = 0;
            do {
              if (puVar1 <= (uint64_t *)((int64_t)puVar27 + lVar37 + lVar36)) {
                puVar18 = (uint64_t *)(lVar9 + lVar37);
                puVar32 = (uint64_t *)((int64_t)puVar27 + lVar37 + uVar31 + uVar46 + 8);
                goto LAB_00f1cf76;
              }
              lVar3 = lVar37 + 8;
              uVar26 = *(uint64_t *)((int64_t)puVar27 + lVar37 + lVar36) ^
                       *(uint64_t *)(lVar9 + lVar37);
              lVar37 = lVar3;
            } while (uVar26 == 0);
            uVar19 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar19 = (uVar19 >> 3) + lVar3;
          }
          else {
            uVar19 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar19 = uVar19 >> 3;
          }
        }
        else {
LAB_00f1cf76:
          if ((puVar32 < (uint64_t *)((int64_t)puVar4 - 3U)) && ((uint)*puVar18 == (uint)*puVar32)
             ) {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
          }
          if ((puVar32 < (uint64_t *)((int64_t)puVar4 - 1U)) &&
             ((short)*puVar18 == (short)*puVar32)) {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
          }
          if (puVar32 < puVar4) {
            puVar32 = (uint64_t *)
                      ((int64_t)puVar32 + (uint64_t)((char)*puVar18 == (char)*puVar32));
          }
          uVar19 = (int64_t)puVar32 - (int64_t)puVar42;
        }
        uVar46 = uVar46 + uVar19;
      }
      uVar26 = (int64_t)puVar27 - (int64_t)local_88;
      if (puVar2 < puVar27) {
        puVar32 = (uint64_t *)arg1[3];
        puVar18 = puVar32;
        puVar42 = local_88;
        if (local_88 <= puVar2) {
          puVar18 = (uint64_t *)((int64_t)puVar32 + ((int64_t)puVar2 - (int64_t)local_88));
          uVar19 = local_88[1];
          *puVar32 = *local_88;
          puVar32[1] = uVar19;
          puVar42 = puVar2;
          if (0x10 < (int64_t)puVar2 - (int64_t)local_88) {
            lVar36 = 0x10;
            do {
              uVar14 = ((void*)((int64_t)local_88 + lVar36))[1];
              puVar7 = (void*)((int64_t)puVar32 + lVar36);
              *puVar7 = *(void*)((int64_t)local_88 + lVar36);
              puVar7[1] = uVar14;
              puVar10 = (void*)((int64_t)local_88 + lVar36 + 0x10);
              uVar14 = puVar10[1];
              puVar7[2] = *puVar10;
              puVar7[3] = uVar14;
              lVar36 = lVar36 + 0x20;
            } while (puVar7 + 4 < puVar18);
          }
        }
        if (puVar42 < puVar27) {
          lVar36 = 0;
          do {
            *(void*)((int64_t)puVar18 + lVar36) =
                 *(void*)((int64_t)puVar42 + lVar36);
            lVar36 = lVar36 + 1;
          } while ((int64_t)puVar27 - (int64_t)puVar42 != lVar36);
        }
LAB_00f1d0bd:
        arg1[3] = arg1[3] + uVar26;
        if (0xffff < uVar26) {
          *(void*)(arg1 + 9) = 1;
          *(int *)((int64_t)arg1 + 0x4c) = (int)((uint64_t)(arg1[1] - *arg1) >> 3);
        }
      }
      else {
        puVar18 = (uint64_t *)arg1[3];
        uVar19 = local_88[1];
        *puVar18 = *local_88;
        puVar18[1] = uVar19;
        lVar36 = arg1[3];
        if (0x10 < uVar26) {
          uVar19 = local_88[3];
          *(uint64_t *)(lVar36 + 0x10) = local_88[2];
          *(uint64_t *)(lVar36 + 0x18) = uVar19;
          if (0x20 < (int64_t)uVar26) {
            lVar37 = 0;
            do {
              puVar10 = (void*)((int64_t)local_88 + lVar37 + 0x20);
              uVar14 = puVar10[1];
              puVar7 = (void*)(lVar36 + 0x20 + lVar37);
              *puVar7 = *puVar10;
              puVar7[1] = uVar14;
              puVar10 = (void*)((int64_t)local_88 + lVar37 + 0x30);
              uVar14 = puVar10[1];
              puVar7[2] = *puVar10;
              puVar7[3] = uVar14;
              lVar37 = lVar37 + 0x20;
            } while (puVar7 + 4 < (void*)(lVar36 + uVar26));
          }
          goto LAB_00f1d0bd;
        }
        arg1[3] = lVar36 + uVar26;
      }
      piVar38 = (int *)arg1[1];
      *(short *)(piVar38 + 1) = (short)uVar26;
      *piVar38 = iVar23;
      uVar26 = (uVar46 + uVar31) - 3;
      if (0xffff < uVar26) {
        *(void*)(arg1 + 9) = 2;
        *(int *)((int64_t)arg1 + 0x4c) =
             (int)((uint64_t)((int64_t)piVar38 - *arg1) >> 3);
      }
      *(short *)((int64_t)piVar38 + 6) = (short)uVar26;
      piVar38 = piVar38 + 2;
      arg1[1] = (int64_t)piVar38;
      local_88 = (uint64_t *)((int64_t)puVar27 + uVar46 + uVar31);
      if (local_58 < local_88) {
        *(int *)(lVar11 + local_70 * 4) = (int)local_58 - iVar15;
      }
      uVar39 = uVar24;
      if (local_88 <= puVar40) {
        uVar26 = uVar44 & 0xffffffff;
        iVar23 = (int)uVar44 + 2;
        switch(iVar34) {
        case 0:
          lVar36 = -0x30e4432345000000;
          break;
        case 1:
          lVar36 = -0x30e4432340650000;
          break;
        case 2:
          lVar36 = -0x30e44323405a9d00;
          break;
        case 3:
          *(int *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar20 + 2 + uVar26) * -0x30e44323485a9b9d)
                            >> (bVar21 & 0x3f)) * 4) = iVar23;
          uVar26 = *(int64_t *)((int64_t)local_88 + -2) * -0x30e44323485a9b9d;
          goto LAB_00f1d23c;
        default:
          *(int *)(lVar11 + (uint64_t)
                            ((uint)(*(int *)(lVar20 + 2 + uVar26) * -0x61c8864f) >> (bVar22 & 0x1f))
                            * 4) = iVar23;
          uVar26 = (uint64_t)
                   ((uint)(*(int *)((int64_t)local_88 + -2) * -0x61c8864f) >> (bVar22 & 0x1f));
          goto LAB_00f1d23f;
        }
        *(int *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar20 + 2 + uVar26) * lVar36) >>
                          (bVar21 & 0x3f)) * 4) = iVar23;
        uVar26 = lVar36 * *(int64_t *)((int64_t)local_88 + -2);
LAB_00f1d23c:
        uVar26 = uVar26 >> (bVar21 & 0x3f);
LAB_00f1d23f:
        *(int *)(lVar11 + uVar26 * 4) = ((int)local_88 + -2) - iVar15;
        do {
          uVar28 = uVar30;
          iVar23 = (int)local_88 - iVar15;
          uVar25 = iVar23 - uVar28;
          lVar36 = lVar20;
          if (uVar25 < uVar43) {
            lVar36 = lVar12;
          }
          uVar39 = uVar24;
          uVar30 = uVar28;
          if (((uVar28 == 0) || (~uVar25 + uVar43 < 3)) ||
             (puVar8 = (uint *)(lVar36 + (uint64_t)uVar25), *puVar8 != (uint)*local_88)) break;
          puVar18 = puVar4;
          if (uVar25 < uVar43) {
            puVar18 = puVar6;
          }
          puVar32 = (uint64_t *)((int64_t)local_88 + 4);
          puVar27 = (uint64_t *)(puVar8 + 1);
          puVar42 = (uint64_t *)((int64_t)local_88 + (int64_t)puVar18 + (4 - (int64_t)puVar27));
          if (puVar4 <= puVar42) {
            puVar42 = puVar4;
          }
          puVar29 = puVar27;
          puVar35 = puVar32;
          if (puVar32 < (uint64_t *)((int64_t)puVar42 - 7U)) {
            uVar26 = *puVar32 ^ *puVar27;
            if (uVar26 == 0) {
              lVar37 = 0;
              do {
                if ((uint64_t *)((int64_t)puVar42 - 7U) <=
                    (uint64_t *)((int64_t)local_88 + lVar37 + 0xc)) {
                  puVar29 = (uint64_t *)((int64_t)puVar8 + lVar37 + 0xc);
                  puVar35 = (uint64_t *)((int64_t)local_88 + lVar37 + 0xc);
                  goto LAB_00f1d373;
                }
                lVar3 = lVar37 + 8;
                uVar26 = *(uint64_t *)((int64_t)local_88 + lVar37 + 0xc) ^
                         *(uint64_t *)(lVar36 + (uint64_t)uVar25 + 0xc + lVar37);
                lVar37 = lVar3;
              } while (uVar26 == 0);
              uVar31 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = (uVar31 >> 3) + lVar3;
            }
            else {
              uVar31 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = uVar31 >> 3;
            }
          }
          else {
LAB_00f1d373:
            if ((puVar35 < (uint64_t *)((int64_t)puVar42 - 3U)) &&
               ((uint)*puVar29 == (uint)*puVar35)) {
              puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            }
            if ((puVar35 < (uint64_t *)((int64_t)puVar42 - 1U)) &&
               ((short)*puVar29 == (short)*puVar35)) {
              puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            }
            if (puVar35 < puVar42) {
              puVar35 = (uint64_t *)
                        ((int64_t)puVar35 + (uint64_t)((char)*puVar29 == (char)*puVar35));
            }
            uVar31 = (int64_t)puVar35 - (int64_t)puVar32;
          }
          if ((uint64_t *)((int64_t)puVar27 + uVar31) == puVar18) {
            puVar32 = (uint64_t *)((int64_t)puVar32 + uVar31);
            puVar18 = puVar32;
            puVar27 = puVar5;
            if (puVar32 < puVar1) {
              uVar26 = *puVar32 ^ *puVar5;
              if (uVar26 == 0) {
                lVar36 = 0;
                do {
                  if (puVar1 <= (uint64_t *)((int64_t)local_88 + lVar36 + uVar31 + 0xc)) {
                    puVar27 = (uint64_t *)(lVar9 + lVar36);
                    puVar18 = (uint64_t *)((int64_t)local_88 + lVar36 + uVar31 + 0xc);
                    goto LAB_00f1d48e;
                  }
                  lVar37 = lVar36 + 8;
                  uVar26 = *(uint64_t *)((int64_t)local_88 + lVar36 + uVar31 + 0xc) ^
                           *(uint64_t *)(lVar9 + lVar36);
                  lVar36 = lVar37;
                } while (uVar26 == 0);
                uVar44 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
                  }
                }
                uVar44 = (uVar44 >> 3) + lVar37;
              }
              else {
                uVar44 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
                  }
                }
                uVar44 = uVar44 >> 3;
              }
            }
            else {
LAB_00f1d48e:
              if ((puVar18 < (uint64_t *)((int64_t)puVar4 - 3U)) &&
                 ((uint)*puVar27 == (uint)*puVar18)) {
                puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              }
              if ((puVar18 < (uint64_t *)((int64_t)puVar4 - 1U)) &&
                 ((short)*puVar27 == (short)*puVar18)) {
                puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
              }
              if (puVar18 < puVar4) {
                puVar18 = (uint64_t *)
                          ((int64_t)puVar18 + (uint64_t)((char)*puVar27 == (char)*puVar18));
              }
              uVar44 = (int64_t)puVar18 - (int64_t)puVar32;
            }
            uVar31 = uVar31 + uVar44;
          }
          if (local_88 <= puVar2) {
            puVar18 = (uint64_t *)arg1[3];
            uVar26 = local_88[1];
            *puVar18 = *local_88;
            puVar18[1] = uVar26;
            piVar38 = (int *)arg1[1];
          }
          *(void*)(piVar38 + 1) = 0;
          *piVar38 = 1;
          if (0xffff < uVar31 + 1) {
            *(void*)(arg1 + 9) = 2;
            *(int *)((int64_t)arg1 + 0x4c) =
                 (int)((uint64_t)((int64_t)piVar38 - *arg1) >> 3);
          }
          *(short *)((int64_t)piVar38 + 6) = (short)(uVar31 + 1);
          piVar38 = piVar38 + 2;
          arg1[1] = (int64_t)piVar38;
          switch(iVar34) {
          case 0:
            lVar36 = -0x30e4432345000000;
            break;
          case 1:
            lVar36 = -0x30e4432340650000;
            break;
          case 2:
            lVar36 = -0x30e44323405a9d00;
            break;
          case 3:
            uVar26 = *local_88 * -0x30e44323485a9b9d;
            goto LAB_00f1d5a8;
          default:
            uVar26 = (uint64_t)((uint)*local_88 * -0x61c8864f >> (bVar22 & 0x1f));
            goto LAB_00f1d5af;
          }
          uVar26 = lVar36 * *local_88;
LAB_00f1d5a8:
          uVar26 = uVar26 >> (bVar21 & 0x3f);
LAB_00f1d5af:
          *(int *)(lVar11 + uVar26 * 4) = iVar23;
          local_88 = (uint64_t *)((int64_t)local_88 + uVar31 + 4);
          uVar39 = uVar28;
          uVar30 = uVar24;
          uVar24 = uVar28;
        } while (local_88 <= puVar40);
      }
      puVar18 = (uint64_t *)((int64_t)local_88 + uVar45 + 1);
    } while (puVar18 < puVar40);
  }
LAB_00f1d629:
  uVar25 = uVar33;
  if (uVar39 == 0) {
    uVar39 = uVar33;
    uVar25 = uVar17;
  }
  if (uVar33 == 0) {
    uVar25 = uVar17;
  }
  *param_2 = uVar39;
  if (uVar30 != 0) {
    uVar25 = uVar30;
  }
  param_2[1] = uVar25;
  return (int64_t)puVar4 - (int64_t)local_88;
}


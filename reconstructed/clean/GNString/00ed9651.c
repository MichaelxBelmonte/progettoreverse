// Function: FUN_00ed9651
// Address: 00ed9651
// Size: 1316 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed9651(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  byte bVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint64_t *puVar18;
  uint uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  uint uVar22;
  uint64_t *arg1;
  uint64_t uVar23;
  int64_t this_ptr;
  uint uVar24;
  uint64_t *puVar25;
  uint64_t *puVar26;
  uint uVar27;
  int iVar28;
  uint64_t local_90;
  
  bVar4 = *(byte *)(this_ptr + 0x104);
  uVar24 = 1 << (bVar4 & 0x1f);
  lVar6 = *(int64_t *)(this_ptr + 8);
  uVar22 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar27 = (int)arg1 - (int)lVar6;
  uVar12 = *(uint *)(this_ptr + 0x1c);
  uVar19 = uVar27 - uVar22;
  if (uVar27 - uVar12 <= uVar22) {
    uVar19 = uVar12;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar19 = uVar12;
  }
  uVar12 = uVar27 - uVar24;
  if (uVar27 < uVar24) {
    uVar12 = 0;
  }
  iVar28 = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
  uVar22 = *(uint *)(this_ptr + 0x2c);
  uVar20 = (uint64_t)uVar22;
  bVar11 = 0x40 - (char)*(void*)(this_ptr + 0x108);
  uVar13 = uVar27;
  if (uVar27 < uVar22) {
    uVar13 = uVar22;
  }
  lVar7 = *(int64_t *)(this_ptr + 0x80);
  lVar8 = *(int64_t *)(this_ptr + 0x10);
  uVar22 = *(uint *)(this_ptr + 0x18);
  uVar16 = (uint64_t)uVar22;
  iVar5 = *(int *)(this_ptr + 300);
  lVar9 = *(int64_t *)(this_ptr + 0x70);
  do {
    if (uVar13 == uVar20) break;
    uVar23 = (uint64_t)(*(int64_t *)(lVar6 + uVar20) * -0x30e4432340650000) >> (bVar11 & 0x3f);
    *(void*)(lVar7 + (uint64_t)((uint)uVar20 & ~(-1 << (bVar4 & 0x1f))) * 4) =
         *(void*)(lVar9 + uVar23 * 4);
    *(uint *)(lVar9 + uVar23 * 4) = (uint)uVar20;
    uVar20 = uVar20 + 1;
  } while (iVar5 == 0);
  *(uint *)(this_ptr + 0x2c) = uVar27;
  local_90 = *arg1;
  uVar13 = *(uint *)(lVar9 + (local_90 * -0x30e4432340650000 >> (bVar11 & 0x3f)) * 4);
  if (uVar13 < uVar19) {
    return 3;
  }
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  puVar2 = (uint64_t *)((int64_t)arg1 + 4);
  lVar9 = uVar16 + lVar6 + 8;
  uVar20 = 3;
  do {
    uVar23 = (uint64_t)uVar13;
    if (uVar13 < uVar22) {
      if (*(int *)(lVar8 + uVar23) == (int)local_90) {
        puVar26 = (uint64_t *)(lVar8 + uVar23 + 4);
        puVar14 = (uint64_t *)(((int64_t)(lVar8 + uVar16) - (int64_t)puVar26) + (int64_t)puVar2)
        ;
        if (param_2 <= puVar14) {
          puVar14 = param_2;
        }
        puVar18 = puVar2;
        puVar25 = puVar26;
        if (puVar2 < (uint64_t *)((int64_t)puVar14 - 7U)) {
          uVar10 = *puVar2 ^ *puVar26;
          if (uVar10 == 0) {
            lVar17 = lVar8 + 0xc + uVar23;
            lVar21 = 0;
            do {
              puVar18 = (uint64_t *)((int64_t)arg1 + lVar21 + 0xc);
              if ((uint64_t *)((int64_t)puVar14 - 7U) <= puVar18) {
                puVar25 = (uint64_t *)(lVar17 + lVar21);
                goto LAB_00ed99cd;
              }
              lVar3 = lVar21 + 8;
              uVar23 = *(uint64_t *)((int64_t)arg1 + lVar21 + 0xc) ^
                       *(uint64_t *)(lVar17 + lVar21);
              lVar21 = lVar3;
            } while (uVar23 == 0);
            uVar10 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar23 = (uVar10 >> 3) + lVar3;
          }
          else {
            uVar23 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
              }
            }
            uVar23 = uVar23 >> 3;
          }
        }
        else {
LAB_00ed99cd:
          if ((puVar18 < (uint64_t *)((int64_t)puVar14 - 3U)) && ((int)*puVar25 == (int)*puVar18))
          {
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          }
          if ((puVar18 < (uint64_t *)((int64_t)puVar14 - 1U)) &&
             ((short)*puVar25 == (short)*puVar18)) {
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
          }
          if (puVar18 < puVar14) {
            puVar18 = (uint64_t *)
                      ((int64_t)puVar18 + (uint64_t)((char)*puVar25 == (char)*puVar18));
          }
          uVar23 = (int64_t)puVar18 - (int64_t)puVar2;
        }
        if ((char *)((int64_t)puVar26 + uVar23) == (char *)(lVar8 + uVar16)) {
          puVar14 = (uint64_t *)((int64_t)puVar2 + uVar23);
          puVar26 = puVar14;
          puVar18 = (uint64_t *)(lVar6 + uVar16);
          if (puVar14 < puVar1) {
            uVar10 = *puVar14 ^ *(uint64_t *)(lVar6 + uVar16);
            if (uVar10 == 0) {
              lVar17 = 0;
              do {
                puVar26 = (uint64_t *)((int64_t)arg1 + lVar17 + uVar23 + 0xc);
                if (puVar1 <= puVar26) {
                  puVar18 = (uint64_t *)(lVar17 + lVar9);
                  goto LAB_00ed9ac9;
                }
                lVar21 = lVar17 + 8;
                uVar10 = *(uint64_t *)((int64_t)arg1 + lVar17 + uVar23 + 0xc) ^
                         *(uint64_t *)(lVar9 + lVar17);
                lVar17 = lVar21;
              } while (uVar10 == 0);
              uVar15 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar15 = (uVar15 >> 3) + lVar21;
            }
            else {
              uVar15 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar15 = uVar15 >> 3;
            }
          }
          else {
LAB_00ed9ac9:
            if ((puVar26 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar18 == (int)*puVar26)) {
              puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
              puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
            }
            if ((puVar26 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar18 == (short)*puVar26)) {
              puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
              puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
            }
            if (puVar26 < param_2) {
              puVar26 = (uint64_t *)
                        ((int64_t)puVar26 + (uint64_t)((char)*puVar18 == (char)*puVar26));
            }
            uVar15 = (int64_t)puVar26 - (int64_t)puVar14;
          }
          uVar23 = uVar23 + uVar15;
        }
        uVar23 = uVar23 + 4;
LAB_00ed9b26:
        if ((uVar20 < uVar23) &&
           (*param_1 = (uint64_t)((uVar27 + 3) - uVar13), uVar20 = uVar23,
           (uint64_t *)(uVar23 + (int64_t)arg1) == param_2)) {
          return uVar23;
        }
      }
    }
    else {
      puVar14 = (uint64_t *)(lVar6 + uVar23);
      if (*(int *)((uVar20 - 3) + (int64_t)puVar14) == *(int *)((int64_t)arg1 + (uVar20 - 3))
         ) {
        puVar26 = arg1;
        if (arg1 < puVar1) {
          local_90 = *arg1;
          uVar10 = *puVar14 ^ local_90;
          if (uVar10 == 0) {
            lVar17 = lVar6 + 8 + uVar23;
            lVar21 = 0;
            do {
              puVar26 = (uint64_t *)((int64_t)arg1 + lVar21 + 8);
              if (puVar1 <= puVar26) {
                puVar14 = (uint64_t *)(lVar17 + lVar21);
                goto LAB_00ed98e3;
              }
              lVar3 = lVar21 + 8;
              uVar23 = *(uint64_t *)((int64_t)arg1 + lVar21 + 8) ^
                       *(uint64_t *)(lVar17 + lVar21);
              lVar21 = lVar3;
            } while (uVar23 == 0);
            uVar10 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar23 = (uVar10 >> 3) + lVar3;
          }
          else {
            uVar23 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
              }
            }
            uVar23 = uVar23 >> 3;
          }
        }
        else {
LAB_00ed98e3:
          if ((puVar26 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar14 == (int)*puVar26))
          {
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
          }
          if ((puVar26 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar14 == (short)*puVar26)) {
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
          }
          if (puVar26 < param_2) {
            puVar26 = (uint64_t *)
                      ((int64_t)puVar26 + (uint64_t)((char)*puVar14 == (char)*puVar26));
          }
          uVar23 = (int64_t)puVar26 - (int64_t)arg1;
        }
        goto LAB_00ed9b26;
      }
    }
    if (uVar13 <= uVar12) {
      return uVar20;
    }
    iVar28 = iVar28 + -1;
    if (iVar28 == 0) {
      return uVar20;
    }
    uVar13 = *(uint *)(lVar7 + (uint64_t)(uVar13 & uVar24 - 1) * 4);
    if (uVar13 < uVar19) {
      return uVar20;
    }
  } while( true );
}


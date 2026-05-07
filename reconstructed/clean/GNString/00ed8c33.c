// Function: FUN_00ed8c33
// Address: 00ed8c33
// Size: 1274 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed8c33(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  byte bVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  byte bVar15;
  uint uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint uVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint uVar22;
  int64_t lVar23;
  uint64_t *arg1;
  uint64_t uVar24;
  int64_t this_ptr;
  uint uVar25;
  uint64_t *puVar26;
  int iVar27;
  uint64_t *puVar28;
  uint64_t local_98;
  
  bVar4 = *(byte *)(this_ptr + 0x104);
  uVar25 = 1 << (bVar4 & 0x1f);
  lVar6 = *(int64_t *)(this_ptr + 8);
  uVar19 = (int)arg1 - (int)lVar6;
  uVar22 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar10 = *(uint *)(this_ptr + 0x1c);
  uVar9 = uVar19 - uVar22;
  if (uVar19 - uVar10 <= uVar22) {
    uVar9 = uVar10;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar9 = uVar10;
  }
  uVar10 = uVar19 - uVar25;
  if (uVar19 < uVar25) {
    uVar10 = 0;
  }
  iVar27 = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
  uVar22 = *(uint *)(this_ptr + 0x2c);
  uVar11 = (uint64_t)uVar22;
  bVar15 = 0x20 - (char)*(void*)(this_ptr + 0x108);
  uVar16 = uVar19;
  if (uVar19 < uVar22) {
    uVar16 = uVar22;
  }
  lVar7 = *(int64_t *)(this_ptr + 0x80);
  lVar8 = *(int64_t *)(this_ptr + 0x10);
  uVar22 = *(uint *)(this_ptr + 0x18);
  uVar24 = (uint64_t)uVar22;
  iVar5 = *(int *)(this_ptr + 300);
  lVar12 = *(int64_t *)(this_ptr + 0x70);
  do {
    if (uVar16 == uVar11) break;
    uVar14 = (uint64_t)((uint)(*(int *)(lVar6 + uVar11) * -0x61c8864f) >> (bVar15 & 0x1f));
    *(void*)(lVar7 + (uint64_t)((uint)uVar11 & ~(-1 << (bVar4 & 0x1f))) * 4) =
         *(void*)(lVar12 + uVar14 * 4);
    *(uint *)(lVar12 + uVar14 * 4) = (uint)uVar11;
    uVar11 = uVar11 + 1;
  } while (iVar5 == 0);
  *(uint *)(this_ptr + 0x2c) = uVar19;
  local_98 = (uint64_t)(uint)*arg1;
  uVar16 = *(uint *)(lVar12 + (uint64_t)((uint)*arg1 * -0x61c8864f >> (bVar15 & 0x1f)) * 4);
  if (uVar16 < uVar9) {
    return 3;
  }
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  puVar2 = (uint64_t *)((int64_t)arg1 + 4);
  lVar12 = uVar24 + lVar6 + 8;
  uVar11 = 3;
  do {
    uVar14 = (uint64_t)uVar16;
    if (uVar16 < uVar22) {
      if (*(int *)(lVar8 + uVar14) == (int)local_98) {
        puVar28 = (uint64_t *)(lVar8 + uVar14 + 4);
        puVar17 = (uint64_t *)(((int64_t)(lVar8 + uVar24) - (int64_t)puVar28) + (int64_t)puVar2)
        ;
        if (param_2 <= puVar17) {
          puVar17 = param_2;
        }
        puVar21 = puVar2;
        puVar26 = puVar28;
        if (puVar2 < (uint64_t *)((int64_t)puVar17 - 7U)) {
          uVar13 = *puVar2 ^ *puVar28;
          if (uVar13 == 0) {
            lVar20 = lVar8 + 0xc + uVar14;
            lVar23 = 0;
            do {
              puVar21 = (uint64_t *)((int64_t)arg1 + lVar23 + 0xc);
              if ((uint64_t *)((int64_t)puVar17 - 7U) <= puVar21) {
                puVar26 = (uint64_t *)(lVar20 + lVar23);
                goto LAB_00ed8f87;
              }
              lVar3 = lVar23 + 8;
              uVar14 = *(uint64_t *)((int64_t)arg1 + lVar23 + 0xc) ^
                       *(uint64_t *)(lVar20 + lVar23);
              lVar23 = lVar3;
            } while (uVar14 == 0);
            uVar13 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
              }
            }
            uVar14 = (uVar13 >> 3) + lVar3;
          }
          else {
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar14 = uVar14 >> 3;
          }
        }
        else {
LAB_00ed8f87:
          if ((puVar21 < (uint64_t *)((int64_t)puVar17 - 3U)) &&
             ((uint)*puVar26 == (uint)*puVar21)) {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          }
          if ((puVar21 < (uint64_t *)((int64_t)puVar17 - 1U)) &&
             ((short)*puVar26 == (short)*puVar21)) {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
          }
          if (puVar21 < puVar17) {
            puVar21 = (uint64_t *)
                      ((int64_t)puVar21 + (uint64_t)((char)*puVar26 == (char)*puVar21));
          }
          uVar14 = (int64_t)puVar21 - (int64_t)puVar2;
        }
        if ((char *)((int64_t)puVar28 + uVar14) == (char *)(lVar8 + uVar24)) {
          puVar17 = (uint64_t *)((int64_t)puVar2 + uVar14);
          puVar28 = puVar17;
          puVar21 = (uint64_t *)(lVar6 + uVar24);
          if (puVar17 < puVar1) {
            uVar13 = *puVar17 ^ *(uint64_t *)(lVar6 + uVar24);
            if (uVar13 == 0) {
              lVar20 = 0;
              do {
                puVar28 = (uint64_t *)((int64_t)arg1 + lVar20 + uVar14 + 0xc);
                if (puVar1 <= puVar28) {
                  puVar21 = (uint64_t *)(lVar20 + lVar12);
                  goto LAB_00ed907f;
                }
                lVar23 = lVar20 + 8;
                uVar13 = *(uint64_t *)((int64_t)arg1 + lVar20 + uVar14 + 0xc) ^
                         *(uint64_t *)(lVar12 + lVar20);
                lVar20 = lVar23;
              } while (uVar13 == 0);
              uVar18 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar18 = (uVar18 >> 3) + lVar23;
            }
            else {
              uVar18 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar18 = uVar18 >> 3;
            }
          }
          else {
LAB_00ed907f:
            if ((puVar28 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((uint)*puVar21 == (uint)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
              puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
            }
            if ((puVar28 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar21 == (short)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
            }
            if (puVar28 < param_2) {
              puVar28 = (uint64_t *)
                        ((int64_t)puVar28 + (uint64_t)((char)*puVar21 == (char)*puVar28));
            }
            uVar18 = (int64_t)puVar28 - (int64_t)puVar17;
          }
          uVar14 = uVar14 + uVar18;
        }
        uVar14 = uVar14 + 4;
LAB_00ed90e2:
        if ((uVar11 < uVar14) &&
           (*param_1 = (uint64_t)((uVar19 + 3) - uVar16), uVar11 = uVar14,
           (uint64_t *)((int64_t)arg1 + uVar14) == param_2)) {
          return uVar14;
        }
      }
    }
    else {
      puVar17 = (uint64_t *)(lVar6 + uVar14);
      if (*(int *)((uVar11 - 3) + (int64_t)puVar17) == *(int *)((int64_t)arg1 + (uVar11 - 3))
         ) {
        puVar28 = arg1;
        if (arg1 < puVar1) {
          local_98 = *arg1;
          uVar13 = *puVar17 ^ local_98;
          if (uVar13 == 0) {
            lVar20 = lVar6 + 8 + uVar14;
            lVar23 = 0;
            do {
              puVar28 = (uint64_t *)((int64_t)arg1 + lVar23 + 8);
              if (puVar1 <= puVar28) {
                puVar17 = (uint64_t *)(lVar20 + lVar23);
                goto LAB_00ed8ea4;
              }
              lVar3 = lVar23 + 8;
              uVar14 = *(uint64_t *)((int64_t)arg1 + lVar23 + 8) ^
                       *(uint64_t *)(lVar20 + lVar23);
              lVar23 = lVar3;
            } while (uVar14 == 0);
            uVar13 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
              }
            }
            uVar14 = (uVar13 >> 3) + lVar3;
          }
          else {
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar14 = uVar14 >> 3;
          }
        }
        else {
LAB_00ed8ea4:
          if ((puVar28 < (uint64_t *)((int64_t)param_2 - 3U)) &&
             ((uint)*puVar17 == (uint)*puVar28)) {
            puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
          }
          if ((puVar28 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar17 == (short)*puVar28)) {
            puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
          }
          if (puVar28 < param_2) {
            puVar28 = (uint64_t *)
                      ((int64_t)puVar28 + (uint64_t)((char)*puVar17 == (char)*puVar28));
          }
          uVar14 = (int64_t)puVar28 - (int64_t)arg1;
        }
        goto LAB_00ed90e2;
      }
    }
    if (uVar16 <= uVar10) {
      return uVar11;
    }
    iVar27 = iVar27 + -1;
    if (iVar27 == 0) {
      return uVar11;
    }
    uVar16 = *(uint *)(lVar7 + (uint64_t)(uVar16 & uVar25 - 1) * 4);
    if (uVar16 < uVar9) {
      return uVar11;
    }
  } while( true );
}


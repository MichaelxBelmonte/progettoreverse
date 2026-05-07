// Function: FUN_00ee1b57
// Address: 00ee1b57
// Size: 1337 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ee1b57(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  byte bVar3;
  int iVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t lVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lVar14;
  byte bVar15;
  uint uVar16;
  uint64_t *puVar17;
  uint uVar18;
  uint uVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint uVar26;
  uint64_t *arg1;
  int64_t this_ptr;
  uint64_t *puVar27;
  int iVar28;
  uint64_t uVar29;
  uint uVar30;
  uint64_t *puVar31;
  
  bVar3 = *(byte *)(this_ptr + 0x104);
  uVar18 = 1 << (bVar3 & 0x1f);
  lVar12 = *(int64_t *)(this_ptr + 8);
  uVar30 = (int)arg1 - (int)lVar12;
  uVar26 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar9 = *(uint *)(this_ptr + 0x1c);
  uVar19 = uVar30 - uVar26;
  if (uVar30 - uVar9 <= uVar26) {
    uVar19 = uVar9;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar19 = uVar9;
  }
  uVar9 = uVar30 - uVar18;
  if (uVar30 < uVar18) {
    uVar9 = 0;
  }
  iVar28 = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
  uVar26 = *(uint *)(this_ptr + 0x2c);
  uVar24 = (uint64_t)uVar26;
  bVar15 = 0x40 - (char)*(void*)(this_ptr + 0x108);
  uVar10 = uVar30;
  if (uVar30 < uVar26) {
    uVar10 = uVar26;
  }
  lVar5 = *(int64_t *)(this_ptr + 0x80);
  uVar26 = *(uint *)(this_ptr + 0x18);
  puVar11 = (uint64_t *)((uint64_t)uVar26 + lVar12);
  puVar6 = *(void**)(this_ptr + 0xf8);
  iVar4 = *(int *)(this_ptr + 300);
  lVar7 = *(int64_t *)(this_ptr + 0x70);
  do {
    if (uVar10 == uVar24) break;
    uVar20 = (uint64_t)(*(int64_t *)(lVar12 + uVar24) * -0x30e4432340650000) >> (bVar15 & 0x3f);
    *(void*)(lVar5 + (uint64_t)((uint)uVar24 & ~(-1 << (bVar3 & 0x1f))) * 4) =
         *(void*)(lVar7 + uVar20 * 4);
    *(uint *)(lVar7 + uVar20 * 4) = (uint)uVar24;
    uVar24 = uVar24 + 1;
  } while (iVar4 == 0);
  *(uint *)(this_ptr + 0x2c) = uVar30;
  uVar24 = *arg1;
  uVar29 = uVar24 * -0x30e4432340650000;
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  uVar10 = *(uint *)(lVar7 + (uVar29 >> (bVar15 & 0x3f)) * 4);
  uVar20 = 3;
  if (uVar10 < uVar19) {
LAB_00ee1caf:
    uVar18 = 1 << (*(byte *)((int64_t)puVar6 + 0x104) & 0x1f);
    pcVar8 = (char *)*puVar6;
    lVar5 = puVar6[1];
    uVar9 = (int)pcVar8 - (int)lVar5;
    uVar19 = uVar9 - uVar18;
    if (uVar9 < uVar18) {
      uVar19 = 0;
    }
    if (iVar28 != 0) {
      uVar10 = *(uint *)(puVar6 + 3);
      uVar16 = *(uint *)(puVar6[0xe] + (uVar29 >> (-*(char *)(puVar6 + 0x21) & 0x3fU)) * 4);
      if (uVar10 <= uVar16) {
        puVar23 = (uint64_t *)((int64_t)arg1 + 4);
        lVar7 = puVar6[0x10];
        lVar12 = (uint64_t)uVar26 + lVar12 + 8;
        do {
          uVar29 = (uint64_t)uVar16;
          if (*(int *)(lVar5 + uVar29) == (int)uVar24) {
            puVar31 = (uint64_t *)(lVar5 + uVar29 + 4);
            puVar21 = (uint64_t *)(((int64_t)pcVar8 - (int64_t)puVar31) + (int64_t)puVar23);
            if (param_2 <= puVar21) {
              puVar21 = param_2;
            }
            puVar27 = puVar23;
            puVar17 = puVar31;
            if (puVar23 < (uint64_t *)((int64_t)puVar21 - 7U)) {
              uVar13 = *puVar23 ^ *puVar31;
              if (uVar13 == 0) {
                lVar14 = lVar5 + 0xc + uVar29;
                lVar25 = 0;
                do {
                  puVar27 = (uint64_t *)((int64_t)arg1 + lVar25 + 0xc);
                  if ((uint64_t *)((int64_t)puVar21 - 7U) <= puVar27) {
                    puVar17 = (uint64_t *)(lVar14 + lVar25);
                    goto LAB_00ee1dec;
                  }
                  lVar2 = lVar25 + 8;
                  uVar29 = *(uint64_t *)((int64_t)arg1 + lVar25 + 0xc) ^
                           *(uint64_t *)(lVar14 + lVar25);
                  lVar25 = lVar2;
                } while (uVar29 == 0);
                uVar13 = 0;
                if (uVar29 != 0) {
                  for (; (uVar29 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                  }
                }
                uVar29 = (uVar13 >> 3) + lVar2;
              }
              else {
                uVar29 = 0;
                if (uVar13 != 0) {
                  for (; (uVar13 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar29 = uVar29 >> 3;
              }
            }
            else {
LAB_00ee1dec:
              if ((puVar27 < (uint64_t *)((int64_t)puVar21 - 3U)) &&
                 ((int)*puVar17 == (int)*puVar27)) {
                puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
                puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
              }
              if ((puVar27 < (uint64_t *)((int64_t)puVar21 - 1U)) &&
                 ((short)*puVar17 == (short)*puVar27)) {
                puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
                puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
              }
              if (puVar27 < puVar21) {
                puVar27 = (uint64_t *)
                          ((int64_t)puVar27 + (uint64_t)((char)*puVar17 == (char)*puVar27));
              }
              uVar29 = (int64_t)puVar27 - (int64_t)puVar23;
            }
            if ((char *)((int64_t)puVar31 + uVar29) == pcVar8) {
              puVar21 = (uint64_t *)((int64_t)puVar23 + uVar29);
              puVar31 = puVar21;
              puVar27 = puVar11;
              if (puVar21 < puVar1) {
                uVar13 = *puVar21 ^ *puVar11;
                if (uVar13 == 0) {
                  lVar14 = 0;
                  do {
                    puVar31 = (uint64_t *)((int64_t)arg1 + lVar14 + uVar29 + 0xc);
                    if (puVar1 <= puVar31) {
                      puVar27 = (uint64_t *)(lVar14 + lVar12);
                      goto LAB_00ee1ebc;
                    }
                    lVar25 = lVar14 + 8;
                    uVar13 = *(uint64_t *)((int64_t)arg1 + lVar14 + uVar29 + 0xc) ^
                             *(uint64_t *)(lVar12 + lVar14);
                    lVar14 = lVar25;
                  } while (uVar13 == 0);
                  uVar22 = 0;
                  if (uVar13 != 0) {
                    for (; (uVar13 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                    }
                  }
                  uVar22 = (uVar22 >> 3) + lVar25;
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
LAB_00ee1ebc:
                if ((puVar31 < (uint64_t *)((int64_t)param_2 - 3U)) &&
                   ((int)*puVar27 == (int)*puVar31)) {
                  puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
                  puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
                }
                if ((puVar31 < (uint64_t *)((int64_t)param_2 + -1)) &&
                   ((short)*puVar27 == (short)*puVar31)) {
                  puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
                  puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
                }
                if (puVar31 < param_2) {
                  puVar31 = (uint64_t *)
                            ((int64_t)puVar31 + (uint64_t)((char)*puVar27 == (char)*puVar31));
                }
                uVar22 = (int64_t)puVar31 - (int64_t)puVar21;
              }
              uVar29 = uVar29 + uVar22;
            }
            uVar29 = uVar29 + 4;
            if ((uVar20 < uVar29) &&
               (*param_1 = (uint64_t)((uVar9 + (uVar30 - uVar26) + 3) - uVar16), uVar20 = uVar29,
               (uint64_t *)((int64_t)arg1 + uVar29) == param_2)) {
              return uVar29;
            }
          }
          if (uVar16 <= uVar19) {
            return uVar20;
          }
          iVar28 = iVar28 + -1;
          if (iVar28 == 0) {
            return uVar20;
          }
          uVar16 = *(uint *)(lVar7 + (uint64_t)(uVar16 & uVar18 - 1) * 4);
          if (uVar16 < uVar10) {
            return uVar20;
          }
        } while( true );
      }
    }
    return uVar20;
  }
  uVar13 = 3;
  do {
    puVar23 = (uint64_t *)(lVar12 + (uint64_t)uVar10);
    if (*(int *)((uVar13 - 3) + (int64_t)puVar23) == *(int *)((int64_t)arg1 + (uVar13 - 3)))
    {
      puVar21 = arg1;
      if (arg1 < puVar1) {
        uVar22 = *arg1 ^ *puVar23;
        if (uVar22 == 0) {
          lVar7 = lVar12 + 8 + (uint64_t)uVar10;
          lVar14 = 0;
          do {
            puVar21 = (uint64_t *)((int64_t)arg1 + lVar14 + 8);
            if (puVar1 <= puVar21) {
              puVar23 = (uint64_t *)(lVar7 + lVar14);
              goto LAB_00ee1fb6;
            }
            lVar25 = lVar14 + 8;
            uVar20 = *(uint64_t *)((int64_t)arg1 + lVar14 + 8) ^
                     *(uint64_t *)(lVar7 + lVar14);
            lVar14 = lVar25;
          } while (uVar20 == 0);
          uVar22 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
            }
          }
          uVar20 = (uVar22 >> 3) + lVar25;
        }
        else {
          uVar20 = 0;
          if (uVar22 != 0) {
            for (; (uVar22 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
            }
          }
          uVar20 = uVar20 >> 3;
        }
      }
      else {
LAB_00ee1fb6:
        if ((puVar21 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar23 == (int)*puVar21)) {
          puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
        }
        if ((puVar21 < (uint64_t *)((int64_t)param_2 + -1)) &&
           ((short)*puVar23 == (short)*puVar21)) {
          puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
          puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
        }
        if (puVar21 < param_2) {
          puVar21 = (uint64_t *)((int64_t)puVar21 + (uint64_t)((char)*puVar23 == (char)*puVar21))
          ;
        }
        uVar20 = (int64_t)puVar21 - (int64_t)arg1;
      }
      if ((uVar13 < uVar20) &&
         (*param_1 = (uint64_t)((uVar30 + 3) - uVar10), uVar13 = uVar20,
         (uint64_t *)((int64_t)arg1 + uVar20) == param_2)) goto LAB_00ee1caf;
    }
    uVar20 = uVar13;
    if ((uVar10 <= uVar9) ||
       ((iVar28 = iVar28 + -1, iVar28 == 0 ||
        (uVar10 = *(uint *)(lVar5 + (uint64_t)(uVar10 & uVar18 - 1) * 4), uVar13 = uVar20,
        uVar10 < uVar19)))) goto LAB_00ee1caf;
  } while( true );
}


// Function: FUN_00eea571
// Address: 00eea571
// Size: 2128 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00eea571(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  byte bVar5;
  void*puVar6;
  int64_t lVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint64_t uVar18;
  byte bVar19;
  uint uVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint uVar24;
  uint64_t *arg1;
  uint64_t uVar25;
  int64_t lVar26;
  int64_t lVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  int iVar30;
  int64_t this_ptr;
  uint64_t *puVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  uint uVar34;
  uint64_t uVar35;
  uint uVar36;
  uint uVar37;
  uint64_t *puVar38;
  uint64_t local_c0;
  
  bVar5 = *(byte *)(this_ptr + 0x104);
  uVar37 = 1 << (bVar5 & 0x1f);
  lVar17 = *(int64_t *)(this_ptr + 8);
  uVar10 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar36 = (int)arg1 - (int)lVar17;
  uVar34 = *(uint *)(this_ptr + 0x1c);
  uVar20 = uVar36 - uVar10;
  if (uVar36 - uVar34 <= uVar10) {
    uVar20 = uVar34;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar20 = uVar34;
  }
  uVar34 = uVar36 - uVar37;
  if (uVar36 < uVar37) {
    uVar34 = 0;
  }
  uVar24 = 1 << (*(byte *)(this_ptr + 0x10c) & 0x1f);
  puVar6 = *(void**)(this_ptr + 0xf8);
  local_c0 = *arg1;
  uVar12 = local_c0 * -0x30e4432345000000 >> (0x42U - *(char *)(puVar6 + 0x21) & 0x3f);
  lVar7 = *(int64_t *)(this_ptr + 0x80);
  uVar10 = *(uint *)(this_ptr + 0x18);
  uVar18 = (uint64_t)uVar10;
  lVar27 = puVar6[0xe];
  bVar19 = 0x40 - (char)*(void*)(this_ptr + 0x108);
  uVar11 = *(uint *)(this_ptr + 0x2c);
  uVar25 = (uint64_t)uVar11;
  uVar9 = uVar36;
  if (uVar36 < uVar11) {
    uVar9 = uVar11;
  }
  puVar4 = (uint64_t *)(lVar17 + uVar18);
  iVar30 = *(int *)(this_ptr + 300);
  lVar21 = *(int64_t *)(this_ptr + 0x70);
  do {
    if (uVar9 == uVar25) break;
    uVar23 = (uint64_t)(*(int64_t *)(lVar17 + uVar25) * -0x30e4432345000000) >> (bVar19 & 0x3f);
    *(void*)(lVar7 + (uint64_t)((uint)uVar25 & ~(-1 << (bVar5 & 0x1f))) * 4) =
         *(void*)(lVar21 + uVar23 * 4);
    *(uint *)(lVar21 + uVar23 * 4) = (uint)uVar25;
    uVar25 = uVar25 + 1;
  } while (iVar30 == 0);
  *(uint *)(this_ptr + 0x2c) = uVar36;
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  puVar2 = (uint64_t *)((int64_t)param_2 - 3);
  puVar13 = (uint64_t *)((int64_t)param_2 + -1);
  uVar11 = *(uint *)(lVar21 + (local_c0 * -0x30e4432345000000 >> (bVar19 & 0x3f)) * 4);
  uVar25 = 3;
  if (uVar11 < uVar20) {
LAB_00eea723:
    puVar29 = (uint64_t *)((int64_t)arg1 + 4);
    pcVar8 = (char *)*puVar6;
    lVar7 = puVar6[1];
    lVar21 = 0;
    do {
      lVar21 = lVar21 + 1;
    } while (lVar21 != 3);
    uVar34 = 3;
    if (uVar24 < 3) {
      uVar34 = uVar24;
    }
    uVar20 = *(uint *)(lVar27 + (uVar12 << 4 | 0xc));
    uVar23 = (uint64_t)(uVar20 >> 8);
    lVar21 = puVar6[0x10];
    iVar30 = (((int)pcVar8 - (int)lVar7) - uVar10) + uVar36 + 3;
    if (uVar34 != 0) {
      lVar14 = lVar17 + uVar18 + 8;
      uVar35 = 0;
      do {
        uVar10 = *(uint *)(lVar27 + (uVar35 + uVar12 * 4) * 4);
        uVar16 = (uint64_t)uVar10;
        if (uVar16 == 0) {
          return uVar25;
        }
        if (*(int *)(lVar7 + uVar16) == (int)local_c0) {
          puVar38 = (uint64_t *)((int *)(lVar7 + uVar16) + 1);
          puVar31 = (uint64_t *)(((int64_t)pcVar8 - (int64_t)puVar38) + (int64_t)puVar29);
          if (param_2 <= puVar31) {
            puVar31 = param_2;
          }
          puVar28 = puVar29;
          puVar33 = puVar38;
          if (puVar29 < (uint64_t *)((int64_t)puVar31 - 7U)) {
            uVar15 = *puVar29 ^ *puVar38;
            if (uVar15 == 0) {
              lVar26 = lVar7 + 0xc + uVar16;
              lVar22 = 0;
              do {
                puVar28 = (uint64_t *)((int64_t)arg1 + lVar22 + 0xc);
                if ((uint64_t *)((int64_t)puVar31 - 7U) <= puVar28) {
                  puVar33 = (uint64_t *)(lVar26 + lVar22);
                  goto LAB_00eea8a2;
                }
                lVar3 = lVar22 + 8;
                uVar16 = *(uint64_t *)((int64_t)arg1 + lVar22 + 0xc) ^
                         *(uint64_t *)(lVar26 + lVar22);
                lVar22 = lVar3;
              } while (uVar16 == 0);
              uVar15 = 0;
              if (uVar16 != 0) {
                for (; (uVar16 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar16 = (uVar15 >> 3) + lVar3;
            }
            else {
              uVar16 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              uVar16 = uVar16 >> 3;
            }
          }
          else {
LAB_00eea8a2:
            if ((puVar28 < (uint64_t *)((int64_t)puVar31 - 3U)) &&
               ((int)*puVar33 == (int)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((puVar28 < (uint64_t *)((int64_t)puVar31 - 1U)) &&
               ((short)*puVar33 == (short)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            }
            if (puVar28 < puVar31) {
              puVar28 = (uint64_t *)
                        ((int64_t)puVar28 + (uint64_t)((char)*puVar33 == (char)*puVar28));
            }
            uVar16 = (int64_t)puVar28 - (int64_t)puVar29;
          }
          if ((char *)((int64_t)puVar38 + uVar16) == pcVar8) {
            puVar31 = (uint64_t *)((int64_t)puVar29 + uVar16);
            puVar28 = puVar4;
            puVar38 = puVar31;
            if (puVar31 < puVar1) {
              uVar15 = *puVar31 ^ *puVar4;
              if (uVar15 == 0) {
                lVar26 = 0;
                do {
                  puVar38 = (uint64_t *)((int64_t)arg1 + lVar26 + uVar16 + 0xc);
                  if (puVar1 <= puVar38) {
                    puVar28 = (uint64_t *)(lVar26 + lVar14);
                    goto LAB_00eea982;
                  }
                  lVar22 = lVar26 + 8;
                  uVar15 = *(uint64_t *)((int64_t)arg1 + lVar26 + uVar16 + 0xc) ^
                           *(uint64_t *)(lVar14 + lVar26);
                  lVar26 = lVar22;
                } while (uVar15 == 0);
                uVar32 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                  }
                }
                uVar32 = (uVar32 >> 3) + lVar22;
              }
              else {
                uVar32 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                  }
                }
                uVar32 = uVar32 >> 3;
              }
            }
            else {
LAB_00eea982:
              if ((puVar38 < puVar2) && ((int)*puVar28 == (int)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
              }
              if ((puVar38 < puVar13) && ((short)*puVar28 == (short)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              }
              if (puVar38 < param_2) {
                puVar38 = (uint64_t *)
                          ((int64_t)puVar38 + (uint64_t)((char)*puVar28 == (char)*puVar38));
              }
              uVar32 = (int64_t)puVar38 - (int64_t)puVar31;
            }
            uVar16 = uVar16 + uVar32;
          }
          uVar16 = uVar16 + 4;
          if ((uVar25 < uVar16) &&
             (*param_1 = (uint64_t)(iVar30 - uVar10), uVar25 = uVar16,
             (uint64_t *)((int64_t)arg1 + uVar16) == param_2)) {
            return uVar16;
          }
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar34);
    }
    uVar24 = uVar24 - uVar34;
    if ((uVar20 & 0xff) < uVar24) {
      uVar24 = uVar20 & 0xff;
    }
    if (uVar24 != 0) {
      uVar12 = 0;
      do {
        uVar12 = uVar12 + 1;
      } while (uVar24 != uVar12);
      lVar17 = lVar17 + uVar18 + 8;
      uVar34 = 0;
      do {
        uVar20 = *(uint *)(lVar21 + uVar23 * 4);
        uVar12 = (uint64_t)uVar20;
        if (*(int *)(lVar7 + uVar12) == (int)local_c0) {
          puVar38 = (uint64_t *)(lVar7 + uVar12 + 4);
          puVar31 = (uint64_t *)(((int64_t)pcVar8 - (int64_t)puVar38) + (int64_t)puVar29);
          if (param_2 <= puVar31) {
            puVar31 = param_2;
          }
          puVar28 = puVar29;
          puVar33 = puVar38;
          if (puVar29 < (uint64_t *)((int64_t)puVar31 - 7U)) {
            uVar18 = *puVar29 ^ *puVar38;
            if (uVar18 == 0) {
              lVar27 = lVar7 + 0xc + uVar12;
              lVar14 = 0;
              do {
                puVar28 = (uint64_t *)((int64_t)arg1 + lVar14 + 0xc);
                if ((uint64_t *)((int64_t)puVar31 - 7U) <= puVar28) {
                  puVar33 = (uint64_t *)(lVar27 + lVar14);
                  goto LAB_00eeab1d;
                }
                lVar26 = lVar14 + 8;
                uVar12 = *(uint64_t *)((int64_t)arg1 + lVar14 + 0xc) ^
                         *(uint64_t *)(lVar27 + lVar14);
                lVar14 = lVar26;
              } while (uVar12 == 0);
              uVar18 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar12 = (uVar18 >> 3) + lVar26;
            }
            else {
              uVar12 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                }
              }
              uVar12 = uVar12 >> 3;
            }
          }
          else {
LAB_00eeab1d:
            if ((puVar28 < (uint64_t *)((int64_t)puVar31 - 3U)) &&
               ((int)*puVar33 == (int)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((puVar28 < (uint64_t *)((int64_t)puVar31 - 1U)) &&
               ((short)*puVar33 == (short)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            }
            if (puVar28 < puVar31) {
              puVar28 = (uint64_t *)
                        ((int64_t)puVar28 + (uint64_t)((char)*puVar33 == (char)*puVar28));
            }
            uVar12 = (int64_t)puVar28 - (int64_t)puVar29;
          }
          if ((char *)((int64_t)puVar38 + uVar12) == pcVar8) {
            puVar31 = (uint64_t *)((int64_t)puVar29 + uVar12);
            puVar28 = puVar4;
            puVar38 = puVar31;
            if (puVar31 < puVar1) {
              uVar18 = *puVar31 ^ *puVar4;
              if (uVar18 == 0) {
                lVar27 = 0;
                do {
                  puVar38 = (uint64_t *)((int64_t)arg1 + lVar27 + uVar12 + 0xc);
                  if (puVar1 <= puVar38) {
                    puVar28 = (uint64_t *)(lVar27 + lVar17);
                    goto LAB_00eeabe0;
                  }
                  lVar14 = lVar27 + 8;
                  uVar18 = *(uint64_t *)((int64_t)arg1 + lVar27 + uVar12 + 0xc) ^
                           *(uint64_t *)(lVar17 + lVar27);
                  lVar27 = lVar14;
                } while (uVar18 == 0);
                uVar35 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                  }
                }
                uVar35 = (uVar35 >> 3) + lVar14;
              }
              else {
                uVar35 = 0;
                if (uVar18 != 0) {
                  for (; (uVar18 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                  }
                }
                uVar35 = uVar35 >> 3;
              }
            }
            else {
LAB_00eeabe0:
              if ((puVar38 < puVar2) && ((int)*puVar28 == (int)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
              }
              if ((puVar38 < puVar13) && ((short)*puVar28 == (short)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              }
              if (puVar38 < param_2) {
                puVar38 = (uint64_t *)
                          ((int64_t)puVar38 + (uint64_t)((char)*puVar28 == (char)*puVar38));
              }
              uVar35 = (int64_t)puVar38 - (int64_t)puVar31;
            }
            uVar12 = uVar12 + uVar35;
          }
          uVar12 = uVar12 + 4;
          if ((uVar25 < uVar12) &&
             (*param_1 = (uint64_t)(iVar30 - uVar20), uVar25 = uVar12,
             (uint64_t *)((int64_t)arg1 + uVar12) == param_2)) {
            return uVar12;
          }
        }
        uVar34 = uVar34 + 1;
        uVar23 = uVar23 + 1;
      } while (uVar34 != uVar24);
    }
    return uVar25;
  }
  uVar25 = 3;
  do {
    puVar29 = (uint64_t *)(lVar17 + (uint64_t)uVar11);
    if (*(int *)((uVar25 - 3) + (int64_t)puVar29) == *(int *)((int64_t)arg1 + (uVar25 - 3)))
    {
      puVar31 = arg1;
      if (arg1 < puVar1) {
        local_c0 = *arg1;
        uVar23 = *puVar29 ^ local_c0;
        if (uVar23 == 0) {
          lVar21 = lVar17 + 8 + (uint64_t)uVar11;
          lVar14 = 0;
          do {
            puVar31 = (uint64_t *)((int64_t)arg1 + lVar14 + 8);
            if (puVar1 <= puVar31) {
              puVar29 = (uint64_t *)(lVar21 + lVar14);
              goto LAB_00eeace1;
            }
            lVar26 = lVar14 + 8;
            uVar23 = *(uint64_t *)((int64_t)arg1 + lVar14 + 8) ^
                     *(uint64_t *)(lVar21 + lVar14);
            lVar14 = lVar26;
          } while (uVar23 == 0);
          uVar35 = 0;
          if (uVar23 != 0) {
            for (; (uVar23 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = (uVar35 >> 3) + lVar26;
        }
        else {
          uVar35 = 0;
          if (uVar23 != 0) {
            for (; (uVar23 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = uVar35 >> 3;
        }
      }
      else {
LAB_00eeace1:
        if ((puVar31 < puVar2) && ((int)*puVar29 == (int)*puVar31)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
        }
        if ((puVar31 < puVar13) && ((short)*puVar29 == (short)*puVar31)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
          puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
        }
        if (puVar31 < param_2) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + (uint64_t)((char)*puVar29 == (char)*puVar31))
          ;
        }
        uVar35 = (int64_t)puVar31 - (int64_t)arg1;
      }
      if ((uVar25 < uVar35) &&
         (*param_1 = (uint64_t)((uVar36 + 3) - uVar11), uVar25 = uVar35,
         (uint64_t *)((int64_t)arg1 + uVar35) == param_2)) goto LAB_00eea723;
    }
    if ((uVar11 <= uVar34) ||
       ((uVar24 = uVar24 - 1, uVar24 == 0 ||
        (uVar11 = *(uint *)(lVar7 + (uint64_t)(uVar11 & uVar37 - 1) * 4), uVar11 < uVar20))))
    goto LAB_00eea723;
  } while( true );
}


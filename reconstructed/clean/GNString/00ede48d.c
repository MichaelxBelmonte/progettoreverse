// Function: FUN_00ede48d
// Address: 00ede48d
// Size: 2255 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ede48d(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  byte bVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  byte bVar15;
  byte bVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint64_t *arg1;
  uint64_t uVar26;
  int64_t this_ptr;
  char cVar27;
  uint64_t *puVar28;
  uint64_t uVar29;
  int64_t lVar30;
  uint uVar31;
  uint64_t uVar32;
  void*puVar33;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t local_138 [16] [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar8 = *(int64_t *)(this_ptr + 0x70);
  lVar18 = *(int64_t *)(this_ptr + 0x38);
  lVar4 = *(int64_t *)(this_ptr + 8);
  uVar6 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar32 = (int64_t)arg1 - lVar4;
  uVar24 = *(uint *)(this_ptr + 0x1c);
  uVar31 = (uint)uVar32;
  uVar22 = uVar31 - uVar6;
  if (uVar31 - uVar24 <= uVar6) {
    uVar22 = uVar24;
  }
  lVar5 = *(int64_t *)(this_ptr + 0x10);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar22 = uVar24;
  }
  uVar24 = 5;
  if (*(uint *)(this_ptr + 0x10c) < 5) {
    uVar24 = *(uint *)(this_ptr + 0x10c);
  }
  uVar6 = *(uint *)(this_ptr + 0x18);
  uVar17 = (uint64_t)uVar6;
  iVar23 = 1 << ((byte)uVar24 & 0x1f);
  uVar26 = *(uint64_t *)(this_ptr + 0x60);
  cVar27 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar24 = *(uint *)(this_ptr + 0x2c);
    uVar9 = (uint64_t)uVar24;
    bVar10 = 0x38 - cVar27;
    lVar12 = lVar8;
    lVar30 = lVar18;
    bVar16 = bVar10;
    if (0x180 < uVar31 - uVar24) {
      if (uVar24 < 0xffffffa0) {
        uVar29 = uVar9 + 0x5f;
        uVar21 = uVar26;
        while( true ) {
          uVar14 = (uint64_t)((uint)uVar9 & 7);
          uVar24 = *(uint *)(this_ptr + 0x40 + uVar14 * 4);
          *(int *)(this_ptr + 0x40 + uVar14 * 4) =
               (int)((*(int64_t *)(lVar4 + 8 + uVar9) * -0x30e4432345000000 ^ uVar21) >>
                    (bVar10 & 0x3f));
          uVar21 = (uint64_t)(uVar24 >> 3) & 0x1fffffe0;
          bVar16 = *(char *)(lVar18 + uVar21) - 1U & 0x1f;
          lVar30 = 0;
          if (bVar16 == 0) {
            lVar30 = 0x1f;
          }
          lVar30 = (uint64_t)bVar16 + lVar30;
          *(char *)(lVar18 + uVar21) = (char)lVar30;
          *(char *)(lVar18 + uVar21 + lVar30) = (char)uVar24;
          *(uint *)(lVar8 + (lVar30 + uVar21) * 4) = (uint)uVar9;
          if (uVar29 == uVar9) break;
          uVar21 = *(uint64_t *)(this_ptr + 0x60);
          uVar9 = uVar9 + 1;
        }
        lVar30 = *(int64_t *)(this_ptr + 0x38);
        lVar12 = *(int64_t *)(this_ptr + 0x70);
        bVar16 = 0x38 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar9 = (uint64_t)(uVar31 - 0x20);
      uVar24 = 0;
      if (lVar4 + uVar9 <= (int64_t)arg1 + 1U) {
        uVar24 = ((int)((int64_t)arg1 + 1U) - (int)(lVar4 + uVar9)) + 1;
      }
      uVar25 = 8;
      if (uVar24 < 8) {
        uVar25 = uVar24;
      }
      uVar24 = (uVar25 + uVar31) - 0x20;
      if (uVar31 - 0x20 < uVar24) {
        uVar21 = *(uint64_t *)(this_ptr + 0x60);
        uVar29 = uVar9;
        do {
          *(int *)(this_ptr + 0x40 + (uint64_t)((uint)uVar29 & 7) * 4) =
               (int)((*(int64_t *)(lVar4 + uVar29) * -0x30e4432345000000 ^ uVar21) >>
                    (bVar16 & 0x3f));
          uVar29 = uVar29 + 1;
        } while (uVar24 != uVar29);
      }
    }
    if ((uint)uVar9 < uVar31) {
      lVar19 = *(int64_t *)(this_ptr + 8);
      do {
        uVar21 = (uint64_t)((uint)uVar9 & 7);
        uVar24 = *(uint *)(this_ptr + 0x40 + uVar21 * 4);
        *(int *)(this_ptr + 0x40 + uVar21 * 4) =
             (int)((*(int64_t *)(lVar19 + 8 + uVar9) * -0x30e4432345000000 ^
                   *(uint64_t *)(this_ptr + 0x60)) >> (bVar16 & 0x3f));
        uVar21 = (uint64_t)(uVar24 >> 3) & 0x1fffffe0;
        bVar15 = *(char *)(lVar30 + uVar21) - 1U & 0x1f;
        lVar7 = 0;
        if (bVar15 == 0) {
          lVar7 = 0x1f;
        }
        lVar7 = (uint64_t)bVar15 + lVar7;
        *(char *)(lVar30 + uVar21) = (char)lVar7;
        *(char *)(lVar30 + uVar21 + lVar7) = (char)uVar24;
        *(uint *)(lVar12 + (lVar7 + uVar21) * 4) = (uint)uVar9;
        uVar9 = uVar9 + 1;
      } while ((uVar32 & 0xffffffff) != uVar9);
    }
    *(uint *)(this_ptr + 0x2c) = uVar31;
    uVar9 = (uint64_t)*(uint *)(this_ptr + 0x40 + (uint64_t)(uVar31 & 7) * 4);
    *(int *)(this_ptr + 0x40 + (uint64_t)(uVar31 & 7) * 4) =
         (int)((*(int64_t *)((uVar32 & 0xffffffff) + 8 + lVar4) * -0x30e4432345000000 ^ uVar26) >>
              (bVar10 & 0x3f));
  }
  else {
    uVar32 = *arg1;
    *(uint *)(this_ptr + 0x2c) = uVar31;
    uVar9 = (uVar32 * -0x30e4432345000000 ^ uVar26) >> (0x38U - cVar27 & 0x3f) & 0xffffffff;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + (uint)uVar9;
  uVar32 = (uint64_t)((uint)(uVar9 >> 3) & 0x1fffffe0);
  bVar16 = *(byte *)(lVar18 + uVar32);
  puVar33 = (void*)(lVar18 + uVar32);
  auVar34 = pshufb(ZEXT416((uint)uVar9),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar18 = 0;
  do {
    pcVar3 = puVar33 + lVar18 * 4;
    auVar35[0] = -(*pcVar3 == auVar34[0]);
    auVar35[1] = -(pcVar3[1] == auVar34[1]);
    auVar35[2] = -(pcVar3[2] == auVar34[2]);
    auVar35[3] = -(pcVar3[3] == auVar34[3]);
    auVar35[4] = -(pcVar3[4] == auVar34[4]);
    auVar35[5] = -(pcVar3[5] == auVar34[5]);
    auVar35[6] = -(pcVar3[6] == auVar34[6]);
    auVar35[7] = -(pcVar3[7] == auVar34[7]);
    auVar35[8] = -(pcVar3[8] == auVar34[8]);
    auVar35[9] = -(pcVar3[9] == auVar34[9]);
    auVar35[10] = -(pcVar3[10] == auVar34[10]);
    auVar35[0xb] = -(pcVar3[0xb] == auVar34[0xb]);
    auVar35[0xc] = -(pcVar3[0xc] == auVar34[0xc]);
    auVar35[0xd] = -(pcVar3[0xd] == auVar34[0xd]);
    auVar35[0xe] = -(pcVar3[0xe] == auVar34[0xe]);
    auVar35[0xf] = -(pcVar3[0xf] == auVar34[0xf]);
    *(uint *)(local_138[0] + lVar18) =
         (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar35[0xf] >> 7) << 0xf);
    lVar18 = lVar18 + 4;
  } while (lVar18 != 8);
  uVar24 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar24 = uVar24 >> (bVar16 & 0x1f) | uVar24 << 0x20 - (bVar16 & 0x1f);
  lVar8 = lVar8 + uVar32 * 4;
  lVar18 = 0;
  if (uVar24 != 0) {
    uVar32 = (uint64_t)uVar24;
    lVar30 = 0;
    do {
      lVar12 = 0;
      if (uVar32 != 0) {
        for (; (uVar32 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
        }
      }
      uVar26 = (uint64_t)((int)lVar12 + (uint)bVar16 & 0x1f);
      if (uVar26 != 0) {
        uVar24 = *(uint *)(lVar8 + uVar26 * 4);
        if (uVar24 < uVar22) goto LAB_00ede7b1;
        *(uint *)(local_138[0] + lVar30 * 4) = uVar24;
        lVar30 = lVar30 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar32 = uVar32 & uVar32 - 1;
      if ((uVar32 == 0) || (iVar23 == 0)) goto LAB_00ede7b1;
    } while( true );
  }
  lVar30 = 0;
LAB_00ede7b1:
  uVar32 = (uint64_t)(bVar16 - 1 & 0x1f);
  if (uVar32 == 0) {
    lVar18 = 0x1f;
  }
  lVar18 = lVar18 + uVar32;
  *puVar33 = (char)lVar18;
  puVar33[lVar18] = (char)uVar9;
  iVar23 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar23 + 1;
  *(int *)(lVar8 + lVar18 * 4) = iVar23;
  if (lVar30 == 0) {
    uVar32 = 3;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)param_2 - 7);
    puVar2 = (uint64_t *)((int64_t)arg1 + 4);
    lVar8 = uVar17 + lVar4 + 8;
    lVar18 = 0;
    uVar26 = 3;
    do {
      uVar24 = *(uint *)(local_138[0] + lVar18 * 4);
      uVar32 = (uint64_t)uVar24;
      if (uVar24 < uVar6) {
        if (*(int *)(lVar5 + uVar32) == (int)*arg1) {
          puVar28 = (uint64_t *)(lVar5 + uVar32 + 4);
          puVar11 = (uint64_t *)
                    (((int64_t)(uVar17 + lVar5) - (int64_t)puVar28) + (int64_t)puVar2);
          if (param_2 <= puVar11) {
            puVar11 = param_2;
          }
          puVar13 = puVar2;
          puVar20 = puVar28;
          if (puVar2 < (uint64_t *)((int64_t)puVar11 - 7U)) {
            uVar9 = *puVar2 ^ *puVar28;
            if (uVar9 == 0) {
              lVar12 = lVar5 + 0xc + uVar32;
              lVar19 = 0;
              do {
                puVar13 = (uint64_t *)((int64_t)arg1 + lVar19 + 0xc);
                if ((uint64_t *)((int64_t)puVar11 - 7U) <= puVar13) {
                  puVar20 = (uint64_t *)(lVar12 + lVar19);
                  goto LAB_00ede9d9;
                }
                lVar7 = lVar19 + 8;
                uVar32 = *(uint64_t *)((int64_t)arg1 + lVar19 + 0xc) ^
                         *(uint64_t *)(lVar12 + lVar19);
                lVar19 = lVar7;
              } while (uVar32 == 0);
              uVar9 = 0;
              if (uVar32 != 0) {
                for (; (uVar32 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar32 = (uVar9 >> 3) + lVar7;
            }
            else {
              uVar32 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00ede9d9:
            if ((puVar13 < (uint64_t *)((int64_t)puVar11 - 3U)) &&
               ((int)*puVar20 == (int)*puVar13)) {
              puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            }
            if ((puVar13 < (uint64_t *)((int64_t)puVar11 - 1U)) &&
               ((short)*puVar20 == (short)*puVar13)) {
              puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            }
            if (puVar13 < puVar11) {
              puVar13 = (uint64_t *)
                        ((int64_t)puVar13 + (uint64_t)((char)*puVar20 == (char)*puVar13));
            }
            uVar32 = (int64_t)puVar13 - (int64_t)puVar2;
          }
          if ((char *)((int64_t)puVar28 + uVar32) == (char *)(uVar17 + lVar5)) {
            puVar11 = (uint64_t *)((int64_t)puVar2 + uVar32);
            puVar13 = (uint64_t *)(lVar4 + uVar17);
            puVar28 = puVar11;
            if (puVar11 < puVar1) {
              uVar9 = *puVar11 ^ *(uint64_t *)(lVar4 + uVar17);
              if (uVar9 == 0) {
                lVar12 = 0;
                do {
                  puVar28 = (uint64_t *)((int64_t)arg1 + lVar12 + uVar32 + 0xc);
                  if (puVar1 <= puVar28) {
                    puVar13 = (uint64_t *)(lVar12 + lVar8);
                    goto LAB_00edeab3;
                  }
                  lVar19 = lVar12 + 8;
                  uVar9 = *(uint64_t *)((int64_t)arg1 + lVar12 + uVar32 + 0xc) ^
                          *(uint64_t *)(lVar8 + lVar12);
                  lVar12 = lVar19;
                } while (uVar9 == 0);
                uVar21 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                uVar21 = (uVar21 >> 3) + lVar19;
              }
              else {
                uVar21 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                uVar21 = uVar21 >> 3;
              }
            }
            else {
LAB_00edeab3:
              if ((puVar28 < (uint64_t *)((int64_t)param_2 - 3U)) &&
                 ((int)*puVar13 == (int)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
              }
              if ((puVar28 < (uint64_t *)((int64_t)param_2 - 1U)) &&
                 ((short)*puVar13 == (short)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
              }
              if (puVar28 < param_2) {
                puVar28 = (uint64_t *)
                          ((int64_t)puVar28 + (uint64_t)((char)*puVar13 == (char)*puVar28));
              }
              uVar21 = (int64_t)puVar28 - (int64_t)puVar11;
            }
            uVar32 = uVar32 + uVar21;
          }
          uVar32 = uVar32 + 4;
LAB_00edeb1b:
          if ((uVar26 < uVar32) &&
             (*param_1 = (uint64_t)((uVar31 + 3) - uVar24), uVar26 = uVar32,
             (uint64_t *)((int64_t)arg1 + uVar32) == param_2)) break;
        }
      }
      else {
        puVar11 = (uint64_t *)(lVar4 + uVar32);
        if (*(int *)((uVar26 - 3) + (int64_t)puVar11) ==
            *(int *)((int64_t)arg1 + (uVar26 - 3))) {
          puVar28 = arg1;
          if (arg1 < puVar1) {
            uVar9 = *arg1 ^ *puVar11;
            if (uVar9 == 0) {
              lVar12 = lVar4 + 8 + uVar32;
              lVar19 = 0;
              do {
                puVar28 = (uint64_t *)((int64_t)arg1 + lVar19 + 8);
                if (puVar1 <= puVar28) {
                  puVar11 = (uint64_t *)(lVar12 + lVar19);
                  goto LAB_00ede90b;
                }
                lVar7 = lVar19 + 8;
                uVar32 = *(uint64_t *)((int64_t)arg1 + lVar19 + 8) ^
                         *(uint64_t *)(lVar12 + lVar19);
                lVar19 = lVar7;
              } while (uVar32 == 0);
              uVar9 = 0;
              if (uVar32 != 0) {
                for (; (uVar32 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar32 = (uVar9 >> 3) + lVar7;
            }
            else {
              uVar32 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00ede90b:
            if ((puVar28 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar11 == (int)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
              puVar11 = (uint64_t *)((int64_t)puVar11 + 4);
            }
            if ((puVar28 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar11 == (short)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              puVar11 = (uint64_t *)((int64_t)puVar11 + 2);
            }
            if (puVar28 < param_2) {
              puVar28 = (uint64_t *)
                        ((int64_t)puVar28 + (uint64_t)((char)*puVar11 == (char)*puVar28));
            }
            uVar32 = (int64_t)puVar28 - (int64_t)arg1;
          }
          goto LAB_00edeb1b;
        }
      }
      uVar32 = uVar26;
      lVar18 = lVar18 + 1;
      uVar26 = uVar32;
    } while (lVar18 != lVar30);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar32;
  }
                      ___stack_chk_fail();
}


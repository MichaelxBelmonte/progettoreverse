// Function: FUN_00edcacd
// Address: 00edcacd
// Size: 2153 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00edcacd(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  byte bVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  byte bVar18;
  uint uVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint64_t uVar22;
  uint uVar23;
  uint64_t *arg1;
  int64_t lVar24;
  int64_t this_ptr;
  uint64_t *puVar25;
  uint uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int64_t lVar29;
  uint uVar30;
  uint64_t *puVar31;
  void*puVar32;
  int iVar33;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t local_138 [16] [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar9 = *(int64_t *)(this_ptr + 0x70);
  lVar4 = *(int64_t *)(this_ptr + 8);
  uVar8 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar27 = (int64_t)arg1 - lVar4;
  uVar12 = *(uint *)(this_ptr + 0x1c);
  uVar26 = (uint)uVar27;
  uVar23 = uVar26 - uVar8;
  if (uVar26 - uVar12 <= uVar8) {
    uVar23 = uVar12;
  }
  lVar20 = *(int64_t *)(this_ptr + 0x38);
  lVar5 = *(int64_t *)(this_ptr + 0x10);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar23 = uVar12;
  }
  uVar12 = 5;
  if (*(uint *)(this_ptr + 0x10c) < 5) {
    uVar12 = *(uint *)(this_ptr + 0x10c);
  }
  iVar33 = 1 << ((byte)uVar12 & 0x1f);
  uVar12 = *(uint *)(this_ptr + 0x18);
  uVar13 = (uint64_t)uVar12;
  uVar17 = *(void*)(this_ptr + 0x60);
  uVar8 = (uint)uVar17;
  cVar6 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar30 = *(uint *)(this_ptr + 0x2c);
    uVar28 = (uint64_t)uVar30;
    bVar11 = 0x18 - cVar6;
    lVar29 = lVar20;
    lVar15 = lVar9;
    bVar18 = bVar11;
    if (0x180 < uVar26 - uVar30) {
      if (uVar30 < 0xffffffa0) {
        uVar10 = uVar28 + 0x5f;
        while( true ) {
          uVar22 = (uint64_t)((uint)uVar28 & 7);
          uVar30 = *(uint *)(this_ptr + 0x40 + uVar22 * 4);
          *(uint *)(this_ptr + 0x40 + uVar22 * 4) =
               (*(int *)(lVar4 + 8 + uVar28) * -0x61c8864f ^ (uint)uVar17) >> (bVar11 & 0x1f);
          uVar22 = (uint64_t)(uVar30 >> 3 & 0x1fffffe0);
          bVar18 = *(char *)(lVar20 + uVar22) - 1U & 0x1f;
          lVar29 = 0;
          if (bVar18 == 0) {
            lVar29 = 0x1f;
          }
          lVar29 = (uint64_t)bVar18 + lVar29;
          *(char *)(lVar20 + uVar22) = (char)lVar29;
          *(char *)(lVar20 + uVar22 + lVar29) = (char)uVar30;
          *(uint *)(lVar9 + (lVar29 + uVar22) * 4) = (uint)uVar28;
          if (uVar10 == uVar28) break;
          uVar17 = *(void*)(this_ptr + 0x60);
          uVar28 = uVar28 + 1;
        }
        lVar29 = *(int64_t *)(this_ptr + 0x38);
        lVar15 = *(int64_t *)(this_ptr + 0x70);
        bVar18 = 0x18 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar28 = (uint64_t)(uVar26 - 0x20);
      uVar30 = 0;
      if (lVar4 + uVar28 <= (int64_t)arg1 + 1U) {
        uVar30 = ((int)((int64_t)arg1 + 1U) - (int)(lVar4 + uVar28)) + 1;
      }
      uVar19 = 8;
      if (uVar30 < 8) {
        uVar19 = uVar30;
      }
      uVar30 = (uVar19 + uVar26) - 0x20;
      if (uVar26 - 0x20 < uVar30) {
        uVar19 = *(uint *)(this_ptr + 0x60);
        uVar10 = uVar28;
        do {
          *(uint *)(this_ptr + 0x40 + (uint64_t)((uint)uVar10 & 7) * 4) =
               (*(int *)(lVar4 + uVar10) * -0x61c8864f ^ uVar19) >> (bVar18 & 0x1f);
          uVar10 = uVar10 + 1;
        } while (uVar30 != uVar10);
      }
    }
    if ((uint)uVar28 < uVar26) {
      lVar14 = *(int64_t *)(this_ptr + 8);
      do {
        uVar10 = (uint64_t)((uint)uVar28 & 7);
        uVar30 = *(uint *)(this_ptr + 0x40 + uVar10 * 4);
        *(uint *)(this_ptr + 0x40 + uVar10 * 4) =
             (*(int *)(lVar14 + 8 + uVar28) * -0x61c8864f ^ *(uint *)(this_ptr + 0x60)) >>
             (bVar18 & 0x1f);
        uVar10 = (uint64_t)(uVar30 >> 3 & 0x1fffffe0);
        bVar7 = *(char *)(lVar29 + uVar10) - 1U & 0x1f;
        lVar24 = 0;
        if (bVar7 == 0) {
          lVar24 = 0x1f;
        }
        lVar24 = (uint64_t)bVar7 + lVar24;
        *(char *)(lVar29 + uVar10) = (char)lVar24;
        *(char *)(uVar10 + lVar29 + lVar24) = (char)uVar30;
        *(uint *)(lVar15 + (lVar24 + uVar10) * 4) = (uint)uVar28;
        uVar28 = uVar28 + 1;
      } while ((uVar27 & 0xffffffff) != uVar28);
    }
    *(uint *)(this_ptr + 0x2c) = uVar26;
    uVar30 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar26 & 7) * 4);
    *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar26 & 7) * 4) =
         (*(int *)((uVar27 & 0xffffffff) + 8 + lVar4) * -0x61c8864f ^ uVar8) >> (bVar11 & 0x1f);
  }
  else {
    uVar30 = ((int)*arg1 * -0x61c8864f ^ uVar8) >> (0x18U - cVar6 & 0x1f);
    *(uint *)(this_ptr + 0x2c) = uVar26;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar30;
  uVar27 = (uint64_t)(uVar30 >> 3 & 0x1fffffe0);
  bVar18 = *(byte *)(lVar20 + uVar27);
  puVar32 = (void*)(lVar20 + uVar27);
  auVar34 = pshufb(ZEXT416(uVar30),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar20 = 0;
  do {
    pcVar3 = puVar32 + lVar20 * 4;
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
    *(uint *)(local_138[0] + lVar20) =
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
    lVar20 = lVar20 + 4;
  } while (lVar20 != 8);
  uVar8 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar8 = uVar8 >> (bVar18 & 0x1f) | uVar8 << 0x20 - (bVar18 & 0x1f);
  lVar9 = lVar9 + uVar27 * 4;
  lVar20 = 0;
  if (uVar8 != 0) {
    uVar27 = (uint64_t)uVar8;
    lVar29 = 0;
    do {
      lVar15 = 0;
      if (uVar27 != 0) {
        for (; (uVar27 >> lVar15 & 1) == 0; lVar15 = lVar15 + 1) {
        }
      }
      uVar28 = (uint64_t)((int)lVar15 + (uint)bVar18 & 0x1f);
      if (uVar28 != 0) {
        uVar8 = *(uint *)(lVar9 + uVar28 * 4);
        if (uVar8 < uVar23) goto LAB_00edcdbd;
        *(uint *)(local_138[0] + lVar29 * 4) = uVar8;
        lVar29 = lVar29 + 1;
        iVar33 = iVar33 + -1;
      }
      uVar27 = uVar27 & uVar27 - 1;
      if ((uVar27 == 0) || (iVar33 == 0)) goto LAB_00edcdbd;
    } while( true );
  }
  lVar29 = 0;
LAB_00edcdbd:
  uVar27 = (uint64_t)(bVar18 - 1 & 0x1f);
  if (uVar27 == 0) {
    lVar20 = 0x1f;
  }
  lVar20 = lVar20 + uVar27;
  *puVar32 = (char)lVar20;
  puVar32[lVar20] = (char)uVar30;
  iVar33 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar33 + 1;
  *(int *)(lVar9 + lVar20 * 4) = iVar33;
  if (lVar29 == 0) {
    uVar27 = 3;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)param_2 - 7);
    puVar2 = (uint64_t *)((int64_t)arg1 + 4);
    lVar9 = uVar13 + lVar4 + 8;
    lVar20 = 0;
    uVar28 = 3;
    do {
      uVar23 = *(uint *)(local_138[0] + lVar20 * 4);
      uVar27 = (uint64_t)uVar23;
      if (uVar23 < uVar12) {
        if (*(int *)(lVar5 + uVar27) == (int)*arg1) {
          puVar31 = (uint64_t *)(lVar5 + uVar27 + 4);
          puVar21 = (uint64_t *)
                    (((int64_t)(uVar13 + lVar5) - (int64_t)puVar31) + (int64_t)puVar2);
          if (param_2 <= puVar21) {
            puVar21 = param_2;
          }
          puVar16 = puVar2;
          puVar25 = puVar31;
          if (puVar2 < (uint64_t *)((int64_t)puVar21 - 7U)) {
            uVar10 = *puVar2 ^ *puVar31;
            if (uVar10 == 0) {
              lVar15 = lVar5 + 0xc + uVar27;
              lVar14 = 0;
              do {
                puVar16 = (uint64_t *)((int64_t)arg1 + lVar14 + 0xc);
                if ((uint64_t *)((int64_t)puVar21 - 7U) <= puVar16) {
                  puVar25 = (uint64_t *)(lVar15 + lVar14);
                  goto LAB_00edcff9;
                }
                lVar24 = lVar14 + 8;
                uVar27 = *(uint64_t *)((int64_t)arg1 + lVar14 + 0xc) ^
                         *(uint64_t *)(lVar15 + lVar14);
                lVar14 = lVar24;
              } while (uVar27 == 0);
              uVar10 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar27 = (uVar10 >> 3) + lVar24;
            }
            else {
              uVar27 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                }
              }
              uVar27 = uVar27 >> 3;
            }
          }
          else {
LAB_00edcff9:
            if ((puVar16 < (uint64_t *)((int64_t)puVar21 - 3U)) &&
               ((int)*puVar25 == (int)*puVar16)) {
              puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            }
            if ((puVar16 < (uint64_t *)((int64_t)puVar21 - 1U)) &&
               ((short)*puVar25 == (short)*puVar16)) {
              puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
            }
            if (puVar16 < puVar21) {
              puVar16 = (uint64_t *)
                        ((int64_t)puVar16 + (uint64_t)((char)*puVar25 == (char)*puVar16));
            }
            uVar27 = (int64_t)puVar16 - (int64_t)puVar2;
          }
          if ((char *)((int64_t)puVar31 + uVar27) == (char *)(uVar13 + lVar5)) {
            puVar21 = (uint64_t *)((int64_t)puVar2 + uVar27);
            puVar16 = (uint64_t *)(lVar4 + uVar13);
            puVar31 = puVar21;
            if (puVar21 < puVar1) {
              uVar10 = *puVar21 ^ *(uint64_t *)(lVar4 + uVar13);
              if (uVar10 == 0) {
                lVar15 = 0;
                do {
                  puVar31 = (uint64_t *)((int64_t)arg1 + lVar15 + uVar27 + 0xc);
                  if (puVar1 <= puVar31) {
                    puVar16 = (uint64_t *)(lVar15 + lVar9);
                    goto LAB_00edd0cd;
                  }
                  lVar14 = lVar15 + 8;
                  uVar10 = *(uint64_t *)((int64_t)arg1 + lVar15 + uVar27 + 0xc) ^
                           *(uint64_t *)(lVar9 + lVar15);
                  lVar15 = lVar14;
                } while (uVar10 == 0);
                uVar22 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar22 = (uVar22 >> 3) + lVar14;
              }
              else {
                uVar22 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar22 = uVar22 >> 3;
              }
            }
            else {
LAB_00edd0cd:
              if ((puVar31 < (uint64_t *)((int64_t)param_2 - 3U)) &&
                 ((int)*puVar16 == (int)*puVar31)) {
                puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
                puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
              }
              if ((puVar31 < (uint64_t *)((int64_t)param_2 - 1U)) &&
                 ((short)*puVar16 == (short)*puVar31)) {
                puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
                puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
              }
              if (puVar31 < param_2) {
                puVar31 = (uint64_t *)
                          ((int64_t)puVar31 + (uint64_t)((char)*puVar16 == (char)*puVar31));
              }
              uVar22 = (int64_t)puVar31 - (int64_t)puVar21;
            }
            uVar27 = uVar27 + uVar22;
          }
          uVar27 = uVar27 + 4;
LAB_00edd13c:
          if ((uVar28 < uVar27) &&
             (*param_1 = (uint64_t)((uVar26 + 3) - uVar23), uVar28 = uVar27,
             (uint64_t *)((int64_t)arg1 + uVar27) == param_2)) break;
        }
      }
      else {
        puVar21 = (uint64_t *)(lVar4 + uVar27);
        if (*(int *)((uVar28 - 3) + (int64_t)puVar21) ==
            *(int *)((int64_t)arg1 + (uVar28 - 3))) {
          puVar31 = arg1;
          if (arg1 < puVar1) {
            uVar10 = *arg1 ^ *puVar21;
            if (uVar10 == 0) {
              lVar15 = lVar4 + 8 + uVar27;
              lVar14 = 0;
              do {
                puVar31 = (uint64_t *)((int64_t)arg1 + lVar14 + 8);
                if (puVar1 <= puVar31) {
                  puVar21 = (uint64_t *)(lVar15 + lVar14);
                  goto LAB_00edcf2c;
                }
                lVar24 = lVar14 + 8;
                uVar27 = *(uint64_t *)((int64_t)arg1 + lVar14 + 8) ^
                         *(uint64_t *)(lVar15 + lVar14);
                lVar14 = lVar24;
              } while (uVar27 == 0);
              uVar10 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar27 = (uVar10 >> 3) + lVar24;
            }
            else {
              uVar27 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                }
              }
              uVar27 = uVar27 >> 3;
            }
          }
          else {
LAB_00edcf2c:
            if ((puVar31 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar21 == (int)*puVar31)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
              puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
            }
            if ((puVar31 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar21 == (short)*puVar31)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
              puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
            }
            if (puVar31 < param_2) {
              puVar31 = (uint64_t *)
                        ((int64_t)puVar31 + (uint64_t)((char)*puVar21 == (char)*puVar31));
            }
            uVar27 = (int64_t)puVar31 - (int64_t)arg1;
          }
          goto LAB_00edd13c;
        }
      }
      uVar27 = uVar28;
      lVar20 = lVar20 + 1;
      uVar28 = uVar27;
    } while (lVar20 != lVar29);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar27;
  }
                      ___stack_chk_fail();
}


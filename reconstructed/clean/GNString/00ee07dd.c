// Function: FUN_00ee07dd
// Address: 00ee07dd
// Size: 2301 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ee07dd(uint64_t *param_1,uint64_t *param_2)

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
  int64_t lVar10;
  uint64_t uVar11;
  byte bVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  uint uVar24;
  uint uVar25;
  uint64_t *arg1;
  int64_t this_ptr;
  int iVar26;
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
  lVar10 = *(int64_t *)(this_ptr + 0x70);
  lVar8 = *(int64_t *)(this_ptr + 0x38);
  lVar4 = *(int64_t *)(this_ptr + 8);
  uVar6 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar32 = (int64_t)arg1 - lVar4;
  uVar19 = *(uint *)(this_ptr + 0x1c);
  uVar31 = (uint)uVar32;
  uVar24 = uVar31 - uVar6;
  if (uVar31 - uVar19 <= uVar6) {
    uVar24 = uVar19;
  }
  lVar5 = *(int64_t *)(this_ptr + 0x10);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar24 = uVar19;
  }
  uVar19 = 6;
  if (*(uint *)(this_ptr + 0x10c) < 6) {
    uVar19 = *(uint *)(this_ptr + 0x10c);
  }
  uVar6 = *(uint *)(this_ptr + 0x18);
  uVar20 = (uint64_t)uVar6;
  iVar26 = 1 << ((byte)uVar19 & 0x1f);
  uVar9 = *(uint64_t *)(this_ptr + 0x60);
  cVar27 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar19 = *(uint *)(this_ptr + 0x2c);
    uVar11 = (uint64_t)uVar19;
    bVar12 = 0x38 - cVar27;
    lVar14 = lVar10;
    lVar30 = lVar8;
    bVar18 = bVar12;
    if (0x180 < uVar31 - uVar19) {
      if (uVar19 < 0xffffffa0) {
        uVar29 = uVar11 + 0x5f;
        uVar23 = uVar9;
        while( true ) {
          uVar16 = (uint64_t)((uint)uVar11 & 7);
          uVar19 = *(uint *)(this_ptr + 0x40 + uVar16 * 4);
          *(int *)(this_ptr + 0x40 + uVar16 * 4) =
               (int)((*(int64_t *)(lVar4 + 8 + uVar11) * -0x30e4432340650000 ^ uVar23) >>
                    (bVar12 & 0x3f));
          uVar23 = (uint64_t)(uVar19 >> 2) & 0x3fffffc0;
          bVar18 = *(char *)(lVar8 + uVar23) - 1U & 0x3f;
          lVar30 = 0;
          if (bVar18 == 0) {
            lVar30 = 0x3f;
          }
          lVar30 = (uint64_t)bVar18 + lVar30;
          *(char *)(lVar8 + uVar23) = (char)lVar30;
          *(char *)(lVar8 + uVar23 + lVar30) = (char)uVar19;
          *(uint *)(lVar10 + (lVar30 + uVar23) * 4) = (uint)uVar11;
          if (uVar29 == uVar11) break;
          uVar23 = *(uint64_t *)(this_ptr + 0x60);
          uVar11 = uVar11 + 1;
        }
        lVar30 = *(int64_t *)(this_ptr + 0x38);
        lVar14 = *(int64_t *)(this_ptr + 0x70);
        bVar18 = 0x38 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar11 = (uint64_t)(uVar31 - 0x20);
      uVar19 = 0;
      if (lVar4 + uVar11 <= (int64_t)arg1 + 1U) {
        uVar19 = ((int)((int64_t)arg1 + 1U) - (int)(lVar4 + uVar11)) + 1;
      }
      uVar25 = 8;
      if (uVar19 < 8) {
        uVar25 = uVar19;
      }
      uVar19 = (uVar25 + uVar31) - 0x20;
      if (uVar31 - 0x20 < uVar19) {
        uVar23 = *(uint64_t *)(this_ptr + 0x60);
        uVar29 = uVar11;
        do {
          *(int *)(this_ptr + 0x40 + (uint64_t)((uint)uVar29 & 7) * 4) =
               (int)((*(int64_t *)(lVar4 + uVar29) * -0x30e4432340650000 ^ uVar23) >>
                    (bVar18 & 0x3f));
          uVar29 = uVar29 + 1;
        } while (uVar19 != uVar29);
      }
    }
    if ((uint)uVar11 < uVar31) {
      lVar21 = *(int64_t *)(this_ptr + 8);
      do {
        uVar23 = (uint64_t)((uint)uVar11 & 7);
        uVar19 = *(uint *)(this_ptr + 0x40 + uVar23 * 4);
        *(int *)(this_ptr + 0x40 + uVar23 * 4) =
             (int)((*(int64_t *)(lVar21 + 8 + uVar11) * -0x30e4432340650000 ^
                   *(uint64_t *)(this_ptr + 0x60)) >> (bVar18 & 0x3f));
        uVar23 = (uint64_t)(uVar19 >> 2) & 0x3fffffc0;
        bVar17 = *(char *)(lVar30 + uVar23) - 1U & 0x3f;
        lVar7 = 0;
        if (bVar17 == 0) {
          lVar7 = 0x3f;
        }
        lVar7 = (uint64_t)bVar17 + lVar7;
        *(char *)(lVar30 + uVar23) = (char)lVar7;
        *(char *)(lVar30 + uVar23 + lVar7) = (char)uVar19;
        *(uint *)(lVar14 + (lVar7 + uVar23) * 4) = (uint)uVar11;
        uVar11 = uVar11 + 1;
      } while ((uVar32 & 0xffffffff) != uVar11);
    }
    *(uint *)(this_ptr + 0x2c) = uVar31;
    uVar11 = (uint64_t)*(uint *)(this_ptr + 0x40 + (uint64_t)(uVar31 & 7) * 4);
    *(int *)(this_ptr + 0x40 + (uint64_t)(uVar31 & 7) * 4) =
         (int)((*(int64_t *)((uVar32 & 0xffffffff) + 8 + lVar4) * -0x30e4432340650000 ^ uVar9) >>
              (bVar12 & 0x3f));
  }
  else {
    uVar32 = *arg1;
    *(uint *)(this_ptr + 0x2c) = uVar31;
    uVar11 = (uVar32 * -0x30e4432340650000 ^ uVar9) >> (0x38U - cVar27 & 0x3f) & 0xffffffff;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + (uint)uVar11;
  uVar32 = (uint64_t)((uint)(uVar11 >> 2) & 0x3fffffc0);
  bVar18 = *(byte *)(lVar8 + uVar32);
  puVar33 = (void*)(lVar8 + uVar32);
  auVar34 = pshufb(ZEXT416((uint)uVar11),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar8 = 0;
  do {
    pcVar3 = puVar33 + lVar8 * 4;
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
    *(uint *)(local_138[0] + lVar8) =
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
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x10);
  uVar9 = (int64_t)(int)local_138[0]._4_4_ << 0x10 | (int64_t)(int)local_138[0]._0_4_ |
          (uint64_t)(uint)local_138[0]._8_4_ << 0x20 | (uint64_t)(uint)local_138[0]._12_4_ << 0x30
  ;
  uVar9 = uVar9 >> (bVar18 & 0x3f) | uVar9 << 0x40 - (bVar18 & 0x3f);
  lVar10 = lVar10 + uVar32 * 4;
  lVar8 = 0;
  lVar30 = 0;
  if (uVar9 != 0) {
    do {
      lVar14 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      uVar32 = (uint64_t)((int)lVar14 + (uint)bVar18 & 0x3f);
      if (uVar32 != 0) {
        uVar19 = *(uint *)(lVar10 + uVar32 * 4);
        if (uVar19 < uVar24) break;
        *(uint *)(local_138[0] + lVar30 * 4) = uVar19;
        lVar30 = lVar30 + 1;
        iVar26 = iVar26 + -1;
      }
      uVar9 = uVar9 & uVar9 - 1;
      if ((uVar9 == 0) || (iVar26 == 0)) break;
    } while( true );
  }
  uVar32 = (uint64_t)(bVar18 - 1 & 0x3f);
  if (uVar32 == 0) {
    lVar8 = 0x3f;
  }
  lVar8 = lVar8 + uVar32;
  *puVar33 = (char)lVar8;
  puVar33[lVar8] = (char)uVar11;
  iVar26 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar26 + 1;
  *(int *)(lVar10 + lVar8 * 4) = iVar26;
  if (lVar30 == 0) {
    uVar32 = 3;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)param_2 - 7);
    puVar2 = (uint64_t *)((int64_t)arg1 + 4);
    lVar10 = uVar20 + lVar4 + 8;
    lVar8 = 0;
    uVar9 = 3;
    do {
      uVar19 = *(uint *)(local_138[0] + lVar8 * 4);
      uVar32 = (uint64_t)uVar19;
      if (uVar19 < uVar6) {
        if (*(int *)(lVar5 + uVar32) == (int)*arg1) {
          puVar28 = (uint64_t *)(lVar5 + uVar32 + 4);
          puVar13 = (uint64_t *)
                    (((int64_t)(uVar20 + lVar5) - (int64_t)puVar28) + (int64_t)puVar2);
          if (param_2 <= puVar13) {
            puVar13 = param_2;
          }
          puVar15 = puVar2;
          puVar22 = puVar28;
          if (puVar2 < (uint64_t *)((int64_t)puVar13 - 7U)) {
            uVar11 = *puVar2 ^ *puVar28;
            if (uVar11 == 0) {
              lVar14 = lVar5 + 0xc + uVar32;
              lVar21 = 0;
              do {
                puVar15 = (uint64_t *)((int64_t)arg1 + lVar21 + 0xc);
                if ((uint64_t *)((int64_t)puVar13 - 7U) <= puVar15) {
                  puVar22 = (uint64_t *)(lVar14 + lVar21);
                  goto LAB_00ee0d50;
                }
                lVar7 = lVar21 + 8;
                uVar32 = *(uint64_t *)((int64_t)arg1 + lVar21 + 0xc) ^
                         *(uint64_t *)(lVar14 + lVar21);
                lVar21 = lVar7;
              } while (uVar32 == 0);
              uVar11 = 0;
              if (uVar32 != 0) {
                for (; (uVar32 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
              uVar32 = (uVar11 >> 3) + lVar7;
            }
            else {
              uVar32 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00ee0d50:
            if ((puVar15 < (uint64_t *)((int64_t)puVar13 - 3U)) &&
               ((int)*puVar22 == (int)*puVar15)) {
              puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
              puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            }
            if ((puVar15 < (uint64_t *)((int64_t)puVar13 - 1U)) &&
               ((short)*puVar22 == (short)*puVar15)) {
              puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
              puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
            }
            if (puVar15 < puVar13) {
              puVar15 = (uint64_t *)
                        ((int64_t)puVar15 + (uint64_t)((char)*puVar22 == (char)*puVar15));
            }
            uVar32 = (int64_t)puVar15 - (int64_t)puVar2;
          }
          if ((char *)((int64_t)puVar28 + uVar32) == (char *)(uVar20 + lVar5)) {
            puVar13 = (uint64_t *)((int64_t)puVar2 + uVar32);
            puVar15 = (uint64_t *)(lVar4 + uVar20);
            puVar28 = puVar13;
            if (puVar13 < puVar1) {
              uVar11 = *puVar13 ^ *(uint64_t *)(lVar4 + uVar20);
              if (uVar11 == 0) {
                lVar14 = 0;
                do {
                  puVar28 = (uint64_t *)((int64_t)arg1 + lVar14 + uVar32 + 0xc);
                  if (puVar1 <= puVar28) {
                    puVar15 = (uint64_t *)(lVar14 + lVar10);
                    goto LAB_00ee0e2a;
                  }
                  lVar21 = lVar14 + 8;
                  uVar11 = *(uint64_t *)((int64_t)arg1 + lVar14 + uVar32 + 0xc) ^
                           *(uint64_t *)(lVar10 + lVar14);
                  lVar14 = lVar21;
                } while (uVar11 == 0);
                uVar23 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                  }
                }
                uVar23 = (uVar23 >> 3) + lVar21;
              }
              else {
                uVar23 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                  }
                }
                uVar23 = uVar23 >> 3;
              }
            }
            else {
LAB_00ee0e2a:
              if ((puVar28 < (uint64_t *)((int64_t)param_2 - 3U)) &&
                 ((int)*puVar15 == (int)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
              }
              if ((puVar28 < (uint64_t *)((int64_t)param_2 - 1U)) &&
                 ((short)*puVar15 == (short)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
              }
              if (puVar28 < param_2) {
                puVar28 = (uint64_t *)
                          ((int64_t)puVar28 + (uint64_t)((char)*puVar15 == (char)*puVar28));
              }
              uVar23 = (int64_t)puVar28 - (int64_t)puVar13;
            }
            uVar32 = uVar32 + uVar23;
          }
          uVar32 = uVar32 + 4;
LAB_00ee0e92:
          if ((uVar9 < uVar32) &&
             (*param_1 = (uint64_t)((uVar31 + 3) - uVar19), uVar9 = uVar32,
             (uint64_t *)((int64_t)arg1 + uVar32) == param_2)) break;
        }
      }
      else {
        puVar13 = (uint64_t *)(lVar4 + uVar32);
        if (*(int *)((uVar9 - 3) + (int64_t)puVar13) == *(int *)((int64_t)arg1 + (uVar9 - 3))
           ) {
          puVar28 = arg1;
          if (arg1 < puVar1) {
            uVar11 = *arg1 ^ *puVar13;
            if (uVar11 == 0) {
              lVar14 = lVar4 + 8 + uVar32;
              lVar21 = 0;
              do {
                puVar28 = (uint64_t *)((int64_t)arg1 + lVar21 + 8);
                if (puVar1 <= puVar28) {
                  puVar13 = (uint64_t *)(lVar14 + lVar21);
                  goto LAB_00ee0c82;
                }
                lVar7 = lVar21 + 8;
                uVar32 = *(uint64_t *)((int64_t)arg1 + lVar21 + 8) ^
                         *(uint64_t *)(lVar14 + lVar21);
                lVar21 = lVar7;
              } while (uVar32 == 0);
              uVar11 = 0;
              if (uVar32 != 0) {
                for (; (uVar32 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
              uVar32 = (uVar11 >> 3) + lVar7;
            }
            else {
              uVar32 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00ee0c82:
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
            uVar32 = (int64_t)puVar28 - (int64_t)arg1;
          }
          goto LAB_00ee0e92;
        }
      }
      uVar32 = uVar9;
      lVar8 = lVar8 + 1;
      uVar9 = uVar32;
    } while (lVar8 != lVar30);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar32;
  }
                      ___stack_chk_fail();
}


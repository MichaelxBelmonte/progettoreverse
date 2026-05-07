// Function: FUN_00edf659
// Address: 00edf659
// Size: 2229 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00edf659(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  byte bVar14;
  uint64_t uVar15;
  int64_t lVar16;
  byte bVar17;
  uint uVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  byte bVar22;
  uint uVar23;
  uint64_t *arg1;
  int64_t this_ptr;
  uint64_t *puVar24;
  uint64_t *puVar25;
  int64_t lVar26;
  int64_t lVar27;
  char cVar28;
  uint64_t *puVar29;
  int64_t lVar30;
  int iVar31;
  uint uVar32;
  uint64_t uVar33;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint auStack_138 [64];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar10 = *(int64_t *)(this_ptr + 0x70);
  lVar27 = *(int64_t *)(this_ptr + 0x38);
  lVar4 = *(int64_t *)(this_ptr + 8);
  uVar7 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar33 = (int64_t)arg1 - lVar4;
  uVar18 = *(uint *)(this_ptr + 0x1c);
  uVar32 = (uint)uVar33;
  uVar23 = uVar32 - uVar7;
  if (uVar32 - uVar18 <= uVar7) {
    uVar23 = uVar18;
  }
  lVar5 = *(int64_t *)(this_ptr + 0x10);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar23 = uVar18;
  }
  uVar18 = 4;
  if (*(uint *)(this_ptr + 0x10c) < 4) {
    uVar18 = *(uint *)(this_ptr + 0x10c);
  }
  uVar7 = *(uint *)(this_ptr + 0x18);
  uVar19 = (uint64_t)uVar7;
  iVar31 = 1 << ((byte)uVar18 & 0x1f);
  uVar15 = *(uint64_t *)(this_ptr + 0x60);
  cVar28 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar18 = *(uint *)(this_ptr + 0x2c);
    uVar11 = (uint64_t)uVar18;
    bVar14 = 0x38 - cVar28;
    lVar26 = lVar27;
    lVar30 = lVar10;
    bVar22 = bVar14;
    if (0x180 < uVar32 - uVar18) {
      if (uVar18 < 0xffffffa0) {
        uVar21 = uVar11 + 0x5f;
        uVar13 = uVar15;
        while( true ) {
          uVar12 = (uint64_t)((uint)uVar11 & 7);
          uVar18 = *(uint *)(this_ptr + 0x40 + uVar12 * 4);
          *(int *)(this_ptr + 0x40 + uVar12 * 4) =
               (int)((*(int64_t *)(lVar4 + 8 + uVar11) * -0x30e4432340650000 ^ uVar13) >>
                    (bVar14 & 0x3f));
          uVar13 = (uint64_t)(uVar18 >> 4) & 0xffffff0;
          bVar22 = *(char *)(lVar27 + uVar13) - 1U & 0xf;
          lVar26 = 0;
          if (bVar22 == 0) {
            lVar26 = 0xf;
          }
          lVar26 = (uint64_t)bVar22 + lVar26;
          *(char *)(lVar27 + uVar13) = (char)lVar26;
          *(char *)(lVar27 + uVar13 + lVar26) = (char)uVar18;
          *(uint *)(lVar10 + (lVar26 + uVar13) * 4) = (uint)uVar11;
          if (uVar21 == uVar11) break;
          uVar13 = *(uint64_t *)(this_ptr + 0x60);
          uVar11 = uVar11 + 1;
        }
        lVar26 = *(int64_t *)(this_ptr + 0x38);
        lVar30 = *(int64_t *)(this_ptr + 0x70);
        bVar22 = 0x38 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar11 = (uint64_t)(uVar32 - 0x20);
      uVar18 = 0;
      if (uVar11 + lVar4 <= (int64_t)arg1 + 1U) {
        uVar18 = ((int)((int64_t)arg1 + 1U) - (int)(uVar11 + lVar4)) + 1;
      }
      uVar8 = 8;
      if (uVar18 < 8) {
        uVar8 = uVar18;
      }
      uVar18 = (uVar8 + uVar32) - 0x20;
      if (uVar32 - 0x20 < uVar18) {
        uVar21 = *(uint64_t *)(this_ptr + 0x60);
        uVar13 = uVar11;
        do {
          *(int *)(this_ptr + 0x40 + (uint64_t)((uint)uVar13 & 7) * 4) =
               (int)((*(int64_t *)(lVar4 + uVar13) * -0x30e4432340650000 ^ uVar21) >>
                    (bVar22 & 0x3f));
          uVar13 = uVar13 + 1;
        } while (uVar18 != uVar13);
      }
    }
    if ((uint)uVar11 < uVar32) {
      lVar16 = *(int64_t *)(this_ptr + 8);
      do {
        uVar21 = (uint64_t)((uint)uVar11 & 7);
        uVar18 = *(uint *)(this_ptr + 0x40 + uVar21 * 4);
        *(int *)(this_ptr + 0x40 + uVar21 * 4) =
             (int)((*(int64_t *)(lVar16 + 8 + uVar11) * -0x30e4432340650000 ^
                   *(uint64_t *)(this_ptr + 0x60)) >> (bVar22 & 0x3f));
        uVar21 = (uint64_t)(uVar18 >> 4) & 0xffffff0;
        bVar17 = *(char *)(lVar26 + uVar21) - 1U & 0xf;
        lVar9 = 0;
        if (bVar17 == 0) {
          lVar9 = 0xf;
        }
        lVar9 = (uint64_t)bVar17 + lVar9;
        *(char *)(lVar26 + uVar21) = (char)lVar9;
        *(char *)(lVar26 + uVar21 + lVar9) = (char)uVar18;
        *(uint *)(lVar30 + (lVar9 + uVar21) * 4) = (uint)uVar11;
        uVar11 = uVar11 + 1;
      } while ((uVar33 & 0xffffffff) != uVar11);
    }
    *(uint *)(this_ptr + 0x2c) = uVar32;
    uVar18 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar32 & 7) * 4);
    *(int *)(this_ptr + 0x40 + (uint64_t)(uVar32 & 7) * 4) =
         (int)((*(int64_t *)((uVar33 & 0xffffffff) + 8 + lVar4) * -0x30e4432340650000 ^ uVar15) >>
              (bVar14 & 0x3f));
  }
  else {
    uVar33 = *arg1;
    *(uint *)(this_ptr + 0x2c) = uVar32;
    uVar18 = (uint)((uVar33 * -0x30e4432340650000 ^ uVar15) >> (0x38U - cVar28 & 0x3f));
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar18;
  uVar33 = (uint64_t)(uVar18 >> 4 & 0xfffffff0);
  bVar22 = *(byte *)(lVar27 + uVar33);
  auVar34 = pshufb(ZEXT416(uVar18),(uint8_t  [16])0x0);
  pcVar3 = (char *)(lVar27 + uVar33);
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
  uVar6 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
          (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
  uVar6 = uVar6 >> (bVar22 & 0xf) | uVar6 << 0x10 - (bVar22 & 0xf);
  lVar10 = lVar10 + uVar33 * 4;
  lVar26 = 0;
  if (uVar6 != 0) {
    uVar15 = (uint64_t)uVar6;
    lVar30 = 0;
    do {
      lVar16 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> lVar16 & 1) == 0; lVar16 = lVar16 + 1) {
        }
      }
      uVar11 = (uint64_t)((int)lVar16 + (uint)bVar22 & 0xf);
      if (uVar11 != 0) {
        uVar8 = *(uint *)(lVar10 + uVar11 * 4);
        if (uVar8 < uVar23) goto LAB_00edf942;
        auStack_138[lVar30] = uVar8;
        lVar30 = lVar30 + 1;
        iVar31 = iVar31 + -1;
      }
      uVar15 = uVar15 & uVar15 - 1;
      if ((uVar15 == 0) || (iVar31 == 0)) goto LAB_00edf942;
    } while( true );
  }
  lVar30 = 0;
LAB_00edf942:
  uVar15 = (uint64_t)(bVar22 - 1 & 0xf);
  if (uVar15 == 0) {
    lVar26 = 0xf;
  }
  lVar26 = lVar26 + uVar15;
  *(void*)(lVar27 + uVar33) = (char)lVar26;
  ((void*)(lVar27 + uVar33))[lVar26] = (char)uVar18;
  iVar31 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar31 + 1;
  *(int *)(lVar10 + lVar26 * 4) = iVar31;
  if (lVar30 == 0) {
    uVar33 = 3;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)param_2 - 7);
    puVar2 = (uint64_t *)((int64_t)arg1 + 4);
    lVar10 = uVar19 + lVar4 + 8;
    lVar27 = 0;
    uVar15 = 3;
    do {
      uVar18 = auStack_138[lVar27];
      uVar33 = (uint64_t)uVar18;
      if (uVar18 < uVar7) {
        if (*(int *)(lVar5 + uVar33) == (int)*arg1) {
          puVar29 = (uint64_t *)(lVar5 + uVar33 + 4);
          puVar20 = (uint64_t *)
                    (((int64_t)(lVar5 + uVar19) - (int64_t)puVar29) + (int64_t)puVar2);
          if (param_2 <= puVar20) {
            puVar20 = param_2;
          }
          puVar25 = puVar2;
          puVar24 = puVar29;
          if (puVar2 < (uint64_t *)((int64_t)puVar20 - 7U)) {
            uVar11 = *puVar2 ^ *puVar29;
            if (uVar11 == 0) {
              lVar26 = lVar5 + 0xc + uVar33;
              lVar16 = 0;
              do {
                puVar25 = (uint64_t *)((int64_t)arg1 + lVar16 + 0xc);
                if ((uint64_t *)((int64_t)puVar20 - 7U) <= puVar25) {
                  puVar24 = (uint64_t *)(lVar26 + lVar16);
                  goto LAB_00edfb9e;
                }
                lVar9 = lVar16 + 8;
                uVar33 = *(uint64_t *)((int64_t)arg1 + lVar16 + 0xc) ^
                         *(uint64_t *)(lVar26 + lVar16);
                lVar16 = lVar9;
              } while (uVar33 == 0);
              uVar11 = 0;
              if (uVar33 != 0) {
                for (; (uVar33 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
              uVar33 = (uVar11 >> 3) + lVar9;
            }
            else {
              uVar33 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                }
              }
              uVar33 = uVar33 >> 3;
            }
          }
          else {
LAB_00edfb9e:
            if ((puVar25 < (uint64_t *)((int64_t)puVar20 - 3U)) &&
               ((int)*puVar24 == (int)*puVar25)) {
              puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
              puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            }
            if ((puVar25 < (uint64_t *)((int64_t)puVar20 - 1U)) &&
               ((short)*puVar24 == (short)*puVar25)) {
              puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
              puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
            }
            if (puVar25 < puVar20) {
              puVar25 = (uint64_t *)
                        ((int64_t)puVar25 + (uint64_t)((char)*puVar24 == (char)*puVar25));
            }
            uVar33 = (int64_t)puVar25 - (int64_t)puVar2;
          }
          if ((char *)((int64_t)puVar29 + uVar33) == (char *)(lVar5 + uVar19)) {
            puVar25 = (uint64_t *)((int64_t)puVar2 + uVar33);
            puVar20 = puVar25;
            puVar29 = (uint64_t *)(uVar19 + lVar4);
            if (puVar25 < puVar1) {
              uVar11 = *puVar25 ^ *(uint64_t *)(uVar19 + lVar4);
              if (uVar11 == 0) {
                lVar26 = 0;
                do {
                  puVar20 = (uint64_t *)((int64_t)arg1 + lVar26 + uVar33 + 0xc);
                  if (puVar1 <= puVar20) {
                    puVar29 = (uint64_t *)(lVar26 + lVar10);
                    goto LAB_00edfc9b;
                  }
                  lVar16 = lVar26 + 8;
                  uVar11 = *(uint64_t *)((int64_t)arg1 + lVar26 + uVar33 + 0xc) ^
                           *(uint64_t *)(lVar10 + lVar26);
                  lVar26 = lVar16;
                } while (uVar11 == 0);
                uVar21 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                uVar21 = (uVar21 >> 3) + lVar16;
              }
              else {
                uVar21 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                uVar21 = uVar21 >> 3;
              }
            }
            else {
LAB_00edfc9b:
              if ((puVar20 < (uint64_t *)((int64_t)param_2 - 3U)) &&
                 ((int)*puVar29 == (int)*puVar20)) {
                puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
                puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
              }
              if ((puVar20 < (uint64_t *)((int64_t)param_2 + -1)) &&
                 ((short)*puVar29 == (short)*puVar20)) {
                puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
                puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
              }
              if (puVar20 < param_2) {
                puVar20 = (uint64_t *)
                          ((int64_t)puVar20 + (uint64_t)((char)*puVar29 == (char)*puVar20));
              }
              uVar21 = (int64_t)puVar20 - (int64_t)puVar25;
            }
            uVar33 = uVar33 + uVar21;
          }
          uVar33 = uVar33 + 4;
LAB_00edfcf9:
          if ((uVar15 < uVar33) &&
             (*param_1 = (uint64_t)((uVar32 + 3) - uVar18), uVar15 = uVar33,
             (uint64_t *)((int64_t)arg1 + uVar33) == param_2)) break;
        }
      }
      else {
        puVar20 = (uint64_t *)(lVar4 + uVar33);
        if (*(int *)((uVar15 - 3) + (int64_t)puVar20) ==
            *(int *)((int64_t)arg1 + (uVar15 - 3))) {
          puVar29 = arg1;
          if (arg1 < puVar1) {
            uVar11 = *arg1 ^ *puVar20;
            if (uVar11 == 0) {
              lVar26 = lVar4 + 8 + uVar33;
              lVar16 = 0;
              do {
                puVar29 = (uint64_t *)((int64_t)arg1 + lVar16 + 8);
                if (puVar1 <= puVar29) {
                  puVar20 = (uint64_t *)(lVar26 + lVar16);
                  goto LAB_00edfac0;
                }
                lVar9 = lVar16 + 8;
                uVar33 = *(uint64_t *)((int64_t)arg1 + lVar16 + 8) ^
                         *(uint64_t *)(lVar26 + lVar16);
                lVar16 = lVar9;
              } while (uVar33 == 0);
              uVar11 = 0;
              if (uVar33 != 0) {
                for (; (uVar33 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
              uVar33 = (uVar11 >> 3) + lVar9;
            }
            else {
              uVar33 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                }
              }
              uVar33 = uVar33 >> 3;
            }
          }
          else {
LAB_00edfac0:
            if ((puVar29 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar20 == (int)*puVar29)) {
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            }
            if ((puVar29 < (uint64_t *)((int64_t)param_2 + -1)) &&
               ((short)*puVar20 == (short)*puVar29)) {
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            }
            if (puVar29 < param_2) {
              puVar29 = (uint64_t *)
                        ((int64_t)puVar29 + (uint64_t)((char)*puVar20 == (char)*puVar29));
            }
            uVar33 = (int64_t)puVar29 - (int64_t)arg1;
          }
          goto LAB_00edfcf9;
        }
      }
      uVar33 = uVar15;
      lVar27 = lVar27 + 1;
      uVar15 = uVar33;
    } while (lVar27 != lVar30);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar33;
  }
                      ___stack_chk_fail();
}


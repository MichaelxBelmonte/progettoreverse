// Function: FUN_00edc2ac
// Address: 00edc2ac
// Size: 2081 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00edc2ac(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  byte bVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  byte bVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  ushort uVar20;
  uint uVar21;
  uint64_t *arg1;
  uint64_t *puVar22;
  int64_t this_ptr;
  byte bVar23;
  int64_t lVar24;
  char cVar25;
  uint64_t *puVar26;
  int64_t lVar27;
  int64_t lVar28;
  int iVar29;
  uint uVar30;
  uint64_t uVar31;
  int64_t lVar32;
  uint uVar33;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint auStack_138 [64];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar9 = *(int64_t *)(this_ptr + 0x70);
  lVar5 = *(int64_t *)(this_ptr + 8);
  uVar7 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar31 = (int64_t)arg1 - lVar5;
  uVar12 = *(uint *)(this_ptr + 0x1c);
  uVar30 = (uint)uVar31;
  uVar4 = uVar30 - uVar7;
  if (uVar30 - uVar12 <= uVar7) {
    uVar4 = uVar12;
  }
  lVar24 = *(int64_t *)(this_ptr + 0x38);
  lVar6 = *(int64_t *)(this_ptr + 0x10);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar4 = uVar12;
  }
  uVar12 = 4;
  if (*(uint *)(this_ptr + 0x10c) < 4) {
    uVar12 = *(uint *)(this_ptr + 0x10c);
  }
  iVar29 = 1 << ((byte)uVar12 & 0x1f);
  uVar12 = *(uint *)(this_ptr + 0x18);
  uVar8 = (uint64_t)uVar12;
  uVar18 = *(void*)(this_ptr + 0x60);
  uVar7 = (uint)uVar18;
  cVar25 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar33 = *(uint *)(this_ptr + 0x2c);
    uVar13 = (uint64_t)uVar33;
    bVar11 = 0x18 - cVar25;
    lVar27 = lVar24;
    lVar28 = lVar9;
    bVar15 = bVar11;
    if (0x180 < uVar30 - uVar33) {
      if (uVar33 < 0xffffffa0) {
        uVar10 = uVar13 + 0x5f;
        while( true ) {
          uVar17 = (uint64_t)((uint)uVar13 & 7);
          uVar33 = *(uint *)(this_ptr + 0x40 + uVar17 * 4);
          *(uint *)(this_ptr + 0x40 + uVar17 * 4) =
               (*(int *)(lVar5 + 8 + uVar13) * -0x61c8864f ^ (uint)uVar18) >> (bVar11 & 0x1f);
          uVar17 = (uint64_t)(uVar33 >> 4 & 0xffffff0);
          bVar15 = *(char *)(lVar24 + uVar17) - 1U & 0xf;
          lVar27 = 0;
          if (bVar15 == 0) {
            lVar27 = 0xf;
          }
          lVar27 = (uint64_t)bVar15 + lVar27;
          *(char *)(lVar24 + uVar17) = (char)lVar27;
          *(char *)(lVar24 + uVar17 + lVar27) = (char)uVar33;
          *(uint *)(lVar9 + (lVar27 + uVar17) * 4) = (uint)uVar13;
          if (uVar10 == uVar13) break;
          uVar18 = *(void*)(this_ptr + 0x60);
          uVar13 = uVar13 + 1;
        }
        lVar27 = *(int64_t *)(this_ptr + 0x38);
        lVar28 = *(int64_t *)(this_ptr + 0x70);
        bVar15 = 0x18 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar13 = (uint64_t)(uVar30 - 0x20);
      uVar33 = 0;
      if (lVar5 + uVar13 <= (int64_t)arg1 + 1U) {
        uVar33 = ((int)((int64_t)arg1 + 1U) - (int)(lVar5 + uVar13)) + 1;
      }
      uVar21 = 8;
      if (uVar33 < 8) {
        uVar21 = uVar33;
      }
      uVar33 = (uVar21 + uVar30) - 0x20;
      if (uVar30 - 0x20 < uVar33) {
        uVar21 = *(uint *)(this_ptr + 0x60);
        uVar10 = uVar13;
        do {
          *(uint *)(this_ptr + 0x40 + (uint64_t)((uint)uVar10 & 7) * 4) =
               (*(int *)(lVar5 + uVar10) * -0x61c8864f ^ uVar21) >> (bVar15 & 0x1f);
          uVar10 = uVar10 + 1;
        } while (uVar33 != uVar10);
      }
    }
    if ((uint)uVar13 < uVar30) {
      lVar14 = *(int64_t *)(this_ptr + 8);
      do {
        uVar10 = (uint64_t)((uint)uVar13 & 7);
        uVar33 = *(uint *)(this_ptr + 0x40 + uVar10 * 4);
        *(uint *)(this_ptr + 0x40 + uVar10 * 4) =
             (*(int *)(lVar14 + 8 + uVar13) * -0x61c8864f ^ *(uint *)(this_ptr + 0x60)) >>
             (bVar15 & 0x1f);
        uVar10 = (uint64_t)(uVar33 >> 4 & 0xffffff0);
        bVar23 = *(char *)(lVar27 + uVar10) - 1U & 0xf;
        lVar32 = 0;
        if (bVar23 == 0) {
          lVar32 = 0xf;
        }
        lVar32 = (uint64_t)bVar23 + lVar32;
        *(char *)(lVar27 + uVar10) = (char)lVar32;
        *(char *)(lVar27 + uVar10 + lVar32) = (char)uVar33;
        *(uint *)(lVar28 + (lVar32 + uVar10) * 4) = (uint)uVar13;
        uVar13 = uVar13 + 1;
      } while ((uVar31 & 0xffffffff) != uVar13);
    }
    *(uint *)(this_ptr + 0x2c) = uVar30;
    uVar33 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar30 & 7) * 4);
    *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar30 & 7) * 4) =
         (*(int *)((uVar31 & 0xffffffff) + 8 + lVar5) * -0x61c8864f ^ uVar7) >> (bVar11 & 0x1f);
  }
  else {
    uVar33 = ((int)*arg1 * -0x61c8864f ^ uVar7) >> (0x18U - cVar25 & 0x1f);
    *(uint *)(this_ptr + 0x2c) = uVar30;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar33;
  uVar31 = (uint64_t)(uVar33 >> 4 & 0xfffffff0);
  bVar15 = *(byte *)(lVar24 + uVar31);
  auVar34 = pshufb(ZEXT416(uVar33),(uint8_t  [16])0x0);
  pcVar3 = (char *)(lVar24 + uVar31);
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
  uVar20 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
  uVar20 = uVar20 >> (bVar15 & 0xf) | uVar20 << 0x10 - (bVar15 & 0xf);
  lVar9 = lVar9 + uVar31 * 4;
  lVar27 = 0;
  if (uVar20 != 0) {
    uVar13 = (uint64_t)uVar20;
    lVar28 = 0;
    do {
      lVar14 = 0;
      if (uVar13 != 0) {
        for (; (uVar13 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      uVar10 = (uint64_t)((int)lVar14 + (uint)bVar15 & 0xf);
      if (uVar10 != 0) {
        uVar7 = *(uint *)(lVar9 + uVar10 * 4);
        if (uVar7 < uVar4) goto LAB_00edc555;
        auStack_138[lVar28] = uVar7;
        lVar28 = lVar28 + 1;
        iVar29 = iVar29 + -1;
      }
      uVar13 = uVar13 & uVar13 - 1;
      if ((uVar13 == 0) || (iVar29 == 0)) goto LAB_00edc555;
    } while( true );
  }
  lVar28 = 0;
LAB_00edc555:
  uVar13 = (uint64_t)(bVar15 - 1 & 0xf);
  if (uVar13 == 0) {
    lVar27 = 0xf;
  }
  lVar27 = lVar27 + uVar13;
  *(void*)(lVar24 + uVar31) = (char)lVar27;
  ((void*)(lVar24 + uVar31))[lVar27] = (char)uVar33;
  iVar29 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar29 + 1;
  *(int *)(lVar9 + lVar27 * 4) = iVar29;
  if (lVar28 == 0) {
    uVar31 = 3;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)param_2 - 7);
    puVar2 = (uint64_t *)((int64_t)arg1 + 4);
    lVar9 = uVar8 + lVar5 + 8;
    lVar24 = 0;
    uVar13 = 3;
    do {
      uVar4 = auStack_138[lVar24];
      uVar31 = (uint64_t)uVar4;
      if (uVar4 < uVar12) {
        if (*(int *)(lVar6 + uVar31) == (int)*arg1) {
          puVar26 = (uint64_t *)(lVar6 + uVar31 + 4);
          puVar16 = (uint64_t *)
                    (((int64_t)(lVar6 + uVar8) - (int64_t)puVar26) + (int64_t)puVar2);
          if (param_2 <= puVar16) {
            puVar16 = param_2;
          }
          puVar22 = puVar2;
          puVar19 = puVar26;
          if (puVar2 < (uint64_t *)((int64_t)puVar16 - 7U)) {
            uVar10 = *puVar2 ^ *puVar26;
            if (uVar10 == 0) {
              lVar27 = lVar6 + 0xc + uVar31;
              lVar14 = 0;
              do {
                puVar22 = (uint64_t *)((int64_t)arg1 + lVar14 + 0xc);
                if ((uint64_t *)((int64_t)puVar16 - 7U) <= puVar22) {
                  puVar19 = (uint64_t *)(lVar27 + lVar14);
                  goto LAB_00edc7ae;
                }
                lVar32 = lVar14 + 8;
                uVar31 = *(uint64_t *)((int64_t)arg1 + lVar14 + 0xc) ^
                         *(uint64_t *)(lVar27 + lVar14);
                lVar14 = lVar32;
              } while (uVar31 == 0);
              uVar10 = 0;
              if (uVar31 != 0) {
                for (; (uVar31 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar31 = (uVar10 >> 3) + lVar32;
            }
            else {
              uVar31 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = uVar31 >> 3;
            }
          }
          else {
LAB_00edc7ae:
            if ((puVar22 < (uint64_t *)((int64_t)puVar16 - 3U)) &&
               ((int)*puVar19 == (int)*puVar22)) {
              puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
              puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
            }
            if ((puVar22 < (uint64_t *)((int64_t)puVar16 - 1U)) &&
               ((short)*puVar19 == (short)*puVar22)) {
              puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
              puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
            }
            if (puVar22 < puVar16) {
              puVar22 = (uint64_t *)
                        ((int64_t)puVar22 + (uint64_t)((char)*puVar19 == (char)*puVar22));
            }
            uVar31 = (int64_t)puVar22 - (int64_t)puVar2;
          }
          if ((char *)((int64_t)puVar26 + uVar31) == (char *)(lVar6 + uVar8)) {
            puVar22 = (uint64_t *)((int64_t)puVar2 + uVar31);
            puVar16 = puVar22;
            puVar26 = (uint64_t *)(lVar5 + uVar8);
            if (puVar22 < puVar1) {
              uVar10 = *puVar22 ^ *(uint64_t *)(lVar5 + uVar8);
              if (uVar10 == 0) {
                lVar27 = 0;
                do {
                  puVar16 = (uint64_t *)((int64_t)arg1 + lVar27 + uVar31 + 0xc);
                  if (puVar1 <= puVar16) {
                    puVar26 = (uint64_t *)(lVar27 + lVar9);
                    goto LAB_00edc895;
                  }
                  lVar14 = lVar27 + 8;
                  uVar10 = *(uint64_t *)((int64_t)arg1 + lVar27 + uVar31 + 0xc) ^
                           *(uint64_t *)(lVar9 + lVar27);
                  lVar27 = lVar14;
                } while (uVar10 == 0);
                uVar17 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                  }
                }
                uVar17 = (uVar17 >> 3) + lVar14;
              }
              else {
                uVar17 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                  }
                }
                uVar17 = uVar17 >> 3;
              }
            }
            else {
LAB_00edc895:
              if ((puVar16 < (uint64_t *)((int64_t)param_2 - 3U)) &&
                 ((int)*puVar26 == (int)*puVar16)) {
                puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
                puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
              }
              if ((puVar16 < (uint64_t *)((int64_t)param_2 + -1)) &&
                 ((short)*puVar26 == (short)*puVar16)) {
                puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
                puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
              }
              if (puVar16 < param_2) {
                puVar16 = (uint64_t *)
                          ((int64_t)puVar16 + (uint64_t)((char)*puVar26 == (char)*puVar16));
              }
              uVar17 = (int64_t)puVar16 - (int64_t)puVar22;
            }
            uVar31 = uVar31 + uVar17;
          }
          uVar31 = uVar31 + 4;
LAB_00edc8f6:
          if ((uVar13 < uVar31) &&
             (*param_1 = (uint64_t)((uVar30 + 3) - uVar4), uVar13 = uVar31,
             (uint64_t *)((int64_t)arg1 + uVar31) == param_2)) break;
        }
      }
      else {
        puVar16 = (uint64_t *)(lVar5 + uVar31);
        if (*(int *)((uVar13 - 3) + (int64_t)puVar16) ==
            *(int *)((int64_t)arg1 + (uVar13 - 3))) {
          puVar26 = arg1;
          if (arg1 < puVar1) {
            uVar10 = *arg1 ^ *puVar16;
            if (uVar10 == 0) {
              lVar27 = lVar5 + 8 + uVar31;
              lVar14 = 0;
              do {
                puVar26 = (uint64_t *)((int64_t)arg1 + lVar14 + 8);
                if (puVar1 <= puVar26) {
                  puVar16 = (uint64_t *)(lVar27 + lVar14);
                  goto LAB_00edc6d7;
                }
                lVar32 = lVar14 + 8;
                uVar31 = *(uint64_t *)((int64_t)arg1 + lVar14 + 8) ^
                         *(uint64_t *)(lVar27 + lVar14);
                lVar14 = lVar32;
              } while (uVar31 == 0);
              uVar10 = 0;
              if (uVar31 != 0) {
                for (; (uVar31 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar31 = (uVar10 >> 3) + lVar32;
            }
            else {
              uVar31 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = uVar31 >> 3;
            }
          }
          else {
LAB_00edc6d7:
            if ((puVar26 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar16 == (int)*puVar26)) {
              puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
              puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            }
            if ((puVar26 < (uint64_t *)((int64_t)param_2 + -1)) &&
               ((short)*puVar16 == (short)*puVar26)) {
              puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
              puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
            }
            if (puVar26 < param_2) {
              puVar26 = (uint64_t *)
                        ((int64_t)puVar26 + (uint64_t)((char)*puVar16 == (char)*puVar26));
            }
            uVar31 = (int64_t)puVar26 - (int64_t)arg1;
          }
          goto LAB_00edc8f6;
        }
      }
      uVar31 = uVar13;
      lVar24 = lVar24 + 1;
      uVar13 = uVar31;
    } while (lVar24 != lVar28);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar31;
  }
                      ___stack_chk_fail();
}


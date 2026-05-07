// Function: FUN_00eece5a
// Address: 00eece5a
// Size: 3213 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00eece5a(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  char *pcVar5;
  int iVar6;
  void*puVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  byte bVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  int64_t lVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  uint uVar30;
  uint64_t *arg1;
  int iVar31;
  int64_t this_ptr;
  char cVar32;
  uint64_t *puVar33;
  void*puVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint64_t uVar40;
  int64_t lVar41;
  uint64_t *puVar42;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t local_138 [16] [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar17 = *(int64_t *)(this_ptr + 8);
  uVar10 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar40 = (int64_t)arg1 - lVar17;
  uVar38 = *(uint *)(this_ptr + 0x1c);
  uVar39 = (uint)uVar40;
  uVar37 = uVar39 - uVar10;
  if (uVar39 - uVar38 <= uVar10) {
    uVar37 = uVar38;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar37 = uVar38;
  }
  uVar38 = *(uint *)(this_ptr + 0x10c);
  uVar10 = 6;
  if (uVar38 < 6) {
    uVar10 = uVar38;
  }
  iVar36 = 1 << ((byte)uVar10 & 0x1f);
  uVar35 = (int)*arg1 * -0x61c8864f;
  puVar7 = *(void**)(this_ptr + 0xf8);
  uVar25 = (uint64_t)(uVar35 >> (0x22U - *(char *)(puVar7 + 0x21) & 0x1f));
  lVar13 = *(int64_t *)(this_ptr + 0x70);
  lVar22 = *(int64_t *)(this_ptr + 0x38);
  uVar10 = *(uint *)(this_ptr + 0x18);
  uVar11 = (uint64_t)uVar10;
  uVar21 = *(void*)(this_ptr + 0x60);
  iVar31 = 0;
  if (6 < uVar38) {
    iVar31 = 1 << ((char)uVar38 - 6U & 0x1f);
  }
  uVar38 = (uint)uVar21;
  cVar32 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar35 = *(uint *)(this_ptr + 0x2c);
    uVar27 = (uint64_t)uVar35;
    bVar18 = 0x18 - cVar32;
    lVar41 = lVar22;
    lVar14 = lVar13;
    bVar9 = bVar18;
    if (0x180 < uVar39 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar19 = uVar27 + 0x5f;
        while( true ) {
          uVar16 = (uint64_t)((uint)uVar27 & 7);
          uVar35 = *(uint *)(this_ptr + 0x40 + uVar16 * 4);
          *(uint *)(this_ptr + 0x40 + uVar16 * 4) =
               (*(int *)(lVar17 + 8 + uVar27) * -0x61c8864f ^ (uint)uVar21) >> (bVar18 & 0x1f);
          uVar16 = (uint64_t)(uVar35 >> 2 & 0x3fffffc0);
          bVar9 = *(char *)(lVar22 + uVar16) - 1U & 0x3f;
          lVar41 = 0;
          if (bVar9 == 0) {
            lVar41 = 0x3f;
          }
          lVar41 = (uint64_t)bVar9 + lVar41;
          *(char *)(lVar22 + uVar16) = (char)lVar41;
          *(char *)(lVar22 + uVar16 + lVar41) = (char)uVar35;
          *(uint *)(lVar13 + (lVar41 + uVar16) * 4) = (uint)uVar27;
          if (uVar19 == uVar27) break;
          uVar21 = *(void*)(this_ptr + 0x60);
          uVar27 = uVar27 + 1;
        }
        lVar41 = *(int64_t *)(this_ptr + 0x38);
        lVar14 = *(int64_t *)(this_ptr + 0x70);
        bVar9 = 0x18 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar27 = (uint64_t)(uVar39 - 0x20);
      uVar35 = 0;
      if (lVar17 + uVar27 <= (int64_t)arg1 + 1U) {
        uVar35 = ((int)((int64_t)arg1 + 1U) - (int)(lVar17 + uVar27)) + 1;
      }
      uVar30 = 8;
      if (uVar35 < 8) {
        uVar30 = uVar35;
      }
      uVar35 = (uVar30 + uVar39) - 0x20;
      if (uVar39 - 0x20 < uVar35) {
        uVar30 = *(uint *)(this_ptr + 0x60);
        uVar19 = uVar27;
        do {
          *(uint *)(this_ptr + 0x40 + (uint64_t)((uint)uVar19 & 7) * 4) =
               (*(int *)(lVar17 + uVar19) * -0x61c8864f ^ uVar30) >> (bVar9 & 0x1f);
          uVar19 = uVar19 + 1;
        } while (uVar35 != uVar19);
      }
    }
    if ((uint)uVar27 < uVar39) {
      lVar20 = *(int64_t *)(this_ptr + 8);
      do {
        uVar19 = (uint64_t)((uint)uVar27 & 7);
        uVar35 = *(uint *)(this_ptr + 0x40 + uVar19 * 4);
        *(uint *)(this_ptr + 0x40 + uVar19 * 4) =
             (*(int *)(lVar20 + 8 + uVar27) * -0x61c8864f ^ *(uint *)(this_ptr + 0x60)) >>
             (bVar9 & 0x1f);
        uVar19 = (uint64_t)(uVar35 >> 2 & 0x3fffffc0);
        bVar8 = *(char *)(lVar41 + uVar19) - 1U & 0x3f;
        lVar26 = 0;
        if (bVar8 == 0) {
          lVar26 = 0x3f;
        }
        lVar26 = (uint64_t)bVar8 + lVar26;
        *(char *)(lVar41 + uVar19) = (char)lVar26;
        *(char *)(lVar41 + uVar19 + lVar26) = (char)uVar35;
        *(uint *)(lVar14 + (lVar26 + uVar19) * 4) = (uint)uVar27;
        uVar27 = uVar27 + 1;
      } while ((uVar40 & 0xffffffff) != uVar27);
    }
    *(uint *)(this_ptr + 0x2c) = uVar39;
    uVar35 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar39 & 7) * 4);
    *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar39 & 7) * 4) =
         (*(int *)((uVar40 & 0xffffffff) + 8 + lVar17) * -0x61c8864f ^ uVar38) >> (bVar18 & 0x1f);
  }
  else {
    uVar35 = (uVar35 ^ uVar38) >> (0x18U - cVar32 & 0x1f);
    *(uint *)(this_ptr + 0x2c) = uVar39;
  }
  puVar4 = (uint64_t *)(lVar17 + uVar11);
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar35;
  uVar40 = (uint64_t)(uVar35 >> 2 & 0xffffffc0);
  bVar9 = *(byte *)(lVar22 + uVar40);
  puVar34 = (void*)(lVar22 + uVar40);
  auVar43 = pshufb(ZEXT416(uVar35),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar22 = 0;
  do {
    pcVar5 = puVar34 + lVar22 * 4;
    auVar44[0] = -(*pcVar5 == auVar43[0]);
    auVar44[1] = -(pcVar5[1] == auVar43[1]);
    auVar44[2] = -(pcVar5[2] == auVar43[2]);
    auVar44[3] = -(pcVar5[3] == auVar43[3]);
    auVar44[4] = -(pcVar5[4] == auVar43[4]);
    auVar44[5] = -(pcVar5[5] == auVar43[5]);
    auVar44[6] = -(pcVar5[6] == auVar43[6]);
    auVar44[7] = -(pcVar5[7] == auVar43[7]);
    auVar44[8] = -(pcVar5[8] == auVar43[8]);
    auVar44[9] = -(pcVar5[9] == auVar43[9]);
    auVar44[10] = -(pcVar5[10] == auVar43[10]);
    auVar44[0xb] = -(pcVar5[0xb] == auVar43[0xb]);
    auVar44[0xc] = -(pcVar5[0xc] == auVar43[0xc]);
    auVar44[0xd] = -(pcVar5[0xd] == auVar43[0xd]);
    auVar44[0xe] = -(pcVar5[0xe] == auVar43[0xe]);
    auVar44[0xf] = -(pcVar5[0xf] == auVar43[0xf]);
    *(uint *)(local_138[0] + lVar22) =
         (uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar44[0xf] >> 7) << 0xf);
    lVar22 = lVar22 + 4;
  } while (lVar22 != 0x10);
  uVar27 = (int64_t)(int)local_138[0]._4_4_ << 0x10 | (int64_t)(int)local_138[0]._0_4_ |
           (uint64_t)(uint)local_138[0]._8_4_ << 0x20 |
           (uint64_t)(uint)local_138[0]._12_4_ << 0x30;
  uVar27 = uVar27 >> (bVar9 & 0x3f) | uVar27 << 0x40 - (bVar9 & 0x3f);
  lVar13 = lVar13 + uVar40 * 4;
  lVar22 = 0;
  lVar41 = 0;
  if (uVar27 != 0) {
    do {
      lVar14 = 0;
      if (uVar27 != 0) {
        for (; (uVar27 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      uVar40 = (uint64_t)((int)lVar14 + (uint)bVar9 & 0x3f);
      if (uVar40 != 0) {
        uVar38 = *(uint *)(lVar13 + uVar40 * 4);
        if (uVar38 < uVar37) break;
        *(uint *)(local_138[0] + lVar41 * 4) = uVar38;
        lVar41 = lVar41 + 1;
        iVar36 = iVar36 + -1;
      }
      uVar27 = uVar27 & uVar27 - 1;
      if ((uVar27 == 0) || (iVar36 == 0)) break;
    } while( true );
  }
  uVar40 = (uint64_t)(bVar9 - 1 & 0x3f);
  if (uVar40 == 0) {
    lVar22 = 0x3f;
  }
  lVar22 = lVar22 + uVar40;
  *puVar34 = (char)lVar22;
  puVar34[lVar22] = (char)uVar35;
  iVar6 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar6 + 1;
  *(int *)(lVar13 + lVar22 * 4) = iVar6;
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  puVar2 = (uint64_t *)((int64_t)param_2 - 3);
  puVar12 = (uint64_t *)((int64_t)param_2 + -1);
  if (lVar41 == 0) {
    uVar40 = 3;
  }
  else {
    lVar13 = 0;
    uVar27 = 3;
    do {
      uVar38 = *(uint *)(local_138[0] + lVar13 * 4);
      puVar28 = (uint64_t *)(lVar17 + (uint64_t)uVar38);
      if (*(int *)((uVar27 - 3) + (int64_t)puVar28) == *(int *)((int64_t)arg1 + (uVar27 - 3))
         ) {
        puVar23 = arg1;
        if (arg1 < puVar1) {
          uVar19 = *arg1 ^ *puVar28;
          if (uVar19 == 0) {
            lVar22 = lVar17 + 8 + (uint64_t)uVar38;
            lVar14 = 0;
            do {
              puVar23 = (uint64_t *)((int64_t)arg1 + lVar14 + 8);
              if (puVar1 <= puVar23) {
                puVar28 = (uint64_t *)(lVar22 + lVar14);
                goto LAB_00eed29d;
              }
              lVar20 = lVar14 + 8;
              uVar40 = *(uint64_t *)((int64_t)arg1 + lVar14 + 8) ^
                       *(uint64_t *)(lVar22 + lVar14);
              lVar14 = lVar20;
            } while (uVar40 == 0);
            uVar19 = 0;
            if (uVar40 != 0) {
              for (; (uVar40 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar40 = (uVar19 >> 3) + lVar20;
          }
          else {
            uVar40 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
              }
            }
            uVar40 = uVar40 >> 3;
          }
        }
        else {
LAB_00eed29d:
          if ((puVar23 < puVar2) && ((int)*puVar28 == (int)*puVar23)) {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
          }
          if ((puVar23 < puVar12) && ((short)*puVar28 == (short)*puVar23)) {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
          }
          if (puVar23 < param_2) {
            puVar23 = (uint64_t *)
                      ((int64_t)puVar23 + (uint64_t)((char)*puVar28 == (char)*puVar23));
          }
          uVar40 = (int64_t)puVar23 - (int64_t)arg1;
        }
        if ((uVar27 < uVar40) &&
           (*param_1 = (uint64_t)((uVar39 + 3) - uVar38), uVar27 = uVar40,
           (uint64_t *)((int64_t)arg1 + uVar40) == param_2)) break;
      }
      uVar40 = uVar27;
      lVar13 = lVar13 + 1;
      uVar27 = uVar40;
    } while (lVar13 != lVar41);
  }
  puVar28 = (uint64_t *)((int64_t)arg1 + 4);
  pcVar5 = (char *)*puVar7;
  lVar13 = puVar7[1];
  lVar22 = puVar7[0xe];
  lVar41 = 0;
  do {
    lVar41 = lVar41 + 1;
  } while (lVar41 != 3);
  uVar37 = iVar36 + iVar31;
  uVar38 = 3;
  if (uVar37 < 3) {
    uVar38 = uVar37;
  }
  uVar35 = *(uint *)(lVar22 + (uVar25 << 4 | 0xc));
  uVar27 = (uint64_t)(uVar35 >> 8);
  lVar41 = puVar7[0x10];
  iVar31 = (((int)pcVar5 - (int)lVar13) - uVar10) + uVar39 + 3;
  if (uVar38 != 0) {
    lVar14 = uVar11 + lVar17 + 8;
    uVar19 = 0;
    do {
      uVar10 = *(uint *)(lVar22 + (uVar19 + uVar25 * 4) * 4);
      uVar16 = (uint64_t)uVar10;
      if (uVar16 == 0) goto LAB_00eed93e;
      if (*(int *)(lVar13 + uVar16) == (int)*arg1) {
        puVar42 = (uint64_t *)((int *)(lVar13 + uVar16) + 1);
        puVar23 = (uint64_t *)(((int64_t)pcVar5 - (int64_t)puVar42) + (int64_t)puVar28);
        if (param_2 <= puVar23) {
          puVar23 = param_2;
        }
        puVar29 = puVar28;
        puVar33 = puVar42;
        if (puVar28 < (uint64_t *)((int64_t)puVar23 - 7U)) {
          uVar15 = *puVar28 ^ *puVar42;
          if (uVar15 == 0) {
            lVar20 = lVar13 + 0xc + uVar16;
            lVar26 = 0;
            do {
              puVar29 = (uint64_t *)((int64_t)arg1 + lVar26 + 0xc);
              if ((uint64_t *)((int64_t)puVar23 - 7U) <= puVar29) {
                puVar33 = (uint64_t *)(lVar20 + lVar26);
                goto LAB_00eed523;
              }
              lVar3 = lVar26 + 8;
              uVar16 = *(uint64_t *)((int64_t)arg1 + lVar26 + 0xc) ^
                       *(uint64_t *)(lVar20 + lVar26);
              lVar26 = lVar3;
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
LAB_00eed523:
          if ((puVar29 < (uint64_t *)((int64_t)puVar23 - 3U)) && ((int)*puVar33 == (int)*puVar29))
          {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar29 < (uint64_t *)((int64_t)puVar23 - 1U)) &&
             ((short)*puVar33 == (short)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
          }
          if (puVar29 < puVar23) {
            puVar29 = (uint64_t *)
                      ((int64_t)puVar29 + (uint64_t)((char)*puVar33 == (char)*puVar29));
          }
          uVar16 = (int64_t)puVar29 - (int64_t)puVar28;
        }
        if ((char *)((int64_t)puVar42 + uVar16) == pcVar5) {
          puVar23 = (uint64_t *)((int64_t)puVar28 + uVar16);
          puVar29 = puVar4;
          puVar42 = puVar23;
          if (puVar23 < puVar1) {
            uVar15 = *puVar23 ^ *puVar4;
            if (uVar15 == 0) {
              lVar20 = 0;
              do {
                puVar42 = (uint64_t *)((int64_t)arg1 + lVar20 + uVar16 + 0xc);
                if (puVar1 <= puVar42) {
                  puVar29 = (uint64_t *)(lVar20 + lVar14);
                  goto LAB_00eed611;
                }
                lVar26 = lVar20 + 8;
                uVar15 = *(uint64_t *)((int64_t)arg1 + lVar20 + uVar16 + 0xc) ^
                         *(uint64_t *)(lVar14 + lVar20);
                lVar20 = lVar26;
              } while (uVar15 == 0);
              uVar24 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                }
              }
              uVar24 = (uVar24 >> 3) + lVar26;
            }
            else {
              uVar24 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                }
              }
              uVar24 = uVar24 >> 3;
            }
          }
          else {
LAB_00eed611:
            if ((puVar42 < puVar2) && ((int)*puVar29 == (int)*puVar42)) {
              puVar42 = (uint64_t *)((int64_t)puVar42 + 4);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            }
            if ((puVar42 < puVar12) && ((short)*puVar29 == (short)*puVar42)) {
              puVar42 = (uint64_t *)((int64_t)puVar42 + 2);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            }
            if (puVar42 < param_2) {
              puVar42 = (uint64_t *)
                        ((int64_t)puVar42 + (uint64_t)((char)*puVar29 == (char)*puVar42));
            }
            uVar24 = (int64_t)puVar42 - (int64_t)puVar23;
          }
          uVar16 = uVar16 + uVar24;
        }
        uVar16 = uVar16 + 4;
        if ((uVar40 < uVar16) &&
           (*param_1 = (uint64_t)(iVar31 - uVar10), uVar40 = uVar16,
           (uint64_t *)((int64_t)arg1 + uVar16) == param_2)) goto LAB_00eed93e;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar38);
  }
  uVar37 = uVar37 - uVar38;
  if ((uVar35 & 0xff) < uVar37) {
    uVar37 = uVar35 & 0xff;
  }
  if (uVar37 != 0) {
    uVar25 = 0;
    do {
      uVar25 = uVar25 + 1;
    } while (uVar37 != uVar25);
    uVar25 = *arg1;
    lVar17 = lVar17 + uVar11 + 8;
    uVar38 = 0;
    uVar11 = uVar40;
    do {
      uVar10 = *(uint *)(lVar41 + uVar27 * 4);
      uVar40 = (uint64_t)uVar10;
      if (*(int *)(lVar13 + uVar40) == (int)uVar25) {
        puVar42 = (uint64_t *)(lVar13 + uVar40 + 4);
        puVar23 = (uint64_t *)(((int64_t)pcVar5 - (int64_t)puVar42) + (int64_t)puVar28);
        if (param_2 <= puVar23) {
          puVar23 = param_2;
        }
        puVar29 = puVar28;
        puVar33 = puVar42;
        if (puVar28 < (uint64_t *)((int64_t)puVar23 - 7U)) {
          uVar19 = *puVar28 ^ *puVar42;
          if (uVar19 == 0) {
            lVar22 = lVar13 + 0xc + uVar40;
            lVar14 = 0;
            do {
              puVar29 = (uint64_t *)((int64_t)arg1 + lVar14 + 0xc);
              if ((uint64_t *)((int64_t)puVar23 - 7U) <= puVar29) {
                puVar33 = (uint64_t *)(lVar22 + lVar14);
                goto LAB_00eed7c1;
              }
              lVar20 = lVar14 + 8;
              uVar40 = *(uint64_t *)((int64_t)arg1 + lVar14 + 0xc) ^
                       *(uint64_t *)(lVar22 + lVar14);
              lVar14 = lVar20;
            } while (uVar40 == 0);
            uVar19 = 0;
            if (uVar40 != 0) {
              for (; (uVar40 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar40 = (uVar19 >> 3) + lVar20;
          }
          else {
            uVar40 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
              }
            }
            uVar40 = uVar40 >> 3;
          }
        }
        else {
LAB_00eed7c1:
          if ((puVar29 < (uint64_t *)((int64_t)puVar23 - 3U)) && ((int)*puVar33 == (int)*puVar29))
          {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar29 < (uint64_t *)((int64_t)puVar23 - 1U)) &&
             ((short)*puVar33 == (short)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
          }
          if (puVar29 < puVar23) {
            puVar29 = (uint64_t *)
                      ((int64_t)puVar29 + (uint64_t)((char)*puVar33 == (char)*puVar29));
          }
          uVar40 = (int64_t)puVar29 - (int64_t)puVar28;
        }
        if ((char *)((int64_t)puVar42 + uVar40) == pcVar5) {
          puVar23 = (uint64_t *)((int64_t)puVar28 + uVar40);
          puVar42 = puVar23;
          puVar29 = puVar4;
          if (puVar23 < puVar1) {
            uVar19 = *puVar23 ^ *puVar4;
            if (uVar19 == 0) {
              lVar22 = 0;
              do {
                puVar42 = (uint64_t *)((int64_t)arg1 + lVar22 + uVar40 + 0xc);
                if (puVar1 <= puVar42) {
                  puVar29 = (uint64_t *)(lVar22 + lVar17);
                  goto LAB_00eed89d;
                }
                lVar14 = lVar22 + 8;
                uVar19 = *(uint64_t *)((int64_t)arg1 + lVar22 + uVar40 + 0xc) ^
                         *(uint64_t *)(lVar17 + lVar22);
                lVar22 = lVar14;
              } while (uVar19 == 0);
              uVar16 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              uVar16 = (uVar16 >> 3) + lVar14;
            }
            else {
              uVar16 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
              uVar16 = uVar16 >> 3;
            }
          }
          else {
LAB_00eed89d:
            if ((puVar42 < puVar2) && ((int)*puVar29 == (int)*puVar42)) {
              puVar42 = (uint64_t *)((int64_t)puVar42 + 4);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            }
            if ((puVar42 < puVar12) && ((short)*puVar29 == (short)*puVar42)) {
              puVar42 = (uint64_t *)((int64_t)puVar42 + 2);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            }
            if (puVar42 < param_2) {
              puVar42 = (uint64_t *)
                        ((int64_t)puVar42 + (uint64_t)((char)*puVar29 == (char)*puVar42));
            }
            uVar16 = (int64_t)puVar42 - (int64_t)puVar23;
          }
          uVar40 = uVar40 + uVar16;
        }
        uVar40 = uVar40 + 4;
        if ((uVar11 < uVar40) &&
           (*param_1 = (uint64_t)(iVar31 - uVar10), uVar11 = uVar40,
           (uint64_t *)((int64_t)arg1 + uVar40) == param_2)) break;
      }
      uVar40 = uVar11;
      uVar38 = uVar38 + 1;
      uVar27 = uVar27 + 1;
      uVar11 = uVar40;
    } while (uVar38 != uVar37);
  }
LAB_00eed93e:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar40;
}


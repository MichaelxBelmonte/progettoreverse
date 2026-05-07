// Function: FUN_00eef3fe
// Address: 00eef3fe
// Size: 3293 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00eef3fe(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  char *pcVar5;
  int iVar6;
  void*puVar7;
  uint uVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  int64_t lVar23;
  uint64_t *puVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  byte bVar30;
  uint64_t *arg1;
  int iVar31;
  int64_t this_ptr;
  uint64_t uVar32;
  uint64_t *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint64_t uVar37;
  char cVar38;
  int64_t lVar39;
  uint64_t *puVar40;
  void*puVar41;
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t local_138 [16] [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar16 = *(int64_t *)(this_ptr + 8);
  uVar8 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar37 = (int64_t)arg1 - lVar16;
  uVar34 = *(uint *)(this_ptr + 0x1c);
  uVar35 = (uint)uVar37;
  uVar36 = uVar35 - uVar8;
  if (uVar35 - uVar34 <= uVar8) {
    uVar36 = uVar34;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar36 = uVar34;
  }
  uVar34 = *(uint *)(this_ptr + 0x10c);
  uVar8 = 6;
  if (uVar34 < 6) {
    uVar8 = uVar34;
  }
  iVar9 = 1 << ((byte)uVar8 & 0x1f);
  puVar7 = *(void**)(this_ptr + 0xf8);
  uVar26 = *arg1 * -0x30e4432345000000 >> (0x42U - *(char *)(puVar7 + 0x21) & 0x3f);
  lVar12 = *(int64_t *)(this_ptr + 0x70);
  lVar23 = *(int64_t *)(this_ptr + 0x38);
  uVar8 = *(uint *)(this_ptr + 0x18);
  uVar17 = (uint64_t)uVar8;
  uVar27 = *(uint64_t *)(this_ptr + 0x60);
  iVar31 = 0;
  if (6 < uVar34) {
    iVar31 = 1 << ((char)uVar34 - 6U & 0x1f);
  }
  cVar38 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar34 = *(uint *)(this_ptr + 0x2c);
    uVar18 = (uint64_t)uVar34;
    bVar30 = 0x38 - cVar38;
    lVar39 = lVar23;
    lVar13 = lVar12;
    bVar21 = bVar30;
    if (0x180 < uVar35 - uVar34) {
      if (uVar34 < 0xffffffa0) {
        uVar32 = uVar18 + 0x5f;
        uVar15 = uVar27;
        while( true ) {
          uVar14 = (uint64_t)((uint)uVar18 & 7);
          uVar34 = *(uint *)(this_ptr + 0x40 + uVar14 * 4);
          *(int *)(this_ptr + 0x40 + uVar14 * 4) =
               (int)((*(int64_t *)(lVar16 + 8 + uVar18) * -0x30e4432345000000 ^ uVar15) >>
                    (bVar30 & 0x3f));
          uVar15 = (uint64_t)(uVar34 >> 2) & 0x3fffffc0;
          bVar21 = *(char *)(lVar23 + uVar15) - 1U & 0x3f;
          lVar39 = 0;
          if (bVar21 == 0) {
            lVar39 = 0x3f;
          }
          lVar39 = (uint64_t)bVar21 + lVar39;
          *(char *)(lVar23 + uVar15) = (char)lVar39;
          *(char *)(lVar23 + uVar15 + lVar39) = (char)uVar34;
          *(uint *)(lVar12 + (lVar39 + uVar15) * 4) = (uint)uVar18;
          if (uVar32 == uVar18) break;
          uVar15 = *(uint64_t *)(this_ptr + 0x60);
          uVar18 = uVar18 + 1;
        }
        lVar39 = *(int64_t *)(this_ptr + 0x38);
        lVar13 = *(int64_t *)(this_ptr + 0x70);
        bVar21 = 0x38 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar18 = (uint64_t)(uVar35 - 0x20);
      uVar34 = 0;
      if (lVar16 + uVar18 <= (int64_t)arg1 + 1U) {
        uVar34 = ((int)((int64_t)arg1 + 1U) - (int)(lVar16 + uVar18)) + 1;
      }
      uVar22 = 8;
      if (uVar34 < 8) {
        uVar22 = uVar34;
      }
      uVar34 = (uVar22 + uVar35) - 0x20;
      if (uVar35 - 0x20 < uVar34) {
        uVar32 = *(uint64_t *)(this_ptr + 0x60);
        uVar15 = uVar18;
        do {
          *(int *)(this_ptr + 0x40 + (uint64_t)((uint)uVar15 & 7) * 4) =
               (int)((*(int64_t *)(lVar16 + uVar15) * -0x30e4432345000000 ^ uVar32) >>
                    (bVar21 & 0x3f));
          uVar15 = uVar15 + 1;
        } while (uVar34 != uVar15);
      }
    }
    if ((uint)uVar18 < uVar35) {
      lVar19 = *(int64_t *)(this_ptr + 8);
      do {
        uVar32 = (uint64_t)((uint)uVar18 & 7);
        uVar34 = *(uint *)(this_ptr + 0x40 + uVar32 * 4);
        *(int *)(this_ptr + 0x40 + uVar32 * 4) =
             (int)((*(int64_t *)(lVar19 + 8 + uVar18) * -0x30e4432345000000 ^
                   *(uint64_t *)(this_ptr + 0x60)) >> (bVar21 & 0x3f));
        uVar32 = (uint64_t)(uVar34 >> 2) & 0x3fffffc0;
        bVar20 = *(char *)(lVar39 + uVar32) - 1U & 0x3f;
        lVar10 = 0;
        if (bVar20 == 0) {
          lVar10 = 0x3f;
        }
        lVar10 = (uint64_t)bVar20 + lVar10;
        *(char *)(lVar39 + uVar32) = (char)lVar10;
        *(char *)(lVar39 + uVar32 + lVar10) = (char)uVar34;
        *(uint *)(lVar13 + (lVar10 + uVar32) * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while ((uVar37 & 0xffffffff) != uVar18);
    }
    *(uint *)(this_ptr + 0x2c) = uVar35;
    uVar34 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar35 & 7) * 4);
    *(int *)(this_ptr + 0x40 + (uint64_t)(uVar35 & 7) * 4) =
         (int)((*(int64_t *)((uVar37 & 0xffffffff) + 8 + lVar16) * -0x30e4432345000000 ^ uVar27) >>
              (bVar30 & 0x3f));
  }
  else {
    uVar34 = (uint)((*arg1 * -0x30e4432345000000 ^ uVar27) >> (0x38U - cVar38 & 0x3f));
    *(uint *)(this_ptr + 0x2c) = uVar35;
  }
  puVar4 = (uint64_t *)(lVar16 + uVar17);
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar34;
  uVar37 = (uint64_t)(uVar34 >> 2 & 0xffffffc0);
  bVar21 = *(byte *)(lVar23 + uVar37);
  puVar41 = (void*)(lVar23 + uVar37);
  auVar42 = pshufb(ZEXT416(uVar34),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar23 = 0;
  do {
    pcVar5 = puVar41 + lVar23 * 4;
    auVar43[0] = -(*pcVar5 == auVar42[0]);
    auVar43[1] = -(pcVar5[1] == auVar42[1]);
    auVar43[2] = -(pcVar5[2] == auVar42[2]);
    auVar43[3] = -(pcVar5[3] == auVar42[3]);
    auVar43[4] = -(pcVar5[4] == auVar42[4]);
    auVar43[5] = -(pcVar5[5] == auVar42[5]);
    auVar43[6] = -(pcVar5[6] == auVar42[6]);
    auVar43[7] = -(pcVar5[7] == auVar42[7]);
    auVar43[8] = -(pcVar5[8] == auVar42[8]);
    auVar43[9] = -(pcVar5[9] == auVar42[9]);
    auVar43[10] = -(pcVar5[10] == auVar42[10]);
    auVar43[0xb] = -(pcVar5[0xb] == auVar42[0xb]);
    auVar43[0xc] = -(pcVar5[0xc] == auVar42[0xc]);
    auVar43[0xd] = -(pcVar5[0xd] == auVar42[0xd]);
    auVar43[0xe] = -(pcVar5[0xe] == auVar42[0xe]);
    auVar43[0xf] = -(pcVar5[0xf] == auVar42[0xf]);
    *(uint *)(local_138[0] + lVar23) =
         (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar43[0xf] >> 7) << 0xf);
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x10);
  uVar27 = (int64_t)(int)local_138[0]._4_4_ << 0x10 | (int64_t)(int)local_138[0]._0_4_ |
           (uint64_t)(uint)local_138[0]._8_4_ << 0x20 |
           (uint64_t)(uint)local_138[0]._12_4_ << 0x30;
  uVar27 = uVar27 >> (bVar21 & 0x3f) | uVar27 << 0x40 - (bVar21 & 0x3f);
  lVar12 = lVar12 + uVar37 * 4;
  lVar23 = 0;
  lVar39 = 0;
  if (uVar27 != 0) {
    do {
      lVar13 = 0;
      if (uVar27 != 0) {
        for (; (uVar27 >> lVar13 & 1) == 0; lVar13 = lVar13 + 1) {
        }
      }
      uVar37 = (uint64_t)((int)lVar13 + (uint)bVar21 & 0x3f);
      if (uVar37 != 0) {
        uVar22 = *(uint *)(lVar12 + uVar37 * 4);
        if (uVar22 < uVar36) break;
        *(uint *)(local_138[0] + lVar39 * 4) = uVar22;
        lVar39 = lVar39 + 1;
        iVar9 = iVar9 + -1;
      }
      uVar27 = uVar27 & uVar27 - 1;
      if ((uVar27 == 0) || (iVar9 == 0)) break;
    } while( true );
  }
  uVar37 = (uint64_t)(bVar21 - 1 & 0x3f);
  if (uVar37 == 0) {
    lVar23 = 0x3f;
  }
  lVar23 = lVar23 + uVar37;
  *puVar41 = (char)lVar23;
  puVar41[lVar23] = (char)uVar34;
  iVar6 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar6 + 1;
  *(int *)(lVar12 + lVar23 * 4) = iVar6;
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  puVar2 = (uint64_t *)((int64_t)param_2 - 3);
  puVar11 = (uint64_t *)((int64_t)param_2 + -1);
  if (lVar39 == 0) {
    uVar37 = 3;
  }
  else {
    lVar12 = 0;
    uVar27 = 3;
    do {
      uVar34 = *(uint *)(local_138[0] + lVar12 * 4);
      puVar28 = (uint64_t *)(lVar16 + (uint64_t)uVar34);
      if (*(int *)((uVar27 - 3) + (int64_t)puVar28) == *(int *)((int64_t)arg1 + (uVar27 - 3))
         ) {
        puVar24 = arg1;
        if (arg1 < puVar1) {
          uVar18 = *arg1 ^ *puVar28;
          if (uVar18 == 0) {
            lVar23 = lVar16 + 8 + (uint64_t)uVar34;
            lVar13 = 0;
            do {
              puVar24 = (uint64_t *)((int64_t)arg1 + lVar13 + 8);
              if (puVar1 <= puVar24) {
                puVar28 = (uint64_t *)(lVar23 + lVar13);
                goto LAB_00eef86e;
              }
              lVar19 = lVar13 + 8;
              uVar37 = *(uint64_t *)((int64_t)arg1 + lVar13 + 8) ^
                       *(uint64_t *)(lVar23 + lVar13);
              lVar13 = lVar19;
            } while (uVar37 == 0);
            uVar18 = 0;
            if (uVar37 != 0) {
              for (; (uVar37 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
              }
            }
            uVar37 = (uVar18 >> 3) + lVar19;
          }
          else {
            uVar37 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
              }
            }
            uVar37 = uVar37 >> 3;
          }
        }
        else {
LAB_00eef86e:
          if ((puVar24 < puVar2) && ((int)*puVar28 == (int)*puVar24)) {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
          }
          if ((puVar24 < puVar11) && ((short)*puVar28 == (short)*puVar24)) {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
          }
          if (puVar24 < param_2) {
            puVar24 = (uint64_t *)
                      ((int64_t)puVar24 + (uint64_t)((char)*puVar28 == (char)*puVar24));
          }
          uVar37 = (int64_t)puVar24 - (int64_t)arg1;
        }
        if ((uVar27 < uVar37) &&
           (*param_1 = (uint64_t)((uVar35 + 3) - uVar34), uVar27 = uVar37,
           (uint64_t *)((int64_t)arg1 + uVar37) == param_2)) break;
      }
      uVar37 = uVar27;
      lVar12 = lVar12 + 1;
      uVar27 = uVar37;
    } while (lVar12 != lVar39);
  }
  puVar28 = (uint64_t *)((int64_t)arg1 + 4);
  pcVar5 = (char *)*puVar7;
  lVar12 = puVar7[1];
  lVar23 = puVar7[0xe];
  lVar39 = 0;
  do {
    lVar39 = lVar39 + 1;
  } while (lVar39 != 3);
  uVar34 = iVar9 + iVar31;
  uVar27 = 3;
  if (uVar34 < 3) {
    uVar27 = (uint64_t)uVar34;
  }
  uVar36 = *(uint *)(lVar23 + (uVar26 << 4 | 0xc));
  uVar18 = (uint64_t)(uVar36 >> 8);
  lVar39 = puVar7[0x10];
  iVar31 = (((int)pcVar5 - (int)lVar12) - uVar8) + uVar35 + 3;
  if ((int)uVar27 != 0) {
    lVar13 = lVar16 + uVar17 + 8;
    uVar32 = 0;
    do {
      uVar8 = *(uint *)(lVar23 + (uVar32 + uVar26 * 4) * 4);
      uVar15 = (uint64_t)uVar8;
      if (uVar15 == 0) goto LAB_00eeff0c;
      if (*(int *)(lVar12 + uVar15) == (int)*arg1) {
        puVar40 = (uint64_t *)((int *)(lVar12 + uVar15) + 1);
        puVar24 = (uint64_t *)(((int64_t)pcVar5 - (int64_t)puVar40) + (int64_t)puVar28);
        if (param_2 <= puVar24) {
          puVar24 = param_2;
        }
        puVar29 = puVar28;
        puVar33 = puVar40;
        if (puVar28 < (uint64_t *)((int64_t)puVar24 - 7U)) {
          uVar14 = *puVar28 ^ *puVar40;
          if (uVar14 == 0) {
            lVar19 = lVar12 + 0xc + uVar15;
            lVar10 = 0;
            do {
              puVar29 = (uint64_t *)((int64_t)arg1 + lVar10 + 0xc);
              if ((uint64_t *)((int64_t)puVar24 - 7U) <= puVar29) {
                puVar33 = (uint64_t *)(lVar19 + lVar10);
                goto LAB_00eefaea;
              }
              lVar3 = lVar10 + 8;
              uVar15 = *(uint64_t *)((int64_t)arg1 + lVar10 + 0xc) ^
                       *(uint64_t *)(lVar19 + lVar10);
              lVar10 = lVar3;
            } while (uVar15 == 0);
            uVar14 = 0;
            if (uVar15 != 0) {
              for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar15 = (uVar14 >> 3) + lVar3;
          }
          else {
            uVar15 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
              }
            }
            uVar15 = uVar15 >> 3;
          }
        }
        else {
LAB_00eefaea:
          if ((puVar29 < (uint64_t *)((int64_t)puVar24 - 3U)) && ((int)*puVar33 == (int)*puVar29))
          {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar29 < (uint64_t *)((int64_t)puVar24 - 1U)) &&
             ((short)*puVar33 == (short)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
          }
          if (puVar29 < puVar24) {
            puVar29 = (uint64_t *)
                      ((int64_t)puVar29 + (uint64_t)((char)*puVar33 == (char)*puVar29));
          }
          uVar15 = (int64_t)puVar29 - (int64_t)puVar28;
        }
        if ((char *)((int64_t)puVar40 + uVar15) == pcVar5) {
          puVar24 = (uint64_t *)((int64_t)puVar28 + uVar15);
          puVar29 = puVar4;
          puVar40 = puVar24;
          if (puVar24 < puVar1) {
            uVar14 = *puVar24 ^ *puVar4;
            if (uVar14 == 0) {
              lVar19 = 0;
              do {
                puVar40 = (uint64_t *)((int64_t)arg1 + lVar19 + uVar15 + 0xc);
                if (puVar1 <= puVar40) {
                  puVar29 = (uint64_t *)(lVar19 + lVar13);
                  goto LAB_00eefbdf;
                }
                lVar10 = lVar19 + 8;
                uVar14 = *(uint64_t *)((int64_t)arg1 + lVar19 + uVar15 + 0xc) ^
                         *(uint64_t *)(lVar13 + lVar19);
                lVar19 = lVar10;
              } while (uVar14 == 0);
              uVar25 = 0;
              if (uVar14 != 0) {
                for (; (uVar14 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
              uVar25 = (uVar25 >> 3) + lVar10;
            }
            else {
              uVar25 = 0;
              if (uVar14 != 0) {
                for (; (uVar14 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
              uVar25 = uVar25 >> 3;
            }
          }
          else {
LAB_00eefbdf:
            if ((puVar40 < puVar2) && ((int)*puVar29 == (int)*puVar40)) {
              puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            }
            if ((puVar40 < puVar11) && ((short)*puVar29 == (short)*puVar40)) {
              puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            }
            if (puVar40 < param_2) {
              puVar40 = (uint64_t *)
                        ((int64_t)puVar40 + (uint64_t)((char)*puVar29 == (char)*puVar40));
            }
            uVar25 = (int64_t)puVar40 - (int64_t)puVar24;
          }
          uVar15 = uVar15 + uVar25;
        }
        uVar15 = uVar15 + 4;
        if ((uVar37 < uVar15) &&
           (*param_1 = (uint64_t)(iVar31 - uVar8), uVar37 = uVar15,
           (uint64_t *)((int64_t)arg1 + uVar15) == param_2)) goto LAB_00eeff0c;
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar27);
  }
  uVar34 = uVar34 - (int)uVar27;
  if ((uVar36 & 0xff) < uVar34) {
    uVar34 = uVar36 & 0xff;
  }
  if (uVar34 != 0) {
    uVar27 = 0;
    do {
      uVar27 = uVar27 + 1;
    } while (uVar34 != uVar27);
    uVar27 = *arg1;
    lVar16 = lVar16 + uVar17 + 8;
    uVar36 = 0;
    uVar17 = uVar37;
    do {
      uVar8 = *(uint *)(lVar39 + uVar18 * 4);
      uVar37 = (uint64_t)uVar8;
      if (*(int *)(lVar12 + uVar37) == (int)uVar27) {
        puVar40 = (uint64_t *)(lVar12 + uVar37 + 4);
        puVar24 = (uint64_t *)(((int64_t)pcVar5 - (int64_t)puVar40) + (int64_t)puVar28);
        if (param_2 <= puVar24) {
          puVar24 = param_2;
        }
        puVar29 = puVar28;
        puVar33 = puVar40;
        if (puVar28 < (uint64_t *)((int64_t)puVar24 - 7U)) {
          uVar26 = *puVar28 ^ *puVar40;
          if (uVar26 == 0) {
            lVar23 = lVar12 + 0xc + uVar37;
            lVar13 = 0;
            do {
              puVar29 = (uint64_t *)((int64_t)arg1 + lVar13 + 0xc);
              if ((uint64_t *)((int64_t)puVar24 - 7U) <= puVar29) {
                puVar33 = (uint64_t *)(lVar23 + lVar13);
                goto LAB_00eefd8f;
              }
              lVar19 = lVar13 + 8;
              uVar37 = *(uint64_t *)((int64_t)arg1 + lVar13 + 0xc) ^
                       *(uint64_t *)(lVar23 + lVar13);
              lVar13 = lVar19;
            } while (uVar37 == 0);
            uVar26 = 0;
            if (uVar37 != 0) {
              for (; (uVar37 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
              }
            }
            uVar37 = (uVar26 >> 3) + lVar19;
          }
          else {
            uVar37 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
              }
            }
            uVar37 = uVar37 >> 3;
          }
        }
        else {
LAB_00eefd8f:
          if ((puVar29 < (uint64_t *)((int64_t)puVar24 - 3U)) && ((int)*puVar33 == (int)*puVar29))
          {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar29 < (uint64_t *)((int64_t)puVar24 - 1U)) &&
             ((short)*puVar33 == (short)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
          }
          if (puVar29 < puVar24) {
            puVar29 = (uint64_t *)
                      ((int64_t)puVar29 + (uint64_t)((char)*puVar33 == (char)*puVar29));
          }
          uVar37 = (int64_t)puVar29 - (int64_t)puVar28;
        }
        if ((char *)((int64_t)puVar40 + uVar37) == pcVar5) {
          puVar24 = (uint64_t *)((int64_t)puVar28 + uVar37);
          puVar40 = puVar24;
          puVar29 = puVar4;
          if (puVar24 < puVar1) {
            uVar26 = *puVar24 ^ *puVar4;
            if (uVar26 == 0) {
              lVar23 = 0;
              do {
                puVar40 = (uint64_t *)((int64_t)arg1 + lVar23 + uVar37 + 0xc);
                if (puVar1 <= puVar40) {
                  puVar29 = (uint64_t *)(lVar23 + lVar16);
                  goto LAB_00eefe6b;
                }
                lVar13 = lVar23 + 8;
                uVar26 = *(uint64_t *)((int64_t)arg1 + lVar23 + uVar37 + 0xc) ^
                         *(uint64_t *)(lVar16 + lVar23);
                lVar23 = lVar13;
              } while (uVar26 == 0);
              uVar32 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = (uVar32 >> 3) + lVar13;
            }
            else {
              uVar32 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                }
              }
              uVar32 = uVar32 >> 3;
            }
          }
          else {
LAB_00eefe6b:
            if ((puVar40 < puVar2) && ((int)*puVar29 == (int)*puVar40)) {
              puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            }
            if ((puVar40 < puVar11) && ((short)*puVar29 == (short)*puVar40)) {
              puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            }
            if (puVar40 < param_2) {
              puVar40 = (uint64_t *)
                        ((int64_t)puVar40 + (uint64_t)((char)*puVar29 == (char)*puVar40));
            }
            uVar32 = (int64_t)puVar40 - (int64_t)puVar24;
          }
          uVar37 = uVar37 + uVar32;
        }
        uVar37 = uVar37 + 4;
        if ((uVar17 < uVar37) &&
           (*param_1 = (uint64_t)(iVar31 - uVar8), uVar17 = uVar37,
           (uint64_t *)((int64_t)arg1 + uVar37) == param_2)) break;
      }
      uVar37 = uVar17;
      uVar36 = uVar36 + 1;
      uVar18 = uVar18 + 1;
      uVar17 = uVar37;
    } while (uVar36 != uVar34);
  }
LAB_00eeff0c:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar37;
}


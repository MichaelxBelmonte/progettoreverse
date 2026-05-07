// Function: FUN_00ee54bb
// Address: 00ee54bb
// Size: 2697 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ee54bb(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  byte bVar18;
  uint64_t *puVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  int64_t lVar23;
  uint64_t *arg1;
  int64_t lVar24;
  byte *pbVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t this_ptr;
  int64_t lVar28;
  uint64_t *puVar29;
  uint64_t uVar30;
  void*puVar31;
  int iVar32;
  uint uVar33;
  int64_t lVar34;
  int64_t lVar35;
  char cVar36;
  uint uVar37;
  uint64_t uVar38;
  uint64_t *puVar39;
  uint uVar40;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  byte local_174;
  uint8_t local_138 [16] [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar9 = *(int64_t *)(this_ptr + 8);
  uVar8 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar38 = (int64_t)arg1 - lVar9;
  uVar12 = *(uint *)(this_ptr + 0x1c);
  uVar37 = (uint)uVar38;
  uVar11 = uVar37 - uVar8;
  if (uVar37 - uVar12 <= uVar8) {
    uVar11 = uVar12;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar11 = uVar12;
  }
  uVar12 = 6;
  if (*(uint *)(this_ptr + 0x10c) < 6) {
    uVar12 = *(uint *)(this_ptr + 0x10c);
  }
  iVar32 = 1 << ((byte)uVar12 & 0x1f);
  uVar40 = (int)*arg1 * -0x61c8864f;
  puVar6 = *(void**)(this_ptr + 0xf8);
  uVar8 = uVar40 >> (0x18U - *(char *)((int64_t)puVar6 + 0x34) & 0x1f);
  lVar28 = *(int64_t *)(this_ptr + 0x70);
  uVar13 = (uint64_t)(uVar8 >> 2 & 0xffffffc0);
  lVar23 = *(int64_t *)(this_ptr + 0x38);
  uVar12 = *(uint *)(this_ptr + 0x18);
  uVar17 = *(void*)(this_ptr + 0x60);
  lVar35 = puVar6[7];
  lVar15 = puVar6[0xe];
  uVar33 = (uint)uVar17;
  cVar36 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar40 = *(uint *)(this_ptr + 0x2c);
    uVar26 = (uint64_t)uVar40;
    bVar18 = 0x18 - cVar36;
    lVar34 = lVar28;
    lVar10 = lVar23;
    bVar21 = bVar18;
    if (0x180 < uVar37 - uVar40) {
      if (uVar40 < 0xffffffa0) {
        uVar27 = uVar26 + 0x5f;
        while( true ) {
          uVar30 = (uint64_t)((uint)uVar26 & 7);
          uVar40 = *(uint *)(this_ptr + 0x40 + uVar30 * 4);
          *(uint *)(this_ptr + 0x40 + uVar30 * 4) =
               (*(int *)(lVar9 + 8 + uVar26) * -0x61c8864f ^ (uint)uVar17) >> (bVar18 & 0x1f);
          uVar30 = (uint64_t)(uVar40 >> 2 & 0x3fffffc0);
          bVar21 = *(char *)(lVar23 + uVar30) - 1U & 0x3f;
          lVar10 = 0;
          if (bVar21 == 0) {
            lVar10 = 0x3f;
          }
          lVar10 = (uint64_t)bVar21 + lVar10;
          *(char *)(lVar23 + uVar30) = (char)lVar10;
          *(char *)(lVar23 + uVar30 + lVar10) = (char)uVar40;
          *(uint *)(lVar28 + (lVar10 + uVar30) * 4) = (uint)uVar26;
          if (uVar27 == uVar26) break;
          uVar17 = *(void*)(this_ptr + 0x60);
          uVar26 = uVar26 + 1;
        }
        lVar10 = *(int64_t *)(this_ptr + 0x38);
        lVar34 = *(int64_t *)(this_ptr + 0x70);
        bVar21 = 0x18 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar26 = (uint64_t)(uVar37 - 0x20);
      uVar40 = 0;
      if (lVar9 + uVar26 <= (int64_t)arg1 + 1U) {
        uVar40 = ((int)((int64_t)arg1 + 1U) - (int)(lVar9 + uVar26)) + 1;
      }
      uVar22 = 8;
      if (uVar40 < 8) {
        uVar22 = uVar40;
      }
      uVar40 = (uVar22 + uVar37) - 0x20;
      if (uVar37 - 0x20 < uVar40) {
        uVar22 = *(uint *)(this_ptr + 0x60);
        uVar27 = uVar26;
        do {
          *(uint *)(this_ptr + 0x40 + (uint64_t)((uint)uVar27 & 7) * 4) =
               (*(int *)(lVar9 + uVar27) * -0x61c8864f ^ uVar22) >> (bVar21 & 0x1f);
          uVar27 = uVar27 + 1;
        } while (uVar40 != uVar27);
      }
    }
    if ((uint)uVar26 < uVar37) {
      lVar7 = *(int64_t *)(this_ptr + 8);
      do {
        uVar27 = (uint64_t)((uint)uVar26 & 7);
        uVar40 = *(uint *)(this_ptr + 0x40 + uVar27 * 4);
        *(uint *)(this_ptr + 0x40 + uVar27 * 4) =
             (*(int *)(lVar7 + 8 + uVar26) * -0x61c8864f ^ *(uint *)(this_ptr + 0x60)) >>
             (bVar21 & 0x1f);
        uVar27 = (uint64_t)(uVar40 >> 2 & 0x3fffffc0);
        bVar20 = *(char *)(lVar10 + uVar27) - 1U & 0x3f;
        lVar24 = 0;
        if (bVar20 == 0) {
          lVar24 = 0x3f;
        }
        lVar24 = (uint64_t)bVar20 + lVar24;
        *(char *)(lVar10 + uVar27) = (char)lVar24;
        *(char *)(lVar10 + uVar27 + lVar24) = (char)uVar40;
        *(uint *)(lVar34 + (lVar24 + uVar27) * 4) = (uint)uVar26;
        uVar26 = uVar26 + 1;
      } while ((uVar38 & 0xffffffff) != uVar26);
    }
    *(uint *)(this_ptr + 0x2c) = uVar37;
    uVar40 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar37 & 7) * 4);
    *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar37 & 7) * 4) =
         (*(int *)((uVar38 & 0xffffffff) + 8 + lVar9) * -0x61c8864f ^ uVar33) >> (bVar18 & 0x1f);
  }
  else {
    uVar40 = (uVar40 ^ uVar33) >> (0x18U - cVar36 & 0x1f);
    *(uint *)(this_ptr + 0x2c) = uVar37;
  }
  puVar2 = (uint64_t *)(lVar9 + (uint64_t)uVar12);
  pbVar25 = (byte *)(lVar35 + uVar13);
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar40;
  uVar38 = (uint64_t)(uVar40 >> 2 & 0xffffffc0);
  bVar21 = *(byte *)(lVar23 + uVar38);
  puVar31 = (void*)(lVar23 + uVar38);
  auVar41 = pshufb(ZEXT416(uVar40),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar23 = 0;
  do {
    pcVar3 = puVar31 + lVar23 * 4;
    auVar42[0] = -(*pcVar3 == auVar41[0]);
    auVar42[1] = -(pcVar3[1] == auVar41[1]);
    auVar42[2] = -(pcVar3[2] == auVar41[2]);
    auVar42[3] = -(pcVar3[3] == auVar41[3]);
    auVar42[4] = -(pcVar3[4] == auVar41[4]);
    auVar42[5] = -(pcVar3[5] == auVar41[5]);
    auVar42[6] = -(pcVar3[6] == auVar41[6]);
    auVar42[7] = -(pcVar3[7] == auVar41[7]);
    auVar42[8] = -(pcVar3[8] == auVar41[8]);
    auVar42[9] = -(pcVar3[9] == auVar41[9]);
    auVar42[10] = -(pcVar3[10] == auVar41[10]);
    auVar42[0xb] = -(pcVar3[0xb] == auVar41[0xb]);
    auVar42[0xc] = -(pcVar3[0xc] == auVar41[0xc]);
    auVar42[0xd] = -(pcVar3[0xd] == auVar41[0xd]);
    auVar42[0xe] = -(pcVar3[0xe] == auVar41[0xe]);
    auVar42[0xf] = -(pcVar3[0xf] == auVar41[0xf]);
    *(uint *)(local_138[0] + lVar23) =
         (uint)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar42[0xf] >> 7) << 0xf);
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x10);
  uVar26 = (int64_t)(int)local_138[0]._4_4_ << 0x10 | (int64_t)(int)local_138[0]._0_4_ |
           (uint64_t)(uint)local_138[0]._8_4_ << 0x20 |
           (uint64_t)(uint)local_138[0]._12_4_ << 0x30;
  uVar26 = uVar26 >> (bVar21 & 0x3f) | uVar26 << 0x40 - (bVar21 & 0x3f);
  lVar28 = lVar28 + uVar38 * 4;
  lVar23 = 0;
  if (uVar26 != 0) {
    lVar35 = 0;
    do {
      lVar10 = 0;
      if (uVar26 != 0) {
        for (; (uVar26 >> lVar10 & 1) == 0; lVar10 = lVar10 + 1) {
        }
      }
      uVar38 = (uint64_t)((int)lVar10 + (uint)bVar21 & 0x3f);
      if (uVar38 != 0) {
        uVar33 = *(uint *)(lVar28 + uVar38 * 4);
        if (uVar33 < uVar11) goto LAB_00ee585d;
        *(uint *)(local_138[0] + lVar35 * 4) = uVar33;
        lVar35 = lVar35 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar26 = uVar26 & uVar26 - 1;
      if ((uVar26 == 0) || (iVar32 == 0)) goto LAB_00ee585d;
    } while( true );
  }
  lVar35 = 0;
LAB_00ee585d:
  uVar38 = (uint64_t)(bVar21 - 1 & 0x3f);
  if (uVar38 == 0) {
    lVar23 = 0x3f;
  }
  lVar23 = lVar23 + uVar38;
  *puVar31 = (char)lVar23;
  puVar31[lVar23] = (char)uVar40;
  iVar5 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar5 + 1;
  *(int *)(lVar28 + lVar23 * 4) = iVar5;
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  if (lVar35 == 0) {
    uVar38 = 3;
  }
  else {
    uVar38 = 3;
    lVar28 = 0;
    do {
      uVar11 = *(uint *)(local_138[0] + lVar28 * 4);
      puVar14 = (uint64_t *)(lVar9 + (uint64_t)uVar11);
      if (*(int *)((uVar38 - 3) + (int64_t)puVar14) == *(int *)((int64_t)arg1 + (uVar38 - 3))
         ) {
        puVar19 = arg1;
        if (arg1 < puVar1) {
          uVar26 = *arg1 ^ *puVar14;
          if (uVar26 == 0) {
            lVar23 = lVar9 + 8 + (uint64_t)uVar11;
            lVar10 = 0;
            do {
              puVar19 = (uint64_t *)((int64_t)arg1 + lVar10 + 8);
              if (puVar1 <= puVar19) {
                puVar14 = (uint64_t *)(lVar23 + lVar10);
                goto LAB_00ee590e;
              }
              lVar34 = lVar10 + 8;
              uVar26 = *(uint64_t *)((int64_t)arg1 + lVar10 + 8) ^
                       *(uint64_t *)(lVar23 + lVar10);
              lVar10 = lVar34;
            } while (uVar26 == 0);
            uVar27 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
              }
            }
            uVar27 = (uVar27 >> 3) + lVar34;
          }
          else {
            uVar27 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
              }
            }
            uVar27 = uVar27 >> 3;
          }
        }
        else {
LAB_00ee590e:
          if ((puVar19 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar14 == (int)*puVar19))
          {
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
          }
          if ((puVar19 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar14 == (short)*puVar19)) {
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
          }
          if (puVar19 < param_2) {
            puVar19 = (uint64_t *)
                      ((int64_t)puVar19 + (uint64_t)((char)*puVar14 == (char)*puVar19));
          }
          uVar27 = (int64_t)puVar19 - (int64_t)arg1;
        }
        if ((uVar38 < uVar27) &&
           (*param_1 = (uint64_t)((uVar37 + 3) - uVar11), uVar38 = uVar27,
           (uint64_t *)((int64_t)arg1 + uVar27) == param_2)) break;
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar35);
  }
  puVar14 = (uint64_t *)((int64_t)arg1 + 4);
  uVar11 = *(uint *)(puVar6 + 3);
  pcVar3 = (char *)*puVar6;
  lVar28 = puVar6[1];
  bVar21 = *pbVar25;
  local_174 = (byte)uVar8;
  auVar41 = pshufb(ZEXT116(local_174),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar23 = 0;
  do {
    pbVar4 = pbVar25 + lVar23 * 4;
    auVar43[0] = -(*pbVar4 == auVar41[0]);
    auVar43[1] = -(pbVar4[1] == auVar41[1]);
    auVar43[2] = -(pbVar4[2] == auVar41[2]);
    auVar43[3] = -(pbVar4[3] == auVar41[3]);
    auVar43[4] = -(pbVar4[4] == auVar41[4]);
    auVar43[5] = -(pbVar4[5] == auVar41[5]);
    auVar43[6] = -(pbVar4[6] == auVar41[6]);
    auVar43[7] = -(pbVar4[7] == auVar41[7]);
    auVar43[8] = -(pbVar4[8] == auVar41[8]);
    auVar43[9] = -(pbVar4[9] == auVar41[9]);
    auVar43[10] = -(pbVar4[10] == auVar41[10]);
    auVar43[0xb] = -(pbVar4[0xb] == auVar41[0xb]);
    auVar43[0xc] = -(pbVar4[0xc] == auVar41[0xc]);
    auVar43[0xd] = -(pbVar4[0xd] == auVar41[0xd]);
    auVar43[0xe] = -(pbVar4[0xe] == auVar41[0xe]);
    auVar43[0xf] = -(pbVar4[0xf] == auVar41[0xf]);
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
  uVar26 = (int64_t)(int)local_138[0]._4_4_ << 0x10 | (int64_t)(int)local_138[0]._0_4_ |
           (uint64_t)(uint)local_138[0]._8_4_ << 0x20 |
           (uint64_t)(uint)local_138[0]._12_4_ << 0x30;
  bVar18 = bVar21 & 0x3f;
  uVar26 = uVar26 >> bVar18 | uVar26 << 0x40 - bVar18;
  if ((uVar26 != 0) && (iVar32 != 0)) {
    lVar23 = 0;
    do {
      lVar35 = 0;
      if (uVar26 != 0) {
        for (; (uVar26 >> lVar35 & 1) == 0; lVar35 = lVar35 + 1) {
        }
      }
      uVar27 = (uint64_t)((int)lVar35 + (uint)bVar21 & 0x3f);
      if (uVar27 != 0) {
        uVar8 = *(uint *)(lVar15 + uVar13 * 4 + uVar27 * 4);
        if (uVar8 < uVar11) goto LAB_00ee5ae5;
        *(uint *)(local_138[0] + lVar23 * 4) = uVar8;
        lVar23 = lVar23 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar26 = uVar26 & uVar26 - 1;
      if ((uVar26 == 0) || (iVar32 == 0)) goto LAB_00ee5ae5;
    } while( true );
  }
  goto LAB_00ee5d4e;
LAB_00ee5ae5:
  if (lVar23 != 0) {
    uVar13 = *arg1;
    lVar9 = lVar9 + (uint64_t)uVar12 + 8;
    lVar35 = 0;
    uVar26 = uVar38;
    do {
      uVar38 = (uint64_t)*(uint *)(local_138[0] + lVar35 * 4);
      if (*(int *)(lVar28 + uVar38) == (int)uVar13) {
        puVar39 = (uint64_t *)(lVar28 + uVar38 + 4);
        puVar19 = (uint64_t *)(((int64_t)pcVar3 - (int64_t)puVar39) + (int64_t)puVar14);
        if (param_2 <= puVar19) {
          puVar19 = param_2;
        }
        puVar16 = puVar14;
        puVar29 = puVar39;
        if (puVar14 < (uint64_t *)((int64_t)puVar19 - 7U)) {
          uVar27 = *puVar14 ^ *puVar39;
          if (uVar27 == 0) {
            lVar15 = lVar28 + 0xc + uVar38;
            lVar10 = 0;
            do {
              puVar16 = (uint64_t *)((int64_t)arg1 + lVar10 + 0xc);
              if ((uint64_t *)((int64_t)puVar19 - 7U) <= puVar16) {
                puVar29 = (uint64_t *)(lVar15 + lVar10);
                goto LAB_00ee5be3;
              }
              lVar34 = lVar10 + 8;
              uVar38 = *(uint64_t *)((int64_t)arg1 + lVar10 + 0xc) ^
                       *(uint64_t *)(lVar15 + lVar10);
              lVar10 = lVar34;
            } while (uVar38 == 0);
            uVar27 = 0;
            if (uVar38 != 0) {
              for (; (uVar38 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
              }
            }
            uVar38 = (uVar27 >> 3) + lVar34;
          }
          else {
            uVar38 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
              }
            }
            uVar38 = uVar38 >> 3;
          }
        }
        else {
LAB_00ee5be3:
          if ((puVar16 < (uint64_t *)((int64_t)puVar19 - 3U)) && ((int)*puVar29 == (int)*puVar16))
          {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
          }
          if ((puVar16 < (uint64_t *)((int64_t)puVar19 - 1U)) &&
             ((short)*puVar29 == (short)*puVar16)) {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
          }
          if (puVar16 < puVar19) {
            puVar16 = (uint64_t *)
                      ((int64_t)puVar16 + (uint64_t)((char)*puVar29 == (char)*puVar16));
          }
          uVar38 = (int64_t)puVar16 - (int64_t)puVar14;
        }
        if ((char *)((int64_t)puVar39 + uVar38) == pcVar3) {
          puVar19 = (uint64_t *)((int64_t)puVar14 + uVar38);
          puVar16 = puVar2;
          puVar39 = puVar19;
          if (puVar19 < puVar1) {
            uVar27 = *puVar19 ^ *puVar2;
            if (uVar27 == 0) {
              lVar15 = 0;
              do {
                puVar39 = (uint64_t *)((int64_t)arg1 + lVar15 + uVar38 + 0xc);
                if (puVar1 <= puVar39) {
                  puVar16 = (uint64_t *)(lVar15 + lVar9);
                  goto LAB_00ee5ca8;
                }
                lVar10 = lVar15 + 8;
                uVar27 = *(uint64_t *)((int64_t)arg1 + lVar15 + uVar38 + 0xc) ^
                         *(uint64_t *)(lVar9 + lVar15);
                lVar15 = lVar10;
              } while (uVar27 == 0);
              uVar30 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                }
              }
              uVar30 = (uVar30 >> 3) + lVar10;
            }
            else {
              uVar30 = 0;
              if (uVar27 != 0) {
                for (; (uVar27 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                }
              }
              uVar30 = uVar30 >> 3;
            }
          }
          else {
LAB_00ee5ca8:
            if ((puVar39 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar16 == (int)*puVar39)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
              puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            }
            if ((puVar39 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar16 == (short)*puVar39)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
              puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
            }
            if (puVar39 < param_2) {
              puVar39 = (uint64_t *)
                        ((int64_t)puVar39 + (uint64_t)((char)*puVar16 == (char)*puVar39));
            }
            uVar30 = (int64_t)puVar39 - (int64_t)puVar19;
          }
          uVar38 = uVar38 + uVar30;
        }
        uVar38 = uVar38 + 4;
        if ((uVar26 < uVar38) &&
           (*param_1 = (uint64_t)
                       (((uVar37 - uVar12) + ((int)pcVar3 - (int)lVar28) + 3) -
                       *(uint *)(local_138[0] + lVar35 * 4)), uVar26 = uVar38,
           (uint64_t *)((int64_t)arg1 + uVar38) == param_2)) break;
      }
      uVar38 = uVar26;
      lVar35 = lVar35 + 1;
      uVar26 = uVar38;
    } while (lVar35 != lVar23);
  }
LAB_00ee5d4e:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar38;
}


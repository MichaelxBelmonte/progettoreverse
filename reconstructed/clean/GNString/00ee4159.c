// Function: FUN_00ee4159
// Address: 00ee4159
// Size: 2398 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ee4159(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  char cVar6;
  uint uVar7;
  int64_t lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  ushort uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint64_t *puVar19;
  byte bVar20;
  uint uVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  uint64_t *arg1;
  uint64_t *puVar24;
  int64_t this_ptr;
  uint64_t *puVar25;
  uint64_t *puVar26;
  byte bVar27;
  int64_t lVar28;
  int64_t lVar29;
  byte *pbVar30;
  int iVar31;
  uint uVar32;
  uint64_t *puVar33;
  uint uVar34;
  uint64_t uVar35;
  int64_t lVar36;
  int64_t lVar37;
  uint64_t uVar38;
  int64_t lVar39;
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  byte local_190;
  uint auStack_138 [64];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar8 = *(int64_t *)(this_ptr + 8);
  uVar7 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar35 = (int64_t)arg1 - lVar8;
  uVar11 = *(uint *)(this_ptr + 0x1c);
  uVar34 = (uint)uVar35;
  uVar10 = uVar34 - uVar7;
  if (uVar34 - uVar11 <= uVar7) {
    uVar10 = uVar11;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar10 = uVar11;
  }
  uVar11 = 4;
  if (*(uint *)(this_ptr + 0x10c) < 4) {
    uVar11 = *(uint *)(this_ptr + 0x10c);
  }
  iVar31 = 1 << ((byte)uVar11 & 0x1f);
  lVar37 = *(int64_t *)(this_ptr + 0x70);
  uVar32 = (int)*arg1 * -0x61c8864f;
  puVar4 = *(void**)(this_ptr + 0xf8);
  uVar7 = uVar32 >> (0x18U - *(char *)((int64_t)puVar4 + 0x34) & 0x1f);
  uVar38 = (uint64_t)(uVar7 >> 4 & 0xfffffff0);
  lVar39 = *(int64_t *)(this_ptr + 0x38);
  uVar11 = *(uint *)(this_ptr + 0x18);
  uVar13 = *(void*)(this_ptr + 0x60);
  lVar29 = puVar4[7];
  lVar18 = puVar4[0xe];
  uVar21 = (uint)uVar13;
  cVar6 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar32 = *(uint *)(this_ptr + 0x2c);
    uVar16 = (uint64_t)uVar32;
    bVar9 = 0x18 - cVar6;
    lVar12 = lVar37;
    lVar28 = lVar39;
    bVar20 = bVar9;
    if (0x180 < uVar34 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar17 = uVar16 + 0x5f;
        while( true ) {
          uVar23 = (uint64_t)((uint)uVar16 & 7);
          uVar32 = *(uint *)(this_ptr + 0x40 + uVar23 * 4);
          *(uint *)(this_ptr + 0x40 + uVar23 * 4) =
               (*(int *)(lVar8 + 8 + uVar16) * -0x61c8864f ^ (uint)uVar13) >> (bVar9 & 0x1f);
          uVar23 = (uint64_t)(uVar32 >> 4 & 0xffffff0);
          bVar20 = *(char *)(lVar39 + uVar23) - 1U & 0xf;
          lVar28 = 0;
          if (bVar20 == 0) {
            lVar28 = 0xf;
          }
          lVar28 = (uint64_t)bVar20 + lVar28;
          *(char *)(lVar39 + uVar23) = (char)lVar28;
          *(char *)(lVar39 + uVar23 + lVar28) = (char)uVar32;
          *(uint *)(lVar37 + (lVar28 + uVar23) * 4) = (uint)uVar16;
          if (uVar17 == uVar16) break;
          uVar13 = *(void*)(this_ptr + 0x60);
          uVar16 = uVar16 + 1;
        }
        lVar28 = *(int64_t *)(this_ptr + 0x38);
        lVar12 = *(int64_t *)(this_ptr + 0x70);
        bVar20 = 0x18 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar16 = (uint64_t)(uVar34 - 0x20);
      uVar32 = 0;
      if (lVar8 + uVar16 <= (int64_t)arg1 + 1U) {
        uVar32 = ((int)((int64_t)arg1 + 1U) - (int)(lVar8 + uVar16)) + 1;
      }
      uVar15 = 8;
      if (uVar32 < 8) {
        uVar15 = uVar32;
      }
      uVar32 = (uVar15 + uVar34) - 0x20;
      if (uVar34 - 0x20 < uVar32) {
        uVar15 = *(uint *)(this_ptr + 0x60);
        uVar17 = uVar16;
        do {
          *(uint *)(this_ptr + 0x40 + (uint64_t)((uint)uVar17 & 7) * 4) =
               (*(int *)(lVar8 + uVar17) * -0x61c8864f ^ uVar15) >> (bVar20 & 0x1f);
          uVar17 = uVar17 + 1;
        } while (uVar32 != uVar17);
      }
    }
    if ((uint)uVar16 < uVar34) {
      lVar5 = *(int64_t *)(this_ptr + 8);
      do {
        uVar17 = (uint64_t)((uint)uVar16 & 7);
        uVar32 = *(uint *)(this_ptr + 0x40 + uVar17 * 4);
        *(uint *)(this_ptr + 0x40 + uVar17 * 4) =
             (*(int *)(lVar5 + 8 + uVar16) * -0x61c8864f ^ *(uint *)(this_ptr + 0x60)) >>
             (bVar20 & 0x1f);
        uVar17 = (uint64_t)(uVar32 >> 4 & 0xffffff0);
        bVar27 = *(char *)(lVar28 + uVar17) - 1U & 0xf;
        lVar36 = 0;
        if (bVar27 == 0) {
          lVar36 = 0xf;
        }
        lVar36 = (uint64_t)bVar27 + lVar36;
        *(char *)(lVar28 + uVar17) = (char)lVar36;
        *(char *)(lVar28 + uVar17 + lVar36) = (char)uVar32;
        *(uint *)(lVar12 + (lVar36 + uVar17) * 4) = (uint)uVar16;
        uVar16 = uVar16 + 1;
      } while ((uVar35 & 0xffffffff) != uVar16);
    }
    *(uint *)(this_ptr + 0x2c) = uVar34;
    uVar32 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar34 & 7) * 4);
    *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar34 & 7) * 4) =
         (*(int *)((uVar35 & 0xffffffff) + 8 + lVar8) * -0x61c8864f ^ uVar21) >> (bVar9 & 0x1f);
  }
  else {
    uVar32 = (uVar32 ^ uVar21) >> (0x18U - cVar6 & 0x1f);
    *(uint *)(this_ptr + 0x2c) = uVar34;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar32;
  uVar35 = (uint64_t)(uVar32 >> 4 & 0xfffffff0);
  bVar20 = *(byte *)(lVar39 + uVar35);
  auVar40 = pshufb(ZEXT416(uVar32),(uint8_t  [16])0x0);
  pcVar2 = (char *)(lVar39 + uVar35);
  auVar41[0] = -(*pcVar2 == auVar40[0]);
  auVar41[1] = -(pcVar2[1] == auVar40[1]);
  auVar41[2] = -(pcVar2[2] == auVar40[2]);
  auVar41[3] = -(pcVar2[3] == auVar40[3]);
  auVar41[4] = -(pcVar2[4] == auVar40[4]);
  auVar41[5] = -(pcVar2[5] == auVar40[5]);
  auVar41[6] = -(pcVar2[6] == auVar40[6]);
  auVar41[7] = -(pcVar2[7] == auVar40[7]);
  auVar41[8] = -(pcVar2[8] == auVar40[8]);
  auVar41[9] = -(pcVar2[9] == auVar40[9]);
  auVar41[10] = -(pcVar2[10] == auVar40[10]);
  auVar41[0xb] = -(pcVar2[0xb] == auVar40[0xb]);
  auVar41[0xc] = -(pcVar2[0xc] == auVar40[0xc]);
  auVar41[0xd] = -(pcVar2[0xd] == auVar40[0xd]);
  auVar41[0xe] = -(pcVar2[0xe] == auVar40[0xe]);
  auVar41[0xf] = -(pcVar2[0xf] == auVar40[0xf]);
  uVar14 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
  uVar14 = uVar14 >> (bVar20 & 0xf) | uVar14 << 0x10 - (bVar20 & 0xf);
  lVar37 = lVar37 + uVar35 * 4;
  lVar28 = 0;
  if (uVar14 != 0) {
    uVar16 = (uint64_t)uVar14;
    lVar12 = 0;
    do {
      lVar5 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
        }
      }
      uVar17 = (uint64_t)((int)lVar5 + (uint)bVar20 & 0xf);
      if (uVar17 != 0) {
        uVar21 = *(uint *)(lVar37 + uVar17 * 4);
        if (uVar21 < uVar10) goto LAB_00ee443d;
        auStack_138[lVar12] = uVar21;
        lVar12 = lVar12 + 1;
        iVar31 = iVar31 + -1;
      }
      uVar16 = uVar16 & uVar16 - 1;
      if ((uVar16 == 0) || (iVar31 == 0)) goto LAB_00ee443d;
    } while( true );
  }
  lVar12 = 0;
LAB_00ee443d:
  pbVar30 = (byte *)(lVar29 + uVar38);
  uVar16 = (uint64_t)(bVar20 - 1 & 0xf);
  if (uVar16 == 0) {
    lVar28 = 0xf;
  }
  lVar28 = lVar28 + uVar16;
  *(void*)(lVar39 + uVar35) = (char)lVar28;
  ((void*)(lVar39 + uVar35))[lVar28] = (char)uVar32;
  iVar3 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar3 + 1;
  *(int *)(lVar37 + lVar28 * 4) = iVar3;
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  if (lVar12 == 0) {
    uVar35 = 3;
  }
  else {
    lVar37 = 0;
    uVar16 = 3;
    do {
      uVar10 = auStack_138[lVar37];
      puVar25 = (uint64_t *)(lVar8 + (uint64_t)uVar10);
      if (*(int *)((uVar16 - 3) + (int64_t)puVar25) == *(int *)((int64_t)arg1 + (uVar16 - 3))
         ) {
        puVar24 = arg1;
        if (arg1 < puVar1) {
          uVar17 = *arg1 ^ *puVar25;
          if (uVar17 == 0) {
            lVar39 = lVar8 + 8 + (uint64_t)uVar10;
            lVar29 = 0;
            do {
              puVar24 = (uint64_t *)((int64_t)arg1 + lVar29 + 8);
              if (puVar1 <= puVar24) {
                puVar25 = (uint64_t *)(lVar39 + lVar29);
                goto LAB_00ee44fb;
              }
              lVar28 = lVar29 + 8;
              uVar35 = *(uint64_t *)((int64_t)arg1 + lVar29 + 8) ^
                       *(uint64_t *)(lVar39 + lVar29);
              lVar29 = lVar28;
            } while (uVar35 == 0);
            uVar17 = 0;
            if (uVar35 != 0) {
              for (; (uVar35 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            uVar35 = (uVar17 >> 3) + lVar28;
          }
          else {
            uVar35 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
              }
            }
            uVar35 = uVar35 >> 3;
          }
        }
        else {
LAB_00ee44fb:
          if ((puVar24 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar25 == (int)*puVar24))
          {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          }
          if ((puVar24 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar25 == (short)*puVar24)) {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
          }
          if (puVar24 < param_2) {
            puVar24 = (uint64_t *)
                      ((int64_t)puVar24 + (uint64_t)((char)*puVar25 == (char)*puVar24));
          }
          uVar35 = (int64_t)puVar24 - (int64_t)arg1;
        }
        if ((uVar16 < uVar35) &&
           (*param_1 = (uint64_t)((uVar34 + 3) - uVar10), uVar16 = uVar35,
           (uint64_t *)((int64_t)arg1 + uVar35) == param_2)) break;
      }
      uVar35 = uVar16;
      lVar37 = lVar37 + 1;
      uVar16 = uVar35;
    } while (lVar37 != lVar12);
  }
  bVar20 = *pbVar30;
  local_190 = (byte)uVar7;
  auVar40 = pshufb(ZEXT116(local_190),(uint8_t  [16])0x0);
  auVar42[0] = -(*pbVar30 == auVar40[0]);
  auVar42[1] = -(pbVar30[1] == auVar40[1]);
  auVar42[2] = -(pbVar30[2] == auVar40[2]);
  auVar42[3] = -(pbVar30[3] == auVar40[3]);
  auVar42[4] = -(pbVar30[4] == auVar40[4]);
  auVar42[5] = -(pbVar30[5] == auVar40[5]);
  auVar42[6] = -(pbVar30[6] == auVar40[6]);
  auVar42[7] = -(pbVar30[7] == auVar40[7]);
  auVar42[8] = -(pbVar30[8] == auVar40[8]);
  auVar42[9] = -(pbVar30[9] == auVar40[9]);
  auVar42[10] = -(pbVar30[10] == auVar40[10]);
  auVar42[0xb] = -(pbVar30[0xb] == auVar40[0xb]);
  auVar42[0xc] = -(pbVar30[0xc] == auVar40[0xc]);
  auVar42[0xd] = -(pbVar30[0xd] == auVar40[0xd]);
  auVar42[0xe] = -(pbVar30[0xe] == auVar40[0xe]);
  auVar42[0xf] = -(pbVar30[0xf] == auVar40[0xf]);
  uVar14 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  bVar9 = bVar20 & 0xf;
  uVar14 = uVar14 >> bVar9 | uVar14 << 0x10 - bVar9;
  if ((uVar14 != 0) && (iVar31 != 0)) {
    puVar24 = (uint64_t *)(lVar8 + (uint64_t)uVar11);
    puVar25 = (uint64_t *)((int64_t)arg1 + 4);
    uVar10 = *(uint *)(puVar4 + 3);
    pcVar2 = (char *)*puVar4;
    lVar37 = puVar4[1];
    uVar16 = (uint64_t)uVar14;
    lVar39 = 0;
    do {
      lVar29 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> lVar29 & 1) == 0; lVar29 = lVar29 + 1) {
        }
      }
      uVar17 = (uint64_t)((int)lVar29 + (uint)bVar20 & 0xf);
      if (uVar17 != 0) {
        uVar7 = *(uint *)(lVar18 + uVar38 * 4 + uVar17 * 4);
        if (uVar7 < uVar10) goto LAB_00ee469f;
        auStack_138[lVar39] = uVar7;
        lVar39 = lVar39 + 1;
        iVar31 = iVar31 + -1;
      }
      uVar16 = uVar16 & uVar16 - 1;
      if ((uVar16 == 0) || (iVar31 == 0)) goto LAB_00ee469f;
    } while( true );
  }
  goto LAB_00ee4904;
LAB_00ee469f:
  if (lVar39 != 0) {
    uVar38 = *arg1;
    lVar8 = lVar8 + (uint64_t)uVar11 + 8;
    lVar29 = 0;
    uVar16 = uVar35;
    do {
      uVar35 = (uint64_t)auStack_138[lVar29];
      if (*(int *)(lVar37 + uVar35) == (int)uVar38) {
        puVar33 = (uint64_t *)(lVar37 + uVar35 + 4);
        puVar22 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar33) + (int64_t)puVar25);
        if (param_2 <= puVar22) {
          puVar22 = param_2;
        }
        puVar19 = puVar25;
        puVar26 = puVar33;
        if (puVar25 < (uint64_t *)((int64_t)puVar22 - 7U)) {
          uVar17 = *puVar25 ^ *puVar33;
          if (uVar17 == 0) {
            lVar18 = lVar37 + 0xc + uVar35;
            lVar28 = 0;
            do {
              puVar19 = (uint64_t *)((int64_t)arg1 + lVar28 + 0xc);
              if ((uint64_t *)((int64_t)puVar22 - 7U) <= puVar19) {
                puVar26 = (uint64_t *)(lVar18 + lVar28);
                goto LAB_00ee47a1;
              }
              lVar12 = lVar28 + 8;
              uVar35 = *(uint64_t *)((int64_t)arg1 + lVar28 + 0xc) ^
                       *(uint64_t *)(lVar18 + lVar28);
              lVar28 = lVar12;
            } while (uVar35 == 0);
            uVar17 = 0;
            if (uVar35 != 0) {
              for (; (uVar35 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            uVar35 = (uVar17 >> 3) + lVar12;
          }
          else {
            uVar35 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
              }
            }
            uVar35 = uVar35 >> 3;
          }
        }
        else {
LAB_00ee47a1:
          if ((puVar19 < (uint64_t *)((int64_t)puVar22 - 3U)) && ((int)*puVar26 == (int)*puVar19))
          {
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          }
          if ((puVar19 < (uint64_t *)((int64_t)puVar22 - 1U)) &&
             ((short)*puVar26 == (short)*puVar19)) {
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
          }
          if (puVar19 < puVar22) {
            puVar19 = (uint64_t *)
                      ((int64_t)puVar19 + (uint64_t)((char)*puVar26 == (char)*puVar19));
          }
          uVar35 = (int64_t)puVar19 - (int64_t)puVar25;
        }
        if ((char *)((int64_t)puVar33 + uVar35) == pcVar2) {
          puVar22 = (uint64_t *)((int64_t)puVar25 + uVar35);
          puVar19 = puVar24;
          puVar33 = puVar22;
          if (puVar22 < puVar1) {
            uVar17 = *puVar22 ^ *puVar24;
            if (uVar17 == 0) {
              lVar18 = 0;
              do {
                puVar33 = (uint64_t *)((int64_t)arg1 + lVar18 + uVar35 + 0xc);
                if (puVar1 <= puVar33) {
                  puVar19 = (uint64_t *)(lVar18 + lVar8);
                  goto LAB_00ee4863;
                }
                lVar28 = lVar18 + 8;
                uVar17 = *(uint64_t *)((int64_t)arg1 + lVar18 + uVar35 + 0xc) ^
                         *(uint64_t *)(lVar8 + lVar18);
                lVar18 = lVar28;
              } while (uVar17 == 0);
              uVar23 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                }
              }
              uVar23 = (uVar23 >> 3) + lVar28;
            }
            else {
              uVar23 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                }
              }
              uVar23 = uVar23 >> 3;
            }
          }
          else {
LAB_00ee4863:
            if ((puVar33 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar19 == (int)*puVar33)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
              puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
            }
            if ((puVar33 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar19 == (short)*puVar33)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
            }
            if (puVar33 < param_2) {
              puVar33 = (uint64_t *)
                        ((int64_t)puVar33 + (uint64_t)((char)*puVar19 == (char)*puVar33));
            }
            uVar23 = (int64_t)puVar33 - (int64_t)puVar22;
          }
          uVar35 = uVar35 + uVar23;
        }
        uVar35 = uVar35 + 4;
        if ((uVar16 < uVar35) &&
           (*param_1 = (uint64_t)
                       (((uVar34 - uVar11) + ((int)pcVar2 - (int)lVar37) + 3) - auStack_138[lVar29])
           , uVar16 = uVar35, (uint64_t *)((int64_t)arg1 + uVar35) == param_2)) break;
      }
      uVar35 = uVar16;
      lVar29 = lVar29 + 1;
      uVar16 = uVar35;
    } while (lVar29 != lVar39);
  }
LAB_00ee4904:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar35;
}


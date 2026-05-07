// Function: FUN_00ee7e50
// Address: 00ee7e50
// Size: 2476 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ee7e50(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  ushort uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  byte bVar17;
  uint uVar18;
  uint64_t uVar19;
  byte bVar20;
  uint64_t *puVar21;
  byte bVar22;
  uint64_t *arg1;
  int64_t lVar23;
  int64_t this_ptr;
  uint64_t *puVar24;
  uint64_t *puVar25;
  int64_t lVar26;
  uint64_t *puVar27;
  char cVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  uint64_t *puVar32;
  int iVar33;
  uint64_t uVar34;
  uint64_t *puVar35;
  uint uVar36;
  uint64_t uVar37;
  int64_t lVar38;
  int64_t lVar39;
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  byte local_188;
  uint auStack_138 [64];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar11 = *(int64_t *)(this_ptr + 8);
  uVar8 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar37 = (int64_t)arg1 - lVar11;
  uVar14 = *(uint *)(this_ptr + 0x1c);
  uVar36 = (uint)uVar37;
  uVar13 = uVar36 - uVar8;
  if (uVar36 - uVar14 <= uVar8) {
    uVar13 = uVar14;
  }
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar13 = uVar14;
  }
  uVar14 = 4;
  if (*(uint *)(this_ptr + 0x10c) < 4) {
    uVar14 = *(uint *)(this_ptr + 0x10c);
  }
  iVar33 = 1 << ((byte)uVar14 & 0x1f);
  puVar5 = *(void**)(this_ptr + 0xf8);
  uVar34 = *arg1 * -0x30e4432340650000 >> (0x38U - *(char *)((int64_t)puVar5 + 0x34) & 0x3f);
  uVar12 = (uint64_t)((uint)(uVar34 >> 4) & 0xffffff0);
  lVar38 = *(int64_t *)(this_ptr + 0x70);
  lVar39 = *(int64_t *)(this_ptr + 0x38);
  uVar14 = *(uint *)(this_ptr + 0x18);
  uVar9 = *(uint64_t *)(this_ptr + 0x60);
  lVar31 = puVar5[7];
  lVar26 = puVar5[0xe];
  cVar28 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar8 = *(uint *)(this_ptr + 0x2c);
    uVar10 = (uint64_t)uVar8;
    bVar22 = 0x38 - cVar28;
    lVar29 = lVar38;
    lVar30 = lVar39;
    bVar17 = bVar22;
    if (0x180 < uVar36 - uVar8) {
      if (uVar8 < 0xffffffa0) {
        uVar19 = uVar10 + 0x5f;
        uVar16 = uVar9;
        while( true ) {
          uVar15 = (uint64_t)((uint)uVar10 & 7);
          uVar8 = *(uint *)(this_ptr + 0x40 + uVar15 * 4);
          *(int *)(this_ptr + 0x40 + uVar15 * 4) =
               (int)((*(int64_t *)(lVar11 + 8 + uVar10) * -0x30e4432340650000 ^ uVar16) >>
                    (bVar22 & 0x3f));
          uVar16 = (uint64_t)(uVar8 >> 4) & 0xffffff0;
          bVar17 = *(char *)(lVar39 + uVar16) - 1U & 0xf;
          lVar30 = 0;
          if (bVar17 == 0) {
            lVar30 = 0xf;
          }
          lVar30 = (uint64_t)bVar17 + lVar30;
          *(char *)(lVar39 + uVar16) = (char)lVar30;
          *(char *)(lVar39 + uVar16 + lVar30) = (char)uVar8;
          *(uint *)(lVar38 + (lVar30 + uVar16) * 4) = (uint)uVar10;
          if (uVar19 == uVar10) break;
          uVar16 = *(uint64_t *)(this_ptr + 0x60);
          uVar10 = uVar10 + 1;
        }
        lVar30 = *(int64_t *)(this_ptr + 0x38);
        lVar29 = *(int64_t *)(this_ptr + 0x70);
        bVar17 = 0x38 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar10 = (uint64_t)(uVar36 - 0x20);
      uVar8 = 0;
      if (lVar11 + uVar10 <= (int64_t)arg1 + 1U) {
        uVar8 = ((int)((int64_t)arg1 + 1U) - (int)(lVar11 + uVar10)) + 1;
      }
      uVar18 = 8;
      if (uVar8 < 8) {
        uVar18 = uVar8;
      }
      uVar8 = (uVar18 + uVar36) - 0x20;
      if (uVar36 - 0x20 < uVar8) {
        uVar19 = *(uint64_t *)(this_ptr + 0x60);
        uVar16 = uVar10;
        do {
          *(int *)(this_ptr + 0x40 + (uint64_t)((uint)uVar16 & 7) * 4) =
               (int)((*(int64_t *)(lVar11 + uVar16) * -0x30e4432340650000 ^ uVar19) >>
                    (bVar17 & 0x3f));
          uVar16 = uVar16 + 1;
        } while (uVar8 != uVar16);
      }
    }
    if ((uint)uVar10 < uVar36) {
      lVar6 = *(int64_t *)(this_ptr + 8);
      do {
        uVar19 = (uint64_t)((uint)uVar10 & 7);
        uVar8 = *(uint *)(this_ptr + 0x40 + uVar19 * 4);
        *(int *)(this_ptr + 0x40 + uVar19 * 4) =
             (int)((*(int64_t *)(lVar6 + 8 + uVar10) * -0x30e4432340650000 ^
                   *(uint64_t *)(this_ptr + 0x60)) >> (bVar17 & 0x3f));
        uVar19 = (uint64_t)(uVar8 >> 4) & 0xffffff0;
        bVar20 = *(char *)(lVar30 + uVar19) - 1U & 0xf;
        lVar23 = 0;
        if (bVar20 == 0) {
          lVar23 = 0xf;
        }
        lVar23 = (uint64_t)bVar20 + lVar23;
        *(char *)(lVar30 + uVar19) = (char)lVar23;
        *(char *)(lVar30 + uVar19 + lVar23) = (char)uVar8;
        *(uint *)(lVar29 + (lVar23 + uVar19) * 4) = (uint)uVar10;
        uVar10 = uVar10 + 1;
      } while ((uVar37 & 0xffffffff) != uVar10);
    }
    *(uint *)(this_ptr + 0x2c) = uVar36;
    uVar8 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar36 & 7) * 4);
    *(int *)(this_ptr + 0x40 + (uint64_t)(uVar36 & 7) * 4) =
         (int)((*(int64_t *)((uVar37 & 0xffffffff) + 8 + lVar11) * -0x30e4432340650000 ^ uVar9) >>
              (bVar22 & 0x3f));
  }
  else {
    uVar8 = (uint)((*arg1 * -0x30e4432340650000 ^ uVar9) >> (0x38U - cVar28 & 0x3f));
    *(uint *)(this_ptr + 0x2c) = uVar36;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar8;
  uVar37 = (uint64_t)(uVar8 >> 4 & 0xfffffff0);
  bVar17 = *(byte *)(lVar39 + uVar37);
  auVar40 = pshufb(ZEXT416(uVar8),(uint8_t  [16])0x0);
  pcVar2 = (char *)(lVar39 + uVar37);
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
  uVar7 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
  uVar7 = uVar7 >> (bVar17 & 0xf) | uVar7 << 0x10 - (bVar17 & 0xf);
  lVar38 = lVar38 + uVar37 * 4;
  lVar30 = 0;
  if (uVar7 != 0) {
    uVar9 = (uint64_t)uVar7;
    lVar29 = 0;
    do {
      lVar6 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
        }
      }
      uVar10 = (uint64_t)((int)lVar6 + (uint)bVar17 & 0xf);
      if (uVar10 != 0) {
        uVar18 = *(uint *)(lVar38 + uVar10 * 4);
        if (uVar18 < uVar13) goto LAB_00ee8180;
        auStack_138[lVar29] = uVar18;
        lVar29 = lVar29 + 1;
        iVar33 = iVar33 + -1;
      }
      uVar9 = uVar9 & uVar9 - 1;
      if ((uVar9 == 0) || (iVar33 == 0)) goto LAB_00ee8180;
    } while( true );
  }
  lVar29 = 0;
LAB_00ee8180:
  pbVar3 = (byte *)(lVar31 + uVar12);
  uVar9 = (uint64_t)(bVar17 - 1 & 0xf);
  if (uVar9 == 0) {
    lVar30 = 0xf;
  }
  lVar30 = lVar30 + uVar9;
  *(void*)(lVar39 + uVar37) = (char)lVar30;
  ((void*)(lVar39 + uVar37))[lVar30] = (char)uVar8;
  iVar4 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar4 + 1;
  *(int *)(lVar38 + lVar30 * 4) = iVar4;
  puVar1 = (uint64_t *)((int64_t)param_2 - 7);
  if (lVar29 == 0) {
    uVar37 = 3;
  }
  else {
    lVar38 = 0;
    uVar9 = 3;
    do {
      uVar13 = auStack_138[lVar38];
      puVar24 = (uint64_t *)(lVar11 + (uint64_t)uVar13);
      if (*(int *)((uVar9 - 3) + (int64_t)puVar24) == *(int *)((int64_t)arg1 + (uVar9 - 3)))
      {
        puVar35 = arg1;
        if (arg1 < puVar1) {
          uVar10 = *arg1 ^ *puVar24;
          if (uVar10 == 0) {
            lVar39 = lVar11 + 8 + (uint64_t)uVar13;
            lVar31 = 0;
            do {
              puVar35 = (uint64_t *)((int64_t)arg1 + lVar31 + 8);
              if (puVar1 <= puVar35) {
                puVar24 = (uint64_t *)(lVar39 + lVar31);
                goto LAB_00ee822e;
              }
              lVar30 = lVar31 + 8;
              uVar37 = *(uint64_t *)((int64_t)arg1 + lVar31 + 8) ^
                       *(uint64_t *)(lVar39 + lVar31);
              lVar31 = lVar30;
            } while (uVar37 == 0);
            uVar10 = 0;
            if (uVar37 != 0) {
              for (; (uVar37 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar37 = (uVar10 >> 3) + lVar30;
          }
          else {
            uVar37 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
              }
            }
            uVar37 = uVar37 >> 3;
          }
        }
        else {
LAB_00ee822e:
          if ((puVar35 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar24 == (int)*puVar35))
          {
            puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
          }
          if ((puVar35 < (uint64_t *)((int64_t)param_2 + -1)) &&
             ((short)*puVar24 == (short)*puVar35)) {
            puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          }
          if (puVar35 < param_2) {
            puVar35 = (uint64_t *)
                      ((int64_t)puVar35 + (uint64_t)((char)*puVar24 == (char)*puVar35));
          }
          uVar37 = (int64_t)puVar35 - (int64_t)arg1;
        }
        if ((uVar9 < uVar37) &&
           (*param_1 = (uint64_t)((uVar36 + 3) - uVar13), uVar9 = uVar37,
           (uint64_t *)((int64_t)arg1 + uVar37) == param_2)) break;
      }
      uVar37 = uVar9;
      lVar38 = lVar38 + 1;
      uVar9 = uVar37;
    } while (lVar38 != lVar29);
  }
  bVar17 = *pbVar3;
  local_188 = (byte)uVar34;
  auVar40 = pshufb(ZEXT116(local_188),(uint8_t  [16])0x0);
  auVar42[0] = -(*pbVar3 == auVar40[0]);
  auVar42[1] = -(pbVar3[1] == auVar40[1]);
  auVar42[2] = -(pbVar3[2] == auVar40[2]);
  auVar42[3] = -(pbVar3[3] == auVar40[3]);
  auVar42[4] = -(pbVar3[4] == auVar40[4]);
  auVar42[5] = -(pbVar3[5] == auVar40[5]);
  auVar42[6] = -(pbVar3[6] == auVar40[6]);
  auVar42[7] = -(pbVar3[7] == auVar40[7]);
  auVar42[8] = -(pbVar3[8] == auVar40[8]);
  auVar42[9] = -(pbVar3[9] == auVar40[9]);
  auVar42[10] = -(pbVar3[10] == auVar40[10]);
  auVar42[0xb] = -(pbVar3[0xb] == auVar40[0xb]);
  auVar42[0xc] = -(pbVar3[0xc] == auVar40[0xc]);
  auVar42[0xd] = -(pbVar3[0xd] == auVar40[0xd]);
  auVar42[0xe] = -(pbVar3[0xe] == auVar40[0xe]);
  auVar42[0xf] = -(pbVar3[0xf] == auVar40[0xf]);
  uVar7 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
  bVar22 = bVar17 & 0xf;
  uVar7 = uVar7 >> bVar22 | uVar7 << 0x10 - bVar22;
  uVar9 = (uint64_t)uVar7;
  if ((uVar7 != 0) && (iVar33 != 0)) {
    puVar35 = (uint64_t *)(lVar11 + (uint64_t)uVar14);
    puVar24 = (uint64_t *)((int64_t)arg1 + 4);
    uVar13 = *(uint *)(puVar5 + 3);
    pcVar2 = (char *)*puVar5;
    lVar38 = puVar5[1];
    lVar39 = 0;
    do {
      lVar31 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
        }
      }
      uVar34 = (uint64_t)((int)lVar31 + (uint)bVar17 & 0xf);
      if (uVar34 != 0) {
        uVar8 = *(uint *)(lVar26 + uVar12 * 4 + uVar34 * 4);
        if (uVar8 < uVar13) goto LAB_00ee83cd;
        auStack_138[lVar39] = uVar8;
        lVar39 = lVar39 + 1;
        iVar33 = iVar33 + -1;
      }
      uVar9 = uVar9 & uVar9 - 1;
      if ((uVar9 == 0) || (iVar33 == 0)) goto LAB_00ee83cd;
    } while( true );
  }
  goto LAB_00ee861b;
LAB_00ee83cd:
  if (lVar39 != 0) {
    uVar9 = *arg1;
    lVar11 = lVar11 + (uint64_t)uVar14 + 8;
    lVar31 = 0;
    uVar34 = uVar37;
    do {
      uVar37 = (uint64_t)auStack_138[lVar31];
      if (*(int *)(lVar38 + uVar37) == (int)uVar9) {
        puVar32 = (uint64_t *)(lVar38 + uVar37 + 4);
        puVar21 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar32) + (int64_t)puVar24);
        if (param_2 <= puVar21) {
          puVar21 = param_2;
        }
        puVar27 = puVar24;
        puVar25 = puVar32;
        if (puVar24 < (uint64_t *)((int64_t)puVar21 - 7U)) {
          uVar12 = *puVar24 ^ *puVar32;
          if (uVar12 == 0) {
            lVar26 = lVar38 + 0xc + uVar37;
            lVar30 = 0;
            do {
              puVar27 = (uint64_t *)((int64_t)arg1 + lVar30 + 0xc);
              if ((uint64_t *)((int64_t)puVar21 - 7U) <= puVar27) {
                puVar25 = (uint64_t *)(lVar26 + lVar30);
                goto LAB_00ee84d0;
              }
              lVar29 = lVar30 + 8;
              uVar37 = *(uint64_t *)((int64_t)arg1 + lVar30 + 0xc) ^
                       *(uint64_t *)(lVar26 + lVar30);
              lVar30 = lVar29;
            } while (uVar37 == 0);
            uVar12 = 0;
            if (uVar37 != 0) {
              for (; (uVar37 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
              }
            }
            uVar37 = (uVar12 >> 3) + lVar29;
          }
          else {
            uVar37 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
              }
            }
            uVar37 = uVar37 >> 3;
          }
        }
        else {
LAB_00ee84d0:
          if ((puVar27 < (uint64_t *)((int64_t)puVar21 - 3U)) && ((int)*puVar25 == (int)*puVar27))
          {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          }
          if ((puVar27 < (uint64_t *)((int64_t)puVar21 - 1U)) &&
             ((short)*puVar25 == (short)*puVar27)) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
          }
          if (puVar27 < puVar21) {
            puVar27 = (uint64_t *)
                      ((int64_t)puVar27 + (uint64_t)((char)*puVar25 == (char)*puVar27));
          }
          uVar37 = (int64_t)puVar27 - (int64_t)puVar24;
        }
        if ((char *)((int64_t)puVar32 + uVar37) == pcVar2) {
          puVar21 = (uint64_t *)((int64_t)puVar24 + uVar37);
          puVar32 = puVar21;
          puVar27 = puVar35;
          if (puVar21 < puVar1) {
            uVar12 = *puVar21 ^ *puVar35;
            if (uVar12 == 0) {
              lVar26 = 0;
              do {
                puVar32 = (uint64_t *)((int64_t)arg1 + lVar26 + uVar37 + 0xc);
                if (puVar1 <= puVar32) {
                  puVar27 = (uint64_t *)(lVar26 + lVar11);
                  goto LAB_00ee857c;
                }
                lVar30 = lVar26 + 8;
                uVar12 = *(uint64_t *)((int64_t)arg1 + lVar26 + uVar37 + 0xc) ^
                         *(uint64_t *)(lVar11 + lVar26);
                lVar26 = lVar30;
              } while (uVar12 == 0);
              uVar10 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar10 = (uVar10 >> 3) + lVar30;
            }
            else {
              uVar10 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar10 = uVar10 >> 3;
            }
          }
          else {
LAB_00ee857c:
            if ((puVar32 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar27 == (int)*puVar32)) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
            }
            if ((puVar32 < (uint64_t *)((int64_t)param_2 + -1)) &&
               ((short)*puVar27 == (short)*puVar32)) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            }
            if (puVar32 < param_2) {
              puVar32 = (uint64_t *)
                        ((int64_t)puVar32 + (uint64_t)((char)*puVar27 == (char)*puVar32));
            }
            uVar10 = (int64_t)puVar32 - (int64_t)puVar21;
          }
          uVar37 = uVar37 + uVar10;
        }
        uVar37 = uVar37 + 4;
        if ((uVar34 < uVar37) &&
           (*param_1 = (uint64_t)
                       (((uVar36 - uVar14) + ((int)pcVar2 - (int)lVar38) + 3) - auStack_138[lVar31])
           , uVar34 = uVar37, (uint64_t *)((int64_t)arg1 + uVar37) == param_2)) break;
      }
      uVar37 = uVar34;
      lVar31 = lVar31 + 1;
      uVar34 = uVar37;
    } while (lVar31 != lVar39);
  }
LAB_00ee861b:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar37;
}


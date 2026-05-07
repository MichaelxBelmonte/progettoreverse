// Function: FUN_00ed5fbe
// Address: 00ed5fbe
// Size: 1551 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed5fbe(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char *pcVar2;
  int64_t lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  byte bVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int64_t lVar16;
  byte bVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t *arg1;
  int64_t this_ptr;
  void*puVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint uVar23;
  uint64_t uVar24;
  uint64_t *puVar25;
  int64_t lVar26;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t local_138 [16] [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar3 = *(int64_t *)(this_ptr + 8);
  uVar6 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar24 = (int64_t)arg1 - lVar3;
  uVar10 = *(uint *)(this_ptr + 0x1c);
  uVar23 = (uint)uVar24;
  uVar4 = uVar23 - uVar6;
  if (uVar23 - uVar10 <= uVar6) {
    uVar4 = uVar10;
  }
  lVar19 = *(int64_t *)(this_ptr + 0x70);
  lVar16 = *(int64_t *)(this_ptr + 0x38);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar4 = uVar10;
  }
  uVar10 = 6;
  if (*(uint *)(this_ptr + 0x10c) < 6) {
    uVar10 = *(uint *)(this_ptr + 0x10c);
  }
  iVar14 = 1 << ((byte)uVar10 & 0x1f);
  uVar11 = *(void*)(this_ptr + 0x60);
  uVar10 = (uint)uVar11;
  cVar5 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar6 = *(uint *)(this_ptr + 0x2c);
    uVar18 = (uint64_t)uVar6;
    bVar9 = 0x18 - cVar5;
    lVar26 = lVar16;
    lVar21 = lVar19;
    bVar13 = bVar9;
    if (0x180 < uVar23 - uVar6) {
      if (uVar6 < 0xffffffa0) {
        uVar7 = uVar18 + 0x5f;
        while( true ) {
          uVar12 = (uint64_t)((uint)uVar18 & 7);
          uVar6 = *(uint *)(this_ptr + 0x40 + uVar12 * 4);
          *(uint *)(this_ptr + 0x40 + uVar12 * 4) =
               (*(int *)(lVar3 + 8 + uVar18) * -0x61c8864f ^ (uint)uVar11) >> (bVar9 & 0x1f);
          uVar12 = (uint64_t)(uVar6 >> 2 & 0x3fffffc0);
          bVar13 = *(char *)(lVar16 + uVar12) - 1U & 0x3f;
          lVar26 = 0;
          if (bVar13 == 0) {
            lVar26 = 0x3f;
          }
          lVar26 = (uint64_t)bVar13 + lVar26;
          *(char *)(lVar16 + uVar12) = (char)lVar26;
          *(char *)(lVar16 + uVar12 + lVar26) = (char)uVar6;
          *(uint *)(lVar19 + (lVar26 + uVar12) * 4) = (uint)uVar18;
          if (uVar7 == uVar18) break;
          uVar11 = *(void*)(this_ptr + 0x60);
          uVar18 = uVar18 + 1;
        }
        lVar26 = *(int64_t *)(this_ptr + 0x38);
        lVar21 = *(int64_t *)(this_ptr + 0x70);
        bVar13 = 0x18 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar18 = (uint64_t)(uVar23 - 0x20);
      uVar6 = 0;
      if (lVar3 + uVar18 <= (int64_t)arg1 + 1U) {
        uVar6 = ((int)((int64_t)arg1 + 1U) - (int)(lVar3 + uVar18)) + 1;
      }
      uVar15 = 8;
      if (uVar6 < 8) {
        uVar15 = uVar6;
      }
      uVar6 = (uVar15 + uVar23) - 0x20;
      if (uVar23 - 0x20 < uVar6) {
        uVar15 = *(uint *)(this_ptr + 0x60);
        uVar7 = uVar18;
        do {
          *(uint *)(this_ptr + 0x40 + (uint64_t)((uint)uVar7 & 7) * 4) =
               (*(int *)(lVar3 + uVar7) * -0x61c8864f ^ uVar15) >> (bVar13 & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
    }
    if ((uint)uVar18 < uVar23) {
      lVar1 = *(int64_t *)(this_ptr + 8);
      do {
        uVar7 = (uint64_t)((uint)uVar18 & 7);
        uVar6 = *(uint *)(this_ptr + 0x40 + uVar7 * 4);
        *(uint *)(this_ptr + 0x40 + uVar7 * 4) =
             (*(int *)(lVar1 + 8 + uVar18) * -0x61c8864f ^ *(uint *)(this_ptr + 0x60)) >>
             (bVar13 & 0x1f);
        uVar7 = (uint64_t)(uVar6 >> 2 & 0x3fffffc0);
        bVar17 = *(char *)(lVar26 + uVar7) - 1U & 0x3f;
        lVar22 = 0;
        if (bVar17 == 0) {
          lVar22 = 0x3f;
        }
        lVar22 = (uint64_t)bVar17 + lVar22;
        *(char *)(lVar26 + uVar7) = (char)lVar22;
        *(char *)(lVar26 + uVar7 + lVar22) = (char)uVar6;
        *(uint *)(lVar21 + (lVar22 + uVar7) * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while ((uVar24 & 0xffffffff) != uVar18);
    }
    *(uint *)(this_ptr + 0x2c) = uVar23;
    uVar6 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar23 & 7) * 4);
    *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar23 & 7) * 4) =
         (*(int *)((uVar24 & 0xffffffff) + 8 + lVar3) * -0x61c8864f ^ uVar10) >> (bVar9 & 0x1f);
  }
  else {
    uVar6 = ((int)*arg1 * -0x61c8864f ^ uVar10) >> (0x18U - cVar5 & 0x1f);
    *(uint *)(this_ptr + 0x2c) = uVar23;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar6;
  uVar24 = (uint64_t)(uVar6 >> 2 & 0x3fffffc0);
  bVar13 = *(byte *)(lVar16 + uVar24);
  puVar20 = (void*)(lVar16 + uVar24);
  auVar27 = pshufb(ZEXT416(uVar6),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar16 = 0;
  do {
    pcVar2 = puVar20 + lVar16 * 4;
    auVar28[0] = -(*pcVar2 == auVar27[0]);
    auVar28[1] = -(pcVar2[1] == auVar27[1]);
    auVar28[2] = -(pcVar2[2] == auVar27[2]);
    auVar28[3] = -(pcVar2[3] == auVar27[3]);
    auVar28[4] = -(pcVar2[4] == auVar27[4]);
    auVar28[5] = -(pcVar2[5] == auVar27[5]);
    auVar28[6] = -(pcVar2[6] == auVar27[6]);
    auVar28[7] = -(pcVar2[7] == auVar27[7]);
    auVar28[8] = -(pcVar2[8] == auVar27[8]);
    auVar28[9] = -(pcVar2[9] == auVar27[9]);
    auVar28[10] = -(pcVar2[10] == auVar27[10]);
    auVar28[0xb] = -(pcVar2[0xb] == auVar27[0xb]);
    auVar28[0xc] = -(pcVar2[0xc] == auVar27[0xc]);
    auVar28[0xd] = -(pcVar2[0xd] == auVar27[0xd]);
    auVar28[0xe] = -(pcVar2[0xe] == auVar27[0xe]);
    auVar28[0xf] = -(pcVar2[0xf] == auVar27[0xf]);
    *(uint *)(local_138[0] + lVar16) =
         (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar28[0xf] >> 7) << 0xf);
    lVar16 = lVar16 + 4;
  } while (lVar16 != 0x10);
  uVar18 = (int64_t)(int)local_138[0]._4_4_ << 0x10 | (int64_t)(int)local_138[0]._0_4_ |
           (uint64_t)(uint)local_138[0]._8_4_ << 0x20 |
           (uint64_t)(uint)local_138[0]._12_4_ << 0x30;
  uVar18 = uVar18 >> (bVar13 & 0x3f) | uVar18 << 0x40 - (bVar13 & 0x3f);
  lVar19 = lVar19 + uVar24 * 4;
  lVar26 = 0;
  lVar16 = 0;
  if (uVar18 != 0) {
    do {
      lVar21 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> lVar21 & 1) == 0; lVar21 = lVar21 + 1) {
        }
      }
      uVar24 = (uint64_t)((int)lVar21 + (uint)bVar13 & 0x3f);
      if (uVar24 != 0) {
        uVar10 = *(uint *)(lVar19 + uVar24 * 4);
        if (uVar10 < uVar4) break;
        *(uint *)(local_138[0] + lVar16 * 4) = uVar10;
        lVar16 = lVar16 + 1;
        iVar14 = iVar14 + -1;
      }
      uVar18 = uVar18 & uVar18 - 1;
      if ((uVar18 == 0) || (iVar14 == 0)) break;
    } while( true );
  }
  uVar24 = (uint64_t)(bVar13 - 1 & 0x3f);
  if (uVar24 == 0) {
    lVar26 = 0x3f;
  }
  lVar26 = lVar26 + uVar24;
  *puVar20 = (char)lVar26;
  puVar20[lVar26] = (char)uVar6;
  iVar14 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar14 + 1;
  *(int *)(lVar19 + lVar26 * 4) = iVar14;
  if (lVar16 == 0) {
    uVar24 = 3;
  }
  else {
    lVar19 = 0;
    uVar18 = 3;
    do {
      uVar10 = *(uint *)(local_138[0] + lVar19 * 4);
      puVar25 = (uint64_t *)(lVar3 + (uint64_t)uVar10);
      if (*(int *)((uVar18 - 3) + (int64_t)puVar25) == *(int *)((int64_t)arg1 + (uVar18 - 3))
         ) {
        puVar8 = arg1;
        if (arg1 < (uint64_t *)((int64_t)param_2 - 7U)) {
          uVar7 = *arg1 ^ *puVar25;
          if (uVar7 == 0) {
            lVar26 = lVar3 + 8 + (uint64_t)uVar10;
            lVar21 = 0;
            do {
              puVar8 = (uint64_t *)((int64_t)arg1 + lVar21 + 8);
              if ((uint64_t *)((int64_t)param_2 - 7U) <= puVar8) {
                puVar25 = (uint64_t *)(lVar26 + lVar21);
                goto LAB_00ed633e;
              }
              lVar1 = lVar21 + 8;
              uVar24 = *(uint64_t *)((int64_t)arg1 + lVar21 + 8) ^
                       *(uint64_t *)(lVar26 + lVar21);
              lVar21 = lVar1;
            } while (uVar24 == 0);
            uVar7 = 0;
            if (uVar24 != 0) {
              for (; (uVar24 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
            uVar24 = (uVar7 >> 3) + lVar1;
          }
          else {
            uVar24 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
              }
            }
            uVar24 = uVar24 >> 3;
          }
        }
        else {
LAB_00ed633e:
          if ((puVar8 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar25 == (int)*puVar8)) {
            puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          }
          if ((puVar8 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar25 == (short)*puVar8)) {
            puVar8 = (uint64_t *)((int64_t)puVar8 + 2);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
          }
          if (puVar8 < param_2) {
            puVar8 = (uint64_t *)((int64_t)puVar8 + (uint64_t)((char)*puVar25 == (char)*puVar8));
          }
          uVar24 = (int64_t)puVar8 - (int64_t)arg1;
        }
        if ((uVar18 < uVar24) &&
           (*param_1 = (uint64_t)((uVar23 + 3) - uVar10), uVar18 = uVar24,
           (uint64_t *)((int64_t)arg1 + uVar24) == param_2)) break;
      }
      uVar24 = uVar18;
      lVar19 = lVar19 + 1;
      uVar18 = uVar24;
    } while (lVar19 != lVar16);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar24;
}


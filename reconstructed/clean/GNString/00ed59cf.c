// Function: FUN_00ed59cf
// Address: 00ed59cf
// Size: 1519 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed59cf(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char *pcVar2;
  int64_t lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  byte bVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int64_t lVar16;
  byte bVar17;
  int64_t lVar18;
  uint64_t *arg1;
  int64_t this_ptr;
  int iVar19;
  void*puVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lVar23;
  uint uVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t local_138 [16] [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar3 = *(int64_t *)(this_ptr + 8);
  uVar6 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar25 = (int64_t)arg1 - lVar3;
  uVar14 = *(uint *)(this_ptr + 0x1c);
  uVar24 = (uint)uVar25;
  uVar4 = uVar24 - uVar6;
  if (uVar24 - uVar14 <= uVar6) {
    uVar4 = uVar14;
  }
  lVar18 = *(int64_t *)(this_ptr + 0x70);
  lVar16 = *(int64_t *)(this_ptr + 0x38);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar4 = uVar14;
  }
  uVar14 = 5;
  if (*(uint *)(this_ptr + 0x10c) < 5) {
    uVar14 = *(uint *)(this_ptr + 0x10c);
  }
  iVar19 = 1 << ((byte)uVar14 & 0x1f);
  uVar11 = *(void*)(this_ptr + 0x60);
  uVar14 = (uint)uVar11;
  cVar5 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar6 = *(uint *)(this_ptr + 0x2c);
    uVar7 = (uint64_t)uVar6;
    bVar10 = 0x18 - cVar5;
    lVar22 = lVar16;
    lVar21 = lVar18;
    bVar13 = bVar10;
    if (0x180 < uVar24 - uVar6) {
      if (uVar6 < 0xffffffa0) {
        uVar8 = uVar7 + 0x5f;
        while( true ) {
          uVar12 = (uint64_t)((uint)uVar7 & 7);
          uVar6 = *(uint *)(this_ptr + 0x40 + uVar12 * 4);
          *(uint *)(this_ptr + 0x40 + uVar12 * 4) =
               (*(int *)(lVar3 + 8 + uVar7) * -0x61c8864f ^ (uint)uVar11) >> (bVar10 & 0x1f);
          uVar12 = (uint64_t)(uVar6 >> 3 & 0x1fffffe0);
          bVar13 = *(char *)(lVar16 + uVar12) - 1U & 0x1f;
          lVar22 = 0;
          if (bVar13 == 0) {
            lVar22 = 0x1f;
          }
          lVar22 = (uint64_t)bVar13 + lVar22;
          *(char *)(lVar16 + uVar12) = (char)lVar22;
          *(char *)(lVar16 + uVar12 + lVar22) = (char)uVar6;
          *(uint *)(lVar18 + (lVar22 + uVar12) * 4) = (uint)uVar7;
          if (uVar8 == uVar7) break;
          uVar11 = *(void*)(this_ptr + 0x60);
          uVar7 = uVar7 + 1;
        }
        lVar22 = *(int64_t *)(this_ptr + 0x38);
        lVar21 = *(int64_t *)(this_ptr + 0x70);
        bVar13 = 0x18 - (char)*(void*)(this_ptr + 0x34);
      }
      uVar7 = (uint64_t)(uVar24 - 0x20);
      uVar6 = 0;
      if (lVar3 + uVar7 <= (int64_t)arg1 + 1U) {
        uVar6 = ((int)((int64_t)arg1 + 1U) - (int)(lVar3 + uVar7)) + 1;
      }
      uVar15 = 8;
      if (uVar6 < 8) {
        uVar15 = uVar6;
      }
      uVar6 = (uVar15 + uVar24) - 0x20;
      if (uVar24 - 0x20 < uVar6) {
        uVar15 = *(uint *)(this_ptr + 0x60);
        uVar8 = uVar7;
        do {
          *(uint *)(this_ptr + 0x40 + (uint64_t)((uint)uVar8 & 7) * 4) =
               (*(int *)(lVar3 + uVar8) * -0x61c8864f ^ uVar15) >> (bVar13 & 0x1f);
          uVar8 = uVar8 + 1;
        } while (uVar6 != uVar8);
      }
    }
    if ((uint)uVar7 < uVar24) {
      lVar1 = *(int64_t *)(this_ptr + 8);
      do {
        uVar8 = (uint64_t)((uint)uVar7 & 7);
        uVar6 = *(uint *)(this_ptr + 0x40 + uVar8 * 4);
        *(uint *)(this_ptr + 0x40 + uVar8 * 4) =
             (*(int *)(lVar1 + 8 + uVar7) * -0x61c8864f ^ *(uint *)(this_ptr + 0x60)) >>
             (bVar13 & 0x1f);
        uVar8 = (uint64_t)(uVar6 >> 3 & 0x1fffffe0);
        bVar17 = *(char *)(lVar22 + uVar8) - 1U & 0x1f;
        lVar23 = 0;
        if (bVar17 == 0) {
          lVar23 = 0x1f;
        }
        lVar23 = (uint64_t)bVar17 + lVar23;
        *(char *)(lVar22 + uVar8) = (char)lVar23;
        *(char *)(lVar22 + uVar8 + lVar23) = (char)uVar6;
        *(uint *)(lVar21 + (lVar23 + uVar8) * 4) = (uint)uVar7;
        uVar7 = uVar7 + 1;
      } while ((uVar25 & 0xffffffff) != uVar7);
    }
    *(uint *)(this_ptr + 0x2c) = uVar24;
    uVar6 = *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar24 & 7) * 4);
    *(uint *)(this_ptr + 0x40 + (uint64_t)(uVar24 & 7) * 4) =
         (*(int *)((uVar25 & 0xffffffff) + 8 + lVar3) * -0x61c8864f ^ uVar14) >> (bVar10 & 0x1f);
  }
  else {
    uVar6 = ((int)*arg1 * -0x61c8864f ^ uVar14) >> (0x18U - cVar5 & 0x1f);
    *(uint *)(this_ptr + 0x2c) = uVar24;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + uVar6;
  uVar25 = (uint64_t)(uVar6 >> 3 & 0x1fffffe0);
  bVar13 = *(byte *)(lVar16 + uVar25);
  puVar20 = (void*)(lVar16 + uVar25);
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
  } while (lVar16 != 8);
  uVar14 = local_138[0]._4_4_ << 0x10 | local_138[0]._0_4_;
  uVar14 = uVar14 >> (bVar13 & 0x1f) | uVar14 << 0x20 - (bVar13 & 0x1f);
  uVar7 = (uint64_t)uVar14;
  lVar18 = lVar18 + uVar25 * 4;
  lVar16 = 0;
  if (uVar14 != 0) {
    lVar22 = 0;
    do {
      lVar21 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> lVar21 & 1) == 0; lVar21 = lVar21 + 1) {
        }
      }
      uVar25 = (uint64_t)((int)lVar21 + (uint)bVar13 & 0x1f);
      if (uVar25 != 0) {
        uVar14 = *(uint *)(lVar18 + uVar25 * 4);
        if (uVar14 < uVar4) goto LAB_00ed5c8f;
        *(uint *)(local_138[0] + lVar22 * 4) = uVar14;
        lVar22 = lVar22 + 1;
        iVar19 = iVar19 + -1;
      }
      uVar7 = uVar7 & uVar7 - 1;
      if ((uVar7 == 0) || (iVar19 == 0)) goto LAB_00ed5c8f;
    } while( true );
  }
  lVar22 = 0;
LAB_00ed5c8f:
  uVar25 = (uint64_t)(bVar13 - 1 & 0x1f);
  if (uVar25 == 0) {
    lVar16 = 0x1f;
  }
  lVar16 = lVar16 + uVar25;
  *puVar20 = (char)lVar16;
  puVar20[lVar16] = (char)uVar6;
  iVar19 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar19 + 1;
  *(int *)(lVar18 + lVar16 * 4) = iVar19;
  if (lVar22 == 0) {
    uVar25 = 3;
  }
  else {
    lVar18 = 0;
    uVar7 = 3;
    do {
      uVar14 = *(uint *)(local_138[0] + lVar18 * 4);
      puVar26 = (uint64_t *)(lVar3 + (uint64_t)uVar14);
      if (*(int *)((uVar7 - 3) + (int64_t)puVar26) == *(int *)((int64_t)arg1 + (uVar7 - 3)))
      {
        puVar9 = arg1;
        if (arg1 < (uint64_t *)((int64_t)param_2 - 7U)) {
          uVar8 = *arg1 ^ *puVar26;
          if (uVar8 == 0) {
            lVar16 = lVar3 + 8 + (uint64_t)uVar14;
            lVar21 = 0;
            do {
              puVar9 = (uint64_t *)((int64_t)arg1 + lVar21 + 8);
              if ((uint64_t *)((int64_t)param_2 - 7U) <= puVar9) {
                puVar26 = (uint64_t *)(lVar16 + lVar21);
                goto LAB_00ed5d34;
              }
              lVar1 = lVar21 + 8;
              uVar25 = *(uint64_t *)((int64_t)arg1 + lVar21 + 8) ^
                       *(uint64_t *)(lVar16 + lVar21);
              lVar21 = lVar1;
            } while (uVar25 == 0);
            uVar8 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            uVar25 = (uVar8 >> 3) + lVar1;
          }
          else {
            uVar25 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
              }
            }
            uVar25 = uVar25 >> 3;
          }
        }
        else {
LAB_00ed5d34:
          if ((puVar9 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar26 == (int)*puVar9)) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          }
          if ((puVar9 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar26 == (short)*puVar9)) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + 2);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
          }
          if (puVar9 < param_2) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + (uint64_t)((char)*puVar26 == (char)*puVar9));
          }
          uVar25 = (int64_t)puVar9 - (int64_t)arg1;
        }
        if ((uVar7 < uVar25) &&
           (*param_1 = (uint64_t)((uVar24 + 3) - uVar14), uVar7 = uVar25,
           (uint64_t *)((int64_t)arg1 + uVar25) == param_2)) break;
      }
      uVar25 = uVar7;
      lVar18 = lVar18 + 1;
      uVar7 = uVar25;
    } while (lVar18 != lVar22);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar25;
}


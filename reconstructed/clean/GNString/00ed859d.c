// Function: FUN_00ed859d
// Address: 00ed859d
// Size: 1686 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00ed859d(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char *pcVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  byte bVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  byte bVar15;
  uint uVar16;
  int64_t lVar17;
  byte bVar18;
  int64_t lVar19;
  uint64_t *arg1;
  int64_t lVar20;
  int64_t this_ptr;
  uint uVar21;
  uint64_t uVar22;
  void*puVar23;
  uint64_t *puVar24;
  int64_t lVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint64_t local_158;
  int local_13c;
  uint8_t local_138 [16] [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar4 = *(int64_t *)(this_ptr + 8);
  uVar7 = 1 << (*(byte *)(this_ptr + 0x100) & 0x1f);
  uVar22 = (int64_t)arg1 - lVar4;
  uVar16 = *(uint *)(this_ptr + 0x1c);
  uVar21 = (uint)uVar22;
  uVar5 = uVar21 - uVar7;
  if (uVar21 - uVar16 <= uVar7) {
    uVar5 = uVar16;
  }
  lVar19 = *(int64_t *)(this_ptr + 0x70);
  lVar8 = *(int64_t *)(this_ptr + 0x38);
  if (*(int *)(this_ptr + 0x28) != 0) {
    uVar5 = uVar16;
  }
  uVar16 = 6;
  if (*(uint *)(this_ptr + 0x10c) < 6) {
    uVar16 = *(uint *)(this_ptr + 0x10c);
  }
  local_13c = 1 << ((byte)uVar16 & 0x1f);
  uVar9 = *(uint64_t *)(this_ptr + 0x60);
  cVar6 = (char)*(void*)(this_ptr + 0x34);
  if (*(int *)(this_ptr + 300) == 0) {
    uVar16 = *(uint *)(this_ptr + 0x2c);
    local_158 = (uint64_t)uVar16;
    bVar12 = 0x38 - cVar6;
    lVar25 = lVar8;
    lVar17 = lVar19;
    bVar15 = bVar12;
    if (0x180 < uVar21 - uVar16) {
      if (uVar16 < 0xffffffa0) {
        uVar10 = local_158 + 0x5f;
        uVar14 = uVar9;
        while( true ) {
          uVar13 = (uint64_t)((uint)local_158 & 7);
          uVar16 = *(uint *)(this_ptr + 0x40 + uVar13 * 4);
          *(int *)(this_ptr + 0x40 + uVar13 * 4) =
               (int)((*(int64_t *)(lVar4 + 8 + local_158) * -0x30e4432340650000 ^ uVar14) >>
                    (bVar12 & 0x3f));
          uVar14 = (uint64_t)(uVar16 >> 2) & 0x3fffffc0;
          bVar15 = *(char *)(lVar8 + uVar14) - 1U & 0x3f;
          lVar25 = 0;
          if (bVar15 == 0) {
            lVar25 = 0x3f;
          }
          lVar25 = (uint64_t)bVar15 + lVar25;
          *(char *)(lVar8 + uVar14) = (char)lVar25;
          *(char *)(uVar14 + lVar8 + lVar25) = (char)uVar16;
          *(uint *)(lVar19 + (lVar25 + uVar14) * 4) = (uint)local_158;
          if (uVar10 == local_158) break;
          uVar14 = *(uint64_t *)(this_ptr + 0x60);
          local_158 = local_158 + 1;
        }
        lVar25 = *(int64_t *)(this_ptr + 0x38);
        lVar17 = *(int64_t *)(this_ptr + 0x70);
        bVar15 = 0x38 - (char)*(void*)(this_ptr + 0x34);
      }
      local_158 = (uint64_t)(uVar21 - 0x20);
      uVar16 = 0;
      if (lVar4 + local_158 <= (int64_t)arg1 + 1U) {
        uVar16 = ((int)((int64_t)arg1 + 1U) - (int)(lVar4 + local_158)) + 1;
      }
      uVar7 = 8;
      if (uVar16 < 8) {
        uVar7 = uVar16;
      }
      uVar16 = (uVar7 + uVar21) - 0x20;
      if (uVar21 - 0x20 < uVar16) {
        uVar10 = *(uint64_t *)(this_ptr + 0x60);
        uVar14 = local_158;
        do {
          *(int *)(this_ptr + 0x40 + (uint64_t)((uint)uVar14 & 7) * 4) =
               (int)((*(int64_t *)(lVar4 + uVar14) * -0x30e4432340650000 ^ uVar10) >>
                    (bVar15 & 0x3f));
          uVar14 = uVar14 + 1;
        } while (uVar16 != uVar14);
      }
    }
    if ((uint)local_158 < uVar21) {
      lVar1 = *(int64_t *)(this_ptr + 8);
      do {
        uVar10 = (uint64_t)((uint)local_158 & 7);
        uVar16 = *(uint *)(this_ptr + 0x40 + uVar10 * 4);
        *(int *)(this_ptr + 0x40 + uVar10 * 4) =
             (int)((*(int64_t *)(lVar1 + 8 + local_158) * -0x30e4432340650000 ^
                   *(uint64_t *)(this_ptr + 0x60)) >> (bVar15 & 0x3f));
        uVar10 = (uint64_t)(uVar16 >> 2) & 0x3fffffc0;
        bVar18 = *(char *)(lVar25 + uVar10) - 1U & 0x3f;
        lVar20 = 0;
        if (bVar18 == 0) {
          lVar20 = 0x3f;
        }
        lVar20 = (uint64_t)bVar18 + lVar20;
        *(char *)(lVar25 + uVar10) = (char)lVar20;
        *(char *)(uVar10 + lVar25 + lVar20) = (char)uVar16;
        *(uint *)(lVar17 + (lVar20 + uVar10) * 4) = (uint)local_158;
        local_158 = local_158 + 1;
      } while ((uVar22 & 0xffffffff) != local_158);
    }
    *(uint *)(this_ptr + 0x2c) = uVar21;
    uVar10 = (uint64_t)*(uint *)(this_ptr + 0x40 + (uint64_t)(uVar21 & 7) * 4);
    *(int *)(this_ptr + 0x40 + (uint64_t)(uVar21 & 7) * 4) =
         (int)((*(int64_t *)((uVar22 & 0xffffffff) + 8 + lVar4) * -0x30e4432340650000 ^ uVar9) >>
              (bVar12 & 0x3f));
  }
  else {
    uVar22 = *arg1;
    *(uint *)(this_ptr + 0x2c) = uVar21;
    uVar10 = (uVar22 * -0x30e4432340650000 ^ uVar9) >> (0x38U - cVar6 & 0x3f) & 0xffffffff;
  }
  *(int *)(this_ptr + 0x68) = *(int *)(this_ptr + 0x68) + (uint)uVar10;
  uVar22 = (uint64_t)((uint)(uVar10 >> 2) & 0x3fffffc0);
  bVar15 = *(byte *)(lVar8 + uVar22);
  puVar23 = (void*)(lVar8 + uVar22);
  auVar26 = pshufb(ZEXT416((uint)uVar10),(uint8_t  [16])0x0);
  local_138[0] = (uint8_t  [16])0x0;
  lVar8 = 0;
  do {
    pcVar2 = puVar23 + lVar8 * 4;
    auVar27[0] = -(*pcVar2 == auVar26[0]);
    auVar27[1] = -(pcVar2[1] == auVar26[1]);
    auVar27[2] = -(pcVar2[2] == auVar26[2]);
    auVar27[3] = -(pcVar2[3] == auVar26[3]);
    auVar27[4] = -(pcVar2[4] == auVar26[4]);
    auVar27[5] = -(pcVar2[5] == auVar26[5]);
    auVar27[6] = -(pcVar2[6] == auVar26[6]);
    auVar27[7] = -(pcVar2[7] == auVar26[7]);
    auVar27[8] = -(pcVar2[8] == auVar26[8]);
    auVar27[9] = -(pcVar2[9] == auVar26[9]);
    auVar27[10] = -(pcVar2[10] == auVar26[10]);
    auVar27[0xb] = -(pcVar2[0xb] == auVar26[0xb]);
    auVar27[0xc] = -(pcVar2[0xc] == auVar26[0xc]);
    auVar27[0xd] = -(pcVar2[0xd] == auVar26[0xd]);
    auVar27[0xe] = -(pcVar2[0xe] == auVar26[0xe]);
    auVar27[0xf] = -(pcVar2[0xf] == auVar26[0xf]);
    *(uint *)(local_138[0] + lVar8) =
         (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar27[0xf] >> 7) << 0xf);
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x10);
  uVar9 = (int64_t)(int)local_138[0]._4_4_ << 0x10 | (int64_t)(int)local_138[0]._0_4_ |
          (uint64_t)(uint)local_138[0]._8_4_ << 0x20 | (uint64_t)(uint)local_138[0]._12_4_ << 0x30
  ;
  uVar9 = uVar9 >> (bVar15 & 0x3f) | uVar9 << 0x40 - (bVar15 & 0x3f);
  lVar19 = lVar19 + uVar22 * 4;
  lVar25 = 0;
  lVar8 = 0;
  if (uVar9 != 0) {
    do {
      lVar17 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> lVar17 & 1) == 0; lVar17 = lVar17 + 1) {
        }
      }
      uVar22 = (uint64_t)((int)lVar17 + (uint)bVar15 & 0x3f);
      if (uVar22 != 0) {
        uVar16 = *(uint *)(lVar19 + uVar22 * 4);
        if (uVar16 < uVar5) break;
        *(uint *)(local_138[0] + lVar8 * 4) = uVar16;
        lVar8 = lVar8 + 1;
        local_13c = local_13c + -1;
      }
      uVar9 = uVar9 & uVar9 - 1;
      if ((uVar9 == 0) || (local_13c == 0)) break;
    } while( true );
  }
  uVar22 = (uint64_t)(bVar15 - 1 & 0x3f);
  if (uVar22 == 0) {
    lVar25 = 0x3f;
  }
  lVar25 = lVar25 + uVar22;
  *puVar23 = (char)lVar25;
  puVar23[lVar25] = (char)uVar10;
  iVar3 = *(int *)(this_ptr + 0x2c);
  *(int *)(this_ptr + 0x2c) = iVar3 + 1;
  *(int *)(lVar19 + lVar25 * 4) = iVar3;
  if (lVar8 == 0) {
    uVar22 = 3;
  }
  else {
    lVar19 = 0;
    uVar9 = 3;
    do {
      uVar16 = *(uint *)(local_138[0] + lVar19 * 4);
      puVar24 = (uint64_t *)(lVar4 + (uint64_t)uVar16);
      if (*(int *)((uVar9 - 3) + (int64_t)puVar24) == *(int *)((int64_t)arg1 + (uVar9 - 3)))
      {
        puVar11 = arg1;
        if (arg1 < (uint64_t *)((int64_t)param_2 - 7U)) {
          uVar10 = *arg1 ^ *puVar24;
          if (uVar10 == 0) {
            lVar25 = lVar4 + 8 + (uint64_t)uVar16;
            lVar17 = 0;
            do {
              puVar11 = (uint64_t *)((int64_t)arg1 + lVar17 + 8);
              if ((uint64_t *)((int64_t)param_2 - 7U) <= puVar11) {
                puVar24 = (uint64_t *)(lVar25 + lVar17);
                goto LAB_00ed8975;
              }
              lVar1 = lVar17 + 8;
              uVar22 = *(uint64_t *)((int64_t)arg1 + lVar17 + 8) ^
                       *(uint64_t *)(lVar25 + lVar17);
              lVar17 = lVar1;
            } while (uVar22 == 0);
            uVar10 = 0;
            if (uVar22 != 0) {
              for (; (uVar22 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar22 = (uVar10 >> 3) + lVar1;
          }
          else {
            uVar22 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
              }
            }
            uVar22 = uVar22 >> 3;
          }
        }
        else {
LAB_00ed8975:
          if ((puVar11 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar24 == (int)*puVar11))
          {
            puVar11 = (uint64_t *)((int64_t)puVar11 + 4);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
          }
          if ((puVar11 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar24 == (short)*puVar11)) {
            puVar11 = (uint64_t *)((int64_t)puVar11 + 2);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          }
          if (puVar11 < param_2) {
            puVar11 = (uint64_t *)
                      ((int64_t)puVar11 + (uint64_t)((char)*puVar24 == (char)*puVar11));
          }
          uVar22 = (int64_t)puVar11 - (int64_t)arg1;
        }
        if ((uVar9 < uVar22) &&
           (*param_1 = (uint64_t)((uVar21 + 3) - uVar16), uVar9 = uVar22,
           (uint64_t *)((int64_t)arg1 + uVar22) == param_2)) break;
      }
      uVar22 = uVar9;
      lVar19 = lVar19 + 1;
      uVar9 = uVar22;
    } while (lVar19 != lVar8);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar22;
}


// Function: FUN_009658a9
// Address: 009658a9
// Size: 3877 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009658a9(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t this_ptr;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  int64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_80;
  uint64_t local_78 [8];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar1 = 0;
  do {
    local_78[lVar1] =
         (uint64_t)
         CONCAT11(*(void*)(this_ptr + 0x26 + lVar1 * 8),
                  *(void*)(this_ptr + 0x27 + lVar1 * 8)) ^
         ((uint64_t)*(byte *)(this_ptr + 0x25 + lVar1 * 8) << 0x10 |
         (uint64_t)*(byte *)(this_ptr + 0x24 + lVar1 * 8) << 0x18 |
         (uint64_t)*(byte *)(this_ptr + 0x23 + lVar1 * 8) << 0x20 |
         (uint64_t)*(byte *)(this_ptr + 0x22 + lVar1 * 8) << 0x28 |
         (uint64_t)*(byte *)(this_ptr + 0x21 + lVar1 * 8) << 0x30 |
         (uint64_t)*(byte *)(this_ptr + 0x20 + lVar1 * 8) << 0x38);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  uVar33 = *(uint64_t *)(this_ptr + 0x68);
  uVar2 = local_78[0] ^ uVar33;
  uVar3 = local_78[1] ^ *(uint64_t *)(this_ptr + 0x70);
  uVar28 = local_78[2] ^ *(uint64_t *)(this_ptr + 0x78);
  uVar8 = local_78[3] ^ *(uint64_t *)(this_ptr + 0x80);
  uVar12 = local_78[4] ^ *(uint64_t *)(this_ptr + 0x88);
  uVar15 = local_78[5] ^ *(uint64_t *)(this_ptr + 0x90);
  uVar22 = local_78[6] ^ *(uint64_t *)(this_ptr + 0x98);
  uVar6 = *(uint64_t *)(this_ptr + 0xa0);
  uVar24 = local_78[7] ^ uVar6;
  local_c0 = 1;
  uVar13 = uVar12;
  uVar20 = uVar15;
  uVar23 = uVar22;
  uVar25 = *(uint64_t *)(this_ptr + 0x90);
  uVar26 = *(uint64_t *)(this_ptr + 0x78);
  uVar27 = *(uint64_t *)(this_ptr + 0x98);
  uVar29 = uVar3;
  uVar31 = *(uint64_t *)(this_ptr + 0x80);
  uVar32 = *(uint64_t *)(this_ptr + 0x88);
  local_b8 = uVar24;
  local_b0 = uVar2;
  local_a0 = uVar28;
  local_98 = uVar8;
  local_80 = *(uint64_t *)(this_ptr + 0x70);
  do {
    uVar16 = uVar6 >> 0x2d;
    uVar4 = *(uint64_t *)(&g_023c2e90 + (uVar33 >> 0x2d & 0x7f8)) ^
            *(uint64_t *)(&g_023c2690 + (local_80 >> 0x38) * 8) ^
            *(uint64_t *)(&g_023c3690 + (uVar6 >> 0x25 & 0x7f8)) ^
            *(uint64_t *)(&g_023c3e90 + (uVar27 >> 0x1d & 0x7f8)) ^
            *(uint64_t *)(&g_023c4690 + (uVar25 >> 0x15 & 0x7f8)) ^
            *(uint64_t *)(&g_023c4e90 + (uVar32 >> 0xd & 0x7f8)) ^
            *(uint64_t *)(&g_023c5690 + (uVar31 >> 8 & 0xff) * 8) ^
            *(uint64_t *)(&g_023c5e90 + (uVar26 & 0xff) * 8);
    uVar17 = *(uint64_t *)(&g_023c2e90 + (local_80 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c2690 + (uVar26 >> 0x38) * 8) ^
             *(uint64_t *)(&g_023c3690 + (uVar33 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (uVar6 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (uVar27 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (uVar25 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (uVar32 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (uVar31 & 0xff) * 8);
    uVar9 = *(uint64_t *)(&g_023c2e90 + (uVar26 >> 0x2d & 0x7f8)) ^
            *(uint64_t *)(&g_023c2690 + (uVar31 >> 0x38) * 8) ^
            *(uint64_t *)(&g_023c3690 + (local_80 >> 0x25 & 0x7f8)) ^
            *(uint64_t *)(&g_023c3e90 + (uVar33 >> 0x1d & 0x7f8)) ^
            *(uint64_t *)(&g_023c4690 + (uVar6 >> 0x15 & 0x7f8)) ^
            *(uint64_t *)(&g_023c4e90 + (uVar27 >> 0xd & 0x7f8)) ^
            *(uint64_t *)(&g_023c5690 + (uVar25 >> 8 & 0xff) * 8) ^
            *(uint64_t *)(&g_023c5e90 + (uVar32 & 0xff) * 8);
    uVar10 = *(uint64_t *)(&g_023c2e90 + (uVar31 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c2690 + (uVar32 >> 0x38) * 8) ^
             *(uint64_t *)(&g_023c3690 + (uVar26 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (local_80 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (uVar33 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (uVar6 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (uVar27 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (uVar25 & 0xff) * 8);
    uVar18 = *(uint64_t *)(&g_023c2e90 + (uVar32 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c2690 + (uVar25 >> 0x38) * 8) ^
             *(uint64_t *)(&g_023c3690 + (uVar31 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (uVar26 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (local_80 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (uVar33 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (uVar6 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (uVar27 & 0xff) * 8);
    uVar5 = *(uint64_t *)(&g_023c2e90 + (uVar25 >> 0x2d & 0x7f8)) ^
            *(uint64_t *)(&g_023c2690 + (uVar27 >> 0x38) * 8) ^
            *(uint64_t *)(&g_023c3690 + (uVar32 >> 0x25 & 0x7f8)) ^
            *(uint64_t *)(&g_023c3e90 + (uVar31 >> 0x1d & 0x7f8)) ^
            *(uint64_t *)(&g_023c4690 + (uVar26 >> 0x15 & 0x7f8)) ^
            *(uint64_t *)(&g_023c4e90 + (local_80 >> 0xd & 0x7f8)) ^
            *(uint64_t *)(&g_023c5690 + (uVar33 >> 8 & 0xff) * 8) ^
            *(uint64_t *)(&g_023c5e90 + (uVar6 & 0xff) * 8);
    uVar6 = *(uint64_t *)(&g_023c2e90 + (uVar27 >> 0x2d & 0x7f8)) ^
            *(uint64_t *)(&g_023c2690 + (uVar6 >> 0x38) * 8) ^
            *(uint64_t *)(&g_023c3690 + (uVar25 >> 0x25 & 0x7f8)) ^
            *(uint64_t *)(&g_023c3e90 + (uVar32 >> 0x1d & 0x7f8)) ^
            *(uint64_t *)(&g_023c4690 + (uVar31 >> 0x15 & 0x7f8)) ^
            *(uint64_t *)(&g_023c4e90 + (uVar26 >> 0xd & 0x7f8)) ^
            *(uint64_t *)(&g_023c5690 + (local_80 >> 8 & 0xff) * 8) ^
            *(uint64_t *)(&g_023c5e90 + (uVar33 & 0xff) * 8);
    uVar19 = *(uint64_t *)(&g_023c2690 + (local_b8 >> 0x38) * 8) ^ uVar6 ^
             *(uint64_t *)(&g_023c2e90 + (uVar23 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c3690 + (uVar20 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (uVar13 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (local_98 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (local_a0 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (uVar29 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (local_b0 & 0xff) * 8);
    uVar33 = *(uint64_t *)(&g_023c2e90 + (uVar16 & 0x7f8)) ^
             *(uint64_t *)(&g_023c2690 + (uVar33 >> 0x38) * 8) ^
             *(uint64_t *)(&g_023c3690 + (uVar27 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (uVar25 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (uVar32 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (uVar31 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (uVar26 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (local_80 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c6690 + local_c0 * 8);
    uVar11 = *(uint64_t *)(&g_023c2690 + (local_b0 >> 0x38) * 8) ^ uVar33 ^
             *(uint64_t *)(&g_023c2e90 + (local_b8 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c3690 + (uVar23 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (uVar20 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (uVar13 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (local_98 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (local_a0 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (uVar29 & 0xff) * 8);
    uVar30 = *(uint64_t *)(&g_023c2690 + (uVar29 >> 0x38) * 8) ^ uVar4 ^
             *(uint64_t *)(&g_023c2e90 + (local_b0 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c3690 + (local_b8 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (uVar23 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (uVar20 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (uVar13 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (local_98 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (local_a0 & 0xff) * 8);
    uVar16 = *(uint64_t *)(&g_023c2690 + (local_a0 >> 0x38) * 8) ^ uVar17 ^
             *(uint64_t *)(&g_023c2e90 + (uVar29 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c3690 + (local_b0 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (local_b8 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (uVar23 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (uVar20 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (uVar13 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (local_98 & 0xff) * 8);
    uVar7 = *(uint64_t *)(&g_023c2690 + (local_98 >> 0x38) * 8) ^ uVar9 ^
            *(uint64_t *)(&g_023c2e90 + (local_a0 >> 0x2d & 0x7f8)) ^
            *(uint64_t *)(&g_023c3690 + (uVar29 >> 0x25 & 0x7f8)) ^
            *(uint64_t *)(&g_023c3e90 + (local_b0 >> 0x1d & 0x7f8)) ^
            *(uint64_t *)(&g_023c4690 + (local_b8 >> 0x15 & 0x7f8)) ^
            *(uint64_t *)(&g_023c4e90 + (uVar23 >> 0xd & 0x7f8)) ^
            *(uint64_t *)(&g_023c5690 + (uVar20 >> 8 & 0xff) * 8) ^
            *(uint64_t *)(&g_023c5e90 + (uVar13 & 0xff) * 8);
    uVar14 = *(uint64_t *)(&g_023c2690 + (uVar13 >> 0x38) * 8) ^ uVar10 ^
             *(uint64_t *)(&g_023c2e90 + (local_98 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c3690 + (local_a0 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (uVar29 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (local_b0 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (local_b8 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (uVar23 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (uVar20 & 0xff) * 8);
    uVar21 = *(uint64_t *)(&g_023c2690 + (uVar20 >> 0x38) * 8) ^ uVar18 ^
             *(uint64_t *)(&g_023c2e90 + (uVar13 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c3690 + (local_98 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (local_a0 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (uVar29 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (local_b0 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (local_b8 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (uVar23 & 0xff) * 8);
    uVar23 = *(uint64_t *)(&g_023c2690 + (uVar23 >> 0x38) * 8) ^ uVar5 ^
             *(uint64_t *)(&g_023c2e90 + (uVar20 >> 0x2d & 0x7f8)) ^
             *(uint64_t *)(&g_023c3690 + (uVar13 >> 0x25 & 0x7f8)) ^
             *(uint64_t *)(&g_023c3e90 + (local_98 >> 0x1d & 0x7f8)) ^
             *(uint64_t *)(&g_023c4690 + (local_a0 >> 0x15 & 0x7f8)) ^
             *(uint64_t *)(&g_023c4e90 + (uVar29 >> 0xd & 0x7f8)) ^
             *(uint64_t *)(&g_023c5690 + (local_b0 >> 8 & 0xff) * 8) ^
             *(uint64_t *)(&g_023c5e90 + (local_b8 & 0xff) * 8);
    local_c0 = local_c0 + 1;
    uVar13 = uVar14;
    uVar20 = uVar21;
    uVar25 = uVar18;
    uVar26 = uVar17;
    uVar27 = uVar5;
    uVar29 = uVar30;
    uVar31 = uVar9;
    uVar32 = uVar10;
    local_b8 = uVar19;
    local_b0 = uVar11;
    local_a0 = uVar16;
    local_98 = uVar7;
    local_80 = uVar4;
  } while (local_c0 != 0xb);
  *(uint64_t *)(this_ptr + 0x68) = uVar2 ^ uVar11;
  *(uint64_t *)(this_ptr + 0x70) = uVar3 ^ uVar30;
  *(uint64_t *)(this_ptr + 0x78) = uVar28 ^ uVar16;
  *(uint64_t *)(this_ptr + 0x80) = uVar8 ^ uVar7;
  *(uint64_t *)(this_ptr + 0x88) = uVar12 ^ uVar14;
  *(uint64_t *)(this_ptr + 0x90) = uVar15 ^ uVar21;
  *(uint64_t *)(this_ptr + 0x98) = uVar22 ^ uVar23;
  *(uint64_t *)(this_ptr + 0xa0) = uVar24 ^ uVar19;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}


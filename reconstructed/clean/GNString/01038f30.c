// Function: FUN_01038f30
// Address: 01038f30
// Size: 1260 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01038f30(uint64_t param_1,uint64_t param_2)

{
  uint *puVar1;
  void*puVar2;
  int64_t lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *ptr;
  uint uVar13;
  uint64_t uVar14;
  uint uVar15;
  uint uVar16;
  uint *arg1;
  uint uVar17;
  uint uVar18;
  int64_t this_ptr;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint local_c4;
  void *local_c0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  
  lVar3 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_b8 = *(void*)(arg1 + param_2 * 0x20 + -0x10);
  uStack_b0 = *(void*)(arg1 + param_2 * 0x20 + -0x10 + 2);
  local_a8 = *(void*)(arg1 + param_2 * 0x20 + -0xc);
  uStack_a0 = *(void*)(arg1 + param_2 * 0x20 + -0xc + 2);
  local_98 = *(void*)(arg1 + param_2 * 0x20 + -8);
  uStack_90 = *(void*)(arg1 + param_2 * 0x20 + -8 + 2);
  local_88 = *(void*)(arg1 + param_2 * 0x20 + -4);
  uStack_80 = *(void*)(arg1 + param_2 * 0x20 + -4 + 2);
  ptr = (void *)0x0;
  uVar14 = param_2;
  if (param_2 * 2 != 0) {
    uVar14 = 0;
    do {
      puVar1 = arg1 + 0xc;
      puVar4 = arg1 + 0xd;
      puVar5 = arg1 + 0xe;
      puVar6 = arg1 + 0xf;
      local_c0 = (void *)(uint64_t)(arg1[10] ^ (uint)uStack_90);
      local_c4 = 10;
      uVar9 = *puVar1 ^ (uint)local_88;
      uVar10 = *puVar4 ^ local_88._4_4_;
      uVar11 = *puVar5 ^ (uint)uStack_80;
      uVar21 = *arg1 ^ (uint)local_b8;
      uVar24 = arg1[5] ^ local_a8._4_4_;
      uVar19 = *puVar6 ^ uStack_80._4_4_;
      uVar22 = arg1[9] ^ local_98._4_4_;
      uVar17 = arg1[8] ^ (uint)local_98;
      uVar8 = arg1[4] ^ (uint)local_a8;
      uVar15 = arg1[1] ^ local_b8._4_4_;
      uVar12 = arg1[6] ^ (uint)uStack_a0;
      uVar18 = arg1[0xb] ^ uStack_90._4_4_;
      uVar7 = arg1[3] ^ uStack_b0._4_4_;
      uVar13 = arg1[7] ^ uStack_a0._4_4_;
      uVar16 = arg1[2] ^ (uint)uStack_b0;
      do {
        uVar8 = ((uVar9 + uVar21) * 0x80 | uVar9 + uVar21 >> 0x19) ^ uVar8;
        uVar17 = ((uVar8 + uVar21) * 0x200 | uVar8 + uVar21 >> 0x17) ^ uVar17;
        uVar9 = ((uVar8 + uVar17) * 0x2000 | uVar8 + uVar17 >> 0x13) ^ uVar9;
        uVar20 = uVar9 + uVar17;
        uVar22 = ((uVar15 + uVar24) * 0x80 | uVar15 + uVar24 >> 0x19) ^ uVar22;
        uVar10 = ((uVar22 + uVar24) * 0x200 | uVar22 + uVar24 >> 0x17) ^ uVar10;
        uVar15 = ((uVar10 + uVar22) * 0x2000 | uVar10 + uVar22 >> 0x13) ^ uVar15;
        uVar23 = uVar15 + uVar10;
        uVar21 = (uVar20 * 0x40000 | uVar20 >> 0xe) ^ uVar21;
        uVar25 = (uint)local_c0;
        uVar11 = ((uVar12 + uVar25) * 0x80 | uVar12 + uVar25 >> 0x19) ^ uVar11;
        uVar16 = ((uVar11 + uVar25) * 0x200 | uVar11 + uVar25 >> 0x17) ^ uVar16;
        uVar12 = ((uVar11 + uVar16) * 0x2000 | uVar11 + uVar16 >> 0x13) ^ uVar12;
        uVar20 = uVar12 + uVar16;
        uVar24 = (uVar23 * 0x40000 | uVar23 >> 0xe) ^ uVar24;
        uVar7 = ((uVar18 + uVar19) * 0x80 | uVar18 + uVar19 >> 0x19) ^ uVar7;
        uVar13 = ((uVar7 + uVar19) * 0x200 | uVar7 + uVar19 >> 0x17) ^ uVar13;
        uVar18 = ((uVar13 + uVar7) * 0x2000 | uVar13 + uVar7 >> 0x13) ^ uVar18;
        uVar23 = uVar18 + uVar13;
        uVar25 = (uVar20 * 0x40000 | uVar20 >> 0xe) ^ uVar25;
        uVar15 = ((uVar7 + uVar21) * 0x80 | uVar7 + uVar21 >> 0x19) ^ uVar15;
        uVar16 = ((uVar15 + uVar21) * 0x200 | uVar15 + uVar21 >> 0x17) ^ uVar16;
        uVar7 = ((uVar16 + uVar15) * 0x2000 | uVar16 + uVar15 >> 0x13) ^ uVar7;
        uVar19 = (uVar23 * 0x40000 | uVar23 >> 0xe) ^ uVar19;
        uVar12 = ((uVar24 + uVar8) * 0x80 | uVar24 + uVar8 >> 0x19) ^ uVar12;
        uVar13 = ((uVar12 + uVar24) * 0x200 | uVar12 + uVar24 >> 0x17) ^ uVar13;
        uVar8 = ((uVar13 + uVar12) * 0x2000 | uVar13 + uVar12 >> 0x13) ^ uVar8;
        uVar21 = ((uVar7 + uVar16) * 0x40000 | uVar7 + uVar16 >> 0xe) ^ uVar21;
        uVar18 = ((uVar25 + uVar22) * 0x80 | uVar25 + uVar22 >> 0x19) ^ uVar18;
        uVar17 = ((uVar18 + uVar25) * 0x200 | uVar18 + uVar25 >> 0x17) ^ uVar17;
        uVar22 = ((uVar17 + uVar18) * 0x2000 | uVar17 + uVar18 >> 0x13) ^ uVar22;
        uVar24 = ((uVar8 + uVar13) * 0x40000 | uVar8 + uVar13 >> 0xe) ^ uVar24;
        uVar9 = ((uVar19 + uVar11) * 0x80 | uVar19 + uVar11 >> 0x19) ^ uVar9;
        uVar10 = ((uVar19 + uVar9) * 0x200 | uVar19 + uVar9 >> 0x17) ^ uVar10;
        uVar11 = ((uVar10 + uVar9) * 0x2000 | uVar10 + uVar9 >> 0x13) ^ uVar11;
        uVar25 = ((uVar17 + uVar22) * 0x40000 | uVar17 + uVar22 >> 0xe) ^ uVar25;
        local_c0 = (void *)(uint64_t)uVar25;
        uVar19 = ((uVar11 + uVar10) * 0x40000 | uVar11 + uVar10 >> 0xe) ^ uVar19;
        local_c4 = local_c4 - 2;
      } while (2 < local_c4);
      local_b8 = CONCAT44(uVar15 + (arg1[1] ^ local_b8._4_4_),
                          uVar21 + (*arg1 ^ (uint)local_b8));
      uStack_b0 = CONCAT44(uVar7 + (arg1[3] ^ uStack_b0._4_4_),
                           uVar16 + (arg1[2] ^ (uint)uStack_b0));
      local_a8 = CONCAT44(uVar24 + (arg1[5] ^ local_a8._4_4_),
                          uVar8 + (arg1[4] ^ (uint)local_a8));
      uStack_a0 = CONCAT44(uVar13 + (arg1[7] ^ uStack_a0._4_4_),
                           uVar12 + (arg1[6] ^ (uint)uStack_a0));
      local_98 = CONCAT44(uVar22 + (arg1[9] ^ local_98._4_4_),
                          uVar17 + (arg1[8] ^ (uint)local_98));
      uStack_90 = CONCAT44(uVar18 + (arg1[0xb] ^ uStack_90._4_4_),
                           uVar25 + (arg1[10] ^ (uint)uStack_90));
      arg1 = arg1 + 0x10;
      local_88 = CONCAT44(uVar10 + (*puVar4 ^ local_88._4_4_),uVar9 + (*puVar1 ^ (uint)local_88));
      uStack_80 = CONCAT44(uVar19 + (*puVar6 ^ uStack_80._4_4_),uVar11 + (*puVar5 ^ (uint)uStack_80)
                          );
      _OPENSSL_cleanse(local_c0,uVar24);
      ptr = (void *)((((uint)uVar14 & 1) * param_2 + (uVar14 >> 1)) * 0x40);
      puVar2 = (void*)(this_ptr + 0x30 + (int64_t)ptr);
      *puVar2 = local_88;
      puVar2[1] = uStack_80;
      puVar2 = (void*)(this_ptr + 0x20 + (int64_t)ptr);
      *puVar2 = local_98;
      puVar2[1] = uStack_90;
      puVar2 = (void*)(this_ptr + 0x10 + (int64_t)ptr);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a0;
      *(void*)(this_ptr + (int64_t)ptr) = local_b8;
      ((void*)(this_ptr + (int64_t)ptr))[1] = uStack_b0;
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_2 * 2);
  }
  _OPENSSL_cleanse(ptr,(size_t)uVar14);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar3) {
    return;
  }
                      ___stack_chk_fail();
}


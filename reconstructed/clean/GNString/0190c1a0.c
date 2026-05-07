// Function: FUN_0190c1a0
// Address: 0190c1a0
// Size: 646 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0190c1a0(void)

{
  uint8_t auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *arg1;
  int64_t this_ptr;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint auStack_178 [9];
  int iStack_154;
  void*puStack_150;
  uint local_138 [64];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar2 = *arg1;
  local_138[0] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[1];
  local_138[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[2];
  local_138[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[3];
  local_138[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[4];
  local_138[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[5];
  local_138[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[6];
  local_138[6] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[7];
  local_138[7] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[8];
  local_138[8] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[9];
  local_138[9] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[10];
  local_138[10] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[0xb];
  local_138[0xb] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[0xc];
  local_138[0xc] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[0xd];
  local_138[0xd] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[0xe];
  local_138[0xe] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = arg1[0xf];
  local_138[0xf] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  lVar6 = 0x10;
  do {
    uVar2 = local_138[lVar6 + -2];
    uVar14 = auStack_178[lVar6 + 1];
    local_138[lVar6] =
         (uVar2 >> 10 ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ (uVar2 << 0xf | uVar2 >> 0x11)) +
         (&iStack_154)[lVar6] + auStack_178[lVar6] +
         (uVar14 >> 3 ^ (uVar14 << 0xe | uVar14 >> 0x12) ^ (uVar14 << 0x19 | uVar14 >> 7));
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x40);
  auVar1 = *(uint8_t (*) [16])(this_ptr + 0x5c);
  lVar6 = 0;
  uVar2 = *(uint *)(this_ptr + 0x50);
  uVar14 = *(uint *)(this_ptr + 0x54);
  uVar5 = *(uint *)(this_ptr + 0x4c);
  uVar15 = *(uint *)(this_ptr + 0x58);
  uVar13 = auVar1._12_4_;
  uVar3 = auVar1._4_4_;
  uVar11 = auVar1._8_4_;
  uVar10 = auVar1._0_4_;
  do {
    uVar9 = uVar10;
    uVar7 = uVar11;
    uVar11 = uVar3;
    uVar4 = uVar5;
    uVar12 = uVar14;
    uVar14 = uVar2;
    iVar8 = (~uVar9 & uVar7) +
            (uVar11 & uVar9) +
            ((uVar9 << 7 | uVar9 >> 0x19) ^
            (uVar9 << 0x15 | uVar9 >> 0xb) ^ (uVar9 << 0x1a | uVar9 >> 6)) + uVar13 +
            *(int *)((int64_t)&g_027e0050 + lVar6) + *(int *)((int64_t)local_138 + lVar6);
    uVar10 = uVar15 + iVar8;
    uVar5 = (uVar14 & uVar12 ^ (uVar14 ^ uVar12) & uVar4) +
            ((uVar4 << 10 | uVar4 >> 0x16) ^
            (uVar4 << 0x13 | uVar4 >> 0xd) ^ (uVar4 << 0x1e | uVar4 >> 2)) + iVar8;
    lVar6 = lVar6 + 4;
    uVar2 = uVar4;
    uVar15 = uVar12;
    uVar13 = uVar7;
    uVar3 = uVar9;
  } while (lVar6 != 0x100);
  *(uint *)(this_ptr + 0x4c) = uVar5 + *(uint *)(this_ptr + 0x4c);
  *(uint *)(this_ptr + 0x50) = uVar4 + *(uint *)(this_ptr + 0x50);
  *(uint *)(this_ptr + 0x54) = uVar14 + *(uint *)(this_ptr + 0x54);
  *(uint *)(this_ptr + 0x58) = uVar12 + *(uint *)(this_ptr + 0x58);
  *(uint *)(this_ptr + 0x5c) = uVar10 + auVar1._0_4_;
  *(uint *)(this_ptr + 0x60) = uVar9 + auVar1._4_4_;
  *(uint *)(this_ptr + 100) = uVar11 + auVar1._8_4_;
  *(uint *)(this_ptr + 0x68) = uVar7 + auVar1._12_4_;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      puStack_150 = &UNK_0190c426;
  ___stack_chk_fail();
}


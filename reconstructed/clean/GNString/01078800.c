// Function: FUN_01078800
// Address: 01078800
// Size: 718 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01078800(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t arg1;
  int64_t lVar9;
  int64_t this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t *unaff_R15;
  
  uVar1 = *(uint64_t *)(this_ptr + 0x3c);
  uVar8 = *(uint64_t *)(this_ptr + 0x44);
  uVar5 = *(uint64_t *)(this_ptr + 0x4c);
  uVar11 = *(uint64_t *)(this_ptr + 0x54);
  uVar13 = *(uint64_t *)(this_ptr + 0x5c);
  do {
    lVar9 = arg1;
    uVar3 = uVar5 ^ *(uint64_t *)(this_ptr + -0x54) ^ *(uint64_t *)(this_ptr + -0x2c) ^
            *(uint64_t *)(this_ptr + -4) ^ *(uint64_t *)(this_ptr + 0x24);
    uVar1 = uVar1 ^ *(uint64_t *)(this_ptr + -100) ^ *(uint64_t *)(this_ptr + -0x3c) ^
            *(uint64_t *)(this_ptr + -0x14) ^ *(uint64_t *)(this_ptr + 0x14);
    uVar4 = (uVar3 << 1 | (uint64_t)((int64_t)uVar3 < 0)) ^ uVar1;
    uVar5 = uVar11 ^ *(uint64_t *)(this_ptr + -0x4c) ^ *(uint64_t *)(this_ptr + -0x24) ^
            *(uint64_t *)(this_ptr + 4) ^ *(uint64_t *)(this_ptr + 0x2c);
    uVar2 = (uVar1 << 1 | (uint64_t)((int64_t)uVar1 < 0)) ^ uVar5;
    uVar1 = uVar8 ^ *(uint64_t *)(this_ptr + -0x5c) ^ *(uint64_t *)(this_ptr + -0x34) ^
            *(uint64_t *)(this_ptr + -0xc) ^ *(uint64_t *)(this_ptr + 0x1c);
    uVar6 = (uVar5 << 1 | (uint64_t)((int64_t)uVar5 < 0)) ^ uVar1;
    uVar8 = uVar13 ^ *(uint64_t *)(this_ptr + -0x44) ^ *(uint64_t *)(this_ptr + -0x1c) ^
            *(uint64_t *)(this_ptr + 0xc) ^ *(uint64_t *)(this_ptr + 0x34);
    uVar7 = (uVar1 << 1 | (uint64_t)((int64_t)uVar1 < 0)) ^ uVar8;
    uVar3 = (uVar8 << 1 | (uint64_t)((int64_t)uVar8 < 0)) ^ uVar3;
    uVar1 = *(uint64_t *)(this_ptr + -0x34) ^ uVar4;
    uVar8 = *(uint64_t *)(this_ptr + -4) ^ uVar6;
    uVar11 = uVar1 << 0x2c | uVar1 >> 0x14;
    uVar1 = *(uint64_t *)(this_ptr + 0x2c) ^ uVar3;
    uVar8 = uVar8 << 0x2b | uVar8 >> 0x15;
    uVar10 = *(uint64_t *)(this_ptr + -100) ^ uVar7;
    uVar12 = uVar1 << 0x15 | uVar1 >> 0x2b;
    uVar14 = (uVar13 ^ uVar2) << 0xe | (uVar13 ^ uVar2) >> 0x32;
    uVar1 = *unaff_R15;
    unaff_R15 = unaff_R15 + 1;
    *(uint64_t *)(lVar9 + -100) = (uVar11 | uVar8) ^ uVar10 ^ uVar1;
    *(uint64_t *)(lVar9 + -0x54) = uVar14 & uVar12 ^ uVar8;
    uVar1 = *(uint64_t *)(this_ptr + 0x4c);
    *(uint64_t *)(lVar9 + -0x5c) = (~uVar8 | uVar12) ^ uVar11;
    uVar8 = *(uint64_t *)(this_ptr + -0x1c);
    uVar5 = *(uint64_t *)(this_ptr + -0x14);
    *(uint64_t *)(lVar9 + -0x44) = uVar11 & uVar10 ^ uVar14;
    uVar11 = *(uint64_t *)(this_ptr + -0x4c);
    uVar13 = *(uint64_t *)(this_ptr + 0x1c);
    *(uint64_t *)(lVar9 + -0x4c) = (uVar14 | uVar10) ^ uVar12;
    uVar11 = uVar11 ^ uVar3;
    uVar1 = uVar1 ^ uVar6;
    uVar10 = uVar11 << 0x1c | uVar11 >> 0x24;
    uVar13 = uVar13 ^ uVar4;
    uVar8 = uVar8 ^ uVar2;
    uVar15 = uVar1 << 0x3d | uVar1 >> 3;
    uVar11 = uVar13 << 0x2d | uVar13 >> 0x13;
    uVar5 = uVar5 ^ uVar7;
    uVar12 = uVar8 << 0x14 | uVar8 >> 0x2c;
    uVar14 = uVar5 << 3 | uVar5 >> 0x3d;
    *(uint64_t *)(lVar9 + -0x24) = (uVar10 | uVar15) ^ uVar11;
    uVar1 = *(uint64_t *)(this_ptr + -0x5c);
    *(uint64_t *)(lVar9 + -0x1c) = uVar12 & uVar10 ^ uVar15;
    uVar8 = *(uint64_t *)(this_ptr + -0x2c);
    *(uint64_t *)(lVar9 + -0x2c) = (~uVar15 | uVar11) ^ uVar14;
    uVar5 = *(uint64_t *)(this_ptr + 0x3c);
    *(uint64_t *)(lVar9 + -0x34) = uVar11 & uVar14 ^ uVar12;
    uVar11 = *(uint64_t *)(this_ptr + 4);
    uVar13 = *(uint64_t *)(this_ptr + 0x34);
    *(uint64_t *)(lVar9 + -0x3c) = (uVar12 | uVar14) ^ uVar10;
    uVar11 = uVar11 ^ uVar3;
    uVar13 = uVar13 ^ uVar2;
    uVar10 = uVar11 << 0x19 | uVar11 >> 0x27;
    uVar8 = uVar8 ^ uVar6;
    uVar12 = uVar13 << 8 | uVar13 >> 0x38;
    uVar5 = uVar5 ^ uVar7;
    uVar11 = uVar8 << 6 | uVar8 >> 0x3a;
    uVar1 = uVar1 ^ uVar4;
    uVar15 = uVar5 << 0x12 | uVar5 >> 0x2e;
    uVar13 = uVar1 << 1 | (uint64_t)((int64_t)uVar1 < 0);
    uVar14 = ~uVar12;
    *(uint64_t *)(lVar9 + -0xc) = uVar10 & uVar12 ^ uVar11;
    uVar1 = *(uint64_t *)(this_ptr + -0xc);
    *(uint64_t *)(lVar9 + -4) = uVar15 & uVar14 ^ uVar10;
    uVar8 = *(uint64_t *)(this_ptr + 0x54);
    *(uint64_t *)(lVar9 + -0x14) = (uVar10 | uVar11) ^ uVar13;
    *(uint64_t *)(lVar9 + 0xc) = uVar11 & uVar13 ^ uVar15;
    uVar5 = *(uint64_t *)(this_ptr + -0x3c);
    uVar11 = *(uint64_t *)(this_ptr + 0x24);
    *(uint64_t *)(lVar9 + 4) = (uVar15 | uVar13) ^ uVar14;
    uVar1 = uVar1 ^ uVar4;
    uVar11 = uVar11 ^ uVar6;
    uVar13 = uVar1 << 10 | uVar1 >> 0x36;
    uVar5 = uVar5 ^ uVar7;
    uVar11 = uVar11 << 0xf | uVar11 >> 0x31;
    uVar8 = uVar8 ^ uVar3;
    uVar5 = uVar5 << 0x24 | uVar5 >> 0x1c;
    uVar1 = *(uint64_t *)(this_ptr + -0x44) ^ uVar2;
    uVar10 = uVar8 << 0x38 | uVar8 >> 8;
    uVar1 = uVar1 << 0x1b | uVar1 >> 0x25;
    uVar8 = ~uVar11;
    *(uint64_t *)(lVar9 + 0x1c) = (uVar13 | uVar11) ^ uVar5;
    *(uint64_t *)(lVar9 + 0x24) = (uVar10 | uVar8) ^ uVar13;
    *(uint64_t *)(lVar9 + 0x14) = uVar13 & uVar5 ^ uVar1;
    *(uint64_t *)(lVar9 + 0x34) = (uVar5 | uVar1) ^ uVar10;
    *(uint64_t *)(lVar9 + 0x2c) = uVar1 & uVar10 ^ uVar8;
    uVar6 = uVar6 ^ *(uint64_t *)(this_ptr + -0x54);
    uVar3 = uVar3 ^ *(uint64_t *)(this_ptr + -0x24);
    uVar11 = uVar6 << 0x3e | uVar6 >> 2;
    uVar4 = uVar4 ^ *(uint64_t *)(this_ptr + 0x44);
    uVar1 = uVar3 << 0x37 | uVar3 >> 9;
    uVar2 = uVar2 ^ *(uint64_t *)(this_ptr + 0xc);
    uVar5 = uVar4 << 2 | uVar4 >> 0x3e;
    uVar7 = uVar7 ^ *(uint64_t *)(this_ptr + 0x14);
    uVar2 = uVar2 << 0x27 | uVar2 >> 0x19;
    uVar3 = uVar7 << 0x29 | uVar7 >> 0x17;
    uVar8 = ~uVar1;
    uVar13 = uVar11 & uVar1 ^ uVar5;
    *(uint64_t *)(lVar9 + 0x5c) = uVar13;
    uVar1 = uVar2 & uVar8 ^ uVar11;
    *(uint64_t *)(lVar9 + 0x3c) = uVar1;
    uVar11 = (uVar11 | uVar5) ^ uVar3;
    *(uint64_t *)(lVar9 + 0x54) = uVar11;
    uVar5 = uVar5 & uVar3 ^ uVar2;
    *(uint64_t *)(lVar9 + 0x4c) = uVar5;
    uVar8 = (uVar3 | uVar2) ^ uVar8;
    *(uint64_t *)(lVar9 + 0x44) = uVar8;
    arg1 = this_ptr;
    this_ptr = lVar9;
  } while (((uint64_t)unaff_R15 & 0xff) != 0);
  return;
}


// Function: FUN_00e05070
// Address: 00e05070
// Size: 1314 bytes
// Class: GNDistinction

void FUN_00e05070(void)

{
  int64_t lVar1;
  uint uVar2;
  uint *arg1;
  uint *this_ptr;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *this_ptr;
  uVar2 = this_ptr[1];
  uVar4 = this_ptr[2];
  uVar3 = *arg1 +
          (~uVar2 & this_ptr[3]) + this_ptr[4] + (uVar2 & uVar4) + (uVar9 << 5 | uVar9 >> 0x1b) +
          0x5a827999;
  uVar2 = uVar2 << 0x1e | uVar2 >> 2;
  uVar10 = arg1[1] +
           (~uVar9 & uVar4) + this_ptr[3] + (uVar9 & uVar2) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
           0x5a827999;
  uVar5 = uVar9 << 0x1e | uVar9 >> 2;
  uVar9 = arg1[2];
  uVar6 = uVar9 + (~uVar3 & uVar2) + uVar4 + (uVar3 & uVar5) + (uVar10 * 0x20 | uVar10 >> 0x1b) +
          0x5a827999;
  uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar2 = arg1[3] +
          (~uVar10 & uVar5) + uVar2 + (uVar10 & uVar4) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x5a827999
  ;
  uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar8 = arg1[4] +
          (~uVar6 & uVar4) + uVar5 + (uVar6 & uVar10) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar5 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar3 = arg1[5] +
          (~uVar2 & uVar10) + uVar4 + (uVar2 & uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999;
  uVar2 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar10 = arg1[6] +
           (~uVar8 & uVar5) + uVar10 + (uVar8 & uVar2) + (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x5a827999
  ;
  uVar8 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar4 = arg1[7] +
          (~uVar3 & uVar2) + uVar5 + (uVar3 & uVar8) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x5a827999
  ;
  uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar5 = arg1[8] +
          (~uVar10 & uVar8) + uVar2 + (uVar10 & uVar6) + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x5a827999
  ;
  uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar2 = arg1[9] +
          (~uVar4 & uVar6) + uVar8 + (uVar4 & uVar10) + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0x5a827999;
  uVar3 = uVar4 * 0x40000000 | uVar4 >> 2;
  uVar6 = arg1[10] +
          (~uVar5 & uVar10) + uVar6 + (uVar5 & uVar3) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = arg1[0xb] +
          (~uVar2 & uVar3) + uVar10 + (uVar2 & uVar5) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x5a827999;
  uVar3 = (~uVar6 & uVar5) + uVar3 + (uVar6 & uVar4) + (uVar2 * 0x20 | uVar2 >> 0x1b) +
          arg1[0xc] + 0x5a827999;
  uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar7 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = (~uVar2 & uVar4) + uVar5 + (uVar2 & uVar10) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
          arg1[0xd] + 0x5a827999;
  uVar5 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar8 = arg1[0xe] +
          (~uVar3 & uVar10) + uVar4 + (uVar3 & uVar7) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar6 = *arg1 ^ uVar9 ^ arg1[8] ^ arg1[0xd];
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar3 = arg1[0xf] +
          (~uVar2 & uVar7) + uVar10 + (uVar2 & uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999;
  uVar10 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar8 = uVar6 + (~uVar8 & uVar5) + uVar7 + (uVar8 & uVar4) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
          0x5a827999;
  arg1[0x10] = uVar6;
  uVar2 = arg1[9] ^ arg1[0xe] ^ arg1[3] ^ arg1[1];
  uVar7 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  arg1[0x11] = uVar7;
  uVar9 = arg1[10] ^ arg1[0xf] ^ arg1[4] ^ uVar9;
  uVar2 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  uVar5 = uVar7 + (~uVar3 & uVar4) + uVar5 + (uVar3 & uVar10) + (uVar8 * 0x20 | uVar8 >> 0x1b) +
          0x5a827999;
  arg1[0x12] = uVar9;
  uVar9 = uVar9 + (~uVar8 & uVar10) + uVar4 + (uVar8 & uVar2) + (uVar5 * 0x20 | uVar5 >> 0x1b) +
          0x5a827999;
  uVar4 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar3 = uVar6 ^ arg1[0xb] ^ arg1[5] ^ arg1[3];
  uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  arg1[0x13] = uVar3;
  lVar1 = 0;
  uVar3 = (~uVar5 & uVar2) + uVar10 + (uVar5 & uVar4) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar3 +
          0x5a827999;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  do {
    uVar8 = uVar5;
    uVar10 = uVar3;
    uVar6 = uVar4;
    uVar4 = arg1[lVar1 + 0xc] ^ arg1[lVar1 + 0x11] ^ arg1[lVar1 + 6] ^
            arg1[lVar1 + 4];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    arg1[lVar1 + 0x14] = uVar4;
    uVar3 = uVar4 + (uVar8 ^ uVar6 ^ uVar9) + uVar2 + (uVar10 << 5 | uVar10 >> 0x1b) + 0x6ed9eba1;
    uVar5 = uVar9 << 0x1e | uVar9 >> 2;
    lVar1 = lVar1 + 1;
    uVar2 = uVar6;
    uVar9 = uVar10;
    uVar4 = uVar8;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  do {
    uVar4 = uVar5;
    uVar2 = uVar3;
    uVar9 = uVar8;
    uVar3 = arg1[lVar1 + 0x20] ^ arg1[lVar1 + 0x25] ^ arg1[lVar1 + 0x1a] ^
            arg1[lVar1 + 0x18];
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    arg1[lVar1 + 0x28] = uVar3;
    uVar3 = uVar3 + (uVar4 & uVar9 | (uVar4 | uVar9) & uVar10) + uVar6 +
                    (uVar2 << 5 | uVar2 >> 0x1b) + 0x8f1bbcdc;
    uVar5 = uVar10 << 0x1e | uVar10 >> 2;
    lVar1 = lVar1 + 1;
    uVar6 = uVar9;
    uVar10 = uVar2;
    uVar8 = uVar4;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  do {
    uVar10 = uVar5;
    uVar6 = uVar3;
    uVar8 = uVar4;
    uVar4 = arg1[lVar1 + 0x34] ^ arg1[lVar1 + 0x39] ^ arg1[lVar1 + 0x2e] ^
            arg1[lVar1 + 0x2c];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    arg1[lVar1 + 0x3c] = uVar4;
    uVar3 = uVar4 + (uVar10 ^ uVar8 ^ uVar2) + uVar9 + (uVar6 << 5 | uVar6 >> 0x1b) + 0xca62c1d6;
    uVar5 = uVar2 << 0x1e | uVar2 >> 2;
    lVar1 = lVar1 + 1;
    uVar9 = uVar8;
    uVar2 = uVar6;
    uVar4 = uVar10;
  } while (lVar1 != 0x14);
  *this_ptr = uVar3 + *this_ptr;
  this_ptr[1] = uVar6 + this_ptr[1];
  this_ptr[2] = uVar5 + this_ptr[2];
  this_ptr[3] = uVar10 + this_ptr[3];
  this_ptr[4] = this_ptr[4] + uVar8;
  return;
}


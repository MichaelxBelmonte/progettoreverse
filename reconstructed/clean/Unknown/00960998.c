// Function: FUN_00960998
// Address: 00960998
// Size: 7636 bytes
// Class: Unknown

int64_t FUN_00960998(uint64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
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
  uint unaff_ESI;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t *this_ptr;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
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
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t local_130;
  uint64_t local_120;
  uint64_t local_100;
  uint64_t local_f0;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_78 = *this_ptr;
  local_f0 = this_ptr[1];
  local_d0 = this_ptr[2];
  local_90 = this_ptr[3];
  local_38 = this_ptr[4];
  local_120 = this_ptr[5];
  local_60 = this_ptr[6];
  local_e0 = this_ptr[7];
  local_a0 = this_ptr[8];
  local_130 = this_ptr[9];
  local_40 = this_ptr[10];
  local_c8 = this_ptr[0xb];
  uVar2 = this_ptr[0xc];
  local_98 = this_ptr[0xd];
  local_b0 = this_ptr[0xe];
  local_68 = this_ptr[0xf];
  local_48 = this_ptr[0x10];
  local_88 = this_ptr[0x11];
  uVar32 = this_ptr[0x12];
  local_a8 = this_ptr[0x13];
  uVar7 = this_ptr[0x14];
  local_d8 = this_ptr[0x15];
  local_80 = this_ptr[0x16];
  local_100 = this_ptr[0x17];
  local_50 = this_ptr[0x18];
  uVar4 = (uint64_t)(unaff_ESI * 8);
  uVar19 = param_1;
  if (uVar4 <= param_1) {
    do {
      uVar28 = local_40 ^ local_120 ^ local_68 ^ uVar7 ^ local_78;
      uVar8 = local_c8 ^ local_60 ^ local_48 ^ local_d8 ^ local_f0;
      uVar5 = uVar2 ^ local_e0 ^ local_88 ^ local_80 ^ local_d0;
      uVar14 = local_98 ^ local_a0 ^ uVar32 ^ local_100 ^ local_90;
      uVar17 = local_b0 ^ local_130 ^ local_a8 ^ local_50 ^ local_38;
      local_70 = 0xfffffffffffffffa;
      do {
        uVar1 = (uVar14 << 1 | (uint64_t)((int64_t)uVar14 < 0)) ^ uVar8;
        uVar9 = (uVar8 << 1 | (uint64_t)((int64_t)uVar8 < 0)) ^ uVar17;
        uVar18 = (uVar17 << 1 | (uint64_t)((int64_t)uVar17 < 0)) ^ uVar5;
        uVar10 = (uVar5 << 1 | (uint64_t)((int64_t)uVar5 < 0)) ^ uVar28;
        uVar14 = (uVar28 << 1 | (uint64_t)((int64_t)uVar28 < 0)) ^ uVar14;
        uVar5 = (local_60 ^ uVar10) << 0x2c | (local_60 ^ uVar10) >> 0x14;
        local_78 = local_78 ^ uVar9;
        uVar22 = (uVar2 ^ uVar1) << 0x2b | (uVar2 ^ uVar1) >> 0x15;
        uVar30 = (uVar32 ^ uVar18) << 0x15 | (uVar32 ^ uVar18) >> 0x2b;
        uVar32 = (local_50 ^ uVar14) << 0xe | (local_50 ^ uVar14) >> 0x32;
        uVar2 = uVar30 & uVar32 ^ uVar22;
        uVar23 = (uVar22 ^ 0xffffffffffffffff | uVar30) ^ uVar5;
        uVar15 = (local_90 ^ uVar18) << 0x1c | (local_90 ^ uVar18) >> 0x24;
        uVar31 = (local_130 ^ uVar14) << 0x14 | (local_130 ^ uVar14) >> 0x2c;
        uVar17 = (local_40 ^ uVar9) << 3 | (local_40 ^ uVar9) >> 0x3d;
        uVar30 = (local_78 | uVar32) ^ uVar30;
        uVar24 = (local_48 ^ uVar10) << 0x2d | (local_48 ^ uVar10) >> 0x13;
        uVar32 = uVar5 & local_78 ^ uVar32;
        uVar27 = (local_80 ^ uVar1) << 0x3d | (local_80 ^ uVar1) >> 3;
        uVar8 = (uVar31 | uVar17) ^ uVar15;
        uVar3 = (uVar27 ^ 0xffffffffffffffff | uVar24) ^ uVar17;
        uVar17 = uVar17 & uVar24 ^ uVar31;
        uVar6 = (local_f0 ^ uVar10) << 1 | (uint64_t)((int64_t)(local_f0 ^ uVar10) < 0);
        uVar24 = (uVar15 | uVar27) ^ uVar24;
        uVar28 = (local_e0 ^ uVar1) << 6 | (local_e0 ^ uVar1) >> 0x3a;
        uVar27 = uVar31 & uVar15 ^ uVar27;
        uVar11 = (local_98 ^ uVar18) << 0x19 | (local_98 ^ uVar18) >> 0x27;
        uVar15 = (local_a8 ^ uVar14) << 8 | (local_a8 ^ uVar14) >> 0x38;
        uVar36 = (uVar7 ^ uVar9) << 0x12 | (uVar7 ^ uVar9) >> 0x2e;
        uVar16 = (uVar28 | uVar11) ^ uVar6;
        uVar31 = uVar11 & uVar15 ^ uVar28;
        uVar15 = uVar15 ^ 0xffffffffffffffff;
        uVar7 = (local_38 ^ uVar14) << 0x1b | (local_38 ^ uVar14) >> 0x25;
        uVar25 = uVar28 & uVar6 ^ uVar36;
        uVar20 = (local_120 ^ uVar9) << 0x24 | (local_120 ^ uVar9) >> 0x1c;
        uVar26 = (local_c8 ^ uVar10) << 10 | (local_c8 ^ uVar10) >> 0x36;
        uVar11 = uVar36 & uVar15 ^ uVar11;
        uVar28 = (local_88 ^ uVar1) << 0xf | (local_88 ^ uVar1) >> 0x31;
        uVar15 = (uVar6 | uVar36) ^ uVar15;
        uVar6 = (local_100 ^ uVar18) << 0x38 | (local_100 ^ uVar18) >> 8;
        uVar12 = uVar20 & uVar26 ^ uVar7;
        uVar36 = (uVar26 | uVar28) ^ uVar20;
        uVar28 = uVar28 ^ 0xffffffffffffffff;
        uVar21 = (uVar20 | uVar7) ^ uVar6;
        uVar26 = (uVar6 | uVar28) ^ uVar26;
        uVar28 = uVar7 & uVar6 ^ uVar28;
        uVar33 = (uVar1 ^ local_d0) << 0x3e | (uVar1 ^ local_d0) >> 2;
        uVar1 = (uVar18 ^ local_a0) << 0x37 | (uVar18 ^ local_a0) >> 9;
        uVar18 = (uVar14 ^ local_b0) << 0x27 | (uVar14 ^ local_b0) >> 0x19;
        uVar7 = (uVar9 ^ local_68) << 0x29 | (uVar9 ^ local_68) >> 0x17;
        uVar20 = (uVar10 ^ local_d8) << 2 | (uVar10 ^ local_d8) >> 0x3e;
        uVar14 = uVar1 ^ 0xffffffffffffffff;
        uVar13 = (uVar33 | uVar20) ^ uVar7;
        uVar37 = uVar7 & uVar20 ^ uVar18;
        uVar7 = (uVar18 | uVar7) ^ uVar14;
        uVar6 = uVar23 ^ uVar36 ^ uVar7 ^ uVar17 ^ uVar31;
        uVar34 = uVar26 ^ uVar3 ^ uVar37 ^ uVar2 ^ uVar11;
        uVar29 = uVar18 & uVar14 ^ uVar33;
        uVar20 = uVar1 & uVar33 ^ uVar20;
        uVar1 = (uVar5 | uVar22) ^ local_78 ^ *(uint64_t *)(&UNK_023bf400 + local_70 * 8);
        uVar14 = uVar8 ^ uVar12 ^ uVar29 ^ uVar16 ^ uVar1;
        uVar33 = uVar30 ^ uVar13 ^ uVar24 ^ uVar28 ^ uVar15;
        uVar5 = uVar32 ^ uVar20 ^ uVar27 ^ uVar21 ^ uVar25;
        uVar10 = (uVar33 << 1 | (uint64_t)((int64_t)uVar33 < 0)) ^ uVar6;
        uVar9 = (uVar6 << 1 | (uint64_t)((int64_t)uVar6 < 0)) ^ uVar5;
        uVar6 = (uVar34 << 1 | (uint64_t)((int64_t)uVar34 < 0)) ^ uVar14;
        uVar34 = (uVar5 << 1 | (uint64_t)((int64_t)uVar5 < 0)) ^ uVar34;
        uVar17 = uVar17 ^ uVar6;
        uVar35 = uVar17 << 0x2c | uVar17 >> 0x14;
        uVar33 = (uVar14 << 1 | (uint64_t)((int64_t)uVar14 < 0)) ^ uVar33;
        uVar11 = uVar11 ^ uVar10;
        uVar14 = uVar11 << 0x2b | uVar11 >> 0x15;
        uVar1 = uVar1 ^ uVar9;
        uVar22 = *(uint64_t *)(&UNK_023bf408 + local_70 * 8) ^ uVar1 ^ (uVar35 | uVar14);
        uVar28 = uVar28 ^ uVar34;
        uVar18 = uVar28 << 0x15 | uVar28 >> 0x2b;
        uVar20 = uVar20 ^ uVar33;
        uVar17 = uVar20 << 0xe | uVar20 >> 0x32;
        uVar5 = uVar17 & uVar18 ^ uVar14;
        uVar20 = (uVar14 ^ 0xffffffffffffffff | uVar18) ^ uVar35;
        uVar30 = uVar30 ^ uVar34;
        uVar30 = uVar30 << 0x1c | uVar30 >> 0x24;
        uVar35 = uVar35 & uVar1 ^ uVar17;
        uVar27 = uVar27 ^ uVar33;
        uVar11 = uVar27 << 0x14 | uVar27 >> 0x2c;
        uVar16 = uVar16 ^ uVar9;
        uVar16 = uVar16 << 3 | uVar16 >> 0x3d;
        uVar18 = (uVar17 | uVar1) ^ uVar18;
        uVar36 = uVar36 ^ uVar6;
        uVar1 = uVar36 << 0x2d | uVar36 >> 0x13;
        uVar37 = uVar37 ^ uVar10;
        uVar38 = uVar37 << 0x3d | uVar37 >> 3;
        uVar14 = (uVar38 | uVar30) ^ uVar1;
        uVar23 = uVar23 ^ uVar6;
        uVar36 = uVar23 << 1 | (uint64_t)((int64_t)uVar23 < 0);
        uVar28 = (uVar38 ^ 0xffffffffffffffff | uVar1) ^ uVar16;
        uVar3 = uVar3 ^ uVar10;
        uVar17 = uVar3 << 6 | uVar3 >> 0x3a;
        uVar3 = (uVar11 | uVar16) ^ uVar30;
        uVar15 = uVar15 ^ uVar34;
        uVar27 = uVar15 << 0x19 | uVar15 >> 0x27;
        uVar15 = uVar1 & uVar16 ^ uVar11;
        uVar21 = uVar21 ^ uVar33;
        uVar16 = uVar21 << 8 | uVar21 >> 0x38;
        uVar29 = uVar29 ^ uVar9;
        uVar21 = uVar29 << 0x12 | uVar29 >> 0x2e;
        uVar38 = uVar11 & uVar30 ^ uVar38;
        uVar30 = (uVar17 | uVar27) ^ uVar36;
        uVar1 = uVar16 & uVar27 ^ uVar17;
        uVar16 = uVar16 ^ 0xffffffffffffffff;
        uVar17 = uVar17 & uVar36 ^ uVar21;
        uVar32 = uVar32 ^ uVar33;
        uVar23 = uVar32 << 0x1b | uVar32 >> 0x25;
        uVar8 = uVar8 ^ uVar9;
        uVar11 = uVar8 << 0x24 | uVar8 >> 0x1c;
        uVar27 = uVar21 & uVar16 ^ uVar27;
        uVar31 = uVar31 ^ uVar6;
        uVar32 = uVar31 << 10 | uVar31 >> 0x36;
        uVar16 = (uVar36 | uVar21) ^ uVar16;
        uVar26 = uVar26 ^ uVar10;
        uVar31 = uVar26 << 0xf | uVar26 >> 0x31;
        uVar13 = uVar13 ^ uVar34;
        uVar36 = uVar13 << 0x38 | uVar13 >> 8;
        uVar26 = uVar31 ^ 0xffffffffffffffff;
        uVar29 = (uVar36 | uVar26) ^ uVar32;
        uVar8 = uVar32 & uVar11 ^ uVar23;
        uVar37 = (uVar32 | uVar31) ^ uVar11;
        uVar26 = uVar23 & uVar36 ^ uVar26;
        uVar36 = (uVar11 | uVar23) ^ uVar36;
        uVar10 = uVar10 ^ uVar2;
        uVar34 = uVar34 ^ uVar24;
        uVar33 = uVar33 ^ uVar25;
        uVar9 = uVar9 ^ uVar12;
        uVar12 = uVar10 << 0x3e | uVar10 >> 2;
        uVar31 = uVar34 << 0x37 | uVar34 >> 9;
        uVar10 = uVar33 << 0x27 | uVar33 >> 0x19;
        uVar6 = uVar6 ^ uVar7;
        uVar21 = uVar31 ^ 0xffffffffffffffff;
        uVar2 = uVar10 & uVar21 ^ uVar12;
        uVar13 = uVar3 ^ uVar2 ^ uVar22 ^ uVar30 ^ uVar8;
        uVar11 = uVar9 << 0x29 | uVar9 >> 0x17;
        uVar32 = uVar6 << 2 | uVar6 >> 0x3e;
        uVar7 = uVar32 & uVar11 ^ uVar10;
        uVar21 = (uVar10 | uVar11) ^ uVar21;
        uVar31 = uVar31 & uVar12 ^ uVar32;
        uVar11 = (uVar32 | uVar12) ^ uVar11;
        uVar23 = uVar18 ^ uVar26 ^ uVar11 ^ uVar14 ^ uVar16;
        uVar10 = uVar37 ^ uVar20 ^ uVar15 ^ uVar1 ^ uVar21;
        uVar25 = uVar28 ^ uVar29 ^ uVar7 ^ uVar5 ^ uVar27;
        uVar32 = uVar17 ^ uVar31 ^ uVar35 ^ uVar38 ^ uVar36;
        uVar33 = (uVar10 << 1 | (uint64_t)((int64_t)uVar10 < 0)) ^ uVar32;
        uVar9 = (uVar25 << 1 | (uint64_t)((int64_t)uVar25 < 0)) ^ uVar13;
        uVar15 = uVar15 ^ uVar9;
        uVar39 = uVar15 << 0x2c | uVar15 >> 0x14;
        uVar10 = (uVar23 << 1 | (uint64_t)((int64_t)uVar23 < 0)) ^ uVar10;
        uVar27 = uVar27 ^ uVar10;
        uVar12 = uVar27 << 0x2b | uVar27 >> 0x15;
        uVar25 = (uVar32 << 1 | (uint64_t)((int64_t)uVar32 < 0)) ^ uVar25;
        uVar26 = uVar26 ^ uVar25;
        uVar34 = uVar26 << 0x15 | uVar26 >> 0x2b;
        uVar23 = (uVar13 << 1 | (uint64_t)((int64_t)uVar13 < 0)) ^ uVar23;
        uVar31 = uVar31 ^ uVar23;
        uVar32 = uVar31 << 0xe | uVar31 >> 0x32;
        uVar22 = uVar22 ^ uVar33;
        uVar15 = *(uint64_t *)(&UNK_023bf410 + local_70 * 8) ^ uVar22 ^ (uVar39 | uVar12);
        uVar26 = uVar34 & uVar32 ^ uVar12;
        uVar18 = uVar18 ^ uVar25;
        uVar6 = uVar18 << 0x1c | uVar18 >> 0x24;
        uVar12 = (uVar12 ^ 0xffffffffffffffff | uVar34) ^ uVar39;
        uVar38 = uVar38 ^ uVar23;
        uVar38 = uVar38 << 0x14 | uVar38 >> 0x2c;
        uVar30 = uVar30 ^ uVar33;
        uVar24 = uVar30 << 3 | uVar30 >> 0x3d;
        uVar18 = uVar39 & uVar22 ^ uVar32;
        uVar37 = uVar37 ^ uVar9;
        uVar27 = uVar37 << 0x2d | uVar37 >> 0x13;
        uVar7 = uVar7 ^ uVar10;
        uVar13 = uVar7 << 0x3d | uVar7 >> 3;
        uVar34 = (uVar32 | uVar22) ^ uVar34;
        uVar32 = (uVar13 | uVar6) ^ uVar27;
        uVar31 = (uVar13 ^ 0xffffffffffffffff | uVar27) ^ uVar24;
        uVar30 = (uVar38 | uVar24) ^ uVar6;
        uVar20 = uVar20 ^ uVar9;
        uVar20 = uVar20 << 1 | (uint64_t)((int64_t)uVar20 < 0);
        uVar37 = uVar27 & uVar24 ^ uVar38;
        uVar28 = uVar28 ^ uVar10;
        uVar7 = uVar28 << 6 | uVar28 >> 0x3a;
        uVar16 = uVar16 ^ uVar25;
        uVar24 = uVar16 << 0x19 | uVar16 >> 0x27;
        uVar13 = uVar38 & uVar6 ^ uVar13;
        uVar36 = uVar36 ^ uVar23;
        uVar27 = uVar36 << 8 | uVar36 >> 0x38;
        uVar2 = uVar2 ^ uVar33;
        uVar28 = uVar2 << 0x12 | uVar2 >> 0x2e;
        uVar16 = (uVar7 | uVar24) ^ uVar20;
        uVar6 = uVar24 & uVar27 ^ uVar7;
        uVar27 = uVar27 ^ 0xffffffffffffffff;
        uVar2 = uVar7 & uVar20 ^ uVar28;
        uVar24 = uVar28 & uVar27 ^ uVar24;
        uVar35 = uVar35 ^ uVar23;
        uVar36 = uVar35 << 0x1b | uVar35 >> 0x25;
        uVar27 = (uVar20 | uVar28) ^ uVar27;
        uVar1 = uVar1 ^ uVar9;
        uVar7 = uVar1 << 10 | uVar1 >> 0x36;
        uVar29 = uVar29 ^ uVar10;
        uVar1 = uVar29 << 0xf | uVar29 >> 0x31;
        uVar11 = uVar11 ^ uVar25;
        uVar11 = uVar11 << 0x38 | uVar11 >> 8;
        uVar22 = uVar1 ^ 0xffffffffffffffff;
        uVar20 = (uVar11 | uVar22) ^ uVar7;
        uVar3 = uVar3 ^ uVar33;
        uVar28 = uVar3 << 0x24 | uVar3 >> 0x1c;
        uVar35 = uVar7 & uVar28 ^ uVar36;
        uVar1 = (uVar7 | uVar1) ^ uVar28;
        uVar7 = (uVar28 | uVar36) ^ uVar11;
        uVar22 = uVar11 & uVar36 ^ uVar22;
        uVar10 = uVar10 ^ uVar5;
        uVar25 = uVar25 ^ uVar14;
        uVar23 = uVar23 ^ uVar17;
        uVar33 = uVar33 ^ uVar8;
        uVar9 = uVar9 ^ uVar21;
        uVar14 = uVar25 << 0x37 | uVar25 >> 9;
        uVar11 = uVar23 << 0x27 | uVar23 >> 0x19;
        uVar25 = uVar33 << 0x29 | uVar33 >> 0x17;
        uVar17 = uVar9 << 2 | uVar9 >> 0x3e;
        uVar36 = uVar14 ^ 0xffffffffffffffff;
        uVar3 = uVar17 & uVar25 ^ uVar11;
        uVar5 = (uVar11 | uVar25) ^ uVar36;
        uVar9 = uVar1 ^ uVar5 ^ uVar37 ^ uVar6 ^ uVar12;
        uVar8 = uVar10 << 0x3e | uVar10 >> 2;
        uVar28 = uVar14 & uVar8 ^ uVar17;
        uVar33 = uVar11 & uVar36 ^ uVar8;
        uVar25 = (uVar17 | uVar8) ^ uVar25;
        uVar11 = uVar27 ^ uVar22 ^ uVar34 ^ uVar32 ^ uVar25;
        uVar8 = (uVar11 << 1 | (uint64_t)((int64_t)uVar11 < 0)) ^ uVar9;
        uVar14 = uVar2 ^ uVar7 ^ uVar18 ^ uVar13 ^ uVar28;
        uVar38 = (uVar9 << 1 | (uint64_t)((int64_t)uVar9 < 0)) ^ uVar14;
        uVar17 = uVar24 ^ uVar20 ^ uVar26 ^ uVar31 ^ uVar3;
        uVar10 = (uVar14 << 1 | (uint64_t)((int64_t)uVar14 < 0)) ^ uVar17;
        uVar14 = uVar16 ^ uVar30 ^ uVar35 ^ uVar33 ^ uVar15;
        uVar21 = (uVar17 << 1 | (uint64_t)((int64_t)uVar17 < 0)) ^ uVar14;
        uVar11 = (uVar14 << 1 | (uint64_t)((int64_t)uVar14 < 0)) ^ uVar11;
        uVar37 = uVar37 ^ uVar21;
        uVar9 = uVar37 << 0x2c | uVar37 >> 0x14;
        uVar15 = uVar15 ^ uVar38;
        uVar24 = uVar24 ^ uVar8;
        uVar17 = uVar24 << 0x2b | uVar24 >> 0x15;
        uVar36 = *(uint64_t *)(&UNK_023bf418 + local_70 * 8) ^ uVar15 ^ (uVar9 | uVar17);
        uVar22 = uVar22 ^ uVar10;
        uVar24 = uVar22 << 0x15 | uVar22 >> 0x2b;
        uVar28 = uVar28 ^ uVar11;
        uVar28 = uVar28 << 0xe | uVar28 >> 0x32;
        uVar14 = uVar28 & uVar24 ^ uVar17;
        uVar23 = (uVar17 ^ 0xffffffffffffffff | uVar24) ^ uVar9;
        uVar17 = uVar9 & uVar15 ^ uVar28;
        uVar34 = uVar34 ^ uVar10;
        uVar34 = uVar34 << 0x1c | uVar34 >> 0x24;
        uVar13 = uVar13 ^ uVar11;
        uVar13 = uVar13 << 0x14 | uVar13 >> 0x2c;
        uVar24 = (uVar28 | uVar15) ^ uVar24;
        uVar16 = uVar16 ^ uVar38;
        uVar15 = uVar16 << 3 | uVar16 >> 0x3d;
        uVar1 = uVar1 ^ uVar21;
        uVar29 = uVar1 << 0x2d | uVar1 >> 0x13;
        uVar3 = uVar3 ^ uVar8;
        uVar16 = uVar3 << 0x3d | uVar3 >> 3;
        uVar28 = (uVar13 | uVar15) ^ uVar34;
        uVar1 = (uVar16 ^ 0xffffffffffffffff | uVar29) ^ uVar15;
        uVar15 = uVar15 & uVar29 ^ uVar13;
        uVar12 = uVar12 ^ uVar21;
        uVar9 = uVar12 << 1 | (uint64_t)((int64_t)uVar12 < 0);
        uVar31 = uVar31 ^ uVar8;
        uVar3 = uVar31 << 6 | uVar31 >> 0x3a;
        uVar37 = uVar13 & uVar34 ^ uVar16;
        uVar27 = uVar27 ^ uVar10;
        uVar31 = uVar27 << 0x19 | uVar27 >> 0x27;
        uVar7 = uVar7 ^ uVar11;
        uVar7 = uVar7 << 8 | uVar7 >> 0x38;
        uVar29 = (uVar16 | uVar34) ^ uVar29;
        uVar33 = uVar33 ^ uVar38;
        uVar12 = uVar33 << 0x12 | uVar33 >> 0x2e;
        uVar13 = uVar7 ^ 0xffffffffffffffff;
        uVar16 = uVar12 & uVar13 ^ uVar31;
        uVar7 = uVar7 & uVar31 ^ uVar3;
        uVar27 = uVar3 & uVar9 ^ uVar12;
        uVar33 = (uVar3 | uVar31) ^ uVar9;
        uVar18 = uVar18 ^ uVar11;
        uVar18 = uVar18 << 0x1b | uVar18 >> 0x25;
        uVar30 = uVar30 ^ uVar38;
        uVar3 = uVar30 << 0x24 | uVar30 >> 0x1c;
        uVar13 = (uVar12 | uVar9) ^ uVar13;
        uVar6 = uVar6 ^ uVar21;
        uVar31 = uVar6 << 10 | uVar6 >> 0x36;
        uVar20 = uVar20 ^ uVar8;
        uVar30 = uVar20 << 0xf | uVar20 >> 0x31;
        uVar25 = uVar25 ^ uVar10;
        uVar9 = uVar25 << 0x38 | uVar25 >> 8;
        uVar6 = uVar3 & uVar31 ^ uVar18;
        uVar39 = (uVar31 | uVar30) ^ uVar3;
        uVar30 = uVar30 ^ 0xffffffffffffffff;
        uVar12 = (uVar3 | uVar18) ^ uVar9;
        uVar31 = (uVar9 | uVar30) ^ uVar31;
        uVar30 = uVar18 & uVar9 ^ uVar30;
        uVar8 = uVar8 ^ uVar26;
        uVar10 = uVar10 ^ uVar32;
        uVar11 = uVar11 ^ uVar2;
        uVar38 = uVar38 ^ uVar35;
        uVar21 = uVar21 ^ uVar5;
        uVar32 = uVar8 << 0x3e | uVar8 >> 2;
        uVar9 = uVar10 << 0x37 | uVar10 >> 9;
        uVar5 = uVar11 << 0x27 | uVar11 >> 0x19;
        uVar26 = uVar38 << 0x29 | uVar38 >> 0x17;
        uVar11 = uVar21 << 2 | uVar21 >> 0x3e;
        uVar10 = uVar9 ^ 0xffffffffffffffff;
        uVar22 = (uVar11 | uVar32) ^ uVar26;
        uVar8 = uVar26 & uVar11 ^ uVar5;
        uVar3 = uVar5 & uVar10 ^ uVar32;
        uVar2 = uVar36 ^ uVar3 ^ uVar6 ^ uVar33 ^ uVar28;
        uVar10 = (uVar5 | uVar26) ^ uVar10;
        uVar11 = uVar9 & uVar32 ^ uVar11;
        uVar9 = uVar39 ^ uVar7 ^ uVar23 ^ uVar15 ^ uVar10;
        uVar21 = uVar8 ^ uVar14 ^ uVar31 ^ uVar1 ^ uVar16;
        uVar5 = uVar22 ^ uVar24 ^ uVar13 ^ uVar29 ^ uVar30;
        uVar18 = uVar11 ^ uVar37 ^ uVar27 ^ uVar17 ^ uVar12;
        uVar32 = (uVar5 << 1 | (uint64_t)((int64_t)uVar5 < 0)) ^ uVar9;
        uVar34 = (uVar9 << 1 | (uint64_t)((int64_t)uVar9 < 0)) ^ uVar18;
        uVar26 = (uVar21 << 1 | (uint64_t)((int64_t)uVar21 < 0)) ^ uVar2;
        uVar21 = (uVar18 << 1 | (uint64_t)((int64_t)uVar18 < 0)) ^ uVar21;
        uVar15 = uVar15 ^ uVar26;
        uVar9 = uVar15 << 0x2c | uVar15 >> 0x14;
        uVar5 = (uVar2 << 1 | (uint64_t)((int64_t)uVar2 < 0)) ^ uVar5;
        uVar16 = uVar16 ^ uVar32;
        uVar15 = uVar16 << 0x2b | uVar16 >> 0x15;
        uVar36 = uVar36 ^ uVar34;
        uVar18 = *(uint64_t *)(&UNK_023bf420 + local_70 * 8) ^ uVar36 ^ (uVar9 | uVar15);
        uVar30 = uVar30 ^ uVar21;
        uVar16 = uVar30 << 0x15 | uVar30 >> 0x2b;
        uVar11 = uVar11 ^ uVar5;
        uVar2 = uVar11 << 0xe | uVar11 >> 0x32;
        uVar20 = uVar16 & uVar2 ^ uVar15;
        uVar15 = (uVar15 ^ 0xffffffffffffffff | uVar16) ^ uVar9;
        uVar24 = uVar24 ^ uVar21;
        uVar11 = uVar24 << 0x1c | uVar24 >> 0x24;
        uVar9 = uVar9 & uVar36 ^ uVar2;
        uVar37 = uVar37 ^ uVar5;
        uVar35 = uVar37 << 0x14 | uVar37 >> 0x2c;
        uVar33 = uVar33 ^ uVar34;
        uVar25 = uVar33 << 3 | uVar33 >> 0x3d;
        uVar16 = (uVar2 | uVar36) ^ uVar16;
        uVar39 = uVar39 ^ uVar26;
        uVar37 = uVar39 << 0x2d | uVar39 >> 0x13;
        uVar8 = uVar8 ^ uVar32;
        uVar30 = uVar8 << 0x3d | uVar8 >> 3;
        uVar36 = (uVar30 | uVar11) ^ uVar37;
        uVar23 = uVar23 ^ uVar26;
        uVar2 = uVar23 << 1 | (uint64_t)((int64_t)uVar23 < 0);
        uVar24 = (uVar30 ^ 0xffffffffffffffff | uVar37) ^ uVar25;
        uVar1 = uVar1 ^ uVar32;
        uVar33 = uVar1 << 6 | uVar1 >> 0x3a;
        uVar1 = (uVar35 | uVar25) ^ uVar11;
        uVar13 = uVar13 ^ uVar21;
        uVar23 = uVar13 << 0x19 | uVar13 >> 0x27;
        uVar37 = uVar37 & uVar25 ^ uVar35;
        uVar12 = uVar12 ^ uVar5;
        uVar8 = uVar12 << 8 | uVar12 >> 0x38;
        uVar3 = uVar3 ^ uVar34;
        uVar12 = uVar3 << 0x12 | uVar3 >> 0x2e;
        uVar30 = uVar35 & uVar11 ^ uVar30;
        uVar11 = (uVar33 | uVar23) ^ uVar2;
        uVar3 = uVar23 & uVar8 ^ uVar33;
        uVar8 = uVar8 ^ 0xffffffffffffffff;
        uVar33 = uVar33 & uVar2 ^ uVar12;
        uVar23 = uVar12 & uVar8 ^ uVar23;
        uVar8 = (uVar2 | uVar12) ^ uVar8;
        uVar7 = uVar7 ^ uVar26;
        uVar2 = uVar7 << 10 | uVar7 >> 0x36;
        uVar31 = uVar31 ^ uVar32;
        uVar13 = uVar31 << 0xf | uVar31 >> 0x31;
        uVar22 = uVar22 ^ uVar21;
        uVar25 = uVar22 << 0x38 | uVar22 >> 8;
        uVar12 = uVar13 ^ 0xffffffffffffffff;
        uVar22 = (uVar25 | uVar12) ^ uVar2;
        uVar17 = uVar17 ^ uVar5;
        uVar7 = uVar17 << 0x1b | uVar17 >> 0x25;
        uVar28 = uVar28 ^ uVar34;
        uVar17 = uVar28 << 0x24 | uVar28 >> 0x1c;
        uVar31 = uVar2 & uVar17 ^ uVar7;
        uVar2 = (uVar2 | uVar13) ^ uVar17;
        uVar28 = (uVar17 | uVar7) ^ uVar25;
        uVar12 = uVar25 & uVar7 ^ uVar12;
        uVar32 = uVar32 ^ uVar14;
        uVar21 = uVar21 ^ uVar29;
        uVar5 = uVar5 ^ uVar27;
        uVar34 = uVar34 ^ uVar6;
        uVar26 = uVar26 ^ uVar10;
        uVar13 = uVar21 << 0x37 | uVar21 >> 9;
        uVar7 = uVar5 << 0x27 | uVar5 >> 0x19;
        uVar5 = uVar34 << 0x29 | uVar34 >> 0x17;
        uVar6 = uVar26 << 2 | uVar26 >> 0x3e;
        uVar14 = uVar13 ^ 0xffffffffffffffff;
        uVar27 = uVar6 & uVar5 ^ uVar7;
        uVar10 = (uVar7 | uVar5) ^ uVar14;
        uVar17 = uVar2 ^ uVar10 ^ uVar37 ^ uVar3 ^ uVar15;
        uVar32 = uVar32 << 0x3e | uVar32 >> 2;
        uVar21 = uVar13 & uVar32 ^ uVar6;
        uVar7 = uVar7 & uVar14 ^ uVar32;
        uVar5 = (uVar6 | uVar32) ^ uVar5;
        uVar32 = uVar11 ^ uVar1 ^ uVar31 ^ uVar7 ^ uVar18;
        uVar6 = uVar23 ^ uVar22 ^ uVar20 ^ uVar24 ^ uVar27;
        uVar26 = uVar8 ^ uVar12 ^ uVar16 ^ uVar36 ^ uVar5;
        uVar29 = uVar33 ^ uVar28 ^ uVar9 ^ uVar30 ^ uVar21;
        uVar13 = (uVar17 << 1 | (uint64_t)((int64_t)uVar17 < 0)) ^ uVar29;
        uVar14 = (uVar6 << 1 | (uint64_t)((int64_t)uVar6 < 0)) ^ uVar32;
        uVar37 = uVar37 ^ uVar14;
        uVar25 = uVar37 << 0x2c | uVar37 >> 0x14;
        uVar17 = (uVar26 << 1 | (uint64_t)((int64_t)uVar26 < 0)) ^ uVar17;
        uVar23 = uVar23 ^ uVar17;
        uVar34 = uVar23 << 0x2b | uVar23 >> 0x15;
        uVar6 = (uVar29 << 1 | (uint64_t)((int64_t)uVar29 < 0)) ^ uVar6;
        uVar12 = uVar12 ^ uVar6;
        local_90 = uVar12 << 0x15 | uVar12 >> 0x2b;
        uVar26 = (uVar32 << 1 | (uint64_t)((int64_t)uVar32 < 0)) ^ uVar26;
        uVar21 = uVar21 ^ uVar26;
        uVar23 = uVar21 << 0xe | uVar21 >> 0x32;
        uVar18 = uVar18 ^ uVar13;
        local_78 = *(uint64_t *)(&UNK_023bf428 + local_70 * 8) ^ uVar18 ^ (uVar25 | uVar34);
        local_d0 = uVar23 & local_90 ^ uVar34;
        uVar16 = uVar16 ^ uVar6;
        uVar12 = uVar16 << 0x1c | uVar16 >> 0x24;
        local_f0 = (uVar34 ^ 0xffffffffffffffff | local_90) ^ uVar25;
        uVar30 = uVar30 ^ uVar26;
        uVar30 = uVar30 << 0x14 | uVar30 >> 0x2c;
        uVar11 = uVar11 ^ uVar13;
        uVar32 = uVar11 << 3 | uVar11 >> 0x3d;
        local_38 = uVar25 & uVar18 ^ uVar23;
        uVar2 = uVar2 ^ uVar14;
        local_a0 = uVar2 << 0x2d | uVar2 >> 0x13;
        uVar27 = uVar27 ^ uVar17;
        uVar2 = uVar27 << 0x3d | uVar27 >> 3;
        local_90 = (uVar23 | uVar18) ^ local_90;
        local_120 = (uVar30 | uVar32) ^ uVar12;
        local_e0 = (uVar2 ^ 0xffffffffffffffff | local_a0) ^ uVar32;
        local_60 = uVar32 & local_a0 ^ uVar30;
        uVar24 = uVar24 ^ uVar17;
        uVar11 = uVar24 << 6 | uVar24 >> 0x3a;
        local_130 = uVar30 & uVar12 ^ uVar2;
        uVar8 = uVar8 ^ uVar6;
        uVar32 = uVar8 << 0x19 | uVar8 >> 0x27;
        uVar28 = uVar28 ^ uVar26;
        uVar8 = uVar28 << 8 | uVar28 >> 0x38;
        local_a0 = (uVar2 | uVar12) ^ local_a0;
        uVar7 = uVar7 ^ uVar13;
        uVar30 = uVar7 << 0x12 | uVar7 >> 0x2e;
        local_98 = uVar8 ^ 0xffffffffffffffff;
        uVar2 = uVar30 & local_98 ^ uVar32;
        uVar15 = uVar15 ^ uVar14;
        uVar7 = uVar15 << 1 | (uint64_t)((int64_t)uVar15 < 0);
        local_c8 = uVar8 & uVar32 ^ uVar11;
        uVar9 = uVar9 ^ uVar26;
        uVar28 = uVar9 << 0x1b | uVar9 >> 0x25;
        uVar1 = uVar1 ^ uVar13;
        uVar8 = uVar1 << 0x24 | uVar1 >> 0x1c;
        local_b0 = uVar11 & uVar7 ^ uVar30;
        uVar3 = uVar3 ^ uVar14;
        local_88 = uVar3 << 10 | uVar3 >> 0x36;
        local_40 = (uVar11 | uVar32) ^ uVar7;
        uVar22 = uVar22 ^ uVar17;
        uVar32 = uVar22 << 0xf | uVar22 >> 0x31;
        uVar5 = uVar5 ^ uVar6;
        uVar5 = uVar5 << 0x38 | uVar5 >> 8;
        local_98 = (uVar30 | uVar7) ^ local_98;
        local_68 = uVar8 & local_88 ^ uVar28;
        local_48 = (local_88 | uVar32) ^ uVar8;
        uVar32 = uVar32 ^ 0xffffffffffffffff;
        local_a8 = (uVar8 | uVar28) ^ uVar5;
        local_88 = (uVar5 | uVar32) ^ local_88;
        uVar32 = uVar28 & uVar5 ^ uVar32;
        uVar17 = uVar17 ^ uVar20;
        uVar6 = uVar6 ^ uVar36;
        uVar26 = uVar26 ^ uVar33;
        uVar13 = uVar13 ^ uVar31;
        uVar17 = uVar17 << 0x3e | uVar17 >> 2;
        uVar1 = uVar6 << 0x37 | uVar6 >> 9;
        uVar5 = uVar26 << 0x27 | uVar26 >> 0x19;
        uVar8 = uVar13 << 0x29 | uVar13 >> 0x17;
        uVar14 = uVar14 ^ uVar10;
        local_50 = uVar14 << 2 | uVar14 >> 0x3e;
        local_d8 = uVar1 ^ 0xffffffffffffffff;
        local_100 = (local_50 | uVar17) ^ uVar8;
        local_80 = uVar8 & local_50 ^ uVar5;
        uVar7 = uVar5 & local_d8 ^ uVar17;
        uVar28 = local_78 ^ uVar7 ^ local_68 ^ local_40 ^ local_120;
        local_d8 = (uVar5 | uVar8) ^ local_d8;
        local_50 = uVar1 & uVar17 ^ local_50;
        uVar8 = local_48 ^ local_c8 ^ local_f0 ^ local_60 ^ local_d8;
        uVar5 = local_80 ^ local_d0 ^ local_88 ^ local_e0 ^ uVar2;
        uVar14 = local_100 ^ local_90 ^ local_98 ^ local_a0 ^ uVar32;
        uVar17 = local_50 ^ local_130 ^ local_b0 ^ local_38 ^ local_a8;
        local_70 = local_70 + 6;
      } while (local_70 < 0x12);
      if (unaff_ESI < 0x10) {
        if (unaff_ESI < 8) {
          if (unaff_ESI < 4) {
            if (unaff_ESI < 2) {
              if (unaff_ESI == 1) {
                *param_2 = local_78;
              }
            }
            else {
              *param_2 = local_78;
              param_2[1] = ~local_f0;
              if (unaff_ESI != 2) {
                param_2[2] = ~local_d0;
              }
            }
          }
          else {
            *param_2 = local_78;
            param_2[1] = local_f0 ^ 0xffffffffffffffff;
            param_2[2] = local_d0 ^ 0xffffffffffffffff;
            param_2[3] = local_90;
            if (unaff_ESI < 6) {
              if (unaff_ESI == 5) {
                param_2[4] = local_38;
              }
            }
            else {
              param_2[4] = local_38;
              param_2[5] = local_120;
              if (unaff_ESI != 6) {
                param_2[6] = local_60;
              }
            }
          }
        }
        else {
          *param_2 = local_78;
          param_2[1] = local_f0 ^ 0xffffffffffffffff;
          param_2[2] = local_d0 ^ 0xffffffffffffffff;
          param_2[3] = local_90;
          param_2[4] = local_38;
          param_2[5] = local_120;
          param_2[6] = local_60;
          param_2[7] = local_e0;
          if (unaff_ESI < 0xc) {
            if (unaff_ESI < 10) {
              if (unaff_ESI == 9) {
                param_2[8] = ~local_a0;
              }
            }
            else {
              param_2[8] = ~local_a0;
              param_2[9] = local_130;
              if (unaff_ESI != 10) {
                param_2[10] = local_40;
              }
            }
          }
          else {
            param_2[8] = ~local_a0;
            param_2[9] = local_130;
            param_2[10] = local_40;
            param_2[0xb] = local_c8;
            if (unaff_ESI < 0xe) {
              if (unaff_ESI == 0xd) {
                param_2[0xc] = ~uVar2;
              }
            }
            else {
              param_2[0xc] = ~uVar2;
              param_2[0xd] = local_98;
              if (unaff_ESI != 0xe) {
                param_2[0xe] = local_b0;
              }
            }
          }
        }
      }
      else {
        *param_2 = local_78;
        param_2[1] = local_f0 ^ 0xffffffffffffffff;
        param_2[2] = local_d0 ^ 0xffffffffffffffff;
        param_2[3] = local_90;
        param_2[4] = local_38;
        param_2[5] = local_120;
        param_2[6] = local_60;
        param_2[7] = local_e0;
        param_2[8] = local_a0 ^ 0xffffffffffffffff;
        param_2[9] = local_130;
        param_2[10] = local_40;
        param_2[0xb] = local_c8;
        param_2[0xc] = uVar2 ^ 0xffffffffffffffff;
        param_2[0xd] = local_98;
        param_2[0xe] = local_b0;
        param_2[0xf] = local_68;
        if (unaff_ESI < 0x18) {
          if (unaff_ESI < 0x14) {
            if (unaff_ESI < 0x12) {
              if (unaff_ESI == 0x11) {
                param_2[0x10] = local_48;
              }
            }
            else {
              param_2[0x10] = local_48;
              param_2[0x11] = ~local_88;
              if (unaff_ESI != 0x12) {
                param_2[0x12] = uVar32;
              }
            }
          }
          else {
            param_2[0x10] = local_48;
            param_2[0x11] = ~local_88;
            param_2[0x12] = uVar32;
            param_2[0x13] = local_a8;
            if (unaff_ESI < 0x16) {
              if (unaff_ESI == 0x15) {
                param_2[0x14] = ~uVar7;
              }
            }
            else {
              param_2[0x14] = ~uVar7;
              param_2[0x15] = local_d8;
              if (unaff_ESI != 0x16) {
                param_2[0x16] = local_80;
              }
            }
          }
        }
        else {
          param_2[0x10] = local_48;
          param_2[0x11] = local_88 ^ 0xffffffffffffffff;
          param_2[0x12] = uVar32;
          param_2[0x13] = local_a8;
          param_2[0x14] = uVar7 ^ 0xffffffffffffffff;
          param_2[0x15] = local_d8;
          param_2[0x16] = local_80;
          param_2[0x17] = local_100;
          if (unaff_ESI != 0x18) {
            param_2[0x18] = local_50;
          }
        }
      }
      param_2 = param_2 + unaff_ESI;
      uVar19 = uVar19 - uVar4;
    } while (uVar4 <= uVar19);
  }
  *this_ptr = local_78;
  this_ptr[1] = local_f0;
  this_ptr[2] = local_d0;
  this_ptr[3] = local_90;
  this_ptr[4] = local_38;
  this_ptr[5] = local_120;
  this_ptr[6] = local_60;
  this_ptr[7] = local_e0;
  this_ptr[8] = local_a0;
  this_ptr[9] = local_130;
  this_ptr[10] = local_40;
  this_ptr[0xb] = local_c8;
  this_ptr[0xc] = uVar2;
  this_ptr[0xd] = local_98;
  this_ptr[0xe] = local_b0;
  this_ptr[0xf] = local_68;
  this_ptr[0x10] = local_48;
  this_ptr[0x11] = local_88;
  this_ptr[0x12] = uVar32;
  this_ptr[0x13] = local_a8;
  this_ptr[0x14] = uVar7;
  this_ptr[0x15] = local_d8;
  this_ptr[0x16] = local_80;
  this_ptr[0x17] = local_100;
  this_ptr[0x18] = local_50;
  return param_1 - uVar19;
}


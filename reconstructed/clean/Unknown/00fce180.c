// Function: FUN_00fce180
// Address: 00fce180
// Size: 1280 bytes
// Class: Unknown

void FUN_00fce180(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int *arg1;
  uint64_t uVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  int *this_ptr;
  int64_t lVar22;
  int64_t lVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  int64_t lVar36;
  int64_t lVar37;
  
  lVar5 = (int64_t)*arg1;
  lVar22 = (int64_t)arg1[1];
  lVar14 = (int64_t)arg1[2];
  lVar29 = (int64_t)arg1[3];
  lVar26 = (int64_t)arg1[9];
  lVar4 = lVar5 * 2;
  lVar9 = lVar22 * 2;
  lVar10 = lVar29 * 2;
  lVar11 = lVar26 * 0x26;
  lVar1 = lVar14 * 2;
  lVar23 = (int64_t)arg1[4];
  lVar34 = (int64_t)arg1[5];
  lVar17 = lVar34 * 2;
  lVar30 = (int64_t)arg1[6];
  lVar27 = (int64_t)arg1[7];
  lVar21 = lVar27 * 2;
  lVar24 = (int64_t)arg1[8];
  lVar2 = lVar23 * 2;
  lVar35 = lVar27 * 0x26;
  lVar12 = lVar30 * 0x13;
  lVar13 = lVar24 * 0x13;
  lVar6 = lVar34 * lVar34 * 0x26 + lVar5 * lVar5 + lVar12 * lVar2 + lVar35 * lVar10 + lVar1 * lVar13
  ;
  lVar5 = lVar35 * lVar27 + lVar14 * lVar14 + lVar10 * lVar9 + lVar23 * lVar4 + lVar30 * lVar13 * 2;
  uVar7 = lVar6 + lVar9 * lVar11 + 0x2000000;
  lVar3 = lVar12 * lVar17 + lVar4 * lVar22 + lVar35 * lVar23 + lVar13 * lVar10 + lVar11 * lVar14;
  lVar36 = (lVar6 + lVar9 * lVar11) - (uVar7 & 0xfffffffffc000000);
  uVar18 = lVar5 + lVar17 * lVar11 + 0x2000000;
  lVar37 = lVar13 * lVar21 + lVar1 * lVar29 + lVar23 * lVar9 + lVar34 * lVar4 + lVar11 * lVar30;
  lVar8 = (lVar5 + lVar17 * lVar11) - (uVar18 & 0xfffffffffc000000);
  lVar15 = (int64_t)uVar7 >> 0x1a;
  lVar6 = lVar3 + lVar15 + 0x1000000;
  lVar12 = lVar12 * lVar30 + lVar22 * lVar9 + lVar14 * lVar4 + lVar35 * lVar17 + lVar2 * lVar13 +
           lVar10 * lVar11;
  lVar31 = (int64_t)uVar18 >> 0x1a;
  lVar16 = lVar37 + lVar31 + 0x1000000;
  lVar28 = lVar13 * lVar24 + lVar29 * lVar10 + lVar23 * lVar1 + lVar17 * lVar9 + lVar30 * lVar4 +
           lVar21 * lVar11;
  lVar19 = lVar6 >> 0x19;
  lVar22 = lVar12 + lVar19 + 0x2000000;
  lVar25 = lVar35 * lVar30 + lVar9 * lVar14 + lVar29 * lVar4 + lVar13 * lVar17 + lVar23 * lVar11;
  lVar32 = lVar16 >> 0x19;
  lVar13 = lVar28 + lVar32 + 0x2000000;
  lVar29 = lVar24 * lVar11 + lVar10 * lVar23 + lVar34 * lVar1 + lVar30 * lVar9 + lVar27 * lVar4;
  lVar35 = lVar22 >> 0x1a;
  lVar14 = lVar35 + lVar25 + 0x1000000;
  lVar33 = lVar13 >> 0x1a;
  lVar20 = lVar29 + lVar33 + 0x1000000;
  lVar17 = lVar11 * lVar26 +
           lVar23 * lVar23 + lVar30 * lVar1 + lVar17 * lVar10 + lVar21 * lVar9 + lVar24 * lVar4;
  lVar11 = lVar14 >> 0x19;
  uVar7 = lVar8 + lVar11 + 0x2000000;
  lVar23 = lVar20 >> 0x19;
  lVar21 = lVar23 + lVar17 + 0x2000000;
  lVar9 = lVar34 * lVar2 + lVar30 * lVar10 + lVar27 * lVar1 + lVar24 * lVar9 + lVar4 * lVar26;
  lVar4 = lVar21 >> 0x1a;
  lVar10 = lVar9 + lVar4 + 0x1000000;
  lVar5 = (lVar10 >> 0x19) * 0x13;
  uVar18 = lVar36 + lVar5 + 0x2000000;
  *this_ptr = ((int)lVar5 + (int)lVar36) - ((uint)uVar18 & 0xfc000000);
  this_ptr[1] = (int)(uVar18 >> 0x1a) + (((int)lVar3 + (int)lVar15) - ((uint)lVar6 & 0xfe000000));
  this_ptr[2] = ((int)lVar12 + (int)lVar19) - ((uint)lVar22 & 0xfc000000);
  this_ptr[3] = ((int)lVar25 + (int)lVar35) - ((uint)lVar14 & 0xfe000000);
  this_ptr[4] = ((int)lVar11 + (int)lVar8) - ((uint)uVar7 & 0xfc000000);
  this_ptr[5] = (int)(uVar7 >> 0x1a) + (((int)lVar37 + (int)lVar31) - ((uint)lVar16 & 0xfe000000));
  this_ptr[6] = ((int)lVar28 + (int)lVar32) - ((uint)lVar13 & 0xfc000000);
  this_ptr[7] = ((int)lVar29 + (int)lVar33) - ((uint)lVar20 & 0xfe000000);
  this_ptr[8] = ((int)lVar17 + (int)lVar23) - ((uint)lVar21 & 0xfc000000);
  this_ptr[9] = ((int)lVar9 + (int)lVar4) - ((uint)lVar10 & 0xfe000000);
  return;
}


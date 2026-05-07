// Function: FUN_009ea5a3
// Address: 009ea5a3
// Size: 4236 bytes
// Class: Unknown

void FUN_009ea5a3(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *arg1;
  uint *this_ptr;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  
  uVar33 = *arg1;
  uVar5 = arg1[1];
  uVar6 = arg1[2];
  uVar1 = *this_ptr;
  uVar2 = this_ptr[1];
  uVar3 = this_ptr[2];
  uVar4 = this_ptr[3];
  uVar32 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar20 = uVar2 << 0x1e | uVar2 >> 2;
  uVar11 = this_ptr[4] + (uVar1 << 5 | uVar1 >> 0x1b) + uVar32 + ((uVar4 ^ uVar3) & uVar2 ^ uVar4)
           + 0x5a827999;
  uVar7 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar17 = uVar1 << 0x1e | uVar1 >> 2;
  uVar8 = uVar4 + uVar7 + ((uVar20 ^ uVar3) & uVar1 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) +
          0x5a827999;
  uVar16 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar12 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar33 = arg1[3];
  uVar5 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar25 = uVar3 + uVar16 + ((uVar20 ^ uVar17) & uVar11 ^ uVar20) + (uVar8 * 0x20 | uVar8 >> 0x1b) +
           0x5a827999;
  uVar9 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar33 = arg1[4];
  uVar6 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar11 = uVar20 + uVar5 + ((uVar12 ^ uVar17) & uVar8 ^ uVar17) + (uVar25 * 0x20 | uVar25 >> 0x1b)
           + 0x5a827999;
  uVar26 = uVar25 * 0x40000000 | uVar25 >> 2;
  uVar33 = arg1[5];
  uVar8 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar20 = uVar17 + uVar6 + ((uVar9 ^ uVar12) & uVar25 ^ uVar12) + (uVar11 * 0x20 | uVar11 >> 0x1b)
           + 0x5a827999;
  uVar17 = uVar12 + uVar8 + ((uVar26 ^ uVar9) & uVar11 ^ uVar9) + (uVar20 * 0x20 | uVar20 >> 0x1b) +
           0x5a827999;
  uVar21 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar33 = arg1[6];
  uVar11 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar25 = uVar20 * 0x40000000 | uVar20 >> 2;
  uVar33 = arg1[7];
  uVar12 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar20 = uVar9 + uVar11 + ((uVar21 ^ uVar26) & uVar20 ^ uVar26) + (uVar17 * 0x20 | uVar17 >> 0x1b)
           + 0x5a827999;
  uVar13 = uVar17 * 0x40000000 | uVar17 >> 2;
  uVar33 = arg1[8];
  uVar9 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar27 = uVar26 + uVar12 + ((uVar25 ^ uVar21) & uVar17 ^ uVar21) +
           (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x5a827999;
  uVar26 = uVar20 * 0x40000000 | uVar20 >> 2;
  uVar33 = arg1[9];
  uVar17 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar22 = uVar21 + uVar9 + ((uVar13 ^ uVar25) & uVar20 ^ uVar25) + (uVar27 * 0x20 | uVar27 >> 0x1b)
           + 0x5a827999;
  uVar21 = uVar25 + uVar17 + ((uVar26 ^ uVar13) & uVar27 ^ uVar13) +
           (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x5a827999;
  uVar28 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar33 = arg1[10];
  uVar20 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar27 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar33 = arg1[0xb];
  uVar25 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar22 = uVar13 + uVar20 + ((uVar28 ^ uVar26) & uVar22 ^ uVar26) +
           (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x5a827999;
  uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar33 = arg1[0xc];
  uVar13 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar21 = uVar26 + uVar25 + ((uVar27 ^ uVar28) & uVar21 ^ uVar28) +
           (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x5a827999;
  uVar14 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar33 = arg1[0xd];
  uVar26 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar28 = uVar28 + uVar13 + ((uVar18 ^ uVar27) & uVar22 ^ uVar27) +
           (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x5a827999;
  uVar22 = uVar27 + uVar26 + ((uVar14 ^ uVar18) & uVar21 ^ uVar18) +
           (uVar28 * 0x20 | uVar28 >> 0x1b) + 0x5a827999;
  uVar27 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar33 = arg1[0xe];
  uVar21 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar29 = uVar28 * 0x40000000 | uVar28 >> 2;
  uVar33 = arg1[0xf];
  uVar23 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar18 = uVar18 + uVar21 + ((uVar27 ^ uVar14) & uVar28 ^ uVar14) +
           (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x5a827999;
  uVar33 = uVar9 ^ uVar26 ^ uVar32 ^ uVar16;
  uVar32 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar34 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar14 = uVar14 + uVar23 + ((uVar29 ^ uVar27) & uVar22 ^ uVar27) +
           (uVar18 * 0x20 | uVar18 >> 0x1b) + 0x5a827999;
  uVar33 = uVar17 ^ uVar21 ^ uVar7 ^ uVar5;
  uVar28 = uVar18 * 0x40000000 | uVar18 >> 2;
  uVar22 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar27 = uVar27 + uVar34 + ((uVar32 ^ uVar29) & uVar18 ^ uVar29) +
           (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x5a827999;
  uVar33 = uVar20 ^ uVar23 ^ uVar16 ^ uVar6;
  uVar16 = uVar14 * 0x40000000 | uVar14 >> 2;
  uVar33 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar29 = uVar29 + uVar22 + ((uVar28 ^ uVar32) & uVar14 ^ uVar32) +
           (uVar27 * 0x20 | uVar27 >> 0x1b) + 0x5a827999;
  uVar14 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar5 = uVar5 ^ uVar8 ^ uVar25 ^ uVar34;
  uVar7 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar5 = uVar32 + uVar33 + ((uVar16 ^ uVar28) & uVar27 ^ uVar28) + (uVar29 * 0x20 | uVar29 >> 0x1b)
          + 0x5a827999;
  uVar18 = uVar28 + uVar7 + ((uVar14 ^ uVar16) & uVar29 ^ uVar16) + (uVar5 * 0x20 | uVar5 >> 0x1b) +
           0x5a827999;
  uVar32 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar6 = uVar6 ^ uVar11 ^ uVar13 ^ uVar22;
  uVar29 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar27 = uVar16 + uVar29 + (uVar32 ^ uVar14 ^ uVar5) + (uVar18 * 0x20 | uVar18 >> 0x1b) +
           0x6ed9eba1;
  uVar28 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar5 = uVar8 ^ uVar12 ^ uVar26 ^ uVar33;
  uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar16 = uVar18 * 0x40000000 | uVar18 >> 2;
  uVar6 = uVar11 ^ uVar9 ^ uVar21 ^ uVar7;
  uVar24 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar8 = uVar14 + uVar5 + (uVar28 ^ uVar32 ^ uVar18) + (uVar27 * 0x20 | uVar27 >> 0x1b) +
          0x6ed9eba1;
  uVar14 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar6 = uVar12 ^ uVar17 ^ uVar23 ^ uVar29;
  uVar12 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar27 = uVar32 + uVar24 + (uVar16 ^ uVar28 ^ uVar27) + (uVar8 * 0x20 | uVar8 >> 0x1b) +
           0x6ed9eba1;
  uVar11 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar6 = uVar9 ^ uVar20 ^ uVar34 ^ uVar5;
  uVar9 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar18 = uVar28 + uVar12 + (uVar14 ^ uVar16 ^ uVar8) + (uVar27 * 0x20 | uVar27 >> 0x1b) +
           0x6ed9eba1;
  uVar16 = uVar16 + uVar9 + (uVar11 ^ uVar14 ^ uVar27) + (uVar18 * 0x20 | uVar18 >> 0x1b) +
           0x6ed9eba1;
  uVar32 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar6 = uVar17 ^ uVar25 ^ uVar22 ^ uVar24;
  uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar28 = uVar18 * 0x40000000 | uVar18 >> 2;
  uVar8 = uVar20 ^ uVar13 ^ uVar33 ^ uVar12;
  uVar27 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  uVar17 = uVar14 + uVar6 + (uVar32 ^ uVar11 ^ uVar18) + (uVar16 * 0x20 | uVar16 >> 0x1b) +
           0x6ed9eba1;
  uVar18 = uVar16 * 0x40000000 | uVar16 >> 2;
  uVar8 = uVar25 ^ uVar26 ^ uVar7 ^ uVar9;
  uVar14 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  uVar11 = uVar11 + uVar27 + (uVar28 ^ uVar32 ^ uVar16) + (uVar17 * 0x20 | uVar17 >> 0x1b) +
           0x6ed9eba1;
  uVar20 = uVar17 * 0x40000000 | uVar17 >> 2;
  uVar8 = uVar13 ^ uVar21 ^ uVar29 ^ uVar6;
  uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  uVar32 = uVar32 + uVar14 + (uVar18 ^ uVar28 ^ uVar17) + (uVar11 * 0x20 | uVar11 >> 0x1b) +
           0x6ed9eba1;
  uVar13 = uVar28 + uVar8 + (uVar20 ^ uVar18 ^ uVar11) + (uVar32 * 0x20 | uVar32 >> 0x1b) +
           0x6ed9eba1;
  uVar17 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar11 = uVar26 ^ uVar23 ^ uVar5 ^ uVar27;
  uVar25 = uVar11 << 1 | (uint)((int)uVar11 < 0);
  uVar30 = uVar32 * 0x40000000 | uVar32 >> 2;
  uVar11 = uVar21 ^ uVar34 ^ uVar24 ^ uVar14;
  uVar16 = uVar11 << 1 | (uint)((int)uVar11 < 0);
  uVar26 = uVar18 + uVar25 + (uVar17 ^ uVar20 ^ uVar32) + (uVar13 * 0x20 | uVar13 >> 0x1b) +
           0x6ed9eba1;
  uVar28 = uVar13 * 0x40000000 | uVar13 >> 2;
  uVar11 = uVar23 ^ uVar22 ^ uVar12 ^ uVar8;
  uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
  uVar13 = uVar20 + uVar16 + (uVar30 ^ uVar17 ^ uVar13) + (uVar26 * 0x20 | uVar26 >> 0x1b) +
           0x6ed9eba1;
  uVar18 = uVar26 * 0x40000000 | uVar26 >> 2;
  uVar20 = uVar34 ^ uVar33 ^ uVar9 ^ uVar25;
  uVar34 = uVar20 << 1 | (uint)((int)uVar20 < 0);
  uVar20 = uVar17 + uVar11 + (uVar28 ^ uVar30 ^ uVar26) + (uVar13 * 0x20 | uVar13 >> 0x1b) +
           0x6ed9eba1;
  uVar32 = uVar30 + uVar34 + (uVar18 ^ uVar28 ^ uVar13) + (uVar20 * 0x20 | uVar20 >> 0x1b) +
           0x6ed9eba1;
  uVar21 = uVar13 * 0x40000000 | uVar13 >> 2;
  uVar17 = uVar22 ^ uVar7 ^ uVar6 ^ uVar16;
  uVar13 = uVar17 << 1 | (uint)((int)uVar17 < 0);
  uVar26 = uVar20 * 0x40000000 | uVar20 >> 2;
  uVar33 = uVar33 ^ uVar29 ^ uVar27 ^ uVar11;
  uVar17 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar28 = uVar28 + uVar13 + (uVar21 ^ uVar18 ^ uVar20) + (uVar32 * 0x20 | uVar32 >> 0x1b) +
           0x6ed9eba1;
  uVar30 = uVar32 * 0x40000000 | uVar32 >> 2;
  uVar33 = uVar7 ^ uVar5 ^ uVar14 ^ uVar34;
  uVar23 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar22 = uVar18 + uVar17 + (uVar26 ^ uVar21 ^ uVar32) + (uVar28 * 0x20 | uVar28 >> 0x1b) +
           0x6ed9eba1;
  uVar32 = uVar28 * 0x40000000 | uVar28 >> 2;
  uVar33 = uVar29 ^ uVar24 ^ uVar8 ^ uVar13;
  uVar20 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar7 = uVar21 + uVar23 + (uVar30 ^ uVar26 ^ uVar28) + (uVar22 * 0x20 | uVar22 >> 0x1b) +
          0x6ed9eba1;
  uVar21 = uVar26 + uVar20 + (uVar32 ^ uVar30 ^ uVar22) + (uVar7 * 0x20 | uVar7 >> 0x1b) +
           0x6ed9eba1;
  uVar28 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar33 = uVar5 ^ uVar12 ^ uVar25 ^ uVar17;
  uVar26 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar22 = uVar7 * 0x40000000 | uVar7 >> 2;
  uVar33 = uVar24 ^ uVar9 ^ uVar16 ^ uVar23;
  uVar18 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar5 = uVar30 + uVar26 + (uVar28 ^ uVar32 ^ uVar7) + (uVar21 * 0x20 | uVar21 >> 0x1b) +
          0x6ed9eba1;
  uVar7 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar33 = uVar12 ^ uVar6 ^ uVar11 ^ uVar20;
  uVar33 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar32 = uVar32 + uVar18 + (uVar22 ^ uVar28 ^ uVar21) + (uVar5 * 0x20 | uVar5 >> 0x1b) +
           0x6ed9eba1;
  uVar12 = uVar28 + uVar33 + (uVar7 ^ uVar22 ^ uVar5) + (uVar32 * 0x20 | uVar32 >> 0x1b) +
           0x6ed9eba1;
  uVar29 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar5 = uVar9 ^ uVar27 ^ uVar34 ^ uVar26;
  uVar21 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  iVar15 = uVar22 + uVar21 + (uVar32 & uVar29 | (uVar32 | uVar29) & uVar7) +
           (uVar12 * 0x20 | uVar12 >> 0x1b);
  uVar28 = uVar32 * 0x40000000 | uVar32 >> 2;
  uVar5 = uVar6 ^ uVar14 ^ uVar13 ^ uVar18;
  uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar6 = iVar15 + 0x8f1bbcdc;
  uVar22 = uVar12 * 0x40000000 | uVar12 >> 2;
  iVar10 = uVar7 + uVar5 + (uVar12 & uVar28 | (uVar12 | uVar28) & uVar29) +
           (uVar6 * 0x20 | uVar6 >> 0x1b);
  uVar12 = uVar27 ^ uVar8 ^ uVar17 ^ uVar33;
  uVar32 = uVar12 << 1 | (uint)((int)uVar12 < 0);
  uVar12 = iVar10 + 0x8f1bbcdc;
  iVar31 = uVar29 + uVar32 + (uVar6 & uVar22 | (uVar6 | uVar22) & uVar28) +
           (uVar12 * 0x20 | uVar12 >> 0x1b);
  uVar9 = iVar15 * 0x40000000 | uVar6 >> 2;
  uVar6 = uVar14 ^ uVar25 ^ uVar23 ^ uVar21;
  uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar27 = iVar31 + 0x8f1bbcdc;
  iVar15 = uVar28 + uVar6 + (uVar12 & uVar9 | (uVar12 | uVar9) & uVar22) +
           (uVar27 * 0x20 | uVar27 >> 0x1b);
  uVar12 = iVar10 * 0x40000000 | uVar12 >> 2;
  uVar8 = uVar8 ^ uVar16 ^ uVar20 ^ uVar5;
  uVar29 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  uVar7 = iVar15 + 0x8f1bbcdc;
  iVar19 = uVar22 + uVar29 + (uVar27 & uVar12 | (uVar27 | uVar12) & uVar9) +
           (uVar7 * 0x20 | uVar7 >> 0x1b);
  uVar28 = iVar31 * 0x40000000 | uVar27 >> 2;
  uVar8 = uVar25 ^ uVar11 ^ uVar26 ^ uVar32;
  uVar27 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  uVar25 = iVar19 + 0x8f1bbcdc;
  uVar14 = iVar15 * 0x40000000 | uVar7 >> 2;
  iVar15 = uVar9 + uVar27 + (uVar7 & uVar28 | (uVar7 | uVar28) & uVar12) +
           (uVar25 * 0x20 | uVar25 >> 0x1b);
  uVar8 = uVar16 ^ uVar34 ^ uVar18 ^ uVar6;
  uVar7 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  uVar9 = iVar15 + 0x8f1bbcdc;
  iVar10 = uVar12 + uVar7 + (uVar25 & uVar14 | (uVar25 | uVar14) & uVar28) +
           (uVar9 * 0x20 | uVar9 >> 0x1b);
  uVar22 = iVar19 * 0x40000000 | uVar25 >> 2;
  uVar8 = uVar11 ^ uVar13 ^ uVar33 ^ uVar29;
  uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  uVar11 = iVar10 + 0x8f1bbcdc;
  iVar19 = uVar28 + uVar8 + (uVar9 & uVar22 | (uVar9 | uVar22) & uVar14) +
           (uVar11 * 0x20 | uVar11 >> 0x1b);
  uVar9 = iVar15 * 0x40000000 | uVar9 >> 2;
  uVar12 = uVar34 ^ uVar17 ^ uVar21 ^ uVar27;
  uVar34 = uVar12 << 1 | (uint)((int)uVar12 < 0);
  uVar16 = iVar19 + 0x8f1bbcdc;
  iVar31 = uVar14 + uVar34 + (uVar11 & uVar9 | (uVar11 | uVar9) & uVar22) +
           (uVar16 * 0x20 | uVar16 >> 0x1b);
  uVar12 = iVar10 * 0x40000000 | uVar11 >> 2;
  uVar11 = uVar13 ^ uVar23 ^ uVar5 ^ uVar7;
  uVar25 = uVar11 << 1 | (uint)((int)uVar11 < 0);
  uVar14 = iVar31 + 0x8f1bbcdc;
  uVar28 = iVar19 * 0x40000000 | uVar16 >> 2;
  iVar19 = uVar22 + uVar25 + (uVar16 & uVar12 | (uVar16 | uVar12) & uVar9) +
           (uVar14 * 0x20 | uVar14 >> 0x1b);
  uVar11 = uVar17 ^ uVar20 ^ uVar32 ^ uVar8;
  uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
  uVar13 = iVar19 + 0x8f1bbcdc;
  iVar15 = uVar9 + uVar11 + (uVar14 & uVar28 | (uVar14 | uVar28) & uVar12) +
           (uVar13 * 0x20 | uVar13 >> 0x1b);
  uVar22 = iVar31 * 0x40000000 | uVar14 >> 2;
  uVar9 = uVar23 ^ uVar26 ^ uVar6 ^ uVar34;
  uVar23 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  uVar17 = iVar15 + 0x8f1bbcdc;
  iVar10 = uVar12 + uVar23 + (uVar13 & uVar22 | (uVar13 | uVar22) & uVar28) +
           (uVar17 * 0x20 | uVar17 >> 0x1b);
  uVar13 = iVar19 * 0x40000000 | uVar13 >> 2;
  uVar12 = uVar20 ^ uVar18 ^ uVar29 ^ uVar25;
  uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
  uVar9 = iVar10 + 0x8f1bbcdc;
  iVar31 = uVar28 + uVar12 + (uVar17 & uVar13 | (uVar17 | uVar13) & uVar22) +
           (uVar9 * 0x20 | uVar9 >> 0x1b);
  uVar20 = iVar15 * 0x40000000 | uVar17 >> 2;
  uVar17 = uVar26 ^ uVar33 ^ uVar27 ^ uVar11;
  uVar28 = uVar17 << 1 | (uint)((int)uVar17 < 0);
  uVar26 = iVar31 + 0x8f1bbcdc;
  uVar17 = iVar10 * 0x40000000 | uVar9 >> 2;
  iVar10 = uVar22 + uVar28 + (uVar9 & uVar20 | (uVar9 | uVar20) & uVar13) +
           (uVar26 * 0x20 | uVar26 >> 0x1b);
  uVar9 = uVar18 ^ uVar21 ^ uVar7 ^ uVar23;
  uVar22 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  uVar9 = iVar10 + 0x8f1bbcdc;
  iVar19 = uVar13 + uVar22 + (uVar26 & uVar17 | (uVar26 | uVar17) & uVar20) +
           (uVar9 * 0x20 | uVar9 >> 0x1b);
  uVar24 = iVar31 * 0x40000000 | uVar26 >> 2;
  uVar33 = uVar33 ^ uVar5 ^ uVar8 ^ uVar12;
  uVar14 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar33 = iVar19 + 0x8f1bbcdc;
  iVar15 = uVar20 + uVar14 + (uVar9 & uVar24 | (uVar9 | uVar24) & uVar17) +
           (uVar33 * 0x20 | uVar33 >> 0x1b);
  uVar16 = iVar10 * 0x40000000 | uVar9 >> 2;
  uVar9 = uVar21 ^ uVar32 ^ uVar34 ^ uVar28;
  uVar18 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  uVar20 = iVar15 + 0x8f1bbcdc;
  iVar10 = uVar17 + uVar18 + (uVar33 & uVar16 | (uVar33 | uVar16) & uVar24) +
           (uVar20 * 0x20 | uVar20 >> 0x1b);
  uVar26 = iVar19 * 0x40000000 | uVar33 >> 2;
  uVar33 = uVar5 ^ uVar6 ^ uVar25 ^ uVar22;
  uVar33 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar9 = iVar10 + 0x8f1bbcdc;
  uVar13 = iVar15 * 0x40000000 | uVar20 >> 2;
  iVar19 = uVar24 + uVar33 + (uVar20 & uVar26 | (uVar20 | uVar26) & uVar16) +
           (uVar9 * 0x20 | uVar9 >> 0x1b);
  uVar5 = uVar32 ^ uVar29 ^ uVar11 ^ uVar14;
  uVar17 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar32 = iVar19 + 0x8f1bbcdc;
  iVar15 = uVar16 + uVar17 + (uVar9 & uVar13 | (uVar9 | uVar13) & uVar26) +
           (uVar32 * 0x20 | uVar32 >> 0x1b);
  uVar20 = iVar10 * 0x40000000 | uVar9 >> 2;
  uVar5 = uVar6 ^ uVar27 ^ uVar23 ^ uVar18;
  uVar24 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar21 = iVar15 + 0x8f1bbcdc;
  iVar10 = uVar26 + uVar24 + (uVar32 & uVar20 | (uVar32 | uVar20) & uVar13) +
           (uVar21 * 0x20 | uVar21 >> 0x1b);
  uVar6 = iVar10 + 0x8f1bbcdc;
  uVar30 = iVar19 * 0x40000000 | uVar32 >> 2;
  uVar5 = uVar29 ^ uVar7 ^ uVar12 ^ uVar33;
  uVar32 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar16 = iVar15 * 0x40000000 | uVar21 >> 2;
  uVar5 = uVar27 ^ uVar8 ^ uVar28 ^ uVar17;
  uVar9 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar26 = uVar13 + uVar32 + (uVar30 ^ uVar20 ^ uVar21) + (uVar6 * 0x20 | uVar6 >> 0x1b) +
           0xca62c1d6;
  uVar21 = iVar10 * 0x40000000 | uVar6 >> 2;
  uVar5 = uVar7 ^ uVar34 ^ uVar22 ^ uVar24;
  uVar13 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar6 = uVar20 + uVar9 + (uVar16 ^ uVar30 ^ uVar6) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0xca62c1d6
  ;
  uVar27 = uVar30 + uVar13 + (uVar21 ^ uVar16 ^ uVar26) + (uVar6 * 0x20 | uVar6 >> 0x1b) +
           0xca62c1d6;
  uVar26 = uVar26 * 0x40000000 | uVar26 >> 2;
  uVar5 = uVar8 ^ uVar25 ^ uVar14 ^ uVar32;
  uVar8 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar20 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar5 = uVar34 ^ uVar11 ^ uVar18 ^ uVar9;
  uVar34 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar7 = uVar16 + uVar8 + (uVar26 ^ uVar21 ^ uVar6) + (uVar27 * 0x20 | uVar27 >> 0x1b) + 0xca62c1d6
  ;
  uVar30 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar5 = uVar25 ^ uVar23 ^ uVar33 ^ uVar13;
  uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  uVar6 = uVar21 + uVar34 + (uVar20 ^ uVar26 ^ uVar27) + (uVar7 * 0x20 | uVar7 >> 0x1b) + 0xca62c1d6
  ;
  uVar16 = uVar7 * 0x40000000 | uVar7 >> 2;
  uVar11 = uVar11 ^ uVar12 ^ uVar17 ^ uVar8;
  uVar29 = uVar11 << 1 | (uint)((int)uVar11 < 0);
  uVar25 = uVar26 + uVar5 + (uVar30 ^ uVar20 ^ uVar7) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0xca62c1d6;
  uVar20 = uVar20 + uVar29 + (uVar16 ^ uVar30 ^ uVar6) + (uVar25 * 0x20 | uVar25 >> 0x1b) +
           0xca62c1d6;
  uVar7 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar6 = uVar23 ^ uVar28 ^ uVar24 ^ uVar34;
  uVar11 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar21 = uVar25 * 0x40000000 | uVar25 >> 2;
  uVar6 = uVar12 ^ uVar22 ^ uVar32 ^ uVar5;
  uVar27 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar23 = uVar30 + uVar11 + (uVar7 ^ uVar16 ^ uVar25) + (uVar20 * 0x20 | uVar20 >> 0x1b) +
           0xca62c1d6;
  uVar26 = uVar20 * 0x40000000 | uVar20 >> 2;
  uVar6 = uVar28 ^ uVar14 ^ uVar9 ^ uVar29;
  uVar25 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar6 = uVar16 + uVar27 + (uVar21 ^ uVar7 ^ uVar20) + (uVar23 * 0x20 | uVar23 >> 0x1b) +
          0xca62c1d6;
  uVar30 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar12 = uVar22 ^ uVar18 ^ uVar13 ^ uVar11;
  uVar28 = uVar12 << 1 | (uint)((int)uVar12 < 0);
  uVar20 = uVar7 + uVar25 + (uVar26 ^ uVar21 ^ uVar23) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0xca62c1d6
  ;
  uVar21 = uVar21 + uVar28 + (uVar30 ^ uVar26 ^ uVar6) + (uVar20 * 0x20 | uVar20 >> 0x1b) +
           0xca62c1d6;
  uVar16 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar6 = uVar14 ^ uVar33 ^ uVar8 ^ uVar27;
  uVar12 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar22 = uVar20 * 0x40000000 | uVar20 >> 2;
  uVar6 = uVar18 ^ uVar17 ^ uVar34 ^ uVar25;
  uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar26 = uVar26 + uVar12 + (uVar16 ^ uVar30 ^ uVar20) + (uVar21 * 0x20 | uVar21 >> 0x1b) +
           0xca62c1d6;
  uVar7 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar33 = uVar33 ^ uVar24 ^ uVar5 ^ uVar28;
  uVar20 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar14 = uVar30 + uVar6 + (uVar22 ^ uVar16 ^ uVar21) + (uVar26 * 0x20 | uVar26 >> 0x1b) +
           0xca62c1d6;
  uVar21 = uVar26 * 0x40000000 | uVar26 >> 2;
  uVar33 = uVar17 ^ uVar32 ^ uVar29 ^ uVar12;
  uVar17 = uVar33 << 1 | (uint)((int)uVar33 < 0);
  uVar26 = uVar16 + uVar20 + (uVar7 ^ uVar22 ^ uVar26) + (uVar14 * 0x20 | uVar14 >> 0x1b) +
           0xca62c1d6;
  uVar6 = uVar24 ^ uVar9 ^ uVar11 ^ uVar6;
  uVar16 = uVar14 * 0x40000000 | uVar14 >> 2;
  uVar11 = uVar22 + uVar17 + (uVar21 ^ uVar7 ^ uVar14) + (uVar26 * 0x20 | uVar26 >> 0x1b) +
           0xca62c1d6;
  uVar33 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar20 = uVar32 ^ uVar13 ^ uVar27 ^ uVar20;
  uVar22 = uVar26 * 0x40000000 | uVar26 >> 2;
  uVar6 = uVar20 << 1 | (uint)((int)uVar20 < 0);
  uVar20 = uVar7 + uVar33 + (uVar16 ^ uVar21 ^ uVar26) + (uVar11 * 0x20 | uVar11 >> 0x1b) +
           0xca62c1d6;
  uVar17 = uVar9 ^ uVar8 ^ uVar25 ^ uVar17;
  uVar25 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar11 = uVar21 + uVar6 + (uVar22 ^ uVar16 ^ uVar11) + (uVar20 * 0x20 | uVar20 >> 0x1b) +
           0xca62c1d6;
  uVar33 = uVar34 ^ uVar13 ^ uVar28 ^ uVar33;
  uVar9 = (uVar17 << 1 | (uint)((int)uVar17 < 0)) + uVar16 + (uVar25 ^ uVar22 ^ uVar20) +
          (uVar11 * 0x20 | uVar11 >> 0x1b) + 0xca62c1d6;
  uVar17 = uVar20 * 0x40000000 | uVar20 >> 2;
  uVar6 = uVar5 ^ uVar8 ^ uVar12 ^ uVar6;
  uVar5 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar33 = (uVar33 << 1 | (uint)((int)uVar33 < 0)) + uVar22 + (uVar17 ^ uVar25 ^ uVar11) +
           (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6;
  *this_ptr = (uVar6 << 1 | (uint)((int)uVar6 < 0)) + uVar1 + uVar25 + (uVar5 ^ uVar17 ^ uVar9) +
               (uVar33 * 0x20 | uVar33 >> 0x1b) + 0xca62c1d6;
  this_ptr[1] = uVar33 + uVar2;
  this_ptr[2] = (uVar9 * 0x40000000 | uVar9 >> 2) + uVar3;
  this_ptr[3] = uVar5 + uVar4;
  this_ptr[4] = uVar17 + this_ptr[4];
  return;
}


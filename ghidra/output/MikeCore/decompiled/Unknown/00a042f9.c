// Function: FUN_00a042f9
// Address: 00a042f9
// Size: 5298 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a042f9(void)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  byte bVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  uint uVar52;
  uint uVar53;
  ulonglong uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar57 [16];
  ulonglong uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  byte bVar21;
  
  uVar56 = DAT_028a07c0;
  uVar10 = DAT_028a05d8;
  uVar9 = DAT_028a052c;
  uVar8 = DAT_028a0528;
  uVar7 = DAT_028a0524;
  uVar30 = DAT_028a0520;
  uVar5 = DAT_028a0518;
  uVar14 = DAT_028a0500;
  uVar31 = DAT_028a04fc;
  uVar3 = DAT_028a04f8;
  lVar2 = DAT_028a04d0;
  uVar29 = (ulonglong)DAT_028a0524;
  uVar19 = (ulonglong)DAT_028a0518;
  uVar23 = DAT_028a0518 ^ DAT_028a0524;
  uVar32 = (ulonglong)DAT_028a0520;
  uVar15 = (ulonglong)DAT_028a0528;
  uVar12 = DAT_028a0528 * DAT_028a0520;
  uVar37 = (ulonglong)DAT_028a0500;
  uVar48 = (ulonglong)DAT_028a04fc;
  uVar36 = DAT_028a05d4 >> 0x10;
  uVar55 = DAT_028a04fc + DAT_028a0500;
  uVar16 = (ulonglong)DAT_028a052c;
  uVar18 = (ulonglong)DAT_028a04f8;
  uVar13 = DAT_028a052c - DAT_028a04f8;
  uVar52 = DAT_028a0578 + DAT_028a05d8;
  uVar53 = DAT_028a07ac | DAT_028a0588;
  uVar24 = CONCAT44(DAT_028a0798,DAT_028a0798) ^
           *(ulonglong *)(DAT_028a04d0 - (uVar37 ^ 0xffffff7f)) |
           CONCAT44(DAT_028a0670,DAT_028a0670) ^ *(ulonglong *)(DAT_028a04d0 + -0xc0);
  uVar44 = DAT_028a05e4 * DAT_028a0580 & 0xff;
  DAT_028a06a4 = DAT_028a05e4 * DAT_028a0580 * 0x1000000 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar38 = CONCAT44(DAT_028a06a4,DAT_028a06a4);
  lVar39 = (longlong)DAT_028a0824;
  DAT_028a0504 = uVar12;
  DAT_028a050c = uVar13;
  DAT_028a0514 = uVar55;
  DAT_028a0544 = uVar23;
  *(ulonglong *)(DAT_028a04d0 + -0xb8) = uVar24 ^ uVar38;
  uVar49 = CONCAT44(DAT_028a04dc,DAT_028a04dc);
  uVar40 = (ulonglong)DAT_028a05e4 & 0xff;
  uVar50 = DAT_028a05e4 << 0x18 | uVar40 | uVar40 << 0x10 | uVar40 << 8;
  DAT_028a05e4 = (uint)uVar50;
  uVar50 = uVar50 << 0x20 | uVar50;
  uVar40 = uVar24 ^ *(ulonglong *)(lVar2 - (uVar48 ^ 0x2245ad35)) ^ uVar49;
  *(ulonglong *)(lVar2 + -0x10) = uVar40 ^ uVar50;
  uVar24 = (ulonglong)DAT_028a0580 & 0xff;
  uVar33 = DAT_028a0580 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  DAT_028a0580 = (uint)uVar33;
  uVar33 = uVar33 << 0x20 | uVar33;
  *(ulonglong *)(lVar2 - (ulonglong)(uVar55 ^ 0x2245ad84)) =
       (CONCAT44(DAT_028a0758,DAT_028a0758) ^ *(ulonglong *)(lVar2 - (uVar15 ^ 0x5a08885))) + uVar40
       ^ uVar33;
  uVar24 = (ulonglong)DAT_028a0588 & 0xff;
  uVar41 = DAT_028a0588 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  uVar40 = *(ulonglong *)(lVar2 + -0x10) ^ uVar50;
  DAT_028a0588 = (uint)uVar41;
  bVar1 = (byte)uVar12;
  uVar24 = uVar40 << ((bVar1 ^ 0x29) & 0x3f);
  bVar21 = (byte)uVar5;
  bVar20 = bVar21 ^ 0xdf;
  uVar42 = uVar41 | uVar41 << 0x20;
  uVar40 = uVar40 >> (bVar20 & 0x3f) | uVar24;
  *(ulonglong *)(lVar2 + -0x30) = uVar24 ^ uVar42;
  uVar24 = (ulonglong)uVar53 & 0xff;
  uVar54 = uVar53 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  uVar24 = (ulonglong)DAT_028a0578 & 0xff;
  uVar24 = DAT_028a0578 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  DAT_028a05c4 = (undefined4)uVar54;
  auVar57._4_4_ = DAT_028a07ac;
  auVar57._0_4_ = DAT_028a05d4;
  auVar57._8_8_ = 0;
  auVar57 = pshufb(auVar57,_DAT_023d4e90);
  DAT_028a05d4 = auVar57._0_4_;
  uVar53 = auVar57._4_4_;
  uVar58 = CONCAT44(uVar53,uVar53);
  uVar43 = uVar24 << 0x20 | uVar24;
  DAT_028a07ac = uVar53;
  *(ulonglong *)(lVar2 + -0xb8) = uVar40 ^ uVar58;
  DAT_028a0578 = (uint)uVar24;
  *(ulonglong *)(lVar2 - (ulonglong)(uVar12 ^ 0xc1967479)) =
       uVar33 ^ uVar43 ^ uVar40 ^ *(ulonglong *)(lVar2 + -0x78);
  *(ulonglong *)(lVar2 + -0xf0) =
       CONCAT44(uVar9,uVar14) ^ 0xeaaab478c01e0ee | *(ulonglong *)(lVar2 + -0x70) ^ uVar43;
  uVar17 = (ulonglong)DAT_028a06a0;
  uVar40 = CONCAT44(DAT_028a06a0,DAT_028a06a0) ^ *(ulonglong *)(lVar2 + -0xa8);
  *(ulonglong *)(lVar2 + -0x10) = (uVar49 ^ *(ulonglong *)(lVar2 + -200)) + uVar40 ^ uVar50;
  uVar24 = (ulonglong)DAT_028a07c0 & 0xff;
  uVar24 = DAT_028a07c0 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  DAT_028a07c0 = (uint)uVar24;
  uVar24 = uVar24 << 0x20 | uVar24;
  *(ulonglong *)(lVar2 + -0x80) = uVar40 << (bVar20 & 0x3f) ^ uVar24;
  *(ulonglong *)(lVar2 + -0xc0) =
       ((ulonglong)uVar53 << 0x20 ^ *(ulonglong *)(lVar2 + -0xb8)) >> 0x2f;
  uVar44 = uVar52 & 0xff;
  _DAT_028a07b8 = uVar52 * 0x1000000 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar40 = CONCAT44(_DAT_028a07b8,_DAT_028a07b8);
  *(ulonglong *)(lVar2 - (uVar32 ^ 0xadfd2275)) =
       (uVar17 << 0x20 ^ *(ulonglong *)(lVar2 - (ulonglong)(uVar23 ^ 0x7b5ecab5))) >> 0x20 ^ uVar40;
  uVar17 = (ulonglong)DAT_028a05d8 & 0xff;
  uVar17 = DAT_028a05d8 << 0x18 | uVar17 | uVar17 << 0x10 | uVar17 << 8;
  DAT_028a05d8 = (uint)uVar17;
  uVar17 = uVar17 << 0x20 | uVar17;
  *(ulonglong *)(lVar2 + -0xf0) =
       (*(ulonglong *)(lVar2 - (ulonglong)(uVar55 ^ 0x2245adcc)) ^ uVar40 |
       *(ulonglong *)(lVar2 + -0x80) ^ uVar24) ^ uVar17;
  *(ulonglong *)(lVar2 - (uVar37 ^ 0xffffff37)) =
       (CONCAT44(uVar8,uVar31) ^ 0xfdbe68f2d590a099) +
       (CONCAT44(uVar13,uVar12) ^ 0x15dce5f9f2aa1a30);
  uVar54 = uVar54 << 0x20 | uVar54;
  *(ulonglong *)(lVar2 - (uVar16 ^ 0xf44b8326)) =
       uVar17 ^ uVar50 ^ uVar54 ^ *(ulonglong *)(lVar2 - (uVar29 ^ 0x8ca02f12)) ^
       *(ulonglong *)(lVar2 - (uVar18 ^ 0x27e5aded));
  uVar18 = (*(ulonglong *)(lVar2 + -0xb8) ^ uVar54) +
           (CONCAT44(DAT_028a05dc,DAT_028a05dc) ^ *(ulonglong *)(lVar2 + -0xa0));
  uVar56 = uVar56 ^ DAT_028a0684;
  uVar49 = (ulonglong)DAT_028a0684 & 0xff;
  uVar45 = DAT_028a0684 << 0x18 | uVar49 | uVar49 << 0x10 | uVar49 << 8;
  DAT_028a0684 = (uint)uVar45;
  uVar45 = uVar45 << 0x20 | uVar45;
  *(ulonglong *)(lVar2 + -0xc0) = uVar18 ^ uVar45;
  uVar44 = uVar56 & 0xff;
  uVar56 = uVar56 << 0x18 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar25 = CONCAT44(uVar56,uVar56);
  *(ulonglong *)(lVar2 + -0xa8) =
       (CONCAT44(DAT_028a0614,DAT_028a0614) ^ *(ulonglong *)(lVar2 + -0x28)) +
       (*(ulonglong *)(lVar2 - (uVar19 ^ 0xf7fee587)) ^ uVar33) ^ uVar25;
  uVar49 = (ulonglong)uVar36 & 0xff;
  uVar34 = uVar36 << 0x18 | uVar49 | uVar49 << 0x10 | uVar49 << 8;
  _DAT_028a05ec = (undefined4)uVar34;
  uVar34 = uVar34 << 0x20 | uVar34;
  *(ulonglong *)(lVar2 + -0x80) =
       (*(ulonglong *)(lVar2 - (ulonglong)(uVar12 ^ 0xc19674a1)) ^ uVar25) + uVar18 ^ uVar34;
  uVar36 = DAT_028a07b4;
  uVar49 = (ulonglong)DAT_028a07b4 & 0xff;
  uVar26 = DAT_028a07b4 << 0x18 | uVar49 | uVar49 << 0x10 | uVar49 << 8;
  DAT_028a07b4 = (uint)uVar26;
  uVar26 = uVar26 << 0x20 | uVar26;
  bVar20 = (byte)uVar9;
  *(ulonglong *)(lVar2 - (uVar37 ^ 0xffffffcf)) = uVar18 << ((bVar20 ^ 0x90) & 0x3f) ^ uVar26;
  uVar18 = (ulonglong)(uVar36 >> 0x10) & 0xff;
  uVar49 = (uVar36 >> 0x10) << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  _DAT_028a07ec = (undefined4)uVar49;
  uVar18 = (*(ulonglong *)(lVar2 + -0xc0) ^ uVar45) >> ((bVar21 ^ 0xcd) & 0x3f);
  uVar49 = uVar49 << 0x20 | uVar49;
  *(ulonglong *)(lVar2 + -200) = uVar49 ^ uVar18;
  *(ulonglong *)(lVar2 + -0xf0) = (*(ulonglong *)(lVar2 + -0x30) ^ uVar26 | uVar18) ^ uVar49;
  *(ulonglong *)(lVar2 + -0xa0) =
       uVar17 ^ uVar34 ^ uVar49 ^ *(ulonglong *)(lVar2 - (ulonglong)(uVar23 ^ 0x7b5ecaed)) ^
       *(ulonglong *)(lVar2 + -0x80);
  uVar35 = CONCAT44(DAT_028a0624,DAT_028a0624);
  uVar18 = (CONCAT44(uVar13,uVar3) ^ 0xcc65d5a127e5adf7) + (*(ulonglong *)(lVar2 + -0xd0) ^ uVar35);
  uVar46 = uVar18 ^ uVar42;
  *(ulonglong *)(lVar2 + -0xb8) = uVar46;
  _DAT_028a0594 = (uint)uVar46 ^ _DAT_028a0594;
  uVar36 = _DAT_028a0594 & 0xff;
  _DAT_028a0594 = _DAT_028a0594 << 0x18 | uVar36 | uVar36 << 0x10 | uVar36 << 8;
  uVar51 = (ulonglong)_DAT_028a0594;
  uVar47 = CONCAT44(_DAT_028a0594,_DAT_028a0594);
  *(ulonglong *)(lVar2 + -0x78) = (*(ulonglong *)(lVar2 + -0x70) ^ uVar43) + uVar18 ^ uVar47;
  *(ulonglong *)(lVar2 - (uVar48 ^ 0x2245ad55)) =
       *(ulonglong *)(lVar2 + -0x80) ^ 0x936c3ae5d374ba0e ^ uVar34;
  uVar18 = (CONCAT44(DAT_028a0720,DAT_028a0720) ^ *(ulonglong *)(lVar2 + -0x88)) +
           (CONCAT44(uVar3,uVar13) ^ 0x91f5730da91e5431);
  *(ulonglong *)(lVar2 + -0xc0) = uVar47 ^ uVar18;
  uVar18 = (*(ulonglong *)(lVar2 + -0x10) ^ uVar50) + uVar18;
  auVar59._0_8_ = CONCAT44(DAT_028a05d4,DAT_028a05d4);
  auVar59._8_4_ = uVar53;
  auVar59._12_4_ = uVar53;
  *(ulonglong *)(lVar2 + -0x30) = uVar18 ^ auVar59._0_8_;
  uVar46 = *(ulonglong *)(lVar2 + -0x78) ^ uVar47;
  bVar21 = (byte)uVar8;
  *(ulonglong *)(lVar2 + -200) = uVar18 + uVar46 ^ uVar50;
  *(ulonglong *)(lVar2 + -0xf0) = uVar46 << ((bVar21 ^ 0xe5) & 0x3f) ^ uVar24;
  *(ulonglong *)(lVar2 + -0xb8) =
       (*(ulonglong *)(lVar2 - (ulonglong)(uVar12 ^ 0xc1967471)) ^ uVar47) >>
       (((byte)uVar13 ^ 0x91) & 0x3f) ^ uVar42;
  *(ulonglong *)(lVar2 - (uVar19 ^ 0xf7fee58f)) =
       (CONCAT44(uVar3,uVar55) ^ 0x3190acb0e717a56c) >>
       (((byte)*(undefined4 *)(lVar2 + -0xa0) ^ (byte)uVar10) & 0x3f);
  puVar27 = (ulonglong *)(lVar2 - (ulonglong)(uVar13 ^ 0xcc65d519));
  *(ulonglong *)(lVar2 + -0xa8) =
       (*puVar27 ^ uVar42 | *(ulonglong *)(lVar2 + -0xf0) ^ uVar24) ^ uVar25;
  uVar18 = uVar50 ^ uVar25 ^ *(ulonglong *)(lVar2 - (uVar37 ^ 0xffffff57)) ^
           *(ulonglong *)(lVar2 + -200);
  *(ulonglong *)(lVar2 + -0x10) = uVar18 ^ uVar33;
  puVar28 = (ulonglong *)(lVar2 - (ulonglong)(uVar13 ^ 0xcc65d521));
  *(ulonglong *)(lVar2 + -0x30) = (*puVar28 ^ uVar34) + uVar18 ^ uVar38;
  *(ulonglong *)(lVar2 - (uVar15 ^ 0x5a0888d)) = uVar18 << ((bVar20 ^ 0xaa) & 0x3f) ^ uVar26;
  *(ulonglong *)(lVar2 - (ulonglong)(uVar55 ^ 0x2245ad8c)) =
       (*(ulonglong *)(lVar2 - (uVar15 ^ 0x5a088e5)) ^ uVar33) >> ((bVar21 ^ 0xf9) & 0x3f) ^ uVar58;
  uVar18 = *(ulonglong *)(lVar2 + -0x70) ^ uVar58 |
           *(ulonglong *)(lVar2 - (ulonglong)(uVar23 ^ 0x7b5eca65)) ^ uVar26;
  *(ulonglong *)(lVar2 + -0xf0) = uVar18 ^ uVar50;
  *(ulonglong *)(lVar2 + -0xb8) =
       CONCAT44(uVar31,uVar30) ^ CONCAT44(uVar7,uVar30) ^ 0x22327ee850e5791;
  *(ulonglong *)(lVar2 + -0xa8) =
       uVar38 ^ uVar40 ^ uVar18 ^ *(ulonglong *)(lVar2 - (uVar16 ^ 0xf44b83ae));
  uVar18 = *(ulonglong *)(lVar2 + -0xa0) ^ uVar17;
  *(ulonglong *)(lVar2 + -0x80) =
       (*(ulonglong *)(lVar2 - (uVar37 ^ 0xffffff37)) ^ uVar50) + uVar18 ^ uVar42;
  uVar9 = DAT_028a0530;
  bVar20 = (byte)uVar3;
  *(ulonglong *)(lVar2 + -0x10) =
       (*(ulonglong *)(lVar2 - ((ulonglong)DAT_028a0530 ^ 0x5202dd1a)) ^ uVar17) <<
       ((bVar20 ^ 0xc4) & 0x3f) ^ uVar54;
  *(ulonglong *)(lVar2 - (uVar19 ^ 0xf7fee587)) = uVar18 >> ((bVar1 ^ 0xe) & 0x3f) ^ uVar24;
  uVar18 = *(ulonglong *)(lVar2 - (uVar29 ^ 0x8ca02f9a)) ^ uVar24 |
           *(ulonglong *)(lVar2 + -0x10) ^ uVar54;
  *(ulonglong *)(lVar2 + -0x70) = uVar49 ^ uVar18;
  uVar18 = *(ulonglong *)(lVar2 - (uVar29 ^ 0x8ca02f62)) ^ uVar42 ^ uVar18;
  *(ulonglong *)(lVar2 + -0xb8) = uVar18 ^ uVar47;
  uVar18 = (*(ulonglong *)(lVar2 + -0x30) ^ uVar38) + uVar18;
  *(ulonglong *)(lVar2 + -0xf0) = auVar59._0_8_ ^ uVar18;
  uVar10 = DAT_028a0538;
  uVar46 = (ulonglong)DAT_028a0538;
  uVar49 = (*(ulonglong *)(lVar2 - (uVar48 ^ 0x2245ad45)) ^ uVar47) <<
           (((byte)DAT_028a0538 ^ 0x6f) & 0x3f);
  *(ulonglong *)(lVar2 + -200) = uVar49 ^ uVar54;
  uVar51 = (uVar51 << 0x20 ^ *(ulonglong *)(lVar2 - (uVar48 ^ 0x2245ad45))) >> 0x29;
  uVar49 = uVar49 | uVar51;
  *(ulonglong *)(lVar2 + -0xa0) = uVar51 ^ uVar45;
  *(ulonglong *)(lVar2 + -0x78) = uVar50 ^ uVar49;
  *(ulonglong *)(lVar2 + -0x10) = uVar26 ^ uVar18 ^ uVar49;
  uVar49 = (*(ulonglong *)(lVar2 - (uVar15 ^ 0x5a0885d)) ^ uVar40) +
           (*(ulonglong *)(lVar2 + -0x80) ^ uVar42);
  *(ulonglong *)(lVar2 + -0x70) = uVar49 ^ uVar38;
  uVar50 = (*(ulonglong *)(lVar2 + -0xa8) ^ uVar40) << ((bVar20 ^ 0xd5) & 0x3f);
  *(ulonglong *)(lVar2 + -0x30) = uVar50 ^ uVar43;
  uVar29 = (*(ulonglong *)(lVar2 - (uVar29 ^ 0x8ca02f4a)) ^ uVar40) >> 0x18;
  uVar50 = uVar50 | uVar29;
  *(ulonglong *)(lVar2 + -0xb8) = uVar29 ^ uVar25;
  *(ulonglong *)(lVar2 + -200) = uVar40 ^ uVar50;
  uVar50 = uVar50 ^ uVar49;
  *(ulonglong *)(lVar2 + -0x78) = uVar18 + uVar50 ^ uVar43;
  auVar60._8_8_ = uVar50;
  auVar60._0_8_ = uVar50 << 5;
  *(undefined1 (*) [16])(lVar2 + -0xa8) = auVar60 ^ auVar59;
  uVar11 = DAT_028a053c;
  uVar4 = DAT_028a0508;
  bVar22 = (byte)DAT_028a053c;
  uVar40 = uVar50 >> ((bVar22 ^ 0x43) & 0x3f);
  *(ulonglong *)(lVar2 + -200) = uVar33 ^ uVar40;
  uVar40 = uVar40 | uVar50 << 5;
  *(ulonglong *)(lVar2 + -0xf0) = uVar40 ^ uVar17;
  *(ulonglong *)(lVar2 + -0x80) = (CONCAT44(uVar3,uVar8) ^ 0x99499c51ea5ebdf7) + 0xc93ce3c01a68310f;
  *(ulonglong *)(lVar2 + -0x30) = uVar18 + uVar50 ^ uVar34 ^ uVar40;
  *(ulonglong *)(lVar2 - (uVar37 ^ 0xffffff47)) =
       (*(ulonglong *)(lVar2 - (uVar19 ^ 0xf7fee50f)) ^ uVar17) + uVar40;
  uVar19 = (*(ulonglong *)(lVar2 - (uVar32 ^ 0xadfd2235)) ^ uVar38) +
           (*(ulonglong *)(lVar2 - (ulonglong)(uVar12 ^ 0xc1967419)) ^ uVar26);
  *(ulonglong *)(lVar2 + -0xa0) = uVar19 ^ uVar45;
  uVar40 = *(ulonglong *)(lVar2 + -0x10) ^ uVar26;
  uVar18 = uVar40 << (((byte)uVar13 ^ 0x84) & 0x3f);
  uVar40 = uVar40 >> ((bVar22 ^ 99) & 0x3f);
  *(ulonglong *)(lVar2 + -0xa8) = uVar58 ^ uVar18;
  uVar18 = uVar18 | uVar40;
  *(ulonglong *)(lVar2 + -200) = uVar40 ^ uVar24;
  *(ulonglong *)(lVar2 + -0x80) = uVar18 ^ uVar25;
  *(ulonglong *)(lVar2 - (ulonglong)(uVar55 ^ 0x2245ad0c)) = uVar19 ^ uVar54 ^ uVar18;
  *(ulonglong *)(lVar2 + -0xb8) =
       (CONCAT44(uVar14,uVar9) ^ 0x57b4836bd4d358c4) >> ((bVar1 ^ 0x2c) & 0x3f);
  uVar19 = (*(ulonglong *)(lVar2 + -0xf0) ^ uVar54) + (*(ulonglong *)(lVar2 + -0xc0) ^ uVar47);
  *(ulonglong *)(lVar2 + -0x70) = uVar19 ^ uVar42;
  uVar40 = (CONCAT44(DAT_028a0548,DAT_028a0548) ^ *(ulonglong *)(lVar2 + -0xe0)) +
           (*(ulonglong *)(lVar2 + -0x78) ^ uVar43);
  *(ulonglong *)(lVar2 + -0x10) = uVar40 ^ uVar42;
  uVar8 = DAT_028a0534;
  uVar6 = DAT_028a051c;
  uVar18 = (ulonglong)DAT_028a0534;
  *(ulonglong *)(lVar2 + -200) = uVar40 + uVar19 ^ uVar43;
  uVar36 = DAT_028a0510;
  uVar40 = (ulonglong)DAT_028a0510;
  *(ulonglong *)(lVar2 + -0xb8) = uVar19 << (((byte)DAT_028a0510 ^ 0x8f) & 0x3f) ^ uVar38;
  *(ulonglong *)(lVar2 - (uVar46 ^ 0x90634f88)) =
       (uVar19 ^ uVar42 ^ uVar41 << 0x20) >> 0x27 ^ uVar17;
  *(ulonglong *)(lVar2 + -0xc0) =
       (CONCAT44(uVar30,uVar8) ^ 0xb88650b16eec59c9) +
       (CONCAT44(uVar55,uVar13) ^ 0x26476ac6a6b9de93);
  *(ulonglong *)(lVar2 - (uVar15 ^ 0x5a0888d)) =
       (uVar17 ^ *(ulonglong *)(lVar2 + -0xf0) | uVar38 ^ *(ulonglong *)(lVar2 + -0xb8)) ^ uVar47;
  *(ulonglong *)(lVar2 - (uVar16 ^ 0xf44b831e)) = *(ulonglong *)(lVar2 + -0xc0) | 0x33982f8087ae2664
  ;
  *(ulonglong *)(lVar2 + -0xa8) =
       uVar47 ^ *(ulonglong *)(lVar2 + -0x78) ^ *(ulonglong *)(lVar2 + -200);
  *(ulonglong *)(lVar2 - (ulonglong)(uVar23 ^ 0x7b5eca0d)) =
       (CONCAT44(uVar13,uVar8) ^ 0x288ef334719ddf36) + *(longlong *)(lVar2 + -0xc0);
  *puVar27 = (CONCAT44(uVar6,_DAT_028a0540) ^ 0xafa7ce5c88623573) +
             (CONCAT44(DAT_028a073c,DAT_028a073c) ^ *(ulonglong *)(lVar2 + -0x90)) ^ uVar24;
  *(ulonglong *)(lVar2 + -0xf0) =
       CONCAT44(uVar9,uVar11) ^ 0x844f68889fc9504a | CONCAT44(uVar11,uVar14) ^ 0x3ac05ca4a5636965;
  uVar30 = DAT_028a06b4 ^ (uint)*(ulonglong *)(lVar2 + -0xb8);
  uVar14 = uVar30 & 0xff;
  DAT_028a06b4 = uVar30 << 0x18 | uVar14 | uVar14 << 0x10 | uVar14 << 8;
  uVar17 = CONCAT44(DAT_028a06b4,DAT_028a06b4);
  *(ulonglong *)(lVar2 + -0x80) =
       (uVar34 ^ *(ulonglong *)(lVar2 - (uVar37 ^ 0xffffffcf))) +
       (*(ulonglong *)(lVar2 + -0xb8) ^ uVar24) ^ uVar17;
  *(ulonglong *)(lVar2 + -0x78) =
       (uVar35 ^ *(ulonglong *)(lVar2 + -0xd0)) + (CONCAT44(uVar4,uVar36) ^ 0x4c352ac210092151) ^
       uVar17;
  *(ulonglong *)(lVar2 - (uVar46 ^ 0x90634fb8)) =
       (*(ulonglong *)(lVar2 + -200) ^ uVar43) +
       (uVar42 ^ *(ulonglong *)(lVar2 - (uVar16 ^ 0xf44b83ee)));
  uVar19 = (uVar45 ^ *(ulonglong *)(lVar2 + -0xa0)) + (*(ulonglong *)(lVar2 + -0x78) ^ uVar17);
  *(ulonglong *)(lVar2 + -0x10) = uVar19 ^ uVar17;
  *(ulonglong *)(lVar2 + -0xf0) =
       (*(ulonglong *)(lVar2 - (uVar40 ^ 0x3c31f16)) ^ uVar17) + uVar19 ^ uVar17;
  *(ulonglong *)(lVar2 + -0x30) =
       (CONCAT44(uVar10,uVar7) ^ 0xcdb177e39b6b5200) + (CONCAT44(uVar31,uVar6) ^ 0x6dc25b6146ebc319)
  ;
  uVar36 = *(uint *)(&DAT_023d0570 + lVar39);
  uVar19 = *(ulonglong *)(lVar2 + -0x80) ^ uVar17;
  *(ulonglong *)(lVar2 + -0xb8) = uVar19 << ((bVar20 ^ 0xdc) & 0x3f) ^ uVar54;
  *(ulonglong *)(lVar2 - (uVar18 ^ 0x18017a70)) = uVar19 >> 0x1f ^ uVar24;
  uVar19 = uVar24 ^ *(ulonglong *)(lVar2 + -0x70) | uVar54 ^ *(ulonglong *)(lVar2 + -0xb8);
  *(ulonglong *)(lVar2 + -0xc0) = uVar25 ^ uVar19;
  uVar19 = uVar17 ^ uVar26 ^ *(ulonglong *)(lVar2 + -0xf0) ^ uVar19;
  *(ulonglong *)(lVar2 + -0xa0) = uVar19;
  uVar14 = DAT_028a069c ^ DAT_028a07cc;
  uVar24 = (ulonglong)DAT_028a07cc & 0xff;
  uVar24 = DAT_028a07cc << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  DAT_028a07cc = (uint)uVar24;
  *(ulonglong *)(lVar2 + -0x10) =
       (uVar24 << 0x20 | uVar24) ^
       (*(ulonglong *)(lVar2 - (ulonglong)(uVar23 ^ 0x7b5ecabd)) ^ uVar26) +
       (uVar43 ^ *(ulonglong *)(lVar2 + -200));
  uVar31 = uVar14 & 0xff;
  DAT_028a07a8 = uVar14 << 0x18 | uVar31 | uVar31 << 0x10 | uVar31 << 8;
  uVar40 = CONCAT44(DAT_028a07a8,DAT_028a07a8);
  *(ulonglong *)(lVar2 + -0x30) =
       (*(ulonglong *)(lVar2 - ((ulonglong)_DAT_028a0540 ^ 0x886235d8)) ^ uVar26) <<
       ((bVar21 ^ 0xdb) & 0x3f) ^ uVar40;
  uVar24 = (ulonglong)DAT_028a069c & 0xff;
  uVar24 = DAT_028a069c << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  DAT_028a069c = (uint)uVar24;
  *puVar28 = (uVar24 << 0x20 | uVar24) ^ (uVar19 ^ uVar26) >> (((byte)uVar23 ^ 0xf) & 0x3f);
  *(ulonglong *)(lVar2 - (uVar15 ^ 0x5a08885)) =
       uVar40 ^ *(ulonglong *)(lVar2 - (uVar48 ^ 0x2245adcd)) |
       CONCAT44(uVar5,uVar6) ^ 0xdc0f3375dc7c5a43;
  *(uint *)(&DAT_028a0820 + (longlong)(int)(uVar36 ^ uVar3) * 4) =
       *(uint *)(&DAT_023d0560 + (uVar16 ^ 0xf44b8396) + lVar39) ^ uVar13;
  return;
}



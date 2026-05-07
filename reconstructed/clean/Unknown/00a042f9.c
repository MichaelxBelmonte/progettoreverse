// Function: FUN_00a042f9
// Address: 00a042f9
// Size: 5298 bytes
// Class: Unknown

void FUN_00a042f9(void)

{
  byte bVar1;
  int64_t lVar2;
  uint uVar3;
  uint32_t uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint32_t uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  byte bVar20;
  byte bVar22;
  uint uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t *puVar27;
  uint64_t *puVar28;
  uint64_t uVar29;
  uint uVar30;
  uint uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  int64_t lVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  uint64_t uVar43;
  uint uVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  uint64_t uVar51;
  uint uVar52;
  uint uVar53;
  uint64_t uVar54;
  uint uVar55;
  uint uVar56;
  uint8_t auVar57 [16];
  uint64_t uVar58;
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  byte bVar21;
  
  uVar56 = g_028a07c0;
  uVar10 = g_028a05d8;
  uVar9 = g_028a052c;
  uVar8 = g_028a0528;
  uVar7 = g_028a0524;
  uVar30 = g_028a0520;
  uVar5 = g_028a0518;
  uVar14 = g_028a0500;
  uVar31 = g_028a04fc;
  uVar3 = g_028a04f8;
  lVar2 = g_028a04d0;
  uVar29 = (uint64_t)g_028a0524;
  uVar19 = (uint64_t)g_028a0518;
  uVar23 = g_028a0518 ^ g_028a0524;
  uVar32 = (uint64_t)g_028a0520;
  uVar15 = (uint64_t)g_028a0528;
  uVar12 = g_028a0528 * g_028a0520;
  uVar37 = (uint64_t)g_028a0500;
  uVar48 = (uint64_t)g_028a04fc;
  uVar36 = g_028a05d4 >> 0x10;
  uVar55 = g_028a04fc + g_028a0500;
  uVar16 = (uint64_t)g_028a052c;
  uVar18 = (uint64_t)g_028a04f8;
  uVar13 = g_028a052c - g_028a04f8;
  uVar52 = g_028a0578 + g_028a05d8;
  uVar53 = g_028a07ac | g_028a0588;
  uVar24 = CONCAT44(g_028a0798,g_028a0798) ^
           *(uint64_t *)(g_028a04d0 - (uVar37 ^ 0xffffff7f)) |
           CONCAT44(g_028a0670,g_028a0670) ^ *(uint64_t *)(g_028a04d0 + -0xc0);
  uVar44 = g_028a05e4 * g_028a0580 & 0xff;
  g_028a06a4 = g_028a05e4 * g_028a0580 * 0x1000000 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar38 = CONCAT44(g_028a06a4,g_028a06a4);
  lVar39 = (int64_t)g_028a0824;
  g_028a0504 = uVar12;
  g_028a050c = uVar13;
  g_028a0514 = uVar55;
  g_028a0544 = uVar23;
  *(uint64_t *)(g_028a04d0 + -0xb8) = uVar24 ^ uVar38;
  uVar49 = CONCAT44(g_028a04dc,g_028a04dc);
  uVar40 = (uint64_t)g_028a05e4 & 0xff;
  uVar50 = g_028a05e4 << 0x18 | uVar40 | uVar40 << 0x10 | uVar40 << 8;
  g_028a05e4 = (uint)uVar50;
  uVar50 = uVar50 << 0x20 | uVar50;
  uVar40 = uVar24 ^ *(uint64_t *)(lVar2 - (uVar48 ^ 0x2245ad35)) ^ uVar49;
  *(uint64_t *)(lVar2 + -0x10) = uVar40 ^ uVar50;
  uVar24 = (uint64_t)g_028a0580 & 0xff;
  uVar33 = g_028a0580 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  g_028a0580 = (uint)uVar33;
  uVar33 = uVar33 << 0x20 | uVar33;
  *(uint64_t *)(lVar2 - (uint64_t)(uVar55 ^ 0x2245ad84)) =
       (CONCAT44(g_028a0758,g_028a0758) ^ *(uint64_t *)(lVar2 - (uVar15 ^ 0x5a08885))) + uVar40
       ^ uVar33;
  uVar24 = (uint64_t)g_028a0588 & 0xff;
  uVar41 = g_028a0588 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  uVar40 = *(uint64_t *)(lVar2 + -0x10) ^ uVar50;
  g_028a0588 = (uint)uVar41;
  bVar1 = (byte)uVar12;
  uVar24 = uVar40 << ((bVar1 ^ 0x29) & 0x3f);
  bVar21 = (byte)uVar5;
  bVar20 = bVar21 ^ 0xdf;
  uVar42 = uVar41 | uVar41 << 0x20;
  uVar40 = uVar40 >> (bVar20 & 0x3f) | uVar24;
  *(uint64_t *)(lVar2 + -0x30) = uVar24 ^ uVar42;
  uVar24 = (uint64_t)uVar53 & 0xff;
  uVar54 = uVar53 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  uVar24 = (uint64_t)g_028a0578 & 0xff;
  uVar24 = g_028a0578 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  g_028a05c4 = (uint32_t)uVar54;
  auVar57._4_4_ = g_028a07ac;
  auVar57._0_4_ = g_028a05d4;
  auVar57._8_8_ = 0;
  auVar57 = pshufb(auVar57,g_023d4e90);
  g_028a05d4 = auVar57._0_4_;
  uVar53 = auVar57._4_4_;
  uVar58 = CONCAT44(uVar53,uVar53);
  uVar43 = uVar24 << 0x20 | uVar24;
  g_028a07ac = uVar53;
  *(uint64_t *)(lVar2 + -0xb8) = uVar40 ^ uVar58;
  g_028a0578 = (uint)uVar24;
  *(uint64_t *)(lVar2 - (uint64_t)(uVar12 ^ 0xc1967479)) =
       uVar33 ^ uVar43 ^ uVar40 ^ *(uint64_t *)(lVar2 + -0x78);
  *(uint64_t *)(lVar2 + -0xf0) =
       CONCAT44(uVar9,uVar14) ^ 0xeaaab478c01e0ee | *(uint64_t *)(lVar2 + -0x70) ^ uVar43;
  uVar17 = (uint64_t)g_028a06a0;
  uVar40 = CONCAT44(g_028a06a0,g_028a06a0) ^ *(uint64_t *)(lVar2 + -0xa8);
  *(uint64_t *)(lVar2 + -0x10) = (uVar49 ^ *(uint64_t *)(lVar2 + -200)) + uVar40 ^ uVar50;
  uVar24 = (uint64_t)g_028a07c0 & 0xff;
  uVar24 = g_028a07c0 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  g_028a07c0 = (uint)uVar24;
  uVar24 = uVar24 << 0x20 | uVar24;
  *(uint64_t *)(lVar2 + -0x80) = uVar40 << (bVar20 & 0x3f) ^ uVar24;
  *(uint64_t *)(lVar2 + -0xc0) =
       ((uint64_t)uVar53 << 0x20 ^ *(uint64_t *)(lVar2 + -0xb8)) >> 0x2f;
  uVar44 = uVar52 & 0xff;
  g_028a07b8 = uVar52 * 0x1000000 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar40 = CONCAT44(g_028a07b8,g_028a07b8);
  *(uint64_t *)(lVar2 - (uVar32 ^ 0xadfd2275)) =
       (uVar17 << 0x20 ^ *(uint64_t *)(lVar2 - (uint64_t)(uVar23 ^ 0x7b5ecab5))) >> 0x20 ^ uVar40;
  uVar17 = (uint64_t)g_028a05d8 & 0xff;
  uVar17 = g_028a05d8 << 0x18 | uVar17 | uVar17 << 0x10 | uVar17 << 8;
  g_028a05d8 = (uint)uVar17;
  uVar17 = uVar17 << 0x20 | uVar17;
  *(uint64_t *)(lVar2 + -0xf0) =
       (*(uint64_t *)(lVar2 - (uint64_t)(uVar55 ^ 0x2245adcc)) ^ uVar40 |
       *(uint64_t *)(lVar2 + -0x80) ^ uVar24) ^ uVar17;
  *(uint64_t *)(lVar2 - (uVar37 ^ 0xffffff37)) =
       (CONCAT44(uVar8,uVar31) ^ 0xfdbe68f2d590a099) +
       (CONCAT44(uVar13,uVar12) ^ 0x15dce5f9f2aa1a30);
  uVar54 = uVar54 << 0x20 | uVar54;
  *(uint64_t *)(lVar2 - (uVar16 ^ 0xf44b8326)) =
       uVar17 ^ uVar50 ^ uVar54 ^ *(uint64_t *)(lVar2 - (uVar29 ^ 0x8ca02f12)) ^
       *(uint64_t *)(lVar2 - (uVar18 ^ 0x27e5aded));
  uVar18 = (*(uint64_t *)(lVar2 + -0xb8) ^ uVar54) +
           (CONCAT44(g_028a05dc,g_028a05dc) ^ *(uint64_t *)(lVar2 + -0xa0));
  uVar56 = uVar56 ^ g_028a0684;
  uVar49 = (uint64_t)g_028a0684 & 0xff;
  uVar45 = g_028a0684 << 0x18 | uVar49 | uVar49 << 0x10 | uVar49 << 8;
  g_028a0684 = (uint)uVar45;
  uVar45 = uVar45 << 0x20 | uVar45;
  *(uint64_t *)(lVar2 + -0xc0) = uVar18 ^ uVar45;
  uVar44 = uVar56 & 0xff;
  uVar56 = uVar56 << 0x18 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar25 = CONCAT44(uVar56,uVar56);
  *(uint64_t *)(lVar2 + -0xa8) =
       (CONCAT44(g_028a0614,g_028a0614) ^ *(uint64_t *)(lVar2 + -0x28)) +
       (*(uint64_t *)(lVar2 - (uVar19 ^ 0xf7fee587)) ^ uVar33) ^ uVar25;
  uVar49 = (uint64_t)uVar36 & 0xff;
  uVar34 = uVar36 << 0x18 | uVar49 | uVar49 << 0x10 | uVar49 << 8;
  g_028a05ec = (uint32_t)uVar34;
  uVar34 = uVar34 << 0x20 | uVar34;
  *(uint64_t *)(lVar2 + -0x80) =
       (*(uint64_t *)(lVar2 - (uint64_t)(uVar12 ^ 0xc19674a1)) ^ uVar25) + uVar18 ^ uVar34;
  uVar36 = g_028a07b4;
  uVar49 = (uint64_t)g_028a07b4 & 0xff;
  uVar26 = g_028a07b4 << 0x18 | uVar49 | uVar49 << 0x10 | uVar49 << 8;
  g_028a07b4 = (uint)uVar26;
  uVar26 = uVar26 << 0x20 | uVar26;
  bVar20 = (byte)uVar9;
  *(uint64_t *)(lVar2 - (uVar37 ^ 0xffffffcf)) = uVar18 << ((bVar20 ^ 0x90) & 0x3f) ^ uVar26;
  uVar18 = (uint64_t)(uVar36 >> 0x10) & 0xff;
  uVar49 = (uVar36 >> 0x10) << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  g_028a07ec = (uint32_t)uVar49;
  uVar18 = (*(uint64_t *)(lVar2 + -0xc0) ^ uVar45) >> ((bVar21 ^ 0xcd) & 0x3f);
  uVar49 = uVar49 << 0x20 | uVar49;
  *(uint64_t *)(lVar2 + -200) = uVar49 ^ uVar18;
  *(uint64_t *)(lVar2 + -0xf0) = (*(uint64_t *)(lVar2 + -0x30) ^ uVar26 | uVar18) ^ uVar49;
  *(uint64_t *)(lVar2 + -0xa0) =
       uVar17 ^ uVar34 ^ uVar49 ^ *(uint64_t *)(lVar2 - (uint64_t)(uVar23 ^ 0x7b5ecaed)) ^
       *(uint64_t *)(lVar2 + -0x80);
  uVar35 = CONCAT44(g_028a0624,g_028a0624);
  uVar18 = (CONCAT44(uVar13,uVar3) ^ 0xcc65d5a127e5adf7) + (*(uint64_t *)(lVar2 + -0xd0) ^ uVar35);
  uVar46 = uVar18 ^ uVar42;
  *(uint64_t *)(lVar2 + -0xb8) = uVar46;
  g_028a0594 = (uint)uVar46 ^ g_028a0594;
  uVar36 = g_028a0594 & 0xff;
  g_028a0594 = g_028a0594 << 0x18 | uVar36 | uVar36 << 0x10 | uVar36 << 8;
  uVar51 = (uint64_t)g_028a0594;
  uVar47 = CONCAT44(g_028a0594,g_028a0594);
  *(uint64_t *)(lVar2 + -0x78) = (*(uint64_t *)(lVar2 + -0x70) ^ uVar43) + uVar18 ^ uVar47;
  *(uint64_t *)(lVar2 - (uVar48 ^ 0x2245ad55)) =
       *(uint64_t *)(lVar2 + -0x80) ^ 0x936c3ae5d374ba0e ^ uVar34;
  uVar18 = (CONCAT44(g_028a0720,g_028a0720) ^ *(uint64_t *)(lVar2 + -0x88)) +
           (CONCAT44(uVar3,uVar13) ^ 0x91f5730da91e5431);
  *(uint64_t *)(lVar2 + -0xc0) = uVar47 ^ uVar18;
  uVar18 = (*(uint64_t *)(lVar2 + -0x10) ^ uVar50) + uVar18;
  auVar59._0_8_ = CONCAT44(g_028a05d4,g_028a05d4);
  auVar59._8_4_ = uVar53;
  auVar59._12_4_ = uVar53;
  *(uint64_t *)(lVar2 + -0x30) = uVar18 ^ auVar59._0_8_;
  uVar46 = *(uint64_t *)(lVar2 + -0x78) ^ uVar47;
  bVar21 = (byte)uVar8;
  *(uint64_t *)(lVar2 + -200) = uVar18 + uVar46 ^ uVar50;
  *(uint64_t *)(lVar2 + -0xf0) = uVar46 << ((bVar21 ^ 0xe5) & 0x3f) ^ uVar24;
  *(uint64_t *)(lVar2 + -0xb8) =
       (*(uint64_t *)(lVar2 - (uint64_t)(uVar12 ^ 0xc1967471)) ^ uVar47) >>
       (((byte)uVar13 ^ 0x91) & 0x3f) ^ uVar42;
  *(uint64_t *)(lVar2 - (uVar19 ^ 0xf7fee58f)) =
       (CONCAT44(uVar3,uVar55) ^ 0x3190acb0e717a56c) >>
       (((byte)*(void*)(lVar2 + -0xa0) ^ (byte)uVar10) & 0x3f);
  puVar27 = (uint64_t *)(lVar2 - (uint64_t)(uVar13 ^ 0xcc65d519));
  *(uint64_t *)(lVar2 + -0xa8) =
       (*puVar27 ^ uVar42 | *(uint64_t *)(lVar2 + -0xf0) ^ uVar24) ^ uVar25;
  uVar18 = uVar50 ^ uVar25 ^ *(uint64_t *)(lVar2 - (uVar37 ^ 0xffffff57)) ^
           *(uint64_t *)(lVar2 + -200);
  *(uint64_t *)(lVar2 + -0x10) = uVar18 ^ uVar33;
  puVar28 = (uint64_t *)(lVar2 - (uint64_t)(uVar13 ^ 0xcc65d521));
  *(uint64_t *)(lVar2 + -0x30) = (*puVar28 ^ uVar34) + uVar18 ^ uVar38;
  *(uint64_t *)(lVar2 - (uVar15 ^ 0x5a0888d)) = uVar18 << ((bVar20 ^ 0xaa) & 0x3f) ^ uVar26;
  *(uint64_t *)(lVar2 - (uint64_t)(uVar55 ^ 0x2245ad8c)) =
       (*(uint64_t *)(lVar2 - (uVar15 ^ 0x5a088e5)) ^ uVar33) >> ((bVar21 ^ 0xf9) & 0x3f) ^ uVar58;
  uVar18 = *(uint64_t *)(lVar2 + -0x70) ^ uVar58 |
           *(uint64_t *)(lVar2 - (uint64_t)(uVar23 ^ 0x7b5eca65)) ^ uVar26;
  *(uint64_t *)(lVar2 + -0xf0) = uVar18 ^ uVar50;
  *(uint64_t *)(lVar2 + -0xb8) =
       CONCAT44(uVar31,uVar30) ^ CONCAT44(uVar7,uVar30) ^ 0x22327ee850e5791;
  *(uint64_t *)(lVar2 + -0xa8) =
       uVar38 ^ uVar40 ^ uVar18 ^ *(uint64_t *)(lVar2 - (uVar16 ^ 0xf44b83ae));
  uVar18 = *(uint64_t *)(lVar2 + -0xa0) ^ uVar17;
  *(uint64_t *)(lVar2 + -0x80) =
       (*(uint64_t *)(lVar2 - (uVar37 ^ 0xffffff37)) ^ uVar50) + uVar18 ^ uVar42;
  uVar9 = g_028a0530;
  bVar20 = (byte)uVar3;
  *(uint64_t *)(lVar2 + -0x10) =
       (*(uint64_t *)(lVar2 - ((uint64_t)g_028a0530 ^ 0x5202dd1a)) ^ uVar17) <<
       ((bVar20 ^ 0xc4) & 0x3f) ^ uVar54;
  *(uint64_t *)(lVar2 - (uVar19 ^ 0xf7fee587)) = uVar18 >> ((bVar1 ^ 0xe) & 0x3f) ^ uVar24;
  uVar18 = *(uint64_t *)(lVar2 - (uVar29 ^ 0x8ca02f9a)) ^ uVar24 |
           *(uint64_t *)(lVar2 + -0x10) ^ uVar54;
  *(uint64_t *)(lVar2 + -0x70) = uVar49 ^ uVar18;
  uVar18 = *(uint64_t *)(lVar2 - (uVar29 ^ 0x8ca02f62)) ^ uVar42 ^ uVar18;
  *(uint64_t *)(lVar2 + -0xb8) = uVar18 ^ uVar47;
  uVar18 = (*(uint64_t *)(lVar2 + -0x30) ^ uVar38) + uVar18;
  *(uint64_t *)(lVar2 + -0xf0) = auVar59._0_8_ ^ uVar18;
  uVar10 = g_028a0538;
  uVar46 = (uint64_t)g_028a0538;
  uVar49 = (*(uint64_t *)(lVar2 - (uVar48 ^ 0x2245ad45)) ^ uVar47) <<
           (((byte)g_028a0538 ^ 0x6f) & 0x3f);
  *(uint64_t *)(lVar2 + -200) = uVar49 ^ uVar54;
  uVar51 = (uVar51 << 0x20 ^ *(uint64_t *)(lVar2 - (uVar48 ^ 0x2245ad45))) >> 0x29;
  uVar49 = uVar49 | uVar51;
  *(uint64_t *)(lVar2 + -0xa0) = uVar51 ^ uVar45;
  *(uint64_t *)(lVar2 + -0x78) = uVar50 ^ uVar49;
  *(uint64_t *)(lVar2 + -0x10) = uVar26 ^ uVar18 ^ uVar49;
  uVar49 = (*(uint64_t *)(lVar2 - (uVar15 ^ 0x5a0885d)) ^ uVar40) +
           (*(uint64_t *)(lVar2 + -0x80) ^ uVar42);
  *(uint64_t *)(lVar2 + -0x70) = uVar49 ^ uVar38;
  uVar50 = (*(uint64_t *)(lVar2 + -0xa8) ^ uVar40) << ((bVar20 ^ 0xd5) & 0x3f);
  *(uint64_t *)(lVar2 + -0x30) = uVar50 ^ uVar43;
  uVar29 = (*(uint64_t *)(lVar2 - (uVar29 ^ 0x8ca02f4a)) ^ uVar40) >> 0x18;
  uVar50 = uVar50 | uVar29;
  *(uint64_t *)(lVar2 + -0xb8) = uVar29 ^ uVar25;
  *(uint64_t *)(lVar2 + -200) = uVar40 ^ uVar50;
  uVar50 = uVar50 ^ uVar49;
  *(uint64_t *)(lVar2 + -0x78) = uVar18 + uVar50 ^ uVar43;
  auVar60._8_8_ = uVar50;
  auVar60._0_8_ = uVar50 << 5;
  *(uint8_t (*) [16])(lVar2 + -0xa8) = auVar60 ^ auVar59;
  uVar11 = g_028a053c;
  uVar4 = g_028a0508;
  bVar22 = (byte)g_028a053c;
  uVar40 = uVar50 >> ((bVar22 ^ 0x43) & 0x3f);
  *(uint64_t *)(lVar2 + -200) = uVar33 ^ uVar40;
  uVar40 = uVar40 | uVar50 << 5;
  *(uint64_t *)(lVar2 + -0xf0) = uVar40 ^ uVar17;
  *(uint64_t *)(lVar2 + -0x80) = (CONCAT44(uVar3,uVar8) ^ 0x99499c51ea5ebdf7) + 0xc93ce3c01a68310f;
  *(uint64_t *)(lVar2 + -0x30) = uVar18 + uVar50 ^ uVar34 ^ uVar40;
  *(uint64_t *)(lVar2 - (uVar37 ^ 0xffffff47)) =
       (*(uint64_t *)(lVar2 - (uVar19 ^ 0xf7fee50f)) ^ uVar17) + uVar40;
  uVar19 = (*(uint64_t *)(lVar2 - (uVar32 ^ 0xadfd2235)) ^ uVar38) +
           (*(uint64_t *)(lVar2 - (uint64_t)(uVar12 ^ 0xc1967419)) ^ uVar26);
  *(uint64_t *)(lVar2 + -0xa0) = uVar19 ^ uVar45;
  uVar40 = *(uint64_t *)(lVar2 + -0x10) ^ uVar26;
  uVar18 = uVar40 << (((byte)uVar13 ^ 0x84) & 0x3f);
  uVar40 = uVar40 >> ((bVar22 ^ 99) & 0x3f);
  *(uint64_t *)(lVar2 + -0xa8) = uVar58 ^ uVar18;
  uVar18 = uVar18 | uVar40;
  *(uint64_t *)(lVar2 + -200) = uVar40 ^ uVar24;
  *(uint64_t *)(lVar2 + -0x80) = uVar18 ^ uVar25;
  *(uint64_t *)(lVar2 - (uint64_t)(uVar55 ^ 0x2245ad0c)) = uVar19 ^ uVar54 ^ uVar18;
  *(uint64_t *)(lVar2 + -0xb8) =
       (CONCAT44(uVar14,uVar9) ^ 0x57b4836bd4d358c4) >> ((bVar1 ^ 0x2c) & 0x3f);
  uVar19 = (*(uint64_t *)(lVar2 + -0xf0) ^ uVar54) + (*(uint64_t *)(lVar2 + -0xc0) ^ uVar47);
  *(uint64_t *)(lVar2 + -0x70) = uVar19 ^ uVar42;
  uVar40 = (CONCAT44(g_028a0548,g_028a0548) ^ *(uint64_t *)(lVar2 + -0xe0)) +
           (*(uint64_t *)(lVar2 + -0x78) ^ uVar43);
  *(uint64_t *)(lVar2 + -0x10) = uVar40 ^ uVar42;
  uVar8 = g_028a0534;
  uVar6 = g_028a051c;
  uVar18 = (uint64_t)g_028a0534;
  *(uint64_t *)(lVar2 + -200) = uVar40 + uVar19 ^ uVar43;
  uVar36 = g_028a0510;
  uVar40 = (uint64_t)g_028a0510;
  *(uint64_t *)(lVar2 + -0xb8) = uVar19 << (((byte)g_028a0510 ^ 0x8f) & 0x3f) ^ uVar38;
  *(uint64_t *)(lVar2 - (uVar46 ^ 0x90634f88)) =
       (uVar19 ^ uVar42 ^ uVar41 << 0x20) >> 0x27 ^ uVar17;
  *(uint64_t *)(lVar2 + -0xc0) =
       (CONCAT44(uVar30,uVar8) ^ 0xb88650b16eec59c9) +
       (CONCAT44(uVar55,uVar13) ^ 0x26476ac6a6b9de93);
  *(uint64_t *)(lVar2 - (uVar15 ^ 0x5a0888d)) =
       (uVar17 ^ *(uint64_t *)(lVar2 + -0xf0) | uVar38 ^ *(uint64_t *)(lVar2 + -0xb8)) ^ uVar47;
  *(uint64_t *)(lVar2 - (uVar16 ^ 0xf44b831e)) = *(uint64_t *)(lVar2 + -0xc0) | 0x33982f8087ae2664
  ;
  *(uint64_t *)(lVar2 + -0xa8) =
       uVar47 ^ *(uint64_t *)(lVar2 + -0x78) ^ *(uint64_t *)(lVar2 + -200);
  *(uint64_t *)(lVar2 - (uint64_t)(uVar23 ^ 0x7b5eca0d)) =
       (CONCAT44(uVar13,uVar8) ^ 0x288ef334719ddf36) + *(int64_t *)(lVar2 + -0xc0);
  *puVar27 = (CONCAT44(uVar6,g_028a0540) ^ 0xafa7ce5c88623573) +
             (CONCAT44(g_028a073c,g_028a073c) ^ *(uint64_t *)(lVar2 + -0x90)) ^ uVar24;
  *(uint64_t *)(lVar2 + -0xf0) =
       CONCAT44(uVar9,uVar11) ^ 0x844f68889fc9504a | CONCAT44(uVar11,uVar14) ^ 0x3ac05ca4a5636965;
  uVar30 = g_028a06b4 ^ (uint)*(uint64_t *)(lVar2 + -0xb8);
  uVar14 = uVar30 & 0xff;
  g_028a06b4 = uVar30 << 0x18 | uVar14 | uVar14 << 0x10 | uVar14 << 8;
  uVar17 = CONCAT44(g_028a06b4,g_028a06b4);
  *(uint64_t *)(lVar2 + -0x80) =
       (uVar34 ^ *(uint64_t *)(lVar2 - (uVar37 ^ 0xffffffcf))) +
       (*(uint64_t *)(lVar2 + -0xb8) ^ uVar24) ^ uVar17;
  *(uint64_t *)(lVar2 + -0x78) =
       (uVar35 ^ *(uint64_t *)(lVar2 + -0xd0)) + (CONCAT44(uVar4,uVar36) ^ 0x4c352ac210092151) ^
       uVar17;
  *(uint64_t *)(lVar2 - (uVar46 ^ 0x90634fb8)) =
       (*(uint64_t *)(lVar2 + -200) ^ uVar43) +
       (uVar42 ^ *(uint64_t *)(lVar2 - (uVar16 ^ 0xf44b83ee)));
  uVar19 = (uVar45 ^ *(uint64_t *)(lVar2 + -0xa0)) + (*(uint64_t *)(lVar2 + -0x78) ^ uVar17);
  *(uint64_t *)(lVar2 + -0x10) = uVar19 ^ uVar17;
  *(uint64_t *)(lVar2 + -0xf0) =
       (*(uint64_t *)(lVar2 - (uVar40 ^ 0x3c31f16)) ^ uVar17) + uVar19 ^ uVar17;
  *(uint64_t *)(lVar2 + -0x30) =
       (CONCAT44(uVar10,uVar7) ^ 0xcdb177e39b6b5200) + (CONCAT44(uVar31,uVar6) ^ 0x6dc25b6146ebc319)
  ;
  uVar36 = *(uint *)(&g_023d0570 + lVar39);
  uVar19 = *(uint64_t *)(lVar2 + -0x80) ^ uVar17;
  *(uint64_t *)(lVar2 + -0xb8) = uVar19 << ((bVar20 ^ 0xdc) & 0x3f) ^ uVar54;
  *(uint64_t *)(lVar2 - (uVar18 ^ 0x18017a70)) = uVar19 >> 0x1f ^ uVar24;
  uVar19 = uVar24 ^ *(uint64_t *)(lVar2 + -0x70) | uVar54 ^ *(uint64_t *)(lVar2 + -0xb8);
  *(uint64_t *)(lVar2 + -0xc0) = uVar25 ^ uVar19;
  uVar19 = uVar17 ^ uVar26 ^ *(uint64_t *)(lVar2 + -0xf0) ^ uVar19;
  *(uint64_t *)(lVar2 + -0xa0) = uVar19;
  uVar14 = g_028a069c ^ g_028a07cc;
  uVar24 = (uint64_t)g_028a07cc & 0xff;
  uVar24 = g_028a07cc << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  g_028a07cc = (uint)uVar24;
  *(uint64_t *)(lVar2 + -0x10) =
       (uVar24 << 0x20 | uVar24) ^
       (*(uint64_t *)(lVar2 - (uint64_t)(uVar23 ^ 0x7b5ecabd)) ^ uVar26) +
       (uVar43 ^ *(uint64_t *)(lVar2 + -200));
  uVar31 = uVar14 & 0xff;
  g_028a07a8 = uVar14 << 0x18 | uVar31 | uVar31 << 0x10 | uVar31 << 8;
  uVar40 = CONCAT44(g_028a07a8,g_028a07a8);
  *(uint64_t *)(lVar2 + -0x30) =
       (*(uint64_t *)(lVar2 - ((uint64_t)g_028a0540 ^ 0x886235d8)) ^ uVar26) <<
       ((bVar21 ^ 0xdb) & 0x3f) ^ uVar40;
  uVar24 = (uint64_t)g_028a069c & 0xff;
  uVar24 = g_028a069c << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  g_028a069c = (uint)uVar24;
  *puVar28 = (uVar24 << 0x20 | uVar24) ^ (uVar19 ^ uVar26) >> (((byte)uVar23 ^ 0xf) & 0x3f);
  *(uint64_t *)(lVar2 - (uVar15 ^ 0x5a08885)) =
       uVar40 ^ *(uint64_t *)(lVar2 - (uVar48 ^ 0x2245adcd)) |
       CONCAT44(uVar5,uVar6) ^ 0xdc0f3375dc7c5a43;
  *(uint *)(&g_028a0820 + (int64_t)(int)(uVar36 ^ uVar3) * 4) =
       *(uint *)(&g_023d0560 + (uVar16 ^ 0xf44b8396) + lVar39) ^ uVar13;
  return;
}


// Function: FUN_00a0916c
// Address: 00a0916c
// Size: 4437 bytes
// Class: Unknown

void FUN_00a0916c(void)

{
  int64_t lVar1;
  uint uVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint uVar7;
  uint *puVar8;
  uint64_t uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  byte bVar29;
  uint uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  uint uVar34;
  uint uVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  int64_t lVar41;
  uint64_t uVar42;
  uint64_t uVar43;
  uint uVar44;
  uint64_t uVar45;
  bool bVar46;
  uint32_t uVar49;
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar50 [16];
  
  uVar7 = g_028a0714;
  uVar14 = g_028a0658;
  uVar4 = g_028a0534;
  uVar2 = g_028a04fc;
  lVar1 = g_028a04d0;
  uVar20 = (uint64_t)g_028a0534;
  uVar9 = (uint64_t)g_028a04fc;
  uVar34 = g_028a04fc & g_028a0534;
  uVar13 = g_028a0658 & 7;
  if (uVar13 < 4) {
    if (uVar13 < 2) {
      uVar44 = g_028a0658;
      if (uVar13 != 0) {
        uVar44 = g_028a0598;
      }
      goto LAB_00a09204;
    }
    bVar46 = uVar13 == 2;
    puVar8 = &g_028a04e0;
    puVar15 = &g_028a0758;
LAB_00a091fd:
    if (bVar46) {
      puVar15 = puVar8;
    }
  }
  else {
    if (5 < uVar13) {
      bVar46 = uVar13 == 6;
      puVar8 = &g_028a0568;
      puVar15 = &g_028a070c;
      goto LAB_00a091fd;
    }
    puVar15 = &g_028a06dc;
    if (uVar13 != 5) {
      puVar15 = &g_028a080c;
    }
  }
  uVar44 = *puVar15;
LAB_00a09204:
  lVar16 = (int64_t)g_028a0834;
  uVar36 = CONCAT44(g_028a06f4,g_028a06f4);
  uVar17 = *(uint64_t *)(g_028a04d0 - ((uint64_t)uVar34 ^ 0x18017ab8)) ^ uVar36 |
           CONCAT44(g_028a05f0,g_028a05f0) ^ *(uint64_t *)(g_028a04d0 + -0xc0);
  uVar37 = CONCAT44(g_028a0714,g_028a0714);
  g_028a0538 = uVar34;
  *(uint64_t *)(g_028a04d0 + -0x70) = uVar17 ^ uVar37;
  *(uint64_t *)(lVar1 + -0x80) = ((uint64_t)uVar34 ^ 0xfffffffff89ef44c) << 0x24;
  uVar13 = g_028a080c;
  uVar6 = g_028a0558;
  uVar38 = CONCAT44(g_028a0558,g_028a0558);
  uVar27 = CONCAT44(g_028a080c,g_028a080c);
  *(uint64_t *)(lVar1 + -0x60) =
       uVar38 ^ uVar27 ^ uVar17 ^ *(uint64_t *)(lVar1 - (uint64_t)(uVar34 ^ 0x18017ac8));
  uVar31 = CONCAT44(g_028a04e0,g_028a04e0);
  *(uint64_t *)(lVar1 - (uint64_t)(uVar34 ^ 0x18017a10)) =
       (CONCAT44(uVar2,uVar2) ^ 0xffffffffffffffef) +
       (CONCAT44(g_028a073c,g_028a073c) ^ *(uint64_t *)(lVar1 + -0x90)) ^ uVar31;
  *(uint64_t *)(lVar1 + -0xa0) =
       (*(uint64_t *)(lVar1 + -0x70) ^ uVar37) + (CONCAT44(uVar2,uVar4) ^ 0xa5aa1ac78ddaec64);
  uVar30 = g_028a07e4 ^ (uint)*(uint64_t *)(lVar1 + -0x10);
  uVar28 = (*(uint64_t *)(lVar1 - (uint64_t)(uVar34 ^ 0x18017aa8)) ^ uVar38) +
           (*(uint64_t *)(lVar1 + -0x10) ^ uVar31);
  uVar21 = uVar30 & 0xff;
  g_028a07e4 = uVar30 << 0x18 | uVar21 | uVar21 << 0x10 | uVar21 << 8;
  uVar39 = CONCAT44(g_028a07e4,g_028a07e4);
  *(uint64_t *)(lVar1 + -0x98) = uVar39 ^ uVar28;
  *(uint64_t *)(lVar1 + -0x30) =
       CONCAT44(uVar4,uVar4) ^ uVar36 ^ *(uint64_t *)(lVar1 - (uVar9 ^ 0xffffff87)) ^
       0x2d7f131d38525ae1;
  uVar40 = CONCAT44(g_028a05ac,g_028a05ac);
  lVar41 = (*(uint64_t *)(lVar1 + -0xf0) ^ uVar38) +
           (*(uint64_t *)(lVar1 - (uVar9 ^ 0xfffffff7)) ^ uVar40);
  auVar47._4_4_ = g_028a06dc;
  auVar47._0_4_ = uVar44;
  auVar47._8_8_ = 0;
  auVar48 = pshufb(auVar47,g_023d4e90);
  g_028a06c0 = auVar48._0_4_;
  uVar49 = auVar48._4_4_;
  auVar48._0_8_ = CONCAT44(g_028a06c0,g_028a06c0);
  auVar48._8_4_ = uVar49;
  auVar48._12_4_ = uVar49;
  auVar50._8_8_ = lVar41 + uVar28;
  auVar50._0_8_ = lVar41;
  g_028a06dc = uVar49;
  *(uint8_t (*) [16])(lVar1 + -0xc0) = auVar50 ^ auVar48;
  uVar17 = (*(uint64_t *)(lVar1 - (uVar20 ^ 0x18017a98)) ^ uVar39) <<
           ((byte)(uVar34 ^ 0x18017a10) & 0x3f);
  uVar22 = CONCAT44(g_028a0758,g_028a0758);
  *(uint64_t *)(lVar1 + -0x80) = uVar22 ^ uVar17;
  uVar23 = CONCAT44(g_028a070c,g_028a070c);
  bVar10 = (byte)uVar2;
  *(uint64_t *)(lVar1 + -0x90) = uVar28 >> ((bVar10 ^ 0xcf) & 0x3f) ^ uVar23;
  uVar24 = CONCAT44(g_028a0568,g_028a0568);
  *(uint64_t *)(lVar1 + -0x70) =
       (*(uint64_t *)(lVar1 - (uVar20 ^ 0x18017a90)) ^ uVar23 | uVar17) ^ uVar24;
  uVar25 = CONCAT44(g_028a0598,g_028a0598);
  uVar43 = CONCAT44(uVar49,uVar49);
  *(uint64_t *)(lVar1 - (uVar20 ^ 0x18017aa0)) =
       SUB168(auVar50 ^ auVar48,8) ^ uVar24 ^
       *(uint64_t *)(lVar1 - (uint64_t)(uVar34 ^ 0x18017a70)) ^ uVar25 ^ uVar43;
  *(uint64_t *)(lVar1 + -0xa8) = (CONCAT44(uVar4,uVar34) ^ 0xb73b591f6d15ef17) + 0x7e58e25f351518b9
  ;
  uVar18 = CONCAT44(uVar14,uVar14);
  uVar17 = *(uint64_t *)(lVar1 + -0xa0) ^ uVar25;
  *(uint64_t *)(lVar1 + -0x10) = (*(uint64_t *)(lVar1 + -200) ^ uVar38) + uVar17 ^ uVar18;
  uVar30 = g_028a0530;
  uVar14 = g_028a0504;
  uVar42 = (uint64_t)g_028a0530;
  bVar11 = (byte)g_028a0530;
  uVar19 = (uint64_t)g_028a0504;
  uVar26 = g_028a0530 + g_028a0504;
  g_028a0540 = uVar26;
  *(uint64_t *)(lVar1 + -0x78) = uVar17 << ((bVar11 ^ 0xd6) & 0x3f) ^ uVar18;
  *(uint64_t *)(lVar1 - (uVar19 ^ 0xc1967439)) = uVar17 >> 0xc ^ uVar23;
  *(uint64_t *)(lVar1 - (uVar42 ^ 0x8ca02f12)) =
       (*(uint64_t *)(lVar1 + -0x30) ^ uVar23 | *(uint64_t *)(lVar1 + -0x78) ^ uVar18) ^ uVar39;
  *(uint64_t *)(lVar1 + -0xc0) =
       uVar24 ^ uVar18 ^ uVar39 ^ *(uint64_t *)(lVar1 + -0xf0) ^
       *(uint64_t *)(lVar1 - (uVar19 ^ 0xc1967419));
  uVar32 = *(uint64_t *)(lVar1 + -0x60) ^ uVar27;
  uVar17 = (*(uint64_t *)(lVar1 + -0xb8) ^ uVar43) + uVar32 ^ uVar37;
  *(uint64_t *)(lVar1 + -0x98) = uVar17;
  *(uint64_t *)(lVar1 + -0x80) =
       CONCAT44(uVar14,uVar26) ^ *(uint64_t *)(lVar1 + -0xa8) ^ 0x42c3cfa88cabd2d3;
  uVar28 = (uint64_t)((uint)*(uint64_t *)(lVar1 + -0x60) ^ uVar13) << 0x39;
  *(uint64_t *)(lVar1 + -0x90) = uVar28 ^ uVar31;
  uVar32 = uVar32 >> 7;
  uVar28 = uVar28 | uVar32;
  *(uint64_t *)(lVar1 + -0x70) = uVar32 ^ uVar25;
  *(uint64_t *)(lVar1 + -200) = uVar28 ^ uVar43;
  puVar33 = (uint64_t *)(lVar1 - (uint64_t)(uVar26 ^ 0x4e36a34b));
  *puVar33 = uVar37 ^ uVar28 ^ auVar48._0_8_ ^ uVar17;
  *(uint64_t *)(lVar1 - (uVar42 ^ 0x8ca02f9a)) =
       (*(uint64_t *)(lVar1 + -0x10) ^ uVar18) + (*(uint64_t *)(lVar1 + -0xa0) ^ auVar48._0_8_) ^
       uVar27;
  *(uint64_t *)(lVar1 - (uint64_t)(uVar26 ^ 0x4e36a3db)) =
       (CONCAT44(uVar30,uVar30) ^ 0x3b3ce90e5ff4cac6) +
       (CONCAT44(uVar26,uVar14) ^ 0x125467474940d3fd);
  bVar12 = (byte)uVar26;
  uVar17 = (*(uint64_t *)(lVar1 + -0xa0) ^ auVar48._0_8_) << ((bVar12 ^ 0xfc) & 0x3f);
  *(uint64_t *)(lVar1 + -0xf0) = uVar17 ^ uVar37;
  *(uint64_t *)(lVar1 + -0xb8) = (*puVar33 ^ auVar48._0_8_) >> ((bVar11 ^ 0xcb) & 0x3f) ^ uVar22;
  *(uint64_t *)(lVar1 + -0xa8) =
       (*(uint64_t *)(lVar1 - (uVar42 ^ 0x8ca02f2a)) ^ uVar43) << ((bVar12 ^ 0xca) & 0x3f);
  *(uint64_t *)(lVar1 - (uint64_t)(uVar26 ^ 0x4e36a36b)) =
       (*(uint64_t *)(lVar1 - (uVar19 ^ 0xc19674b1)) ^ uVar22 | uVar17) ^ uVar24;
  *(uint64_t *)(lVar1 + -0x60) =
       (CONCAT44(uVar26,uVar26) ^ 0x431a50afae4affff) << (((byte)uVar34 ^ 0x16) & 0x3f);
  uVar45 = uVar23 ^ uVar27 ^ uVar24;
  *(uint64_t *)(lVar1 + -0x90) =
       *(uint64_t *)(lVar1 + -0x80) ^ uVar45 ^ *(uint64_t *)(lVar1 - (uVar19 ^ 0xc1967471));
  uVar5 = g_028a053c;
  uVar17 = (uint64_t)g_028a053c;
  *(uint64_t *)(lVar1 - (uVar42 ^ 0x8ca02f92)) =
       CONCAT44(g_028a053c,uVar30) ^ 0x59acd18a78ec1e09 ^
       *(uint64_t *)(lVar1 + -0xa0) ^ auVar48._0_8_;
  uVar28 = *(uint64_t *)(lVar1 + -0xc0) ^ uVar24;
  *(uint64_t *)(lVar1 + -0x10) =
       (*(uint64_t *)(lVar1 - (uVar17 ^ 0xa7af5c56)) ^ uVar37) + uVar28 ^ uVar18;
  *(uint64_t *)(lVar1 + -0x30) =
       (*(uint64_t *)(lVar1 - (uint64_t)(uVar26 ^ 0x4e36a32b)) ^ uVar24) <<
       ((bVar12 ^ 0xc3) & 0x3f) ^ uVar23;
  *(uint64_t *)(lVar1 - (uVar20 ^ 0x18017aa8)) = uVar28 >> ((bVar10 ^ 0xe7) & 0x3f) ^ uVar43;
  *(uint64_t *)(lVar1 + -200) = *(uint64_t *)(lVar1 + -0x70) ^ 0xaea4c80aefd4fcb2;
  uVar20 = *(uint64_t *)(lVar1 + -0xa8) ^ uVar43 | *(uint64_t *)(lVar1 + -0x30) ^ uVar23;
  *(uint64_t *)(lVar1 + -0xf0) = uVar20 ^ auVar48._0_8_;
  uVar20 = *(uint64_t *)(lVar1 + -0x10) ^ uVar18 ^ uVar20;
  *(uint64_t *)(lVar1 + -0xb8) = uVar20 ^ uVar37;
  puVar33 = (uint64_t *)(lVar1 - (uint64_t)(uVar34 ^ 0x18017a60));
  *puVar33 = CONCAT44(uVar30,uVar4) ^ 0x8d9041d7fe42a524 | uVar20;
  uVar32 = (*(uint64_t *)(lVar1 - (uint64_t)(uVar4 ^ 0x18017ab8)) ^ uVar37) +
           (*(uint64_t *)(lVar1 + -0x78) ^ uVar27) ^ uVar27;
  *(uint64_t *)(lVar1 + -0x80) = uVar32;
  *(uint64_t *)(lVar1 + -0xa0) = CONCAT44(uVar14,uVar30) ^ 0x5a77cb1dd64c1f13;
  uVar20 = *(uint64_t *)(lVar1 + -0xb8) ^ uVar37;
  bVar29 = (byte)uVar14;
  uVar28 = uVar20 << ((bVar29 ^ 0xc) & 0x3f);
  *(uint64_t *)(lVar1 + -0x98) = uVar28 ^ uVar39;
  *(uint64_t *)(lVar1 + -0xc0) = uVar20 >> ((bVar11 ^ 0xd9) & 0x3f) ^ uVar24;
  uVar9 = (*(uint64_t *)(lVar1 - (uVar9 ^ 0xffffff3f)) ^ uVar24 | uVar28) ^ uVar27;
  *(uint64_t *)(lVar1 + -0x70) = uVar9;
  *(uint64_t *)(lVar1 + -200) = uVar32 ^ uVar31 ^ uVar9;
  *(uint64_t *)(lVar1 + -0xa8) =
       (*(uint64_t *)(lVar1 + -0x10) ^ uVar18) + (*(uint64_t *)(lVar1 + -0x90) ^ uVar23) ^ uVar24;
  *(uint64_t *)(lVar1 + -0x30) = (uVar17 ^ 0xfffffffffffffc6d) << 0x34;
  uVar44 = g_028a0510;
  uVar32 = (uint64_t)g_028a0510;
  *(uint64_t *)(lVar1 - (uint64_t)(uVar26 ^ 0x4e36a31b)) =
       (*(uint64_t *)(lVar1 - (uint64_t)(uVar34 ^ 0x18017a90)) ^ uVar23) <<
       ((bVar29 ^ 0x2c) & 0x3f) ^ uVar18;
  uVar9 = (*(uint64_t *)(lVar1 + -0x90) ^ uVar23) >> 0x1b;
  *(uint64_t *)(lVar1 + -0x60) = auVar48._0_8_ ^ uVar9;
  *(uint64_t *)(lVar1 + -0x78) = (*(uint64_t *)(lVar1 + -0xf0) ^ uVar18 | uVar9) ^ uVar27;
  *(uint64_t *)(lVar1 + -0xa0) =
       uVar45 ^ *(uint64_t *)(lVar1 - (uint64_t)(uVar4 ^ 0x18017a78)) ^
       *(uint64_t *)(lVar1 + -0xa8);
  *(uint64_t *)(lVar1 - (uVar42 ^ 0x8ca02f5a)) =
       *(uint64_t *)(lVar1 + -0xc0) ^ uVar24 |
       *(uint64_t *)(lVar1 - (uint64_t)(uVar34 ^ 0x18017a30));
  *(uint64_t *)(lVar1 - (uVar32 ^ 0x5ccea737)) =
       (uVar40 ^ *(uint64_t *)(lVar1 - (uint64_t)(uVar4 ^ 0x18017a08))) +
       (*(uint64_t *)(lVar1 + -0xa0) ^ uVar23) ^ uVar38;
  uVar21 = g_028a0524;
  uVar9 = (uint64_t)g_028a0524;
  *(int64_t *)(lVar1 + -0x70) = -0x12aef6e6426398c3 << (((byte)g_028a0524 ^ 0x50) & 0x3f);
  uVar20 = (CONCAT44(g_028a0720,g_028a0720) ^ *(uint64_t *)(lVar1 + -0x88)) +
           (*(uint64_t *)(lVar1 + -0x80) ^ uVar27);
  *(uint64_t *)(lVar1 + -0x10) = uVar20 ^ uVar25;
  *(uint64_t *)(lVar1 + -0x90) =
       (CONCAT44(uVar2,uVar14) ^ 0x3f43e9abfb7178e4) +
       (CONCAT44(uVar44,uVar26) ^ 0x6227adbf92a14895);
  *(uint64_t *)(lVar1 - (uVar19 ^ 0xc19674f9)) =
       (*(uint64_t *)(lVar1 + -0x98) ^ uVar38) + uVar20 ^ uVar24;
  uVar13 = g_028a04f8;
  *(uint64_t *)(lVar1 + -0x60) =
       (*(uint64_t *)(lVar1 - ((uint64_t)g_028a04f8 ^ 0x27e5ad65)) ^ uVar38) <<
       ((bVar12 ^ 0xf2) & 0x3f) ^ uVar22;
  uVar20 = (*(uint64_t *)(lVar1 + -0x98) ^ uVar38) >> ((bVar10 ^ 0xd8) & 0x3f);
  *(uint64_t *)(lVar1 + -0x78) = uVar20 ^ uVar22;
  uVar20 = *puVar33 ^ uVar22 | uVar20;
  *(uint64_t *)(lVar1 + -0xc0) = uVar20 ^ uVar25;
  *(uint64_t *)(lVar1 + -0x30) = uVar24 ^ uVar18 ^ *(uint64_t *)(lVar1 + -0xf0) ^ uVar20;
  uVar19 = (uint64_t)g_028a0518;
  uVar20 = (CONCAT44(uVar44,g_028a0518) ^ 0x5ccea7afffffffee) +
           (CONCAT44(g_028a0614,g_028a0614) ^ *(uint64_t *)(lVar1 + -0x28));
  uVar28 = uVar20 ^ uVar31;
  *(uint64_t *)(lVar1 + -0xb8) = uVar28;
  uVar14 = (uint)uVar28 ^ g_028a06ec;
  uVar35 = uVar14 & 0xff;
  g_028a06ec = uVar14 << 0x18 | uVar35 | uVar35 << 0x10 | uVar35 << 8;
  uVar28 = CONCAT44(g_028a06ec,g_028a06ec);
  *(uint64_t *)(lVar1 - (uVar42 ^ 0x8ca02f42)) =
       (*(uint64_t *)(lVar1 + -200) ^ uVar31) + uVar20 ^ uVar28;
  uVar20 = (*(uint64_t *)(lVar1 + -0xa8) ^ uVar24) +
           (CONCAT44(g_028a04f0,g_028a04f0) ^ *(uint64_t *)(lVar1 + -0xe8));
  *(uint64_t *)(lVar1 + -8) = uVar28 ^ uVar20;
  *(uint64_t *)(lVar1 + -0x70) =
       (*(uint64_t *)(lVar1 - (uint64_t)(uVar2 ^ 0xffffff5f)) ^ uVar28) + uVar20 ^ uVar28;
  bVar11 = (byte)g_028a0520;
  *(uint64_t *)(lVar1 - (uint64_t)(uVar26 ^ 0x4e36a363)) =
       (*(uint64_t *)(lVar1 + -0xa0) ^ uVar28) << ((bVar29 ^ 0x28) & 0x3f) ^ uVar28;
  *(uint64_t *)(lVar1 + -0x80) =
       (*(uint64_t *)(lVar1 + -0xa0) ^ uVar28) >> ((bVar10 ^ 0xe0) & 0x3f) ^ uVar39;
  uVar49 = g_028a0500;
  *(uint64_t *)(lVar1 - (uint64_t)(uVar26 ^ 0x4e36a37b)) =
       (CONCAT44(uVar5,uVar44) ^ 0xdfc864eaee86658b) +
       (CONCAT44(g_028a0500,uVar34) ^ 0x82e8d95d29c7f914);
  uVar14 = g_028a052c;
  uVar20 = *(uint64_t *)(lVar1 + -0x80) ^ uVar39 |
           *(uint64_t *)(lVar1 - ((uint64_t)g_028a052c ^ 0xf44b8316)) ^ uVar28;
  *(uint64_t *)(lVar1 + -0x10) = uVar20 ^ uVar31;
  uVar3 = g_028a050c;
  *(uint64_t *)(lVar1 + -0x98) =
       (CONCAT44(uVar14,g_028a050c) ^ 0x2e708ddfacd5e9bd) +
       (*(uint64_t *)(lVar1 - (uVar17 ^ 0xa7af5cbe)) ^ uVar28);
  *(uint64_t *)(lVar1 - (uVar19 ^ 0xffffff9f)) = uVar20 ^ *(uint64_t *)(lVar1 + -0x70);
  *(uint64_t *)(lVar1 + -0x78) =
       (CONCAT44(uVar21,uVar13) ^ 0xb90778c64eb5fb10) +
       (CONCAT44(uVar44,uVar5) ^ 0xb519119fa90ec8c0);
  uVar20 = *(uint64_t *)(lVar1 + -0x60) ^ uVar28;
  *(uint64_t *)(lVar1 + -0xc0) = (*(uint64_t *)(lVar1 + -0xf0) ^ uVar24) + uVar20 ^ uVar25;
  *(uint64_t *)(lVar1 + -0x28) = 0x3f92a198066c84c0 >> (((byte)uVar5 ^ 0xeb) & 0x3f);
  uVar17 = (uint64_t)g_028a051c;
  bVar12 = (byte)g_028a051c;
  *(uint64_t *)(lVar1 - (uint64_t)(uVar26 ^ 0x4e36a323)) =
       uVar20 << ((bVar12 ^ 0x72) & 0x3f) ^ uVar28;
  uVar20 = (*(uint64_t *)(lVar1 + -0x60) ^ uVar28) >> 0x12;
  *(uint64_t *)(lVar1 + -0xa8) = uVar20 ^ uVar43;
  *(uint64_t *)(lVar1 + -8) =
       CONCAT44(uVar34,uVar3) ^ *(uint64_t *)(lVar1 + -0x70) ^ 0xc03d1f2e34e61f11 ^ uVar28;
  uVar20 = (*(uint64_t *)(lVar1 + -200) ^ uVar28 | uVar20) ^ uVar43;
  *(uint64_t *)(lVar1 + -0xa0) = uVar20;
  *(uint64_t *)(lVar1 + -0x90) = CONCAT44(g_028a0528,uVar49) >> 0x15 ^ 0x642a2c3f23d;
  *(uint64_t *)(lVar1 + -0x88) = uVar25 ^ uVar43 ^ uVar36 ^ uVar20 ^ *(uint64_t *)(lVar1 + -0xc0);
  *(uint64_t *)(lVar1 + -0x80) =
       (*(uint64_t *)(lVar1 + -0x70) ^ uVar28) +
       (*(uint64_t *)(lVar1 - (uVar17 ^ 0xafa7ce6c)) ^ uVar18) ^ uVar28;
  *(uint64_t *)(lVar1 - (uVar9 ^ 0x339a2ac6)) =
       (*(uint64_t *)(lVar1 + -0xb8) ^ uVar31) + 0x18fa566ffe3777a4;
  uVar18 = uVar18 ^ *(uint64_t *)(lVar1 + -0x30);
  uVar9 = uVar18 << ((bVar10 ^ 0xf3) & 0x3f);
  uVar18 = uVar18 >> ((bVar11 ^ 0xd4) & 0x3f);
  uVar20 = uVar18 | uVar9;
  *(uint64_t *)(lVar1 + -0x78) = uVar9 ^ uVar37;
  *(uint64_t *)(lVar1 + -0xf0) =
       CONCAT44(uVar21,uVar30) ^ uVar31 ^ *(uint64_t *)(lVar1 + -0x10) ^ 0xdde5867b4ca2948a;
  *(uint64_t *)(lVar1 + -0x28) = uVar24 ^ uVar18;
  *(uint64_t *)(lVar1 + -0x60) = uVar27 ^ uVar20;
  *(uint64_t *)(lVar1 + -8) = uVar28 ^ uVar37 ^ *(uint64_t *)(lVar1 + -0x80) ^ uVar20;
  *(uint64_t *)(lVar1 - (uVar32 ^ 0x5ccea707)) =
       (uVar25 ^ *(uint64_t *)(lVar1 + -0xc0)) +
       (*(uint64_t *)(lVar1 - ((uint64_t)g_028a0544 ^ 0xfffffff7)) ^ uVar37) ^ uVar43;
  uVar43 = uVar43 ^ *(uint64_t *)(lVar1 + -0xa8);
  *(uint64_t *)(lVar1 + -200) = uVar43 | 0x15b36a2a44fde99d;
  uVar9 = (uint64_t)((uint)*(uint64_t *)(lVar1 + -8) ^ uVar7) << 0x3a;
  *(uint64_t *)(lVar1 + -0x90) = CONCAT44(g_028a074c,g_028a074c) ^ uVar9;
  uVar20 = (uVar37 ^ *(uint64_t *)(lVar1 + -8)) >> ((bVar12 ^ 0x5a) & 0x3f);
  *(uint64_t *)(lVar1 + -0xa0) = uVar39 ^ uVar20;
  *(uint64_t *)(lVar1 + -0x70) = CONCAT44(g_028a06ac,g_028a06ac) ^ (uVar9 | uVar20);
  *(uint64_t *)(lVar1 + -0xb8) = (uVar9 | uVar20) ^ uVar23 ^ uVar43;
  *(uint64_t *)(lVar1 + -0x98) =
       (*(uint64_t *)(lVar1 + -0x88) ^ uVar36) + (uVar28 ^ *(uint64_t *)(lVar1 + -0x80)) ^ uVar23;
  *(uint64_t *)(lVar1 + -0x10) = uVar20 ^ uVar9;
  uVar14 = *(uint *)(&g_023d0570 + lVar16);
  *(uint64_t *)(lVar1 - (uint64_t)(uVar2 ^ 0xffffff0f)) =
       (*(uint64_t *)(lVar1 - ((uint64_t)g_028a0508 ^ 0x886235f0)) ^ uVar36) <<
       (((byte)uVar4 ^ 0x16) & 0x3f) ^ uVar38;
  *(uint64_t *)(lVar1 + -0x30) =
       (uVar36 ^ *(uint64_t *)(lVar1 + -0x88)) >> (((byte)uVar13 ^ 0xd7) & 0x3f) ^ uVar22;
  *(uint64_t *)(lVar1 + -0x78) =
       (uVar23 ^ *(uint64_t *)(lVar1 + -0xb8)) <<
       (((byte)*(void*)(lVar1 + -0xf0) ^ (byte)uVar6) & 0x3f);
  *(uint *)(&g_028a0820 + (int64_t)(int)(uVar14 ^ uVar2) * 4) =
       *(uint *)(&g_023d0568 + lVar16) ^ uVar4;
  return;
}


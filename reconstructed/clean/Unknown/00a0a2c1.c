// Function: FUN_00a0a2c1
// Address: 00a0a2c1
// Size: 5242 bytes
// Class: Unknown

void FUN_00a0a2c1(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint32_t uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  byte bVar30;
  byte bVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  uint64_t uVar35;
  uint64_t *puVar36;
  uint64_t uVar37;
  int64_t lVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t *puVar42;
  uint64_t uVar43;
  uint64_t uVar44;
  uint uVar45;
  uint64_t *puVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  uint64_t uVar51;
  uint64_t uVar52;
  uint64_t uVar53;
  uint64_t uVar54;
  uint64_t *puVar55;
  uint uVar56;
  uint64_t uVar57;
  bool bVar58;
  uint32_t uVar62;
  uint64_t uVar59;
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint8_t auVar63 [16];
  uint64_t uVar64;
  uint32_t uVar67;
  uint8_t auVar65 [16];
  uint8_t auVar66 [16];
  uint8_t auVar68 [16];
  
  uVar10 = g_028a0534;
  uVar9 = g_028a0530;
  uVar17 = g_028a0510;
  uVar8 = g_028a0504;
  uVar33 = g_028a0500;
  uVar7 = g_028a04fc;
  uVar6 = g_028a04f8;
  lVar5 = g_028a04d0;
  uVar27 = (uint64_t)g_028a0504;
  uVar1 = g_028a0504 << 0x10 | g_028a0504 >> 0x10;
  uVar48 = (uint64_t)g_028a0534;
  uVar14 = g_028a0534 & 7;
  if (uVar14 < 4) {
    if (uVar14 < 2) {
      uVar28 = uVar48;
      if (uVar14 != 0) {
        uVar28 = (uint64_t)g_028a04f8;
      }
      goto LAB_00a0a364;
    }
    bVar58 = uVar14 == 2;
    puVar18 = &g_028a04fc;
    puVar34 = &g_028a0518;
LAB_00a0a35e:
    if (bVar58) {
      puVar34 = puVar18;
    }
  }
  else {
    if (5 < uVar14) {
      bVar58 = uVar14 == 6;
      puVar18 = &g_028a0530;
      puVar34 = &g_028a0510;
      goto LAB_00a0a35e;
    }
    puVar34 = &g_028a053c;
    if (uVar14 != 5) {
      puVar34 = &g_028a0544;
    }
  }
  uVar28 = (uint64_t)*puVar34;
LAB_00a0a364:
  uVar15 = (uint)uVar28;
  uVar45 = g_028a05a4 + g_028a0798;
  uVar53 = CONCAT44(g_028a0778,g_028a0778);
  uVar19 = (uint64_t)g_028a0798 & 0xff;
  uVar19 = g_028a0798 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar16 = g_028a0640 + g_028a0560;
  uVar56 = g_028a079c - g_028a0784;
  uVar35 = (uint64_t)g_028a0530;
  g_028a0798 = (uint)uVar19;
  bVar30 = (byte)g_028a0534;
  uVar19 = uVar19 << 0x20 | uVar19;
  lVar20 = (int64_t)g_028a0838;
  uVar21 = (uint64_t)g_028a0510;
  uVar29 = (uint64_t)g_028a04fc;
  uVar22 = (uint64_t)g_028a04f8;
  uVar40 = (uint64_t)g_028a0500;
  g_028a051c = uVar1;
  g_028a0538 = uVar15;
  *(uint64_t *)(g_028a04d0 + -200) =
       (*(uint64_t *)(g_028a04d0 - (uVar35 ^ 0x88623508)) ^ uVar53) >> ((bVar30 ^ 99) & 0x3f) ^
       uVar19;
  uVar12 = g_028a0544;
  uVar11 = g_028a053c;
  uVar14 = g_028a0518;
  uVar23 = (uint64_t)g_028a053c;
  uVar24 = (uint64_t)g_028a0518;
  bVar31 = (byte)g_028a0518;
  uVar25 = (uint64_t)g_028a0544;
  *(uint64_t *)(lVar5 + -0xb8) =
       ((uVar23 << 0x20) + uVar28 ^ 0x772a4fecf62d0279) >> (bVar31 & 0x3f);
  uVar26 = uVar27 ^ 0xce5caf6f;
  puVar36 = (uint64_t *)(lVar5 - uVar26);
  uVar32 = uVar45 & 0xff;
  uVar32 = uVar45 * 0x1000000 | uVar32 | uVar32 << 0x10 | uVar32 << 8;
  uVar50 = CONCAT44(uVar32,uVar32);
  *(uint64_t *)(lVar5 + -0xc0) =
       (*puVar36 ^ uVar19 | CONCAT44(g_028a0674,g_028a0674) ^ *(uint64_t *)(lVar5 + -0x78)) ^
       uVar50;
  uVar37 = (uint64_t)g_028a05a4 & 0xff;
  uVar51 = g_028a05a4 << 0x18 | uVar37 | uVar37 << 0x10 | uVar37 << 8;
  uVar39 = uVar51 << 0x20 | uVar51;
  uVar37 = CONCAT44(g_028a0668,g_028a0668);
  g_028a05a4 = (uint)uVar51;
  *(uint64_t *)(lVar5 - (uVar25 ^ 0x90634f88)) =
       *(uint64_t *)(lVar5 - ((uint64_t)uVar1 ^ 0xafa7ce9c)) ^ uVar50 ^ uVar39 ^
       *(uint64_t *)(lVar5 - (uVar21 ^ 0xccc420a8)) ^ uVar37;
  *(uint64_t *)(lVar5 - (uVar24 ^ 0xf7fee5cf)) =
       CONCAT44(uVar1,uVar33) ^ uVar50 ^ *(uint64_t *)(lVar5 - (uVar27 ^ 0xce5caf67)) ^
       0x2ba693392b45b627;
  uVar51 = CONCAT44(g_028a0624,g_028a0624);
  *(uint64_t *)(lVar5 - (uVar23 ^ 0x90634fd8)) =
       (CONCAT44(uVar9,uVar17) ^ 0x88623578ccc420bd) + (*(uint64_t *)(lVar5 + -0xd0) ^ uVar51) ^
       uVar39;
  puVar46 = (uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x90634fd8));
  uVar32 = g_028a067c ^ (uint)*puVar46;
  *(uint64_t *)(lVar5 + -0x70) = (CONCAT44(uVar8,uVar1) | 0xf9c0fe983e085656) ^ 0x20a0007c110a189;
  uVar17 = uVar32 & 0xff;
  g_028a067c = uVar32 << 0x18 | uVar17 | uVar17 << 0x10 | uVar17 << 8;
  uVar52 = CONCAT44(g_028a067c,g_028a067c);
  puVar42 = (uint64_t *)(lVar5 - (uVar25 ^ 0x90634fc0));
  *puVar42 = (CONCAT44(g_028a0550,g_028a0550) ^ *(uint64_t *)(lVar5 + -0xa8)) +
             (*(uint64_t *)(lVar5 + -0xa0) ^ uVar39) ^ uVar52;
  *(uint64_t *)(lVar5 + -0x78) = (uVar48 ^ 0x3cb5e0) << 0x29;
  auVar66 = g_023d4e90;
  lVar38 = (CONCAT44(g_028a0720,g_028a0720) ^ *(uint64_t *)(lVar5 - (uVar21 ^ 0xccc42030))) +
           (CONCAT44(uVar11,uVar7) ^ 0x543450c2318f933a);
  uVar27 = (uint64_t)(g_028a05b4 >> 0x10) & 0xff;
  uVar41 = (g_028a05b4 >> 0x10) << 0x18 | uVar27 | uVar27 << 0x10 | uVar27 << 8;
  auVar60._4_4_ =
       g_028a0648 >> 0x18 | (g_028a0648 & 0xff0000) >> 8 | (g_028a0648 & 0xff00) << 8 |
       g_028a0648 << 0x18;
  auVar60._0_4_ = g_028a05b4;
  auVar60._8_8_ = 0;
  auVar61 = pshufb(auVar60,g_023d4e90);
  g_028a05b4 = auVar61._0_4_;
  uVar13 = g_028a05b4;
  g_028a0574 = (uint32_t)uVar41;
  uVar41 = uVar41 << 0x20 | uVar41;
  uVar54 = (uVar53 ^ *(uint64_t *)(lVar5 + -0x80)) + lVar38;
  *(uint64_t *)(lVar5 + -0x30) = uVar54 ^ uVar41;
  uVar53 = *(uint64_t *)(lVar5 + -0xb8) ^ uVar52;
  uVar27 = (uint64_t)g_028a0648 & 0xff;
  uVar49 = g_028a0648 << 0x18 | uVar27 | uVar27 << 0x10 | uVar27 << 8;
  uVar62 = auVar61._4_4_;
  auVar63._8_8_ = uVar54 + uVar53;
  auVar63._0_8_ = lVar38;
  auVar61._4_4_ = uVar13;
  auVar61._0_4_ = uVar13;
  auVar61._8_4_ = uVar62;
  auVar61._12_4_ = uVar62;
  g_028a07b0 = uVar62;
  *(uint8_t (*) [16])(lVar5 + -200) = auVar63 ^ auVar61;
  g_028a0648 = (uint)uVar49;
  uVar27 = uVar53 << (((byte)uVar8 ^ 0x86) & 0x3f);
  uVar49 = uVar49 << 0x20 | uVar49;
  *(uint64_t *)(lVar5 + -0x70) = uVar27 ^ uVar49;
  auVar65._4_4_ = g_028a0784;
  auVar65._0_4_ = g_028a0560;
  auVar65._8_8_ = 0;
  auVar66 = pshufb(auVar65,auVar66);
  g_028a0560 = auVar66._0_4_;
  uVar67 = auVar66._4_4_;
  auVar66._0_8_ = CONCAT44(g_028a0560,g_028a0560);
  auVar66._8_4_ = uVar67;
  auVar66._12_4_ = uVar67;
  auVar68._8_8_ = uVar27 | uVar53 >> 0x1f;
  auVar68._0_8_ = uVar53 >> 0x1f;
  g_028a0784 = uVar67;
  *(uint8_t (*) [16])(lVar5 + -0xa8) = auVar68 ^ auVar66;
  uVar64 = CONCAT44(uVar67,uVar67);
  uVar59 = CONCAT44(uVar62,uVar62);
  uVar27 = CONCAT44(uVar13,uVar13);
  uVar53 = SUB168(auVar63 ^ auVar61,8) ^ uVar59 ^ uVar64 ^ uVar27 ^ *puVar46;
  *(uint64_t *)(lVar5 + -0x78) = uVar53;
  puVar46 = (uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x90634f00));
  uVar17 = uVar56 & 0xff;
  g_028a0790 = uVar56 * 0x1000000 | uVar17 | uVar17 << 0x10 | uVar17 << 8;
  uVar57 = CONCAT44(g_028a0790,g_028a0790);
  *(uint64_t *)(lVar5 + -0x80) =
       (*puVar46 ^ uVar27) + (uVar37 ^ *(uint64_t *)(lVar5 - (uint64_t)(uVar1 ^ 0xafa7ce4c))) ^
       uVar57;
  uVar17 = uVar16 & 0xff;
  g_028a0678 = uVar16 * 0x1000000 | uVar17 | uVar17 << 0x10 | uVar17 << 8;
  bVar2 = (byte)uVar9;
  uVar47 = (uVar53 ^ uVar27) << ((bVar2 ^ 0x56) & 0x3f);
  uVar37 = CONCAT44(g_028a0678,g_028a0678);
  *(uint64_t *)(lVar5 + -0x30) = uVar47 ^ uVar37;
  uVar53 = (uint64_t)g_028a079c & 0xff;
  uVar53 = g_028a079c << 0x18 | uVar53 | uVar53 << 0x10 | uVar53 << 8;
  g_028a079c = (uint)uVar53;
  uVar43 = (*(uint64_t *)(lVar5 - (uint64_t)(uVar8 ^ 0xce5cafdf)) ^ uVar27) >>
           (((byte)uVar8 ^ 0xb5) & 0x3f);
  uVar53 = uVar53 << 0x20 | uVar53;
  *(uint64_t *)(lVar5 + -0xb8) = uVar43 ^ uVar53;
  uVar54 = (uint64_t)g_028a0640 & 0xff;
  uVar54 = g_028a0640 << 0x18 | uVar54 | uVar54 << 0x10 | uVar54 << 8;
  g_028a0640 = (uint)uVar54;
  uVar54 = uVar54 << 0x20 | uVar54;
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x333bdf38)) = (uVar43 | uVar47) ^ uVar54;
  *(uint64_t *)(lVar5 + -0xa0) =
       uVar57 ^ uVar54 ^ uVar59 ^ *(uint64_t *)(lVar5 + -0x70) ^
       *(uint64_t *)(lVar5 - (uVar21 ^ 0xccc42038));
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x333bdf58)) =
       (*(uint64_t *)(lVar5 + -0xc0) ^ uVar59) + (*(uint64_t *)(lVar5 + -0xf0) ^ uVar39) ^ uVar41;
  uVar43 = *(uint64_t *)(lVar5 + -0xf0) ^ uVar39;
  uVar47 = uVar43 << (((byte)uVar28 ^ 0x74) & 0x3f);
  *(uint64_t *)(lVar5 + -0x78) = uVar47 ^ uVar19;
  *(uint64_t *)(lVar5 + -0x30) =
       CONCAT44(uVar12,uVar11) ^ 0xeca8fef7fa4a2dc2 ^ CONCAT44(uVar10,uVar1);
  bVar3 = (byte)uVar33;
  *(uint64_t *)(lVar5 + -0xb8) = uVar43 >> ((bVar3 ^ 0xcb) & 0x3f) ^ uVar52;
  *(uint64_t *)(lVar5 + -0x70) =
       (*(uint64_t *)(lVar5 - (uVar35 ^ 0x886235c0)) ^ uVar52 | uVar47) ^ uVar52;
  *(uint64_t *)(lVar5 - (uVar24 ^ 0xf7fee53f)) =
       (CONCAT44(uVar1,uVar7) | 0x4c68bd44463e2671) ^ 0xa2910288a0c0d084;
  uVar43 = uVar52 ^ uVar41 ^ *(uint64_t *)(lVar5 + -0x70) ^ *(uint64_t *)(lVar5 + -0x10);
  *(uint64_t *)(lVar5 + -0x30) = uVar43 ^ uVar53;
  *(uint64_t *)(lVar5 + -0xf0) =
       (*(uint64_t *)(lVar5 - (uVar23 ^ 0x90634ff8)) ^ uVar57) + uVar43 ^ uVar50;
  *(uint64_t *)(lVar5 - (uVar21 ^ 0xccc420c0)) = uVar43 << (((byte)uVar28 ^ 0x42) & 0x3f) ^ uVar37;
  *(uint64_t *)(lVar5 - (uVar40 ^ 0xffffff3f)) =
       (*(uint64_t *)(lVar5 + -0x78) ^ uVar37) <<
       (((byte)uVar32 ^ (byte)*(void*)(lVar5 + -0xb8)) & 0x3f);
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x333bdfc8)) =
       (*(uint64_t *)(lVar5 + -0x78) ^ uVar37 |
       (*(uint64_t *)(lVar5 + -0x30) ^ uVar53) >> (((byte)uVar12 ^ 0x7e) & 0x3f)) ^ uVar59;
  *(uint64_t *)(lVar5 + -0xb8) =
       ((uVar28 << 0x20 | (uint64_t)uVar1) ^ 0xc0d371a9d7dd7568) + 0x207eb5cf016e792;
  *(uint64_t *)(lVar5 + -0xc0) =
       uVar41 ^ uVar59 ^ uVar50 ^ *(uint64_t *)(lVar5 + -0x80) ^ *(uint64_t *)(lVar5 + -0xf0);
  *(uint64_t *)(lVar5 + -0x30) = *(uint64_t *)(lVar5 + -0xa8) ^ auVar66._0_8_ ^ 0x69d201ae447f9f74
  ;
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x333bdf30)) =
       (*(uint64_t *)(lVar5 + -0xa0) ^ uVar59) + (*(uint64_t *)(lVar5 + -0x10) ^ uVar41) ^ uVar39;
  uVar43 = *(uint64_t *)(lVar5 + -0x78) ^ uVar39;
  *(uint64_t *)(lVar5 + -0x70) = *(uint64_t *)(lVar5 + -0xc0) ^ uVar41 | uVar43;
  uVar48 = (*(uint64_t *)(lVar5 - (uVar48 ^ 0x66cda2e4)) ^ uVar59) << (((byte)uVar7 ^ 0xeb) & 0x3f)
  ;
  *(uint64_t *)(lVar5 + -0xb8) = uVar48 ^ uVar49;
  *(uint64_t *)(lVar5 + -0xa8) =
       (*(uint64_t *)(lVar5 + -0xa0) ^ uVar59) >> (((byte)uVar6 ^ 0x62) & 0x3f) ^ uVar19;
  uVar48 = *(uint64_t *)(lVar5 - (uVar23 ^ 0x90634fd0)) ^ uVar19 | uVar48;
  uVar43 = uVar43 ^ uVar48;
  *(uint64_t *)(lVar5 + -0x30) = uVar48 ^ uVar54;
  *(uint64_t *)(lVar5 + -0x10) = uVar43 ^ uVar52;
  *(uint64_t *)(lVar5 + -0x70) = (*(uint64_t *)(lVar5 + -0xf0) ^ uVar50) + uVar43 ^ uVar27;
  *(uint64_t *)(lVar5 + -0xa0) = uVar43 << ((bVar2 ^ 0x58) & 0x3f) ^ uVar64;
  *puVar42 = (*(uint64_t *)(lVar5 - (uVar35 ^ 0x88623568)) ^ uVar52) >>
             (((byte)uVar11 ^ 0x58) & 0x3f) ^ uVar53;
  *(uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x90634fd0)) =
       (*(uint64_t *)(lVar5 - (uVar40 ^ 0xffffff47)) ^ uVar53 |
       *(uint64_t *)(lVar5 + -0xa0) ^ uVar64) ^ uVar37;
  puVar42 = (uint64_t *)(lVar5 - (uint64_t)(uVar10 ^ 0x66cda234));
  *(uint64_t *)(lVar5 - (uVar25 ^ 0x90634f48)) =
       uVar27 ^ uVar37 ^ uVar39 ^ *(uint64_t *)(lVar5 + -0xa8) ^ *puVar42;
  *(uint64_t *)(lVar5 + -0xf0) =
       (*(uint64_t *)(lVar5 + -0x78) ^ uVar39) +
       (*(uint64_t *)(lVar5 - (uVar23 ^ 0x90634fb8)) ^ uVar41) ^ uVar19;
  uVar43 = *(uint64_t *)(lVar5 + -0xc0) ^ uVar41;
  uVar48 = uVar43 << ((bVar31 ^ 0xdf) & 0x3f);
  *(uint64_t *)(lVar5 + -0x10) = uVar48 ^ uVar41;
  bVar4 = (byte)(uVar8 >> 0x10);
  *(uint64_t *)(lVar5 + -0xa0) =
       *(uint64_t *)(lVar5 - (uint64_t)(uVar1 ^ 0xafa7cedc)) ^ uVar59 |
       *(uint64_t *)(lVar5 + -0x30) ^ uVar39;
  *(uint64_t *)(lVar5 + -0xb8) = uVar43 >> ((bVar4 ^ 0x7c) & 0x3f) ^ uVar57;
  puVar55 = (uint64_t *)(lVar5 - (uint64_t)(uVar8 ^ 0xce5caf1f));
  uVar48 = *puVar55 ^ uVar57 | uVar48;
  *(uint64_t *)(lVar5 + -0xa8) = uVar48 ^ auVar66._0_8_;
  uVar48 = *(uint64_t *)(lVar5 - (uVar23 ^ 0x90634f88)) ^ uVar19 ^ uVar48;
  *(uint64_t *)(lVar5 + -0x78) = uVar48 ^ uVar49;
  *(uint64_t *)(lVar5 + -0x80) = (*puVar36 ^ uVar27) + uVar48 ^ uVar59;
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x333bdfe8)) =
       (CONCAT44(g_028a0548,g_028a0548) ^ *(uint64_t *)(lVar5 + -0xe0)) +
       (*(uint64_t *)(lVar5 - (uVar21 ^ 0xccc420c8)) ^ uVar27) ^ uVar50;
  uVar48 = *(uint64_t *)(lVar5 + -0x80) ^ uVar59;
  uVar47 = uVar48 << ((bVar3 ^ 0xf1) & 0x3f);
  uVar43 = uVar48 >> ((bVar2 ^ 0x4a) & 0x3f);
  *(uint64_t *)(lVar5 + -0xc0) = (*(uint64_t *)(lVar5 + -0xa0) ^ uVar50) + uVar48 ^ uVar52;
  *(uint64_t *)(lVar5 + -0xb8) = uVar47 ^ uVar54;
  uVar8 = g_028a0540;
  uVar48 = (uint64_t)g_028a0540;
  *(uint64_t *)(lVar5 + -0x10) = uVar43 ^ uVar52;
  *(uint64_t *)(lVar5 + -0xa8) = (uVar43 | uVar47) ^ uVar19;
  *(uint64_t *)(lVar5 + -0x78) =
       uVar19 ^ uVar27 ^ uVar52 ^ *(uint64_t *)(lVar5 - (uVar21 ^ 0xccc42010)) ^
       *(uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x90634fb8));
  uVar47 = (CONCAT44(uVar14,uVar7) ^ 0xf7fee5ff2245adfb) +
           (CONCAT44(g_028a073c,g_028a073c) ^ *(uint64_t *)(lVar5 + -0x90));
  uVar43 = uVar47 ^ uVar50;
  *(uint64_t *)(lVar5 + -200) = uVar43;
  uVar33 = (uint)uVar43 ^ g_028a0688;
  uVar17 = uVar33 & 0xff;
  g_028a0688 = uVar33 << 0x18 | uVar17 | uVar17 << 0x10 | uVar17 << 8;
  uVar44 = CONCAT44(g_028a0688,g_028a0688);
  *puVar42 = (*(uint64_t *)(lVar5 + -0x30) ^ uVar39) + uVar47 ^ uVar44;
  *(uint64_t *)(lVar5 - (uint64_t)(uVar1 ^ 0xafa7cefc)) =
       (uVar51 ^ *(uint64_t *)(lVar5 + -0xd0)) + ((uVar28 | uVar35 << 0x20) ^ 0xfa25f432e6d2f02f) ^
       uVar44;
  *puVar55 = (*(uint64_t *)(lVar5 + -0x70) ^ uVar44) +
             (*(uint64_t *)(lVar5 + -0xf0) ^ uVar19) + (*(uint64_t *)(lVar5 + -0xa0) ^ uVar44) ^
             uVar57;
  uVar43 = *(uint64_t *)(lVar5 + -0x70) ^ uVar44;
  uVar51 = uVar43 << (((byte)uVar6 ^ 0x58) & 0x3f);
  uVar28 = (uint64_t)g_028a0508;
  *(uint64_t *)(lVar5 + -0x10) = uVar51 ^ uVar41;
  *(uint64_t *)(lVar5 + -0xa8) = (CONCAT44(uVar9,uVar11) ^ 0xa3fd10dd6d803785) + uVar51;
  bVar3 = (byte)g_028a0514;
  *(uint64_t *)(lVar5 - (uVar29 ^ 0x2245adcd)) = uVar43 >> ((bVar4 ^ 0x6c) & 0x3f) ^ uVar44;
  uVar51 = (uint64_t)g_028a052c;
  *(uint64_t *)(lVar5 - (uVar24 ^ 0xf7fee50f)) =
       (CONCAT44(g_028a052c,uVar6) ^ 0x39532de8651b714) + (*(uint64_t *)(lVar5 + -0x10) ^ uVar41)
  ;
  uVar33 = *(uint *)(&g_023d0560 + (uVar21 ^ 0xccc420b0) + lVar20);
  *(uint64_t *)(lVar5 + -0x80) =
       (*(uint64_t *)(lVar5 + -0x30) ^ uVar44 | *(uint64_t *)(lVar5 + -0x10) ^ uVar41) ^ uVar49;
  uVar29 = uVar29 ^ 0x2245ad8d;
  *(uint64_t *)(lVar5 - uVar29) = 0xad130e61e169d956 >> (*(byte *)(lVar5 + -0xa8) & 0x3f);
  uVar43 = uVar49 ^ uVar57 ^ *(uint64_t *)(lVar5 + -0x80) ^
           *(uint64_t *)(lVar5 - (uVar25 ^ 0x90634fc0));
  *(uint64_t *)(lVar5 + -0xf0) = uVar43 ^ uVar19;
  *(uint64_t *)(lVar5 + -0x10) = (uVar52 ^ *(uint64_t *)(lVar5 + -0xc0)) + uVar43 ^ uVar44;
  *(uint64_t *)(lVar5 - (uVar23 ^ 0x90634f48)) =
       CONCAT44(g_028a0528,uVar12) ^ *(uint64_t *)(lVar5 + -0x70) ^ 0xdd46516f63641218;
  bVar4 = (byte)g_028a0524;
  uVar43 = *(uint64_t *)(lVar5 + -0xf0) ^ uVar19;
  *(uint64_t *)(lVar5 + -0xa8) = uVar43 << ((byte)g_028a0524 & 0x3f) ^ uVar37;
  *(uint64_t *)(lVar5 - (uVar40 ^ 0xffffff7f)) = uVar43 >> ((bVar2 ^ 0x74) & 0x3f) ^ uVar54;
  *(uint64_t *)(lVar5 + -0xc0) =
       (*(uint64_t *)(lVar5 - (uVar24 ^ 0xf7fee57f)) ^ uVar54 |
       uVar37 ^ *(uint64_t *)(lVar5 + -0xa8)) ^ uVar57;
  *(void*)(lVar5 - uVar29) = 0x5e13d65f53;
  *(uint64_t *)(lVar5 + -0x30) =
       uVar64 ^ uVar57 ^ uVar44 ^ *(uint64_t *)(lVar5 + -0xc0) ^ *(uint64_t *)(lVar5 + -0x10);
  uVar40 = *(uint64_t *)(lVar5 + -0x78) ^ uVar27;
  *(uint64_t *)(lVar5 + -0xa8) =
       (uVar57 ^ *(uint64_t *)(lVar5 - (uint64_t)(uVar1 ^ 0xafa7cee4))) + uVar40 ^ auVar66._0_8_;
  *(uint64_t *)(lVar5 - (uVar48 ^ 0x88623508)) = uVar40 << ((bVar30 ^ 0x7d) & 0x3f) ^ uVar19;
  *(uint64_t *)(lVar5 + -0xc0) =
       (*(uint64_t *)(lVar5 - (uVar51 ^ 0xe1841f11)) ^ uVar27) >> ((bVar3 ^ 0x65) & 0x3f) ^ uVar53;
  *(uint64_t *)(lVar5 + -0xb8) =
       (*(uint64_t *)(lVar5 - (uVar21 ^ 0xccc42070)) ^ uVar50) + 0xed89fc7e45b10d78;
  *puVar46 = (uVar53 ^ *(uint64_t *)(lVar5 - (uVar28 ^ 0x800234f0)) |
             *(uint64_t *)(lVar5 + -0x70) ^ uVar19) ^ uVar41;
  uVar1 = *(uint *)(&g_023d0570 + lVar20);
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x333bdf80)) =
       uVar41 ^ uVar59 ^ auVar66._0_8_ ^ *(uint64_t *)(lVar5 + -0x78) ^
       *(uint64_t *)(lVar5 + -0xa8);
  *(uint64_t *)(lVar5 - ((uint64_t)g_028a050c ^ 0x1f69e13c)) =
       uVar54 ^ *(uint64_t *)(lVar5 - (uVar35 ^ 0x886235f8)) | 0x9017fe2808b4ac98;
  uVar48 = (uVar44 ^ *(uint64_t *)(lVar5 - (uVar23 ^ 0x90634f68))) +
           (*(uint64_t *)(lVar5 + -200) ^ uVar59);
  *(uint64_t *)(lVar5 + -0xc0) = uVar39 ^ uVar48;
  *(uint64_t *)(lVar5 + -0x78) = (*(uint64_t *)(lVar5 + -0xf0) ^ uVar19) << ((byte)uVar48 & 0x3f);
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x333bdfc8)) =
       (*(uint64_t *)(lVar5 - uVar26) ^ uVar59) << ((bVar4 ^ 0xa3) & 0x3f) ^ uVar49;
  *(uint64_t *)(lVar5 + -0xb8) =
       uVar19 ^ *(uint64_t *)(lVar5 + -0x70) | CONCAT44(uVar8,uVar12) ^ 0xbcbb8eee06e7adba;
  *(uint64_t *)(lVar5 - (uVar25 ^ 0x90634f68)) =
       (uVar59 ^ *(uint64_t *)(lVar5 + -200)) >> ((bVar2 ^ 0x51) & 0x3f) ^ uVar27;
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x333bdf30)) =
       (uVar27 ^ *(uint64_t *)(lVar5 + -0x10) | uVar49 ^ *(uint64_t *)(lVar5 + -0x80)) ^ uVar50;
  *(int64_t *)(lVar5 + -0xf0) = 0x2479baff14e89447 << ((bVar31 ^ 0xdd) & 0x3f);
  *(uint64_t *)(lVar5 + -0x70) =
       uVar50 ^ uVar39 ^ *(uint64_t *)(lVar5 + -0x78) ^ *(uint64_t *)(lVar5 + -0xc0) ^
       CONCAT44(g_028a0674,g_028a0674);
  *(uint *)(&g_028a0820 + (int64_t)(int)(uVar1 ^ uVar6) * 4) = uVar33 ^ uVar7;
  return;
}


// Function: FUN_00a0db7e
// Address: 00a0db7e
// Size: 4490 bytes
// Class: Unknown

void FUN_00a0db7e(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint32_t uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint uVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint uVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  uint uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  
  uVar11 = g_028a0794;
  uVar9 = g_028a0544;
  uVar8 = g_028a0540;
  uVar6 = g_028a0528;
  uVar5 = g_028a0520;
  uVar29 = g_028a0518;
  uVar14 = g_028a0514;
  uVar15 = g_028a04fc;
  lVar4 = g_028a04d0;
  uVar24 = (uint64_t)g_028a0520;
  uVar10 = ~g_028a0520;
  uVar35 = (uint64_t)g_028a0540;
  uVar28 = (uint64_t)g_028a0514;
  uVar18 = g_028a0514 & g_028a0540;
  g_028a0510 = uVar18 ^ 0x3a31ff6;
  uVar34 = (uint64_t)g_028a0518;
  uVar16 = (uint64_t)g_028a0544;
  uVar43 = g_028a0544 + g_028a0518;
  uVar23 = (uint64_t)g_028a0528;
  uVar30 = (uint64_t)g_028a04fc;
  uVar1 = g_028a04fc | g_028a0528;
  uVar45 = CONCAT44(g_028a0784,g_028a0784);
  uVar26 = (uint64_t)g_028a0794 & 0xff;
  uVar31 = g_028a0794 << 0x18 | uVar26 | uVar26 << 0x10 | uVar26 << 8;
  g_028a0794 = (uint)uVar31;
  uVar31 = uVar31 << 0x20 | uVar31;
  lVar12 = (int64_t)g_028a0844;
  g_028a04f8 = uVar1;
  g_028a0508 = uVar43;
  g_028a0530 = uVar10;
  *(uint64_t *)(g_028a04d0 - (uVar34 ^ 0xf7fee547)) =
       (*(uint64_t *)(g_028a04d0 + -0x30) ^ uVar45) +
       (CONCAT44(g_028a0560,g_028a0560) ^ *(uint64_t *)(g_028a04d0 - (uVar30 ^ 0x2245ad55)))
       ^ uVar31;
  uVar26 = CONCAT44(g_028a07b0,g_028a07b0);
  *(uint64_t *)(lVar4 + -0x10) =
       (*(uint64_t *)(lVar4 + -200) ^ uVar26) + (CONCAT44(uVar8,uVar9) ^ 0x80c05bac17db5294);
  uVar13 = (uint64_t)(uVar11 >> 0x10) & 0xff;
  uVar38 = (uVar11 >> 0x10) << 0x18 | uVar13 | uVar13 << 0x10 | uVar13 << 8;
  g_028a07a0 = (uint32_t)uVar38;
  uVar27 = (*(uint64_t *)(lVar4 - (uint64_t)(uVar43 ^ 0x88623547)) ^ uVar45) <<
           (((byte)uVar5 ^ 0x6d) & 0x3f);
  uVar38 = uVar38 << 0x20 | uVar38;
  *(uint64_t *)(lVar4 + -0x80) = uVar27 ^ uVar38;
  uVar11 = g_028a07a4 + g_028a06b0 & 0xff;
  uVar11 = (g_028a07a4 + g_028a06b0) * 0x1000000 | uVar11 | uVar11 << 0x10 | uVar11 << 8;
  uVar13 = (uint64_t)g_028a07a4 & 0xff;
  uVar40 = g_028a07a4 << 0x18 | uVar13 | uVar13 << 0x10 | uVar13 << 8;
  uVar36 = CONCAT44(uVar11,uVar11);
  uVar44 = (*(uint64_t *)(lVar4 + -0x30) ^ uVar45) >> 0x18 ^ uVar36;
  *(uint64_t *)(lVar4 + -0xf0) = uVar44;
  uVar27 = *(uint64_t *)(lVar4 - (uVar28 ^ 0x35788892)) ^ uVar36 | uVar27;
  g_028a07a4 = (uint)uVar40;
  uVar40 = uVar40 << 0x20 | uVar40;
  *(uint64_t *)(lVar4 + -0x78) = uVar27 ^ uVar40;
  uVar13 = (uint64_t)g_028a06b0 & 0xff;
  uVar13 = g_028a06b0 << 0x18 | uVar13 | uVar13 << 0x10 | uVar13 << 8;
  uVar27 = uVar27 ^ uVar31 ^ *(uint64_t *)(lVar4 + -0xb8);
  g_028a06b0 = (uint)uVar13;
  uVar42 = uVar13 | uVar13 << 0x20;
  *(uint64_t *)(lVar4 + -0xa8) = uVar27 ^ uVar42;
  uVar19 = CONCAT44(g_028a05a4,g_028a05a4);
  *(uint64_t *)(lVar4 + -200) =
       (*(uint64_t *)(lVar4 - (uVar24 ^ 0xadfd2285)) ^ uVar19) + uVar27 ^ uVar40;
  uVar27 = uVar27 << (((byte)uVar1 ^ 0xf8) & 0x3f);
  *(uint64_t *)(lVar4 + -0x10) = uVar27 ^ uVar42;
  puVar17 = (uint64_t *)(lVar4 - (uVar24 ^ 0xadfd228d));
  *(uint64_t *)(lVar4 + -0x30) =
       (*puVar17 ^ uVar40) + (CONCAT44(uVar18,uVar29) ^ 0xfc32719bc8f7eb3);
  uVar13 = (uVar13 << 0x20 ^ *(uint64_t *)(lVar4 - (uVar23 ^ 0x5a0885d))) >> 0x3b;
  *(uint64_t *)(lVar4 + -0x80) = uVar13 ^ uVar31;
  *(uint64_t *)(lVar4 + -0x78) = (uint64_t)((uint)uVar44 ^ uVar11) << 0x37;
  uVar13 = uVar13 | uVar27;
  *(uint64_t *)(lVar4 + -0xc0) = uVar13 ^ uVar38;
  *(uint64_t *)(lVar4 - (uVar16 ^ 0x90634fd0)) =
       *(uint64_t *)(lVar4 - (uVar35 ^ 0x886235b0)) ^ uVar31 ^ uVar40 ^ uVar13;
  uVar11 = g_028a0674;
  uVar13 = CONCAT44(g_028a0674,g_028a0674);
  *(uint64_t *)(lVar4 + -0xf0) =
       (*(uint64_t *)(lVar4 + -0xb8) ^ uVar31) + (uVar13 ^ *(uint64_t *)(lVar4 + -0x70)) ^ uVar38;
  *(uint64_t *)(lVar4 - (uVar28 ^ 0x3578881a)) =
       (uint64_t)((uint)*(uint64_t *)(lVar4 + -0x70) ^ uVar11) << 0x25 ^ uVar36;
  bVar2 = (byte)uVar14;
  *(uint64_t *)(lVar4 - (uVar24 ^ 0xadfd22c5)) =
       (uVar13 ^ *(uint64_t *)(lVar4 + -0x70)) >> ((bVar2 ^ 0x79) & 0x3f) ^ uVar36;
  *(uint64_t *)(lVar4 + -0x10) = (CONCAT44(uVar29,uVar43) | 0x78986b6c2f011042) ^ 0x602041390064688
  ;
  *(uint64_t *)(lVar4 - (uVar30 ^ 0x2245ad3d)) =
       (*(uint64_t *)(lVar4 + -0x80) ^ uVar36 | *(uint64_t *)(lVar4 + -0x78) ^ uVar36) ^ uVar36;
  bVar3 = (byte)uVar8;
  *(uint64_t *)(lVar4 + -0xb8) = *(uint64_t *)(lVar4 + -0x30) >> ((bVar3 ^ 0x70) & 0x3f);
  *(uint64_t *)(lVar4 + -0x70) =
       *(uint64_t *)(lVar4 + -0xc0) ^ uVar38 ^ *(uint64_t *)(lVar4 + -0xf0);
  *(uint64_t *)(lVar4 - (uVar34 ^ 0xf7fee5ef)) =
       (CONCAT44(uVar15,uVar6) ^ 0x9e4d311df6bdf8f6) >> (((byte)uVar9 ^ 0x73) & 0x3f);
  uVar27 = CONCAT44(g_028a0688,g_028a0688);
  uVar44 = CONCAT44(g_028a079c,g_028a079c);
  puVar20 = (uint64_t *)(lVar4 - (uint64_t)(uVar1 ^ 0x27e5ad7d));
  *puVar20 = (*(uint64_t *)(lVar4 + -0x70) ^ uVar36) + (*(uint64_t *)(lVar4 + -0xa0) ^ uVar27) ^
             uVar44;
  uVar13 = (CONCAT44(g_028a0720,g_028a0720) ^ *(uint64_t *)(lVar4 + -0x88)) +
           (*(uint64_t *)(lVar4 + -200) ^ uVar40);
  *(uint64_t *)(lVar4 + -0x78) = uVar13 ^ uVar42;
  uVar13 = (*puVar20 ^ uVar44) + uVar13;
  *(uint64_t *)(lVar4 + -0xb8) = uVar13 ^ uVar40;
  *(uint64_t *)(lVar4 + -0x30) =
       (*(uint64_t *)(lVar4 - (uint64_t)(uVar18 ^ 0x600018)) ^ uVar42) >> ((byte)uVar13 & 0x3f);
  *(uint64_t *)(lVar4 - (uVar16 ^ 0x90634fb8)) =
       (*(uint64_t *)(lVar4 + -0x80) ^ uVar44) << ((bVar2 ^ 0x7b) & 0x3f) ^ uVar38;
  *(uint64_t *)(lVar4 + -0x10) =
       (CONCAT44(uVar29,uVar1) ^ 0x1c2978199f4f858e) + (CONCAT44(uVar5,uVar43) ^ 0xf240193e4c65e69f)
  ;
  *(uint64_t *)(lVar4 + -0xa0) =
       (uVar44 ^ *(uint64_t *)(lVar4 + -0x80)) >> (((byte)uVar9 ^ 0x5f) & 0x3f) ^ uVar42;
  puVar20 = (uint64_t *)(lVar4 - (uVar24 ^ 0xadfd22e5));
  *(uint64_t *)(lVar4 + -0x70) =
       (*puVar20 ^ uVar42 | *(uint64_t *)(lVar4 + -0xc0) ^ uVar38) ^ uVar42;
  *puVar17 = CONCAT44(uVar6,uVar14) ^ 0x2c373c4c5f2b7dd9;
  *(uint64_t *)(lVar4 + -0x78) =
       uVar31 ^ uVar40 ^ uVar42 ^ *(uint64_t *)(lVar4 - (uint64_t)(uVar1 ^ 0x27e5ad8d)) ^
       *(uint64_t *)(lVar4 + -0xb8);
  uVar21 = CONCAT44(g_028a0614,g_028a0614);
  uVar44 = (CONCAT44(uVar5,uVar5) ^ 0xadfd2245adfd2242) + (*(uint64_t *)(lVar4 + -0x28) ^ uVar21);
  uVar22 = CONCAT44(g_028a0574,g_028a0574);
  uVar13 = uVar44 ^ uVar22;
  *(uint64_t *)(lVar4 + -0x30) = uVar13;
  uVar11 = (uint)uVar13 ^ g_028a05c8;
  uVar25 = uVar11 & 0xff;
  uVar11 = uVar11 << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar42 = CONCAT44(uVar11,uVar11);
  g_028a05c8 = uVar11;
  *(uint64_t *)(lVar4 + -0x10) =
       (*(uint64_t *)(lVar4 - (uVar24 ^ 0xadfd22ed)) ^ uVar31) + uVar44 ^ uVar42;
  *(uint64_t *)(lVar4 - (uint64_t)(uVar43 ^ 0x886235f7)) =
       (CONCAT44(g_028a073c,g_028a073c) ^ *(uint64_t *)(lVar4 + -0x90)) +
       (CONCAT44(uVar18,uVar14) ^ 0xb670de90500309f2) ^ uVar42;
  uVar44 = *(uint64_t *)(lVar4 + -0x80) ^ uVar42;
  *(uint64_t *)(lVar4 + -0xc0) = CONCAT44(uVar8,uVar1) ^ 0xfa8db9795eee6916 ^ uVar44;
  uVar44 = (*(uint64_t *)(lVar4 + -0xf0) ^ uVar38) + uVar44;
  *(uint64_t *)(lVar4 + -0xa0) = uVar44 ^ uVar42;
  uVar44 = (*(uint64_t *)(lVar4 + -0x10) ^ uVar42) + uVar44;
  *(uint64_t *)(lVar4 + -200) = uVar44 ^ uVar38;
  uVar13 = (uint64_t)(uVar11 ^ *(uint *)(lVar4 - (uVar30 ^ 0x2245aded))) << 0x21;
  *(uint64_t *)(lVar4 + -0x70) = uVar13 ^ uVar42;
  uVar32 = (*(uint64_t *)(lVar4 - (uVar16 ^ 0x90634f68)) ^ uVar42) >> ((bVar3 ^ 0x67) & 0x3f);
  *(uint64_t *)(lVar4 + -0xa8) = CONCAT44(g_028a0648,g_028a0648) ^ uVar32;
  uVar13 = uVar13 | uVar32;
  *(uint64_t *)(lVar4 + -0x30) = uVar13 ^ uVar36;
  uVar11 = g_028a0690;
  *(uint64_t *)(lVar4 + -0xc0) = (CONCAT44(uVar14,uVar43) ^ 0x4b2034179c72b027) + uVar32;
  uVar25 = g_028a0690 + g_028a068c;
  uVar14 = uVar25 & 0xff;
  uVar37 = uVar25 * 0x1000000 | uVar14 | uVar14 << 0x10 | uVar14 << 8;
  uVar13 = uVar13 ^ uVar44;
  uVar39 = CONCAT44(uVar37,uVar37);
  *(uint64_t *)(lVar4 + -0xf0) = uVar39 ^ uVar13;
  uVar44 = (uint64_t)g_028a068c & 0xff;
  uVar41 = g_028a068c << 0x18 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar32 = uVar41 << 0x20 | uVar41;
  g_028a068c = (uint)uVar41;
  *(uint64_t *)(lVar4 + -0xa0) = (*(uint64_t *)(lVar4 + -0xb8) ^ uVar40) + uVar13 ^ uVar32;
  *(uint64_t *)(lVar4 - (uint64_t)(uVar1 ^ 0x27e5aded)) =
       (CONCAT44(uVar10,uVar5) ^ 0x9f7f4358c72ab50e) + (CONCAT44(uVar29,uVar8) ^ 0x30ce3821c314a35f)
  ;
  uVar13 = (uint64_t)g_028a0690 & 0xff;
  uVar33 = g_028a0690 << 0x18 | uVar13 | uVar13 << 0x10 | uVar13 << 8;
  g_028a0690 = (uint)uVar33;
  uVar33 = uVar33 << 0x20 | uVar33;
  *(uint64_t *)(lVar4 + -0xc0) =
       (*(uint64_t *)(lVar4 - (uVar28 ^ 0x35788892)) ^ uVar39) << ((bVar2 ^ 0x4c) & 0x3f) ^ uVar33;
  *(uint64_t *)(lVar4 - (uVar30 ^ 0x2245ad55)) =
       (*(uint64_t *)(lVar4 + -0x30) ^ uVar36) + 0xb2c3240313ae3b15;
  uVar13 = (*(uint64_t *)(lVar4 + -0xf0) ^ uVar39) >> ((bVar3 ^ 0x6a) & 0x3f);
  *(uint64_t *)(lVar4 + -0xb8) = uVar13 ^ uVar32;
  *(uint64_t *)(lVar4 + -0x10) = (CONCAT44(uVar29,uVar6) | 0xf18c740f9afccaae) ^ 0x21005001031511;
  uVar13 = *(uint64_t *)(lVar4 - (uVar30 ^ 0x2245ad3d)) ^ uVar33 | uVar13;
  *(uint64_t *)(lVar4 + -0x30) = uVar13 ^ uVar33;
  *(uint64_t *)(lVar4 + -0xa8) = *(uint64_t *)(lVar4 + -0xa0) ^ uVar13;
  *(uint64_t *)(lVar4 - (uint64_t)(uVar18 ^ 0x600090)) = uVar13 | 0xbc3b802232acc4ff;
  uVar31 = uVar31 ^ *(uint64_t *)(lVar4 + -0x78);
  uVar44 = (*puVar17 ^ uVar38) + uVar31 ^ uVar39;
  *(uint64_t *)(lVar4 + -0x10) = uVar44;
  *(uint64_t *)(lVar4 + -0xb8) = CONCAT44(uVar8,uVar8) ^ 0x681c79a8e0d7724c;
  uVar13 = uVar31 << (((byte)uVar5 ^ 0x49) & 0x3f);
  uVar31 = uVar31 >> (((byte)uVar43 ^ 0x43) & 0x3f);
  *(uint64_t *)(lVar4 + -0xc0) = uVar13 ^ uVar39;
  *(uint64_t *)(lVar4 + -0xf0) = uVar31 ^ uVar32;
  uVar13 = (uVar13 | uVar31) ^ uVar39;
  *(uint64_t *)(lVar4 + -200) = uVar13;
  *(uint64_t *)(lVar4 - (uVar23 ^ 0x5a0884d)) = uVar44 ^ uVar33 ^ uVar13;
  *(uint64_t *)(lVar4 + -0x30) =
       (CONCAT44(uVar5,uVar15) ^ 0xf1630d99e8d0b586) + (CONCAT44(uVar6,uVar15) ^ 0x3ef4b1029926fd5c)
  ;
  uVar23 = *(uint64_t *)(lVar4 + -0xb8) ^ uVar33;
  uVar13 = (*(uint64_t *)(lVar4 + -0xa0) ^ uVar32) + uVar23 ^ uVar32;
  *(uint64_t *)(lVar4 + -0x78) = uVar13;
  *(uint64_t *)(lVar4 + -0xc0) =
       (uint64_t)(*(uint *)(lVar4 - (uVar34 ^ 0xf7fee547)) ^ uVar11) << 0x3a ^ uVar33;
  uVar23 = uVar23 >> 6;
  *(uint64_t *)(lVar4 + -0xf0) = uVar23 ^ uVar39;
  *(uint64_t *)(lVar4 + -200) =
       (*(uint64_t *)(lVar4 - (uVar34 ^ 0xf7fee53f)) ^ uVar33 | uVar23) ^ uVar33;
  *(uint64_t *)(lVar4 + -0x30) = (CONCAT44(uVar18,uVar29) ^ 0xf2cb096f4ebea898) + uVar23;
  *puVar20 = uVar33 ^ uVar32 ^ uVar39 ^ *(uint64_t *)(lVar4 - (uVar16 ^ 0x90634fb0)) ^ uVar13;
  *(uint64_t *)(lVar4 + -0xb8) =
       (CONCAT44(uVar9,uVar6) ^ 0xf03a57d884e3fac0) <<
       (((byte)uVar25 ^ (byte)*(void*)(lVar4 + -0xf0)) & 0x3f);
  uVar23 = (*(uint64_t *)(lVar4 - (uVar34 ^ 0xf7fee557)) ^ uVar32) +
           (*(uint64_t *)(lVar4 + -0x10) ^ uVar39);
  *(uint64_t *)(lVar4 + -0xc0) = uVar23 ^ uVar33;
  uVar13 = *(uint64_t *)(lVar4 + -0xa8) ^ uVar32;
  *(uint64_t *)(lVar4 + -0x30) = uVar13 << ((bVar2 ^ 0x74) & 0x3f) ^ uVar33;
  uVar13 = uVar13 >> (((byte)g_028a0500 ^ 0xd5) & 0x3f);
  *(uint64_t *)(lVar4 + -200) = uVar13 ^ uVar39;
  uVar14 = *(uint *)(&g_023d0568 + lVar12);
  uVar13 = *(uint64_t *)(lVar4 - (uint64_t)(uVar1 ^ 0x27e5adcd)) ^ uVar33 | uVar13;
  *(uint64_t *)(lVar4 + -0xf0) = uVar13 ^ uVar39;
  *(uint64_t *)(lVar4 + -0xb8) = *(uint64_t *)(lVar4 + -0x70) ^ uVar42 ^ uVar13;
  uVar13 = uVar13 ^ uVar23;
  *(uint64_t *)(lVar4 + -0x10) = uVar13 ^ uVar32;
  uVar44 = CONCAT44(g_028a0778,g_028a0778);
  *(uint64_t *)(lVar4 + -0xa8) = (*(uint64_t *)(lVar4 + -0x78) ^ uVar32) + uVar13 ^ uVar44;
  *(uint64_t *)(lVar4 + -0x30) = (*(uint64_t *)(lVar4 - (uVar24 ^ 0xadfd228d)) ^ uVar39) + uVar13;
  uVar34 = (uint64_t)(*(uint *)(lVar4 - ((uint64_t)g_028a051c ^ 0xafa7ce4c)) ^ (uint)uVar41) <<
           0x20;
  *(uint64_t *)(lVar4 + -0xb8) = uVar27 ^ uVar34;
  uVar13 = (*(uint64_t *)(lVar4 - (uVar24 ^ 0xadfd2255)) ^ uVar32) >>
           (((byte)uVar43 ^ 0x57) & 0x3f);
  *(uint64_t *)(lVar4 + -0x70) = uVar33 ^ uVar13;
  *(uint64_t *)(lVar4 + -0xf0) = (uVar13 | uVar34) ^ uVar40;
  *(uint64_t *)(lVar4 + -0x78) =
       uVar40 ^ uVar32 ^ uVar44 ^ *(uint64_t *)(lVar4 - (uVar16 ^ 0x90634f88)) ^
       *(uint64_t *)(lVar4 - (uVar24 ^ 0xadfd22ed));
  uVar13 = *(uint64_t *)(lVar4 + -0xa0) ^ uVar39;
  uVar23 = uVar23 + uVar13;
  *(uint64_t *)(lVar4 + -200) = uVar23 ^ uVar45;
  *(int64_t *)(lVar4 + -0x30) = 0x789bf8a429cc10f7 << ((byte)uVar23 & 0x3f);
  *(uint64_t *)(lVar4 + -0x10) = uVar13 << (((byte)uVar6 ^ 0xd5) & 0x3f) ^ uVar19;
  uVar23 = CONCAT44(g_028a0790,g_028a0790);
  *(uint64_t *)(lVar4 - (uVar16 ^ 0x90634fc0)) =
       ((uint64_t)uVar37 << 0x20 ^ *(uint64_t *)(lVar4 + -0xa0)) >> 0x20 ^ uVar23;
  uVar13 = *(uint64_t *)(lVar4 + -0xb8) ^ uVar23 | uVar19 ^ *(uint64_t *)(lVar4 + -0x10);
  *(uint64_t *)(lVar4 + -0x70) = uVar23 ^ uVar13;
  uVar23 = CONCAT44(g_028a0678,g_028a0678);
  *(uint64_t *)(lVar4 - (uint64_t)(uVar43 ^ 0x88623587)) =
       uVar45 ^ *(uint64_t *)(lVar4 + -200) ^ uVar23 ^ uVar13;
  uVar44 = uVar44 ^ *(uint64_t *)(lVar4 + -0xa8);
  *(uint64_t *)(lVar4 + -0xc0) = (CONCAT44(uVar29,uVar6) ^ 0xf2fbdcebd2815a00) + uVar44;
  uVar13 = (uVar23 ^ *(uint64_t *)(lVar4 + -0xf0)) +
           (*(uint64_t *)(lVar4 - (uVar28 ^ 0x357888e2)) ^ uVar42);
  *(uint64_t *)(lVar4 + -0x30) = uVar36 ^ uVar13;
  uVar44 = (CONCAT44(g_028a0624,g_028a0624) ^ *(uint64_t *)(lVar4 + -0xd0)) + uVar44;
  *(uint64_t *)(lVar4 + -0xa0) = uVar26 ^ uVar44;
  uVar28 = CONCAT44(g_028a04d8,g_028a04d8);
  *(uint64_t *)(lVar4 + -0xb8) = uVar44 + uVar13 ^ uVar28;
  *(uint64_t *)(lVar4 + -0x10) =
       (*(uint64_t *)(lVar4 - ((uint64_t)g_028a0504 ^ 0xce5caf1f)) ^ uVar28) +
       (CONCAT44(uVar10,uVar6) ^ 0xa5190a92088c7652);
  uVar26 = uVar13 << (((byte)g_028a050c ^ 0x8a) & 0x3f);
  uVar13 = uVar13 >> (((byte)uVar15 ^ 0xcf) & 0x3f);
  *(uint64_t *)(lVar4 + -0x70) = uVar38 ^ uVar26;
  *(uint64_t *)(lVar4 + -0xc0) = uVar39 ^ uVar13;
  uVar7 = g_028a0534;
  *(uint64_t *)(lVar4 + -0x80) =
       (CONCAT44(g_028a0534,uVar8) | 0x12021dbdd2cd61ed) ^ 0xe1a0e00028021012;
  *(uint64_t *)(lVar4 - (uVar16 ^ 0x90634f88)) = (uVar13 | uVar26) ^ uVar42;
  *(uint64_t *)(lVar4 + -0xa8) =
       uVar28 ^ uVar32 ^ uVar42 ^ *(uint64_t *)(lVar4 + -0xf0) ^ *(uint64_t *)(lVar4 + -0xb8);
  uVar26 = CONCAT44(g_028a0548,g_028a0548) ^ *(uint64_t *)(lVar4 + -0xe0);
  *(uint64_t *)(lVar4 + -0xa0) = uVar26 + 8 ^ uVar22;
  uVar15 = g_028a04e8 ^ *(uint *)(lVar4 - (uVar24 ^ 0xadfd22e5));
  uVar29 = uVar15 & 0xff;
  uVar32 = uVar32 ^ *(uint64_t *)(lVar4 + -0x78);
  g_028a04e8 = uVar15 << 0x18 | uVar29 | uVar29 << 0x10 | uVar29 << 8;
  uVar24 = CONCAT44(g_028a04e8,g_028a04e8);
  *(uint64_t *)(lVar4 + -0x10) = uVar32 + 8 + uVar26 ^ uVar24;
  *(uint64_t *)(lVar4 + -0x30) =
       (uVar21 ^ *(uint64_t *)(lVar4 - (uVar35 ^ 0x88623550))) +
       (CONCAT44(g_028a0538,g_028a0524) ^ 0x543450c2b2d04073) ^ uVar24;
  *(uint64_t *)(lVar4 + -0x80) = (CONCAT44(uVar7,uVar43) ^ 0x3b99ed024faef188) + uVar32;
  *(uint *)(&g_028a0820 + (int64_t)(int)(*(uint *)(&g_023d0570 + lVar12) ^ uVar6) * 4) =
       uVar14 ^ uVar1;
  return;
}


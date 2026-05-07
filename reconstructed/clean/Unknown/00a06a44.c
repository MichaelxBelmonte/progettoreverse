// Function: FUN_00a06a44
// Address: 00a06a44
// Size: 5027 bytes
// Class: Unknown

void FUN_00a06a44(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint32_t uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  byte bVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint64_t uVar26;
  uint uVar27;
  uint64_t uVar28;
  uint64_t *puVar29;
  uint uVar30;
  uint uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint uVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  uint64_t uVar43;
  uint64_t uVar44;
  
  uVar27 = g_028a0774;
  uVar13 = g_028a0694;
  uVar6 = g_028a0540;
  uVar11 = g_028a0530;
  uVar10 = g_028a0528;
  uVar9 = g_028a0524;
  uVar8 = g_028a0518;
  uVar7 = g_028a050c;
  lVar5 = g_028a04d0;
  uVar38 = (uint64_t)g_028a0518;
  uVar16 = (uint64_t)g_028a0528;
  uVar14 = g_028a0528 ^ g_028a0518;
  uVar22 = (uint64_t)g_028a0540;
  uVar1 = g_028a0540 << 0x10 | g_028a0540 >> 0x10;
  uVar26 = (uint64_t)g_028a0530;
  uVar20 = (uint64_t)g_028a0524;
  uVar15 = g_028a0524 & g_028a0530;
  uVar17 = (uint64_t)g_028a050c;
  uVar2 = g_028a050c << 0x10 | g_028a050c >> 0x10;
  uVar3 = g_028a05bc | g_028a0780;
  lVar18 = (int64_t)g_028a082c;
  g_028a0508 = uVar15;
  g_028a0514 = uVar1;
  g_028a052c = uVar2;
  g_028a0538 = uVar14;
  *(uint64_t *)(g_028a04d0 + -0x80) =
       CONCAT44(g_028a0734,g_028a0734) ^ **(uint64_t **)(g_028a04d0 + -0x48);
  uVar28 = CONCAT44(g_028a0750,g_028a0750) ^
           *(uint64_t *)(lVar5 - ((uint64_t)uVar15 ^ 0x800234f0)) |
           CONCAT44(g_028a076c,g_028a076c) ^ *(uint64_t *)(lVar5 + -200);
  uVar30 = g_028a04e0 - g_028a0764 ^ 0x2cde1a15;
  uVar35 = uVar30 & 0xff;
  g_028a05b8 = uVar30 << 0x18 | uVar35 | uVar35 << 0x10 | uVar35 << 8;
  uVar36 = CONCAT44(g_028a05b8,g_028a05b8);
  *(uint64_t *)(lVar5 + -0xf0) = uVar28 ^ uVar36;
  uVar42 = CONCAT44(g_028a0610,g_028a0610);
  uVar19 = (uint64_t)g_028a04e0 & 0xff;
  uVar19 = g_028a04e0 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar32 = uVar19 << 0x20 | uVar19;
  g_028a04e0 = (uint)uVar19;
  *(uint64_t *)(lVar5 + -0x70) = uVar28 ^ uVar42 ^ *(uint64_t *)(lVar5 + -0x78) ^ uVar32;
  uVar19 = (uint64_t)g_028a0764 & 0xff;
  uVar40 = g_028a0764 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  g_028a0764 = (uint)uVar40;
  uVar40 = uVar40 << 0x20 | uVar40;
  *(uint64_t *)(lVar5 - (uVar17 ^ 0x1f69e104)) =
       (*(uint64_t *)(lVar5 - (uVar20 ^ 0xa11a7ec4)) ^ uVar32) +
       (CONCAT44(g_028a059c,g_028a059c) ^ *(uint64_t *)(lVar5 + -0xb8)) ^ uVar40;
  uVar19 = (uint64_t)g_028a0774 & 0xff;
  uVar33 = g_028a0774 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  g_028a0774 = (uint)uVar33;
  uVar33 = uVar33 << 0x20 | uVar33;
  uVar19 = *(uint64_t *)(lVar5 + -0x70) ^ uVar32;
  uVar34 = uVar19 << (((byte)(uVar6 >> 0x10) ^ 0x42) & 0x3f);
  uVar19 = uVar19 >> (((byte)uVar14 ^ 0x2a) & 0x3f);
  uVar28 = uVar19 | uVar34;
  *(uint64_t *)(lVar5 + -200) = uVar34 ^ uVar33;
  uVar30 = uVar27 * g_028a0694 & 0xff;
  uVar27 = uVar27 * g_028a0694 * 0x1000000 | uVar30 | uVar30 << 0x10 | uVar30 << 8;
  uVar23 = CONCAT44(uVar27,uVar27);
  *(uint64_t *)(lVar5 + -0xf0) = uVar19 ^ uVar23;
  uVar19 = (uint64_t)g_028a0694 & 0xff;
  uVar43 = g_028a0694 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar19 = (uint64_t)g_028a0780 & 0xff;
  uVar19 = g_028a0780 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  g_028a0694 = (uint)uVar43;
  uVar44 = uVar43 | uVar43 << 0x20;
  uVar41 = uVar19 << 0x20 | uVar19;
  *(uint64_t *)(lVar5 + -0xb8) = uVar28 ^ uVar44;
  g_028a0780 = (uint)uVar19;
  *(uint64_t *)(lVar5 + -0xc0) = uVar40 ^ uVar41 ^ uVar28 ^ *(uint64_t *)(lVar5 + -0x80);
  uVar34 = CONCAT44(g_028a06cc,g_028a06cc);
  uVar19 = (uint64_t)uVar3 & 0xff;
  uVar19 = uVar3 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  g_028a0664 = (uint32_t)uVar19;
  uVar19 = uVar19 << 0x20 | uVar19;
  *(uint64_t *)(lVar5 + -0x70) =
       (uVar42 ^ *(uint64_t *)(lVar5 - (uint64_t)(uVar14 ^ 0xf25e6d72))) +
       (*(uint64_t *)(lVar5 - (uVar38 ^ 0xf7fee557)) ^ uVar34) ^ uVar19;
  *(uint64_t *)(lVar5 + -200) = (CONCAT44(uVar7,uVar6) ^ 0xf1fc4e4a26f27d33) + 0xe114d12c963d8795;
  uVar28 = (uint64_t)g_028a05bc & 0xff;
  uVar39 = g_028a05bc << 0x18 | uVar28 | uVar28 << 0x10 | uVar28 << 8;
  g_028a05bc = (uint)uVar39;
  uVar39 = uVar39 << 0x20 | uVar39;
  puVar29 = (uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x800234c0));
  *puVar29 = (*(uint64_t *)(lVar5 + -0xa8) ^ uVar34) << (((byte)uVar11 ^ 0x58) & 0x3f) ^ uVar39;
  *(int64_t *)(lVar5 - (uVar20 ^ 0xa11a7ecc)) =
       0xf0abb53782b7965 << (*(byte *)(lVar5 + -0xa0) & 0x3f);
  bVar4 = (byte)uVar10;
  uVar28 = (uVar34 ^ *(uint64_t *)(lVar5 - (uVar20 ^ 0xa11a7e1c))) >> ((bVar4 ^ 0xd5) & 0x3f);
  *(uint64_t *)(lVar5 + -200) = uVar28 ^ uVar33;
  *(uint64_t *)(lVar5 + -0xa0) =
       *(uint64_t *)(lVar5 + -0xb8) ^ uVar44 | CONCAT44(uVar8,uVar11) ^ 0xbf175b277e217ffe;
  *(uint64_t *)(lVar5 - (uint64_t)(uVar1 ^ 0x3578881a)) =
       (*(uint64_t *)(lVar5 + -0xf0) ^ uVar39 | uVar28) ^ uVar23;
  uVar28 = uVar23 ^ uVar19 ^ *(uint64_t *)(lVar5 - (uVar22 ^ 0x88623500)) ^
           *(uint64_t *)(lVar5 + -0x70);
  *(uint64_t *)(lVar5 + -0xa8) = uVar28 ^ uVar32;
  *(uint64_t *)(lVar5 + -0xf0) =
       (CONCAT44(g_028a078c,g_028a078c) ^ *(uint64_t *)(lVar5 + -0x68)) + uVar28 ^ uVar44;
  *(uint64_t *)(lVar5 - (uVar16 ^ 0x5a0883d)) =
       *(uint64_t *)(lVar5 - (uint64_t)(uVar14 ^ 0xf25e6dfa)) ^ uVar44 ^
       *(uint64_t *)(lVar5 + -0xa0);
  *(uint64_t *)(lVar5 + -0x78) =
       (CONCAT44(g_028a073c,g_028a073c) ^ *(uint64_t *)(lVar5 + -0x90)) +
       (*(uint64_t *)(lVar5 - (uint64_t)(uVar2 ^ 0xe1841fe9)) ^ uVar40) ^ uVar41;
  *(uint64_t *)(lVar5 + -0xa8) =
       (*(uint64_t *)(lVar5 + -0xf0) ^ uVar44) +
       (*(uint64_t *)(lVar5 - (uVar26 ^ 0x88623500)) ^ uVar41) ^ uVar40;
  *(uint64_t *)(lVar5 - (uVar17 ^ 0x1f69e14c)) =
       (CONCAT44(uVar14,uVar6) ^ 0xf4c10ae583618d9f) + (CONCAT44(uVar8,uVar9) ^ 0x51d633f014e7ff4);
  puVar24 = (uint64_t *)(lVar5 - (uint64_t)(uVar1 ^ 0x35788892));
  uVar28 = (*puVar24 ^ uVar44) * 0x4000;
  *(uint64_t *)(lVar5 + -0xa0) = uVar28 ^ uVar36;
  *(uint64_t *)(lVar5 - (uVar26 ^ 0x886235f8)) =
       (*(uint64_t *)(lVar5 - (uint64_t)(uVar1 ^ 0x357888ca)) ^ uVar40) + uVar28;
  uVar6 = g_028a0500;
  uVar3 = g_028a04f8;
  uVar42 = (uint64_t)g_028a04f8;
  uVar28 = (uint64_t)g_028a0500;
  uVar35 = g_028a0500 * g_028a04f8;
  uVar34 = (uVar43 << 0x20 ^ *(uint64_t *)(lVar5 + -0xf0)) >> 0x32;
  g_028a0510 = uVar35;
  *(uint64_t *)(lVar5 + -0x78) = uVar34 ^ uVar39;
  *(uint64_t *)(lVar5 + -200) = (*(uint64_t *)(lVar5 + -0xa0) ^ uVar36 | uVar34) ^ uVar33;
  *(uint64_t *)(lVar5 - (uVar28 ^ 0xffffff7f)) =
       CONCAT44(uVar3,uVar35) ^ uVar44 ^ *(uint64_t *)(lVar5 + -0xb8) ^ 0xdf3335a0398d898f;
  *(uint64_t *)(lVar5 + -0xf0) =
       uVar33 ^ uVar44 ^ uVar40 ^ *(uint64_t *)(lVar5 - (uVar42 ^ 0x333bdf80)) ^
       *(uint64_t *)(lVar5 - (uVar28 ^ 0xffffff57));
  uVar34 = (CONCAT44(uVar35,uVar6) ^ 0xccc420b8fffffffb) +
           (CONCAT44(g_028a0720,g_028a0720) ^ *(uint64_t *)(lVar5 + -0x88)) ^ uVar36;
  *(uint64_t *)(lVar5 + -0xa0) = uVar34;
  g_028a0760 = (uint)uVar34 ^ g_028a0760;
  *(uint64_t *)(lVar5 - (uVar42 ^ 0x333bdf30)) =
       (CONCAT44(uVar3,uVar2) ^ 0x9676be269fdbc38c) + (CONCAT44(uVar35,uVar6) ^ 0x7eecb9e43a4d3e7d);
  uVar43 = (uVar41 ^ *(uint64_t *)(lVar5 + -0xc0)) + (*(uint64_t *)(lVar5 + -0xa0) ^ uVar36);
  uVar27 = g_028a0760 & 0xff;
  g_028a0760 = g_028a0760 << 0x18 | uVar27 | uVar27 << 0x10 | uVar27 << 8;
  uVar41 = CONCAT44(g_028a0760,g_028a0760);
  *(uint64_t *)(lVar5 + -0xb8) = uVar41 ^ uVar43;
  uVar34 = (CONCAT44(g_028a0548,g_028a0548) ^ *(uint64_t *)(lVar5 + -0xe0)) +
           (CONCAT44(uVar8,uVar6) ^ 0x41ee3b0f9a847e6f);
  *(uint64_t *)(lVar5 + -0x78) = uVar41 ^ uVar34;
  *(uint64_t *)(lVar5 - (uVar38 ^ 0xf7fee58f)) =
       (*(uint64_t *)(lVar5 + -0x70) ^ uVar19) + uVar34 + uVar43 ^ uVar19;
  *(uint64_t *)(lVar5 + -0xc0) =
       CONCAT44(uVar3,uVar14) ^ uVar36 ^ *(uint64_t *)(lVar5 + -0xa0) ^ 0xd3d1e0f25c54dcbe;
  *(uint64_t *)(lVar5 - (uVar17 ^ 0x1f69e144)) =
       (*(uint64_t *)(lVar5 + -0xb8) ^ uVar41) << 0x10 ^ uVar41;
  *(uint64_t *)(lVar5 + -0x10) = uVar36 ^ *(uint64_t *)(lVar5 + -0xa0) | 0xc9ec7686325cc018;
  *(uint64_t *)(lVar5 - (uint64_t)(uVar35 ^ 0xccc42018)) =
       (*(uint64_t *)(lVar5 + -0xb8) ^ uVar41) >> (((byte)uVar7 ^ 0xb4) & 0x3f) ^ uVar41;
  *(uint64_t *)(lVar5 - (uVar22 ^ 0x88623568)) =
       (*(uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x80023490)) ^ uVar41 |
       *(uint64_t *)(lVar5 - (uVar42 ^ 0x333bdf88)) ^ uVar41) ^ uVar32;
  uVar34 = uVar32 ^ uVar19 ^ *(uint64_t *)(lVar5 + -0x10) ^
           *(uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x80023440));
  uVar36 = CONCAT44(g_028a061c,g_028a061c);
  *(uint64_t *)(lVar5 + -0xb8) = uVar36 ^ uVar34;
  *(uint64_t *)(lVar5 + -0xc0) = (*(uint64_t *)(lVar5 + -0xa8) ^ uVar40) + uVar34 ^ uVar40;
  *(uint64_t *)(lVar5 + -0xa8) = uVar34 << ((byte)uVar9 & 0x3f) ^ uVar44;
  uVar30 = g_028a0544;
  uVar27 = g_028a051c;
  uVar37 = (uint64_t)g_028a051c;
  uVar43 = (uint64_t)g_028a0544;
  uVar31 = g_028a0544 & g_028a051c;
  g_028a053c = uVar31;
  *(uint64_t *)(lVar5 - ((uint64_t)uVar31 ^ 0x90634f48)) =
       (*(uint64_t *)(lVar5 - (uVar37 ^ 0xffffff37)) ^ uVar33) << (*(byte *)(lVar5 + -0x80) & 0x3f)
  ;
  bVar21 = (byte)uVar31;
  *(uint64_t *)(lVar5 - (uVar43 ^ 0x90634fb0)) =
       (uVar36 ^ *(uint64_t *)(lVar5 - (uVar43 ^ 0x90634fc0))) >> ((bVar21 ^ 0x74) & 0x3f) ^ uVar23
  ;
  *(uint64_t *)(lVar5 - (uVar28 ^ 0xffffff7f)) =
       (CONCAT44(uVar31,uVar27) ^ 0x77515aaa3a0c6354) >> ((bVar21 ^ 0x43) & 0x3f);
  uVar34 = *(uint64_t *)(lVar5 + -0xa8) ^ uVar44;
  *(uint64_t *)(lVar5 + -0x80) =
       (*(uint64_t *)(lVar5 + -200) ^ uVar23 | uVar34) ^ *(uint64_t *)(lVar5 + -0xc0);
  *(uint64_t *)(lVar5 + -200) =
       (*(uint64_t *)(lVar5 + -0x70) ^ uVar19) + (*(uint64_t *)(lVar5 + -0xf0) ^ uVar44) ^ uVar33;
  *(uint64_t *)(lVar5 + -0xb8) = (*(uint64_t *)(lVar5 + -0x10) ^ uVar32) + uVar34;
  *(uint64_t *)(lVar5 - (uVar37 ^ 0xffffff5f)) =
       (uint64_t)((uint)*(uint64_t *)(lVar5 + -0xf0) ^ uVar13) << 0x39 ^ uVar32;
  uVar34 = (*(uint64_t *)(lVar5 + -0xf0) ^ uVar44) >> ((bVar21 ^ 0x7f) & 0x3f);
  *(uint64_t *)(lVar5 + -0x30) = uVar34 ^ uVar39;
  *(uint64_t *)(lVar5 - (uint64_t)(uVar2 ^ 0xe1841f19)) = uVar34 + 0xbc987bc29e7ea0ba;
  uVar34 = CONCAT44(g_028a0650,g_028a0650);
  *(uint64_t *)(lVar5 - (uVar28 ^ 0xffffff47)) =
       (uVar39 ^ *(uint64_t *)(lVar5 + -0x30) | *(uint64_t *)(lVar5 + -0xa0) ^ uVar32) ^ uVar34;
  uVar39 = CONCAT44(g_028a0570,g_028a0570);
  uVar36 = *(uint64_t *)(lVar5 - (uVar37 ^ 0xffffff47)) ^ uVar33 ^ uVar34 ^
           *(uint64_t *)(lVar5 + -200);
  *(uint64_t *)(lVar5 + -0xa8) = uVar39 ^ uVar36;
  uVar34 = (uint64_t)g_028a04e4 & 0xff;
  uVar34 = g_028a04e4 << 0x18 | uVar34 | uVar34 << 0x10 | uVar34 << 8;
  g_028a04e4 = (uint)uVar34;
  uVar34 = uVar34 << 0x20 | uVar34;
  *(uint64_t *)(lVar5 - (uVar26 ^ 0x88623568)) =
       (*(uint64_t *)(lVar5 + -0xc0) ^ uVar40) + uVar36 ^ uVar34;
  *puVar24 = (uVar32 ^ *(uint64_t *)(lVar5 - (uVar42 ^ 0x333bdfe8))) + 0x35b433a3c84049d4;
  *(uint64_t *)(lVar5 - (uVar38 ^ 0xf7fee58f)) =
       (*(uint64_t *)(lVar5 + -0xa8) ^ uVar39) << (((byte)uVar15 ^ 0x27) & 0x3f) ^ uVar23;
  *(int64_t *)(lVar5 + -0x30) = 0x465e18ca9c3c0c9 << (((byte)uVar3 ^ 99) & 0x3f);
  *(uint64_t *)(lVar5 - (uVar37 ^ 0xffffff47)) =
       (uVar39 ^ *(uint64_t *)(lVar5 + -0xa8)) >> (((byte)uVar30 ^ 0x51) & 0x3f) ^ uVar44;
  uVar39 = CONCAT44(g_028a05a0,g_028a05a0);
  *(uint64_t *)(lVar5 + -0xc0) =
       (*(uint64_t *)(lVar5 + -0xb8) ^ uVar44 | uVar23 ^ *(uint64_t *)(lVar5 + -0x70)) ^ uVar39;
  *(uint64_t *)(lVar5 - (uVar17 ^ 0x1f69e124)) =
       CONCAT44(uVar10,uVar2) ^ *(uint64_t *)(lVar5 - (uint64_t)(uVar31 ^ 0x90634f88)) ^
       0xb05968aa0028e1b;
  puVar25 = (uint64_t *)(lVar5 - (uint64_t)(uVar35 ^ 0xccc420a8));
  uVar23 = uVar34 ^ uVar39 ^ uVar19 ^ *(uint64_t *)(lVar5 + -0xc0) ^ *puVar25;
  *(uint64_t *)(lVar5 + -0x30) = uVar23;
  *(uint64_t *)(lVar5 + -0xa8) =
       (CONCAT44(uVar27,uVar7) ^ 0xec749d5b968bb7c3) + (uVar44 ^ *(uint64_t *)(lVar5 + -0xb8));
  uVar42 = (uint64_t)g_028a0810 & 0xff;
  uVar42 = g_028a0810 << 0x18 | uVar42 | uVar42 << 0x10 | uVar42 << 8;
  g_028a0810 = (uint)uVar42;
  uVar42 = uVar42 << 0x20 | uVar42;
  uVar32 = *(uint64_t *)(lVar5 + -0x80) ^ uVar40;
  *(uint64_t *)(lVar5 + -0x70) = (uVar33 ^ *(uint64_t *)(lVar5 + -200)) + uVar32 ^ uVar42;
  uVar40 = (uVar40 ^ *(uint64_t *)(lVar5 - (uVar43 ^ 0x90634ff8))) <<
           (((byte)uVar14 ^ 0x22) & 0x3f);
  uVar36 = CONCAT44(g_028a0738,g_028a0738);
  *(uint64_t *)(lVar5 + -0xf0) = uVar36 ^ uVar40;
  *(uint64_t *)(lVar5 + -0xa0) = uVar23 ^ uVar19 | uVar40;
  uVar12 = g_028a0658;
  uVar23 = CONCAT44(g_028a0658,g_028a0658);
  *(uint64_t *)(lVar5 - (uint64_t)(uVar14 ^ 0xf25e6db2)) =
       uVar32 >> ((bVar21 ^ 0x60) & 0x3f) ^ uVar23;
  *(uint64_t *)(lVar5 + -0xa8) = uVar39 ^ *(uint64_t *)(lVar5 + -0xc0) ^ 0xb463e9713c9ac16f;
  uVar23 = uVar23 ^ *(uint64_t *)(lVar5 + -0xb8) | *(uint64_t *)(lVar5 + -0xf0) ^ uVar36;
  *(uint64_t *)(lVar5 + -200) = CONCAT44(g_028a066c,g_028a066c) ^ uVar23;
  *(uint64_t *)(lVar5 + -0xa0) =
       (uVar36 ^ *puVar24) >>
       (((byte)*(void*)(lVar5 - (uVar20 ^ 0xa11a7e0c)) ^ (byte)uVar12) & 0x3f);
  uVar40 = CONCAT44(g_028a0614,g_028a0614);
  *(uint64_t *)(lVar5 + -0x80) =
       uVar42 ^ uVar23 ^ *(uint64_t *)(lVar5 - (uVar26 ^ 0x88623508)) ^ uVar40;
  *(uint64_t *)(lVar5 - (uVar28 ^ 0xffffff3f)) =
       (CONCAT44(uVar3,uVar8) ^ 0xbac926c27df0d0cc) >> ((byte)uVar23 & 0x3f);
  uVar12 = g_028a0710;
  uVar23 = *(uint64_t *)(lVar5 + -0x80) ^ uVar40;
  uVar36 = CONCAT44(g_028a0710,g_028a0710);
  *(uint64_t *)(lVar5 + -0xf0) = (uVar34 ^ *(uint64_t *)(lVar5 + -0x10)) + uVar23 ^ uVar36;
  *(uint64_t *)(lVar5 + -0xa0) =
       (CONCAT44(uVar1,uVar1) ^ 0x189551f7a534ad2c) + (CONCAT44(uVar11,uVar6) ^ 0xcf42b98ba13b87d1);
  uVar20 = CONCAT44(g_028a0568,g_028a0568);
  *(uint64_t *)(lVar5 + -0xb8) =
       (*(uint64_t *)(lVar5 - (uVar22 ^ 0x886235f8)) ^ uVar40) << 5 ^ uVar20;
  *(int64_t *)(lVar5 + -200) = *(int64_t *)(lVar5 + -0xa8) * 2;
  uVar34 = (uint64_t)g_028a080c & 0xff;
  uVar34 = g_028a080c << 0x18 | uVar34 | uVar34 << 0x10 | uVar34 << 8;
  g_028a080c = (uint)uVar34;
  uVar34 = uVar34 << 0x20 | uVar34;
  *(uint64_t *)(lVar5 - (uVar17 ^ 0x1f69e144)) = uVar23 >> ((bVar4 ^ 0xce) & 0x3f) ^ uVar34;
  *(uint64_t *)(lVar5 + -0x10) =
       0x1b7345c8a74a2027 >> (((byte)*(void*)(lVar5 + -0xf0) ^ (byte)uVar12) & 0x3f);
  uVar23 = CONCAT44(g_028a0634,g_028a0634);
  *(uint64_t *)(lVar5 - (uVar28 ^ 0xffffff5f)) =
       (uVar34 ^ *(uint64_t *)(lVar5 + -0xc0) |
       uVar20 ^ *(uint64_t *)(lVar5 - (uVar38 ^ 0xf7fee547))) ^ uVar23;
  uVar38 = CONCAT44(g_028a0550,g_028a0550);
  *(uint64_t *)(lVar5 + -0xa8) =
       *(uint64_t *)(lVar5 + -0xa0) ^ uVar36 ^ uVar23 ^ *puVar29 ^ uVar38;
  *(uint64_t *)(lVar5 + -200) =
       0x435be635d62bbdd8 >> (((byte)*(void*)(lVar5 + -0xf0) ^ (byte)uVar12) & 0x3f);
  uVar1 = g_028a0668 | g_028a0778;
  uVar20 = (uint64_t)g_028a0778 & 0xff;
  uVar28 = g_028a0778 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  g_028a0778 = (uint)uVar28;
  uVar28 = uVar28 << 0x20 | uVar28;
  *(uint64_t *)(lVar5 + -0x80) =
       (uVar42 ^ *(uint64_t *)(lVar5 + -0x70)) + (*(uint64_t *)(lVar5 + -0x30) ^ uVar19) ^ uVar28;
  uVar20 = (uint64_t)uVar1 & 0xff;
  uVar34 = uVar1 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  g_028a0674 = (uint32_t)uVar34;
  uVar34 = uVar34 << 0x20 | uVar34;
  *puVar25 = (*(uint64_t *)(lVar5 - (uVar37 ^ 0xffffffcf)) ^ uVar19) << ((bVar21 ^ 0x5d) & 0x3f) ^
             uVar34;
  *(uint64_t *)(lVar5 + -0xb8) =
       (CONCAT44(uVar14,uVar9) ^ 0x4a0bcf2e3e0944ba) << (((byte)g_028a0520 ^ 0x7c) & 0x3f);
  uVar20 = (uint64_t)g_028a0668 & 0xff;
  uVar20 = g_028a0668 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  g_028a0668 = (uint)uVar20;
  uVar20 = uVar20 << 0x20 | uVar20;
  uVar19 = (uVar19 ^ *(uint64_t *)(lVar5 + -0x30)) >> (((byte)uVar7 ^ 0x9f) & 0x3f);
  *(uint64_t *)(lVar5 + -0xc0) = uVar19 ^ uVar20;
  uVar19 = *(uint64_t *)(lVar5 + -0x10) ^ uVar34 | uVar19;
  *(uint64_t *)(lVar5 + -0xa0) = uVar19 ^ uVar20;
  uVar19 = *(uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x800234b0)) ^ uVar28 ^ uVar19;
  *(uint64_t *)(lVar5 + -200) = uVar19 ^ uVar34;
  *(uint64_t *)(lVar5 - (uVar16 ^ 0x5a08885)) =
       (uVar41 ^ *(uint64_t *)(lVar5 + -0x78)) + uVar19 ^ uVar28;
  *(uint64_t *)(lVar5 - (uint64_t)(uVar15 ^ 0x80023488)) =
       uVar38 ^ uVar20 ^ *(uint64_t *)(lVar5 + -0xc0) ^ *(uint64_t *)(lVar5 + -0xa8);
  uVar1 = *(uint *)(&g_023d0568 + lVar18);
  *(uint64_t *)(lVar5 - (uVar17 ^ 0x1f69e1b4)) =
       (uVar40 ^ *(uint64_t *)(lVar5 + -0x28)) + (uVar36 ^ *(uint64_t *)(lVar5 + -0xf0)) ^ uVar28;
  *(uint64_t *)(lVar5 - (uVar26 ^ 0x88623568)) =
       (*(uint64_t *)(lVar5 + -0x70) ^ uVar28) + (*(uint64_t *)(lVar5 + -0x30) ^ uVar28) ^ uVar20;
  *(uint64_t *)(lVar5 + -0xa0) =
       (CONCAT44(uVar8,uVar27) ^ 0xe080457a12187a9d) >> (((byte)uVar30 ^ 0x6a) & 0x3f);
  *(uint64_t *)(lVar5 + -0x78) =
       (uVar28 ^ *(uint64_t *)(lVar5 + -0x70)) << (((byte)(uVar7 >> 0x10) ^ 0x70) & 0x3f) ^ uVar34;
  *(uint *)(&g_028a0820 + (int64_t)(int)(*(uint *)(&g_023d0570 + lVar18) ^ uVar2) * 4) =
       uVar1 ^ uVar7;
  return;
}


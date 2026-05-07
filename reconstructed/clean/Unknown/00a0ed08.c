// Function: FUN_00a0ed08
// Address: 00a0ed08
// Size: 5867 bytes
// Class: Unknown

void FUN_00a0ed08(void)

{
  byte bVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint uVar28;
  uint64_t uVar29;
  int64_t lVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint uVar36;
  uint64_t uVar37;
  uint uVar38;
  uint uVar39;
  uint64_t uVar40;
  uint64_t *puVar41;
  uint64_t uVar42;
  uint64_t uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t *puVar49;
  uint64_t uVar50;
  uint uVar51;
  uint64_t uVar52;
  uint64_t uVar53;
  uint64_t uVar54;
  uint64_t uVar55;
  
  uVar4 = g_028a0744;
  uVar7 = g_028a0540;
  uVar3 = g_028a0518;
  uVar28 = g_028a0514;
  lVar2 = g_028a04d0;
  uVar18 = (uint64_t)g_028a0518;
  uVar45 = (uint64_t)g_028a0514;
  uVar11 = g_028a0514 ^ g_028a0518;
  uVar55 = (uint64_t)g_028a0540;
  uVar29 = CONCAT44(g_028a073c,g_028a073c);
  uVar19 = g_028a0744 + g_028a04f4 & 0xff;
  uVar19 = (g_028a0744 + g_028a04f4) * 0x1000000 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar52 = CONCAT44(uVar19,uVar19);
  uVar9 = (uint64_t)g_028a04f4 & 0xff;
  uVar13 = g_028a04f4 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  uVar36 = g_028a0540 + g_028a0538;
  uVar12 = g_028a071c | g_028a074c;
  uVar19 = g_028a0638 >> 0x18;
  uVar40 = CONCAT44(g_028a0630,g_028a0630) ^ *(uint64_t *)(g_028a04d0 + -8);
  uVar46 = (*(uint64_t *)(g_028a04d0 + -0x68) ^ uVar29) + uVar40 ^ uVar52;
  lVar30 = (int64_t)g_028a0848;
  g_028a0500 = uVar11;
  g_028a0504 = uVar36;
  *(uint64_t *)(g_028a04d0 + -0xb8) = uVar46;
  g_028a04f4 = (uint)uVar13;
  uVar13 = uVar13 << 0x20 | uVar13;
  *(uint64_t *)(lVar2 + -0x68) = uVar40 << 5 ^ uVar13;
  uVar9 = (uint64_t)g_028a0744 & 0xff;
  uVar24 = g_028a0744 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  g_028a0744 = (uint)uVar24;
  uVar9 = uVar40 >> (((byte)uVar36 ^ 0x9c) & 0x3f);
  uVar25 = uVar24 | uVar24 << 0x20;
  uVar40 = uVar40 << 5 | uVar9;
  *(uint64_t *)(lVar2 + -0x70) = uVar9 ^ uVar25;
  uVar38 = g_028a0658 + g_028a0748 & 0xff;
  g_028a0750 = (g_028a0658 + g_028a0748) * 0x1000000 | uVar38 | uVar38 << 0x10 | uVar38 << 8;
  *(uint64_t *)(lVar2 + -8) = CONCAT44(g_028a0750,g_028a0750) ^ uVar40;
  uVar9 = (uint64_t)g_028a0658 & 0xff;
  uVar9 = g_028a0658 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  g_028a0658 = (uint)uVar9;
  uVar9 = uVar9 << 0x20 | uVar9;
  *(uint64_t *)(lVar2 - (uVar45 ^ 0x8011a68)) = uVar52 ^ uVar9 ^ uVar46 ^ uVar40;
  uVar47 = CONCAT44(g_028a0708,g_028a0708);
  uVar40 = (uint64_t)g_028a0748 & 0xff;
  uVar40 = g_028a0748 << 0x18 | uVar40 | uVar40 << 0x10 | uVar40 << 8;
  g_028a0748 = (uint)uVar40;
  uVar40 = uVar40 << 0x20 | uVar40;
  *(uint64_t *)(lVar2 + -0x70) =
       (CONCAT44(g_028a0804,g_028a0804) ^ *(uint64_t *)(lVar2 + -0x60)) +
       (*(uint64_t *)(lVar2 - (uVar45 ^ 0x8011af0)) ^ uVar47) ^ uVar40;
  uVar38 = g_028a0738;
  uVar46 = (uint64_t)g_028a0738 & 0xff;
  uVar46 = g_028a0738 << 0x18 | uVar46 | uVar46 << 0x10 | uVar46 << 8;
  g_028a0738 = (uint)uVar46;
  uVar46 = uVar46 << 0x20 | uVar46;
  uVar10 = (uint64_t)g_028a0538 ^ 0x45fa7a27;
  puVar14 = (uint64_t *)(lVar2 - uVar10);
  *puVar14 = (*(uint64_t *)(lVar2 - (uint64_t)(uVar11 ^ 0xffffff0f)) ^ uVar47) <<
             (((byte)uVar7 ^ 0x5d) & 0x3f) ^ uVar46;
  uVar15 = (uint64_t)(uVar38 & g_028a0788) & 0xff;
  uVar53 = (uVar38 & g_028a0788) << 0x18 | uVar15 | uVar15 << 0x10 | uVar15 << 8;
  uVar53 = uVar53 << 0x20 | uVar53;
  uVar48 = (uVar47 ^ *(uint64_t *)(lVar2 - (uVar18 ^ 0xf7fee50f))) >>
           (((byte)uVar11 ^ 0xe4) & 0x3f);
  *(uint64_t *)(lVar2 + -0x60) = uVar53 ^ uVar48;
  uVar15 = (uint64_t)g_028a0788 & 0xff;
  uVar15 = g_028a0788 << 0x18 | uVar15 | uVar15 << 0x10 | uVar15 << 8;
  uVar48 = *(uint64_t *)(lVar2 - (uVar18 ^ 0xf7fee5f7)) ^ uVar46 | uVar48;
  g_028a0788 = (uint)uVar15;
  uVar15 = uVar15 << 0x20 | uVar15;
  g_028a04d8 = uVar19 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar47 = CONCAT44(g_028a04d8,g_028a04d8);
  *(uint64_t *)(lVar2 + -0xf0) = uVar48 ^ uVar15;
  *(uint64_t *)(lVar2 + -8) = uVar40 ^ uVar47 ^ uVar48 ^ *(uint64_t *)(lVar2 + -0x70);
  *(uint64_t *)(lVar2 + -0x60) =
       (CONCAT44(uVar11,g_028a0538) ^ 0xd0822296617b03e4) << (((byte)uVar28 ^ 0x27) & 0x3f);
  uVar31 = CONCAT44(g_028a0720,g_028a0720);
  uVar16 = (*(uint64_t *)(lVar2 - (uVar45 ^ 0x8011a88)) ^ uVar31) +
           (CONCAT44(uVar7,uVar3) ^ 0xfa25f432814f5aa8);
  *(uint64_t *)(lVar2 + -0x60) = uVar16 ^ uVar9;
  puVar41 = (uint64_t *)(lVar2 - (uint64_t)(uVar11 ^ 0xfffffff7));
  uVar48 = (uint64_t)g_028a0638 & 0xff;
  uVar48 = g_028a0638 << 0x18 | uVar48 | uVar48 << 0x10 | uVar48 << 8;
  g_028a0638 = (uint)uVar48;
  uVar48 = uVar48 << 0x20 | uVar48;
  *(uint64_t *)(lVar2 + -0xa8) =
       (*(uint64_t *)(lVar2 - (uVar55 ^ 0x88623518)) ^ uVar9) + (uVar47 ^ *puVar41) ^ uVar48;
  *puVar41 = (CONCAT44(uVar36,uVar3) ^ 0xfe272c74034bbc0c) >> ((byte)uVar16 & 0x3f);
  uVar20 = CONCAT44(g_028a0548,g_028a0548);
  *(uint64_t *)(lVar2 - (uVar45 ^ 0x8011a08)) =
       (*(uint64_t *)(lVar2 + -0xe0) ^ uVar20) + (*(uint64_t *)(lVar2 + -0xb8) ^ uVar52) ^ uVar52;
  uVar19 = g_028a0620 - g_028a075c & 0xff;
  g_028a0564 = (g_028a0620 - g_028a075c) * 0x1000000 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar54 = CONCAT44(g_028a0564,g_028a0564);
  uVar42 = (*(uint64_t *)(lVar2 - (uint64_t)(uVar11 ^ 0xffffff57)) ^ uVar48) +
           (*(uint64_t *)(lVar2 + -8) ^ uVar52) ^ uVar54;
  *(uint64_t *)(lVar2 + -0xb8) = uVar42;
  uVar19 = g_028a063c >> 0x18;
  g_028a0570 = uVar19 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar17 = CONCAT44(g_028a0570,g_028a0570);
  uVar44 = *(uint64_t *)(lVar2 + -0xa8) ^ uVar48;
  uVar47 = uVar44 << 0x19;
  *(uint64_t *)(lVar2 + -8) = uVar17 ^ uVar47;
  uVar16 = (uint64_t)g_028a063c & 0xff;
  uVar16 = g_028a063c << 0x18 | uVar16 | uVar16 << 0x10 | uVar16 << 8;
  g_028a063c = (uint)uVar16;
  uVar16 = uVar16 << 0x20 | uVar16;
  *(uint64_t *)(lVar2 + -0xa0) = uVar44 >> (((byte)uVar11 ^ 0xd8) & 0x3f) ^ uVar16;
  *(uint64_t *)(lVar2 + -0xa8) = (CONCAT44(uVar36,uVar3) ^ 0x76a6f01c9a76bc8e) + 0xd73c77200166191e
  ;
  *(uint64_t *)(lVar2 + -0xa8) =
       (*(uint64_t *)(lVar2 - (uVar45 ^ 0x8011aa0)) ^ uVar16 | uVar47) ^ uVar16;
  *(void*)(lVar2 + -8) = 0xcd35792c6c422000;
  uVar6 = g_028a052c;
  uVar47 = (uint64_t)g_028a071c & 0xff;
  uVar32 = g_028a071c << 0x18 | uVar47 | uVar47 << 0x10 | uVar47 << 8;
  uVar21 = uVar32 | uVar32 << 0x20;
  g_028a071c = (uint)uVar32;
  *(uint64_t *)(lVar2 - ((uint64_t)g_028a0538 ^ 0x45fa7a8f)) =
       uVar16 ^ uVar21 ^ uVar54 ^ *(uint64_t *)(lVar2 - ((uint64_t)g_028a052c ^ 0xb20894f0)) ^
       uVar42;
  *(uint64_t *)(lVar2 + -8) =
       (CONCAT44(uVar28,uVar7) ^ 0x8011a0088623579) +
       (*(uint64_t *)(lVar2 - (uVar45 ^ 0x8011a90)) ^ uVar29) ^ uVar53;
  uVar5 = g_028a0528;
  uVar51 = g_028a056c ^ *(uint *)(lVar2 - (uint64_t)(uVar36 ^ 0xce5cafaf));
  uVar19 = uVar51 & 0xff;
  g_028a056c = uVar51 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar47 = CONCAT44(g_028a056c,g_028a056c);
  uVar16 = (uint64_t)g_028a0528;
  *(uint64_t *)(lVar2 - (uVar16 ^ 0x5a0885d)) =
       (uVar9 ^ *(uint64_t *)(lVar2 + -0x68)) + (*puVar14 ^ uVar53) ^ uVar47;
  uVar38 = g_028a051c;
  uVar42 = (CONCAT44(g_028a0624,g_028a0624) ^ *(uint64_t *)(lVar2 + -0xd0)) +
           (CONCAT44(uVar11,uVar36) ^ 0x49ef210fab272e37);
  uVar9 = (uint64_t)uVar12 & 0xff;
  uVar37 = uVar12 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  g_028a05ac = (uint32_t)uVar37;
  uVar37 = uVar37 << 0x20 | uVar37;
  uVar33 = (uint64_t)g_028a051c;
  *(uint64_t *)(lVar2 + -8) = uVar42 ^ uVar37;
  uVar28 = g_028a0530;
  uVar34 = (uint64_t)g_028a0530;
  *(uint64_t *)(lVar2 + -0x68) =
       (*(uint64_t *)(lVar2 + -0xf0) ^ uVar15) +
       (CONCAT44(uVar7,g_028a0530) ^ 0x1cd9774c3ea96a75);
  uVar9 = (uint64_t)g_028a074c & 0xff;
  uVar44 = g_028a074c << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  g_028a074c = (uint)uVar44;
  uVar44 = uVar44 << 0x20 | uVar44;
  *(uint64_t *)(lVar2 + -0xf0) = (*(uint64_t *)(lVar2 + -0x70) ^ uVar40) + uVar42 ^ uVar44;
  uVar12 = g_028a0508;
  uVar19 = g_028a04fc;
  uVar9 = (uint64_t)g_028a0620 & 0xff;
  uVar42 = g_028a0620 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  uVar22 = (uint64_t)g_028a04fc;
  uVar35 = (uint64_t)g_028a0508;
  uVar8 = g_028a0508 & g_028a04fc;
  uVar26 = uVar35 ^ 0x9f6de17e;
  g_028a0620 = (uint)uVar42;
  uVar42 = uVar42 << 0x20 | uVar42;
  uVar43 = *(uint64_t *)(lVar2 + -0xa8) ^ uVar47;
  g_028a050c = uVar8;
  *(uint64_t *)(lVar2 + -0x68) = (*(uint64_t *)(lVar2 - uVar26) ^ uVar44) + uVar43 ^ uVar42;
  uVar9 = (uint64_t)g_028a075c & 0xff;
  uVar27 = g_028a075c << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  uVar9 = uVar43 << (((byte)uVar8 ^ 0xa5) & 0x3f);
  uVar50 = uVar27 << 0x20 | uVar27;
  g_028a075c = (uint)uVar27;
  *(uint64_t *)(lVar2 + -0x70) = uVar9 ^ uVar50;
  puVar41 = (uint64_t *)(lVar2 - (uint64_t)(uVar8 ^ 0x1f69e12c));
  *puVar41 = (uVar43 >> (((byte)uVar12 ^ 0x91) & 0x3f) | uVar9) ^ uVar47;
  *(uint64_t *)(lVar2 + -0xf0) =
       (CONCAT44(uVar12,uVar12) ^ 0xd27d24d93cef047) <<
       (((byte)uVar51 ^ (byte)*(void*)(lVar2 + -0xa8)) & 0x3f);
  uVar9 = uVar50 ^ uVar42 ^ uVar47 ^ *puVar41 ^ *(uint64_t *)(lVar2 - (uVar22 ^ 0x5ffbfbad));
  *(uint64_t *)(lVar2 + -0x70) = uVar9;
  *(uint64_t *)(lVar2 + -0xf0) =
       (CONCAT44(uVar8,uVar12) ^ 0x5dbcd59947e7c22b) + (CONCAT44(uVar8,uVar12) ^ 0x5b2448857c761bc0)
  ;
  uVar43 = (uint64_t)g_028a06f8 & 0xff;
  uVar43 = g_028a06f8 << 0x18 | uVar43 | uVar43 << 0x10 | uVar43 << 8;
  g_028a06f8 = (uint)uVar43;
  uVar43 = uVar43 << 0x20 | uVar43;
  *(uint64_t *)(lVar2 + -0xa8) =
       (*(uint64_t *)(lVar2 - (uVar22 ^ 0x5ffbfbb5)) ^ uVar50) +
       (uVar54 ^ *(uint64_t *)(lVar2 + -0xb8)) ^ uVar43;
  uVar39 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  g_028a0538 = uVar39;
  *(uint64_t *)(lVar2 + -0xf0) = (uint64_t)((uint)uVar9 ^ (uint)uVar27) << 0x2e ^ uVar40;
  puVar49 = (uint64_t *)(lVar2 - (uint64_t)(uVar39 ^ 0xf588a0bd));
  *puVar49 = (*(uint64_t *)(lVar2 - (uVar16 ^ 0x5a08885)) ^ uVar50) >>
             (((byte)uVar5 ^ 0xe7) & 0x3f) ^ uVar44;
  *(uint64_t *)(lVar2 + -0x70) =
       (CONCAT44(uVar5,uVar5) ^ 0x7ed9ae02f147b5c1) + (CONCAT44(uVar39,uVar39) ^ 0xeb522757ee80badc)
  ;
  puVar14 = (uint64_t *)(lVar2 - (uint64_t)(uVar39 ^ 0xf588a0ed));
  *puVar14 = (*(uint64_t *)(lVar2 - (uVar16 ^ 0x5a0884d)) ^ uVar44 |
             *(uint64_t *)(lVar2 + -0xf0) ^ uVar40) ^ uVar15;
  *(uint64_t *)(lVar2 + -0xb8) = CONCAT44(uVar39,uVar39) >> 0xd ^ 0x19a17fb5b83fa;
  *puVar49 = uVar15 ^ uVar25 ^ uVar43 ^ *puVar14 ^ *(uint64_t *)(lVar2 + -0xa8);
  uVar9 = *(uint64_t *)(lVar2 + -0xa0) ^ uVar21;
  *(uint64_t *)(lVar2 + -0xe8) = (*(uint64_t *)(lVar2 + -0x68) ^ uVar42) + uVar9 ^ uVar52;
  *(uint64_t *)(lVar2 + -0x68) =
       (CONCAT44(uVar5,uVar5) ^ 0x3c8a400d7917ba78) >>
       (((byte)*(void*)(lVar2 + -0xb8) ^ (byte)uVar4) & 0x3f);
  *(uint64_t *)(lVar2 - (uVar16 ^ 0x5a0889d)) = uVar9 << 0xc ^ uVar17;
  *(uint64_t *)(lVar2 + -0x80) = *(uint64_t *)(lVar2 + -0xf0) ^ uVar40 | 0xb6389a63596f63e9;
  *(uint64_t *)(lVar2 - uVar26) = (uVar32 << 0x20 ^ *(uint64_t *)(lVar2 + -0xa0)) >> 0x34 ^ uVar46
  ;
  *(uint64_t *)(lVar2 - (uVar18 ^ 0xf7fee57f)) = *(uint64_t *)(lVar2 + -0x70) >> 0x28;
  puVar14 = (uint64_t *)(lVar2 - (uint64_t)(uVar8 ^ 0x1f69e1ec));
  uVar9 = uVar46 ^ *(uint64_t *)(lVar2 - (uVar22 ^ 0x5ffbfb35)) | uVar17 ^ *puVar14;
  *(uint64_t *)(lVar2 + -0xa0) = uVar9 ^ uVar21;
  uVar18 = (uint64_t)g_028a0554 & 0xff;
  uVar18 = g_028a0554 << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  uVar9 = *(uint64_t *)(lVar2 + -0xe8) ^ uVar52 ^ uVar9;
  g_028a0554 = (uint)uVar18;
  uVar18 = uVar18 << 0x20 | uVar18;
  *(uint64_t *)(lVar2 + -0x70) = uVar18 ^ uVar9;
  *(uint64_t *)(lVar2 - (uVar16 ^ 0x5a08875)) =
       (uVar43 ^ *(uint64_t *)(lVar2 + -0xa8)) + uVar9 ^ uVar20;
  *puVar14 = (*(uint64_t *)(lVar2 + -0x70) ^ uVar18) << (~(byte)uVar19 & 0x3f) ^ uVar47;
  *(uint64_t *)(lVar2 - (uint64_t)(uVar36 ^ 0xce5caf57)) =
       (CONCAT44(uVar19,uVar8) ^ 0x1def3853704b2558) >> (((byte)uVar12 ^ 0x88) & 0x3f);
  *(uint64_t *)(lVar2 - (uint64_t)(uVar8 ^ 0x1f69e124)) =
       (uVar18 ^ *(uint64_t *)(lVar2 + -0x70)) >> 6 ^ uVar40;
  *(uint64_t *)(lVar2 + -0xa8) =
       CONCAT44(uVar19,uVar39) ^ 0x67d693b556fdb543 ^ CONCAT44(uVar8,uVar39);
  uVar55 = uVar55 ^ 0x88623510;
  uVar18 = uVar40 ^ *(uint64_t *)(lVar2 + -0xa0) | uVar47 ^ *(uint64_t *)(lVar2 - uVar55);
  *(uint64_t *)(lVar2 + -0xf0) = uVar50 ^ uVar18;
  uVar51 = g_028a0730;
  uVar40 = CONCAT44(g_028a0730,g_028a0730);
  *(uint64_t *)(lVar2 + -0x70) = *(uint64_t *)(lVar2 + -0x80) ^ uVar20 ^ uVar40 ^ uVar18;
  uVar46 = CONCAT44(g_028a070c,g_028a070c);
  *(uint64_t *)(lVar2 + -0xa8) =
       (*(uint64_t *)(lVar2 - (uVar45 ^ 0x8011ab8)) ^ uVar25) +
       (uVar52 ^ *(uint64_t *)(lVar2 + -0xe8)) ^ uVar46;
  uVar18 = (uint64_t)g_028a06cc & 0xff;
  uVar18 = g_028a06cc << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  g_028a06cc = (uint)uVar18;
  uVar17 = (uint64_t)g_028a0544;
  uVar9 = (*(uint64_t *)(lVar2 + -0xb8) ^ uVar25) << (((byte)g_028a0544 ^ 0x6e) & 0x3f);
  *(uint64_t *)(lVar2 + -0x68) = (uVar18 << 0x20 | uVar18) ^ uVar9;
  uVar15 = (uint64_t)g_028a053c;
  *(uint64_t *)(lVar2 + -0xa0) =
       CONCAT44(g_028a053c,uVar5) ^ CONCAT44(uVar28,uVar8) ^ 0x4384dd59cb5f427c;
  uVar18 = (uVar24 << 0x20 ^ *(uint64_t *)(lVar2 + -0xb8)) >> 0x2a;
  *(uint64_t *)(lVar2 + -0xf0) = CONCAT44(g_028a059c,g_028a059c) ^ uVar18;
  uVar28 = g_028a0510;
  uVar47 = (uint64_t)g_028a0510;
  *(uint64_t *)(lVar2 - (uVar47 ^ 0x78356260)) = (uVar18 | uVar9) ^ uVar53;
  uVar4 = g_028a0524;
  uVar9 = CONCAT44(g_028a0724,g_028a0724);
  *(uint64_t *)(lVar2 - ((uint64_t)g_028a0524 ^ 0x40c5da9)) =
       uVar53 ^ uVar46 ^ *(uint64_t *)(lVar2 + -0xe8) ^ *puVar41 ^ uVar9;
  uVar16 = (*(uint64_t *)(lVar2 - (uVar35 ^ 0x9f6de12e)) ^ uVar9) +
           (*(uint64_t *)(lVar2 - (uint64_t)(uVar11 ^ 0xffffff7f)) ^ uVar20);
  *(uint64_t *)(lVar2 + -0xb8) = uVar16 ^ uVar37;
  uVar9 = uVar9 ^ *(uint64_t *)(lVar2 + -0xa0);
  *(uint64_t *)(lVar2 + -0x68) = uVar9 << (((byte)uVar36 ^ 0x87) & 0x3f) ^ uVar40;
  *(uint64_t *)(lVar2 + -0xf0) =
       CONCAT44(uVar3,uVar12) ^ 0x138adccae019199d | CONCAT44(uVar6,uVar36) ^ 0x3d97d93f97921ef0;
  uVar18 = (uint64_t)g_028a055c & 0xff;
  uVar18 = g_028a055c << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  g_028a055c = (uint)uVar18;
  uVar18 = uVar18 << 0x20 | uVar18;
  *(uint64_t *)(lVar2 + -0xe8) = uVar9 >> (((byte)uVar19 ^ 0xe5) & 0x3f) ^ uVar18;
  *(uint64_t *)(lVar2 + -0x80) =
       (uVar18 ^ *(uint64_t *)(lVar2 - (uVar47 ^ 0x78356260)) |
       *(uint64_t *)(lVar2 - uVar55) ^ uVar40) ^ uVar13;
  uVar18 = (uint64_t)g_028a0714 & 0xff;
  uVar18 = g_028a0714 << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  g_028a0714 = (uint)uVar18;
  uVar18 = uVar18 << 0x20 | uVar18;
  *(uint64_t *)(lVar2 + -0xf0) =
       uVar16 ^ uVar13 ^ *(uint64_t *)(lVar2 - ((uint64_t)g_028a0520 ^ 0xadfd22c5)) ^ uVar18;
  *(uint64_t *)(lVar2 - (uVar45 ^ 0x8011aa0)) =
       (uVar46 ^ *(uint64_t *)(lVar2 + -0xa8)) + (*(uint64_t *)(lVar2 + -0x70) ^ uVar40) ^ uVar48;
  uVar47 = (uint64_t)(*(uint *)(lVar2 - (uVar34 ^ 0x90634f08)) ^ uVar51) << 0x20;
  *(uint64_t *)(lVar2 + -0x68) = uVar47 ^ uVar48;
  bVar1 = (byte)(uVar5 >> 0x18);
  uVar40 = (uVar40 ^ *(uint64_t *)(lVar2 + -0x70)) >> ((bVar1 ^ 0x25) & 0x3f);
  *(uint64_t *)(lVar2 + -0xe8) = uVar44 ^ uVar40;
  uVar12 = g_028a0584;
  uVar9 = (uint64_t)g_028a0584 & 0xff;
  uVar9 = g_028a0584 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  g_028a0584 = (uint)uVar9;
  uVar40 = uVar40 | uVar47;
  *(uint64_t *)(lVar2 + -0x80) = (uVar9 << 0x20 | uVar9) ^ uVar40;
  uVar46 = uVar40 ^ uVar48 ^ *(uint64_t *)(lVar2 - (uVar15 ^ 0x7eb4a1ba));
  uVar15 = CONCAT44(g_028a064c,g_028a064c);
  *(uint64_t *)(lVar2 + -0xa8) = uVar15 ^ uVar46;
  uVar40 = (uint64_t)g_028a04f8;
  uVar9 = uVar40 ^ 0x88623508;
  *(uint64_t *)(lVar2 - uVar9) = uVar46 ^ uVar47;
  uVar19 = g_028a0534;
  uVar46 = CONCAT44(g_028a04ec,g_028a04ec);
  uVar13 = (uint64_t)g_028a0534;
  *(uint64_t *)(lVar2 - (uVar13 ^ 0x66cda2ac)) =
       (*(uint64_t *)(lVar2 + -8) ^ uVar37) + (*(uint64_t *)(lVar2 + -0xa8) ^ uVar15) ^ uVar46;
  *(uint64_t *)(lVar2 - uVar9) =
       *(uint64_t *)(lVar2 + -0xe8) ^ uVar46 | CONCAT44(uVar7,uVar38) ^ 0x89410e8db7f24665;
  uVar16 = (uVar31 ^ *(uint64_t *)(lVar2 - (uint64_t)(uVar39 ^ 0xf588a08d))) +
           (uVar37 ^ *(uint64_t *)(lVar2 + -0xb8));
  uVar9 = CONCAT44(g_028a0704,g_028a0704);
  *(uint64_t *)(lVar2 + -0x68) = uVar9 ^ uVar16;
  uVar45 = *(uint64_t *)(lVar2 + -0xe8) ^ uVar46;
  uVar47 = (uVar9 ^ *(uint64_t *)(lVar2 - (uVar33 ^ 0x4500714c))) + uVar45;
  *(uint64_t *)(lVar2 + -0x70) = uVar25 ^ uVar47;
  *(uint64_t *)(lVar2 + -0xb8) =
       (uVar15 ^ *(uint64_t *)(lVar2 + -0xa8)) <<
       (((byte)*(void*)(lVar2 - (uVar17 ^ 0x90634ff8)) ^ (byte)uVar12) & 0x3f);
  uVar9 = (uVar46 ^ *(uint64_t *)(lVar2 - (uVar13 ^ 0x66cda2ac))) << (((byte)uVar5 ^ 0xfb) & 0x3f);
  *(uint64_t *)(lVar2 + -0x80) = uVar9 ^ uVar21;
  uVar45 = uVar45 >> (((byte)uVar3 ^ 0xcd) & 0x3f);
  *(uint64_t *)(lVar2 + -0xb8) = uVar20 ^ uVar45;
  *(uint64_t *)(lVar2 + -0xa8) = uVar9 + uVar16;
  uVar9 = (uint64_t)g_028a0604 & 0xff;
  uVar9 = g_028a0604 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  uVar45 = uVar21 ^ *(uint64_t *)(lVar2 - (uVar34 ^ 0x90634ff8)) | uVar45;
  g_028a0604 = (uint)uVar9;
  *(uint64_t *)(lVar2 + -0xe8) = (uVar9 << 0x20 | uVar9) ^ uVar45;
  *(uint64_t *)(lVar2 + -0xa8) = CONCAT44(g_028a0740,g_028a0740) ^ uVar47 ^ uVar45;
  lVar23 = (CONCAT44(uVar4,uVar28) ^ 0x40c5d097835628a) +
           (CONCAT44(g_028a0614,g_028a0614) ^ *(uint64_t *)(lVar2 - (uVar40 ^ 0x88623550)));
  g_028a05fc = g_028a05fc & 0xff;
  g_028a05fc = g_028a05fc << 0x18 | g_028a05fc | g_028a05fc << 0x10 | g_028a05fc << 8
  ;
  uVar12 = (uint)lVar23 ^ g_028a05fc ^ g_028a04f0;
  uVar28 = uVar12 & 0xff;
  g_028a04f0 = uVar12 << 0x18 | uVar28 | uVar28 << 0x10 | uVar28 << 8;
  uVar9 = CONCAT44(g_028a04f0,g_028a04f0);
  *(uint64_t *)(lVar2 + -0x80) = (uVar18 ^ *(uint64_t *)(lVar2 + -0xf0)) + lVar23 ^ uVar9;
  *puVar49 = (CONCAT44(uVar3,uVar3) ^ 0x1adfea9183bb0973) +
             (CONCAT44(uVar11,uVar5) ^ 0x4d872d0ba4b5facb);
  *(uint64_t *)(lVar2 - (uVar33 ^ 0x450071cc)) =
       (uVar29 ^ *(uint64_t *)(lVar2 + -0x90)) + (CONCAT44(uVar4,uVar6) ^ 0xc05b42b3a1c2aa9f) ^
       uVar9;
  uVar18 = (uVar48 ^ *(uint64_t *)(lVar2 + -0xa0)) + (*(uint64_t *)(lVar2 + -0xe8) ^ uVar9);
  *(uint64_t *)(lVar2 + -0xf0) = uVar18 ^ uVar9;
  *(uint64_t *)(lVar2 + -0x68) =
       CONCAT44(uVar38,uVar19) ^ *(uint64_t *)(lVar2 + -0xb8) ^ 0x7f75b381a23e65f0;
  *(uint64_t *)(lVar2 + -0xa0) =
       (*(uint64_t *)(lVar2 - ((uint64_t)g_028a0520 ^ 0xadfd22c5)) ^ uVar9) + uVar18 ^ uVar42;
  uVar18 = *(uint64_t *)(lVar2 + -0x80) ^ uVar9;
  *(uint64_t *)(lVar2 + -0xb8) = uVar18 << (((byte)uVar8 ^ 0x94) & 0x3f) ^ uVar9;
  *(uint64_t *)(lVar2 + -0x68) =
       (CONCAT44(uVar38,uVar36) ^ 0xdc78dbb1651408) + (CONCAT44(uVar36,uVar8) ^ 0xa518c781bd48893b);
  *(uint64_t *)(lVar2 + -0xf0) =
       CONCAT44(g_028a0758,g_028a0758) ^ uVar18 >> ((bVar1 ^ 0x35) & 0x3f);
  *(uint *)(&g_028a0820 + (int64_t)(int)(*(uint *)(&g_023d0570 + lVar30) ^ uVar36) * 4) =
       *(uint *)(&g_023d0560 + uVar10 + lVar30) ^ uVar7;
  return;
}


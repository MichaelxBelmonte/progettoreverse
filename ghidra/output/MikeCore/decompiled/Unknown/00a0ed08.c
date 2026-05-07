// Function: FUN_00a0ed08
// Address: 00a0ed08
// Size: 5867 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0ed08(void)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  uint uVar39;
  ulonglong uVar40;
  ulonglong *puVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong *puVar49;
  ulonglong uVar50;
  uint uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  
  uVar4 = DAT_028a0744;
  uVar7 = _DAT_028a0540;
  uVar3 = DAT_028a0518;
  uVar28 = DAT_028a0514;
  lVar2 = DAT_028a04d0;
  uVar18 = (ulonglong)DAT_028a0518;
  uVar45 = (ulonglong)DAT_028a0514;
  uVar11 = DAT_028a0514 ^ DAT_028a0518;
  uVar55 = (ulonglong)_DAT_028a0540;
  uVar29 = CONCAT44(DAT_028a073c,DAT_028a073c);
  uVar19 = DAT_028a0744 + DAT_028a04f4 & 0xff;
  uVar19 = (DAT_028a0744 + DAT_028a04f4) * 0x1000000 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar52 = CONCAT44(uVar19,uVar19);
  uVar9 = (ulonglong)DAT_028a04f4 & 0xff;
  uVar13 = DAT_028a04f4 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  uVar36 = _DAT_028a0540 + DAT_028a0538;
  uVar12 = DAT_028a071c | DAT_028a074c;
  uVar19 = DAT_028a0638 >> 0x18;
  uVar40 = CONCAT44(DAT_028a0630,DAT_028a0630) ^ *(ulonglong *)(DAT_028a04d0 + -8);
  uVar46 = (*(ulonglong *)(DAT_028a04d0 + -0x68) ^ uVar29) + uVar40 ^ uVar52;
  lVar30 = (longlong)DAT_028a0848;
  DAT_028a0500 = uVar11;
  DAT_028a0504 = uVar36;
  *(ulonglong *)(DAT_028a04d0 + -0xb8) = uVar46;
  DAT_028a04f4 = (uint)uVar13;
  uVar13 = uVar13 << 0x20 | uVar13;
  *(ulonglong *)(lVar2 + -0x68) = uVar40 << 5 ^ uVar13;
  uVar9 = (ulonglong)DAT_028a0744 & 0xff;
  uVar24 = DAT_028a0744 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  DAT_028a0744 = (uint)uVar24;
  uVar9 = uVar40 >> (((byte)uVar36 ^ 0x9c) & 0x3f);
  uVar25 = uVar24 | uVar24 << 0x20;
  uVar40 = uVar40 << 5 | uVar9;
  *(ulonglong *)(lVar2 + -0x70) = uVar9 ^ uVar25;
  uVar38 = DAT_028a0658 + DAT_028a0748 & 0xff;
  DAT_028a0750 = (DAT_028a0658 + DAT_028a0748) * 0x1000000 | uVar38 | uVar38 << 0x10 | uVar38 << 8;
  *(ulonglong *)(lVar2 + -8) = CONCAT44(DAT_028a0750,DAT_028a0750) ^ uVar40;
  uVar9 = (ulonglong)DAT_028a0658 & 0xff;
  uVar9 = DAT_028a0658 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  DAT_028a0658 = (uint)uVar9;
  uVar9 = uVar9 << 0x20 | uVar9;
  *(ulonglong *)(lVar2 - (uVar45 ^ 0x8011a68)) = uVar52 ^ uVar9 ^ uVar46 ^ uVar40;
  uVar47 = CONCAT44(DAT_028a0708,DAT_028a0708);
  uVar40 = (ulonglong)DAT_028a0748 & 0xff;
  uVar40 = DAT_028a0748 << 0x18 | uVar40 | uVar40 << 0x10 | uVar40 << 8;
  DAT_028a0748 = (uint)uVar40;
  uVar40 = uVar40 << 0x20 | uVar40;
  *(ulonglong *)(lVar2 + -0x70) =
       (CONCAT44(DAT_028a0804,DAT_028a0804) ^ *(ulonglong *)(lVar2 + -0x60)) +
       (*(ulonglong *)(lVar2 - (uVar45 ^ 0x8011af0)) ^ uVar47) ^ uVar40;
  uVar38 = DAT_028a0738;
  uVar46 = (ulonglong)DAT_028a0738 & 0xff;
  uVar46 = DAT_028a0738 << 0x18 | uVar46 | uVar46 << 0x10 | uVar46 << 8;
  DAT_028a0738 = (uint)uVar46;
  uVar46 = uVar46 << 0x20 | uVar46;
  uVar10 = (ulonglong)DAT_028a0538 ^ 0x45fa7a27;
  puVar14 = (ulonglong *)(lVar2 - uVar10);
  *puVar14 = (*(ulonglong *)(lVar2 - (ulonglong)(uVar11 ^ 0xffffff0f)) ^ uVar47) <<
             (((byte)uVar7 ^ 0x5d) & 0x3f) ^ uVar46;
  uVar15 = (ulonglong)(uVar38 & DAT_028a0788) & 0xff;
  uVar53 = (uVar38 & DAT_028a0788) << 0x18 | uVar15 | uVar15 << 0x10 | uVar15 << 8;
  uVar53 = uVar53 << 0x20 | uVar53;
  uVar48 = (uVar47 ^ *(ulonglong *)(lVar2 - (uVar18 ^ 0xf7fee50f))) >>
           (((byte)uVar11 ^ 0xe4) & 0x3f);
  *(ulonglong *)(lVar2 + -0x60) = uVar53 ^ uVar48;
  uVar15 = (ulonglong)DAT_028a0788 & 0xff;
  uVar15 = DAT_028a0788 << 0x18 | uVar15 | uVar15 << 0x10 | uVar15 << 8;
  uVar48 = *(ulonglong *)(lVar2 - (uVar18 ^ 0xf7fee5f7)) ^ uVar46 | uVar48;
  DAT_028a0788 = (uint)uVar15;
  uVar15 = uVar15 << 0x20 | uVar15;
  DAT_028a04d8 = uVar19 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar47 = CONCAT44(DAT_028a04d8,DAT_028a04d8);
  *(ulonglong *)(lVar2 + -0xf0) = uVar48 ^ uVar15;
  *(ulonglong *)(lVar2 + -8) = uVar40 ^ uVar47 ^ uVar48 ^ *(ulonglong *)(lVar2 + -0x70);
  *(ulonglong *)(lVar2 + -0x60) =
       (CONCAT44(uVar11,DAT_028a0538) ^ 0xd0822296617b03e4) << (((byte)uVar28 ^ 0x27) & 0x3f);
  uVar31 = CONCAT44(DAT_028a0720,DAT_028a0720);
  uVar16 = (*(ulonglong *)(lVar2 - (uVar45 ^ 0x8011a88)) ^ uVar31) +
           (CONCAT44(uVar7,uVar3) ^ 0xfa25f432814f5aa8);
  *(ulonglong *)(lVar2 + -0x60) = uVar16 ^ uVar9;
  puVar41 = (ulonglong *)(lVar2 - (ulonglong)(uVar11 ^ 0xfffffff7));
  uVar48 = (ulonglong)DAT_028a0638 & 0xff;
  uVar48 = DAT_028a0638 << 0x18 | uVar48 | uVar48 << 0x10 | uVar48 << 8;
  DAT_028a0638 = (uint)uVar48;
  uVar48 = uVar48 << 0x20 | uVar48;
  *(ulonglong *)(lVar2 + -0xa8) =
       (*(ulonglong *)(lVar2 - (uVar55 ^ 0x88623518)) ^ uVar9) + (uVar47 ^ *puVar41) ^ uVar48;
  *puVar41 = (CONCAT44(uVar36,uVar3) ^ 0xfe272c74034bbc0c) >> ((byte)uVar16 & 0x3f);
  uVar20 = CONCAT44(DAT_028a0548,DAT_028a0548);
  *(ulonglong *)(lVar2 - (uVar45 ^ 0x8011a08)) =
       (*(ulonglong *)(lVar2 + -0xe0) ^ uVar20) + (*(ulonglong *)(lVar2 + -0xb8) ^ uVar52) ^ uVar52;
  uVar19 = DAT_028a0620 - DAT_028a075c & 0xff;
  DAT_028a0564 = (DAT_028a0620 - DAT_028a075c) * 0x1000000 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar54 = CONCAT44(DAT_028a0564,DAT_028a0564);
  uVar42 = (*(ulonglong *)(lVar2 - (ulonglong)(uVar11 ^ 0xffffff57)) ^ uVar48) +
           (*(ulonglong *)(lVar2 + -8) ^ uVar52) ^ uVar54;
  *(ulonglong *)(lVar2 + -0xb8) = uVar42;
  uVar19 = DAT_028a063c >> 0x18;
  DAT_028a0570 = uVar19 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar17 = CONCAT44(DAT_028a0570,DAT_028a0570);
  uVar44 = *(ulonglong *)(lVar2 + -0xa8) ^ uVar48;
  uVar47 = uVar44 << 0x19;
  *(ulonglong *)(lVar2 + -8) = uVar17 ^ uVar47;
  uVar16 = (ulonglong)DAT_028a063c & 0xff;
  uVar16 = DAT_028a063c << 0x18 | uVar16 | uVar16 << 0x10 | uVar16 << 8;
  DAT_028a063c = (uint)uVar16;
  uVar16 = uVar16 << 0x20 | uVar16;
  *(ulonglong *)(lVar2 + -0xa0) = uVar44 >> (((byte)uVar11 ^ 0xd8) & 0x3f) ^ uVar16;
  *(ulonglong *)(lVar2 + -0xa8) = (CONCAT44(uVar36,uVar3) ^ 0x76a6f01c9a76bc8e) + 0xd73c77200166191e
  ;
  *(ulonglong *)(lVar2 + -0xa8) =
       (*(ulonglong *)(lVar2 - (uVar45 ^ 0x8011aa0)) ^ uVar16 | uVar47) ^ uVar16;
  *(undefined8 *)(lVar2 + -8) = 0xcd35792c6c422000;
  uVar6 = DAT_028a052c;
  uVar47 = (ulonglong)DAT_028a071c & 0xff;
  uVar32 = DAT_028a071c << 0x18 | uVar47 | uVar47 << 0x10 | uVar47 << 8;
  uVar21 = uVar32 | uVar32 << 0x20;
  DAT_028a071c = (uint)uVar32;
  *(ulonglong *)(lVar2 - ((ulonglong)DAT_028a0538 ^ 0x45fa7a8f)) =
       uVar16 ^ uVar21 ^ uVar54 ^ *(ulonglong *)(lVar2 - ((ulonglong)DAT_028a052c ^ 0xb20894f0)) ^
       uVar42;
  *(ulonglong *)(lVar2 + -8) =
       (CONCAT44(uVar28,uVar7) ^ 0x8011a0088623579) +
       (*(ulonglong *)(lVar2 - (uVar45 ^ 0x8011a90)) ^ uVar29) ^ uVar53;
  uVar5 = DAT_028a0528;
  uVar51 = DAT_028a056c ^ *(uint *)(lVar2 - (ulonglong)(uVar36 ^ 0xce5cafaf));
  uVar19 = uVar51 & 0xff;
  DAT_028a056c = uVar51 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar47 = CONCAT44(DAT_028a056c,DAT_028a056c);
  uVar16 = (ulonglong)DAT_028a0528;
  *(ulonglong *)(lVar2 - (uVar16 ^ 0x5a0885d)) =
       (uVar9 ^ *(ulonglong *)(lVar2 + -0x68)) + (*puVar14 ^ uVar53) ^ uVar47;
  uVar38 = DAT_028a051c;
  uVar42 = (CONCAT44(DAT_028a0624,DAT_028a0624) ^ *(ulonglong *)(lVar2 + -0xd0)) +
           (CONCAT44(uVar11,uVar36) ^ 0x49ef210fab272e37);
  uVar9 = (ulonglong)uVar12 & 0xff;
  uVar37 = uVar12 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  DAT_028a05ac = (undefined4)uVar37;
  uVar37 = uVar37 << 0x20 | uVar37;
  uVar33 = (ulonglong)DAT_028a051c;
  *(ulonglong *)(lVar2 + -8) = uVar42 ^ uVar37;
  uVar28 = DAT_028a0530;
  uVar34 = (ulonglong)DAT_028a0530;
  *(ulonglong *)(lVar2 + -0x68) =
       (*(ulonglong *)(lVar2 + -0xf0) ^ uVar15) +
       (CONCAT44(uVar7,DAT_028a0530) ^ 0x1cd9774c3ea96a75);
  uVar9 = (ulonglong)DAT_028a074c & 0xff;
  uVar44 = DAT_028a074c << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  DAT_028a074c = (uint)uVar44;
  uVar44 = uVar44 << 0x20 | uVar44;
  *(ulonglong *)(lVar2 + -0xf0) = (*(ulonglong *)(lVar2 + -0x70) ^ uVar40) + uVar42 ^ uVar44;
  uVar12 = DAT_028a0508;
  uVar19 = DAT_028a04fc;
  uVar9 = (ulonglong)DAT_028a0620 & 0xff;
  uVar42 = DAT_028a0620 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  uVar22 = (ulonglong)DAT_028a04fc;
  uVar35 = (ulonglong)DAT_028a0508;
  uVar8 = DAT_028a0508 & DAT_028a04fc;
  uVar26 = uVar35 ^ 0x9f6de17e;
  DAT_028a0620 = (uint)uVar42;
  uVar42 = uVar42 << 0x20 | uVar42;
  uVar43 = *(ulonglong *)(lVar2 + -0xa8) ^ uVar47;
  DAT_028a050c = uVar8;
  *(ulonglong *)(lVar2 + -0x68) = (*(ulonglong *)(lVar2 - uVar26) ^ uVar44) + uVar43 ^ uVar42;
  uVar9 = (ulonglong)DAT_028a075c & 0xff;
  uVar27 = DAT_028a075c << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  uVar9 = uVar43 << (((byte)uVar8 ^ 0xa5) & 0x3f);
  uVar50 = uVar27 << 0x20 | uVar27;
  DAT_028a075c = (uint)uVar27;
  *(ulonglong *)(lVar2 + -0x70) = uVar9 ^ uVar50;
  puVar41 = (ulonglong *)(lVar2 - (ulonglong)(uVar8 ^ 0x1f69e12c));
  *puVar41 = (uVar43 >> (((byte)uVar12 ^ 0x91) & 0x3f) | uVar9) ^ uVar47;
  *(ulonglong *)(lVar2 + -0xf0) =
       (CONCAT44(uVar12,uVar12) ^ 0xd27d24d93cef047) <<
       (((byte)uVar51 ^ (byte)*(undefined4 *)(lVar2 + -0xa8)) & 0x3f);
  uVar9 = uVar50 ^ uVar42 ^ uVar47 ^ *puVar41 ^ *(ulonglong *)(lVar2 - (uVar22 ^ 0x5ffbfbad));
  *(ulonglong *)(lVar2 + -0x70) = uVar9;
  *(ulonglong *)(lVar2 + -0xf0) =
       (CONCAT44(uVar8,uVar12) ^ 0x5dbcd59947e7c22b) + (CONCAT44(uVar8,uVar12) ^ 0x5b2448857c761bc0)
  ;
  uVar43 = (ulonglong)DAT_028a06f8 & 0xff;
  uVar43 = DAT_028a06f8 << 0x18 | uVar43 | uVar43 << 0x10 | uVar43 << 8;
  DAT_028a06f8 = (uint)uVar43;
  uVar43 = uVar43 << 0x20 | uVar43;
  *(ulonglong *)(lVar2 + -0xa8) =
       (*(ulonglong *)(lVar2 - (uVar22 ^ 0x5ffbfbb5)) ^ uVar50) +
       (uVar54 ^ *(ulonglong *)(lVar2 + -0xb8)) ^ uVar43;
  uVar39 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  DAT_028a0538 = uVar39;
  *(ulonglong *)(lVar2 + -0xf0) = (ulonglong)((uint)uVar9 ^ (uint)uVar27) << 0x2e ^ uVar40;
  puVar49 = (ulonglong *)(lVar2 - (ulonglong)(uVar39 ^ 0xf588a0bd));
  *puVar49 = (*(ulonglong *)(lVar2 - (uVar16 ^ 0x5a08885)) ^ uVar50) >>
             (((byte)uVar5 ^ 0xe7) & 0x3f) ^ uVar44;
  *(ulonglong *)(lVar2 + -0x70) =
       (CONCAT44(uVar5,uVar5) ^ 0x7ed9ae02f147b5c1) + (CONCAT44(uVar39,uVar39) ^ 0xeb522757ee80badc)
  ;
  puVar14 = (ulonglong *)(lVar2 - (ulonglong)(uVar39 ^ 0xf588a0ed));
  *puVar14 = (*(ulonglong *)(lVar2 - (uVar16 ^ 0x5a0884d)) ^ uVar44 |
             *(ulonglong *)(lVar2 + -0xf0) ^ uVar40) ^ uVar15;
  *(ulonglong *)(lVar2 + -0xb8) = CONCAT44(uVar39,uVar39) >> 0xd ^ 0x19a17fb5b83fa;
  *puVar49 = uVar15 ^ uVar25 ^ uVar43 ^ *puVar14 ^ *(ulonglong *)(lVar2 + -0xa8);
  uVar9 = *(ulonglong *)(lVar2 + -0xa0) ^ uVar21;
  *(ulonglong *)(lVar2 + -0xe8) = (*(ulonglong *)(lVar2 + -0x68) ^ uVar42) + uVar9 ^ uVar52;
  *(ulonglong *)(lVar2 + -0x68) =
       (CONCAT44(uVar5,uVar5) ^ 0x3c8a400d7917ba78) >>
       (((byte)*(undefined4 *)(lVar2 + -0xb8) ^ (byte)uVar4) & 0x3f);
  *(ulonglong *)(lVar2 - (uVar16 ^ 0x5a0889d)) = uVar9 << 0xc ^ uVar17;
  *(ulonglong *)(lVar2 + -0x80) = *(ulonglong *)(lVar2 + -0xf0) ^ uVar40 | 0xb6389a63596f63e9;
  *(ulonglong *)(lVar2 - uVar26) = (uVar32 << 0x20 ^ *(ulonglong *)(lVar2 + -0xa0)) >> 0x34 ^ uVar46
  ;
  *(ulonglong *)(lVar2 - (uVar18 ^ 0xf7fee57f)) = *(ulonglong *)(lVar2 + -0x70) >> 0x28;
  puVar14 = (ulonglong *)(lVar2 - (ulonglong)(uVar8 ^ 0x1f69e1ec));
  uVar9 = uVar46 ^ *(ulonglong *)(lVar2 - (uVar22 ^ 0x5ffbfb35)) | uVar17 ^ *puVar14;
  *(ulonglong *)(lVar2 + -0xa0) = uVar9 ^ uVar21;
  uVar18 = (ulonglong)DAT_028a0554 & 0xff;
  uVar18 = DAT_028a0554 << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  uVar9 = *(ulonglong *)(lVar2 + -0xe8) ^ uVar52 ^ uVar9;
  DAT_028a0554 = (uint)uVar18;
  uVar18 = uVar18 << 0x20 | uVar18;
  *(ulonglong *)(lVar2 + -0x70) = uVar18 ^ uVar9;
  *(ulonglong *)(lVar2 - (uVar16 ^ 0x5a08875)) =
       (uVar43 ^ *(ulonglong *)(lVar2 + -0xa8)) + uVar9 ^ uVar20;
  *puVar14 = (*(ulonglong *)(lVar2 + -0x70) ^ uVar18) << (~(byte)uVar19 & 0x3f) ^ uVar47;
  *(ulonglong *)(lVar2 - (ulonglong)(uVar36 ^ 0xce5caf57)) =
       (CONCAT44(uVar19,uVar8) ^ 0x1def3853704b2558) >> (((byte)uVar12 ^ 0x88) & 0x3f);
  *(ulonglong *)(lVar2 - (ulonglong)(uVar8 ^ 0x1f69e124)) =
       (uVar18 ^ *(ulonglong *)(lVar2 + -0x70)) >> 6 ^ uVar40;
  *(ulonglong *)(lVar2 + -0xa8) =
       CONCAT44(uVar19,uVar39) ^ 0x67d693b556fdb543 ^ CONCAT44(uVar8,uVar39);
  uVar55 = uVar55 ^ 0x88623510;
  uVar18 = uVar40 ^ *(ulonglong *)(lVar2 + -0xa0) | uVar47 ^ *(ulonglong *)(lVar2 - uVar55);
  *(ulonglong *)(lVar2 + -0xf0) = uVar50 ^ uVar18;
  uVar51 = DAT_028a0730;
  uVar40 = CONCAT44(DAT_028a0730,DAT_028a0730);
  *(ulonglong *)(lVar2 + -0x70) = *(ulonglong *)(lVar2 + -0x80) ^ uVar20 ^ uVar40 ^ uVar18;
  uVar46 = CONCAT44(DAT_028a070c,DAT_028a070c);
  *(ulonglong *)(lVar2 + -0xa8) =
       (*(ulonglong *)(lVar2 - (uVar45 ^ 0x8011ab8)) ^ uVar25) +
       (uVar52 ^ *(ulonglong *)(lVar2 + -0xe8)) ^ uVar46;
  uVar18 = (ulonglong)DAT_028a06cc & 0xff;
  uVar18 = DAT_028a06cc << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  DAT_028a06cc = (uint)uVar18;
  uVar17 = (ulonglong)DAT_028a0544;
  uVar9 = (*(ulonglong *)(lVar2 + -0xb8) ^ uVar25) << (((byte)DAT_028a0544 ^ 0x6e) & 0x3f);
  *(ulonglong *)(lVar2 + -0x68) = (uVar18 << 0x20 | uVar18) ^ uVar9;
  uVar15 = (ulonglong)DAT_028a053c;
  *(ulonglong *)(lVar2 + -0xa0) =
       CONCAT44(DAT_028a053c,uVar5) ^ CONCAT44(uVar28,uVar8) ^ 0x4384dd59cb5f427c;
  uVar18 = (uVar24 << 0x20 ^ *(ulonglong *)(lVar2 + -0xb8)) >> 0x2a;
  *(ulonglong *)(lVar2 + -0xf0) = CONCAT44(DAT_028a059c,DAT_028a059c) ^ uVar18;
  uVar28 = DAT_028a0510;
  uVar47 = (ulonglong)DAT_028a0510;
  *(ulonglong *)(lVar2 - (uVar47 ^ 0x78356260)) = (uVar18 | uVar9) ^ uVar53;
  uVar4 = DAT_028a0524;
  uVar9 = CONCAT44(DAT_028a0724,DAT_028a0724);
  *(ulonglong *)(lVar2 - ((ulonglong)DAT_028a0524 ^ 0x40c5da9)) =
       uVar53 ^ uVar46 ^ *(ulonglong *)(lVar2 + -0xe8) ^ *puVar41 ^ uVar9;
  uVar16 = (*(ulonglong *)(lVar2 - (uVar35 ^ 0x9f6de12e)) ^ uVar9) +
           (*(ulonglong *)(lVar2 - (ulonglong)(uVar11 ^ 0xffffff7f)) ^ uVar20);
  *(ulonglong *)(lVar2 + -0xb8) = uVar16 ^ uVar37;
  uVar9 = uVar9 ^ *(ulonglong *)(lVar2 + -0xa0);
  *(ulonglong *)(lVar2 + -0x68) = uVar9 << (((byte)uVar36 ^ 0x87) & 0x3f) ^ uVar40;
  *(ulonglong *)(lVar2 + -0xf0) =
       CONCAT44(uVar3,uVar12) ^ 0x138adccae019199d | CONCAT44(uVar6,uVar36) ^ 0x3d97d93f97921ef0;
  uVar18 = (ulonglong)DAT_028a055c & 0xff;
  uVar18 = DAT_028a055c << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  DAT_028a055c = (uint)uVar18;
  uVar18 = uVar18 << 0x20 | uVar18;
  *(ulonglong *)(lVar2 + -0xe8) = uVar9 >> (((byte)uVar19 ^ 0xe5) & 0x3f) ^ uVar18;
  *(ulonglong *)(lVar2 + -0x80) =
       (uVar18 ^ *(ulonglong *)(lVar2 - (uVar47 ^ 0x78356260)) |
       *(ulonglong *)(lVar2 - uVar55) ^ uVar40) ^ uVar13;
  uVar18 = (ulonglong)DAT_028a0714 & 0xff;
  uVar18 = DAT_028a0714 << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  DAT_028a0714 = (uint)uVar18;
  uVar18 = uVar18 << 0x20 | uVar18;
  *(ulonglong *)(lVar2 + -0xf0) =
       uVar16 ^ uVar13 ^ *(ulonglong *)(lVar2 - ((ulonglong)DAT_028a0520 ^ 0xadfd22c5)) ^ uVar18;
  *(ulonglong *)(lVar2 - (uVar45 ^ 0x8011aa0)) =
       (uVar46 ^ *(ulonglong *)(lVar2 + -0xa8)) + (*(ulonglong *)(lVar2 + -0x70) ^ uVar40) ^ uVar48;
  uVar47 = (ulonglong)(*(uint *)(lVar2 - (uVar34 ^ 0x90634f08)) ^ uVar51) << 0x20;
  *(ulonglong *)(lVar2 + -0x68) = uVar47 ^ uVar48;
  bVar1 = (byte)(uVar5 >> 0x18);
  uVar40 = (uVar40 ^ *(ulonglong *)(lVar2 + -0x70)) >> ((bVar1 ^ 0x25) & 0x3f);
  *(ulonglong *)(lVar2 + -0xe8) = uVar44 ^ uVar40;
  uVar12 = DAT_028a0584;
  uVar9 = (ulonglong)DAT_028a0584 & 0xff;
  uVar9 = DAT_028a0584 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  DAT_028a0584 = (uint)uVar9;
  uVar40 = uVar40 | uVar47;
  *(ulonglong *)(lVar2 + -0x80) = (uVar9 << 0x20 | uVar9) ^ uVar40;
  uVar46 = uVar40 ^ uVar48 ^ *(ulonglong *)(lVar2 - (uVar15 ^ 0x7eb4a1ba));
  uVar15 = CONCAT44(DAT_028a064c,DAT_028a064c);
  *(ulonglong *)(lVar2 + -0xa8) = uVar15 ^ uVar46;
  uVar40 = (ulonglong)DAT_028a04f8;
  uVar9 = uVar40 ^ 0x88623508;
  *(ulonglong *)(lVar2 - uVar9) = uVar46 ^ uVar47;
  uVar19 = DAT_028a0534;
  uVar46 = CONCAT44(DAT_028a04ec,DAT_028a04ec);
  uVar13 = (ulonglong)DAT_028a0534;
  *(ulonglong *)(lVar2 - (uVar13 ^ 0x66cda2ac)) =
       (*(ulonglong *)(lVar2 + -8) ^ uVar37) + (*(ulonglong *)(lVar2 + -0xa8) ^ uVar15) ^ uVar46;
  *(ulonglong *)(lVar2 - uVar9) =
       *(ulonglong *)(lVar2 + -0xe8) ^ uVar46 | CONCAT44(uVar7,uVar38) ^ 0x89410e8db7f24665;
  uVar16 = (uVar31 ^ *(ulonglong *)(lVar2 - (ulonglong)(uVar39 ^ 0xf588a08d))) +
           (uVar37 ^ *(ulonglong *)(lVar2 + -0xb8));
  uVar9 = CONCAT44(DAT_028a0704,DAT_028a0704);
  *(ulonglong *)(lVar2 + -0x68) = uVar9 ^ uVar16;
  uVar45 = *(ulonglong *)(lVar2 + -0xe8) ^ uVar46;
  uVar47 = (uVar9 ^ *(ulonglong *)(lVar2 - (uVar33 ^ 0x4500714c))) + uVar45;
  *(ulonglong *)(lVar2 + -0x70) = uVar25 ^ uVar47;
  *(ulonglong *)(lVar2 + -0xb8) =
       (uVar15 ^ *(ulonglong *)(lVar2 + -0xa8)) <<
       (((byte)*(undefined4 *)(lVar2 - (uVar17 ^ 0x90634ff8)) ^ (byte)uVar12) & 0x3f);
  uVar9 = (uVar46 ^ *(ulonglong *)(lVar2 - (uVar13 ^ 0x66cda2ac))) << (((byte)uVar5 ^ 0xfb) & 0x3f);
  *(ulonglong *)(lVar2 + -0x80) = uVar9 ^ uVar21;
  uVar45 = uVar45 >> (((byte)uVar3 ^ 0xcd) & 0x3f);
  *(ulonglong *)(lVar2 + -0xb8) = uVar20 ^ uVar45;
  *(ulonglong *)(lVar2 + -0xa8) = uVar9 + uVar16;
  uVar9 = (ulonglong)DAT_028a0604 & 0xff;
  uVar9 = DAT_028a0604 << 0x18 | uVar9 | uVar9 << 0x10 | uVar9 << 8;
  uVar45 = uVar21 ^ *(ulonglong *)(lVar2 - (uVar34 ^ 0x90634ff8)) | uVar45;
  DAT_028a0604 = (uint)uVar9;
  *(ulonglong *)(lVar2 + -0xe8) = (uVar9 << 0x20 | uVar9) ^ uVar45;
  *(ulonglong *)(lVar2 + -0xa8) = CONCAT44(DAT_028a0740,DAT_028a0740) ^ uVar47 ^ uVar45;
  lVar23 = (CONCAT44(uVar4,uVar28) ^ 0x40c5d097835628a) +
           (CONCAT44(DAT_028a0614,DAT_028a0614) ^ *(ulonglong *)(lVar2 - (uVar40 ^ 0x88623550)));
  _DAT_028a05fc = _DAT_028a05fc & 0xff;
  _DAT_028a05fc = _DAT_028a05fc << 0x18 | _DAT_028a05fc | _DAT_028a05fc << 0x10 | _DAT_028a05fc << 8
  ;
  uVar12 = (uint)lVar23 ^ _DAT_028a05fc ^ DAT_028a04f0;
  uVar28 = uVar12 & 0xff;
  DAT_028a04f0 = uVar12 << 0x18 | uVar28 | uVar28 << 0x10 | uVar28 << 8;
  uVar9 = CONCAT44(DAT_028a04f0,DAT_028a04f0);
  *(ulonglong *)(lVar2 + -0x80) = (uVar18 ^ *(ulonglong *)(lVar2 + -0xf0)) + lVar23 ^ uVar9;
  *puVar49 = (CONCAT44(uVar3,uVar3) ^ 0x1adfea9183bb0973) +
             (CONCAT44(uVar11,uVar5) ^ 0x4d872d0ba4b5facb);
  *(ulonglong *)(lVar2 - (uVar33 ^ 0x450071cc)) =
       (uVar29 ^ *(ulonglong *)(lVar2 + -0x90)) + (CONCAT44(uVar4,uVar6) ^ 0xc05b42b3a1c2aa9f) ^
       uVar9;
  uVar18 = (uVar48 ^ *(ulonglong *)(lVar2 + -0xa0)) + (*(ulonglong *)(lVar2 + -0xe8) ^ uVar9);
  *(ulonglong *)(lVar2 + -0xf0) = uVar18 ^ uVar9;
  *(ulonglong *)(lVar2 + -0x68) =
       CONCAT44(uVar38,uVar19) ^ *(ulonglong *)(lVar2 + -0xb8) ^ 0x7f75b381a23e65f0;
  *(ulonglong *)(lVar2 + -0xa0) =
       (*(ulonglong *)(lVar2 - ((ulonglong)DAT_028a0520 ^ 0xadfd22c5)) ^ uVar9) + uVar18 ^ uVar42;
  uVar18 = *(ulonglong *)(lVar2 + -0x80) ^ uVar9;
  *(ulonglong *)(lVar2 + -0xb8) = uVar18 << (((byte)uVar8 ^ 0x94) & 0x3f) ^ uVar9;
  *(ulonglong *)(lVar2 + -0x68) =
       (CONCAT44(uVar38,uVar36) ^ 0xdc78dbb1651408) + (CONCAT44(uVar36,uVar8) ^ 0xa518c781bd48893b);
  *(ulonglong *)(lVar2 + -0xf0) =
       CONCAT44(DAT_028a0758,DAT_028a0758) ^ uVar18 >> ((bVar1 ^ 0x35) & 0x3f);
  *(uint *)(&DAT_028a0820 + (longlong)(int)(*(uint *)(&DAT_023d0570 + lVar30) ^ uVar36) * 4) =
       *(uint *)(&DAT_023d0560 + uVar10 + lVar30) ^ uVar7;
  return;
}



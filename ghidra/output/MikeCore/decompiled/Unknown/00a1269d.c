// Function: FUN_00a1269d
// Address: 00a1269d
// Size: 4642 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1269d(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong *puVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  
  iVar7 = DAT_028a0854;
  uVar10 = DAT_028a0650;
  uVar6 = DAT_028a053c;
  uVar5 = DAT_028a0534;
  uVar4 = DAT_028a0528;
  uVar3 = DAT_028a050c;
  uVar31 = DAT_028a0500;
  lVar2 = DAT_028a04d0;
  uVar12 = (ulonglong)DAT_028a0528;
  uVar45 = (ulonglong)DAT_028a0534;
  uVar8 = DAT_028a0534 + DAT_028a0528;
  uVar29 = (ulonglong)DAT_028a050c;
  uVar16 = (ulonglong)DAT_028a0500;
  uVar1 = DAT_028a0500 | DAT_028a050c;
  uVar27 = (ulonglong)DAT_028a053c;
  uVar15 = DAT_028a053c << 0x10 | DAT_028a053c >> 0x10;
  uVar17 = CONCAT44(DAT_028a04f0,DAT_028a04f0);
  uVar14 = DAT_028a0770 ^ DAT_028a0598;
  uVar11 = DAT_028a065c >> 0x18;
  uVar21 = (DAT_028a076c ^ DAT_028a0644) & 0xff;
  uVar9 = (DAT_028a076c ^ DAT_028a0644) << 0x18 | uVar21 | uVar21 << 0x10 | uVar21 << 8;
  uVar32 = CONCAT44(DAT_028a0620,DAT_028a0620);
  uVar18 = (ulonglong)DAT_028a076c & 0xff;
  uVar18 = DAT_028a076c << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  uVar43 = (ulonglong)DAT_028a0644 & 0xff;
  uVar43 = DAT_028a0644 << 0x18 | uVar43 | uVar43 << 0x10 | uVar43 << 8;
  uVar38 = (CONCAT44(DAT_028a0758,DAT_028a0758) ^ *(ulonglong *)(DAT_028a04d0 + -0xf0) |
           *(ulonglong *)(DAT_028a04d0 + -0xb8) ^ uVar17) ^ uVar32 ^
           *(ulonglong *)(DAT_028a04d0 + -0xa0);
  DAT_028a076c = (uint)uVar18;
  DAT_028a0644 = (uint)uVar43;
  uVar43 = uVar43 << 0x20 | uVar43;
  DAT_028a051c = uVar1;
  DAT_028a0524 = uVar15;
  DAT_028a052c = uVar8;
  _DAT_028a0768 = uVar9;
  *(ulonglong *)(DAT_028a04d0 + -0xb8) =
       (CONCAT44(DAT_028a0744,DAT_028a0744) ^ *(ulonglong *)(DAT_028a04d0 + -0x70)) + uVar38 ^
       uVar43;
  uVar44 = (ulonglong)DAT_028a0650 & 0xff;
  uVar40 = DAT_028a0650 << 0x18 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar44 = (ulonglong)DAT_028a065c & 0xff;
  uVar44 = DAT_028a065c << 0x18 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  DAT_028a065c = (uint)uVar44;
  uVar44 = uVar44 << 0x20 | uVar44;
  uVar42 = uVar16 ^ 0xffffff8f;
  DAT_028a0650 = (uint)uVar40;
  *(ulonglong *)(lVar2 - uVar42) =
       (uVar38 >> (((byte)uVar6 ^ 0x16) & 0x3f) | uVar38 << 0x34) ^ uVar44;
  *(ulonglong *)(lVar2 + -0xf0) =
       (CONCAT44(uVar3,uVar8) ^ 0xacd1919cb41afb2a) << (((byte)uVar1 ^ 0xd4) & 0x3f);
  uVar10 = uVar10 * DAT_028a077c;
  uVar38 = (ulonglong)DAT_028a077c & 0xff;
  uVar22 = DAT_028a077c << 0x18 | uVar38 | uVar38 << 0x10 | uVar38 << 8;
  uVar19 = uVar22 << 0x20 | uVar22;
  uVar38 = uVar43 ^ uVar44 ^ uVar19 ^ *(ulonglong *)(lVar2 + -0x70) ^ *(ulonglong *)(lVar2 + -0xb8);
  DAT_028a077c = (uint)uVar22;
  *(ulonglong *)(lVar2 + -0x68) = uVar38;
  uVar21 = DAT_028a0740;
  uVar23 = CONCAT44(DAT_028a0740,DAT_028a0740);
  *(ulonglong *)(lVar2 + -0x80) =
       (uVar32 ^ *(ulonglong *)(lVar2 + -0xa0)) + (*(ulonglong *)(lVar2 + -0xa8) ^ uVar23) ^ uVar43;
  *(ulonglong *)(lVar2 - (uVar12 ^ 0x5a08805)) =
       uVar38 ^ uVar19 | CONCAT44(uVar1,uVar15) ^ 0xc8f76c66b7b8c09c;
  uVar40 = uVar40 << 0x20 | uVar40;
  DAT_028a0568 = uVar11 << 0x18 | uVar11 | uVar11 << 0x10 | uVar11 << 8;
  uVar22 = CONCAT44(DAT_028a0568,DAT_028a0568);
  *(ulonglong *)(lVar2 + -0x70) =
       (ulonglong)(*(uint *)(lVar2 - (uVar45 ^ 0x66cda2ec)) ^ uVar21) << 0x39 ^ uVar22;
  uVar38 = (ulonglong)(DAT_028a05c0 & DAT_028a0654) & 0xff;
  uVar38 = (DAT_028a05c0 & DAT_028a0654) << 0x18 | uVar38 | uVar38 << 0x10 | uVar38 << 8;
  DAT_028a066c = (undefined4)uVar38;
  uVar38 = uVar38 << 0x20 | uVar38;
  *(ulonglong *)(lVar2 + -0xa0) =
       (uVar23 ^ *(ulonglong *)(lVar2 - (uVar29 ^ 0x1f69e12c))) >> (((byte)uVar3 ^ 0x83) & 0x3f) ^
       uVar38;
  uVar23 = (ulonglong)DAT_028a05c0 & 0xff;
  uVar23 = DAT_028a05c0 << 0x18 | uVar23 | uVar23 << 0x10 | uVar23 << 8;
  DAT_028a05c0 = (uint)uVar23;
  uVar23 = uVar23 << 0x20 | uVar23;
  *(ulonglong *)(lVar2 + -0xf0) =
       (uVar38 ^ *(ulonglong *)(lVar2 - (uVar45 ^ 0x66cda2e4)) |
       *(ulonglong *)(lVar2 - uVar42) ^ uVar22) ^ uVar23;
  *(ulonglong *)(lVar2 + -0xa8) =
       CONCAT44(uVar6,uVar3) ^ 0x67a9faa0e5e6200d | CONCAT44(uVar31,uVar6) ^ 0x541c806ce309ff0d;
  uVar38 = (ulonglong)DAT_028a0770 & 0xff;
  uVar33 = DAT_028a0770 << 0x18 | uVar38 | uVar38 << 0x10 | uVar38 << 8;
  uVar38 = uVar43 ^ uVar23 ^ *(ulonglong *)(lVar2 - (ulonglong)(uVar8 ^ 0x6c6e2bc9)) ^
           *(ulonglong *)(lVar2 + -0x80);
  DAT_028a0770 = (uint)uVar33;
  uVar32 = uVar33 << 0x20;
  uVar33 = uVar33 | uVar32;
  *(ulonglong *)(lVar2 + -0x70) = uVar38 ^ uVar33;
  *(ulonglong *)(lVar2 - (uVar45 ^ 0x66cda2ec)) =
       (*(ulonglong *)(lVar2 + -0xb8) ^ uVar43) + uVar38 ^ uVar40;
  uVar11 = uVar14 & 0xff;
  DAT_028a05cc = uVar14 << 0x18 | uVar11 | uVar11 << 0x10 | uVar11 << 8;
  uVar24 = (ulonglong)DAT_028a05cc;
  uVar25 = CONCAT44(DAT_028a05cc,DAT_028a05cc);
  *(ulonglong *)(lVar2 + -0xf0) = (*(ulonglong *)(lVar2 + -0x70) ^ uVar33) << 0x17 ^ uVar25;
  *(ulonglong *)(lVar2 - (uVar29 ^ 0x1f69e13c)) = CONCAT44(uVar15,uVar8) ^ 0x42d1041ac2d2cf20;
  uVar38 = (ulonglong)DAT_028a0654 & 0xff;
  uVar34 = DAT_028a0654 << 0x18 | uVar38 | uVar38 << 0x10 | uVar38 << 8;
  DAT_028a0654 = (uint)uVar34;
  uVar34 = uVar34 << 0x20 | uVar34;
  *(ulonglong *)(lVar2 - (uVar12 ^ 0x5a0884d)) =
       (*(ulonglong *)(lVar2 + -0x70) ^ uVar32) >> 0x29 ^ uVar34;
  uVar42 = *(ulonglong *)(lVar2 + -0xb8) ^ uVar34 | *(ulonglong *)(lVar2 + -0xf0) ^ uVar25;
  uVar38 = (ulonglong)DAT_028a0598 & 0xff;
  uVar37 = DAT_028a0598 << 0x18 | uVar38 | uVar38 << 0x10 | uVar38 << 8;
  uVar38 = uVar37 << 0x20 | uVar37;
  *(ulonglong *)(lVar2 + -0x70) = uVar42 ^ uVar19;
  uVar21 = DAT_028a0510;
  uVar20 = (ulonglong)DAT_028a0510;
  uVar14 = DAT_028a0510 >> 0x18 | (DAT_028a0510 & 0xff0000) >> 8 | (DAT_028a0510 & 0xff00) << 8 |
           DAT_028a0510 << 0x18;
  uVar18 = uVar18 << 0x20 | uVar18;
  DAT_028a0530 = uVar14;
  DAT_028a0598 = (uint)uVar37;
  *(ulonglong *)(lVar2 + -0xa0) = uVar40 ^ uVar38 ^ uVar42 ^ *(ulonglong *)(lVar2 + -0xa8);
  *(ulonglong *)(lVar2 - (uVar20 ^ 0x78356278)) =
       (*(ulonglong *)(lVar2 + -0x68) ^ uVar19) +
       (*(ulonglong *)(lVar2 - (ulonglong)(uVar14 ^ 0x886235f8)) ^ uVar43) ^ uVar18;
  uVar11 = uVar10 & 0xff;
  uVar11 = uVar10 * 0x1000000 | uVar11 | uVar11 << 0x10 | uVar11 << 8;
  uVar42 = CONCAT44(uVar11,uVar11);
  uVar26 = *(ulonglong *)(lVar2 + -0x68) ^ uVar19;
  bVar13 = (byte)uVar21;
  uVar26 = uVar18 ^ uVar42 ^ *(ulonglong *)(lVar2 + -0xf0) ^
           (uVar26 >> ((bVar13 ^ 0x90) & 0x3f) | uVar26 << ((bVar13 ^ 0xa0) & 0x3f)) ^ uVar42;
  uVar35 = uVar26 << (((byte)uVar5 ^ 0x41) & 0x3f);
  uVar30 = uVar26 >> (((byte)uVar1 ^ 0xc4) & 0x3f);
  uVar26 = (*(ulonglong *)(lVar2 + -0xa8) ^ uVar40) + uVar26 ^ uVar40;
  *(ulonglong *)(lVar2 + -0x70) = uVar26;
  *(ulonglong *)(lVar2 + -0xa8) = uVar35 ^ uVar25;
  *(ulonglong *)(lVar2 + -0xb8) = uVar30 ^ uVar22;
  uVar39 = uVar26 ^ uVar38 ^ (uVar30 | uVar35) ^ uVar40;
  *(ulonglong *)(lVar2 + -0x80) = uVar39;
  *(ulonglong *)(lVar2 + -0x68) = (CONCAT44(uVar4,uVar21) ^ 0x6b209b834bb50bcf) + uVar35;
  puVar36 = (ulonglong *)(lVar2 - (ulonglong)(uVar15 ^ 0xa11a7e44));
  uVar26 = (CONCAT44(uVar1,uVar14) ^ 0xdb626b2902d8cb24) >> ((byte)uVar30 & 0x3f);
  uVar41 = (*puVar36 ^ uVar18) + (*(ulonglong *)(lVar2 + -0xa0) ^ uVar38) ^ uVar44;
  *(ulonglong *)(lVar2 + -0xa8) = uVar41;
  *(ulonglong *)(lVar2 + -0x68) = uVar26;
  uVar30 = (*(ulonglong *)(lVar2 - (uVar12 ^ 0x5a08855)) ^ uVar38) <<
           (((byte)(uVar6 >> 0x10) ^ 0x91) & 0x3f);
  *(ulonglong *)(lVar2 + -0xf0) = uVar30 ^ uVar34;
  uVar11 = *(uint *)(&DAT_023d0560 + ((ulonglong)uVar15 ^ 0xa11a7ebc) + (longlong)iVar7);
  *(ulonglong *)(lVar2 + -200) = uVar26 | *(ulonglong *)(lVar2 - (uVar27 ^ 0x7eb4a172));
  uVar27 = (*(ulonglong *)(lVar2 - (uVar29 ^ 0x1f69e124)) ^ uVar38) >> (((byte)uVar5 ^ 0x5f) & 0x3f)
  ;
  *(ulonglong *)(lVar2 + -0x68) = uVar27 ^ uVar33;
  *(ulonglong *)(lVar2 + -200) = (ulonglong)((uint)uVar39 ^ (uint)uVar37) << 0x23;
  uVar4 = DAT_028a0544;
  uVar15 = DAT_028a0504;
  uVar26 = (ulonglong)DAT_028a0544;
  uVar35 = (ulonglong)DAT_028a0504;
  uVar10 = DAT_028a0504 * DAT_028a0544;
  DAT_028a04f8 = uVar10;
  *(ulonglong *)(lVar2 + -0xa0) = (uVar27 | uVar30) ^ uVar18;
  puVar28 = (ulonglong *)(lVar2 - (ulonglong)(uVar10 ^ 0x333bdfc8));
  *(ulonglong *)(lVar2 + -200) = CONCAT44(uVar4,uVar15) ^ 0xfb9ed14c7dbed075 | *puVar28 ^ uVar38;
  uVar37 = (*(ulonglong *)(lVar2 + -0xe8) ^ uVar17) +
           (uVar18 ^ uVar44 ^ *(ulonglong *)(lVar2 - (uVar35 ^ 0xce5caf07)) ^ uVar41);
  *(ulonglong *)(lVar2 + -200) = uVar37 ^ uVar25;
  uVar39 = CONCAT44(uVar9,uVar9);
  uVar27 = (CONCAT44(DAT_028a0624,DAT_028a0624) ^ *(ulonglong *)(lVar2 + -0xd0)) +
           (uVar40 ^ *(ulonglong *)(lVar2 + -0x70));
  *(ulonglong *)(lVar2 + -0x68) = uVar23 ^ uVar27;
  *(ulonglong *)(lVar2 + -0xa0) = (CONCAT44(uVar10,uVar4) ^ 0x64e3fe4ffcec603b) + uVar30;
  uVar37 = uVar37 << (((byte)uVar15 ^ 0xbe) & 0x3f);
  *(ulonglong *)(lVar2 + -0x70) =
       (uVar25 ^ *(ulonglong *)(lVar2 - (ulonglong)(uVar10 ^ 0x333bdf80))) + uVar27 ^ uVar39;
  *(ulonglong *)(lVar2 + -0xa0) = uVar37 ^ uVar39;
  uVar27 = (uVar24 << 0x20 ^ *(ulonglong *)(lVar2 - (uVar35 ^ 0xce5caf6f))) >> 0x27;
  *(ulonglong *)(lVar2 + -0xf0) = uVar27 ^ uVar17;
  *(ulonglong *)(lVar2 - (uVar26 ^ 0x90634f10)) = (uVar37 | uVar27) ^ uVar19;
  *(ulonglong *)(lVar2 + -200) =
       uVar19 ^ uVar33 ^ uVar39 ^ *(ulonglong *)(lVar2 - (ulonglong)(uVar10 ^ 0x333bdf20)) ^
       *(ulonglong *)(lVar2 - (uVar26 ^ 0x90634f08));
  *(ulonglong *)(lVar2 + -0xa0) =
       CONCAT44(uVar5,uVar31) ^ 0x991d896e64d59dda | *(ulonglong *)(lVar2 + -0x68) ^ uVar19;
  uVar27 = (CONCAT44(uVar6,uVar8) ^ 0x7eb4a11a6c6e2b3a) +
           (CONCAT44(DAT_028a0548,DAT_028a0548) ^ *(ulonglong *)(lVar2 + -0xe0));
  uVar40 = uVar27 ^ uVar43;
  *(ulonglong *)(lVar2 + -0xf0) = uVar40;
  uVar15 = (uint)uVar40 ^ DAT_028a078c;
  uVar31 = uVar15 & 0xff;
  uVar15 = uVar15 << 0x18 | uVar31 | uVar31 << 0x10 | uVar31 << 8;
  uVar23 = CONCAT44(uVar15,uVar15);
  DAT_028a078c = uVar15;
  *(ulonglong *)(lVar2 - (uVar26 ^ 0x90634fd8)) =
       (*(ulonglong *)(lVar2 + -0x80) ^ uVar38) + uVar27 ^ uVar23;
  uVar27 = (CONCAT44(DAT_028a0614,DAT_028a0614) ^ *(ulonglong *)(lVar2 + -0x28)) +
           (CONCAT44(uVar3,uVar5) ^ 0x6d2e20ce107c1d13);
  *(ulonglong *)(lVar2 + -0x68) = uVar23 ^ uVar27;
  *(ulonglong *)(lVar2 - (ulonglong)(uVar10 ^ 0x333bdfb8)) =
       (*(ulonglong *)(lVar2 - (uVar35 ^ 0xce5caf0f)) ^ uVar44) + uVar27 ^ uVar34;
  *(ulonglong *)(lVar2 + -0x80) =
       (uVar23 ^ *(ulonglong *)(lVar2 + -0xa0)) + (uVar34 ^ *(ulonglong *)(lVar2 + -0xf0)) ^ uVar23;
  *(ulonglong *)(lVar2 + -0xa8) =
       (ulonglong)((uint)*(ulonglong *)(lVar2 + -0xa0) ^ uVar15) << 0x21 ^ uVar42;
  *(ulonglong *)(lVar2 - (uVar35 ^ 0xce5caf57)) =
       *(ulonglong *)(lVar2 - (uVar20 ^ 0x78356208)) ^ uVar23 |
       *(ulonglong *)(lVar2 - (uVar12 ^ 0x5a0884d)) ^ uVar22;
  uVar15 = *(uint *)(&DAT_023d0560 + (uVar45 ^ 0x66cda254) + (longlong)iVar7);
  *(ulonglong *)(lVar2 + -0xb8) = (*(ulonglong *)(lVar2 + -0xa0) ^ uVar23) >> 0x1f ^ uVar18;
  *puVar36 = (*(ulonglong *)(lVar2 - (ulonglong)(uVar1 ^ 0xffffff47)) ^ uVar18 |
             uVar42 ^ *(ulonglong *)(lVar2 + -0xa8)) ^ uVar43;
  *(ulonglong *)(lVar2 - (uVar16 ^ 0xffffff5f)) =
       uVar43 ^ uVar44 ^ uVar23 ^ *(ulonglong *)(lVar2 - (uVar26 ^ 0x90634f88)) ^
       *(ulonglong *)(lVar2 + -0x80);
  uVar40 = *(ulonglong *)(lVar2 + -0xa0) ^ uVar44;
  *(ulonglong *)(lVar2 + -0xa8) =
       (uVar39 ^ *(ulonglong *)(lVar2 - (uVar29 ^ 0x1f69e1f4))) + uVar40 ^ uVar43;
  puVar36 = (ulonglong *)(lVar2 - (ulonglong)(uVar14 ^ 0x886235d8));
  uVar27 = (ulonglong)DAT_028a06f4 & 0xff;
  uVar27 = DAT_028a06f4 << 0x18 | uVar27 | uVar27 << 0x10 | uVar27 << 8;
  DAT_028a06f4 = (uint)uVar27;
  uVar27 = uVar27 << 0x20 | uVar27;
  *(ulonglong *)(lVar2 + -0xf0) = (uVar44 ^ *puVar36) << (((byte)uVar4 ^ 0x56) & 0x3f) ^ uVar27;
  uVar40 = uVar40 >> 0x12;
  *(ulonglong *)(lVar2 + -0x70) = uVar38 ^ uVar40;
  *puVar36 = (*(ulonglong *)(lVar2 - (uVar12 ^ 0x5a08805)) ^ uVar27 | uVar40) ^ uVar17;
  uVar40 = CONCAT44(DAT_028a0788,DAT_028a0788);
  *(ulonglong *)(lVar2 + -0x70) =
       *(ulonglong *)(lVar2 + -0xa0) ^ uVar17 ^ uVar43 ^ *(ulonglong *)(lVar2 + -0xa8) ^ uVar40;
  uVar33 = uVar33 ^ *(ulonglong *)(lVar2 + -200);
  *(ulonglong *)(lVar2 + -0xc0) = (uVar23 ^ *(ulonglong *)(lVar2 + -0x80)) + uVar33 ^ uVar22;
  *(ulonglong *)(lVar2 + -0xa0) = uVar33 << ((bVar13 ^ 0x84) & 0x3f) ^ uVar17;
  uVar44 = (ulonglong)DAT_028a0700 & 0xff;
  uVar44 = DAT_028a0700 << 0x18 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  DAT_028a0700 = (uint)uVar44;
  uVar44 = uVar44 << 0x20 | uVar44;
  *puVar28 = (uVar32 ^ *(ulonglong *)(lVar2 + -200)) >> 0x34 ^ uVar44;
  uVar45 = CONCAT44(DAT_028a0720,DAT_028a0720);
  *(ulonglong *)(lVar2 + -200) =
       (uVar44 ^ *(ulonglong *)(lVar2 + -0x80) |
       *(ulonglong *)(lVar2 - (uVar26 ^ 0x90634fd8)) ^ uVar17) ^ uVar45;
  *(ulonglong *)(lVar2 - (uVar12 ^ 0x5a08875)) =
       (*(ulonglong *)(lVar2 + -0xc0) ^ uVar22) + (uVar17 ^ *(ulonglong *)(lVar2 + -0xa0));
  uVar4 = DAT_028a073c;
  uVar38 = uVar45 ^ uVar22 ^ *(ulonglong *)(lVar2 + -200) ^ *(ulonglong *)(lVar2 + -0xc0);
  uVar12 = CONCAT44(DAT_028a073c,DAT_028a073c);
  *(ulonglong *)(lVar2 + -0xa0) = uVar12 ^ uVar38;
  *(ulonglong *)(lVar2 + -0x80) =
       (*(ulonglong *)(lVar2 - (uVar29 ^ 0x1f69e174)) ^ uVar27) +
       (*(ulonglong *)(lVar2 + -0xb8) ^ uVar18);
  uVar44 = CONCAT44(DAT_028a059c,DAT_028a059c);
  *(ulonglong *)(lVar2 - (uVar35 ^ 0xce5caf1f)) =
       (uVar43 ^ *(ulonglong *)(lVar2 - (uVar26 ^ 0x90634fd0))) + uVar38 ^ uVar44;
  uVar29 = (ulonglong)(*(uint *)(lVar2 - (ulonglong)(uVar10 ^ 0x333bdfe8)) ^ uVar4) << 0x3a;
  *(ulonglong *)(lVar2 + -0x80) = CONCAT44(DAT_028a0564,DAT_028a0564) ^ uVar29;
  uVar43 = CONCAT44(DAT_028a0630,DAT_028a0630);
  *(ulonglong *)(lVar2 + -0xa8) =
       (uVar12 ^ *(ulonglong *)(lVar2 + -0xa0)) >> (((byte)(uVar21 >> 0x18) ^ 0x7e) & 0x3f) ^ uVar43
  ;
  *(ulonglong *)(lVar2 + -0x78) = CONCAT44(uVar3,uVar8) ^ 0xcf5d50d076196bb0;
  *(ulonglong *)(lVar2 + -0x78) =
       (uVar43 ^ *(ulonglong *)(lVar2 - (uVar20 ^ 0x78356220)) | uVar29) ^ uVar19;
  uVar3 = DAT_028a0520;
  uVar12 = (ulonglong)DAT_028a0520;
  uVar31 = DAT_028a0520 << 0x10 | DAT_028a0520 >> 0x10;
  DAT_028a04fc = uVar31;
  *(ulonglong *)(lVar2 + -0x80) =
       (CONCAT44(DAT_028a0520,uVar31) ^ 0xe4a306075f190862) <<
       (((byte)*(undefined4 *)(lVar2 - (uVar12 ^ 0xadfd22e5)) ^ (byte)uVar4) & 0x3f);
  *(ulonglong *)(lVar2 + -0xa8) =
       uVar44 ^ uVar19 ^ *(ulonglong *)(lVar2 - (uVar12 ^ 0xadfd223d)) ^
       *(ulonglong *)(lVar2 - (ulonglong)(uVar31 ^ 0x2245ad45)) ^
       CONCAT44(DAT_028a06cc,DAT_028a06cc);
  *(ulonglong *)(lVar2 + -0xa0) =
       (uVar45 ^ *(ulonglong *)(lVar2 - (ulonglong)(uVar31 ^ 0x2245ad35))) +
       (uVar27 ^ *(ulonglong *)(lVar2 + -0xf0));
  uVar29 = *(ulonglong *)(lVar2 + -0x70) ^ uVar40;
  *(ulonglong *)(lVar2 + -0x78) =
       CONCAT44(DAT_028a0610,DAT_028a0610) ^ (uVar22 ^ *(ulonglong *)(lVar2 + -0xc0)) + uVar29;
  *(ulonglong *)(lVar2 + -0xf0) =
       CONCAT44(uVar31,uVar3) ^ 0x348d28b4956e2e9c | *(ulonglong *)(lVar2 - (uVar12 ^ 0xadfd22c5));
  bVar13 = (byte)(uVar3 >> 0x10);
  *(ulonglong *)(lVar2 + -200) =
       (uVar40 ^ *(ulonglong *)(lVar2 - (uVar12 ^ 0xadfd2235))) << ((bVar13 ^ 0xeb) & 0x3f) ^ uVar18
  ;
  *(ulonglong *)(lVar2 - (ulonglong)(uVar31 ^ 0x2245ad3d)) =
       CONCAT44(DAT_028a0750,DAT_028a0750) ^ uVar29 >> ((bVar13 ^ 0xd7) & 0x3f);
  *(uint *)(&DAT_028a0820 + (longlong)(int)(uVar15 ^ uVar1) * 4) = uVar11 ^ uVar6;
  return;
}



// Function: FUN_00a11378
// Address: 00a11378
// Size: 4901 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a11378(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  byte bVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong *puVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  uint uVar48;
  ulonglong uVar49;
  undefined4 uVar53;
  ulonglong uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  
  uVar9 = DAT_028a07dc;
  uVar13 = DAT_028a0544;
  uVar8 = DAT_028a0538;
  uVar11 = DAT_028a0528;
  uVar6 = DAT_028a0510;
  uVar7 = DAT_028a0508;
  uVar1 = DAT_028a0504;
  lVar5 = DAT_028a04d0;
  uVar33 = (ulonglong)DAT_028a0538;
  uVar32 = (ulonglong)DAT_028a0510;
  uVar44 = DAT_028a0538 - DAT_028a0510;
  uVar21 = (ulonglong)DAT_028a0528;
  uVar42 = (ulonglong)DAT_028a0508;
  uVar40 = DAT_028a0508 * DAT_028a0528;
  uVar23 = (ulonglong)DAT_028a0544;
  uVar17 = (ulonglong)DAT_028a0504;
  uVar2 = DAT_028a0504 | DAT_028a0544;
  uVar14 = DAT_028a06c8 & 3;
  if (uVar14 < 2) {
    uVar26 = DAT_028a06c8;
    if (uVar14 != 0) {
      uVar26 = DAT_028a0730;
    }
  }
  else {
    puVar20 = &DAT_028a07c8;
    if (uVar14 == 2) {
      puVar20 = &DAT_028a0630;
    }
    uVar26 = *puVar20;
  }
  uVar47 = CONCAT44(DAT_028a0608,DAT_028a0608);
  uVar15 = (ulonglong)DAT_028a07e0 & 0xff;
  uVar48 = DAT_028a07f0 + DAT_028a07e0;
  uVar45 = DAT_028a07e0 << 0x18 | uVar15 | uVar15 << 0x10 | uVar15 << 8;
  bVar19 = (byte)uVar40;
  DAT_028a07e0 = (uint)uVar45;
  uVar46 = uVar45 | uVar45 << 0x20;
  lVar16 = (longlong)DAT_028a0850;
  DAT_028a04fc = uVar2;
  DAT_028a0518 = uVar40;
  DAT_028a0530 = uVar44;
  *(ulonglong *)(DAT_028a04d0 - (ulonglong)(uVar44 ^ 0x8ca02f12)) =
       (*(ulonglong *)(DAT_028a04d0 + -0x10) ^ uVar47) >> ((bVar19 ^ 0x83) & 0x3f) ^ uVar46;
  uVar15 = CONCAT44(DAT_028a0720,DAT_028a0720);
  *(ulonglong *)(lVar5 + -0x30) =
       uVar15 ^ 0x79c63ccfdc661b12 ^
       CONCAT44(uVar6,uVar8) ^ *(ulonglong *)(lVar5 - (uVar21 ^ 0x27e5ad85));
  uVar27 = (ulonglong)DAT_028a07f0 & 0xff;
  uVar24 = DAT_028a07f0 << 0x18 | uVar27 | uVar27 << 0x10 | uVar27 << 8;
  DAT_028a07f0 = (uint)uVar24;
  uVar24 = uVar24 << 0x20 | uVar24;
  uVar28 = uVar42 ^ 0x886235d0;
  *(ulonglong *)(lVar5 - uVar28) =
       (*(ulonglong *)(lVar5 - (uVar17 ^ 0xc19674f9)) ^ uVar46 |
       CONCAT44(DAT_028a07bc,DAT_028a07bc) ^ *(ulonglong *)(lVar5 + -0x70)) ^ uVar24;
  bVar3 = (byte)uVar1;
  *(ulonglong *)(lVar5 + -200) =
       (CONCAT44(uVar40,uVar44) ^ 0x892a941b9e3ea166) >> ((bVar3 ^ 0x32) & 0x3f);
  uVar27 = CONCAT44(DAT_028a07d4,DAT_028a07d4);
  uVar14 = uVar48 & 0xff;
  DAT_028a0698 = uVar48 * 0x1000000 | uVar14 | uVar14 << 0x10 | uVar14 << 8;
  uVar29 = CONCAT44(DAT_028a0698,DAT_028a0698);
  *(ulonglong *)(lVar5 - (uVar21 ^ 0x27e5aded)) =
       uVar29 ^ uVar24 ^ *(ulonglong *)(lVar5 - ((ulonglong)uVar2 ^ 0xffffff57)) ^
       *(ulonglong *)(lVar5 + -0xc0) ^ uVar27;
  uVar49 = CONCAT44(DAT_028a05e0,DAT_028a05e0);
  lVar25 = (*(ulonglong *)(lVar5 - (uVar32 ^ 0x3c31f86)) ^ uVar29) +
           (*(ulonglong *)(lVar5 + -0xa0) ^ uVar49);
  auVar51._4_4_ = DAT_028a07dc + DAT_028a05e8;
  auVar51._0_4_ = DAT_028a05e8;
  auVar51._8_8_ = 0;
  auVar52 = pshufb(auVar51,_DAT_023d4e90);
  DAT_028a05e8 = auVar52._0_4_;
  uVar10 = DAT_028a05e8;
  uVar21 = (CONCAT44(DAT_028a0624,DAT_028a0624) ^ *(ulonglong *)(lVar5 + -0xd0)) +
           (uVar47 ^ *(ulonglong *)(lVar5 + -0x80));
  *(ulonglong *)(lVar5 + -0x30) = uVar21 ^ uVar46;
  uVar47 = (ulonglong)DAT_028a07dc & 0xff;
  uVar35 = DAT_028a07dc << 0x18 | uVar47 | uVar47 << 0x10 | uVar47 << 8;
  uVar53 = auVar52._4_4_;
  auVar52._0_8_ = CONCAT44(uVar10,uVar10);
  auVar52._8_4_ = uVar53;
  auVar52._12_4_ = uVar53;
  auVar54._8_8_ = uVar21 + lVar25;
  auVar54._0_8_ = lVar25;
  _DAT_028a0600 = uVar53;
  *(undefined1 (*) [16])(lVar5 + -0x78) = auVar54 ^ auVar52;
  DAT_028a07dc = (uint)uVar35;
  uVar35 = uVar35 << 0x20 | uVar35;
  bVar4 = (byte)uVar13;
  *(ulonglong *)(lVar5 - (uVar42 ^ 0x88623588)) = lVar25 << ((bVar4 ^ 0xe6) & 0x3f) ^ uVar35;
  uVar30 = CONCAT44(DAT_028a0630,DAT_028a0630);
  uVar21 = (CONCAT44(uVar10,uVar10) ^ *(ulonglong *)(lVar5 + -0x78)) >> 0x27;
  *(ulonglong *)(lVar5 + -200) = uVar30 ^ uVar21;
  uVar21 = *(ulonglong *)(lVar5 + -0xf0) ^ uVar35 | uVar21;
  uVar36 = (ulonglong)DAT_028a0730;
  uVar37 = CONCAT44(DAT_028a0730,DAT_028a0730);
  *(ulonglong *)(lVar5 + -0xa8) = uVar37 ^ uVar21;
  uVar42 = (ulonglong)DAT_028a0808 & 0xff;
  uVar38 = DAT_028a0808 << 0x18 | uVar42 | uVar42 << 0x10 | uVar42 << 8;
  uVar50 = CONCAT44(uVar53,uVar53);
  DAT_028a0808 = (uint)uVar38;
  uVar38 = uVar38 << 0x20 | uVar38;
  *(ulonglong *)(lVar5 + -0xa0) =
       uVar21 ^ uVar50 ^ *(ulonglong *)(lVar5 - (ulonglong)(uVar44 ^ 0x8ca02f92)) ^ uVar38;
  uVar14 = DAT_028a07c8;
  lVar25 = (CONCAT44(uVar6,uVar13) ^ 0x3c31f96fffffff2) +
           (CONCAT44(DAT_028a0548,DAT_028a0548) ^ *(ulonglong *)(lVar5 + -0xe0));
  uVar21 = (ulonglong)DAT_028a07c8 & 0xff;
  uVar39 = DAT_028a07c8 << 0x18 | uVar21 | uVar21 << 0x10 | uVar21 << 8;
  DAT_028a07c8 = (uint)uVar39;
  _DAT_028a06fc = (uint)lVar25 ^ DAT_028a07c8 ^ _DAT_028a06fc;
  uVar42 = (uVar49 ^ *(ulonglong *)(lVar5 + -0xb8)) + lVar25;
  uVar41 = _DAT_028a06fc & 0xff;
  _DAT_028a06fc = _DAT_028a06fc << 0x18 | uVar41 | uVar41 << 0x10 | uVar41 << 8;
  uVar31 = CONCAT44(_DAT_028a06fc,_DAT_028a06fc);
  *(ulonglong *)(lVar5 + -0x30) = uVar31 ^ uVar42;
  uVar21 = (CONCAT44(DAT_028a0614,DAT_028a0614) ^ *(ulonglong *)(lVar5 + -0x28)) +
           (CONCAT44(uVar6,uVar1) ^ 0xb5d3c166a4edf599);
  *(ulonglong *)(lVar5 + -0x78) = uVar31 ^ uVar21;
  uVar41 = uVar26 & 0xff;
  DAT_028a07f4 = uVar26 << 0x18 | uVar41 | uVar41 << 0x10 | uVar41 << 8;
  uVar47 = CONCAT44(DAT_028a07f4,DAT_028a07f4);
  *(ulonglong *)(lVar5 + -0xf0) =
       (uVar27 ^ *(ulonglong *)(lVar5 + -0xc0)) + uVar21 + uVar42 ^ uVar47;
  uVar21 = (ulonglong)DAT_028a06c8 & 0xff;
  uVar21 = DAT_028a06c8 << 0x18 | uVar21 | uVar21 << 0x10 | uVar21 << 8;
  DAT_028a06c8 = (uint)uVar21;
  uVar21 = uVar21 << 0x20 | uVar21;
  *(ulonglong *)(lVar5 - (uVar23 ^ 0xffffff57)) = uVar42 << ((bVar3 ^ 0x28) & 0x3f) ^ uVar21;
  uVar42 = (*(ulonglong *)(lVar5 + -0x30) ^ uVar31) >> (((byte)uVar8 ^ 0x67) & 0x3f);
  *(ulonglong *)(lVar5 + -0x80) = uVar42 ^ uVar35;
  uVar42 = *(ulonglong *)(lVar5 + -0xa8) ^ uVar21 | uVar42;
  *(ulonglong *)(lVar5 + -0x10) = uVar42 ^ uVar38;
  *(ulonglong *)(lVar5 - (ulonglong)(uVar7 ^ 0x886235b8)) =
       *(ulonglong *)(lVar5 + -0xf0) ^ uVar37 ^ uVar47 ^ uVar42;
  uVar39 = uVar39 << 0x20 | uVar39;
  uVar27 = *(ulonglong *)(lVar5 + -0xc0) ^ uVar37;
  uVar42 = (*(ulonglong *)(lVar5 + -0x70) ^ uVar50) + uVar27;
  *(ulonglong *)(lVar5 + -200) = uVar42 ^ uVar31;
  *(ulonglong *)(lVar5 + -0x30) = uVar27 << (((byte)uVar2 ^ 0xd1) & 0x3f) ^ uVar24;
  *(ulonglong *)(lVar5 + -0xb8) = uVar27 >> (((byte)uVar44 ^ 0xf0) & 0x3f) ^ uVar46;
  uVar27 = *(ulonglong *)(lVar5 - (ulonglong)(uVar2 ^ 0xffffff47)) ^ uVar46 |
           *(ulonglong *)(lVar5 - (uVar23 ^ 0xffffffcf)) ^ uVar24;
  *(ulonglong *)(lVar5 + -0xa8) = uVar27 ^ uVar38;
  *(ulonglong *)(lVar5 + -0x80) = uVar39 ^ uVar27 ^ uVar42;
  uVar17 = uVar17 ^ 0xc1967419;
  *(ulonglong *)(lVar5 - uVar17) =
       CONCAT44(uVar11,uVar40) ^ uVar39 ^ *(ulonglong *)(lVar5 - (uVar23 ^ 0xffffff7f)) ^
       0xc67d9cdc59645019;
  uVar27 = *(ulonglong *)(lVar5 + -0xa0) ^ uVar38;
  uVar42 = (*(ulonglong *)(lVar5 + -0xf0) ^ uVar47) + uVar27 ^ uVar50;
  *(ulonglong *)(lVar5 + -0x70) = uVar42;
  uVar49 = uVar27 << 0xc;
  *(ulonglong *)(lVar5 + -0xb8) = uVar49 ^ uVar39;
  *(ulonglong *)(lVar5 + -0x30) =
       CONCAT44(uVar6,uVar7) ^ 0xefa0194e1d0bfc49 | *(ulonglong *)(lVar5 + -0xc0) ^ uVar37;
  uVar27 = uVar27 >> ((bVar19 ^ 0xac) & 0x3f);
  *(ulonglong *)(lVar5 + -0xa8) = uVar27 ^ uVar21;
  *(ulonglong *)(lVar5 + -0x10) =
       uVar49 << (((byte)*(undefined4 *)(lVar5 + -0x80) ^ (byte)uVar14) & 0x3f);
  *(ulonglong *)(lVar5 + -0xf0) = (uVar27 | uVar49) ^ uVar24;
  *(ulonglong *)(lVar5 + -0xc0) = uVar27 >> (((byte)uVar11 ^ 0xea) & 0x3f);
  uVar42 = uVar24 ^ uVar50 ^ *(ulonglong *)(lVar5 - (uVar32 ^ 0x3c31f66)) ^ uVar42;
  *(ulonglong *)(lVar5 + -0xa0) = uVar42 ^ uVar35;
  uVar42 = (*(ulonglong *)(lVar5 + -200) ^ uVar31) + uVar42;
  *(ulonglong *)(lVar5 - (ulonglong)(uVar44 ^ 0x8ca02ff2)) = uVar42 ^ uVar47;
  *(ulonglong *)(lVar5 + -0xb8) =
       *(ulonglong *)(lVar5 - (ulonglong)(uVar40 ^ 0x4388efa8)) >> ((byte)uVar42 & 0x3f);
  uVar42 = (ulonglong)(*(uint *)(lVar5 + -0xa0) ^ uVar9) << 0x3a;
  *(ulonglong *)(lVar5 + -0xa8) = uVar42 ^ uVar29;
  uVar32 = (*(ulonglong *)(lVar5 - (ulonglong)(uVar2 ^ 0xffffff5f)) ^ uVar35) >>
           ((bVar3 ^ 0xf) & 0x3f);
  *(ulonglong *)(lVar5 + -0xc0) = uVar32 ^ auVar52._0_8_;
  *(ulonglong *)(lVar5 + -0xf0) =
       (CONCAT44(uVar13,uVar8) ^ 0x282b9b1559e51299) <<
       (((byte)uVar26 ^ (byte)*(ulonglong *)(lVar5 + -0x10)) & 0x3f);
  *(ulonglong *)(lVar5 + -200) = (uVar32 | uVar42) ^ uVar30;
  *(ulonglong *)(lVar5 + -0x30) =
       uVar37 ^ uVar47 ^ uVar30 ^ *(ulonglong *)(lVar5 - (uVar33 ^ 0x90634fb0)) ^
       *(ulonglong *)(lVar5 + -0x10);
  *(ulonglong *)(lVar5 + -0xb8) =
       (*(ulonglong *)(lVar5 + -0x80) ^ uVar39) +
       (*(ulonglong *)(lVar5 - (ulonglong)(uVar7 ^ 0x88623508)) ^ uVar50) ^ uVar46;
  *(ulonglong *)(lVar5 - (ulonglong)(uVar11 ^ 0x27e5ad5d)) =
       (*(ulonglong *)(lVar5 - (ulonglong)(uVar6 ^ 0x3c31f16)) ^ uVar39) << 0x16 ^ uVar37;
  uVar42 = (*(ulonglong *)(lVar5 + -0x80) ^ uVar39) >> ((bVar4 ^ 0xd5) & 0x3f);
  *(ulonglong *)(lVar5 + -0xf0) = uVar24 ^ uVar42;
  uVar42 = *(ulonglong *)(lVar5 + -0xa0) ^ uVar37 | uVar42;
  *(ulonglong *)(lVar5 + -0xc0) = uVar30 ^ uVar42;
  uVar42 = uVar42 ^ *(ulonglong *)(lVar5 - (ulonglong)(uVar44 ^ 0x8ca02f5a));
  *(ulonglong *)(lVar5 + -200) = uVar42;
  *(ulonglong *)(lVar5 - (ulonglong)(uVar8 ^ 0x90634f08)) =
       (uVar42 ^ uVar46) + (*(ulonglong *)(lVar5 + -0x10) ^ uVar47) ^ uVar50;
  uVar10 = DAT_028a0520;
  *(ulonglong *)(lVar5 - (ulonglong)(uVar1 ^ 0xc1967489)) =
       (*(ulonglong *)(lVar5 + -200) ^ uVar46) << (((byte)uVar6 ^ 0xb6) & 0x3f) ^ uVar38;
  *(ulonglong *)(lVar5 - (ulonglong)(uVar40 ^ 0x4388ef38)) =
       (CONCAT44(uVar7,uVar2) ^ 0x11d767943c20a722) <<
       (((byte)uVar48 ^ (byte)*(undefined4 *)(lVar5 - uVar28)) & 0x3f);
  puVar43 = (ulonglong *)(lVar5 - (ulonglong)(uVar1 ^ 0xc19674c1));
  *(ulonglong *)(lVar5 + -0xf0) = (uVar45 << 0x20 ^ *puVar43) >> 0x20 ^ uVar31;
  puVar22 = (ulonglong *)(lVar5 - (ulonglong)(uVar6 ^ 0x3c31f56));
  *puVar22 = (*(ulonglong *)(lVar5 - (ulonglong)(uVar2 ^ 0xffffff0f)) ^ uVar31 |
             *(ulonglong *)(lVar5 + -0x80) ^ uVar38) ^ uVar29;
  uVar9 = DAT_028a051c;
  uVar32 = (ulonglong)DAT_028a051c;
  *(ulonglong *)(lVar5 + -0x10) =
       uVar29 ^ uVar39 ^ uVar50 ^ *(ulonglong *)(lVar5 + -0xc0) ^
       *(ulonglong *)(lVar5 - (uVar32 ^ 0xafa7ce2c));
  uVar33 = *(ulonglong *)(lVar5 + -0x30) ^ uVar37;
  *(ulonglong *)(lVar5 + -0xa8) = (*(ulonglong *)(lVar5 + -0xb8) ^ uVar46) + uVar33 ^ uVar39;
  uVar14 = DAT_028a053c;
  uVar42 = (ulonglong)DAT_028a053c;
  *(ulonglong *)(lVar5 - (ulonglong)(uVar13 ^ 0xffffff37)) =
       uVar33 << (((byte)DAT_028a053c ^ 100) & 0x3f) ^ uVar21;
  puVar34 = (ulonglong *)(lVar5 - (ulonglong)(uVar8 ^ 0x90634ff8));
  *puVar34 = (uVar36 << 0x20 ^ *(ulonglong *)(lVar5 + -0x30)) >> 0x20 ^ uVar47;
  uVar21 = *(ulonglong *)(lVar5 + -0x80) ^ uVar47 | uVar21 ^ *(ulonglong *)(lVar5 + -200);
  *(ulonglong *)(lVar5 + -0xc0) = uVar21 ^ auVar52._0_8_;
  uVar33 = CONCAT44(DAT_028a07e8,DAT_028a07e8);
  *(ulonglong *)(lVar5 + -0xb8) =
       *(ulonglong *)(lVar5 - (ulonglong)(uVar44 ^ 0x8ca02f4a)) ^ uVar39 ^ uVar33 ^ uVar21;
  puVar18 = (ulonglong *)(lVar5 - (ulonglong)(uVar44 ^ 0x8ca02f9a));
  *(ulonglong *)(lVar5 + -0x30) =
       (uVar33 ^ *(ulonglong *)(lVar5 - (ulonglong)(uVar7 ^ 0x886235c0))) + (*puVar18 ^ uVar31) ^
       uVar46;
  uVar8 = DAT_028a0514;
  uVar6 = DAT_028a04f8;
  uVar33 = (ulonglong)DAT_028a04f8;
  uVar27 = (ulonglong)DAT_028a0514;
  *puVar43 = (CONCAT44(DAT_028a073c,DAT_028a073c) ^ *(ulonglong *)(lVar5 - (uVar33 ^ 0x27e5ad6d))) +
             (*(ulonglong *)(lVar5 - (uVar27 ^ 0x2245ad8c)) ^ uVar50) ^ uVar31;
  uVar1 = *(uint *)(&DAT_023d0560 + uVar17 + lVar16);
  *(ulonglong *)(lVar5 + -0x80) =
       (CONCAT44(uVar7,uVar2) ^ 0x40234c390694c36f) +
       (CONCAT44(uVar13,DAT_028a0524) ^ 0xa1a93f4c94233f71);
  uVar17 = CONCAT44(DAT_028a0680,DAT_028a0680);
  *(ulonglong *)(lVar5 - (ulonglong)(uVar2 ^ 0xffffff3f)) =
       (*(ulonglong *)(lVar5 + -0x30) ^ uVar46) + (*(ulonglong *)(lVar5 + -200) ^ uVar31) ^ uVar17;
  uVar24 = CONCAT44(DAT_028a06b8,DAT_028a06b8);
  *(ulonglong *)(lVar5 + -0x78) = (*(ulonglong *)(lVar5 + -0x30) ^ uVar46) << 0xe ^ uVar24;
  *(ulonglong *)(lVar5 - (ulonglong)(uVar40 ^ 0x4388ef20)) =
       *(ulonglong *)(lVar5 + -0xa8) ^ uVar39 |
       *(ulonglong *)(lVar5 - (ulonglong)(uVar40 ^ 0x4388efe0)) ^ uVar24;
  bVar12 = DAT_028a0540;
  uVar7 = DAT_028a050c;
  uVar21 = *(ulonglong *)(lVar5 + -0x30) ^ uVar46;
  uVar49 = (ulonglong)DAT_028a050c;
  *(ulonglong *)(lVar5 + -0x70) = uVar21 >> (((byte)DAT_028a050c ^ 0x93) & 0x3f) ^ uVar37;
  *(ulonglong *)(lVar5 + -0x80) = uVar31 ^ *(ulonglong *)(lVar5 + -0xf0) | uVar21;
  *(ulonglong *)(lVar5 - (uVar33 ^ 0x27e5ad35)) =
       (uVar37 ^ *(ulonglong *)(lVar5 - (uVar32 ^ 0xafa7ce2c)) |
       uVar24 ^ *(ulonglong *)(lVar5 + -0x78)) ^ uVar35;
  *(ulonglong *)(lVar5 + -0xb8) =
       uVar35 ^ uVar17 ^ auVar52._0_8_ ^ *(ulonglong *)(lVar5 + -200) ^ *puVar22;
  *(ulonglong *)(lVar5 + -0xf0) =
       (*(ulonglong *)(lVar5 + -0xc0) ^ uVar17) << ((bVar19 ^ 0x9f) & 0x3f);
  uVar21 = CONCAT44(DAT_028a07cc,DAT_028a07cc);
  *(ulonglong *)(lVar5 - (uVar42 ^ 0xada50274)) =
       (CONCAT44(uVar44,uVar13) ^ 0x8ca02fe2fffffff1) + (uVar15 ^ *(ulonglong *)(lVar5 + -0x88)) ^
       uVar21;
  uVar41 = DAT_028a06e0 ^ *(uint *)(lVar5 - (uVar23 ^ 0xffffffcf));
  *puVar34 = (CONCAT44(uVar8,uVar44) ^ 0xb13a9eaf397dae3f) +
             *(longlong *)(lVar5 - (uVar49 ^ 0xcc65d501));
  uVar26 = uVar41 & 0xff;
  DAT_028a06e0 = uVar41 << 0x18 | uVar26 | uVar26 << 0x10 | uVar26 << 8;
  uVar23 = (ulonglong)DAT_028a06e0;
  uVar32 = CONCAT44(DAT_028a06e0,DAT_028a06e0);
  *puVar18 = (*(ulonglong *)(lVar5 + -0x10) ^ uVar39) + (uVar21 ^ *(ulonglong *)(lVar5 + -0x30)) ^
             uVar32;
  uVar33 = (ulonglong)DAT_028a0500;
  *(ulonglong *)(lVar5 + -0x70) =
       (CONCAT44(uVar6,uVar14) ^ 0xa5d0597c802b4772) +
       (CONCAT44(DAT_028a0500,uVar10) ^ 0xe050a6b3180886a1);
  *(ulonglong *)(lVar5 - (ulonglong)(uVar44 ^ 0x8ca02f42)) =
       (*(ulonglong *)(lVar5 + -0x78) ^ uVar32) +
       (uVar39 ^ *(ulonglong *)(lVar5 + -0xa8)) +
       (CONCAT44(DAT_028a0710,DAT_028a0710) ^
       *(ulonglong *)(lVar5 - (ulonglong)(uVar11 ^ 0x27e5ad65))) ^ uVar32;
  uVar21 = (*(ulonglong *)(lVar5 + -0x78) ^ uVar32) << ((bVar4 ^ 0xef) & 0x3f);
  *(ulonglong *)(lVar5 + -0x80) = CONCAT44(DAT_028a07f8,DAT_028a07f8) ^ uVar21;
  uVar42 = ((uVar23 << 0x20 ^ *(ulonglong *)(lVar5 + -0x78)) >> 0x30 | uVar21) ^ uVar32;
  *(ulonglong *)(lVar5 + -0x30) = uVar42;
  uVar42 = uVar42 ^ *(ulonglong *)(lVar5 + -0xa0);
  *(ulonglong *)(lVar5 + -0x70) = CONCAT44(DAT_028a06c4,DAT_028a06c4) ^ uVar42;
  *(ulonglong *)(lVar5 + -0xa8) = (uVar17 ^ *(ulonglong *)(lVar5 + -0xc0)) + uVar42 ^ uVar50;
  uVar21 = uVar42 << (((byte)DAT_028a0534 ^ 0x34) & 0x3f);
  uVar42 = uVar42 >> ((bVar3 ^ 5) & 0x3f);
  *(ulonglong *)(lVar5 + -0xf0) = uVar35 ^ uVar21;
  *(ulonglong *)(lVar5 + -200) = CONCAT44(DAT_028a06d4,DAT_028a06d4) ^ uVar42;
  uVar14 = DAT_028a052c;
  uVar23 = CONCAT44(DAT_028a0744,DAT_028a0744);
  *(ulonglong *)(lVar5 - ((ulonglong)DAT_028a052c ^ 0xf44b83e6)) = (uVar42 | uVar21) ^ uVar23;
  *(ulonglong *)(lVar5 - (uVar33 ^ 0xffffff7f)) =
       (CONCAT44(uVar8,uVar7) ^ 0xdf7cae845de91460) + (CONCAT44(uVar9,uVar6) ^ 0x3bf881e1b3e977d5);
  *(ulonglong *)(lVar5 + -0x10) =
       uVar23 ^ uVar50 ^ *(ulonglong *)(lVar5 + -0x78) ^ *(ulonglong *)(lVar5 + -0xa8) ^
       CONCAT44(DAT_028a07d8,DAT_028a07d8);
  uVar23 = *(ulonglong *)(lVar5 + -0xb8) ^ auVar52._0_8_;
  uVar21 = uVar23 << ((bVar12 ^ 0x20) & 0x3f);
  *(ulonglong *)(lVar5 + -0x30) =
       (uVar32 ^ *(ulonglong *)(lVar5 - (ulonglong)(uVar13 ^ 0xffffff5f))) + uVar23 ^ uVar47;
  *(ulonglong *)(lVar5 + -0xc0) = uVar21 ^ auVar52._0_8_;
  uVar23 = uVar23 >> (((byte)uVar14 ^ 0x99) & 0x3f);
  uVar21 = uVar21 | uVar23;
  *(ulonglong *)(lVar5 + -0x70) = uVar23 ^ uVar50;
  *(ulonglong *)(lVar5 + -200) = uVar21 ^ uVar46;
  *(ulonglong *)(lVar5 - (uVar27 ^ 0x2245ad0c)) =
       CONCAT44(uVar11,uVar40) ^ 0xb5c9ba24fad7ac17 | uVar21;
  uVar21 = uVar47 ^ uVar46 ^ *(ulonglong *)(lVar5 + -200) ^ *(ulonglong *)(lVar5 + -0x30);
  *(ulonglong *)(lVar5 + -0x80) = CONCAT44(DAT_028a0590,DAT_028a0590) ^ uVar21;
  *(ulonglong *)(lVar5 + -0x78) =
       CONCAT44(DAT_028a057c,DAT_028a057c) ^ (uVar50 ^ *(ulonglong *)(lVar5 + -0xa8)) + uVar21;
  *(ulonglong *)(lVar5 + -0xa0) = auVar52._0_8_ ^ *(ulonglong *)(lVar5 + -0xc0) | 0x6d521d8b3b4c1901
  ;
  *(ulonglong *)(lVar5 + -0xb8) = uVar21 << ((bVar3 ^ 0x1e) & 0x3f) ^ uVar38;
  *(uint *)(&DAT_028a0820 + (longlong)(int)(uVar1 ^ uVar2) * 4) =
       *(uint *)(&DAT_023d0568 + lVar16) ^ uVar13;
  return;
}



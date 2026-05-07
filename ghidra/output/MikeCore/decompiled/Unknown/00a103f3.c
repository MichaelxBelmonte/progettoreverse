// Function: FUN_00a103f3
// Address: 00a103f3
// Size: 3973 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a103f3(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  
  iVar9 = DAT_028a06cc;
  uVar24 = DAT_028a0544;
  uVar7 = DAT_028a051c;
  uVar6 = DAT_028a050c;
  uVar5 = DAT_028a0500;
  uVar16 = DAT_028a04f0;
  uVar17 = DAT_028a04dc;
  lVar4 = DAT_028a04d0;
  uVar20 = (ulonglong)DAT_028a0544;
  uVar23 = (ulonglong)DAT_028a0500;
  uVar1 = DAT_028a0500 | DAT_028a0544;
  uVar38 = (ulonglong)DAT_028a051c;
  uVar25 = DAT_028a051c >> 0x18 | (DAT_028a051c & 0xff0000) >> 8;
  uVar2 = DAT_028a051c & 0xff00;
  uVar32 = uVar25 | uVar2 << 8 | DAT_028a051c << 0x18;
  uVar39 = (ulonglong)DAT_028a050c;
  DAT_028a0524 = DAT_028a050c ^ 0xffffffff;
  bVar12 = (byte)DAT_028a050c;
  uVar34 = DAT_028a06cc * DAT_028a04f0;
  lVar10 = (longlong)DAT_028a084c;
  DAT_028a0510 = uVar32;
  DAT_028a0518 = uVar1;
  *(ulonglong *)(DAT_028a04d0 - (uVar20 ^ 0xffffff8f)) =
       (CONCAT44(DAT_028a051c,uVar1) ^ 0xd09119c301f7e5d9) << ((bVar12 ^ 0xa0) & 0x3f);
  uVar8 = DAT_028a0590;
  uVar30 = (*(ulonglong *)(lVar4 + -0x80) ^ (ulonglong)DAT_028a0590 << 0x20) >> 0x29;
  uVar11 = CONCAT44(uVar17,uVar17);
  *(ulonglong *)(lVar4 + -0xf0) = uVar30 ^ uVar11;
  uVar35 = CONCAT44(DAT_028a07d8,DAT_028a07d8);
  *(ulonglong *)(lVar4 + -200) = (*(ulonglong *)(lVar4 + -0x10) ^ uVar35) + 0x4ed47ecc2b06b91;
  uVar15 = (uVar17 ^ 0xffffffff) & 0xff;
  uVar15 = (uVar17 ^ 0xffffffff) << 0x18 | uVar15 | uVar15 << 0x10 | uVar15 << 8;
  uVar26 = CONCAT44(uVar15,uVar15);
  uVar28 = CONCAT44(DAT_028a0808,DAT_028a0808) ^ *(ulonglong *)(lVar4 + -0xb8) | uVar30;
  *(ulonglong *)(lVar4 + -0xa8) = uVar28 ^ uVar26;
  uVar21 = CONCAT44(DAT_028a057c,DAT_028a057c);
  *(ulonglong *)(lVar4 + -0xc0) =
       CONCAT44(uVar6,uVar5) ^ 0x1e0bae737d504621 |
       *(ulonglong *)(lVar4 - (ulonglong)(uVar32 ^ 0x5ccea7d7)) ^ uVar21;
  uVar18 = CONCAT44(uVar16,uVar16);
  *(ulonglong *)(lVar4 + -0xa0) = uVar18 ^ uVar21 ^ uVar28 ^ *(ulonglong *)(lVar4 + -0x78);
  *(ulonglong *)(lVar4 - (uVar39 ^ 0xcc65d5d1)) =
       uVar30 ^ uVar26 ^ *(ulonglong *)(lVar4 - (uVar23 ^ 0xffffff57));
  uVar33 = CONCAT44(iVar9,iVar9);
  uVar28 = CONCAT44(DAT_028a07f4,DAT_028a07f4);
  uVar15 = uVar34 & 0xff;
  uVar35 = uVar35 ^ *(ulonglong *)(lVar4 + -0x10);
  _DAT_028a07fc = uVar34 * 0x1000000 | uVar15 | uVar15 << 0x10 | uVar15 << 8;
  uVar31 = CONCAT44(_DAT_028a07fc,_DAT_028a07fc);
  uVar27 = (*(ulonglong *)(lVar4 + -0x30) ^ uVar28) + uVar35;
  bVar3 = (byte)uVar1;
  uVar30 = uVar35 << ((bVar3 ^ 0xd7) & 0x3f);
  *(ulonglong *)(lVar4 + -0x80) = uVar27 ^ uVar31;
  *(ulonglong *)(lVar4 + -0xb8) = uVar30 ^ uVar33;
  uVar35 = uVar35 >> ((bVar12 ^ 0xb9) & 0x3f);
  uVar30 = uVar30 | uVar35;
  *(ulonglong *)(lVar4 + -0xc0) = uVar35 ^ uVar18;
  *(ulonglong *)(lVar4 + -0xf0) = uVar30 ^ uVar18;
  *(ulonglong *)(lVar4 + -0xa8) = uVar26 ^ uVar27 ^ uVar30;
  *(ulonglong *)(lVar4 + -0x70) = (CONCAT44(uVar7,uVar24) | 0xeec88ba2e5e7f62a) ^ 0x1015141810100115
  ;
  uVar30 = uVar30 ^ uVar27;
  *(ulonglong *)(lVar4 + -0x30) = (uVar21 ^ *(ulonglong *)(lVar4 + -0x78)) + uVar30 ^ uVar31;
  uVar21 = uVar30 >> (((byte)uVar7 ^ 0x67) & 0x3f);
  *(ulonglong *)(lVar4 + -200) = uVar30 << ((bVar3 ^ 0xfa) & 0x3f) ^ uVar11;
  *(ulonglong *)(lVar4 + -0x10) = uVar21 ^ uVar33;
  *(ulonglong *)(lVar4 + -0xc0) =
       CONCAT44(uVar32,uVar32) ^ 0xca78691adf98f7de |
       *(ulonglong *)(lVar4 - (uVar39 ^ 0xcc65d521)) ^ uVar31;
  uVar21 = (*(ulonglong *)(lVar4 - (uVar23 ^ 0xffffff37)) ^ uVar11 | uVar21) ^ uVar18;
  *(ulonglong *)(lVar4 + -0xf0) = uVar21;
  *(ulonglong *)(lVar4 + -0x70) =
       CONCAT44(uVar24,uVar1) ^ 0x30818d19b9468164 | CONCAT44(uVar6,uVar7) ^ 0x6847a63b182a2b3f;
  *(ulonglong *)(lVar4 + -0x78) = uVar21 ^ uVar31 ^ *(ulonglong *)(lVar4 - (uVar39 ^ 0xcc65d591));
  uVar15 = DAT_028a0530;
  uVar24 = DAT_028a04f8;
  uVar35 = (ulonglong)DAT_028a0530;
  uVar21 = (ulonglong)DAT_028a04f8;
  uVar34 = DAT_028a04f8 & DAT_028a0530;
  uVar29 = uVar21 ^ 0x27e5ad55;
  DAT_028a0520 = uVar34;
  *(ulonglong *)(lVar4 - uVar29) =
       (*(ulonglong *)(lVar4 - ((ulonglong)uVar34 ^ 0x4a02d40)) ^ uVar18) + uVar27 ^ uVar11;
  *(ulonglong *)(lVar4 - (uVar35 ^ 0x8ca02f22)) =
       *(ulonglong *)(lVar4 + -0xb8) ^ uVar33 | *(ulonglong *)(lVar4 + -0xa8) ^ uVar11;
  *(ulonglong *)(lVar4 - (uVar35 ^ 0x8ca02f2a)) =
       (ulonglong)(*(uint *)(lVar4 + -0xa0) ^ uVar16) << 0x25 ^ uVar31;
  bVar13 = (byte)uVar24;
  puVar22 = (ulonglong *)(lVar4 - (ulonglong)(uVar34 ^ 0x4a02df0));
  *puVar22 = *(ulonglong *)(lVar4 + -0xc0) >> ((bVar13 ^ 0xe7) & 0x3f);
  uVar30 = (*(ulonglong *)(lVar4 + -0xa0) ^ uVar18) >> (((byte)uVar34 ^ 0xfb) & 0x3f);
  *(ulonglong *)(lVar4 + -0x70) = uVar30 ^ uVar33;
  *(ulonglong *)(lVar4 - (uVar21 ^ 0x27e5ad0d)) =
       (*(ulonglong *)(lVar4 - (uVar35 ^ 0x8ca02f2a)) ^ uVar31 | uVar30) ^ uVar26;
  *(ulonglong *)(lVar4 + -0x80) =
       CONCAT44(uVar6,uVar34) ^ 0x9c83ada560d482d4 | CONCAT44(uVar34,uVar24) ^ 0xbd0f630f893ca0ae;
  uVar21 = uVar26 ^ uVar11 ^ *(ulonglong *)(lVar4 + -0xf0) ^
           *(ulonglong *)(lVar4 - (uVar20 ^ 0xffffff57));
  *(ulonglong *)(lVar4 + -0xb8) = uVar21 ^ uVar33;
  uVar21 = (CONCAT44(DAT_028a0710,DAT_028a0710) ^ *(ulonglong *)(lVar4 + -0x98)) + uVar21;
  *(ulonglong *)(lVar4 + -0x10) = uVar21 ^ uVar18;
  *(ulonglong *)(lVar4 + -0xc0) = CONCAT44(uVar1,uVar15) ^ 0xd88c8865ec1d0b45;
  *(ulonglong *)(lVar4 + -0xa0) =
       (CONCAT44(DAT_028a0614,DAT_028a0614) ^ *(ulonglong *)(lVar4 + -0x28)) +
       (uVar31 ^ *(ulonglong *)(lVar4 - (uVar39 ^ 0xcc65d591))) ^ uVar11;
  *(ulonglong *)(lVar4 + -200) =
       (*(ulonglong *)(lVar4 - (uVar39 ^ 0xcc65d501)) ^ uVar11) + uVar21 ^ uVar26;
  uVar30 = CONCAT44(DAT_028a05e0,DAT_028a05e0);
  *(ulonglong *)(lVar4 - (uVar38 ^ 0xafa7ce2c)) = uVar21 << ((bVar3 ^ 0xe6) & 0x3f) ^ uVar30;
  uVar21 = (*puVar22 ^ uVar18) >> (((byte)uVar5 ^ 0xd8) & 0x3f);
  *(ulonglong *)(lVar4 + -0x80) = uVar21 ^ uVar18;
  uVar21 = uVar30 ^ *(ulonglong *)(lVar4 + -0x70) | uVar21;
  *(ulonglong *)(lVar4 + -0xf0) = CONCAT44(DAT_028a07dc,DAT_028a07dc) ^ uVar21;
  *(ulonglong *)(lVar4 + -0x98) =
       CONCAT44(uVar1,uVar6) ^ 0x214a70d6aebbe196 | CONCAT44(uVar6,uVar24) ^ 0x8828a256ab8ab24a;
  uVar36 = CONCAT44(DAT_028a06d0,DAT_028a06d0);
  *(ulonglong *)(lVar4 + -0xc0) = uVar21 ^ uVar26 ^ *(ulonglong *)(lVar4 + -200) ^ uVar36;
  uVar30 = (CONCAT44(uVar15,uVar24) ^ 0x8ca02fe227e5adf2) +
           (CONCAT44(DAT_028a0624,DAT_028a0624) ^ *(ulonglong *)(lVar4 - (uVar38 ^ 0xafa7ce8c)));
  uVar21 = CONCAT44(DAT_028a07f0,DAT_028a07f0) ^ uVar30;
  *(ulonglong *)(lVar4 + -0x30) = uVar21;
  uVar16 = (uint)uVar21 ^ DAT_028a06ac;
  uVar19 = uVar16 & 0xff;
  uVar19 = uVar16 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar31 = CONCAT44(uVar19,uVar19);
  DAT_028a06ac = uVar19;
  *(ulonglong *)(lVar4 + -0xa0) = (*(ulonglong *)(lVar4 + -0x78) ^ uVar18) + uVar30 ^ uVar31;
  uVar21 = CONCAT44(DAT_028a0658,DAT_028a0658);
  *(ulonglong *)(lVar4 - (uVar39 ^ 0xcc65d5b1)) =
       (*(ulonglong *)(lVar4 + -0xa8) ^ uVar11) + (*(ulonglong *)(lVar4 + -0x60) ^ uVar21) ^ uVar31;
  puVar22 = (ulonglong *)(lVar4 - (ulonglong)(uVar32 ^ 0x5ccea70f));
  *(ulonglong *)(lVar4 + -0x70) =
       (*puVar22 ^ uVar31) + (*(ulonglong *)(lVar4 - (uVar20 ^ 0xffffffef)) ^ uVar31) ^ uVar31;
  *(ulonglong *)(lVar4 - (uVar20 ^ 0xffffff7f)) =
       (uVar33 ^ *(ulonglong *)(lVar4 + -0xb8)) <<
       (((byte)uVar16 ^ (byte)*(undefined4 *)(lVar4 + -0x10)) & 0x3f);
  uVar30 = CONCAT44(uVar8,uVar8);
  *(ulonglong *)(lVar4 - (uVar20 ^ 0xffffff67)) =
       (ulonglong)(uVar19 ^ *(uint *)(lVar4 + -0xa0)) << 0x21 ^ uVar30;
  uVar27 = (*(ulonglong *)(lVar4 + -0xa0) ^ uVar31) >> (((byte)uVar7 ^ 0x43) & 0x3f);
  *(ulonglong *)(lVar4 + -0xf0) = uVar28 ^ uVar27;
  uVar27 = uVar30 ^ *(ulonglong *)(lVar4 + -0x98) | uVar27;
  uVar28 = uVar27 ^ uVar11;
  *(ulonglong *)(lVar4 + -0x78) = uVar28;
  uVar30 = *(ulonglong *)(lVar4 - (ulonglong)(uVar32 ^ 0x5ccea7df)) ^ uVar31;
  *(ulonglong *)(lVar4 + -0x30) = uVar28 ^ uVar30;
  uVar37 = CONCAT44(DAT_028a07f8,DAT_028a07f8);
  *(ulonglong *)(lVar4 - uVar29) =
       (uVar30 ^ uVar27) + (uVar26 ^ *(ulonglong *)(lVar4 + -200)) ^ uVar37;
  *(ulonglong *)(lVar4 + -0x80) = (ulonglong)(*(uint *)(lVar4 + -0x30) ^ uVar17) << 0x2e ^ uVar31;
  *(ulonglong *)(lVar4 - (ulonglong)(uVar34 ^ 0x4a02d58)) =
       CONCAT44(uVar6,uVar15) ^ 0xd467668e8c6f4a9a | CONCAT44(uVar6,uVar34) ^ 0x16d0a87b67df8fd0;
  uVar27 = CONCAT44(DAT_028a074c,DAT_028a074c);
  uVar16 = DAT_028a074c ^ DAT_028a06f0;
  uVar17 = DAT_028a06f0 & 0xff;
  uVar33 = (ulonglong)(DAT_028a06f0 << 0x18 | uVar17) | (ulonglong)uVar17 << 0x10 |
           (ulonglong)uVar17 << 8;
  uVar11 = (uVar11 ^ *(ulonglong *)(lVar4 + -0x30)) >> ((bVar13 ^ 0xef) & 0x3f);
  uVar29 = uVar33 << 0x20 | uVar33;
  DAT_028a06f0 = (uint)uVar33;
  *(ulonglong *)(lVar4 + -0x10) = uVar29 ^ uVar11;
  *puVar22 = (*(ulonglong *)(lVar4 + -0x80) ^ uVar31 | uVar11) ^ uVar27;
  uVar17 = uVar16 & 0xff;
  DAT_028a05f0 = uVar16 << 0x18 | uVar17 | uVar17 << 0x10 | uVar17 << 8;
  uVar11 = uVar27 ^ uVar37 ^ *(ulonglong *)(lVar4 + -0xa0) ^ *(ulonglong *)(lVar4 + -0xa8);
  uVar30 = CONCAT44(DAT_028a05f0,DAT_028a05f0);
  *(ulonglong *)(lVar4 + -0x98) = uVar11 ^ uVar30;
  *(ulonglong *)(lVar4 - (uVar20 ^ 0xffffff0f)) = uVar11 ^ 0xe912f8fef0a8f33f;
  uVar36 = uVar36 ^ *(ulonglong *)(lVar4 + -0xc0);
  uVar26 = (uVar31 ^ *(ulonglong *)(lVar4 + -0x70)) + uVar36;
  bVar14 = (byte)(uVar7 >> 0x18);
  uVar11 = uVar36 << ((bVar14 ^ 0xa3) & 0x3f);
  uVar36 = uVar36 >> ((bVar12 ^ 0x95) & 0x3f);
  *(ulonglong *)(lVar4 + -0x78) = uVar26 ^ uVar29;
  uVar28 = uVar36 | uVar11;
  *(ulonglong *)(lVar4 + -200) = uVar11 ^ uVar27;
  *(ulonglong *)(lVar4 + -0xb8) =
       CONCAT44(uVar1,uVar5) ^ 0xc609d158c81bc267 | CONCAT44(uVar6,uVar15) ^ 0xd19dd2a5b8643d0c;
  *(ulonglong *)(lVar4 + -0x30) = uVar36 ^ uVar30;
  *(ulonglong *)(lVar4 + -0x80) =
       (*(ulonglong *)(lVar4 + -0x10) ^ uVar29) + (CONCAT44(uVar5,uVar24) ^ 0x427a7eae749bd470);
  *(ulonglong *)(lVar4 + -0xa0) = uVar28 ^ uVar30;
  uVar28 = uVar28 ^ *(ulonglong *)(lVar4 - (ulonglong)(uVar1 ^ 0xffffff87));
  *(ulonglong *)(lVar4 + -0xf0) = uVar28;
  uVar31 = (uVar37 ^ *(ulonglong *)(lVar4 + -0xa8)) + (uVar28 ^ uVar29);
  *(ulonglong *)(lVar4 + -0x70) = uVar31 ^ uVar27;
  uVar11 = (*(ulonglong *)(lVar4 - (uVar35 ^ 0x8ca02f12)) ^ uVar29) <<
           (((byte)uVar15 ^ 0xd8) & 0x3f);
  *(ulonglong *)(lVar4 + -0xb8) = uVar11 ^ uVar29;
  uVar28 = (*(ulonglong *)(lVar4 - (ulonglong)(uVar1 ^ 0xffffff0f)) ^ uVar29) >>
           (((byte)uVar5 ^ 0xf9) & 0x3f);
  *(ulonglong *)(lVar4 + -0xc0) = uVar28 ^ uVar27;
  uVar11 = (uVar11 | uVar28) ^ uVar29;
  *(ulonglong *)(lVar4 + -0x10) = uVar11;
  *(ulonglong *)(lVar4 + -200) = uVar11 ^ uVar31;
  *(ulonglong *)(lVar4 + -0x30) =
       (*(ulonglong *)(lVar4 - (uVar38 ^ 0xafa7cec4)) ^ uVar30) + uVar26 ^ uVar18;
  *(ulonglong *)(lVar4 - ((ulonglong)DAT_028a04fc ^ 0xffffff5f)) =
       *(ulonglong *)(lVar4 - (uVar23 ^ 0xffffffcf)) ^ uVar18 | 0x2b5bf0f80f07ca4f;
  uVar23 = CONCAT44(DAT_028a0608,DAT_028a0608);
  *(ulonglong *)(lVar4 + -0xa8) =
       (*(ulonglong *)(lVar4 - (ulonglong)(uVar34 ^ 0x4a02d78)) ^ uVar30) <<
       ((bVar12 ^ 0xb7) & 0x3f) ^ uVar23;
  uVar16 = DAT_028a06f4;
  uVar17 = DAT_028a0570;
  uVar24 = (DAT_028a06f4 ^ DAT_028a0570) & 0xff;
  DAT_028a0558 = (DAT_028a06f4 ^ DAT_028a0570) << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  uVar35 = CONCAT44(DAT_028a0558,DAT_028a0558);
  *(ulonglong *)(lVar4 - (uVar39 ^ 0xcc65d519)) =
       (*(ulonglong *)(lVar4 + -0x98) ^ uVar30) >> ((bVar13 ^ 0xd7) & 0x3f) ^ uVar35;
  uVar28 = CONCAT44(uVar16,uVar16);
  uVar23 = *(ulonglong *)(lVar4 + -0xb8) ^ uVar35 | uVar23 ^ *(ulonglong *)(lVar4 + -0xa8);
  uVar11 = CONCAT44(uVar17,uVar17);
  *(ulonglong *)(lVar4 + -0x10) = uVar23 ^ uVar11;
  uVar23 = *(ulonglong *)(lVar4 + -0x30) ^ uVar18 ^ uVar23;
  *(ulonglong *)(lVar4 + -0x78) = uVar23 ^ uVar28;
  *(ulonglong *)(lVar4 + -0xa0) = (*(ulonglong *)(lVar4 + -0x70) ^ uVar27) + uVar23 ^ uVar11;
  *(ulonglong *)(lVar4 + -0x80) = uVar23 << ((bVar14 ^ 0x8f) & 0x3f) ^ uVar11;
  *(ulonglong *)(lVar4 + -0xf0) =
       (CONCAT44(DAT_028a0538,uVar1) ^ 0x27b3b19315dfcaf2) >> ((bVar13 ^ 0xf1) & 0x3f);
  *(ulonglong *)(lVar4 - (uVar38 ^ 0xafa7cec4)) = uVar23 >> ((bVar3 ^ 0xdf) & 0x3f) ^ uVar28;
  uVar1 = *(uint *)(&DAT_023d0560 + (uVar39 ^ 0xcc65d5b1) + lVar10);
  *(ulonglong *)(lVar4 + -0xc0) = CONCAT44(uVar32,uVar34) ^ 0xaf57d822b8fe143d;
  uVar23 = *(ulonglong *)(lVar4 + -0x80) ^ uVar11;
  uVar38 = (*(ulonglong *)(lVar4 - (uVar20 ^ 0xffffff67)) ^ uVar28 | uVar23) ^ uVar11;
  uVar25 = uVar25 << 0x10 | uVar32 >> 0x10;
  *(ulonglong *)(lVar4 + -0xb8) = uVar38;
  DAT_028a053c = uVar25;
  *(ulonglong *)(lVar4 + -0xa8) = *(ulonglong *)(lVar4 + -0xa0) ^ uVar35 ^ uVar38;
  *(ulonglong *)(lVar4 + -0x10) = CONCAT44(uVar25,uVar32) ^ 0x22a94f6727e5afbe | uVar23;
  uVar29 = uVar29 ^ *(ulonglong *)(lVar4 + -200);
  uVar38 = (uVar18 ^ *(ulonglong *)(lVar4 + -0x30)) + uVar29;
  uVar29 = uVar29 >> ((bVar14 ^ 0x8f) & 0x3f);
  uVar39 = (ulonglong)((uint)*(ulonglong *)(lVar4 + -200) ^ (uint)uVar33) << 0x20;
  uVar18 = uVar39 | uVar29;
  uVar23 = uVar18 ^ uVar38;
  *(ulonglong *)(lVar4 + -0xf0) = uVar38 ^ uVar35;
  *(ulonglong *)(lVar4 + -0xc0) = uVar39 ^ uVar28;
  *(ulonglong *)(lVar4 + -0x98) = uVar29 ^ uVar11;
  *(ulonglong *)(lVar4 + -0xb8) = uVar18 ^ uVar35;
  *(ulonglong *)(lVar4 + -0x10) = CONCAT44(DAT_028a07a8,DAT_028a07a8) ^ uVar23;
  *(ulonglong *)(lVar4 + -0x80) =
       (uVar27 ^ *(ulonglong *)(lVar4 + -0x70)) >> ((bVar14 ^ 0xa8) & 0x3f);
  uVar23 = (uVar21 ^ *(ulonglong *)(lVar4 + -0x60)) + uVar23;
  *(ulonglong *)(lVar4 + -0x30) = uVar23 ^ uVar11;
  *(ulonglong *)(lVar4 + -0x78) =
       (CONCAT44(DAT_028a0548,DAT_028a0548) ^ *(ulonglong *)(lVar4 + -0xe0)) +
       (*(ulonglong *)(lVar4 + -0xa0) ^ uVar11) ^ uVar28;
  *(ulonglong *)(lVar4 + -200) =
       (*(ulonglong *)(lVar4 - (ulonglong)(uVar25 ^ 0xa7af5cb6)) ^ uVar28) + uVar23 ^ uVar35;
  puVar22 = (ulonglong *)(lVar4 - (ulonglong)(uVar25 ^ 0xa7af5cfe));
  *(ulonglong *)(lVar4 - (ulonglong)(uVar32 ^ 0x5ccea76f)) = (*puVar22 ^ uVar11) << 0xe ^ uVar30;
  *(ulonglong *)(lVar4 + -0x98) =
       (*(ulonglong *)(lVar4 + -0x30) ^ uVar11) + (CONCAT44(uVar32,uVar32) ^ 0x44cb3342aa06abdb);
  *(ulonglong *)(lVar4 + -0xb8) =
       (uVar11 ^ *puVar22) >> (((byte)(uVar2 >> 8) ^ 0xfc) & 0x3f) ^ uVar28;
  *(uint *)(&DAT_028a0820 + (longlong)(int)(uVar1 ^ uVar32) * 4) =
       *(uint *)(&DAT_023d0568 + lVar10) ^ uVar6;
  return;
}



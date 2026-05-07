// Function: FUN_00a07de7
// Address: 00a07de7
// Size: 4997 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a07de7(void)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong *puVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong *puVar52;
  ulonglong uVar53;
  byte bVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  uint uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  uint uVar60;
  ulonglong uVar61;
  
  bVar2 = (byte)DAT_028a07e8;
  iVar10 = DAT_028a0744;
  uVar5 = DAT_028a0694;
  uVar39 = DAT_028a05e0;
  uVar7 = DAT_028a0514;
  uVar6 = DAT_028a050c;
  uVar26 = DAT_028a0508;
  uVar1 = DAT_028a04fc;
  uVar4 = DAT_028a04f8;
  lVar3 = DAT_028a04d0;
  uVar18 = (ulonglong)DAT_028a04fc;
  uVar11 = DAT_028a04fc & 3;
  if (uVar11 < 2) {
    uVar38 = uVar18;
    if (uVar11 != 0) {
      uVar38 = (ulonglong)DAT_028a0500;
    }
  }
  else {
    puVar27 = &DAT_028a051c;
    if (uVar11 == 2) {
      puVar27 = &DAT_028a0534;
    }
    uVar38 = (ulonglong)*puVar27;
  }
  uVar23 = (uint)uVar38;
  uVar15 = (ulonglong)DAT_028a050c;
  uVar28 = (ulonglong)DAT_028a0508;
  uVar12 = DAT_028a0508 + DAT_028a050c;
  uVar20 = (ulonglong)DAT_028a04f8;
  uVar46 = (ulonglong)DAT_028a0514;
  uVar11 = DAT_028a0514 | DAT_028a04f8;
  uVar55 = CONCAT44(DAT_028a07a8,DAT_028a07a8);
  uVar29 = CONCAT44(DAT_028a069c,DAT_028a069c);
  uVar24 = DAT_028a06b8 - DAT_028a06c4;
  uVar25 = DAT_028a07bc - DAT_028a06d0;
  uVar57 = DAT_028a0744 + DAT_028a07f8;
  uVar60 = DAT_028a0694 ^ DAT_028a05e0;
  uVar51 = *(ulonglong *)(DAT_028a04d0 + -0x80) ^ uVar29 |
           *(ulonglong *)(DAT_028a04d0 - ((ulonglong)uVar11 ^ 0x27e5adcd)) ^ uVar55;
  bVar22 = (byte)DAT_028a07e8 ^ (byte)DAT_028a0590;
  uVar40 = (ulonglong)(byte)DAT_028a0590;
  uVar40 = (ulonglong)(byte)DAT_028a0590 << 0x18 | uVar40 | uVar40 << 0x10 | uVar40 << 8;
  DAT_028a0590 = (undefined4)uVar40;
  uVar40 = uVar40 << 0x20 | uVar40;
  lVar30 = (longlong)DAT_028a0830;
  DAT_028a0528 = uVar11;
  _DAT_028a0540 = uVar12;
  DAT_028a0544 = uVar23;
  *(ulonglong *)(DAT_028a04d0 + -0xb8) = uVar51 ^ uVar40;
  *(ulonglong *)(lVar3 + -0xc0) =
       (CONCAT44(uVar26,uVar12) ^ 0xdc29075657639bf9) + 0x20d9f30b8bd83db5;
  uVar13 = (uint)bVar22;
  DAT_028a057c = (uint)bVar22 << 0x18 | uVar13 | uVar13 << 0x10 | uVar13 << 8;
  uVar31 = CONCAT44(DAT_028a057c,DAT_028a057c);
  uVar32 = CONCAT44(DAT_028a07cc,DAT_028a07cc);
  *(ulonglong *)(lVar3 + -200) =
       uVar51 ^ uVar31 ^ *(ulonglong *)(lVar3 - (uVar28 ^ 0x88623568)) ^ uVar32;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar23 ^ 0xffffff5f)) =
       CONCAT44(uVar6,uVar12) ^ 0x52260e02e3eabefa | *(ulonglong *)(lVar3 + -0x30) ^ uVar55;
  uVar8 = DAT_028a0524;
  uVar56 = CONCAT44(uVar5,uVar5);
  uVar59 = CONCAT44(DAT_028a0578,DAT_028a0578);
  uVar41 = CONCAT44(DAT_028a06b4,DAT_028a06b4);
  uVar47 = (ulonglong)DAT_028a0524;
  uVar51 = (ulonglong)(byte)DAT_028a07e8;
  uVar51 = (ulonglong)(byte)DAT_028a07e8 << 0x18 | uVar51 | uVar51 << 0x10 | uVar51 << 8;
  DAT_028a07e8 = (undefined4)uVar51;
  uVar51 = uVar51 << 0x20 | uVar51;
  *(ulonglong *)(lVar3 + -0x70) =
       (*(ulonglong *)(lVar3 + -0xf0) ^ uVar41) +
       (*(ulonglong *)(lVar3 - (uVar47 ^ 0x8ca02f4a)) ^ uVar59) ^ uVar51;
  *(ulonglong *)(lVar3 - (uVar18 ^ 0x2245ad7d)) =
       (*(ulonglong *)(lVar3 + -0xa8) ^ uVar59) << 0xc ^ uVar56;
  uVar9 = DAT_028a0534;
  uVar13 = DAT_028a051c;
  uVar5 = DAT_028a0500;
  uVar58 = (ulonglong)DAT_028a0500;
  uVar16 = (ulonglong)DAT_028a051c;
  uVar19 = (ulonglong)DAT_028a0534;
  *(ulonglong *)(lVar3 + -0xc0) =
       (CONCAT44(DAT_028a0500,DAT_028a051c) ^ 0x12c5d507699ba5af) <<
       (((byte)*(undefined4 *)(lVar3 - (uVar19 ^ 0x18017a70)) ^ bVar2) & 0x3f);
  uVar14 = uVar60 & 0xff;
  DAT_028a0680 = uVar60 << 0x18 | uVar14 | uVar14 << 0x10 | uVar14 << 8;
  uVar17 = CONCAT44(DAT_028a0680,DAT_028a0680);
  bVar21 = (byte)uVar5;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar12 ^ 0x54c80ba1)) =
       (uVar59 ^ *(ulonglong *)(lVar3 + -0xa8)) >> ((bVar21 ^ 0xcb) & 0x3f) ^ uVar17;
  uVar59 = (ulonglong)DAT_028a07f8 & 0xff;
  uVar59 = DAT_028a07f8 << 0x18 | uVar59 | uVar59 << 0x10 | uVar59 << 8;
  DAT_028a07f8 = (uint)uVar59;
  uVar59 = uVar59 << 0x20 | uVar59;
  *(ulonglong *)(lVar3 - (uVar58 ^ 0xffffffcf)) =
       (*(ulonglong *)(lVar3 - (uVar18 ^ 0x2245ad45)) ^ uVar17 |
       *(ulonglong *)(lVar3 - (ulonglong)(uVar23 ^ 0xffffff7f)) ^ uVar56) ^ uVar59;
  *(ulonglong *)(lVar3 + -0xf0) =
       *(ulonglong *)(lVar3 + -0xa0) >>
       (((byte)uVar60 ^ (byte)*(undefined4 *)(lVar3 + -0xb8)) & 0x3f);
  uVar18 = (ulonglong)DAT_028a05e0 & 0xff;
  uVar42 = uVar51 ^ uVar59 ^ *(ulonglong *)(lVar3 + -0x30) ^ *(ulonglong *)(lVar3 + -0x70);
  uVar33 = DAT_028a05e0 << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  DAT_028a05e0 = (uint)uVar33;
  uVar33 = uVar33 << 0x20 | uVar33;
  *(ulonglong *)(lVar3 + -0xc0) = uVar42 ^ uVar33;
  uVar14 = uVar57 & 0xff;
  DAT_028a07d8 = uVar57 * 0x1000000 | uVar14 | uVar14 << 0x10 | uVar14 << 8;
  uVar34 = CONCAT44(DAT_028a07d8,DAT_028a07d8);
  *(ulonglong *)(lVar3 - (uVar15 ^ 0xcc65d509)) =
       (*(ulonglong *)(lVar3 + -0x10) ^ uVar32) + uVar42 ^ uVar34;
  uVar35 = CONCAT44(iVar10,iVar10);
  *(ulonglong *)(lVar3 - (uVar20 ^ 0x27e5ad7d)) =
       (ulonglong)(*(uint *)(lVar3 + -0xc0) ^ uVar39) << 0x3a ^ uVar35;
  uVar18 = (ulonglong)DAT_028a06b8 & 0xff;
  uVar48 = DAT_028a06b8 << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  DAT_028a06b8 = (uint)uVar48;
  uVar53 = (*(ulonglong *)(lVar3 + -0xc0) ^ uVar33) >> (((byte)uVar11 ^ 0xfb) & 0x3f);
  uVar48 = uVar48 << 0x20 | uVar48;
  *(ulonglong *)(lVar3 + -0xb8) = uVar53 ^ uVar48;
  *(ulonglong *)(lVar3 + -0xa0) =
       CONCAT44(uVar4,uVar1) ^ 0x5e4aee334f23061c ^ (uVar47 << 0x20 | uVar38);
  uVar18 = (ulonglong)DAT_028a06d0 & 0xff;
  uVar61 = DAT_028a06d0 << 0x18 | uVar18 | uVar18 << 0x10 | uVar18 << 8;
  DAT_028a06d0 = (uint)uVar61;
  uVar61 = uVar61 << 0x20 | uVar61;
  uVar18 = *(ulonglong *)(lVar3 - (uVar47 ^ 0x8ca02f62)) ^ uVar35 | uVar53;
  *(ulonglong *)(lVar3 + -0xf0) = uVar18 ^ uVar61;
  uVar39 = DAT_028a0720;
  uVar14 = (DAT_028a0608 ^ DAT_028a0720) & 0xff;
  uVar14 = (DAT_028a0608 ^ DAT_028a0720) << 0x18 | uVar14 | uVar14 << 0x10 | uVar14 << 8;
  uVar42 = uVar18 ^ uVar34 ^ *(ulonglong *)(lVar3 + -0xa8);
  uVar18 = CONCAT44(uVar14,uVar14);
  DAT_028a07d4 = uVar14;
  *(ulonglong *)(lVar3 + -0x30) = uVar42 ^ uVar18;
  uVar43 = CONCAT44(uVar39,uVar39);
  *(ulonglong *)(lVar3 + -0x10) =
       (*(ulonglong *)(lVar3 + -200) ^ uVar31) + (*(ulonglong *)(lVar3 + -0x70) ^ uVar51) ^ uVar43;
  *(ulonglong *)(lVar3 + -0xc0) = uVar42 + uVar53;
  uVar42 = (ulonglong)DAT_028a0608 & 0xff;
  uVar49 = DAT_028a0608 << 0x18 | uVar42 | uVar42 << 0x10 | uVar42 << 8;
  bVar2 = (byte)uVar1;
  uVar53 = uVar49 << 0x20 | uVar49;
  DAT_028a0608 = (uint)uVar49;
  *(ulonglong *)(lVar3 + -0xa0) =
       (*(ulonglong *)(lVar3 - (uVar19 ^ 0x18017ac8)) ^ uVar31) << ((bVar2 ^ 0xeb) & 0x3f) ^ uVar53;
  bVar22 = (byte)uVar26;
  *(ulonglong *)(lVar3 - (uVar16 ^ 0xafa7cedc)) =
       (CONCAT44(uVar1,uVar13) ^ 0xbce465ab18fbe29f) >> ((bVar22 ^ 0x5f) & 0x3f);
  puVar36 = (ulonglong *)(lVar3 - (ulonglong)(uVar11 ^ 0x27e5ad35));
  uVar42 = (*puVar36 ^ uVar31) >> (((byte)uVar11 ^ 0xd7) & 0x3f);
  *(ulonglong *)(lVar3 + -0xf0) = uVar42 ^ uVar43;
  uVar42 = (*(ulonglong *)(lVar3 + -0xa0) ^ uVar53 | uVar42) ^ uVar43;
  *(ulonglong *)(lVar3 + -0x70) = uVar42;
  *(ulonglong *)(lVar3 + -0xb8) = *(ulonglong *)(lVar3 + -0x10) ^ uVar31 ^ uVar42;
  *(ulonglong *)(lVar3 + -0xc0) = *(ulonglong *)(lVar3 + -0x30) ^ uVar18 | 0x16ceb2452fff4c22;
  uVar26 = uVar25 & 0xff;
  DAT_028a05f8 = uVar25 * 0x1000000 | uVar26 | uVar26 << 0x10 | uVar26 << 8;
  uVar37 = CONCAT44(DAT_028a05f8,DAT_028a05f8);
  *(ulonglong *)(lVar3 + -0x80) =
       (uVar42 ^ *(ulonglong *)(lVar3 + -0x10)) + (*(ulonglong *)(lVar3 + -0xa8) ^ uVar34) ^ uVar37;
  uVar42 = (ulonglong)DAT_028a07bc & 0xff;
  uVar44 = DAT_028a07bc << 0x18 | uVar42 | uVar42 << 0x10 | uVar42 << 8;
  DAT_028a07bc = (uint)uVar44;
  uVar44 = uVar44 << 0x20 | uVar44;
  puVar52 = (ulonglong *)(lVar3 - (ulonglong)(uVar12 ^ 0x54c80bd1));
  *puVar52 = (*(ulonglong *)(lVar3 - (uVar16 ^ 0xafa7cee4)) ^ uVar31) << ((bVar2 ^ 0xdd) & 0x3f) ^
             uVar44;
  bVar54 = (byte)uVar9;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar11 ^ 0x27e5ad5d)) =
       (*(ulonglong *)(lVar3 + -0xb8) ^ uVar31) >> ((bVar54 ^ 0x20) & 0x3f) ^ uVar51;
  uVar42 = (ulonglong)DAT_028a06c4 & 0xff;
  uVar45 = DAT_028a06c4 << 0x18 | uVar42 | uVar42 << 0x10 | uVar42 << 8;
  uVar42 = *(ulonglong *)(lVar3 + -0xa0) ^ uVar51 | *(ulonglong *)(lVar3 + -200) ^ uVar44;
  DAT_028a06c4 = (uint)uVar45;
  uVar45 = uVar45 << 0x20 | uVar45;
  *(ulonglong *)(lVar3 + -0x70) = uVar42 ^ uVar45;
  *(ulonglong *)(lVar3 - (uVar47 ^ 0x8ca02f22)) =
       (CONCAT44(uVar5,uVar4) ^ 0x3a344a41f52be408) >> ((byte)uVar42 & 0x3f);
  *(ulonglong *)(lVar3 + -0xa8) =
       uVar37 ^ uVar45 ^ uVar31 ^ *(ulonglong *)(lVar3 + -0x70) ^ *(ulonglong *)(lVar3 + -0x80);
  uVar26 = uVar24 & 0xff;
  DAT_028a06d4 = uVar24 * 0x1000000 | uVar26 | uVar26 << 0x10 | uVar26 << 8;
  uVar50 = CONCAT44(DAT_028a06d4,DAT_028a06d4);
  *(ulonglong *)(lVar3 + -0xf0) =
       (*(ulonglong *)(lVar3 + -0x10) ^ uVar43) + (*(ulonglong *)(lVar3 + -0x30) ^ uVar18) ^ uVar50;
  *(ulonglong *)(lVar3 + -0xb8) =
       (ulonglong)((uint)*(ulonglong *)(lVar3 + -0x30) ^ uVar14) << 0x20 ^ uVar59;
  *puVar52 = CONCAT44(uVar1,uVar13) ^ 0x793d75fadd64f1d7 ^ (uVar38 << 0x20 | uVar46);
  *(ulonglong *)(lVar3 - (uVar46 ^ 0x2245ad3c)) =
       ((ulonglong)uVar14 << 0x20 ^ *(ulonglong *)(lVar3 + -0x30)) >> 0x20 ^ uVar45;
  *(ulonglong *)(lVar3 + -0x70) =
       (*(ulonglong *)(lVar3 + -0xa0) ^ uVar51) << ((bVar54 ^ 0x10) & 0x3f);
  uVar42 = *(ulonglong *)(lVar3 - (uVar16 ^ 0xafa7ce9c)) ^ uVar45 |
           *(ulonglong *)(lVar3 + -0xb8) ^ uVar59;
  *(ulonglong *)(lVar3 + -0x10) = uVar42 ^ uVar61;
  uVar42 = uVar35 ^ uVar50 ^ *(ulonglong *)(lVar3 + -0xf0) ^ uVar42;
  *(ulonglong *)(lVar3 + -200) = uVar42;
  *(ulonglong *)(lVar3 + -0x30) = *(ulonglong *)(lVar3 - (uVar15 ^ 0xcc65d5d1)) | 0xb7c57b30567f7ea4
  ;
  *(ulonglong *)(lVar3 - (uVar47 ^ 0x8ca02f42)) =
       (uVar42 ^ uVar35) + (uVar41 ^ *(ulonglong *)(lVar3 - (ulonglong)(uVar1 ^ 0x2245ad85))) ^
       uVar37;
  uVar42 = (*(ulonglong *)(lVar3 + -0x88) ^ uVar43) + (*(ulonglong *)(lVar3 + -0x80) ^ uVar37);
  *(ulonglong *)(lVar3 + -0xb8) = uVar42 ^ uVar55;
  *(ulonglong *)(lVar3 - (uVar47 ^ 0x8ca02f22)) =
       (*(ulonglong *)(lVar3 - (uVar58 ^ 0xffffff5f)) ^ uVar37) + uVar42 ^ uVar18;
  uVar42 = *(ulonglong *)(lVar3 + -0xa0) ^ uVar37;
  uVar46 = uVar42 << 0xe;
  *(ulonglong *)(lVar3 + -0x10) = uVar46 ^ uVar53;
  uVar42 = uVar42 >> ((bVar22 ^ 0x4a) & 0x3f);
  *(ulonglong *)(lVar3 + -0x70) = uVar42 ^ uVar59;
  *(ulonglong *)(lVar3 - (uVar20 ^ 0x27e5adcd)) = (uVar46 | uVar42) ^ uVar48;
  *(ulonglong *)(lVar3 - (uVar19 ^ 0x18017a78)) =
       uVar45 ^ uVar48 ^ uVar18 ^ *(ulonglong *)(lVar3 - ((ulonglong)uVar11 ^ 0x27e5adcd)) ^
       *(ulonglong *)(lVar3 + -0xc0);
  *puVar52 = (CONCAT44(uVar6,uVar5) ^ 0xcc65d5a1fffffff3) +
             (CONCAT44(DAT_028a0614,DAT_028a0614) ^ *(ulonglong *)(lVar3 + -0x28)) ^ uVar35;
  uVar39 = DAT_028a058c ^ (uint)*(ulonglong *)(lVar3 + -200);
  uVar26 = uVar39 & 0xff;
  DAT_028a058c = uVar39 << 0x18 | uVar26 | uVar26 << 0x10 | uVar26 << 8;
  uVar42 = CONCAT44(DAT_028a058c,DAT_028a058c);
  *(ulonglong *)(lVar3 + -0x80) =
       (*(ulonglong *)(lVar3 + -0xa8) ^ uVar31) + (*(ulonglong *)(lVar3 + -200) ^ uVar35) ^ uVar42;
  *(ulonglong *)(lVar3 - (uVar28 ^ 0x886235c0)) =
       (CONCAT44(uVar4,uVar1) ^ 0x74c8d9972ba0e1d0) + (*(ulonglong *)(lVar3 + -0x70) ^ uVar59);
  *(ulonglong *)(lVar3 + -0xa0) =
       (CONCAT44(DAT_028a073c,DAT_028a073c) ^
       *(ulonglong *)(lVar3 - (ulonglong)(uVar11 ^ 0x27e5ad6d))) +
       (CONCAT44(uVar6,uVar5) ^ 0xbe2214eb894e40a8) ^ uVar33;
  uVar46 = (*(ulonglong *)(lVar3 - (ulonglong)(uVar11 ^ 0x27e5ad0d)) ^ uVar50) +
           (*(ulonglong *)(lVar3 - (uVar28 ^ 0x886235d8)) ^ uVar33);
  *(ulonglong *)(lVar3 + -0x10) = uVar46 ^ uVar40;
  uVar47 = *(ulonglong *)(lVar3 + -0x80) ^ uVar42;
  *(ulonglong *)(lVar3 + -0x30) = uVar46 + uVar47 ^ uVar50;
  *(ulonglong *)(lVar3 + -200) = uVar47 << (((byte)uVar6 ^ 0xb1) & 0x3f) ^ uVar45;
  uVar1 = *(uint *)(&DAT_023d0570 + lVar30);
  uVar47 = uVar47 >> (((byte)uVar7 ^ 0xcc) & 0x3f);
  *(ulonglong *)(lVar3 + -0xa8) = uVar47 ^ uVar42;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar23 ^ 0xffffff8f)) =
       (*(ulonglong *)(lVar3 - (uVar19 ^ 0x18017ac8)) ^ uVar45 | uVar47) ^ uVar56;
  uVar46 = CONCAT44(DAT_028a0734,DAT_028a0734);
  *(ulonglong *)(lVar3 + -0xb8) = **(ulonglong **)(lVar3 + -0xb0) ^ uVar46;
  puVar52 = (ulonglong *)(lVar3 - (uVar16 ^ 0xafa7ce2c));
  uVar47 = uVar56 ^ uVar50 ^ *puVar52 ^ *(ulonglong *)(lVar3 + -0x30);
  *(ulonglong *)(lVar3 + -0xf0) = uVar47 ^ uVar44;
  *(ulonglong *)(lVar3 - (uVar19 ^ 0x18017a10)) =
       (*(ulonglong *)(lVar3 + -0xc0) ^ uVar18) + uVar47 ^ uVar17;
  uVar19 = *(ulonglong *)(lVar3 + -0xf0) ^ uVar44;
  uVar41 = uVar19 << (((byte)uVar6 ^ 0x95) & 0x3f);
  uVar26 = *(uint *)(&DAT_023d0568 + lVar30);
  *(ulonglong *)(lVar3 + -0x80) = uVar41 ^ uVar61;
  bVar22 = (byte)uVar13;
  uVar19 = uVar19 >> ((bVar22 ^ 0x50) & 0x3f);
  *(ulonglong *)(lVar3 + -0xa8) = uVar19 ^ uVar51;
  uVar41 = uVar51 ^ *(ulonglong *)(lVar3 - (uVar20 ^ 0x27e5ad55)) | uVar41;
  *(ulonglong *)(lVar3 + -200) = uVar41 ^ uVar43;
  uVar58 = uVar17 ^ *(ulonglong *)(lVar3 + -0x10);
  uVar41 = uVar41 ^ uVar58;
  *(ulonglong *)(lVar3 + -0xb8) = uVar41 ^ uVar33;
  uVar47 = *(ulonglong *)(lVar3 + -0x78) ^ uVar45;
  uVar51 = (uVar50 ^ *(ulonglong *)(lVar3 + -0x30)) + uVar47;
  *(ulonglong *)(lVar3 + -0x70) = uVar51 ^ uVar34;
  *(ulonglong *)(lVar3 + -0xc0) = uVar19 ^ uVar17 ^ *(ulonglong *)(lVar3 - (uVar28 ^ 0x88623568));
  uVar20 = uVar47 << (((byte)uVar8 ^ 0xdb) & 0x3f);
  uVar47 = uVar47 >> ((bVar21 ^ 0xf8) & 0x3f);
  *(ulonglong *)(lVar3 + -0xf0) = uVar40 ^ uVar20;
  uVar20 = uVar20 | uVar47;
  *(ulonglong *)(lVar3 + -0x80) = uVar47 ^ uVar55;
  *(ulonglong *)(lVar3 + -200) = uVar20 ^ uVar48;
  *(ulonglong *)(lVar3 + -0x30) = uVar29 ^ uVar51 ^ uVar20;
  *(ulonglong *)(lVar3 + -0xa8) =
       (CONCAT44(uVar12,uVar9) ^ 0x120c0c90d98a10d0) + (uVar48 ^ *puVar36);
  uVar58 = uVar58 + (uVar51 ^ uVar20);
  *(ulonglong *)(lVar3 + -0xc0) = uVar58 ^ uVar32;
  *(ulonglong *)(lVar3 + -0x78) = CONCAT44(uVar6,uVar6) ^ 0x607c519604b5a45f | uVar20;
  uVar40 = (*(ulonglong *)(lVar3 - (uVar28 ^ 0x88623548)) ^ uVar29) <<
           (((byte)DAT_028a053c ^ 0x6f) & 0x3f);
  *(ulonglong *)(lVar3 + -0xf0) = uVar31 ^ uVar40;
  uVar20 = (uVar51 ^ uVar20) >> ((bVar2 ^ 0xd4) & 0x3f);
  *(ulonglong *)(lVar3 + -0x80) = uVar61 ^ uVar20;
  uVar6 = DAT_028a0520;
  uVar20 = uVar20 | uVar40;
  uVar40 = (ulonglong)DAT_028a0520;
  uVar39 = DAT_028a0520 & uVar13;
  DAT_028a053c = uVar39;
  *(ulonglong *)(lVar3 + -0xa8) = uVar37 ^ uVar20;
  *(ulonglong *)(lVar3 + -0x10) = uVar58 ^ uVar53 ^ uVar20;
  *(ulonglong *)(lVar3 + -200) =
       (uVar34 ^ *(ulonglong *)(lVar3 - ((ulonglong)uVar39 ^ 0xada50234))) + uVar41 ^ uVar42;
  *(ulonglong *)(lVar3 + -0x78) = CONCAT44(uVar13,uVar6) ^ 0x3bbcba558c4c785c;
  *(ulonglong *)(lVar3 + -0x30) = uVar41 << ((bVar22 ^ 0x74) & 0x3f) ^ uVar45;
  uVar20 = uVar40 ^ 0xadfd22fd;
  *(ulonglong *)(lVar3 + -0xf0) =
       (*(ulonglong *)(lVar3 - uVar20) ^ uVar33) >> (((byte)uVar39 ^ 0x5c) & 0x3f) ^ uVar35;
  *(ulonglong *)(lVar3 - (uVar16 ^ 0xafa7cedc)) =
       (CONCAT44(uVar39,uVar6) ^ 0x2809e8899c2ff3e4) +
       (*(ulonglong *)(lVar3 - (ulonglong)(uVar39 ^ 0xada502b4)) ^ uVar35);
  *(ulonglong *)(lVar3 + -0xa8) =
       (uVar35 ^ *(ulonglong *)(lVar3 + -0xf0) | uVar45 ^ *(ulonglong *)(lVar3 + -0x30)) ^ uVar55;
  *puVar52 = CONCAT44(uVar13,uVar39) ^ 0x615e754190cb5f4c ^ CONCAT44(uVar39,uVar6);
  *(ulonglong *)(lVar3 + -0x78) =
       uVar55 ^ uVar43 ^ uVar42 ^ *(ulonglong *)(lVar3 + -0xa8) ^ *(ulonglong *)(lVar3 + -200);
  *(ulonglong *)(lVar3 - uVar20) = uVar46 ^ **(ulonglong **)(lVar3 + -0xf8);
  uVar43 = uVar43 ^ *(ulonglong *)(lVar3 + -0x78);
  *(ulonglong *)(lVar3 + -0x80) = (uVar32 ^ *(ulonglong *)(lVar3 + -0xc0)) + uVar43 ^ uVar53;
  *(ulonglong *)(lVar3 + -0x30) = uVar43 << ((bVar22 ^ 0x59) & 0x3f) ^ uVar59;
  *(ulonglong *)(lVar3 + -0xf0) = uVar43 >> ((bVar21 ^ 0xc4) & 0x3f) ^ uVar29;
  *(ulonglong *)(lVar3 - (uVar16 ^ 0xafa7ce2c)) =
       (CONCAT44(uVar6,uVar12) ^ 0x151c34ebb1ff11ef) +
       ((uVar15 << 0x20) + uVar38 ^ 0xf3511d69316b7ac6);
  uVar38 = *(ulonglong *)(lVar3 + -0xf0) ^ uVar29 |
           uVar59 ^ *(ulonglong *)(lVar3 - (uVar40 ^ 0xadfd2275));
  *(ulonglong *)(lVar3 + -0xa8) = uVar29 ^ uVar38;
  *(ulonglong *)(lVar3 - ((ulonglong)DAT_028a0510 ^ 0x3c31f2e)) =
       uVar33 ^ uVar53 ^ *(ulonglong *)(lVar3 - (ulonglong)(uVar39 ^ 0xada502c4)) ^ uVar38;
  *(ulonglong *)(lVar3 + -0xc0) =
       (uVar42 ^ *(ulonglong *)(lVar3 + -200)) + (uVar53 ^ *(ulonglong *)(lVar3 + -0x10)) ^ uVar18;
  *(ulonglong *)(lVar3 + -0x70) =
       (ulonglong)((uint)*(ulonglong *)(lVar3 + -0x10) ^ (uint)uVar49) << 0x25 ^ uVar44;
  *(uint *)(&DAT_028a0820 + (longlong)(int)(uVar1 ^ uVar7) * 4) = uVar26 ^ uVar4;
  return;
}



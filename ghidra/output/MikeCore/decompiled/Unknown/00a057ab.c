// Function: FUN_00a057ab
// Address: 00a057ab
// Size: 4761 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a057ab(void)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong *puVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  uint uVar46;
  uint uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  bool bVar61;
  
  uVar15 = DAT_028a05d0;
  uVar14 = DAT_028a0544;
  uVar13 = _DAT_028a0540;
  uVar12 = DAT_028a053c;
  uVar11 = DAT_028a0538;
  uVar7 = DAT_028a0514;
  uVar6 = DAT_028a0510;
  uVar47 = DAT_028a0504;
  uVar4 = DAT_028a04e8;
  uVar26 = DAT_028a04dc;
  lVar3 = DAT_028a04d0;
  uVar53 = (ulonglong)DAT_028a0538;
  uVar43 = (ulonglong)_DAT_028a0540;
  uVar46 = _DAT_028a0540 ^ DAT_028a0538;
  uVar41 = (ulonglong)DAT_028a053c;
  uVar21 = (ulonglong)DAT_028a0510;
  uVar35 = DAT_028a053c - DAT_028a0510;
  uVar16 = DAT_028a0544 & 7;
  if (uVar16 < 4) {
    if (uVar16 < 2) {
      uVar24 = DAT_028a0544;
      if (uVar16 != 0) {
        uVar24 = DAT_028a0528;
      }
      goto LAB_00a0586f;
    }
    bVar61 = uVar16 == 2;
    puVar17 = &DAT_028a04fc;
    puVar27 = &DAT_028a0530;
LAB_00a05869:
    if (bVar61) {
      puVar27 = puVar17;
    }
  }
  else {
    if (5 < uVar16) {
      bVar61 = uVar16 == 6;
      puVar17 = &DAT_028a0500;
      puVar27 = &DAT_028a051c;
      goto LAB_00a05869;
    }
    puVar27 = &DAT_028a0504;
    if (uVar16 != 5) {
      puVar27 = &DAT_028a0520;
    }
  }
  uVar24 = *puVar27;
LAB_00a0586f:
  uVar28 = (ulonglong)DAT_028a0514;
  uVar1 = DAT_028a0514 << 0x10 | DAT_028a0514 >> 0x10;
  uVar16 = DAT_028a0670 >> 0x18;
  uVar25 = DAT_028a05d0 >> 0x18;
  uVar49 = (ulonglong)DAT_028a0504;
  uVar50 = CONCAT44(DAT_028a04e8,DAT_028a04e8);
  uVar44 = (CONCAT44(DAT_028a0784,DAT_028a0784) ^
           *(ulonglong *)(DAT_028a04d0 - (uVar49 ^ 0xce5caf6f))) +
           (*(ulonglong *)(DAT_028a04d0 - ((ulonglong)DAT_028a0544 ^ 0x90634f48)) ^ uVar50);
  uVar56 = (ulonglong)DAT_028a04dc & 0xff;
  uVar37 = DAT_028a04dc << 0x18 | uVar56 | uVar56 << 0x10 | uVar56 << 8;
  DAT_028a04dc = (uint)uVar37;
  uVar37 = uVar37 << 0x20 | uVar37;
  lVar51 = (longlong)DAT_028a0828;
  DAT_028a0508 = uVar1;
  DAT_028a050c = uVar24;
  DAT_028a0524 = uVar35;
  DAT_028a0534 = uVar46;
  *(ulonglong *)(DAT_028a04d0 + -0x70) = uVar44 ^ uVar37;
  uVar36 = uVar26 - DAT_028a07d0 & 0xff;
  DAT_028a07c4 = (uVar26 - DAT_028a07d0) * 0x1000000 | uVar36 | uVar36 << 0x10 | uVar36 << 8;
  uVar59 = CONCAT44(DAT_028a07c4,DAT_028a07c4);
  uVar38 = *(ulonglong *)(lVar3 + -0x10) ^ uVar50;
  uVar45 = uVar44 + uVar38 ^ uVar59;
  *(ulonglong *)(lVar3 + -0xc0) = uVar45;
  uVar9 = DAT_028a0520;
  uVar52 = (ulonglong)DAT_028a0520;
  *(ulonglong *)(lVar3 + -0xf0) =
       (*(ulonglong *)(lVar3 - (uVar52 ^ 0xadfd2235)) ^ uVar37) << (*(byte *)(lVar3 + -0x80) & 0x3f)
  ;
  uVar10 = DAT_028a0528;
  uVar36 = DAT_028a04fc;
  uVar44 = (ulonglong)DAT_028a07d0 & 0xff;
  uVar44 = DAT_028a07d0 << 0x18 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar29 = (ulonglong)DAT_028a0528;
  uVar30 = uVar29 ^ 0x5a088e5;
  uVar57 = uVar38 << ((byte)uVar30 & 0x3f);
  DAT_028a07d0 = (uint)uVar44;
  uVar56 = uVar44 | uVar44 << 0x20;
  uVar18 = (ulonglong)DAT_028a04fc;
  *(ulonglong *)(lVar3 + -0xa0) = uVar57 ^ uVar56;
  uVar8 = DAT_028a051c;
  uVar5 = DAT_028a0500;
  uVar31 = (ulonglong)DAT_028a05d0 & 0xff;
  uVar58 = DAT_028a05d0 << 0x18 | uVar31 | uVar31 << 0x10 | uVar31 << 8;
  DAT_028a05d0 = (uint)uVar58;
  uVar31 = (ulonglong)DAT_028a051c;
  bVar22 = (byte)DAT_028a051c;
  uVar38 = uVar38 >> ((bVar22 ^ 0x6c) & 0x3f);
  uVar58 = uVar58 << 0x20 | uVar58;
  uVar32 = uVar57 | uVar38;
  uVar60 = (ulonglong)DAT_028a0500;
  *(ulonglong *)(lVar3 + -0x78) = uVar38 ^ uVar58;
  DAT_028a06a8 = uVar25 << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar38 = (ulonglong)DAT_028a06a8;
  DAT_028a0660 = uVar16 << 0x18 | uVar16 | uVar16 << 0x10 | uVar16 << 8;
  uVar19 = CONCAT44(DAT_028a06a8,DAT_028a06a8);
  uVar20 = CONCAT44(DAT_028a0660,DAT_028a0660);
  *(ulonglong *)(lVar3 + -200) = uVar32 ^ uVar19;
  *(ulonglong *)(lVar3 + -0x80) = uVar59 ^ uVar20 ^ uVar32 ^ uVar45;
  uVar16 = DAT_028a0530;
  uVar45 = (ulonglong)DAT_028a0530;
  uVar32 = (ulonglong)DAT_028a0670 & 0xff;
  uVar54 = DAT_028a0670 << 0x18 | uVar32 | uVar32 << 0x10 | uVar32 << 8;
  DAT_028a0670 = (uint)uVar54;
  uVar54 = uVar54 << 0x20 | uVar54;
  *(ulonglong *)(lVar3 + -0x70) =
       (*(ulonglong *)(lVar3 - (uVar45 ^ 0x5202dd3a)) ^ uVar20) +
       (CONCAT44(DAT_028a04d8,DAT_028a04d8) ^ *(ulonglong *)(lVar3 + -0xb8)) ^ uVar54;
  bVar2 = (byte)(uVar7 >> 0x10);
  *(ulonglong *)(lVar3 - (uVar60 ^ 0xffffff0f)) = uVar57 << ((bVar2 ^ 0x41) & 0x3f);
  uVar26 = DAT_028a04f8;
  uVar57 = (ulonglong)DAT_028a04f8;
  *(ulonglong *)(lVar3 + -0x10) =
       (*(ulonglong *)(lVar3 - (uVar21 ^ 0x3c31f16)) ^ uVar20) << (((byte)uVar13 ^ 0x4c) & 0x3f) ^
       uVar54;
  *(ulonglong *)(lVar3 + -0x78) =
       (CONCAT44(uVar35,uVar12) ^ 0xb9d85f106ad6be71) << (((byte)uVar36 ^ 0xce) & 0x3f);
  uVar25 = (DAT_028a054c ^ DAT_028a06a0) & 0xff;
  uVar25 = (DAT_028a054c ^ DAT_028a06a0) << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar39 = (*(ulonglong *)(lVar3 + -0x80) ^ uVar20) >> (((byte)uVar46 ^ 0xc) & 0x3f);
  uVar33 = CONCAT44(uVar25,uVar25);
  *(ulonglong *)(lVar3 + -200) = uVar39 ^ uVar33;
  uVar32 = (ulonglong)DAT_028a054c & 0xff;
  uVar32 = DAT_028a054c << 0x18 | uVar32 | uVar32 << 0x10 | uVar32 << 8;
  uVar39 = *(ulonglong *)(lVar3 - (uVar53 ^ 0x90634f68)) ^ uVar54 | uVar39;
  DAT_028a054c = (uint)uVar32;
  uVar32 = uVar32 << 0x20 | uVar32;
  *(ulonglong *)(lVar3 + -0xb8) = uVar39 ^ uVar32;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar24 ^ 0x90634fd8)) =
       uVar39 ^ uVar58 ^ uVar54 ^ *(ulonglong *)(lVar3 + -0x70);
  *(undefined8 *)(lVar3 + -0xf0) = 0x538de16d707497a7;
  uVar40 = CONCAT44(DAT_028a068c,DAT_028a068c);
  uVar39 = (ulonglong)DAT_028a06a0 & 0xff;
  uVar55 = DAT_028a06a0 << 0x18 | uVar39 | uVar39 << 0x10 | uVar39 << 8;
  uVar39 = uVar55 << 0x20 | uVar55;
  DAT_028a06a0 = (uint)uVar55;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar35 ^ 0x8ca02f9a)) =
       (*(ulonglong *)(lVar3 - (ulonglong)(uVar24 ^ 0x90634fb8)) ^ uVar59) +
       (*(ulonglong *)(lVar3 + -0xa8) ^ uVar40) ^ uVar39;
  uVar40 = uVar40 ^ *(ulonglong *)(lVar3 + -0xa8);
  uVar48 = uVar40 << (((byte)uVar46 ^ 0x39) & 0x3f);
  bVar23 = (byte)uVar9;
  *(ulonglong *)(lVar3 + -0x80) = uVar48 ^ uVar39;
  *(ulonglong *)(lVar3 - (uVar41 ^ 0x90634fb0)) =
       (uVar40 >> ((bVar23 ^ 0x42) & 0x3f) | uVar48) ^ uVar56;
  uVar41 = uVar56 ^ uVar39 ^ *(ulonglong *)(lVar3 + -200) ^ *(ulonglong *)(lVar3 + -0x78);
  *(ulonglong *)(lVar3 + -0xb8) = uVar41 ^ uVar19;
  *(ulonglong *)(lVar3 + -0xf0) = (*(ulonglong *)(lVar3 + -0x70) ^ uVar54) + uVar41 ^ uVar37;
  *(ulonglong *)(lVar3 - (uVar45 ^ 0x5202dd7a)) = uVar41 << (((byte)uVar24 ^ 0x6f) & 0x3f) ^ uVar20;
  uVar41 = (uVar38 << 0x20 ^ *(ulonglong *)(lVar3 + -0xb8)) >> 0x29;
  *(ulonglong *)(lVar3 + -0xa8) = uVar41 ^ uVar33;
  *(ulonglong *)(lVar3 + -0x10) = (*(ulonglong *)(lVar3 + -0xc0) ^ uVar20 | uVar41) ^ uVar32;
  *(ulonglong *)(lVar3 + -0x80) =
       (CONCAT44(uVar11,uVar7) ^ 0x658247a54476332) >>
       (((byte)(uVar15 >> 0x18) ^ (byte)*(undefined4 *)(lVar3 - (uVar21 ^ 0x3c31f2e))) & 0x3f);
  *(ulonglong *)(lVar3 - (uVar28 ^ 0x357888aa)) =
       uVar32 ^ uVar39 ^ uVar37 ^ *(ulonglong *)(lVar3 - (uVar53 ^ 0x90634f68)) ^
       *(ulonglong *)(lVar3 - (uVar43 ^ 0x88623588));
  *(ulonglong *)(lVar3 + -0x70) = 0xb9d8a04f0ebd7f10 >> (((byte)uVar14 ^ 0x67) & 0x3f);
  uVar41 = *(ulonglong *)(lVar3 + -0xa0) ^ uVar58;
  *(ulonglong *)(lVar3 + -0xc0) = (*(ulonglong *)(lVar3 + -0x78) ^ uVar39) + uVar41 ^ uVar50;
  uVar21 = uVar41 << (((byte)uVar12 ^ 0x50) & 0x3f);
  *(ulonglong *)(lVar3 + -0xa8) = uVar21 ^ uVar59;
  *(ulonglong *)(lVar3 + -0xb8) = (*(ulonglong *)(lVar3 + -200) ^ uVar39) << ((byte)uVar6 & 0x3f);
  *(ulonglong *)(lVar3 + -0x80) = uVar41 >> ((bVar2 ^ 0x60) & 0x3f) ^ uVar20;
  puVar42 = (ulonglong *)(lVar3 - (ulonglong)(uVar35 ^ 0x8ca02f62));
  *(ulonglong *)(lVar3 - (uVar52 ^ 0xadfd2255)) = (*puVar42 ^ uVar20 | uVar21) ^ uVar33;
  *(ulonglong *)(lVar3 - (uVar31 ^ 0xafa7ce2c)) =
       *(ulonglong *)(lVar3 - (uVar18 ^ 0x2245aded)) ^ uVar33 |
       CONCAT44(uVar26,uVar26) ^ 0x2739a3e7efa1ac19;
  uVar21 = uVar50 ^ uVar56 ^ uVar33 ^ *(ulonglong *)(lVar3 - (ulonglong)(uVar6 ^ 0x3c31f86)) ^
           *(ulonglong *)(lVar3 + -0xc0);
  *(ulonglong *)(lVar3 + -0x78) = uVar21;
  uVar41 = *(ulonglong *)(lVar3 + -0xf0) ^ uVar37;
  *(ulonglong *)(lVar3 + -0xb8) = CONCAT44(uVar5,uVar14) ^ 0x89de8acf8dfcfa13 | uVar41;
  *(ulonglong *)(lVar3 + -0xa0) =
       (*(ulonglong *)(lVar3 - (ulonglong)(uVar11 ^ 0x90634f00)) ^ uVar56) + uVar41 ^ uVar59;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar12 ^ 0x90634fd0)) = (uVar21 ^ uVar56) << 5 ^ uVar54;
  uVar21 = (uVar44 << 0x20 ^ *(ulonglong *)(lVar3 + -0x78)) >> 0x3b;
  *(ulonglong *)(lVar3 + -0x80) = uVar21 ^ uVar37;
  *(ulonglong *)(lVar3 - (uVar45 ^ 0x5202ddca)) =
       (*(ulonglong *)(lVar3 + -0xa8) ^ uVar54 | uVar21) ^ uVar58;
  *(ulonglong *)(lVar3 - uVar30) =
       uVar58 ^ uVar32 ^ uVar59 ^ *(ulonglong *)(lVar3 - (uVar18 ^ 0x2245ad8d)) ^
       *(ulonglong *)(lVar3 + -0xa0);
  *(ulonglong *)(lVar3 + -0xb8) = 0xa0a4cc4cddc617c >> (((byte)uVar7 ^ 0x75) & 0x3f);
  *(ulonglong *)(lVar3 - (ulonglong)(uVar6 ^ 0x3c31f66)) =
       (*(ulonglong *)(lVar3 + -0xc0) ^ uVar50) +
       (*(ulonglong *)(lVar3 - (uVar43 ^ 0x886235b0)) ^ uVar39) ^ uVar58;
  *(ulonglong *)(lVar3 - (uVar60 ^ 0xffffff57)) =
       (ulonglong)(*(uint *)(lVar3 + -200) ^ (uint)uVar55) << 0x25 ^ uVar50;
  *(ulonglong *)(lVar3 + -0x80) =
       (*(ulonglong *)(lVar3 - (uVar18 ^ 0x2245ad35)) ^ uVar39) >> (((byte)uVar35 ^ 0xf9) & 0x3f) ^
       uVar19;
  *(ulonglong *)(lVar3 - (uVar31 ^ 0xafa7ce2c)) =
       (*(ulonglong *)(lVar3 + -0x78) ^ uVar56) <<
       (((byte)*(undefined4 *)(lVar3 - (ulonglong)(uVar24 ^ 0x90634fd0)) ^ (byte)uVar4) & 0x3f);
  uVar21 = *(ulonglong *)(lVar3 + -0x80) ^ uVar19 |
           *(ulonglong *)(lVar3 - (ulonglong)(uVar1 ^ 0x886235d0)) ^ uVar50;
  *(ulonglong *)(lVar3 + -0xb8) = uVar21 ^ uVar33;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar13 ^ 0x886235b8)) =
       uVar58 ^ uVar32 ^ *(ulonglong *)(lVar3 - (ulonglong)(uVar14 ^ 0x90634f88)) ^ uVar21;
  *(ulonglong *)(lVar3 + -200) =
       CONCAT44(uVar26,uVar1) ^ 0x6a5bdf0ed40c43d6 | *(ulonglong *)(lVar3 + -0xb8) ^ uVar33;
  *(ulonglong *)(lVar3 + -0x78) =
       (*(ulonglong *)(lVar3 + -0xc0) ^ uVar32) + (*(ulonglong *)(lVar3 + -0x30) ^ uVar50) ^ uVar37;
  *(ulonglong *)(lVar3 - (uVar18 ^ 0x2245ad8d)) =
       (CONCAT44(DAT_028a073c,DAT_028a073c) ^ *(ulonglong *)(lVar3 - (uVar29 ^ 0x5a08865))) +
       (*(ulonglong *)(lVar3 + -0xa0) ^ uVar59) ^ uVar20;
  uVar41 = *(ulonglong *)(lVar3 + -0x78) ^ uVar37;
  uVar21 = (*(ulonglong *)(lVar3 - (uVar45 ^ 0x5202ddca)) ^ uVar20) + uVar41;
  *(ulonglong *)(lVar3 + -0xa8) = uVar21 ^ uVar56;
  uVar44 = *(ulonglong *)(lVar3 + -0xb8) ^ uVar33;
  uVar53 = CONCAT44(uVar6,uVar6) ^ 0x72fccf878a7d6bb4 | uVar44;
  *(ulonglong *)(lVar3 + -0x80) = uVar53;
  uVar43 = (*(ulonglong *)(lVar3 - (uVar52 ^ 0xadfd223d)) ^ uVar37) <<
           (((byte)uVar35 ^ 0xfb) & 0x3f);
  *(ulonglong *)(lVar3 + -200) = uVar43 ^ uVar33;
  *(ulonglong *)(lVar3 + -0x30) = uVar41 >> (((byte)uVar11 ^ 0x5f) & 0x3f) ^ uVar59;
  *(ulonglong *)(lVar3 + -0xc0) = (CONCAT44(uVar14,uVar24) ^ 0xf24bcf5b6c51b301) + uVar53;
  *(ulonglong *)(lVar3 + -0x70) =
       uVar21 ^ uVar50 ^ (*(ulonglong *)(lVar3 - (uVar45 ^ 0x5202dd8a)) ^ uVar59 | uVar43);
  uVar21 = (CONCAT44(uVar47,uVar10) ^ 0xce5cafa705a088fc) +
           (CONCAT44(DAT_028a0720,DAT_028a0720) ^ *(ulonglong *)(lVar3 + -0x88)) ^ uVar20;
  *(ulonglong *)(lVar3 + -0x78) = uVar21;
  uVar47 = (uint)uVar21 ^ DAT_028a05dc;
  *(ulonglong *)(lVar3 - (uVar28 ^ 0x357888e2)) =
       (CONCAT44(uVar11,uVar13) ^ 0x780777c8320ea8e2) << ((byte)uVar44 & 0x3f);
  uVar26 = uVar47 & 0xff;
  DAT_028a05dc = uVar47 << 0x18 | uVar26 | uVar26 << 0x10 | uVar26 << 8;
  uVar43 = CONCAT44(DAT_028a05dc,DAT_028a05dc);
  *(ulonglong *)(lVar3 + -0xc0) =
       (uVar32 ^ *(ulonglong *)(lVar3 + -0x10)) + (*(ulonglong *)(lVar3 + -0x78) ^ uVar20) ^ uVar43;
  uVar21 = (CONCAT44(DAT_028a0548,DAT_028a0548) ^ *(ulonglong *)(lVar3 + -0xe0)) +
           (CONCAT44(uVar36,uVar24) ^ 0x50026cb7e6d2f02f);
  *(ulonglong *)(lVar3 + -0xa0) = uVar21 ^ uVar43;
  *(ulonglong *)(lVar3 + -0xb8) = (*(ulonglong *)(lVar3 + -0xf0) ^ uVar58) + uVar21 ^ uVar43;
  *(ulonglong *)(lVar3 - (uVar57 ^ 0x27e5ad7d)) =
       CONCAT44(uVar36,uVar16) ^ uVar59 ^ *(ulonglong *)(lVar3 - (ulonglong)(uVar1 ^ 0x88623548)) ^
       0x4ebd234b00c29487;
  uVar26 = DAT_028a0518;
  uVar44 = (ulonglong)DAT_028a0518;
  uVar47 = DAT_028a0518 * uVar7;
  puVar34 = (ulonglong *)(lVar3 - (ulonglong)(uVar47 ^ 0xf44b835e));
  uVar53 = (*puVar34 ^ uVar43) + (*(ulonglong *)(lVar3 - (uVar28 ^ 0x357888da)) ^ uVar43);
  DAT_028a052c = uVar47;
  *(ulonglong *)(lVar3 + -0x10) = uVar53 ^ uVar43;
  uVar21 = (*(ulonglong *)(lVar3 + -0xc0) ^ uVar43) << (((byte)uVar26 ^ 0xde) & 0x3f);
  *(ulonglong *)(lVar3 + -0x78) = uVar21 ^ uVar43;
  uVar41 = (*puVar34 ^ uVar43) >> 0x1f;
  *(ulonglong *)(lVar3 + -0xf0) = uVar41 ^ uVar54;
  uVar41 = uVar41 | uVar21;
  *(ulonglong *)(lVar3 + -0x30) = uVar41 ^ uVar39;
  *(ulonglong *)(lVar3 + -0x80) = uVar53 ^ uVar19 ^ uVar41;
  *(ulonglong *)(lVar3 + -0xb8) =
       CONCAT44(uVar26,uVar26) ^ 0xd97ef7a6ca045c57 ^ CONCAT44(uVar7,uVar47);
  *(ulonglong *)(lVar3 + -0xc0) =
       (*(ulonglong *)(lVar3 - (ulonglong)(uVar47 ^ 0xf44b8336)) ^ uVar56) + (uVar41 ^ uVar53) ^
       uVar58;
  uVar41 = (uVar41 ^ uVar53) << (((byte)uVar7 ^ 0x4c) & 0x3f);
  uVar21 = (*(ulonglong *)(lVar3 + -200) ^ uVar33) + 0x9ae8f964169c3692;
  *(ulonglong *)(lVar3 + -0xf0) = uVar21;
  *(ulonglong *)(lVar3 + -0x78) = uVar33 ^ uVar41;
  *(ulonglong *)(lVar3 + -0x30) = CONCAT44(uVar7,uVar8) ^ 0x13e229c24d794913 ^ uVar21;
  uVar21 = (*(ulonglong *)(lVar3 - (uVar28 ^ 0x357888e2)) ^ uVar19) >>
           (((byte)uVar47 ^ 0x8c) & 0x3f);
  *(ulonglong *)(lVar3 + -0xb8) = uVar21 ^ uVar56;
  *(ulonglong *)(lVar3 - (uVar57 ^ 0x27e5ad55)) = (uVar41 | uVar21) ^ uVar43;
  *(ulonglong *)(lVar3 + -200) =
       CONCAT44(uVar47,uVar8) ^ 0xf61d0648249c28fd |
       *(ulonglong *)(lVar3 - (uVar28 ^ 0x357888a2)) ^ uVar58;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar35 ^ 0x8ca02f12)) =
       uVar58 ^ uVar54 ^ uVar43 ^ *(ulonglong *)(lVar3 + -0xa8) ^ *(ulonglong *)(lVar3 + -0xc0);
  *(ulonglong *)(lVar3 + -0x30) =
       (*(ulonglong *)(lVar3 + -0x10) ^ uVar43) +
       (*(ulonglong *)(lVar3 - (uVar60 ^ 0xffffff8f)) ^ uVar50) ^ uVar59;
  *(ulonglong *)(lVar3 + -0x80) = *(ulonglong *)(lVar3 + -200) >> (((byte)uVar26 ^ 0xd9) & 0x3f);
  uVar26 = *(uint *)(&DAT_023d0570 + lVar51);
  *(ulonglong *)(lVar3 - (uVar28 ^ 0x3578881a)) =
       (*(ulonglong *)(lVar3 + -0x70) ^ uVar50) << (((byte)uVar6 ^ 0x9a) & 0x3f) ^ uVar56;
  *(ulonglong *)(lVar3 + -0xa8) =
       (*(ulonglong *)(lVar3 + -0x70) ^ uVar50) >> (((byte)uVar10 ^ 0xc1) & 0x3f) ^ uVar20;
  *(ulonglong *)(lVar3 - (uVar60 ^ 0xffffffef)) =
       *(ulonglong *)(lVar3 + -0xb8) ^ uVar56 ^ 0xfdb96ad45266909;
  uVar47 = *(uint *)(&DAT_023d0568 + lVar51);
  *(ulonglong *)(lVar3 - (ulonglong)(uVar1 ^ 0x886235b0)) =
       (uVar20 ^ *(ulonglong *)(lVar3 + -0xa8) | uVar56 ^ *(ulonglong *)(lVar3 + -0x78)) ^ uVar19;
  *(ulonglong *)(lVar3 - (ulonglong)(uVar46 ^ 0x18017a80)) =
       uVar19 ^ uVar59 ^ uVar43 ^ *(ulonglong *)(lVar3 - (uVar45 ^ 0x5202dd72)) ^
       *(ulonglong *)(lVar3 + -0x30);
  uVar21 = (uVar58 ^ *(ulonglong *)(lVar3 + -0xc0)) +
           (*(ulonglong *)(lVar3 - (ulonglong)(uVar13 ^ 0x886235f8)) ^ uVar43);
  *(ulonglong *)(lVar3 + -0x70) = CONCAT44(DAT_028a0758,DAT_028a0758) ^ uVar21;
  uVar41 = (*(ulonglong *)(lVar3 + -0x80) ^ uVar43) << ((bVar23 ^ 0x7f) & 0x3f);
  *(ulonglong *)(lVar3 + -0xb8) = uVar41 ^ uVar59;
  uVar43 = (uVar43 ^ *puVar42) >> (((byte)uVar14 ^ 0x7e) & 0x3f);
  *(ulonglong *)(lVar3 + -0x10) = uVar43 ^ uVar37;
  *(ulonglong *)(lVar3 + -0x78) = (uVar43 | uVar41) ^ uVar50;
  *(ulonglong *)(lVar3 + -0xa8) =
       uVar39 ^ uVar50 ^ uVar21 ^ *(ulonglong *)(lVar3 - (uVar49 ^ 0xce5cafdf));
  *(ulonglong *)(lVar3 - (ulonglong)(uVar6 ^ 0x3c31f5e)) =
       (*(ulonglong *)(lVar3 + -0xf0) ^ uVar54) +
       (uVar59 ^ *(ulonglong *)(lVar3 - (ulonglong)(uVar35 ^ 0x8ca02fd2))) ^ uVar37;
  *puVar34 = (*(ulonglong *)(lVar3 + -0xf0) ^ uVar54) << ((bVar23 ^ 0x53) & 0x3f) ^ uVar54;
  *(ulonglong *)(lVar3 - (uVar44 ^ 0xf7fee57f)) =
       CONCAT44(DAT_028a0798,DAT_028a0798) ^
       (uVar54 ^ *(ulonglong *)(lVar3 + -0xf0)) >> ((bVar22 ^ 0x76) & 0x3f);
  *(uint *)(&DAT_028a0820 + (longlong)(int)(uVar26 ^ uVar7) * 4) = uVar47 ^ uVar1;
  return;
}



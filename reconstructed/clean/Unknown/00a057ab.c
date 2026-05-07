// Function: FUN_00a057ab
// Address: 00a057ab
// Size: 4761 bytes
// Class: Unknown

void FUN_00a057ab(void)

{
  uint uVar1;
  byte bVar2;
  int64_t lVar3;
  uint32_t uVar4;
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
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t *puVar34;
  uint uVar35;
  uint uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t *puVar42;
  uint64_t uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint uVar46;
  uint uVar47;
  uint64_t uVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  int64_t lVar51;
  uint64_t uVar52;
  uint64_t uVar53;
  uint64_t uVar54;
  uint64_t uVar55;
  uint64_t uVar56;
  uint64_t uVar57;
  uint64_t uVar58;
  uint64_t uVar59;
  uint64_t uVar60;
  bool bVar61;
  
  uVar15 = g_028a05d0;
  uVar14 = g_028a0544;
  uVar13 = g_028a0540;
  uVar12 = g_028a053c;
  uVar11 = g_028a0538;
  uVar7 = g_028a0514;
  uVar6 = g_028a0510;
  uVar47 = g_028a0504;
  uVar4 = g_028a04e8;
  uVar26 = g_028a04dc;
  lVar3 = g_028a04d0;
  uVar53 = (uint64_t)g_028a0538;
  uVar43 = (uint64_t)g_028a0540;
  uVar46 = g_028a0540 ^ g_028a0538;
  uVar41 = (uint64_t)g_028a053c;
  uVar21 = (uint64_t)g_028a0510;
  uVar35 = g_028a053c - g_028a0510;
  uVar16 = g_028a0544 & 7;
  if (uVar16 < 4) {
    if (uVar16 < 2) {
      uVar24 = g_028a0544;
      if (uVar16 != 0) {
        uVar24 = g_028a0528;
      }
      goto LAB_00a0586f;
    }
    bVar61 = uVar16 == 2;
    puVar17 = &g_028a04fc;
    puVar27 = &g_028a0530;
LAB_00a05869:
    if (bVar61) {
      puVar27 = puVar17;
    }
  }
  else {
    if (5 < uVar16) {
      bVar61 = uVar16 == 6;
      puVar17 = &g_028a0500;
      puVar27 = &g_028a051c;
      goto LAB_00a05869;
    }
    puVar27 = &g_028a0504;
    if (uVar16 != 5) {
      puVar27 = &g_028a0520;
    }
  }
  uVar24 = *puVar27;
LAB_00a0586f:
  uVar28 = (uint64_t)g_028a0514;
  uVar1 = g_028a0514 << 0x10 | g_028a0514 >> 0x10;
  uVar16 = g_028a0670 >> 0x18;
  uVar25 = g_028a05d0 >> 0x18;
  uVar49 = (uint64_t)g_028a0504;
  uVar50 = CONCAT44(g_028a04e8,g_028a04e8);
  uVar44 = (CONCAT44(g_028a0784,g_028a0784) ^
           *(uint64_t *)(g_028a04d0 - (uVar49 ^ 0xce5caf6f))) +
           (*(uint64_t *)(g_028a04d0 - ((uint64_t)g_028a0544 ^ 0x90634f48)) ^ uVar50);
  uVar56 = (uint64_t)g_028a04dc & 0xff;
  uVar37 = g_028a04dc << 0x18 | uVar56 | uVar56 << 0x10 | uVar56 << 8;
  g_028a04dc = (uint)uVar37;
  uVar37 = uVar37 << 0x20 | uVar37;
  lVar51 = (int64_t)g_028a0828;
  g_028a0508 = uVar1;
  g_028a050c = uVar24;
  g_028a0524 = uVar35;
  g_028a0534 = uVar46;
  *(uint64_t *)(g_028a04d0 + -0x70) = uVar44 ^ uVar37;
  uVar36 = uVar26 - g_028a07d0 & 0xff;
  g_028a07c4 = (uVar26 - g_028a07d0) * 0x1000000 | uVar36 | uVar36 << 0x10 | uVar36 << 8;
  uVar59 = CONCAT44(g_028a07c4,g_028a07c4);
  uVar38 = *(uint64_t *)(lVar3 + -0x10) ^ uVar50;
  uVar45 = uVar44 + uVar38 ^ uVar59;
  *(uint64_t *)(lVar3 + -0xc0) = uVar45;
  uVar9 = g_028a0520;
  uVar52 = (uint64_t)g_028a0520;
  *(uint64_t *)(lVar3 + -0xf0) =
       (*(uint64_t *)(lVar3 - (uVar52 ^ 0xadfd2235)) ^ uVar37) << (*(byte *)(lVar3 + -0x80) & 0x3f)
  ;
  uVar10 = g_028a0528;
  uVar36 = g_028a04fc;
  uVar44 = (uint64_t)g_028a07d0 & 0xff;
  uVar44 = g_028a07d0 << 0x18 | uVar44 | uVar44 << 0x10 | uVar44 << 8;
  uVar29 = (uint64_t)g_028a0528;
  uVar30 = uVar29 ^ 0x5a088e5;
  uVar57 = uVar38 << ((byte)uVar30 & 0x3f);
  g_028a07d0 = (uint)uVar44;
  uVar56 = uVar44 | uVar44 << 0x20;
  uVar18 = (uint64_t)g_028a04fc;
  *(uint64_t *)(lVar3 + -0xa0) = uVar57 ^ uVar56;
  uVar8 = g_028a051c;
  uVar5 = g_028a0500;
  uVar31 = (uint64_t)g_028a05d0 & 0xff;
  uVar58 = g_028a05d0 << 0x18 | uVar31 | uVar31 << 0x10 | uVar31 << 8;
  g_028a05d0 = (uint)uVar58;
  uVar31 = (uint64_t)g_028a051c;
  bVar22 = (byte)g_028a051c;
  uVar38 = uVar38 >> ((bVar22 ^ 0x6c) & 0x3f);
  uVar58 = uVar58 << 0x20 | uVar58;
  uVar32 = uVar57 | uVar38;
  uVar60 = (uint64_t)g_028a0500;
  *(uint64_t *)(lVar3 + -0x78) = uVar38 ^ uVar58;
  g_028a06a8 = uVar25 << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar38 = (uint64_t)g_028a06a8;
  g_028a0660 = uVar16 << 0x18 | uVar16 | uVar16 << 0x10 | uVar16 << 8;
  uVar19 = CONCAT44(g_028a06a8,g_028a06a8);
  uVar20 = CONCAT44(g_028a0660,g_028a0660);
  *(uint64_t *)(lVar3 + -200) = uVar32 ^ uVar19;
  *(uint64_t *)(lVar3 + -0x80) = uVar59 ^ uVar20 ^ uVar32 ^ uVar45;
  uVar16 = g_028a0530;
  uVar45 = (uint64_t)g_028a0530;
  uVar32 = (uint64_t)g_028a0670 & 0xff;
  uVar54 = g_028a0670 << 0x18 | uVar32 | uVar32 << 0x10 | uVar32 << 8;
  g_028a0670 = (uint)uVar54;
  uVar54 = uVar54 << 0x20 | uVar54;
  *(uint64_t *)(lVar3 + -0x70) =
       (*(uint64_t *)(lVar3 - (uVar45 ^ 0x5202dd3a)) ^ uVar20) +
       (CONCAT44(g_028a04d8,g_028a04d8) ^ *(uint64_t *)(lVar3 + -0xb8)) ^ uVar54;
  bVar2 = (byte)(uVar7 >> 0x10);
  *(uint64_t *)(lVar3 - (uVar60 ^ 0xffffff0f)) = uVar57 << ((bVar2 ^ 0x41) & 0x3f);
  uVar26 = g_028a04f8;
  uVar57 = (uint64_t)g_028a04f8;
  *(uint64_t *)(lVar3 + -0x10) =
       (*(uint64_t *)(lVar3 - (uVar21 ^ 0x3c31f16)) ^ uVar20) << (((byte)uVar13 ^ 0x4c) & 0x3f) ^
       uVar54;
  *(uint64_t *)(lVar3 + -0x78) =
       (CONCAT44(uVar35,uVar12) ^ 0xb9d85f106ad6be71) << (((byte)uVar36 ^ 0xce) & 0x3f);
  uVar25 = (g_028a054c ^ g_028a06a0) & 0xff;
  uVar25 = (g_028a054c ^ g_028a06a0) << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar39 = (*(uint64_t *)(lVar3 + -0x80) ^ uVar20) >> (((byte)uVar46 ^ 0xc) & 0x3f);
  uVar33 = CONCAT44(uVar25,uVar25);
  *(uint64_t *)(lVar3 + -200) = uVar39 ^ uVar33;
  uVar32 = (uint64_t)g_028a054c & 0xff;
  uVar32 = g_028a054c << 0x18 | uVar32 | uVar32 << 0x10 | uVar32 << 8;
  uVar39 = *(uint64_t *)(lVar3 - (uVar53 ^ 0x90634f68)) ^ uVar54 | uVar39;
  g_028a054c = (uint)uVar32;
  uVar32 = uVar32 << 0x20 | uVar32;
  *(uint64_t *)(lVar3 + -0xb8) = uVar39 ^ uVar32;
  *(uint64_t *)(lVar3 - (uint64_t)(uVar24 ^ 0x90634fd8)) =
       uVar39 ^ uVar58 ^ uVar54 ^ *(uint64_t *)(lVar3 + -0x70);
  *(void*)(lVar3 + -0xf0) = 0x538de16d707497a7;
  uVar40 = CONCAT44(g_028a068c,g_028a068c);
  uVar39 = (uint64_t)g_028a06a0 & 0xff;
  uVar55 = g_028a06a0 << 0x18 | uVar39 | uVar39 << 0x10 | uVar39 << 8;
  uVar39 = uVar55 << 0x20 | uVar55;
  g_028a06a0 = (uint)uVar55;
  *(uint64_t *)(lVar3 - (uint64_t)(uVar35 ^ 0x8ca02f9a)) =
       (*(uint64_t *)(lVar3 - (uint64_t)(uVar24 ^ 0x90634fb8)) ^ uVar59) +
       (*(uint64_t *)(lVar3 + -0xa8) ^ uVar40) ^ uVar39;
  uVar40 = uVar40 ^ *(uint64_t *)(lVar3 + -0xa8);
  uVar48 = uVar40 << (((byte)uVar46 ^ 0x39) & 0x3f);
  bVar23 = (byte)uVar9;
  *(uint64_t *)(lVar3 + -0x80) = uVar48 ^ uVar39;
  *(uint64_t *)(lVar3 - (uVar41 ^ 0x90634fb0)) =
       (uVar40 >> ((bVar23 ^ 0x42) & 0x3f) | uVar48) ^ uVar56;
  uVar41 = uVar56 ^ uVar39 ^ *(uint64_t *)(lVar3 + -200) ^ *(uint64_t *)(lVar3 + -0x78);
  *(uint64_t *)(lVar3 + -0xb8) = uVar41 ^ uVar19;
  *(uint64_t *)(lVar3 + -0xf0) = (*(uint64_t *)(lVar3 + -0x70) ^ uVar54) + uVar41 ^ uVar37;
  *(uint64_t *)(lVar3 - (uVar45 ^ 0x5202dd7a)) = uVar41 << (((byte)uVar24 ^ 0x6f) & 0x3f) ^ uVar20;
  uVar41 = (uVar38 << 0x20 ^ *(uint64_t *)(lVar3 + -0xb8)) >> 0x29;
  *(uint64_t *)(lVar3 + -0xa8) = uVar41 ^ uVar33;
  *(uint64_t *)(lVar3 + -0x10) = (*(uint64_t *)(lVar3 + -0xc0) ^ uVar20 | uVar41) ^ uVar32;
  *(uint64_t *)(lVar3 + -0x80) =
       (CONCAT44(uVar11,uVar7) ^ 0x658247a54476332) >>
       (((byte)(uVar15 >> 0x18) ^ (byte)*(void*)(lVar3 - (uVar21 ^ 0x3c31f2e))) & 0x3f);
  *(uint64_t *)(lVar3 - (uVar28 ^ 0x357888aa)) =
       uVar32 ^ uVar39 ^ uVar37 ^ *(uint64_t *)(lVar3 - (uVar53 ^ 0x90634f68)) ^
       *(uint64_t *)(lVar3 - (uVar43 ^ 0x88623588));
  *(uint64_t *)(lVar3 + -0x70) = 0xb9d8a04f0ebd7f10 >> (((byte)uVar14 ^ 0x67) & 0x3f);
  uVar41 = *(uint64_t *)(lVar3 + -0xa0) ^ uVar58;
  *(uint64_t *)(lVar3 + -0xc0) = (*(uint64_t *)(lVar3 + -0x78) ^ uVar39) + uVar41 ^ uVar50;
  uVar21 = uVar41 << (((byte)uVar12 ^ 0x50) & 0x3f);
  *(uint64_t *)(lVar3 + -0xa8) = uVar21 ^ uVar59;
  *(uint64_t *)(lVar3 + -0xb8) = (*(uint64_t *)(lVar3 + -200) ^ uVar39) << ((byte)uVar6 & 0x3f);
  *(uint64_t *)(lVar3 + -0x80) = uVar41 >> ((bVar2 ^ 0x60) & 0x3f) ^ uVar20;
  puVar42 = (uint64_t *)(lVar3 - (uint64_t)(uVar35 ^ 0x8ca02f62));
  *(uint64_t *)(lVar3 - (uVar52 ^ 0xadfd2255)) = (*puVar42 ^ uVar20 | uVar21) ^ uVar33;
  *(uint64_t *)(lVar3 - (uVar31 ^ 0xafa7ce2c)) =
       *(uint64_t *)(lVar3 - (uVar18 ^ 0x2245aded)) ^ uVar33 |
       CONCAT44(uVar26,uVar26) ^ 0x2739a3e7efa1ac19;
  uVar21 = uVar50 ^ uVar56 ^ uVar33 ^ *(uint64_t *)(lVar3 - (uint64_t)(uVar6 ^ 0x3c31f86)) ^
           *(uint64_t *)(lVar3 + -0xc0);
  *(uint64_t *)(lVar3 + -0x78) = uVar21;
  uVar41 = *(uint64_t *)(lVar3 + -0xf0) ^ uVar37;
  *(uint64_t *)(lVar3 + -0xb8) = CONCAT44(uVar5,uVar14) ^ 0x89de8acf8dfcfa13 | uVar41;
  *(uint64_t *)(lVar3 + -0xa0) =
       (*(uint64_t *)(lVar3 - (uint64_t)(uVar11 ^ 0x90634f00)) ^ uVar56) + uVar41 ^ uVar59;
  *(uint64_t *)(lVar3 - (uint64_t)(uVar12 ^ 0x90634fd0)) = (uVar21 ^ uVar56) << 5 ^ uVar54;
  uVar21 = (uVar44 << 0x20 ^ *(uint64_t *)(lVar3 + -0x78)) >> 0x3b;
  *(uint64_t *)(lVar3 + -0x80) = uVar21 ^ uVar37;
  *(uint64_t *)(lVar3 - (uVar45 ^ 0x5202ddca)) =
       (*(uint64_t *)(lVar3 + -0xa8) ^ uVar54 | uVar21) ^ uVar58;
  *(uint64_t *)(lVar3 - uVar30) =
       uVar58 ^ uVar32 ^ uVar59 ^ *(uint64_t *)(lVar3 - (uVar18 ^ 0x2245ad8d)) ^
       *(uint64_t *)(lVar3 + -0xa0);
  *(uint64_t *)(lVar3 + -0xb8) = 0xa0a4cc4cddc617c >> (((byte)uVar7 ^ 0x75) & 0x3f);
  *(uint64_t *)(lVar3 - (uint64_t)(uVar6 ^ 0x3c31f66)) =
       (*(uint64_t *)(lVar3 + -0xc0) ^ uVar50) +
       (*(uint64_t *)(lVar3 - (uVar43 ^ 0x886235b0)) ^ uVar39) ^ uVar58;
  *(uint64_t *)(lVar3 - (uVar60 ^ 0xffffff57)) =
       (uint64_t)(*(uint *)(lVar3 + -200) ^ (uint)uVar55) << 0x25 ^ uVar50;
  *(uint64_t *)(lVar3 + -0x80) =
       (*(uint64_t *)(lVar3 - (uVar18 ^ 0x2245ad35)) ^ uVar39) >> (((byte)uVar35 ^ 0xf9) & 0x3f) ^
       uVar19;
  *(uint64_t *)(lVar3 - (uVar31 ^ 0xafa7ce2c)) =
       (*(uint64_t *)(lVar3 + -0x78) ^ uVar56) <<
       (((byte)*(void*)(lVar3 - (uint64_t)(uVar24 ^ 0x90634fd0)) ^ (byte)uVar4) & 0x3f);
  uVar21 = *(uint64_t *)(lVar3 + -0x80) ^ uVar19 |
           *(uint64_t *)(lVar3 - (uint64_t)(uVar1 ^ 0x886235d0)) ^ uVar50;
  *(uint64_t *)(lVar3 + -0xb8) = uVar21 ^ uVar33;
  *(uint64_t *)(lVar3 - (uint64_t)(uVar13 ^ 0x886235b8)) =
       uVar58 ^ uVar32 ^ *(uint64_t *)(lVar3 - (uint64_t)(uVar14 ^ 0x90634f88)) ^ uVar21;
  *(uint64_t *)(lVar3 + -200) =
       CONCAT44(uVar26,uVar1) ^ 0x6a5bdf0ed40c43d6 | *(uint64_t *)(lVar3 + -0xb8) ^ uVar33;
  *(uint64_t *)(lVar3 + -0x78) =
       (*(uint64_t *)(lVar3 + -0xc0) ^ uVar32) + (*(uint64_t *)(lVar3 + -0x30) ^ uVar50) ^ uVar37;
  *(uint64_t *)(lVar3 - (uVar18 ^ 0x2245ad8d)) =
       (CONCAT44(g_028a073c,g_028a073c) ^ *(uint64_t *)(lVar3 - (uVar29 ^ 0x5a08865))) +
       (*(uint64_t *)(lVar3 + -0xa0) ^ uVar59) ^ uVar20;
  uVar41 = *(uint64_t *)(lVar3 + -0x78) ^ uVar37;
  uVar21 = (*(uint64_t *)(lVar3 - (uVar45 ^ 0x5202ddca)) ^ uVar20) + uVar41;
  *(uint64_t *)(lVar3 + -0xa8) = uVar21 ^ uVar56;
  uVar44 = *(uint64_t *)(lVar3 + -0xb8) ^ uVar33;
  uVar53 = CONCAT44(uVar6,uVar6) ^ 0x72fccf878a7d6bb4 | uVar44;
  *(uint64_t *)(lVar3 + -0x80) = uVar53;
  uVar43 = (*(uint64_t *)(lVar3 - (uVar52 ^ 0xadfd223d)) ^ uVar37) <<
           (((byte)uVar35 ^ 0xfb) & 0x3f);
  *(uint64_t *)(lVar3 + -200) = uVar43 ^ uVar33;
  *(uint64_t *)(lVar3 + -0x30) = uVar41 >> (((byte)uVar11 ^ 0x5f) & 0x3f) ^ uVar59;
  *(uint64_t *)(lVar3 + -0xc0) = (CONCAT44(uVar14,uVar24) ^ 0xf24bcf5b6c51b301) + uVar53;
  *(uint64_t *)(lVar3 + -0x70) =
       uVar21 ^ uVar50 ^ (*(uint64_t *)(lVar3 - (uVar45 ^ 0x5202dd8a)) ^ uVar59 | uVar43);
  uVar21 = (CONCAT44(uVar47,uVar10) ^ 0xce5cafa705a088fc) +
           (CONCAT44(g_028a0720,g_028a0720) ^ *(uint64_t *)(lVar3 + -0x88)) ^ uVar20;
  *(uint64_t *)(lVar3 + -0x78) = uVar21;
  uVar47 = (uint)uVar21 ^ g_028a05dc;
  *(uint64_t *)(lVar3 - (uVar28 ^ 0x357888e2)) =
       (CONCAT44(uVar11,uVar13) ^ 0x780777c8320ea8e2) << ((byte)uVar44 & 0x3f);
  uVar26 = uVar47 & 0xff;
  g_028a05dc = uVar47 << 0x18 | uVar26 | uVar26 << 0x10 | uVar26 << 8;
  uVar43 = CONCAT44(g_028a05dc,g_028a05dc);
  *(uint64_t *)(lVar3 + -0xc0) =
       (uVar32 ^ *(uint64_t *)(lVar3 + -0x10)) + (*(uint64_t *)(lVar3 + -0x78) ^ uVar20) ^ uVar43;
  uVar21 = (CONCAT44(g_028a0548,g_028a0548) ^ *(uint64_t *)(lVar3 + -0xe0)) +
           (CONCAT44(uVar36,uVar24) ^ 0x50026cb7e6d2f02f);
  *(uint64_t *)(lVar3 + -0xa0) = uVar21 ^ uVar43;
  *(uint64_t *)(lVar3 + -0xb8) = (*(uint64_t *)(lVar3 + -0xf0) ^ uVar58) + uVar21 ^ uVar43;
  *(uint64_t *)(lVar3 - (uVar57 ^ 0x27e5ad7d)) =
       CONCAT44(uVar36,uVar16) ^ uVar59 ^ *(uint64_t *)(lVar3 - (uint64_t)(uVar1 ^ 0x88623548)) ^
       0x4ebd234b00c29487;
  uVar26 = g_028a0518;
  uVar44 = (uint64_t)g_028a0518;
  uVar47 = g_028a0518 * uVar7;
  puVar34 = (uint64_t *)(lVar3 - (uint64_t)(uVar47 ^ 0xf44b835e));
  uVar53 = (*puVar34 ^ uVar43) + (*(uint64_t *)(lVar3 - (uVar28 ^ 0x357888da)) ^ uVar43);
  g_028a052c = uVar47;
  *(uint64_t *)(lVar3 + -0x10) = uVar53 ^ uVar43;
  uVar21 = (*(uint64_t *)(lVar3 + -0xc0) ^ uVar43) << (((byte)uVar26 ^ 0xde) & 0x3f);
  *(uint64_t *)(lVar3 + -0x78) = uVar21 ^ uVar43;
  uVar41 = (*puVar34 ^ uVar43) >> 0x1f;
  *(uint64_t *)(lVar3 + -0xf0) = uVar41 ^ uVar54;
  uVar41 = uVar41 | uVar21;
  *(uint64_t *)(lVar3 + -0x30) = uVar41 ^ uVar39;
  *(uint64_t *)(lVar3 + -0x80) = uVar53 ^ uVar19 ^ uVar41;
  *(uint64_t *)(lVar3 + -0xb8) =
       CONCAT44(uVar26,uVar26) ^ 0xd97ef7a6ca045c57 ^ CONCAT44(uVar7,uVar47);
  *(uint64_t *)(lVar3 + -0xc0) =
       (*(uint64_t *)(lVar3 - (uint64_t)(uVar47 ^ 0xf44b8336)) ^ uVar56) + (uVar41 ^ uVar53) ^
       uVar58;
  uVar41 = (uVar41 ^ uVar53) << (((byte)uVar7 ^ 0x4c) & 0x3f);
  uVar21 = (*(uint64_t *)(lVar3 + -200) ^ uVar33) + 0x9ae8f964169c3692;
  *(uint64_t *)(lVar3 + -0xf0) = uVar21;
  *(uint64_t *)(lVar3 + -0x78) = uVar33 ^ uVar41;
  *(uint64_t *)(lVar3 + -0x30) = CONCAT44(uVar7,uVar8) ^ 0x13e229c24d794913 ^ uVar21;
  uVar21 = (*(uint64_t *)(lVar3 - (uVar28 ^ 0x357888e2)) ^ uVar19) >>
           (((byte)uVar47 ^ 0x8c) & 0x3f);
  *(uint64_t *)(lVar3 + -0xb8) = uVar21 ^ uVar56;
  *(uint64_t *)(lVar3 - (uVar57 ^ 0x27e5ad55)) = (uVar41 | uVar21) ^ uVar43;
  *(uint64_t *)(lVar3 + -200) =
       CONCAT44(uVar47,uVar8) ^ 0xf61d0648249c28fd |
       *(uint64_t *)(lVar3 - (uVar28 ^ 0x357888a2)) ^ uVar58;
  *(uint64_t *)(lVar3 - (uint64_t)(uVar35 ^ 0x8ca02f12)) =
       uVar58 ^ uVar54 ^ uVar43 ^ *(uint64_t *)(lVar3 + -0xa8) ^ *(uint64_t *)(lVar3 + -0xc0);
  *(uint64_t *)(lVar3 + -0x30) =
       (*(uint64_t *)(lVar3 + -0x10) ^ uVar43) +
       (*(uint64_t *)(lVar3 - (uVar60 ^ 0xffffff8f)) ^ uVar50) ^ uVar59;
  *(uint64_t *)(lVar3 + -0x80) = *(uint64_t *)(lVar3 + -200) >> (((byte)uVar26 ^ 0xd9) & 0x3f);
  uVar26 = *(uint *)(&g_023d0570 + lVar51);
  *(uint64_t *)(lVar3 - (uVar28 ^ 0x3578881a)) =
       (*(uint64_t *)(lVar3 + -0x70) ^ uVar50) << (((byte)uVar6 ^ 0x9a) & 0x3f) ^ uVar56;
  *(uint64_t *)(lVar3 + -0xa8) =
       (*(uint64_t *)(lVar3 + -0x70) ^ uVar50) >> (((byte)uVar10 ^ 0xc1) & 0x3f) ^ uVar20;
  *(uint64_t *)(lVar3 - (uVar60 ^ 0xffffffef)) =
       *(uint64_t *)(lVar3 + -0xb8) ^ uVar56 ^ 0xfdb96ad45266909;
  uVar47 = *(uint *)(&g_023d0568 + lVar51);
  *(uint64_t *)(lVar3 - (uint64_t)(uVar1 ^ 0x886235b0)) =
       (uVar20 ^ *(uint64_t *)(lVar3 + -0xa8) | uVar56 ^ *(uint64_t *)(lVar3 + -0x78)) ^ uVar19;
  *(uint64_t *)(lVar3 - (uint64_t)(uVar46 ^ 0x18017a80)) =
       uVar19 ^ uVar59 ^ uVar43 ^ *(uint64_t *)(lVar3 - (uVar45 ^ 0x5202dd72)) ^
       *(uint64_t *)(lVar3 + -0x30);
  uVar21 = (uVar58 ^ *(uint64_t *)(lVar3 + -0xc0)) +
           (*(uint64_t *)(lVar3 - (uint64_t)(uVar13 ^ 0x886235f8)) ^ uVar43);
  *(uint64_t *)(lVar3 + -0x70) = CONCAT44(g_028a0758,g_028a0758) ^ uVar21;
  uVar41 = (*(uint64_t *)(lVar3 + -0x80) ^ uVar43) << ((bVar23 ^ 0x7f) & 0x3f);
  *(uint64_t *)(lVar3 + -0xb8) = uVar41 ^ uVar59;
  uVar43 = (uVar43 ^ *puVar42) >> (((byte)uVar14 ^ 0x7e) & 0x3f);
  *(uint64_t *)(lVar3 + -0x10) = uVar43 ^ uVar37;
  *(uint64_t *)(lVar3 + -0x78) = (uVar43 | uVar41) ^ uVar50;
  *(uint64_t *)(lVar3 + -0xa8) =
       uVar39 ^ uVar50 ^ uVar21 ^ *(uint64_t *)(lVar3 - (uVar49 ^ 0xce5cafdf));
  *(uint64_t *)(lVar3 - (uint64_t)(uVar6 ^ 0x3c31f5e)) =
       (*(uint64_t *)(lVar3 + -0xf0) ^ uVar54) +
       (uVar59 ^ *(uint64_t *)(lVar3 - (uint64_t)(uVar35 ^ 0x8ca02fd2))) ^ uVar37;
  *puVar34 = (*(uint64_t *)(lVar3 + -0xf0) ^ uVar54) << ((bVar23 ^ 0x53) & 0x3f) ^ uVar54;
  *(uint64_t *)(lVar3 - (uVar44 ^ 0xf7fee57f)) =
       CONCAT44(g_028a0798,g_028a0798) ^
       (uVar54 ^ *(uint64_t *)(lVar3 + -0xf0)) >> ((bVar22 ^ 0x76) & 0x3f);
  *(uint *)(&g_028a0820 + (int64_t)(int)(uVar26 ^ uVar7) * 4) = uVar47 ^ uVar1;
  return;
}


// Function: FUN_00a0c35b
// Address: 00a0c35b
// Size: 6179 bytes
// Class: Unknown

void FUN_00a0c35b(void)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint uVar3;
  void*puVar4;
  uint uVar5;
  int64_t *plVar6;
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
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint64_t uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  void *pvVar30;
  int64_t lVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int64_t lVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint uVar42;
  uint uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint uVar47;
  int64_t lVar48;
  uint uVar49;
  uint uVar50;
  uint64_t uVar51;
  uint64_t uVar52;
  uint uVar53;
  uint64_t uVar54;
  uint64_t uVar55;
  
  uVar26 = g_028a0734;
  uVar16 = g_028a053c;
  uVar15 = g_028a0538;
  uVar10 = g_028a0520;
  uVar9 = g_028a0514;
  uVar27 = g_028a0508;
  uVar8 = g_028a0504;
  uVar7 = g_028a04fc;
  uVar25 = g_028a04f8;
  plVar6 = g_028a04c8;
  uVar21 = (uint64_t)g_028a0514;
  uVar49 = ~g_028a0514;
  uVar52 = (uint64_t)g_028a0538;
  uVar34 = (uint64_t)g_028a0504;
  uVar42 = g_028a0504 ^ g_028a0538;
  uVar29 = (uint64_t)g_028a053c;
  uVar47 = g_028a053c >> 0x18 | (g_028a053c & 0xff0000) >> 8 | (g_028a053c & 0xff00) << 8 |
           g_028a053c << 0x18;
  uVar45 = (uint64_t)g_028a0508;
  uVar18 = g_028a0508 & 3;
  if (uVar18 < 2) {
    uVar5 = g_028a0520;
    if (uVar18 == 0) {
      uVar5 = g_028a0508;
    }
  }
  else {
    uVar5 = g_028a04fc;
    if (uVar18 == 2) {
      uVar5 = g_028a04f8;
    }
  }
  g_028a0714 = g_028a0604 << 0x10 | g_028a0604 >> 0x10;
  g_028a0584 = g_028a06cc - g_028a06e8;
  g_028a061c = g_028a0630 * g_028a0554;
  g_028a0804 = g_028a0708 ^ g_028a06f8;
  g_028a062c = g_028a0634 + g_028a0734;
  lVar48 = (int64_t)g_028a0840;
  plVar1 = g_028a04c8 + -1;
  g_028a0500 = uVar42;
  g_028a0518 = uVar49;
  g_028a0540 = uVar5;
  g_028a04c8[-1] = (int64_t)g_028a04d0;
  g_028a04d0 = plVar1;
  g_028a04c8[-0xb] = *g_028a04c8;
  uVar17 = g_028a0544;
  uVar46 = (uint64_t)g_028a0544;
  g_028a04c8[-2] =
       (CONCAT44(uVar7,uVar27) ^ 0x6ac2edd92322e257) +
       (CONCAT44(g_028a0544,uVar25) ^ 0x89325f0dd856a534);
  *(int64_t **)((int64_t)g_028a04c8 + (-8 - (uVar29 ^ 0x7eb4a102))) = g_028a04c8 + -0x24;
  g_028a04c8 = g_028a04c8 + -0x39;
  *(int64_t **)((int64_t)plVar1 - (uint64_t)(uVar47 ^ 0x1aa1b45e)) = g_028a04c8;
  plVar6[-8] = (((uint64_t)uVar49 << 0x23) + uVar29 * 8 ^ 0xbff72ffbf5a508d0) +
               *(int64_t *)((int64_t)plVar1 - (uint64_t)(uVar42 ^ 0x618b7a4a)) + 8;
  *(uint64_t *)((int64_t)plVar1 - (uVar21 ^ 0x8011a08)) =
       CONCAT44(uVar15,uVar15) ^ 0xcb805410b16bdd;
  uVar14 = g_028a0534;
  uVar29 = (uint64_t)g_028a0534;
  *(void*)((int64_t)plVar1 - (uint64_t)(uVar7 ^ 0x5ffbfb1d)) =
       *(void*)((int64_t)plVar6 + (-8 - (uVar29 ^ 0x66cda27c)));
  uVar18 = *(uint *)(&g_023d0568 + lVar48);
  uVar3 = *(uint *)(&g_023d0570 + lVar48);
  uVar19 = g_028a0734 & 0xff;
  uVar54 = (uint64_t)(g_028a0734 << 0x18 | uVar19) | (uint64_t)uVar19 << 0x10 |
           (uint64_t)uVar19 << 8;
  lVar48 = plVar6[-0x1c];
  lVar39 = plVar6[-0xb];
  g_028a0734 = (uint)uVar54;
  lVar31 = 0;
  do {
    *(byte *)(lVar48 + lVar31) = *(byte *)(lVar39 + lVar31) ^ (byte)uVar26;
    lVar31 = lVar31 + 1;
  } while (lVar31 != 0x20);
  puVar4 = (void*)*plVar6;
  uVar35 = (uint64_t)g_028a0510;
  *(void*)((int64_t)plVar6 + (-8 - (uVar35 ^ 0x78356280))) = *puVar4;
  uVar13 = g_028a0530;
  uVar20 = g_028a0528;
  uVar26 = *(uint *)(plVar6 + -2);
  uVar41 = (uint64_t)g_028a0530;
  uVar32 = (uint64_t)g_028a0528;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar29 ^ 0x66cda234))) =
       CONCAT44(g_028a0530,g_028a0528) ^
       *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar10 ^ 0xadfd224d))) ^
       0x8bb254a2ac5c92d7;
  uVar12 = g_028a052c;
  uVar11 = g_028a0524;
  uVar22 = g_028a070c ^ *(uint *)((int64_t)plVar6 + (-8 - ((uint64_t)g_028a0524 ^ 0x40c5d79)))
  ;
  uVar40 = (uint64_t)g_028a052c;
  g_028a070c = uVar22;
  plVar6[-0x14] =
       (CONCAT44(g_028a052c,uVar25) ^ 0x25e9863befa5b8dc) >> (*(byte *)(plVar6 + -2) & 0x3f);
  uVar28 = ((uint64_t)uVar47 << 0x23) + uVar32 * 8 ^ 0xd50da3f02d0447a0;
  plVar6[-8] = (int64_t)puVar4 + uVar28;
  uVar19 = g_028a050c;
  uVar44 = (uint64_t)g_028a050c;
  *(void*)((int64_t)plVar6 + (-8 - (uVar44 ^ 0xab17507c))) =
       *(void*)((int64_t)puVar4 + uVar28);
  uVar50 = g_028a0548 ^ (uint)plVar6[-2];
  uVar33 = plVar6[-2] ^ *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar5 ^ 0x88623508)));
  plVar6[-0x14] = uVar33;
  uVar37 = g_028a0628 ^ (uint)uVar33;
  g_028a0628 = uVar37;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar16 ^ 0x7eb4a122))) =
       ((uVar41 << 0x23) + uVar34 * 8 ^ 0x831a7bc123880238) + (int64_t)puVar4;
  lVar48 = *(int64_t *)plVar6[-8];
  plVar6[-0xf] = lVar48;
  uVar23 = (uint)lVar48 ^ g_028a0710;
  uVar33 = uVar33 ^ *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar52 ^ 0x45fa7a5f)));
  g_028a0710 = uVar23;
  plVar6[-2] = uVar33;
  g_028a072c = g_028a072c ^ (uint)uVar33;
  plVar6[-0x14] = (CONCAT44(uVar27,uVar17) ^ 0x3ff28de9705901ce) >> (((byte)uVar25 ^ 0x47) & 0x3f);
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar44 ^ 0xab17504c))) =
       ((uVar21 << 0x23) + uVar34 * 8 ^ 0x4008d00123880230) +
       *(int64_t *)((int64_t)plVar6 + (((uint64_t)uVar7 ^ 0x5ffbfbcd) - 8));
  uVar28 = *(uint64_t *)plVar6[-8];
  plVar6[-0xf] = uVar28;
  uVar24 = g_028a05a0 ^ *(uint *)((int64_t)plVar6 + (-8 - (uVar40 ^ 0xb2089428)));
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar32 ^ 0x5a0886d))) = uVar33 ^ uVar28;
  uVar54 = uVar54 << 0x20 | uVar54;
  uVar38 = g_028a0704 ^ (uint)plVar6[-0x14];
  uVar28 = CONCAT44(uVar16,uVar20);
  lVar39 = (uVar28 ^ 0x7eb4a11a05a088f5) * 0xa8;
  puVar2 = (uint64_t *)
           (*(int64_t *)((int64_t)plVar6 + (-8 - (uVar35 ^ 0x783562a8))) + 0x28 + lVar39);
  g_028a0704 = uVar38;
  plVar6[-8] = (int64_t)puVar2;
  *puVar2 = plVar6[-0x14] ^ uVar54;
  uVar36 = uVar24 & 0xff;
  g_028a05a0 = uVar24 << 0x18 | uVar36 | uVar36 << 0x10 | uVar36 << 8;
  lVar31 = uVar40 << 0x23;
  plVar6[-0xc] = CONCAT44(g_028a05a0,g_028a05a0) ^
                 (lVar31 + (uint64_t)uVar47 * 8 ^ 0x9044a2c0d50da3f0) +
                 *(int64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar10 ^ 0xadfd225d)));
  plVar6[-2] = CONCAT44(uVar25,uVar42) ^ 0x4741604eac82bf12 | plVar6[-0x14];
  lVar48 = **(int64_t **)((int64_t)plVar6 + (((uint64_t)uVar5 ^ 0x88623568) - 8));
  plVar6[-0xf] = lVar48;
  g_028a0728 = (uint)lVar48 ^ g_028a0728;
  *(void*)((int64_t)plVar6 + (-8 - (uVar21 ^ 0x8011a08))) = 0xb8287adacf3ca84a;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar32 ^ 0x5a088bd))) =
       ((uVar29 << 0x23) + uVar34 * 8 ^ 0x366d122123880220) + plVar6[1];
  uVar42 = g_028a0728 & 0xff;
  g_028a0728 = g_028a0728 << 0x18 | uVar42 | uVar42 << 0x10 | uVar42 << 8;
  uVar33 = CONCAT44(g_028a0728,g_028a0728);
  uVar43 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  uVar40 = (uint64_t)uVar43;
  uVar29 = **(uint64_t **)((int64_t)plVar6 + (-8 - (uVar35 ^ 0x783562c0))) ^ uVar33;
  plVar6[-2] = uVar29;
  uVar47 = (uint)uVar29 ^ g_028a0614;
  g_028a051c = uVar43;
  plVar6[-10] = ((uVar34 << 0x23) + uVar40 * 8 ^ 0x2388022a28038930) + plVar6[1];
  lVar48 = **(int64_t **)((int64_t)plVar6 + (-8 - (uVar34 ^ 0x2471000d)));
  plVar6[-0x18] = lVar48;
  uVar42 = (uint)lVar48 ^ g_028a04ec;
  g_028a04ec = uVar42;
  plVar6[-0xd] = (CONCAT44(uVar43,uVar11) ^ 0xbcf84f010ab530b3) + plVar6[-0x14];
  lVar48 = *(int64_t *)
            (*(int64_t *)((int64_t)plVar6 + ((uVar40 ^ 0x45007134) - 8)) +
            ((uVar34 << 0x23) + uVar21 * 8 ^ 0x238802284008d018));
  uVar24 = uVar47 & 0xff;
  plVar6[-0xd] = lVar48;
  uVar53 = (uint)lVar48 ^ g_028a05a8;
  g_028a0614 = uVar47 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  lVar48 = plVar6[-5];
  uVar34 = CONCAT44(g_028a0614,g_028a0614);
  uVar29 = uVar34 ^ uVar54 ^
           *(uint64_t *)
            (((uVar41 << 0x23) + uVar46 * 8 ^ 0x831a7bc4831a7bc0) + 8 +
            (CONCAT44(uVar7,uVar16) ^ 0x5ffbfbc57eb4a11a) * 0xa8 + lVar48);
  g_028a05a8 = uVar53;
  plVar6[-6] = uVar29;
  uVar47 = (uint)uVar29 ^ g_028a0624;
  plVar6[-0x1d] = (uint64_t)(uVar14 >> 5) ^ 0x402519e;
  plVar6[-10] = ((uVar45 << 0x23) + (uint64_t)uVar7 * 8 ^ 0xfb6f0c72ffdfde20) +
                (CONCAT44(uVar15,uVar49) ^ 0x45fa7a2ff7fee5ff) * 0xa8 + lVar48 + 8;
  plVar6[-0x12] =
       (CONCAT44(uVar13,uVar25) ^ 0x2969dc3965c7455f) >>
       (*(byte *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar8 ^ 0x247100a5))) & 0x3f);
  uVar25 = uVar50 & 0xff;
  g_028a0548 = uVar50 << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar55 = CONCAT44(g_028a0548,g_028a0548);
  uVar29 = uVar55 ^ uVar54 ^
           **(uint64_t **)((int64_t)plVar6 + (-8 - (uint64_t)(uVar5 ^ 0x88623530)));
  lVar48 = lVar48 + lVar39;
  uVar45 = (uVar40 << 0x23) + (uint64_t)uVar10 * 8 ^ 0x280389256fe91238;
  plVar6[-0x1d] = uVar29;
  uVar36 = (uint)uVar29 ^ g_028a0610;
  g_028a0610 = uVar36;
  plVar6[-0x20] = lVar48 + uVar45 + 8;
  uVar25 = (g_028a0720 ^ uVar26) & 0xff;
  uVar25 = (g_028a0720 ^ uVar26) << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar29 = CONCAT44(uVar25,uVar25) ^ uVar54 ^ *(uint64_t *)(uVar45 + 8 + lVar48);
  uVar46 = lVar31 + uVar35 * 8 ^ 0x9044a2c3c1ab1458;
  g_028a0720 = uVar25;
  plVar6[-0x12] = uVar29;
  uVar24 = (uint)uVar29;
  uVar26 = g_028a0758 ^ uVar24;
  g_028a0758 = uVar26;
  plVar6[-0x17] = plVar6[-5] + uVar46 + 8;
  plVar6[-0x1b] = (uint64_t)(uVar25 ^ uVar24) << 0x34;
  uVar24 = uVar47 & 0xff;
  g_028a0624 = uVar47 << 0x18 | uVar24 | uVar24 << 0x10 | uVar24 << 8;
  uVar45 = CONCAT44(g_028a0624,g_028a0624);
  pvVar30 = (void *)((int64_t)plVar6 - (uint64_t)(uVar8 ^ 0x24710095));
  *(uint64_t *)((int64_t)pvVar30 + -8) = uVar45 ^ uVar54 ^ *(uint64_t *)(plVar6[-5] + 8 + uVar46)
  ;
  lVar48 = -(uint64_t)(uVar10 ^ 0xadfd224d);
  uVar24 = g_028a073c ^ *(uint *)(plVar6 + -0x1b);
  uVar29 = CONCAT44(uVar19,uVar20) ^ 0xab17507405a088d5;
  if (uVar29 != 0) {
    g_028a073c = uVar24;
    _memset(pvVar30,(int)uVar29,(size_t)uVar46);
  }
  plVar6[-0xb] = CONCAT44(uVar14,uVar15) ^ 0xf4346b942265f7fc;
  plVar6[-0x1c] = -0x38bf4fde2a98f8;
  plVar6[-9] = *(int64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar17 ^ 0x90634f58))) + 0x28 +
               (CONCAT44(uVar27,uVar9) ^ 0x9f6de18e08011a00) * 0xa8;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar52 ^ 0x45fa7a0f))) =
       CONCAT44(uVar7,uVar10) ^ 0xd8af0071d2e0c7fe;
  uVar20 = uVar24 & 0xff;
  g_028a073c = uVar24 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar29 = CONCAT44(g_028a073c,g_028a073c);
  uVar52 = uVar54 ^ uVar29 ^ *(uint64_t *)plVar6[-9];
  plVar6[-0x13] = uVar52;
  uVar24 = (uint)uVar52 ^ g_028a05b0;
  *(uint64_t *)plVar6[-8] = CONCAT44(uVar11,uVar49) ^ 0x263c22ba01dbdc66;
  uVar46 = (uVar55 ^ plVar6[-0x1d]) + (CONCAT44(uVar17,uVar8) ^ 0x543450c237bb3e82);
  uVar20 = uVar23 & 0xff;
  g_028a0710 = uVar23 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar52 = CONCAT44(g_028a0710,g_028a0710);
  plVar6[-0x14] = uVar46 ^ uVar52;
  uVar20 = uVar53 & 0xff;
  g_028a05a8 = uVar53 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar54 = CONCAT44(g_028a05a8,g_028a05a8);
  plVar6[-0x1f] = (uVar33 ^ plVar6[-2]) + uVar46 ^ uVar54;
  uVar20 = uVar42 & 0xff;
  g_028a04ec = uVar42 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar46 = CONCAT44(g_028a04ec,g_028a04ec);
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar16 ^ 0x7eb4a112))) =
       (uVar34 ^ plVar6[-6]) + plVar6[-0xf] ^ uVar46;
  uVar20 = g_028a0730 ^ (uint)plVar6[-2];
  uVar42 = uVar20 & 0xff;
  uVar54 = uVar54 ^ plVar6[-0x1f];
  g_028a0730 = uVar20 << 0x18 | uVar42 | uVar42 << 0x10 | uVar42 << 8;
  uVar55 = CONCAT44(g_028a0730,g_028a0730);
  uVar33 = (uVar46 ^ plVar6[-2]) + uVar54;
  plVar6[-0xf] = uVar55 ^ uVar33;
  uVar42 = g_028a0500;
  uVar20 = uVar24 & 0xff;
  g_028a05b0 = uVar24 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar34 = CONCAT44(g_028a05b0,g_028a05b0);
  uVar40 = (uint64_t)g_028a0500;
  plVar6[-2] = uVar54 << (((byte)uVar19 ^ 0x7a) & 0x3f) ^ uVar34;
  uVar20 = uVar38 & 0xff;
  g_028a0704 = uVar38 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar54 = uVar54 >> (((byte)uVar49 ^ 0xcd) & 0x3f);
  plVar6[-0xe] = CONCAT44(g_028a0704,g_028a0704) ^ uVar54;
  uVar20 = uVar22 & 0xff;
  g_028a070c = uVar22 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar54 = uVar34 ^ *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar41 ^ 0x90634f70))) | uVar54;
  uVar35 = CONCAT44(g_028a070c,g_028a070c);
  plVar6[-0x1f] = uVar54 ^ uVar35;
  uVar20 = uVar37 & 0xff;
  g_028a0628 = uVar37 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar46 = CONCAT44(g_028a0628,g_028a0628);
  plVar6[-2] = (CONCAT44(uVar27,uVar8) ^ 0x65c4a69797363435) <<
               (((byte)*(void*)((int64_t)plVar6 + (-8 - (uint64_t)(uVar7 ^ 0x5ffbfb15))) ^
                (byte)uVar47) & 0x3f);
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar9 ^ 0x8011a68))) =
       uVar33 ^ uVar46 ^ uVar54;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar15 ^ 0x45fa7a27))) =
       plVar6[-0x14] ^ uVar52 | uVar28 ^ 0xebc2311e8aa12f1b;
  uVar54 = (uint64_t)g_028a0540;
  lVar31 = (uVar45 ^ plVar6[-0x1b]) + *(int64_t *)((int64_t)plVar6 + (-8 - (uVar54 ^ 0x88623518)))
  ;
  plVar6[-0x1f] = lVar31;
  uVar22 = g_028a0718 ^ (uint)lVar31;
  lVar39 = (CONCAT44(uVar25,uVar25) ^
           *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar43 ^ 0x450071ac)))) +
           plVar6[-0x18];
  plVar6[-2] = lVar39;
  uVar25 = g_028a04f8;
  uVar20 = g_028a0724 ^ (uint)lVar39;
  uVar47 = uVar20 & 0xff;
  g_028a0724 = uVar20 << 0x18 | uVar47 | uVar47 << 0x10 | uVar47 << 8;
  uVar34 = CONCAT44(g_028a0724,g_028a0724) ^ lVar39 + lVar31;
  uVar28 = (uint64_t)g_028a04f8;
  plVar6[-0x18] = uVar34;
  uVar47 = (uint)uVar34 ^ g_028a064c;
  uVar20 = uVar47 & 0xff;
  g_028a064c = uVar47 << 0x18 | uVar20 | uVar20 << 0x10 | uVar20 << 8;
  uVar33 = CONCAT44(g_028a064c,g_028a064c);
  plVar6[-0xd] = (CONCAT44(uVar49,uVar11) ^ 0x85b924b572bde25e) + lVar39 + lVar31 ^ uVar33;
  *(int64_t *)((int64_t)plVar6 + (-8 - (uVar40 ^ 0x618b7a62))) = lVar31 * 0x10000;
  uVar49 = g_028a0754 ^ *(uint *)((int64_t)plVar6 + lVar48 + -8);
  plVar6[-0x18] = (uint64_t)plVar6[-0x1f] >> 0x30;
  uVar20 = g_028a0618 ^ *(uint *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar27 ^ 0x9f6de136)));
  uVar47 = uVar49 & 0xff;
  g_028a0754 = uVar49 << 0x18 | uVar47 | uVar47 << 0x10 | uVar47 << 8;
  uVar40 = (uint64_t)plVar6[-0x1f] >> 0x30 | plVar6[-2];
  uVar34 = CONCAT44(g_028a0754,g_028a0754);
  uVar45 = uVar34 ^ uVar40;
  plVar6[-0x1f] = uVar45;
  uVar49 = (uint)uVar45 ^ g_028a0550;
  *(uint64_t *)((int64_t)plVar6 + lVar48 + -8) =
       (CONCAT44(uVar9,uVar12) ^ 0xddbb846f86eb2b3c) + uVar40;
  uVar47 = uVar49 & 0xff;
  g_028a0550 = uVar49 << 0x18 | uVar47 | uVar47 << 0x10 | uVar47 << 8;
  uVar45 = CONCAT44(g_028a0550,g_028a0550);
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar41 ^ 0x90634fc0))) =
       uVar34 ^ uVar33 ^ *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar15 ^ 0x45fa7a4f)))
       ^ *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar32 ^ 0x5a08805))) ^ uVar45;
  plVar6[-2] = (CONCAT44(uVar27,uVar14) ^ 0xb9a72ffbf6408a9f) + 0x4dae52e36a991ceb;
  uVar27 = uVar20 & 0xff;
  g_028a0618 = uVar20 << 0x18 | uVar27 | uVar27 << 0x10 | uVar27 << 8;
  uVar51 = CONCAT44(g_028a0618,g_028a0618);
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar43 ^ 0x450071d4))) =
       (plVar6[-0x18] ^ uVar45) + (uVar55 ^ plVar6[-0xf]) ^ uVar51;
  uVar27 = g_028a059c - g_028a0740;
  uVar34 = (uint64_t)g_028a0740 & 0xff;
  uVar34 = g_028a0740 << 0x18 | uVar34 | uVar34 << 0x10 | uVar34 << 8;
  g_028a0740 = (uint)uVar34;
  uVar34 = uVar34 << 0x20 | uVar34;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar16 ^ 0x7eb4a112))) =
       (plVar6[-0x18] ^ uVar45) << (((byte)uVar25 ^ 0x4c) & 0x3f) ^ uVar34;
  uVar55 = (uint64_t)g_028a0510;
  uVar25 = uVar27 & 0xff;
  uVar25 = uVar27 * 0x1000000 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar40 = CONCAT44(uVar25,uVar25);
  uVar41 = (uVar45 ^ *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar55 ^ 0x78356230)))) >> 0xc;
  plVar6[-0xf] = uVar41 ^ uVar40;
  uVar25 = uVar26 & 0xff;
  g_028a0758 = uVar26 << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar45 = CONCAT44(g_028a0758,g_028a0758);
  plVar6[-0x18] = (uVar34 ^ plVar6[-2] | uVar41) ^ uVar45;
  uVar34 = (uint64_t)g_028a072c & 0xff;
  uVar41 = g_028a072c << 0x18 | uVar34 | uVar34 << 0x10 | uVar34 << 8;
  g_028a072c = (uint)uVar41;
  uVar41 = uVar41 << 0x20 | uVar41;
  plVar6[-0xf] = uVar45 ^ plVar6[-0x1f] ^ uVar51 ^
                 *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar21 ^ 0x8011ab8))) ^ uVar41;
  uVar25 = uVar36 & 0xff;
  g_028a0610 = uVar36 << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar45 = CONCAT44(g_028a0610,g_028a0610);
  plVar6[-2] = (uVar33 ^ plVar6[-0xd]) +
               (*(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar14 ^ 0x66cda22c))) ^ uVar46)
               ^ uVar45;
  uVar25 = uVar22 & 0xff;
  g_028a0718 = uVar22 << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  uVar34 = CONCAT44(g_028a0718,g_028a0718);
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar44 ^ 0xab1750cc))) =
       (plVar6[-0xe] ^ uVar46) << (((byte)uVar11 ^ 0x30) & 0x3f) ^ uVar34;
  uVar21 = (uint64_t)g_028a059c & 0xff;
  uVar21 = g_028a059c << 0x18 | uVar21 | uVar21 << 0x10 | uVar21 << 8;
  g_028a059c = (uint)uVar21;
  uVar21 = uVar21 << 0x20 | uVar21;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar19 ^ 0xab175014))) =
       (uVar46 ^ plVar6[-0xe]) >> (((byte)uVar17 ^ 0x7f) & 0x3f) ^ uVar21;
  uVar34 = uVar21 ^ plVar6[-0xd] | uVar34 ^ plVar6[-0x18];
  plVar6[-0xe] = uVar40 ^ uVar34;
  uVar21 = (uint64_t)g_028a062c & 0xff;
  uVar21 = g_028a062c << 0x18 | uVar21 | uVar21 << 0x10 | uVar21 << 8;
  g_028a062c = (uint)uVar21;
  uVar21 = uVar21 << 0x20 | uVar21;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar54 ^ 0x886235c0))) =
       plVar6[-2] ^ uVar45 ^ uVar21 ^ uVar34;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar7 ^ 0x5ffbfba5))) =
       (CONCAT44(uVar42,uVar19) | 0x98c6102d9f609fbb) ^ 0x218aa8020872040;
  plVar6[-0xe] = (uVar51 ^ plVar6[-0x1f]) +
                 (*(uint64_t *)((int64_t)plVar6 + (-8 - (uVar28 ^ 0x886235c0))) ^ uVar21) ^ uVar29
  ;
  uVar25 = g_028a0634 & 0xff;
  uVar34 = (uVar21 ^ plVar6[-0x18]) >> (((byte)uVar7 ^ 0xec) & 0x3f);
  g_028a0634 = uVar25 << 0x18 | uVar25 | uVar25 << 0x10 | uVar25 << 8;
  plVar6[-0x1f] = uVar52 ^ uVar34;
  uVar34 = uVar34 | (uVar21 ^ plVar6[-0x18]) << 0x17;
  plVar6[-0x18] = uVar35 ^ uVar34;
  plVar6[-0xd] = (uint64_t)(uVar13 >> 0xd ^ 0x23f6a);
  uVar21 = (uint64_t)g_028a0708 & 0xff;
  uVar21 = g_028a0708 << 0x18 | uVar21 | uVar21 << 0x10 | uVar21 << 8;
  g_028a0708 = (uint)uVar21;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar32 ^ 0x5a08805))) =
       (uVar21 << 0x20 | uVar21) ^
       uVar34 ^ uVar29 ^ *(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar12 ^ 0xb2089430)));
  uVar21 = (uint64_t)g_028a0804 & 0xff;
  uVar21 = g_028a0804 << 0x18 | uVar21 | uVar21 << 0x10 | uVar21 << 8;
  g_028a0804 = (uint)uVar21;
  uVar21 = uVar21 << 0x20 | uVar21;
  plVar6[-0xd] = (*(uint64_t *)((int64_t)plVar6 + (-8 - (uint64_t)(uVar9 ^ 0x8011a70))) ^ uVar41)
                 + (uVar45 ^ plVar6[-2]) ^ uVar21;
  *(uint64_t *)((int64_t)plVar6 + (-8 - (uVar55 ^ 0x78356230))) =
       (CONCAT44(uVar42,uVar14) ^ 0xaa93580cf8d7b9c3) << (((byte)uVar16 ^ 0x3e) & 0x3f);
  uVar34 = (uint64_t)g_028a061c & 0xff;
  uVar34 = g_028a061c << 0x18 | uVar34 | uVar34 << 0x10 | uVar34 << 8;
  g_028a061c = (uint)uVar34;
  uVar29 = (uVar41 ^ plVar6[-0xf]) >> (((byte)uVar8 ^ 0x5d) & 0x3f);
  plVar6[-0x18] = (uVar34 << 0x20 | uVar34) ^ uVar29;
  uVar34 = (uint64_t)g_028a06e8 & 0xff;
  uVar34 = g_028a06e8 << 0x18 | uVar34 | uVar34 << 0x10 | uVar34 << 8;
  g_028a06e8 = (uint)uVar34;
  uVar29 = uVar29 | (uVar41 ^ plVar6[-0xf]) << (((byte)uVar16 ^ 0x32) & 0x3f);
  plVar6[-0xf] = (uVar34 << 0x20 | uVar34) ^ uVar29;
  uVar34 = (uint64_t)g_028a0630 & 0xff;
  uVar34 = g_028a0630 << 0x18 | uVar34 | uVar34 << 0x10 | uVar34 << 8;
  g_028a0630 = (uint)uVar34;
  plVar6[-2] = (uVar34 << 0x20 | uVar34) ^ uVar29 ^ uVar21 ^ plVar6[-0xd];
  *(uint *)(&g_028a0820 + (int64_t)(int)(uVar3 ^ uVar10) * 4) = uVar18 ^ uVar5;
  return;
}


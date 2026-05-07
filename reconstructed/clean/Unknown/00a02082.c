// Function: FUN_00a02082
// Address: 00a02082
// Size: 8823 bytes
// Class: Unknown

uint32_t FUN_00a02082(void)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int64_t lVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int64_t arg1;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int64_t this_ptr;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  uint32_t local_3acc;
  uint local_3a00;
  uint8_t local_3978 [14616];
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  g_028a04c0 = local_3978;
  g_028a04d0 = 0;
  uVar32 = 0x811c9dc5;
  if (this_ptr != 0) {
    lVar14 = 0;
    do {
      uVar32 = (*(byte *)(this_ptr + lVar14) ^ uVar32) * 0x1000193;
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 != 0x20);
  }
  if (arg1 != 0) {
    lVar14 = 0;
    do {
      uVar32 = (*(byte *)(arg1 + lVar14) ^ uVar32) * 0x1000193;
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 != 0x20);
  }
  g_028a0530 = 0x90634f78;
  g_028a0544 = 0x90634f78;
  uVar10 = ~uVar32;
  g_028a054c = uVar32 | 0xf9b789a8;
  uVar29 = uVar32 + 0x3f3de022;
  uVar2 = uVar32 ^ 0x5459289c;
  uVar22 = uVar10 << 0x10 | uVar10 >> 0x10;
  g_028a0570 = uVar32 << 0x10 | uVar32 >> 0x10;
  g_028a0708 = uVar32 & 0x6e90d5dd;
  uVar20 = g_028a054c & 0xa1ae1642;
  uVar3 = uVar29 | 0x505a5d4e;
  uVar26 = uVar10 & 0xf5a9fcb6;
  uVar4 = uVar22 ^ 0xa0f860b0;
  uVar11 = 0xe66754b4 - uVar32;
  g_028a0578 = uVar32 * 0x778b9daa;
  uVar5 = g_028a0570 * -0x9d1552d;
  uVar23 = uVar32 & 3;
  uVar30 = 0x6cdb260;
  if (uVar23 == 0) {
    uVar30 = g_028a054c;
  }
  uVar6 = 0xcc512d7f;
  if (uVar23 == 2) {
    uVar6 = 0xdef10b12;
  }
  if (uVar23 < 2) {
    uVar6 = uVar30;
  }
  uVar30 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8;
  g_028a0550 = uVar30 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
  g_028a056c = uVar32 + 0xfa4698b7;
  uVar7 = (uVar32 & 0x7e323785) << 0x10 | (uVar32 & 0x7e323785) >> 0x10;
  g_028a05c4 = uVar32 ^ 0x931c1450;
  uVar8 = uVar32 ^ 0x2ad93d16;
  g_028a05f0 = g_028a0550 + 0x8e4f3181 | 0xc47e851;
  g_028a05d0 = uVar20 * 0x50cb0f6;
  uVar24 = uVar29 & 3;
  uVar23 = 0x572db238;
  if (uVar24 == 0) {
    uVar23 = uVar29;
  }
  g_028a05f8 = 0x2f859ca8;
  if (uVar24 == 2) {
    g_028a05f8 = 0xe216848a;
  }
  if (uVar24 < 2) {
    g_028a05f8 = uVar23;
  }
  uVar30 = uVar30 << 0x10;
  g_028a0718 = uVar2 * -0x2347c4a8;
  uVar29 = uVar10 >> 0x10 & 3;
  uVar23 = 0xed95ce03;
  if (uVar29 == 0) {
    uVar23 = uVar4;
  }
  uVar24 = 0x4b24692b;
  if (uVar29 == 2) {
    uVar24 = 0x60ff0866;
  }
  if (uVar29 < 2) {
    uVar24 = uVar23;
  }
  g_028a05a8 = g_028a0708 + 0xc33493ad;
  g_028a04f8 = 0x88623578;
  g_028a04fc = 0x5ffbfbc5;
  g_028a0500 = 0x80bda00;
  g_028a0504 = 0x24710045;
  g_028a0508 = 0x9f6de18e;
  g_028a050c = 0xab175074;
  g_028a0510 = 0x78356288;
  g_028a0514 = 0x8011a00;
  g_028a0518 = 0x5ec1c844;
  g_028a051c = 0x2f7afa45;
  g_028a0520 = 0xadfd2245;
  g_028a0524 = 0x40c5d09;
  g_028a0528 = 0x5a088f5;
  g_028a052c = 0xb2089458;
  g_028a0534 = 0x66cda244;
  g_028a0538 = 0x45fa7a2f;
  g_028a053c = 0x7eb4a11a;
  g_028a0540 = 0xb1fed980;
  g_028a07ec = uVar32 + 0x1998ab4b;
  uVar16 = uVar32 + 0x20ab035a;
  uVar17 = uVar32 + 0x44d2ff83;
  uVar31 = uVar2 + 0xe7f9e853;
  uVar12 = uVar3 + 0x302fb47e;
  g_028a05e8 = g_028a0570 + 0x80bce559;
  uVar13 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 * 0x1000000;
  uVar23 = uVar26 >> 0x18;
  g_028a0604 = uVar23 | (uVar10 & 0xa90000) >> 8 | (uVar10 & 0xfc00) << 8 | uVar26 << 0x18;
  uVar25 = uVar31 & 7;
  uVar27 = uVar32 + 0xe287d77b;
  if (uVar25 < 4) {
    if (1 < uVar25) {
      bVar33 = uVar25 == 2;
      uVar25 = 0x4ab64ed6;
      uVar21 = 0x3d6e741d;
      goto LAB_00a02782;
    }
    uVar21 = 0xec1cc108;
    if (uVar25 == 0) {
      uVar21 = uVar31;
    }
  }
  else {
    bVar33 = uVar25 == 5;
    if (uVar25 < 6) {
      uVar25 = 0x247e7632;
      uVar21 = 0x3f12c50e;
    }
    else {
      bVar33 = uVar25 == 6;
      uVar25 = 0xdaa169b;
      uVar21 = 0x76230d3d;
    }
LAB_00a02782:
    if (bVar33) {
      uVar21 = uVar25;
    }
  }
  g_028a0634 = (uVar32 | 0xaba21f71) ^ 0x57578382;
  g_028a0638 = uVar32 & 0xa0e3ae3e ^ 0x9f7a3139;
  g_028a064c = uVar7 ^ 0xad0b85e0;
  g_028a0658 = uVar16 | 0x8af7e827;
  uVar25 = g_028a05c4 | 0x80a916e4;
  g_028a0694 = uVar32 & 0x240 ^ 0xf9413f0e;
  uVar19 = g_028a0578 & 0x53338202 ^ 0xda057fef;
  g_028a06ac = g_028a0550 | 0x4d315c9a;
  g_028a06b8 = g_028a05f8 ^ 0xe66754b5;
  g_028a06c4 = g_028a05f0 + 0xfa4698b7;
  uVar18 = 0x20ab035a;
  if (uVar29 == 0) {
    uVar18 = uVar4;
  }
  g_028a0644 = uVar5 + 0x890aeac;
  g_028a0668 = uVar32 + 0xcbe426f5;
  g_028a06cc = 0x71b0ce7f;
  if (uVar29 == 2) {
    g_028a06cc = 0x5fdaf2ee;
  }
  if (uVar29 < 2) {
    g_028a06cc = uVar18;
  }
  g_028a0720 = (uVar32 + 0xd4e581cc) * -0x28b046d5;
  g_028a0758 = uVar5 + 0x890aeac + uVar32 * 0x35476792;
  g_028a068c = uVar3 + 0xf1745d2;
  g_028a06a8 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18
  ;
  g_028a06b0 = g_028a0578 >> 0x18 | (g_028a0578 & 0xff0000) >> 8 |
                 (g_028a0578 & 0xff00) << 8 | uVar32 * -0x56000000;
  uVar19 = uVar30 >> 0x18 | ((uVar32 >> 0x18) << 0x10) >> 8 | ((uVar32 << 0x18) >> 0x10) << 8 |
           (g_028a0550 >> 0x10) << 0x18;
  g_028a06e8 = uVar13 ^ 0xcc512d7f;
  g_028a06ec = uVar10 & 0x91081410;
  g_028a06f4 = uVar24 + 0x2ad93d16;
  iVar28 = (uVar11 ^ 0xd74fb92b) * 0xc47e851;
  uVar29 = (uVar32 & 0xe502aa10) + 0xaccc7dfe;
  uVar24 = ((uVar32 + 0xa769751f) * 0x10000 | uVar32 + 0xa769751f >> 0x10) * g_028a056c;
  g_028a075c = g_028a0658 * uVar32;
  g_028a0774 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18
  ;
  g_028a077c = (uVar22 & 0xf5ef4046) + g_028a0550;
  g_028a078c = g_028a056c & 0xf6c98190 & uVar27;
  uVar25 = uVar8 & 3;
  if (uVar25 < 2) {
    uVar18 = uVar32 + 0x6401c045;
    if (uVar25 == 0) {
      uVar18 = uVar8;
    }
  }
  else {
    puVar15 = &g_028a0688;
    if (uVar25 == 2) {
      puVar15 = &g_028a0678;
    }
    uVar18 = *puVar15;
  }
  g_028a07b4 = uVar32 & 0x27b62c1c ^ 0xffffffff;
  uVar25 = g_028a06a8 ^ (uVar32 | 0x79e0d521);
  g_028a07bc = (g_028a0550 + 0x8e4f3181) - uVar20;
  g_028a07c0 = uVar12 ^ g_028a05d0;
  g_028a07d0 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 * 0x1000000) * g_028a0570;
  g_028a07f4 = g_028a0604 & 0xb22c0075 & (uVar17 ^ 0xf9b789a8);
  g_028a07dc = 0xbb2d007c - uVar32;
  g_028a07f0 = g_028a06ac * (uVar30 | g_028a0550 >> 0x10);
  g_028a080c = g_028a06cc | g_028a0570 ^ 0xdf60dbf7;
  g_028a0810 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ^
                 uVar32 ^ 0xa2e2a367;
  g_028a0804 = g_028a05e8 ^ g_028a05f0;
  g_028a0814 = g_028a0604 | g_028a07ec;
  g_028a06f0 = g_028a06e8 >> 0x18 | (g_028a06e8 & 0xff0000) >> 8 |
                 (g_028a06e8 & 0xff00) << 8 | g_028a06e8 << 0x18;
  g_028a0714 = (g_028a0638 | 0x2b1a7e34) & g_028a0718;
  g_028a0610 = uVar32 + 0x21467968 + g_028a0550;
  g_028a0654 = uVar6 + uVar7;
  g_028a0780 = 0x67bdd98a - uVar6 ^ g_028a0774;
  g_028a0770 = g_028a0550 ^ 0xffffffff;
  g_028a0784 = uVar27 * 0x10000 | uVar27 >> 0x10;
  uVar30 = ((uVar32 & 0x16b0ecf6) + uVar32 + 0xffc1f6f) - g_028a05c4;
  g_028a0684 = uVar25 ^ g_028a068c & uVar32;
  g_028a05d8 = g_028a068c * 0x10000 | g_028a068c >> 0x10;
  g_028a0680 = g_028a05d0 + (g_028a0578 & 0x53338202) ^ g_028a05d0;
  g_028a057c = (uVar22 + 0x85e5c9d4) * (uVar3 + (uVar32 + 0xa83236ad & 0xa2a99d4f));
  g_028a0614 = 0xc0c21fdd - uVar32;
  g_028a059c = uVar29 & uVar31;
  g_028a0734 = g_028a056c - (g_028a0570 | 0x438d81a2);
  g_028a062c = iVar28 * g_028a05a8;
  g_028a0740 = g_028a0570 - g_028a0638;
  local_3a00 = uVar16 | 0x8af7e827;
  g_028a04d8 = g_028a075c * uVar32;
  uVar2 = uVar22 & 0xf5ef4046 ^ 0x5a697923;
  g_028a0574 = uVar7 ^ uVar16 ^ 0xffffffff;
  g_028a0640 = g_028a0644 ^ uVar16;
  g_028a07a0 = (uVar32 + 0x70542f38) * 0x10000 | uVar32 + 0x70542f38 >> 0x10;
  g_028a05bc = g_028a05c4 + 0xcbe426f5 + uVar32 & g_028a078c ^ 0xba629eb5;
  g_028a0794 = g_028a054c + g_028a0668;
  g_028a05d4 = uVar8 << 0x10 | uVar8 >> 0x10;
  g_028a0690 = g_028a0550 ^ 0xffffffff;
  g_028a0590 = g_028a05e8 * 0x10000 | g_028a05e8 >> 0x10 | g_028a07ec ^ 0xaba21f71 | uVar11
  ;
  g_028a07e8 = g_028a07ec;
  if ((g_028a06c4 & 1) == 0) {
    g_028a07e8 = g_028a06c4;
  }
  g_028a0808 = g_028a07f0 + g_028a05f8;
  g_028a058c = g_028a0804 & g_028a05f0;
  g_028a06d0 = g_028a06ac << 0x10 | g_028a06ac >> 0x10;
  g_028a0600 = g_028a0810 ^ uVar19;
  g_028a05fc = uVar13;
  if ((uVar23 & 1) == 0) {
    g_028a05fc = g_028a0604;
  }
  g_028a06f8 = g_028a06cc >> 0x18 | (g_028a06cc & 0xff0000) >> 8 |
                 (g_028a06cc & 0xff00) << 8 | g_028a06cc << 0x18;
  g_028a0710 = g_028a062c ^ 0xffffffff;
  g_028a071c = g_028a05a8 + (g_028a05a8 * 0x10000 | g_028a05a8 >> 0x10);
  g_028a05ac = uVar21 & g_028a0634;
  g_028a0748 = g_028a0638 ^ g_028a0570;
  g_028a0750 = g_028a04d8 + (uVar5 & g_028a0658);
  g_028a0764 = local_3a00 * uVar16;
  g_028a0768 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  g_028a07a4 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18
  ;
  uVar2 = g_028a07ec >> 0x18 | (g_028a07ec & 0xff0000) >> 8;
  g_028a06c0 = uVar2 | (g_028a07ec & 0xff00) << 8 | g_028a07ec * 0x1000000;
  g_028a0554 = g_028a0614 | g_028a06ec;
  g_028a0624 = iVar28 + g_028a0718;
  g_028a0630 = g_028a0714 * uVar29;
  g_028a0628 = g_028a0720 >> 0x18 | (g_028a0720 & 0xff0000) >> 8 |
                 (g_028a0720 & 0xff00) << 8 | (uVar32 + 0xd4e581cc) * 0x2b000000;
  g_028a072c = 0xd12d66fc;
  g_028a0728 = g_028a0740 * g_028a0550;
  g_028a04f4 = (uVar24 | g_028a064c) * g_028a0758;
  g_028a0738 = (uVar32 | 0xaba21f71) * uVar24;
  g_028a0788 = g_028a0654 >> 0x18 | (g_028a0654 & 0xff0000) >> 8 |
                 (g_028a0654 & 0xff00) << 8 | g_028a0654 * 0x1000000;
  g_028a065c = g_028a075c * uVar32;
  g_028a0650 = g_028a0644 + g_028a0574;
  g_028a05b4 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8) << 0x10 |
                 ((uVar8 & 0xff00) << 8 | uVar8 << 0x18) >> 0x10;
  g_028a0778 = (uVar32 + 0x5d1d5c99 | 0x70542f38) & g_028a07a4;
  g_028a079c = ~g_028a0668;
  g_028a0790 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 |
                 uVar30 * 0x1000000;
  uVar30 = uVar32 >> 0x10 & 3;
  if (uVar30 < 2) {
    g_028a0660 = g_028a0694 * uVar32;
    if (uVar30 == 0) {
      g_028a0660 = g_028a0570;
    }
  }
  else {
    puVar15 = &g_028a054c;
    if (uVar30 == 2) {
      puVar15 = &g_028a06a0;
    }
    g_028a0660 = *puVar15;
  }
  g_028a07b0 = g_028a068c ^ uVar32;
  g_028a0670 = (uVar32 + 0x6401c045) - uVar32 | g_028a05d4;
  g_028a04e8 = g_028a0690 | uVar25;
  g_028a07ac = g_028a07d0 * 0x10000 | g_028a07d0 >> 0x10;
  g_028a06a4 = g_028a06a8 | g_028a0684;
  g_028a05dc = g_028a05d0 - g_028a07b4;
  g_028a05e4 = g_028a07bc * 0x10000 | g_028a07bc >> 0x10;
  g_028a07c4 = g_028a05d0 & g_028a0680;
  g_028a07cc = (g_028a05d0 >> 0x18 | (g_028a05d0 & 0xff0000) >> 8 |
                  (g_028a05d0 & 0xff00) << 8 | uVar20 * -0xa000000) -
                 (g_028a07bc >> 0x18 | (g_028a07bc & 0xff0000) >> 8 |
                  (g_028a07bc & 0xff00) << 8 | g_028a07bc * 0x1000000);
  g_028a07c8 = g_028a06b8 - g_028a07ec;
  g_028a06b4 = g_028a06c4 * g_028a057c;
  g_028a07d4 = (g_028a07ec * 0x10000 | g_028a07ec >> 0x10) + g_028a05f8;
  g_028a07f8 = g_028a07ec & g_028a0590;
  g_028a06d4 = g_028a07e8 + uVar11;
  g_028a0698 = g_028a06d0 - g_028a07f4;
  g_028a07fc = g_028a05f0 << 0x10 | g_028a05f0 >> 0x10;
  g_028a0608 = g_028a0808 ^ g_028a05e8;
  g_028a0558 = uVar13 & uVar4 * uVar26;
  g_028a06e4 = uVar19 + g_028a080c;
  g_028a060c = uVar2 << 0x10 | g_028a06c0 >> 0x10;
  g_028a0818 = g_028a06e8 + g_028a0804 ^ 0x9973be87;
  uVar23 = uVar23 & 3;
  uVar30 = g_028a06cc;
  if (uVar23 == 0) {
    uVar30 = g_028a0604;
  }
  g_028a0584 = g_028a06ec;
  if (uVar23 == 2) {
    g_028a0584 = g_028a0600;
  }
  if (uVar23 < 2) {
    g_028a0584 = uVar30;
  }
  g_028a0700 = g_028a05fc ^ 0xffffffff;
  g_028a0548 = g_028a0720 + g_028a0714;
  g_028a061c = g_028a0630 - g_028a0710;
  g_028a070c = (uVar10 ^ g_028a06e8) * g_028a05a8;
  g_028a0704 = g_028a0624 * g_028a0708;
  g_028a05a0 = g_028a062c ^ g_028a0614;
  g_028a073c = g_028a0634 >> 0x18 | (g_028a0634 & 0xff0000) >> 8 |
                 (g_028a0634 & 0xff00) << 8 | g_028a0634 << 0x18;
  g_028a0730 = g_028a0758 ^ g_028a0718;
  g_028a0724 = g_028a0628 ^ 0xd12d66fc;
  g_028a04ec = g_028a0734 * g_028a059c;
  g_028a0618 = g_028a0638 - g_028a0728;
  g_028a0620 = g_028a05ac + g_028a064c;
  g_028a0564 = g_028a04f4 & g_028a0740;
  g_028a05b0 = g_028a0570 & g_028a0738;
  g_028a0754 = g_028a075c * g_028a0570;
  g_028a063c = g_028a0788 | g_028a056c;
  g_028a0744 = g_028a0750 ^ 0xffffffff;
  g_028a04f0 = g_028a0654 * g_028a0550;
  g_028a05cc = g_028a04d8 >> 0x18 | (g_028a04d8 & 0xff0000) >> 8 |
                 (g_028a04d8 & 0xff00) << 8 | g_028a04d8 * 0x1000000;
  g_028a0598 = g_028a0658 >> 0x18 | (g_028a0658 & 0xff0000) >> 8 |
                 (g_028a0658 & 0xff00) << 8 | g_028a0658 << 0x18;
  g_028a0568 = uVar32 ^ g_028a0770;
  g_028a076c = g_028a078c << 0x10 | g_028a078c >> 0x10;
  g_028a0760 = g_028a0650 ^ g_028a065c;
  g_028a05c0 = g_028a0644 - g_028a0774;
  g_028a05b8 = g_028a0668 >> 0x18 | (g_028a0668 & 0xff0000) >> 8 |
                 (g_028a0668 & 0xff00) << 8 | g_028a0668 * 0x1000000;
  g_028a0648 = g_028a077c | g_028a05bc << 0x10 | g_028a05bc >> 0x10;
  g_028a0664 = g_028a0768 ^ 0xffffffff;
  g_028a04e0 = g_028a0640 * g_028a05bc;
  g_028a0674 = g_028a0764 | g_028a0574;
  g_028a0678 = g_028a079c & g_028a0784;
  g_028a0688 = g_028a07b0 ^ g_028a05b4;
  g_028a0560 = g_028a07a0 | g_028a0694;
  g_028a05c8 = g_028a0660 * g_028a07a4;
  g_028a05a4 = g_028a0790 + g_028a0550;
  g_028a0798 = g_028a054c + g_028a068c;
  uVar32 = g_028a0690 & 3;
  if (uVar32 < 2) {
    g_028a04dc = g_028a0690;
    if (uVar32 != 0) {
      g_028a04dc = g_028a06b0;
    }
  }
  else {
    puVar15 = &g_028a05d8;
    if (uVar32 == 2) {
      puVar15 = &g_028a05c4;
    }
    g_028a04dc = *puVar15;
  }
  g_028a07b8 = g_028a07d0 + g_028a06a8;
  g_028a0588 = g_028a07c4 + g_028a0684;
  uVar32 = g_028a07d0 >> 0x10 & 3;
  if (uVar32 < 2) {
    g_028a0580 = g_028a07ac;
    if (uVar32 != 0) {
      g_028a0580 = g_028a05e4;
    }
  }
  else {
    puVar15 = &g_028a07b4;
    if (uVar32 == 2) {
      puVar15 = (uint *)&g_028a05dc;
    }
    g_028a0580 = *puVar15;
  }
  g_028a05ec = g_028a0578 * g_028a06a4;
  g_028a07a8 = ~g_028a0680;
  g_028a0594 = g_028a07cc + g_028a06b4;
  g_028a05e0 = g_028a07bc & g_028a05d0;
  uVar32 = g_028a06b8 & 3;
  if (uVar32 < 2) {
    g_028a07d8 = g_028a06b8;
    if (uVar32 != 0) {
      g_028a07d8 = g_028a07d4;
    }
  }
  else {
    puVar15 = (uint *)&g_028a07c8;
    if (uVar32 == 2) {
      puVar15 = &g_028a07e8;
    }
    g_028a07d8 = *puVar15;
  }
  uVar32 = g_028a06c4 & 7;
  if (uVar32 < 4) {
    if (uVar32 < 2) {
      g_028a06dc = g_028a06c4;
      if (uVar32 != 0) {
        g_028a06dc = g_028a06d4;
      }
      goto LAB_00a041aa;
    }
    bVar33 = uVar32 == 2;
    puVar9 = &g_028a0590;
    puVar15 = &g_028a05e8;
LAB_00a041a4:
    if (bVar33) {
      puVar15 = puVar9;
    }
  }
  else {
    if (5 < uVar32) {
      bVar33 = uVar32 == 6;
      puVar9 = (uint *)&g_028a07f0;
      puVar15 = &g_028a06d0;
      goto LAB_00a041a4;
    }
    puVar15 = &g_028a07f8;
    if (uVar32 != 5) {
      puVar15 = (uint *)&g_028a057c;
    }
  }
  g_028a06dc = *puVar15;
LAB_00a041aa:
  g_028a06c8 = g_028a0698 | g_028a058c;
  g_028a07e0 = g_028a0808;
  if ((g_028a0808 & 1) != 0) {
    g_028a07e0 = g_028a07dc;
  }
  g_028a06e0 = g_028a06ac & g_028a06f0;
  g_028a0800 =
       g_028a05f0 >> 0x18 | (g_028a05f0 & 0xff0000) >> 8 | (g_028a05f0 & 0xff00) << 8 |
       g_028a05f0 << 0x18;
  g_028a06d8 = g_028a060c ^ g_028a06c0;
  g_028a05f4 = g_028a06e4 + g_028a0600;
  g_028a06bc = g_028a0818 - g_028a06ec;
  g_028a06fc = g_028a0558 ^ g_028a0814;
  g_028a07e4 = g_028a0700 - g_028a080c;
  g_028a04e4 = ~g_028a06f4;
  g_028a055c = g_028a0810 + g_028a05fc;
  g_028a04c8 = &stack0xffffffffffffffa0;
  g_028a0840 = 0x30;
  iVar28 = 8;
  g_028a066c = g_028a0550;
  g_028a067c = g_028a0550;
  g_028a069c = g_028a05d0;
  g_028a06a0 = g_028a0550;
  g_028a074c = g_028a0570;
  do {
    iVar28 = (**(code **)(&g_02526090 + (int64_t)iVar28 * 8))();
  } while (iVar28 != 0);
  g_028a04c8 = g_028a04c8 + 0x20;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return local_3acc;
  }
                      ___stack_chk_fail();
}


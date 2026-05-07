// Function: FUN_00eab35d
// Address: 00eab35d
// Size: 5120 bytes
// Class: GNInt


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00eab35d(undefined8 *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  code *pcVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  longlong *plVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  dword *pdVar27;
  longlong lVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined8 *puVar31;
  int iVar32;
  uint uVar33;
  longlong *unaff_RSI;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  dword *unaff_RDI;
  size_t sVar37;
  int iVar38;
  ulonglong uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  ulonglong uVar43;
  longlong lVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  longlong lVar52;
  undefined1 auVar53 [16];
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  dword *pdVar58;
  undefined8 *local_c8;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  undefined8 *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 *local_88;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_48;
  int local_40;
  
  lVar4 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar25 = unaff_RDI[6];
  lVar21 = *(longlong *)(unaff_RDI + 2);
  uVar40 = unaff_RDI[0x44] - 3;
  uVar39 = (ulonglong)uVar40;
  if (2 < uVar40) {
    uVar39 = (ulonglong)(2 < unaff_RDI[0x44]) * 3;
  }
  local_b0 = 0xfff;
  if (unaff_RDI[0x45] < 0xfff) {
    local_b0 = unaff_RDI[0x45];
  }
  pdVar27 = (dword *)(ulonglong)local_b0;
  local_b4 = unaff_RDI[0xb];
  lVar5 = *(longlong *)(unaff_RDI + 0x2c);
  piVar6 = *(int **)(unaff_RDI + 0x2e);
  local_48 = 0;
  local_40 = 0;
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    pdVar58 = (dword *)0x0;
  }
  else {
    pdVar27 = *(dword **)(*(longlong *)(unaff_RDI + 0x48) + 0x20);
    pdVar58 = pdVar27;
  }
  local_98 = (longlong *)(unaff_RDI + 0x24);
  puVar19 = (undefined8 *)((longlong)param_1 + (param_3 - 8));
  uVar34 = param_3;
  FUN_00eadcaa(pdVar27,param_3 & 0xffffffff,param_3,param_4,pdVar58,0,0);
  plVar14 = local_98;
  sVar37 = (size_t)uVar34;
  iVar54 = unaff_RDI[0x3c];
  unaff_RDI[0x38] = 0;
  if (unaff_RDI[0x31] == 0) {
    if (param_3 < 9) {
      unaff_RDI[0x38] = 1;
      pdVar27 = unaff_RDI;
    }
    lVar44 = *(longlong *)(unaff_RDI + 0x3a);
    if (*(int *)(lVar44 + 0x808) == 2) {
      unaff_RDI[0x38] = 0;
      local_a0 = uVar39;
      if (iVar54 != 2) {
        unaff_RDI[0x30] = 0;
        lVar28 = 0;
        do {
          iVar54 = _HUF_getNbBitsFromCTable();
          iVar55 = 1 << (0xbU - (char)iVar54 & 0x1f);
          if (iVar54 == 0) {
            iVar55 = 1;
          }
          *(int *)(*(longlong *)(unaff_RDI + 0x24) + lVar28 * 4) = iVar55;
          unaff_RDI[0x30] = unaff_RDI[0x30] + iVar55;
          lVar28 = lVar28 + 1;
          lVar44 = *(longlong *)(unaff_RDI + 0x3a);
        } while (lVar28 != 0x100);
      }
      lVar28 = 2;
      if (*(short *)(
                    "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                    + lVar44 + 0x28) != 0) {
        lVar28 = (longlong)
                 (1 << ((char)*(short *)(
                                        "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                                        + lVar44 + 0x28) - 1U & 0x1f)) + 1;
      }
      unaff_RDI[0x31] = 0;
      lVar52 = *(longlong *)(unaff_RDI + 0x26);
      lVar30 = 0;
      do {
        iVar54 = 1 << (10U - (char)(*(int *)(
                                            "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                                            + lVar30 * 8 + lVar44 + lVar28 * 4 + 0x2c) + 0xffffU >>
                                   0x10) & 0x1f);
        if (*(int *)(
                    "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                    + lVar30 * 8 + lVar44 + lVar28 * 4 + 0x2c) + 0xffffU < 0x10000) {
          iVar54 = 1;
        }
        *(int *)(lVar52 + lVar30 * 4) = iVar54;
        unaff_RDI[0x31] = unaff_RDI[0x31] + iVar54;
        lVar30 = lVar30 + 1;
      } while (lVar30 != 0x24);
      lVar28 = 2;
      if (*(short *)(lVar44 + 0xb14) != 0) {
        lVar28 = (longlong)(1 << ((char)*(short *)(lVar44 + 0xb14) - 1U & 0x1f)) + 1;
      }
      unaff_RDI[0x32] = 0;
      lVar52 = *(longlong *)(unaff_RDI + 0x28);
      lVar30 = 0;
      do {
        uVar24 = *(int *)(lVar44 + lVar28 * 4 + 0xb18 + lVar30 * 8) + 0xffff;
        iVar54 = 1 << (10U - (char)(uVar24 >> 0x10) & 0x1f);
        if (uVar24 < 0x10000) {
          iVar54 = 1;
        }
        *(int *)(lVar52 + lVar30 * 4) = iVar54;
        unaff_RDI[0x32] = unaff_RDI[0x32] + iVar54;
        lVar30 = lVar30 + 1;
      } while (lVar30 != 0x35);
      lVar28 = 2;
      if (*(short *)(lVar44 + 0x810) != 0) {
        lVar28 = (longlong)(1 << ((char)*(short *)(lVar44 + 0x810) - 1U & 0x1f)) + 1;
      }
      unaff_RDI[0x33] = 0;
      lVar52 = *(longlong *)(unaff_RDI + 0x2a);
      lVar30 = 0;
      do {
        uVar24 = *(int *)(lVar44 + lVar28 * 4 + 0x814 + lVar30 * 8) + 0xffff;
        iVar54 = 1 << (10U - (char)(uVar24 >> 0x10) & 0x1f);
        if (uVar24 < 0x10000) {
          iVar54 = 1;
        }
        *(int *)(lVar52 + lVar30 * 4) = iVar54;
        unaff_RDI[0x33] = unaff_RDI[0x33] + iVar54;
        lVar30 = lVar30 + 1;
        uVar39 = local_a0;
      } while (lVar30 != 0x20);
      goto LAB_00eaba19;
    }
    if (iVar54 != 2) {
      local_60 = CONCAT44(local_60._4_4_,0xff);
      _HIST_count_simple(param_3,param_1);
      lVar44 = *plVar14;
      lVar28 = 0;
      auVar46 = (undefined1  [16])0x0;
      do {
        puVar1 = (uint *)(lVar44 + lVar28 * 4);
        iVar54 = ((*puVar1 >> 8) - (uint)(*puVar1 == 0)) + 1;
        iVar55 = ((puVar1[1] >> 8) - (uint)(puVar1[1] == 0)) + 1;
        iVar56 = ((puVar1[2] >> 8) - (uint)(puVar1[2] == 0)) + 1;
        iVar57 = ((puVar1[3] >> 8) - (uint)(puVar1[3] == 0)) + 1;
        auVar53._0_4_ = auVar46._0_4_ + iVar54;
        auVar53._4_4_ = auVar46._4_4_ + iVar55;
        auVar53._8_4_ = auVar46._8_4_ + iVar56;
        auVar53._12_4_ = auVar46._12_4_ + iVar57;
        piVar23 = (int *)(lVar44 + lVar28 * 4);
        *piVar23 = iVar54;
        piVar23[1] = iVar55;
        piVar23[2] = iVar56;
        piVar23[3] = iVar57;
        lVar28 = lVar28 + 4;
        auVar46 = auVar53;
      } while (lVar28 != 0x100);
      auVar46 = phaddd(auVar53,auVar53);
      auVar46 = phaddd(auVar46,auVar46);
      unaff_RDI[0x30] = auVar46._0_4_;
      pdVar27 = &section_000000b8.reserved2;
    }
    _memcpy(pdVar27,&section_00000068.size,sVar37);
    unaff_RDI[0x31] = 0x28;
    _memset_pattern16(pdVar27,section_000000b8.segname + 0xc,sVar37);
    unaff_RDI[0x32] = 0x35;
    uVar10 = _UNK_023e22f8;
    puVar20 = *(undefined8 **)(unaff_RDI + 0x2a);
    puVar20[0xe] = _DAT_023e22f0;
    puVar20[0xf] = uVar10;
    uVar10 = _UNK_023e22e8;
    puVar20[0xc] = _DAT_023e22e0;
    puVar20[0xd] = uVar10;
    uVar10 = _UNK_023e22d8;
    puVar20[10] = _DAT_023e22d0;
    puVar20[0xb] = uVar10;
    uVar10 = _UNK_023e22c8;
    puVar20[8] = _DAT_023e22c0;
    puVar20[9] = uVar10;
    uVar10 = _UNK_023e22b8;
    puVar20[6] = _DAT_023e22b0;
    puVar20[7] = uVar10;
    uVar10 = _UNK_023e22a8;
    puVar20[4] = _DAT_023e22a0;
    puVar20[5] = uVar10;
    uVar10 = _UNK_023e2298;
    puVar20[2] = _DAT_023e2290;
    puVar20[3] = uVar10;
    uVar10 = _UNK_023e2288;
    *puVar20 = _DAT_023e2280;
    puVar20[1] = uVar10;
    uVar24 = 0x35;
  }
  else {
    if (iVar54 != 2) {
      lVar44 = *local_98;
      lVar28 = 0;
      auVar46 = (undefined1  [16])0x0;
      do {
        piVar23 = (int *)(lVar44 + lVar28 * 4);
        auVar45._0_4_ = auVar46._0_4_ + *piVar23;
        auVar45._4_4_ = auVar46._4_4_ + piVar23[1];
        auVar45._8_4_ = auVar46._8_4_ + piVar23[2];
        auVar45._12_4_ = auVar46._12_4_ + piVar23[3];
        lVar28 = lVar28 + 4;
        auVar46 = auVar45;
      } while (lVar28 != 0x100);
      auVar46 = phaddd(auVar45,auVar45);
      auVar46 = phaddd(auVar46,auVar46);
      uVar24 = auVar46._0_4_;
      if (0x1fff < uVar24) {
        uVar35 = 0x1f;
        if (uVar24 >> 0xc != 0) {
          for (; (uVar24 >> 0xc) >> uVar35 == 0; uVar35 = uVar35 - 1) {
          }
        }
        lVar28 = 0;
        auVar53 = pmovzxdq(ZEXT416(uVar35),ZEXT416(uVar35));
        auVar46 = (undefined1  [16])0x0;
        do {
          puVar1 = (uint *)(lVar44 + lVar28 * 4);
          lVar52 = auVar53._0_8_;
          iVar54 = (*puVar1 >> lVar52) + 1;
          iVar55 = (puVar1[1] >> lVar52) + 1;
          iVar56 = (puVar1[2] >> lVar52) + 1;
          iVar57 = (puVar1[3] >> lVar52) + 1;
          auVar47._0_4_ = auVar46._0_4_ + iVar54;
          auVar47._4_4_ = auVar46._4_4_ + iVar55;
          auVar47._8_4_ = auVar46._8_4_ + iVar56;
          auVar47._12_4_ = auVar46._12_4_ + iVar57;
          piVar23 = (int *)(lVar44 + lVar28 * 4);
          *piVar23 = iVar54;
          piVar23[1] = iVar55;
          piVar23[2] = iVar56;
          piVar23[3] = iVar57;
          lVar28 = lVar28 + 4;
          auVar46 = auVar47;
        } while (lVar28 != 0x100);
        auVar46 = phaddd(auVar47,auVar47);
        auVar46 = phaddd(auVar46,auVar46);
        uVar24 = auVar46._0_4_;
      }
      unaff_RDI[0x30] = uVar24;
    }
    lVar44 = *(longlong *)(unaff_RDI + 0x26);
    lVar28 = 0;
    auVar46 = (undefined1  [16])0x0;
    do {
      piVar23 = (int *)(lVar44 + lVar28 * 4);
      auVar48._0_4_ = auVar46._0_4_ + *piVar23;
      auVar48._4_4_ = auVar46._4_4_ + piVar23[1];
      auVar48._8_4_ = auVar46._8_4_ + piVar23[2];
      auVar48._12_4_ = auVar46._12_4_ + piVar23[3];
      lVar28 = lVar28 + 4;
      auVar46 = auVar48;
    } while (lVar28 != 0x24);
    auVar46 = phaddd(auVar48,auVar48);
    auVar46 = phaddd(auVar46,auVar46);
    uVar24 = auVar46._0_4_;
    if (0xfff < uVar24) {
      uVar35 = 0x1f;
      if (uVar24 >> 0xb != 0) {
        for (; (uVar24 >> 0xb) >> uVar35 == 0; uVar35 = uVar35 - 1) {
        }
      }
      lVar28 = 0;
      auVar53 = pmovzxdq(ZEXT416(uVar35),ZEXT416(uVar35));
      auVar46 = (undefined1  [16])0x0;
      do {
        puVar1 = (uint *)(lVar44 + lVar28 * 4);
        lVar52 = auVar53._0_8_;
        iVar54 = (*puVar1 >> lVar52) + 1;
        iVar55 = (puVar1[1] >> lVar52) + 1;
        iVar56 = (puVar1[2] >> lVar52) + 1;
        iVar57 = (puVar1[3] >> lVar52) + 1;
        auVar49._0_4_ = auVar46._0_4_ + iVar54;
        auVar49._4_4_ = auVar46._4_4_ + iVar55;
        auVar49._8_4_ = auVar46._8_4_ + iVar56;
        auVar49._12_4_ = auVar46._12_4_ + iVar57;
        piVar23 = (int *)(lVar44 + lVar28 * 4);
        *piVar23 = iVar54;
        piVar23[1] = iVar55;
        piVar23[2] = iVar56;
        piVar23[3] = iVar57;
        lVar28 = lVar28 + 4;
        auVar46 = auVar49;
      } while (lVar28 != 0x24);
      auVar46 = phaddd(auVar49,auVar49);
      auVar46 = phaddd(auVar46,auVar46);
      uVar24 = auVar46._0_4_;
    }
    unaff_RDI[0x31] = uVar24;
    lVar44 = *(longlong *)(unaff_RDI + 0x28);
    uVar24 = 0;
    lVar28 = 0;
    do {
      uVar24 = uVar24 + *(int *)(lVar44 + lVar28 * 4);
      lVar28 = lVar28 + 1;
    } while (lVar28 != 0x35);
    if (0xfff < uVar24) {
      iVar54 = 0x1f;
      if (uVar24 >> 0xb != 0) {
        for (; (uVar24 >> 0xb) >> iVar54 == 0; iVar54 = iVar54 + -1) {
        }
      }
      lVar28 = 0;
      uVar24 = 0;
      do {
        uVar35 = *(uint *)(lVar44 + lVar28 * 4) >> ((byte)iVar54 & 0x1f);
        uVar24 = uVar24 + uVar35 + 1;
        *(uint *)(lVar44 + lVar28 * 4) = uVar35 + 1;
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0x35);
    }
    unaff_RDI[0x32] = uVar24;
    lVar44 = *(longlong *)(unaff_RDI + 0x2a);
    lVar28 = 0;
    auVar46 = (undefined1  [16])0x0;
    do {
      piVar23 = (int *)(lVar44 + lVar28 * 4);
      auVar50._0_4_ = auVar46._0_4_ + *piVar23;
      auVar50._4_4_ = auVar46._4_4_ + piVar23[1];
      auVar50._8_4_ = auVar46._8_4_ + piVar23[2];
      auVar50._12_4_ = auVar46._12_4_ + piVar23[3];
      lVar28 = lVar28 + 4;
      auVar46 = auVar50;
    } while (lVar28 != 0x20);
    auVar46 = phaddd(auVar50,auVar50);
    auVar46 = phaddd(auVar46,auVar46);
    uVar24 = auVar46._0_4_;
    if (0xfff < uVar24) {
      uVar35 = 0x1f;
      if (uVar24 >> 0xb != 0) {
        for (; (uVar24 >> 0xb) >> uVar35 == 0; uVar35 = uVar35 - 1) {
        }
      }
      lVar28 = 0;
      auVar53 = pmovzxdq(ZEXT416(uVar35),ZEXT416(uVar35));
      auVar46 = (undefined1  [16])0x0;
      do {
        puVar1 = (uint *)(lVar44 + lVar28 * 4);
        lVar52 = auVar53._0_8_;
        iVar54 = (*puVar1 >> lVar52) + 1;
        iVar55 = (puVar1[1] >> lVar52) + 1;
        iVar56 = (puVar1[2] >> lVar52) + 1;
        iVar57 = (puVar1[3] >> lVar52) + 1;
        auVar51._0_4_ = auVar46._0_4_ + iVar54;
        auVar51._4_4_ = auVar46._4_4_ + iVar55;
        auVar51._8_4_ = auVar46._8_4_ + iVar56;
        auVar51._12_4_ = auVar46._12_4_ + iVar57;
        piVar23 = (int *)(lVar44 + lVar28 * 4);
        *piVar23 = iVar54;
        piVar23[1] = iVar55;
        piVar23[2] = iVar56;
        piVar23[3] = iVar57;
        lVar28 = lVar28 + 4;
        auVar46 = auVar51;
      } while (lVar28 != 0x20);
      auVar46 = phaddd(auVar51,auVar51);
      auVar46 = phaddd(auVar46,auVar46);
      uVar24 = auVar46._0_4_;
    }
  }
  unaff_RDI[0x33] = uVar24;
LAB_00eaba19:
  lVar44 = param_3 + (longlong)param_1;
  FUN_00eade89();
  puVar20 = (undefined8 *)
            ((ulonglong)((undefined8 *)((ulonglong)uVar25 + lVar21) == param_1) + (longlong)param_1)
  ;
  local_88 = param_1;
  if (puVar20 < puVar19) {
    uVar25 = 4 - (uVar40 == 0);
    pcVar7 = *(code **)(&DAT_025934f0 + uVar39 * 8 + (param_4 & 0xffffffff) * 0x20);
    local_a8 = (undefined8 *)(lVar44 + -0x20);
    local_ac = 0;
    local_c8 = param_1;
    do {
      iVar54 = (int)puVar20 - (int)local_c8;
      uVar15 = (*pcVar7)(puVar20,&local_b4,lVar44,param_2);
      local_60 = CONCAT44(local_60._4_4_,uVar15);
      local_88._0_4_ = (int)param_1;
      FUN_00eadd34((int)puVar20 - (int)local_88,&local_60);
      uVar39 = local_60;
      uVar34 = local_60 & 0xffffffff;
      if (uVar34 == 0) {
        puVar20 = (undefined8 *)((longlong)puVar20 + 1);
      }
      else {
        lVar21 = 0;
        do {
          iVar55 = *(int *)((longlong)param_2 + lVar21 * 4);
          piVar6[lVar21 + 4] = iVar55;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        piVar6[2] = 0;
        piVar6[3] = iVar54;
        iVar55 = FUN_00eaddd8(iVar55,0);
        *piVar6 = iVar55;
        uVar39 = (ulonglong)((int)uVar39 - 1);
        uVar40 = *(uint *)(lVar5 + 4 + uVar39 * 8);
        if (local_b0 < uVar40) {
          uVar24 = *(uint *)(lVar5 + uVar39 * 8);
          uVar39 = 0;
LAB_00eac2d2:
          local_58[0] = piVar6[uVar39 * 7 + 6];
          local_60 = *(ulonglong *)(piVar6 + uVar39 * 7 + 4);
          uVar34 = local_60;
          if (uVar24 < 4) {
            uVar35 = (uVar24 + (iVar54 == 0)) - 1;
            if (uVar35 == 3) {
              iVar55 = (int)local_60 + -1;
LAB_00eac36b:
              piVar23 = local_58;
              if (1 < uVar35) {
                piVar23 = (int *)((longlong)&local_60 + 4);
              }
              local_58[0] = *piVar23;
              goto LAB_00eac382;
            }
            if (uVar35 != 0) {
              iVar55 = local_58[(ulonglong)uVar35 - 2];
              goto LAB_00eac36b;
            }
          }
          else {
            local_60._4_4_ = (int)(local_60 >> 0x20);
            iVar55 = uVar24 - 3;
            local_58[0] = local_60._4_4_;
LAB_00eac382:
            local_60 = CONCAT44((int)local_60,iVar55);
            uVar34 = local_60;
          }
          local_60 = uVar34;
          *param_2 = local_60;
          *(int *)(param_2 + 1) = local_58[0];
        }
        else {
          iVar56 = FUN_00eaddd8(uVar40,0);
          piVar23 = piVar6 + 7;
          lVar21 = (ulonglong)uVar25 - 1;
          do {
            *piVar23 = 0x40000000;
            piVar23 = piVar23 + 7;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          uVar43 = 0;
          uVar39 = (ulonglong)uVar25;
          do {
            uVar40 = *(uint *)(lVar5 + 4 + uVar43 * 8);
            if ((uint)uVar39 <= uVar40) {
              uVar24 = *(uint *)(lVar5 + uVar43 * 8);
              uVar35 = 0x1f;
              if (uVar24 != 0) {
                for (; uVar24 >> uVar35 == 0; uVar35 = uVar35 - 1) {
                }
              }
              iVar38 = uVar35 * 0x200 + -0x63cd;
              iVar57 = unaff_RDI[0x38];
              if (uVar35 < 0x14) {
                iVar38 = -0x3dcd;
              }
              do {
                iVar41 = (int)uVar39;
                if (iVar57 == 1) {
                  iVar32 = 0x1f;
                  if (iVar41 - 2U != 0) {
                    for (; iVar41 - 2U >> iVar32 == 0; iVar32 = iVar32 + -1) {
                    }
                  }
                  iVar32 = iVar32 * 0x100 + uVar35 * 0x100 + 0x1000;
                }
                else {
                  uVar33 = iVar41 - 3;
                  uVar18 = *(int *)(*(longlong *)(unaff_RDI + 0x2a) + (ulonglong)uVar35 * 4) + 1;
                  uVar42 = 0x1f;
                  if (uVar18 != 0) {
                    for (; uVar18 >> uVar42 == 0; uVar42 = uVar42 - 1) {
                    }
                  }
                  if (uVar33 < 0x80) {
                    uVar18 = (uint)(byte)(&DAT_023e23b0)[uVar33];
                  }
                  else {
                    uVar18 = 0x1f;
                    if (uVar33 != 0) {
                      for (; uVar33 >> uVar18 == 0; uVar18 = uVar18 - 1) {
                      }
                    }
                    uVar18 = (uVar18 ^ 0xffffffe0) + 0x44;
                  }
                  uVar26 = *(int *)(*(longlong *)(unaff_RDI + 0x28) + (ulonglong)uVar18 * 4) + 1;
                  uVar33 = 0x1f;
                  if (uVar26 != 0) {
                    for (; uVar26 >> uVar33 == 0; uVar33 = uVar33 - 1) {
                    }
                  }
                  iVar32 = unaff_RDI[0x37] + iVar38 + unaff_RDI[0x36] +
                           ((uVar42 ^ 0x1f) + uVar35 + (uint)(byte)(&DAT_023e2370)[uVar18] +
                           (uVar33 ^ 0x1f)) * 0x100;
                }
                piVar6[uVar39 * 7 + 2] = iVar41;
                piVar6[uVar39 * 7 + 1] = uVar24;
                piVar6[uVar39 * 7 + 3] = iVar54;
                piVar6[uVar39 * 7] = iVar32 + iVar56 + iVar55;
                uVar39 = (ulonglong)(iVar41 + 1U);
              } while (iVar41 + 1U <= uVar40);
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 != uVar34);
          uVar24 = (int)uVar39 - 1;
          if (uVar24 == 0) {
            uVar35 = 0;
          }
          else {
            uVar39 = 1;
            do {
              uVar42 = (uint)uVar39;
              uVar34 = (ulonglong)(uVar42 - 1);
              local_a0 = uVar34 * 0x1c;
              iVar54 = 1;
              if (piVar6[uVar34 * 7 + 2] == 0) {
                iVar54 = piVar6[uVar34 * 7 + 3] + 1;
              }
              puVar29 = (undefined8 *)((longlong)puVar20 + uVar39);
              iVar55 = 0x800;
              uVar43 = uVar39;
              if ((unaff_RDI[0x3c] != 2) && (iVar55 = 0x600, unaff_RDI[0x38] != 1)) {
                uVar40 = unaff_RDI[0x34] - 0x100;
                uVar35 = *(int *)(*(longlong *)(unaff_RDI + 0x24) +
                                 (ulonglong)*(byte *)((longlong)puVar29 - 1) * 4) + 1;
                iVar55 = 0x1f;
                if (uVar35 != 0) {
                  for (; uVar35 >> iVar55 == 0; iVar55 = iVar55 + -1) {
                  }
                }
                uVar35 = iVar55 << 8;
                if (uVar40 < (uint)(iVar55 << 8)) {
                  uVar35 = uVar40;
                }
                uVar43 = (ulonglong)uVar35;
                iVar55 = unaff_RDI[0x34] - uVar35;
              }
              iVar56 = piVar6[uVar34 * 7];
              iVar57 = FUN_00eaddd8(uVar43,0);
              iVar38 = FUN_00eaddd8();
              iVar38 = (iVar57 + iVar55 + iVar56) - iVar38;
              piVar23 = piVar6 + uVar39 * 7 + 2;
              iVar55 = piVar6[uVar39 * 7];
              if (iVar55 < iVar38) {
                if (*piVar23 == 0) goto LAB_00eabea4;
                uVar34 = (ulonglong)(uVar42 - *piVar23);
                uVar40 = piVar6[uVar39 * 7 + 1];
                local_58[0] = piVar6[uVar34 * 7 + 6];
                local_60 = *(ulonglong *)(piVar6 + uVar34 * 7 + 4);
                uVar34 = local_60;
                if (uVar40 < 4) {
                  uVar40 = (uVar40 + (piVar6[uVar39 * 7 + 3] == 0)) - 1;
                  if (uVar40 == 3) {
                    iVar54 = (int)local_60 + -1;
LAB_00eabf11:
                    piVar22 = local_58;
                    if (1 < uVar40) {
                      piVar22 = (int *)((longlong)&local_60 + 4);
                    }
                    local_58[0] = *piVar22;
                    goto LAB_00eabf28;
                  }
                  if (uVar40 != 0) {
                    iVar54 = local_58[(ulonglong)uVar40 - 2];
                    goto LAB_00eabf11;
                  }
                }
                else {
                  local_60._4_4_ = (int)(local_60 >> 0x20);
                  iVar54 = uVar40 - 3;
                  local_58[0] = local_60._4_4_;
LAB_00eabf28:
                  local_60 = CONCAT44((int)local_60,iVar54);
                  uVar34 = local_60;
                }
                local_60 = uVar34;
                *(ulonglong *)(piVar6 + uVar39 * 7 + 4) = local_60;
                piVar6[uVar39 * 7 + 6] = local_58[0];
                bVar13 = false;
              }
              else {
                *piVar23 = 0;
                piVar6[uVar39 * 7 + 1] = 0;
                piVar6[uVar39 * 7 + 3] = iVar54;
                piVar6[uVar39 * 7] = iVar38;
                iVar55 = iVar38;
LAB_00eabea4:
                piVar6[uVar39 * 7 + 6] = *(int *)((longlong)piVar6 + local_a0 + 0x18);
                *(undefined8 *)(piVar6 + uVar39 * 7 + 4) =
                     *(undefined8 *)((longlong)piVar6 + local_a0 + 0x10);
                bVar13 = true;
              }
              if (puVar29 <= puVar19) {
                uVar35 = uVar42;
                if (uVar42 == uVar24) break;
                if (iVar55 + 0x80 < piVar6[(ulonglong)(uVar42 + 1) * 7]) {
                  iVar54 = 0;
                  if (bVar13) {
                    iVar54 = piVar6[uVar39 * 7 + 3];
                  }
                  uVar15 = FUN_00eaddd8(0,0);
                  local_a0 = CONCAT44(local_a0._4_4_,uVar15);
                  uVar15 = (*pcVar7)(puVar29,&local_b4,lVar44,piVar6 + uVar39 * 7 + 4);
                  local_60 = CONCAT44(local_60._4_4_,uVar15);
                  FUN_00eadd34((int)puVar29 - (int)local_88,&local_60,(int)lVar44 - (int)puVar29);
                  if ((local_60 & 0xffffffff) != 0) {
                    uVar40 = *(uint *)(lVar5 + 4 + (ulonglong)((int)local_60 - 1U) * 8);
                    if ((local_b0 < uVar40) || (0xfff < uVar40 + uVar42)) {
                      iVar55 = 0;
                      if (*piVar23 == 0) {
                        iVar55 = piVar6[uVar39 * 7 + 3];
                      }
                      uVar24 = *(uint *)(lVar5 + (ulonglong)((int)local_60 - 1U) * 8);
                      uVar35 = uVar42 - iVar55;
                      if (0x1000 < uVar42 - iVar55) {
                        uVar35 = 0;
                      }
                      uVar39 = (ulonglong)uVar35;
                      goto LAB_00eac2c7;
                    }
                    iVar55 = (int)local_a0 + iVar55;
                    local_a0 = CONCAT44(local_a0._4_4_,iVar55);
                    uVar39 = 0;
                    do {
                      uVar40 = uVar25;
                      if (uVar39 != 0) {
                        uVar40 = *(int *)(lVar5 + -4 + uVar39 * 8) + 1;
                      }
                      uVar35 = *(uint *)(lVar5 + 4 + uVar39 * 8);
                      if (uVar40 <= uVar35) {
                        uVar18 = *(uint *)(lVar5 + uVar39 * 8);
                        uVar33 = 0x1f;
                        if (uVar18 != 0) {
                          for (; uVar18 >> uVar33 == 0; uVar33 = uVar33 - 1) {
                          }
                        }
                        uVar26 = uVar35 + uVar42;
                        iVar56 = unaff_RDI[0x38];
                        iVar57 = uVar33 * 0x200 + -0x63cd;
                        if (uVar33 < 0x14) {
                          iVar57 = -0x3dcd;
                        }
                        do {
                          if (iVar56 == 1) {
                            iVar38 = 0x1f;
                            if (uVar35 - 2 != 0) {
                              for (; uVar35 - 2 >> iVar38 == 0; iVar38 = iVar38 + -1) {
                              }
                            }
                            iVar38 = iVar38 * 0x100 + uVar33 * 0x100 + 0x1000;
                          }
                          else {
                            uVar16 = uVar35 - 3;
                            uVar36 = *(int *)(*(longlong *)(unaff_RDI + 0x2a) +
                                             (ulonglong)uVar33 * 4) + 1;
                            uVar9 = 0x1f;
                            if (uVar36 != 0) {
                              for (; uVar36 >> uVar9 == 0; uVar9 = uVar9 - 1) {
                              }
                            }
                            if (uVar16 < 0x80) {
                              uVar16 = (uint)(byte)(&DAT_023e23b0)[uVar16];
                            }
                            else {
                              uVar36 = 0x1f;
                              if (uVar16 != 0) {
                                for (; uVar16 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                                }
                              }
                              uVar16 = (uVar36 ^ 0xffffffe0) + 0x44;
                            }
                            uVar17 = *(int *)(*(longlong *)(unaff_RDI + 0x28) +
                                             (ulonglong)uVar16 * 4) + 1;
                            uVar36 = 0x1f;
                            if (uVar17 != 0) {
                              for (; uVar17 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                              }
                            }
                            iVar38 = unaff_RDI[0x37] + iVar57 + unaff_RDI[0x36] +
                                     ((uVar9 ^ 0x1f) + uVar33 + (uint)(byte)(&DAT_023e2370)[uVar16]
                                     + (uVar36 ^ 0x1f)) * 0x100;
                          }
                          iVar38 = iVar38 + iVar55;
                          uVar34 = (ulonglong)(uVar42 + uVar35);
                          if (uVar24 < uVar42 + uVar35) {
                            lVar21 = (ulonglong)uVar26 - (ulonglong)uVar24;
                            piVar23 = piVar6 + 7 + (ulonglong)uVar24 * 7;
                            do {
                              *piVar23 = 0x40000000;
                              piVar23 = piVar23 + 7;
                              lVar21 = lVar21 + -1;
                              uVar24 = uVar26;
                            } while (lVar21 != 0);
                          }
                          else if (piVar6[uVar34 * 7] <= iVar38) break;
                          piVar6[uVar34 * 7 + 2] = uVar35;
                          piVar6[uVar34 * 7 + 1] = uVar18;
                          piVar6[uVar34 * 7 + 3] = iVar54;
                          piVar6[uVar34 * 7] = iVar38;
                          uVar35 = uVar35 - 1;
                          uVar26 = uVar26 - 1;
                        } while (uVar40 <= uVar35);
                      }
                      uVar39 = uVar39 + 1;
                    } while (uVar39 != (local_60 & 0xffffffff));
                  }
                }
              }
              uVar39 = (ulonglong)(uVar42 + 1);
              uVar35 = uVar24;
            } while (uVar42 + 1 <= uVar24);
          }
          uVar39 = (ulonglong)uVar35;
          local_ac = piVar6[uVar39 * 7];
          uVar24 = piVar6[uVar39 * 7 + 1];
          uVar40 = piVar6[uVar39 * 7 + 2];
          iVar54 = piVar6[uVar39 * 7 + 3];
          local_40 = piVar6[uVar39 * 7 + 6];
          local_48 = *(undefined8 *)(piVar6 + uVar39 * 7 + 4);
          uVar39 = (ulonglong)(uVar35 - (iVar54 + uVar40));
          if (uVar35 < iVar54 + uVar40) {
            uVar39 = 0;
          }
LAB_00eac2c7:
          if (uVar40 != 0) goto LAB_00eac2d2;
          *(int *)(param_2 + 1) = piVar6[uVar39 * 7 + 6];
          *param_2 = *(ulonglong *)(piVar6 + uVar39 * 7 + 4);
          uVar40 = 0;
        }
        uVar35 = (int)uVar39 + 1;
        uVar34 = (ulonglong)uVar35;
        piVar6[uVar34 * 7] = local_ac;
        piVar6[uVar34 * 7 + 1] = uVar24;
        piVar6[uVar34 * 7 + 2] = uVar40;
        piVar6[uVar34 * 7 + 3] = iVar54;
        *(undefined8 *)(piVar6 + uVar34 * 7 + 4) = local_48;
        piVar6[uVar34 * 7 + 6] = local_40;
        uVar34 = uVar39;
        if ((int)uVar39 == 0) {
          uVar43 = 1;
          goto LAB_00eac447;
        }
        do {
          uVar43 = uVar34;
          uVar40 = (uint)uVar39;
          uVar24 = piVar6[uVar39 * 7 + 3] + piVar6[uVar39 * 7 + 2];
          uVar42 = (uint)uVar43;
          uVar10 = *(undefined8 *)(piVar6 + uVar39 * 7);
          uVar11 = *(undefined8 *)(piVar6 + uVar39 * 7 + 2);
          uVar12 = *(undefined8 *)(piVar6 + uVar39 * 7 + 3 + 2);
          *(undefined8 *)(piVar6 + uVar43 * 7 + 3) = *(undefined8 *)(piVar6 + uVar39 * 7 + 3);
          *(undefined8 *)(piVar6 + uVar43 * 7 + 3 + 2) = uVar12;
          *(undefined8 *)(piVar6 + uVar43 * 7) = uVar10;
          *(undefined8 *)(piVar6 + uVar43 * 7 + 2) = uVar11;
          uVar39 = (ulonglong)(uVar40 - uVar24);
          if (uVar24 > uVar40) {
            uVar39 = 0;
          }
          uVar34 = (ulonglong)(uVar42 - 1);
        } while (uVar24 <= uVar40 && uVar40 - uVar24 != 0);
        while (uVar42 <= uVar35) {
LAB_00eac447:
          uVar40 = piVar6[uVar43 * 7 + 3];
          uVar39 = (ulonglong)uVar40;
          uVar24 = piVar6[uVar43 * 7 + 2];
          if ((ulonglong)uVar24 == 0) {
            puVar20 = (undefined8 *)(uVar39 + (longlong)local_c8);
          }
          else {
            uVar42 = piVar6[uVar43 * 7 + 1];
            if (unaff_RDI[0x3c] != 2) {
              if (uVar39 != 0) {
                lVar21 = *local_98;
                uVar34 = 0;
                do {
                  piVar23 = (int *)(lVar21 + (ulonglong)*(byte *)((longlong)local_c8 + uVar34) * 4);
                  *piVar23 = *piVar23 + 2;
                  uVar34 = uVar34 + 1;
                } while (uVar39 != uVar34);
              }
              unaff_RDI[0x30] = unaff_RDI[0x30] + uVar40 * 2;
            }
            if (uVar40 < 0x40) {
              uVar18 = (uint)(byte)(&DAT_023e2330)[uVar39];
            }
            else {
              uVar18 = 0x1f;
              if (uVar40 != 0) {
                for (; uVar40 >> uVar18 == 0; uVar18 = uVar18 - 1) {
                }
              }
              uVar18 = (uVar18 ^ 0xffffffe0) + 0x33;
            }
            piVar23 = (int *)(*(longlong *)(unaff_RDI + 0x26) + (ulonglong)uVar18 * 4);
            *piVar23 = *piVar23 + 1;
            unaff_RDI[0x31] = unaff_RDI[0x31] + 1;
            uVar18 = 0x1f;
            if (uVar42 != 0) {
              for (; uVar42 >> uVar18 == 0; uVar18 = uVar18 - 1) {
              }
            }
            piVar23 = (int *)(*(longlong *)(unaff_RDI + 0x2a) + (ulonglong)uVar18 * 4);
            *piVar23 = *piVar23 + 1;
            unaff_RDI[0x33] = unaff_RDI[0x33] + 1;
            uVar18 = uVar24 - 3;
            if (uVar18 < 0x80) {
              uVar18 = (uint)(byte)(&DAT_023e23b0)[uVar18];
            }
            else {
              uVar33 = 0x1f;
              if (uVar18 != 0) {
                for (; uVar18 >> uVar33 == 0; uVar33 = uVar33 - 1) {
                }
              }
              uVar18 = (uVar33 ^ 0xffffffe0) + 0x44;
            }
            piVar23 = (int *)(*(longlong *)(unaff_RDI + 0x28) + (ulonglong)uVar18 * 4);
            *piVar23 = *piVar23 + 1;
            unaff_RDI[0x32] = unaff_RDI[0x32] + 1;
            puVar20 = (undefined8 *)((longlong)local_c8 + uVar39);
            if (local_a8 < puVar20) {
              puVar8 = (undefined8 *)unaff_RSI[3];
              puVar29 = puVar8;
              puVar31 = local_c8;
              if (local_c8 <= local_a8) {
                puVar29 = (undefined8 *)
                          ((longlong)puVar8 + ((longlong)local_a8 - (longlong)local_c8));
                uVar10 = local_c8[1];
                *puVar8 = *local_c8;
                puVar8[1] = uVar10;
                puVar31 = local_a8;
                if (0x10 < (longlong)local_a8 - (longlong)local_c8) {
                  lVar21 = 0x10;
                  do {
                    uVar10 = ((undefined8 *)((longlong)local_c8 + lVar21))[1];
                    puVar2 = (undefined8 *)((longlong)puVar8 + lVar21);
                    *puVar2 = *(undefined8 *)((longlong)local_c8 + lVar21);
                    puVar2[1] = uVar10;
                    puVar3 = (undefined8 *)((longlong)local_c8 + lVar21 + 0x10);
                    uVar10 = puVar3[1];
                    puVar2[2] = *puVar3;
                    puVar2[3] = uVar10;
                    lVar21 = lVar21 + 0x20;
                  } while (puVar2 + 4 < puVar29);
                }
              }
              if (puVar31 < puVar20) {
                lVar21 = 0;
                do {
                  *(undefined1 *)((longlong)puVar29 + lVar21) =
                       *(undefined1 *)((longlong)puVar31 + lVar21);
                  lVar21 = lVar21 + 1;
                } while ((longlong)puVar20 - (longlong)puVar31 != lVar21);
              }
LAB_00eac613:
              unaff_RSI[3] = unaff_RSI[3] + uVar39;
              if (0xffff < uVar40) {
                *(undefined4 *)(unaff_RSI + 9) = 1;
                *(int *)((longlong)unaff_RSI + 0x4c) =
                     (int)((ulonglong)(unaff_RSI[1] - *unaff_RSI) >> 3);
              }
            }
            else {
              puVar20 = (undefined8 *)unaff_RSI[3];
              uVar10 = local_c8[1];
              *puVar20 = *local_c8;
              puVar20[1] = uVar10;
              lVar21 = unaff_RSI[3];
              if (uVar40 < 0x11) {
                unaff_RSI[3] = lVar21 + uVar39;
              }
              else {
                uVar10 = local_c8[3];
                *(undefined8 *)(lVar21 + 0x10) = local_c8[2];
                *(undefined8 *)(lVar21 + 0x18) = uVar10;
                if (0x20 < uVar40) {
                  lVar28 = 0;
                  do {
                    puVar29 = (undefined8 *)((longlong)local_c8 + lVar28 + 0x20);
                    uVar10 = puVar29[1];
                    puVar20 = (undefined8 *)(lVar21 + 0x20 + lVar28);
                    *puVar20 = *puVar29;
                    puVar20[1] = uVar10;
                    puVar29 = (undefined8 *)((longlong)local_c8 + lVar28 + 0x30);
                    uVar10 = puVar29[1];
                    puVar20[2] = *puVar29;
                    puVar20[3] = uVar10;
                    lVar28 = lVar28 + 0x20;
                  } while (puVar20 + 4 < (undefined8 *)(lVar21 + uVar39));
                  goto LAB_00eac613;
                }
                unaff_RSI[3] = unaff_RSI[3] + uVar39;
              }
            }
            puVar1 = (uint *)unaff_RSI[1];
            *(short *)(puVar1 + 1) = (short)uVar40;
            *puVar1 = uVar42;
            uVar39 = (ulonglong)uVar24 - 3;
            if (0xffff < uVar39) {
              *(undefined4 *)(unaff_RSI + 9) = 2;
              *(int *)((longlong)unaff_RSI + 0x4c) =
                   (int)((ulonglong)((longlong)puVar1 - *unaff_RSI) >> 3);
            }
            *(short *)((longlong)puVar1 + 6) = (short)uVar39;
            unaff_RSI[1] = (longlong)(puVar1 + 2);
            local_c8 = (undefined8 *)((longlong)local_c8 + (ulonglong)(uVar24 + uVar40));
            puVar20 = local_c8;
          }
          uVar42 = (int)uVar43 + 1;
          uVar43 = (ulonglong)uVar42;
        }
        FUN_00eade89();
      }
    } while (puVar20 < puVar19);
    local_88 = local_c8;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar4) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar44 - (longlong)local_88;
}



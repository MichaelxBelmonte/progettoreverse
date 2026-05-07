// Function: FUN_00eac76a
// Address: 00eac76a
// Size: 5160 bytes
// Class: MUElementAnalyzer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00eac76a(undefined8 *param_1,ulonglong *param_2,ulonglong param_3,uint param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  dword *pdVar6;
  int *piVar7;
  code *pcVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  int *piVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  dword *pdVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  undefined8 *puVar37;
  longlong *unaff_RSI;
  uint uVar38;
  longlong unaff_RDI;
  size_t sVar39;
  uint uVar40;
  dword dVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  longlong lVar51;
  undefined1 auVar52 [16];
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  undefined4 local_d4;
  uint local_d0;
  int local_cc;
  undefined8 *local_90;
  undefined8 *local_70;
  undefined8 local_58;
  int local_50 [2];
  undefined8 local_48;
  int local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar33 = *(uint *)(unaff_RDI + 0x18);
  lVar20 = *(longlong *)(unaff_RDI + 8);
  uVar25 = *(uint *)(unaff_RDI + 0x110) - 3;
  uVar32 = (ulonglong)uVar25;
  if (2 < uVar25) {
    uVar32 = (ulonglong)(2 < *(uint *)(unaff_RDI + 0x110)) * 3;
  }
  local_d0 = 0xfff;
  if (*(uint *)(unaff_RDI + 0x114) < 0xfff) {
    local_d0 = *(uint *)(unaff_RDI + 0x114);
  }
  uVar28 = (ulonglong)local_d0;
  local_d4 = *(undefined4 *)(unaff_RDI + 0x2c);
  pdVar6 = *(dword **)(unaff_RDI + 0xb0);
  piVar7 = *(int **)(unaff_RDI + 0xb8);
  local_48 = 0;
  local_40 = 0;
  if (*(longlong *)(unaff_RDI + 0x120) != 0) {
    uVar28 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0x120) + 0x20);
  }
  plVar2 = (longlong *)(unaff_RDI + 0x90);
  puVar19 = (undefined8 *)((longlong)param_1 + (param_3 - 8));
  uVar34 = param_3;
  FUN_00eadcaa(uVar28,param_3 & 0xffffffff);
  sVar39 = (size_t)uVar34;
  iVar53 = *(int *)(unaff_RDI + 0xf0);
  *(undefined4 *)(unaff_RDI + 0xe0) = 0;
  if (*(int *)(unaff_RDI + 0xc4) == 0) {
    if (param_3 < 9) {
      *(undefined4 *)(unaff_RDI + 0xe0) = 1;
    }
    lVar36 = *(longlong *)(unaff_RDI + 0xe8);
    if (*(int *)(lVar36 + 0x808) == 2) {
      *(undefined4 *)(unaff_RDI + 0xe0) = 0;
      if (iVar53 != 2) {
        *(undefined4 *)(unaff_RDI + 0xc0) = 0;
        lVar29 = 0;
        do {
          iVar53 = _HUF_getNbBitsFromCTable();
          iVar54 = 1 << (0xbU - (char)iVar53 & 0x1f);
          if (iVar53 == 0) {
            iVar54 = 1;
          }
          *(int *)(*(longlong *)(unaff_RDI + 0x90) + lVar29 * 4) = iVar54;
          *(int *)(unaff_RDI + 0xc0) = *(int *)(unaff_RDI + 0xc0) + iVar54;
          lVar29 = lVar29 + 1;
          lVar36 = *(longlong *)(unaff_RDI + 0xe8);
        } while (lVar29 != 0x100);
      }
      lVar29 = 2;
      if (*(short *)(
                    "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                    + lVar36 + 0x28) != 0) {
        lVar29 = (longlong)
                 (1 << ((char)*(short *)(
                                        "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                                        + lVar36 + 0x28) - 1U & 0x1f)) + 1;
      }
      *(undefined4 *)(unaff_RDI + 0xc4) = 0;
      lVar51 = *(longlong *)(unaff_RDI + 0x98);
      lVar35 = 0;
      do {
        iVar53 = 1 << (10U - (char)(*(int *)(
                                            "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                                            + lVar35 * 8 + lVar36 + lVar29 * 4 + 0x2c) + 0xffffU >>
                                   0x10) & 0x1f);
        if (*(int *)(
                    "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                    + lVar35 * 8 + lVar36 + lVar29 * 4 + 0x2c) + 0xffffU < 0x10000) {
          iVar53 = 1;
        }
        *(int *)(lVar51 + lVar35 * 4) = iVar53;
        *(int *)(unaff_RDI + 0xc4) = *(int *)(unaff_RDI + 0xc4) + iVar53;
        lVar35 = lVar35 + 1;
      } while (lVar35 != 0x24);
      lVar29 = 2;
      if (*(short *)(lVar36 + 0xb14) != 0) {
        lVar29 = (longlong)(1 << ((char)*(short *)(lVar36 + 0xb14) - 1U & 0x1f)) + 1;
      }
      *(undefined4 *)(unaff_RDI + 200) = 0;
      lVar51 = *(longlong *)(unaff_RDI + 0xa0);
      lVar35 = 0;
      do {
        uVar26 = *(int *)(lVar36 + lVar29 * 4 + 0xb18 + lVar35 * 8) + 0xffff;
        iVar53 = 1 << (10U - (char)(uVar26 >> 0x10) & 0x1f);
        if (uVar26 < 0x10000) {
          iVar53 = 1;
        }
        *(int *)(lVar51 + lVar35 * 4) = iVar53;
        *(int *)(unaff_RDI + 200) = *(int *)(unaff_RDI + 200) + iVar53;
        lVar35 = lVar35 + 1;
      } while (lVar35 != 0x35);
      lVar29 = 2;
      if (*(short *)(lVar36 + 0x810) != 0) {
        lVar29 = (longlong)(1 << ((char)*(short *)(lVar36 + 0x810) - 1U & 0x1f)) + 1;
      }
      *(undefined4 *)(unaff_RDI + 0xcc) = 0;
      lVar51 = *(longlong *)(unaff_RDI + 0xa8);
      lVar35 = 0;
      do {
        uVar26 = *(int *)(lVar36 + lVar29 * 4 + 0x814 + lVar35 * 8) + 0xffff;
        iVar53 = 1 << (10U - (char)(uVar26 >> 0x10) & 0x1f);
        if (uVar26 < 0x10000) {
          iVar53 = 1;
        }
        *(int *)(lVar51 + lVar35 * 4) = iVar53;
        *(int *)(unaff_RDI + 0xcc) = *(int *)(unaff_RDI + 0xcc) + iVar53;
        lVar35 = lVar35 + 1;
      } while (lVar35 != 0x20);
      goto LAB_00eace1a;
    }
    pdVar30 = pdVar6;
    if (iVar53 != 2) {
      local_58 = CONCAT44(local_58._4_4_,0xff);
      _HIST_count_simple(param_3,param_1);
      lVar36 = *plVar2;
      lVar29 = 0;
      auVar45 = (undefined1  [16])0x0;
      do {
        puVar3 = (uint *)(lVar36 + lVar29 * 4);
        iVar53 = ((*puVar3 >> 8) - (uint)(*puVar3 == 0)) + 1;
        iVar54 = ((puVar3[1] >> 8) - (uint)(puVar3[1] == 0)) + 1;
        iVar55 = ((puVar3[2] >> 8) - (uint)(puVar3[2] == 0)) + 1;
        iVar56 = ((puVar3[3] >> 8) - (uint)(puVar3[3] == 0)) + 1;
        auVar52._0_4_ = auVar45._0_4_ + iVar53;
        auVar52._4_4_ = auVar45._4_4_ + iVar54;
        auVar52._8_4_ = auVar45._8_4_ + iVar55;
        auVar52._12_4_ = auVar45._12_4_ + iVar56;
        piVar24 = (int *)(lVar36 + lVar29 * 4);
        *piVar24 = iVar53;
        piVar24[1] = iVar54;
        piVar24[2] = iVar55;
        piVar24[3] = iVar56;
        lVar29 = lVar29 + 4;
        auVar45 = auVar52;
      } while (lVar29 != 0x100);
      auVar45 = phaddd(auVar52,auVar52);
      auVar45 = phaddd(auVar45,auVar45);
      *(int *)(unaff_RDI + 0xc0) = auVar45._0_4_;
      pdVar30 = &section_000000b8.reserved2;
    }
    _memcpy(pdVar30,&section_00000068.size,sVar39);
    *(undefined4 *)(unaff_RDI + 0xc4) = 0x28;
    _memset_pattern16(pdVar30,section_000000b8.segname + 0xc,sVar39);
    *(undefined4 *)(unaff_RDI + 200) = 0x35;
    uVar11 = _UNK_023e22f8;
    puVar31 = *(undefined8 **)(unaff_RDI + 0xa8);
    puVar31[0xe] = _DAT_023e22f0;
    puVar31[0xf] = uVar11;
    uVar11 = _UNK_023e22e8;
    puVar31[0xc] = _DAT_023e22e0;
    puVar31[0xd] = uVar11;
    uVar11 = _UNK_023e22d8;
    puVar31[10] = _DAT_023e22d0;
    puVar31[0xb] = uVar11;
    uVar11 = _UNK_023e22c8;
    puVar31[8] = _DAT_023e22c0;
    puVar31[9] = uVar11;
    uVar11 = _UNK_023e22b8;
    puVar31[6] = _DAT_023e22b0;
    puVar31[7] = uVar11;
    uVar11 = _UNK_023e22a8;
    puVar31[4] = _DAT_023e22a0;
    puVar31[5] = uVar11;
    uVar11 = _UNK_023e2298;
    puVar31[2] = _DAT_023e2290;
    puVar31[3] = uVar11;
    uVar11 = _UNK_023e2288;
    *puVar31 = _DAT_023e2280;
    puVar31[1] = uVar11;
    uVar26 = 0x35;
  }
  else {
    if (iVar53 != 2) {
      lVar36 = *plVar2;
      lVar29 = 0;
      auVar45 = (undefined1  [16])0x0;
      do {
        piVar24 = (int *)(lVar36 + lVar29 * 4);
        auVar44._0_4_ = auVar45._0_4_ + *piVar24;
        auVar44._4_4_ = auVar45._4_4_ + piVar24[1];
        auVar44._8_4_ = auVar45._8_4_ + piVar24[2];
        auVar44._12_4_ = auVar45._12_4_ + piVar24[3];
        lVar29 = lVar29 + 4;
        auVar45 = auVar44;
      } while (lVar29 != 0x100);
      auVar45 = phaddd(auVar44,auVar44);
      auVar45 = phaddd(auVar45,auVar45);
      uVar26 = auVar45._0_4_;
      if (0x1fff < uVar26) {
        uVar38 = 0x1f;
        if (uVar26 >> 0xc != 0) {
          for (; (uVar26 >> 0xc) >> uVar38 == 0; uVar38 = uVar38 - 1) {
          }
        }
        lVar29 = 0;
        auVar52 = pmovzxdq(ZEXT416(uVar38),ZEXT416(uVar38));
        auVar45 = (undefined1  [16])0x0;
        do {
          puVar3 = (uint *)(lVar36 + lVar29 * 4);
          lVar51 = auVar52._0_8_;
          iVar53 = (*puVar3 >> lVar51) + 1;
          iVar54 = (puVar3[1] >> lVar51) + 1;
          iVar55 = (puVar3[2] >> lVar51) + 1;
          iVar56 = (puVar3[3] >> lVar51) + 1;
          auVar46._0_4_ = auVar45._0_4_ + iVar53;
          auVar46._4_4_ = auVar45._4_4_ + iVar54;
          auVar46._8_4_ = auVar45._8_4_ + iVar55;
          auVar46._12_4_ = auVar45._12_4_ + iVar56;
          piVar24 = (int *)(lVar36 + lVar29 * 4);
          *piVar24 = iVar53;
          piVar24[1] = iVar54;
          piVar24[2] = iVar55;
          piVar24[3] = iVar56;
          lVar29 = lVar29 + 4;
          auVar45 = auVar46;
        } while (lVar29 != 0x100);
        auVar45 = phaddd(auVar46,auVar46);
        auVar45 = phaddd(auVar45,auVar45);
        uVar26 = auVar45._0_4_;
      }
      *(uint *)(unaff_RDI + 0xc0) = uVar26;
    }
    lVar36 = *(longlong *)(unaff_RDI + 0x98);
    lVar29 = 0;
    auVar45 = (undefined1  [16])0x0;
    do {
      piVar24 = (int *)(lVar36 + lVar29 * 4);
      auVar47._0_4_ = auVar45._0_4_ + *piVar24;
      auVar47._4_4_ = auVar45._4_4_ + piVar24[1];
      auVar47._8_4_ = auVar45._8_4_ + piVar24[2];
      auVar47._12_4_ = auVar45._12_4_ + piVar24[3];
      lVar29 = lVar29 + 4;
      auVar45 = auVar47;
    } while (lVar29 != 0x24);
    auVar45 = phaddd(auVar47,auVar47);
    auVar45 = phaddd(auVar45,auVar45);
    uVar26 = auVar45._0_4_;
    if (0xfff < uVar26) {
      uVar38 = 0x1f;
      if (uVar26 >> 0xb != 0) {
        for (; (uVar26 >> 0xb) >> uVar38 == 0; uVar38 = uVar38 - 1) {
        }
      }
      lVar29 = 0;
      auVar52 = pmovzxdq(ZEXT416(uVar38),ZEXT416(uVar38));
      auVar45 = (undefined1  [16])0x0;
      do {
        puVar3 = (uint *)(lVar36 + lVar29 * 4);
        lVar51 = auVar52._0_8_;
        iVar53 = (*puVar3 >> lVar51) + 1;
        iVar54 = (puVar3[1] >> lVar51) + 1;
        iVar55 = (puVar3[2] >> lVar51) + 1;
        iVar56 = (puVar3[3] >> lVar51) + 1;
        auVar48._0_4_ = auVar45._0_4_ + iVar53;
        auVar48._4_4_ = auVar45._4_4_ + iVar54;
        auVar48._8_4_ = auVar45._8_4_ + iVar55;
        auVar48._12_4_ = auVar45._12_4_ + iVar56;
        piVar24 = (int *)(lVar36 + lVar29 * 4);
        *piVar24 = iVar53;
        piVar24[1] = iVar54;
        piVar24[2] = iVar55;
        piVar24[3] = iVar56;
        lVar29 = lVar29 + 4;
        auVar45 = auVar48;
      } while (lVar29 != 0x24);
      auVar45 = phaddd(auVar48,auVar48);
      auVar45 = phaddd(auVar45,auVar45);
      uVar26 = auVar45._0_4_;
    }
    *(uint *)(unaff_RDI + 0xc4) = uVar26;
    lVar36 = *(longlong *)(unaff_RDI + 0xa0);
    uVar26 = 0;
    lVar29 = 0;
    do {
      uVar26 = uVar26 + *(int *)(lVar36 + lVar29 * 4);
      lVar29 = lVar29 + 1;
    } while (lVar29 != 0x35);
    if (0xfff < uVar26) {
      iVar53 = 0x1f;
      if (uVar26 >> 0xb != 0) {
        for (; (uVar26 >> 0xb) >> iVar53 == 0; iVar53 = iVar53 + -1) {
        }
      }
      lVar29 = 0;
      uVar26 = 0;
      do {
        uVar38 = *(uint *)(lVar36 + lVar29 * 4) >> ((byte)iVar53 & 0x1f);
        uVar26 = uVar26 + uVar38 + 1;
        *(uint *)(lVar36 + lVar29 * 4) = uVar38 + 1;
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x35);
    }
    *(uint *)(unaff_RDI + 200) = uVar26;
    lVar36 = *(longlong *)(unaff_RDI + 0xa8);
    lVar29 = 0;
    auVar45 = (undefined1  [16])0x0;
    do {
      piVar24 = (int *)(lVar36 + lVar29 * 4);
      auVar49._0_4_ = auVar45._0_4_ + *piVar24;
      auVar49._4_4_ = auVar45._4_4_ + piVar24[1];
      auVar49._8_4_ = auVar45._8_4_ + piVar24[2];
      auVar49._12_4_ = auVar45._12_4_ + piVar24[3];
      lVar29 = lVar29 + 4;
      auVar45 = auVar49;
    } while (lVar29 != 0x20);
    auVar45 = phaddd(auVar49,auVar49);
    auVar45 = phaddd(auVar45,auVar45);
    uVar26 = auVar45._0_4_;
    if (0xfff < uVar26) {
      uVar38 = 0x1f;
      if (uVar26 >> 0xb != 0) {
        for (; (uVar26 >> 0xb) >> uVar38 == 0; uVar38 = uVar38 - 1) {
        }
      }
      lVar29 = 0;
      auVar52 = pmovzxdq(ZEXT416(uVar38),ZEXT416(uVar38));
      auVar45 = (undefined1  [16])0x0;
      do {
        puVar3 = (uint *)(lVar36 + lVar29 * 4);
        lVar51 = auVar52._0_8_;
        iVar53 = (*puVar3 >> lVar51) + 1;
        iVar54 = (puVar3[1] >> lVar51) + 1;
        iVar55 = (puVar3[2] >> lVar51) + 1;
        iVar56 = (puVar3[3] >> lVar51) + 1;
        auVar50._0_4_ = auVar45._0_4_ + iVar53;
        auVar50._4_4_ = auVar45._4_4_ + iVar54;
        auVar50._8_4_ = auVar45._8_4_ + iVar55;
        auVar50._12_4_ = auVar45._12_4_ + iVar56;
        piVar24 = (int *)(lVar36 + lVar29 * 4);
        *piVar24 = iVar53;
        piVar24[1] = iVar54;
        piVar24[2] = iVar55;
        piVar24[3] = iVar56;
        lVar29 = lVar29 + 4;
        auVar45 = auVar50;
      } while (lVar29 != 0x20);
      auVar45 = phaddd(auVar50,auVar50);
      auVar45 = phaddd(auVar45,auVar45);
      uVar26 = auVar45._0_4_;
    }
  }
  *(uint *)(unaff_RDI + 0xcc) = uVar26;
LAB_00eace1a:
  lVar36 = param_3 + (longlong)param_1;
  FUN_00eade89();
  puVar31 = (undefined8 *)
            ((ulonglong)((undefined8 *)((ulonglong)uVar33 + lVar20) == param_1) + (longlong)param_1)
  ;
  local_90 = param_1;
  if (puVar31 < puVar19) {
    uVar33 = 4 - (uVar25 == 0);
    pcVar8 = *(code **)(&DAT_025934f0 + uVar32 * 8 + (ulonglong)param_4 * 0x20);
    puVar1 = (undefined8 *)(lVar36 - 0x20);
    local_cc = 0;
    local_70 = param_1;
    do {
      iVar54 = (int)puVar31;
      iVar53 = iVar54 - (int)local_70;
      uVar15 = (*pcVar8)(puVar31,&local_d4,lVar36,param_2);
      local_58 = CONCAT44(local_58._4_4_,uVar15);
      local_90._0_4_ = (int)param_1;
      FUN_00eadd34(iVar54 - (int)local_90,&local_58,(int)lVar36 - iVar54);
      uVar32 = local_58;
      uVar28 = local_58 & 0xffffffff;
      if (uVar28 == 0) {
        puVar31 = (undefined8 *)((longlong)puVar31 + 1);
      }
      else {
        lVar20 = 0;
        do {
          iVar54 = *(int *)((longlong)param_2 + lVar20 * 4);
          piVar7[lVar20 + 4] = iVar54;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 3);
        piVar7[2] = 0;
        piVar7[3] = iVar53;
        iVar54 = FUN_00eaddd8(iVar54,2);
        *piVar7 = iVar54;
        uVar32 = (ulonglong)((int)uVar32 - 1);
        uVar25 = pdVar6[uVar32 * 2 + 1];
        if (local_d0 < uVar25) {
          dVar41 = pdVar6[uVar32 * 2];
          uVar32 = 0;
LAB_00ead70f:
          local_50[0] = piVar7[uVar32 * 7 + 6];
          local_58 = *(ulonglong *)(piVar7 + uVar32 * 7 + 4);
          uVar28 = local_58;
          if (dVar41 < 4) {
            uVar26 = (dVar41 + (iVar53 == 0)) - 1;
            if (uVar26 == 3) {
              iVar54 = (int)local_58 + -1;
LAB_00ead79d:
              piVar24 = local_50;
              if (1 < uVar26) {
                piVar24 = (int *)((longlong)&local_58 + 4);
              }
              local_50[0] = *piVar24;
              goto LAB_00ead7b5;
            }
            if (uVar26 != 0) {
              iVar54 = local_50[(ulonglong)uVar26 - 2];
              goto LAB_00ead79d;
            }
          }
          else {
            local_58._4_4_ = (int)(local_58 >> 0x20);
            iVar54 = dVar41 - 3;
            local_50[0] = local_58._4_4_;
LAB_00ead7b5:
            local_58 = CONCAT44((int)local_58,iVar54);
            uVar28 = local_58;
          }
          local_58 = uVar28;
          *param_2 = local_58;
          *(int *)(param_2 + 1) = local_50[0];
        }
        else {
          iVar55 = FUN_00eaddd8(uVar25,2);
          piVar24 = piVar7 + 7;
          lVar20 = (ulonglong)uVar33 - 1;
          do {
            *piVar24 = 0x40000000;
            piVar24 = piVar24 + 7;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          uVar34 = 0;
          uVar32 = (ulonglong)uVar33;
          do {
            uVar25 = pdVar6[uVar34 * 2 + 1];
            if ((uint)uVar32 <= uVar25) {
              uVar26 = pdVar6[uVar34 * 2];
              uVar38 = 0x1f;
              if (uVar26 != 0) {
                for (; uVar26 >> uVar38 == 0; uVar38 = uVar38 - 1) {
                }
              }
              iVar56 = *(int *)(unaff_RDI + 0xe0);
              uVar40 = (uint)uVar32 * 0x100 - 0x200;
              do {
                iVar16 = (int)uVar32;
                if (iVar56 == 1) {
                  iVar27 = 0x1f;
                  if (iVar16 - 2U != 0) {
                    for (; iVar16 - 2U >> iVar27 == 0; iVar27 = iVar27 + -1) {
                    }
                  }
                  iVar27 = (iVar27 + uVar38) * 0x100 + (uVar40 >> ((byte)iVar27 & 0x1f)) + 0x1000;
                }
                else {
                  uVar42 = iVar16 - 3;
                  uVar18 = *(int *)(*(longlong *)(unaff_RDI + 0xa8) + (ulonglong)uVar38 * 4) + 1;
                  iVar27 = 0x1f;
                  if (uVar18 != 0) {
                    for (; uVar18 >> iVar27 == 0; iVar27 = iVar27 + -1) {
                    }
                  }
                  if (uVar42 < 0x80) {
                    uVar42 = (uint)(byte)(&DAT_023e23b0)[uVar42];
                  }
                  else {
                    uVar43 = 0x1f;
                    if (uVar42 != 0) {
                      for (; uVar42 >> uVar43 == 0; uVar43 = uVar43 - 1) {
                      }
                    }
                    uVar42 = (uVar43 ^ 0xffffffe0) + 0x44;
                  }
                  uVar43 = *(int *)(*(longlong *)(unaff_RDI + 0xa0) + (ulonglong)uVar42 * 4) + 1;
                  iVar10 = 0x1f;
                  if (uVar43 != 0) {
                    for (; uVar43 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                    }
                  }
                  iVar27 = ((*(int *)(unaff_RDI + 0xdc) + *(int *)(unaff_RDI + 0xd8)) -
                           ((uVar18 * 0x100 >> ((byte)iVar27 & 0x1f)) +
                           (uVar43 * 0x100 >> ((byte)iVar10 & 0x1f)))) +
                           (((byte)(&DAT_023e2370)[uVar42] + uVar38) - (iVar27 + iVar10)) * 0x100 +
                           0x33;
                }
                piVar7[uVar32 * 7 + 2] = iVar16;
                piVar7[uVar32 * 7 + 1] = uVar26;
                piVar7[uVar32 * 7 + 3] = iVar53;
                piVar7[uVar32 * 7] = iVar27 + iVar55 + iVar54;
                uVar32 = (ulonglong)(iVar16 + 1U);
                uVar40 = uVar40 + 0x100;
              } while (iVar16 + 1U <= uVar25);
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar28);
          uVar25 = (int)uVar32 - 1;
          uVar32 = (ulonglong)uVar25;
          if (uVar25 == 0) {
            uVar28 = 0;
          }
          else {
            uVar34 = 1;
            do {
              iVar54 = (int)uVar34;
              uVar21 = (ulonglong)(iVar54 - 1);
              uVar28 = uVar21 * 9;
              iVar53 = 1;
              if (piVar7[uVar21 * 7 + 2] == 0) {
                iVar53 = piVar7[uVar21 * 7 + 3] + 1;
              }
              puVar22 = (undefined8 *)(uVar34 + (longlong)puVar31);
              iVar55 = 0x800;
              if ((*(int *)(unaff_RDI + 0xf0) != 2) &&
                 (iVar55 = 0x600, *(int *)(unaff_RDI + 0xe0) != 1)) {
                uVar25 = *(int *)(*(longlong *)(unaff_RDI + 0x90) +
                                 (ulonglong)*(byte *)((longlong)puVar22 + -1) * 4) + 1;
                iVar55 = 0x1f;
                if (uVar25 != 0) {
                  for (; uVar25 >> iVar55 == 0; iVar55 = iVar55 + -1) {
                  }
                }
                uVar26 = *(int *)(unaff_RDI + 0xd0) - 0x100;
                uVar28 = (ulonglong)(uint)(iVar55 * 0x100);
                uVar25 = (uVar25 * 0x100 >> ((byte)iVar55 & 0x1f)) + iVar55 * 0x100;
                if (uVar26 < uVar25) {
                  uVar25 = uVar26;
                }
                iVar55 = *(int *)(unaff_RDI + 0xd0) - uVar25;
              }
              iVar56 = piVar7[uVar21 * 7];
              iVar27 = FUN_00eaddd8(uVar28,2);
              iVar16 = FUN_00eaddd8();
              iVar16 = (iVar27 + iVar55 + iVar56) - iVar16;
              piVar24 = piVar7 + uVar34 * 7 + 2;
              iVar55 = piVar7[uVar34 * 7];
              if (iVar55 < iVar16) {
                iVar16 = iVar55;
                if (*piVar24 == 0) goto LAB_00ead2f0;
                uVar28 = (ulonglong)(uint)(iVar54 - *piVar24);
                uVar25 = piVar7[uVar34 * 7 + 1];
                local_50[0] = piVar7[uVar28 * 7 + 6];
                local_58 = *(ulonglong *)(piVar7 + uVar28 * 7 + 4);
                uVar28 = local_58;
                if (uVar25 < 4) {
                  uVar25 = (uVar25 + (piVar7[uVar34 * 7 + 3] == 0)) - 1;
                  if (uVar25 == 3) {
                    iVar53 = (int)local_58 + -1;
LAB_00ead359:
                    piVar23 = local_50;
                    if (1 < uVar25) {
                      piVar23 = (int *)((longlong)&local_58 + 4);
                    }
                    local_50[0] = *piVar23;
                    goto LAB_00ead370;
                  }
                  if (uVar25 != 0) {
                    iVar53 = local_50[(ulonglong)uVar25 - 2];
                    goto LAB_00ead359;
                  }
                }
                else {
                  local_58._4_4_ = (int)(local_58 >> 0x20);
                  iVar53 = uVar25 - 3;
                  local_50[0] = local_58._4_4_;
LAB_00ead370:
                  local_58 = CONCAT44((int)local_58,iVar53);
                  uVar28 = local_58;
                }
                local_58 = uVar28;
                *(ulonglong *)(piVar7 + uVar34 * 7 + 4) = local_58;
                piVar7[uVar34 * 7 + 6] = local_50[0];
                bVar14 = false;
              }
              else {
                *piVar24 = 0;
                piVar7[uVar34 * 7 + 1] = 0;
                piVar7[uVar34 * 7 + 3] = iVar53;
                piVar7[uVar34 * 7] = iVar16;
LAB_00ead2f0:
                piVar7[uVar34 * 7 + 6] = piVar7[uVar21 * 7 + 6];
                *(undefined8 *)(piVar7 + uVar34 * 7 + 4) = *(undefined8 *)(piVar7 + uVar21 * 7 + 4);
                bVar14 = true;
              }
              if (puVar22 <= puVar19) {
                uVar28 = uVar34;
                if (iVar54 == (int)uVar32) break;
                iVar53 = 0;
                if (bVar14) {
                  iVar53 = piVar7[uVar34 * 7 + 3];
                }
                iVar55 = FUN_00eaddd8(0,2);
                uVar15 = (*pcVar8)(puVar22,&local_d4,lVar36,piVar7 + uVar34 * 7 + 4);
                local_58 = CONCAT44(local_58._4_4_,uVar15);
                FUN_00eadd34((int)puVar22 - (int)local_90,&local_58,(int)lVar36 - (int)puVar22);
                if ((local_58 & 0xffffffff) != 0) {
                  uVar25 = pdVar6[(ulonglong)((int)local_58 - 1U) * 2 + 1];
                  if ((local_d0 < uVar25) || (0xfff < iVar54 + uVar25)) {
                    iVar55 = 0;
                    if (*piVar24 == 0) {
                      iVar55 = piVar7[uVar34 * 7 + 3];
                    }
                    dVar41 = pdVar6[(ulonglong)((int)local_58 - 1U) * 2];
                    uVar26 = iVar54 - iVar55;
                    if (0x1000 < (uint)(iVar54 - iVar55)) {
                      uVar26 = 0;
                    }
                    uVar32 = (ulonglong)uVar26;
                    goto LAB_00ead70b;
                  }
                  uVar28 = 0;
                  do {
                    uVar25 = uVar33;
                    if (uVar28 != 0) {
                      uVar25 = pdVar6[uVar28 * 2 + -1] + 1;
                    }
                    uVar26 = pdVar6[uVar28 * 2 + 1];
                    if (uVar25 <= uVar26) {
                      uVar38 = pdVar6[uVar28 * 2];
                      uVar40 = 0x1f;
                      if (uVar38 != 0) {
                        for (; uVar38 >> uVar40 == 0; uVar40 = uVar40 - 1) {
                        }
                      }
                      iVar56 = *(int *)(unaff_RDI + 0xe0);
                      uVar42 = uVar26 + iVar54;
                      do {
                        if (iVar56 == 1) {
                          uVar18 = uVar26 - 2;
                          iVar27 = 0x1f;
                          if (uVar18 != 0) {
                            for (; uVar18 >> iVar27 == 0; iVar27 = iVar27 + -1) {
                            }
                          }
                          iVar27 = (uVar18 * 0x100 >> ((byte)iVar27 & 0x1f)) +
                                   (iVar27 + uVar40) * 0x100 + 0x1000;
                        }
                        else {
                          uVar18 = uVar26 - 3;
                          uVar43 = *(int *)(*(longlong *)(unaff_RDI + 0xa8) + (ulonglong)uVar40 * 4)
                                   + 1;
                          iVar27 = 0x1f;
                          if (uVar43 != 0) {
                            for (; uVar43 >> iVar27 == 0; iVar27 = iVar27 + -1) {
                            }
                          }
                          if (uVar18 < 0x80) {
                            uVar18 = (uint)(byte)(&DAT_023e23b0)[uVar18];
                          }
                          else {
                            uVar17 = 0x1f;
                            if (uVar18 != 0) {
                              for (; uVar18 >> uVar17 == 0; uVar17 = uVar17 - 1) {
                              }
                            }
                            uVar18 = (uVar17 ^ 0xffffffe0) + 0x44;
                          }
                          uVar17 = *(int *)(*(longlong *)(unaff_RDI + 0xa0) + (ulonglong)uVar18 * 4)
                                   + 1;
                          iVar10 = 0x1f;
                          if (uVar17 != 0) {
                            for (; uVar17 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                            }
                          }
                          iVar27 = ((*(int *)(unaff_RDI + 0xdc) + *(int *)(unaff_RDI + 0xd8)) -
                                   ((uVar43 * 0x100 >> ((byte)iVar27 & 0x1f)) +
                                   (uVar17 * 0x100 >> ((byte)iVar10 & 0x1f)))) +
                                   (((byte)(&DAT_023e2370)[uVar18] + uVar40) - (iVar27 + iVar10)) *
                                   0x100 + 0x33;
                        }
                        iVar27 = iVar27 + iVar55 + iVar16;
                        uVar34 = (ulonglong)(uVar26 + iVar54);
                        if ((uint)uVar32 < uVar26 + iVar54) {
                          lVar20 = uVar42 - uVar32;
                          piVar24 = piVar7 + 7 + uVar32 * 7;
                          do {
                            *piVar24 = 0x40000000;
                            piVar24 = piVar24 + 7;
                            lVar20 = lVar20 + -1;
                          } while (lVar20 != 0);
                          uVar32 = (ulonglong)uVar42;
LAB_00ead616:
                          piVar7[uVar34 * 7 + 2] = uVar26;
                          piVar7[uVar34 * 7 + 1] = uVar38;
                          piVar7[uVar34 * 7 + 3] = iVar53;
                          piVar7[uVar34 * 7] = iVar27;
                        }
                        else if (iVar27 < piVar7[uVar34 * 7]) goto LAB_00ead616;
                        uVar26 = uVar26 - 1;
                        uVar42 = uVar42 - 1;
                      } while (uVar25 <= uVar26);
                    }
                    uVar28 = uVar28 + 1;
                  } while (uVar28 != (local_58 & 0xffffffff));
                }
              }
              uVar34 = (ulonglong)(iVar54 + 1U);
              uVar28 = uVar32;
            } while (iVar54 + 1U <= (uint)uVar32);
          }
          local_cc = piVar7[uVar28 * 7];
          dVar41 = piVar7[uVar28 * 7 + 1];
          uVar25 = piVar7[uVar28 * 7 + 2];
          iVar53 = piVar7[uVar28 * 7 + 3];
          local_40 = piVar7[uVar28 * 7 + 6];
          local_48 = *(undefined8 *)(piVar7 + uVar28 * 7 + 4);
          uVar32 = (ulonglong)((uint)uVar28 - (iVar53 + uVar25));
          if ((uint)uVar28 < iVar53 + uVar25) {
            uVar32 = 0;
          }
LAB_00ead70b:
          if (uVar25 != 0) goto LAB_00ead70f;
          *(int *)(param_2 + 1) = piVar7[uVar32 * 7 + 6];
          *param_2 = *(ulonglong *)(piVar7 + uVar32 * 7 + 4);
          uVar25 = 0;
        }
        uVar26 = (int)uVar32 + 1;
        uVar28 = (ulonglong)uVar26;
        piVar7[uVar28 * 7] = local_cc;
        piVar7[uVar28 * 7 + 1] = dVar41;
        piVar7[uVar28 * 7 + 2] = uVar25;
        piVar7[uVar28 * 7 + 3] = iVar53;
        *(undefined8 *)(piVar7 + uVar28 * 7 + 4) = local_48;
        piVar7[uVar28 * 7 + 6] = local_40;
        uVar28 = uVar32;
        if ((int)uVar32 == 0) {
          uVar25 = 1;
          goto LAB_00ead878;
        }
        do {
          uVar40 = (uint)uVar32;
          uVar38 = piVar7[uVar32 * 7 + 3] + piVar7[uVar32 * 7 + 2];
          uVar25 = (uint)uVar28;
          uVar11 = *(undefined8 *)(piVar7 + uVar32 * 7);
          uVar12 = *(undefined8 *)(piVar7 + uVar32 * 7 + 2);
          uVar13 = *(undefined8 *)(piVar7 + uVar32 * 7 + 3 + 2);
          *(undefined8 *)(piVar7 + uVar28 * 7 + 3) = *(undefined8 *)(piVar7 + uVar32 * 7 + 3);
          *(undefined8 *)(piVar7 + uVar28 * 7 + 3 + 2) = uVar13;
          *(undefined8 *)(piVar7 + uVar28 * 7) = uVar11;
          *(undefined8 *)(piVar7 + uVar28 * 7 + 2) = uVar12;
          uVar28 = (ulonglong)(uVar25 - 1);
          uVar32 = (ulonglong)(uVar40 - uVar38);
          if (uVar38 > uVar40) {
            uVar32 = 0;
          }
        } while (uVar38 <= uVar40 && uVar40 - uVar38 != 0);
        for (; uVar25 <= uVar26; uVar25 = uVar25 + 1) {
LAB_00ead878:
          uVar32 = (ulonglong)uVar25;
          uVar38 = piVar7[uVar32 * 7 + 3];
          uVar28 = (ulonglong)uVar38;
          uVar40 = piVar7[uVar32 * 7 + 2];
          if ((ulonglong)uVar40 == 0) {
            puVar31 = (undefined8 *)(uVar28 + (longlong)local_70);
          }
          else {
            uVar42 = piVar7[uVar32 * 7 + 1];
            if (*(int *)(unaff_RDI + 0xf0) != 2) {
              if (uVar28 != 0) {
                lVar20 = *plVar2;
                uVar32 = 0;
                do {
                  piVar24 = (int *)(lVar20 + (ulonglong)*(byte *)((longlong)local_70 + uVar32) * 4);
                  *piVar24 = *piVar24 + 2;
                  uVar32 = uVar32 + 1;
                } while (uVar28 != uVar32);
              }
              *(int *)(unaff_RDI + 0xc0) = *(int *)(unaff_RDI + 0xc0) + uVar38 * 2;
            }
            if (uVar38 < 0x40) {
              uVar18 = (uint)(byte)(&DAT_023e2330)[uVar28];
            }
            else {
              uVar18 = 0x1f;
              if (uVar38 != 0) {
                for (; uVar38 >> uVar18 == 0; uVar18 = uVar18 - 1) {
                }
              }
              uVar18 = (uVar18 ^ 0xffffffe0) + 0x33;
            }
            piVar24 = (int *)(*(longlong *)(unaff_RDI + 0x98) + (ulonglong)uVar18 * 4);
            *piVar24 = *piVar24 + 1;
            *(int *)(unaff_RDI + 0xc4) = *(int *)(unaff_RDI + 0xc4) + 1;
            uVar18 = 0x1f;
            if (uVar42 != 0) {
              for (; uVar42 >> uVar18 == 0; uVar18 = uVar18 - 1) {
              }
            }
            piVar24 = (int *)(*(longlong *)(unaff_RDI + 0xa8) + (ulonglong)uVar18 * 4);
            *piVar24 = *piVar24 + 1;
            *(int *)(unaff_RDI + 0xcc) = *(int *)(unaff_RDI + 0xcc) + 1;
            uVar18 = uVar40 - 3;
            if (uVar18 < 0x80) {
              uVar18 = (uint)(byte)(&DAT_023e23b0)[uVar18];
            }
            else {
              uVar43 = 0x1f;
              if (uVar18 != 0) {
                for (; uVar18 >> uVar43 == 0; uVar43 = uVar43 - 1) {
                }
              }
              uVar18 = (uVar43 ^ 0xffffffe0) + 0x44;
            }
            piVar24 = (int *)(*(longlong *)(unaff_RDI + 0xa0) + (ulonglong)uVar18 * 4);
            *piVar24 = *piVar24 + 1;
            *(int *)(unaff_RDI + 200) = *(int *)(unaff_RDI + 200) + 1;
            puVar31 = (undefined8 *)((longlong)local_70 + uVar28);
            if (puVar1 < puVar31) {
              puVar9 = (undefined8 *)unaff_RSI[3];
              puVar37 = local_70;
              puVar22 = puVar9;
              if (local_70 <= puVar1) {
                puVar22 = (undefined8 *)((longlong)puVar9 + ((longlong)puVar1 - (longlong)local_70))
                ;
                uVar11 = local_70[1];
                *puVar9 = *local_70;
                puVar9[1] = uVar11;
                puVar37 = puVar1;
                if (0x10 < (longlong)puVar1 - (longlong)local_70) {
                  lVar20 = 0x10;
                  do {
                    uVar11 = ((undefined8 *)((longlong)local_70 + lVar20))[1];
                    puVar4 = (undefined8 *)((longlong)puVar9 + lVar20);
                    *puVar4 = *(undefined8 *)((longlong)local_70 + lVar20);
                    puVar4[1] = uVar11;
                    puVar5 = (undefined8 *)((longlong)local_70 + lVar20 + 0x10);
                    uVar11 = puVar5[1];
                    puVar4[2] = *puVar5;
                    puVar4[3] = uVar11;
                    lVar20 = lVar20 + 0x20;
                  } while (puVar4 + 4 < puVar22);
                }
              }
              if (puVar37 < puVar31) {
                lVar20 = 0;
                do {
                  *(undefined1 *)((longlong)puVar22 + lVar20) =
                       *(undefined1 *)((longlong)puVar37 + lVar20);
                  lVar20 = lVar20 + 1;
                } while ((longlong)puVar31 - (longlong)puVar37 != lVar20);
              }
LAB_00eada32:
              unaff_RSI[3] = unaff_RSI[3] + uVar28;
              if (0xffff < uVar38) {
                *(undefined4 *)(unaff_RSI + 9) = 1;
                *(int *)((longlong)unaff_RSI + 0x4c) =
                     (int)((ulonglong)(unaff_RSI[1] - *unaff_RSI) >> 3);
              }
            }
            else {
              puVar31 = (undefined8 *)unaff_RSI[3];
              uVar11 = local_70[1];
              *puVar31 = *local_70;
              puVar31[1] = uVar11;
              lVar20 = unaff_RSI[3];
              if (uVar38 < 0x11) {
                unaff_RSI[3] = lVar20 + uVar28;
              }
              else {
                uVar11 = local_70[3];
                *(undefined8 *)(lVar20 + 0x10) = local_70[2];
                *(undefined8 *)(lVar20 + 0x18) = uVar11;
                if (0x20 < uVar38) {
                  lVar29 = 0;
                  do {
                    puVar22 = (undefined8 *)((longlong)local_70 + lVar29 + 0x20);
                    uVar11 = puVar22[1];
                    puVar31 = (undefined8 *)(lVar20 + 0x20 + lVar29);
                    *puVar31 = *puVar22;
                    puVar31[1] = uVar11;
                    puVar22 = (undefined8 *)((longlong)local_70 + lVar29 + 0x30);
                    uVar11 = puVar22[1];
                    puVar31[2] = *puVar22;
                    puVar31[3] = uVar11;
                    lVar29 = lVar29 + 0x20;
                  } while (puVar31 + 4 < (undefined8 *)(lVar20 + uVar28));
                  goto LAB_00eada32;
                }
                unaff_RSI[3] = unaff_RSI[3] + uVar28;
              }
            }
            puVar3 = (uint *)unaff_RSI[1];
            *(short *)(puVar3 + 1) = (short)uVar38;
            *puVar3 = uVar42;
            uVar32 = (ulonglong)uVar40 - 3;
            if (0xffff < uVar32) {
              *(undefined4 *)(unaff_RSI + 9) = 2;
              *(int *)((longlong)unaff_RSI + 0x4c) =
                   (int)((ulonglong)((longlong)puVar3 - *unaff_RSI) >> 3);
            }
            *(short *)((longlong)puVar3 + 6) = (short)uVar32;
            unaff_RSI[1] = (longlong)(puVar3 + 2);
            local_70 = (undefined8 *)((longlong)local_70 + (ulonglong)(uVar40 + uVar38));
            puVar31 = local_70;
          }
        }
        FUN_00eade89();
      }
    } while (puVar31 < puVar19);
    local_90 = local_70;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar36 - (longlong)local_90;
}



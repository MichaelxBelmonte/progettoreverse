// Function: FUN_00f37b90
// Address: 00f37b90
// Size: 13469 bytes
// Class: Unknown


uint FUN_00f37b90(int param_1,undefined8 param_2,mbstate_t *param_3,longlong param_4,uint param_5,
                 uint *param_6)

{
  dword *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  mbstate_t *pmVar21;
  byte *pbVar22;
  undefined4 extraout_var;
  uint *puVar23;
  undefined4 extraout_var_00;
  byte bVar24;
  uint uVar25;
  mbstate_t *pmVar26;
  mbstate_t *pmVar27;
  longlong lVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  longlong lVar34;
  byte *pbVar35;
  mbstate_t *pmVar36;
  mbstate_t *pmVar37;
  undefined *puVar38;
  undefined *puVar39;
  byte bVar40;
  int iVar41;
  mbstate_t *pmVar42;
  undefined7 uVar44;
  undefined7 uVar45;
  mbstate_t *pmVar43;
  uint uVar46;
  mbstate_t *unaff_RSI;
  uint uVar47;
  mbstate_t *unaff_RDI;
  ulonglong uVar48;
  longlong *plVar49;
  size_t sVar50;
  ulonglong uVar51;
  mbstate_t *pmVar52;
  mbstate_t *pmVar53;
  longlong lVar54;
  uint uVar55;
  uint uVar56;
  int *piVar57;
  int *piVar58;
  int iVar59;
  mbstate_t *pmVar60;
  mbstate_t *pmVar61;
  longlong *plVar62;
  longlong lVar63;
  int local_res8;
  int iStackX_c;
  uint uStackX_10;
  uint uStackX_14;
  int local_res18;
  uint uStackX_1c;
  uint uStackX_20;
  uint uStackX_24;
  undefined8 uStack_1280;
  undefined1 auStack_1278 [12];
  uint uStack_126c;
  ulonglong local_1268;
  uint *local_1260;
  longlong local_1258;
  uint local_124c;
  mbstate_t *local_1248 [2];
  int *local_1238;
  longlong local_1230;
  uint local_1224;
  ulonglong local_1220;
  undefined8 local_1218;
  ulonglong local_1210;
  mbstate_t *local_1208;
  dword *local_1200;
  longlong local_11f8;
  undefined8 local_11f0;
  uint local_11e8;
  uint local_11e4;
  uint local_11e0;
  uint local_11dc;
  uint local_11d8;
  uint local_11d4;
  uint local_11d0;
  int local_11cc;
  longlong *local_11c8;
  mbstate_t *local_11c0;
  longlong *local_11b8;
  ulonglong local_11b0;
  uint *local_11a8;
  ulonglong local_11a0;
  uint local_1194;
  mbstate_t *local_1190;
  undefined8 local_1188;
  mbstate_t *local_1180;
  mbstate_t *local_1178;
  ulonglong local_1170;
  mbstate_t *local_1160;
  mbstate_t *local_1140;
  uint local_1134;
  size_t local_111c;
  mbstate_t *local_1100;
  mbstate_t *local_10f8;
  uint local_10e0;
  mbstate_t local_10d8 [32];
  mbstate_t local_d8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_10e0 = 0;
  uVar56 = local_10e0;
  local_111c = 1;
  if (param_3 == (mbstate_t *)0x0) {
    pmVar21 = (mbstate_t *)0x0;
  }
  else {
    pmVar21 = (mbstate_t *)(ulonglong)*(uint *)(unaff_RDI->__mbstate8 + 0x48);
  }
  local_1194 = *(uint *)(unaff_RDI->__mbstate8 + 0x58);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_d8._112_8_ = 0;
  local_d8._120_8_ = 0;
  local_d8._96_8_ = 0;
  local_d8._104_8_ = 0;
  local_d8._80_8_ = 0;
  local_d8._88_8_ = 0;
  local_d8._64_8_ = 0;
  local_d8._72_8_ = 0;
  local_d8._48_8_ = 0;
  local_d8._56_8_ = 0;
  local_d8._32_8_ = 0;
  local_d8._40_8_ = 0;
  uVar6 = (uint)pmVar21;
  uVar17 = *(uint *)(unaff_RDI->__mbstate8 + 0x54);
  lVar7 = -((longlong)(int)((uVar17 * 2 + 1) * uVar6 * 4 + uVar17 * 0x120 + 0x15) + 0xfU &
           0xfffffffffffffff0);
  piVar58 = (int *)(auStack_1278 + lVar7);
  local_1258 = param_4;
  local_11cc = param_1;
  local_1188 = param_2;
  local_1178 = param_3;
  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf37c79;
  ___bzero();
  sVar50 = (size_t)param_3;
  pmVar42 = (mbstate_t *)(longlong)(int)(uVar6 * 4);
  uVar25 = 8 - ((uint)(pmVar42->__mbstate8 + (longlong)piVar58) & 4);
  uVar51 = (ulonglong)((uint)(((longlong)pmVar42 << 0x3d) >> 0x3f) & uVar25);
  pmVar53 = (mbstate_t *)(pmVar42->__mbstate8 + (longlong)piVar58 + uVar51);
  lVar54 = (longlong)(int)(uVar17 * 0x90);
  uVar48 = (ulonglong)((uint)(pmVar53->__mbstate8 + lVar54) & 7);
  lVar63 = 8 - uVar48;
  if (uVar48 == 0) {
    lVar63 = 0;
  }
  pmVar60 = (mbstate_t *)(pmVar53->__mbstate8 + lVar54 + lVar63);
  uVar17 = *(uint *)(unaff_RDI->__mbstate8 + 0x54);
  pmVar27 = pmVar53;
  if ((int)uVar17 < 1) {
    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf37d39;
    _memset_pattern16((void *)(ulonglong)uVar25,&MACH_HEADER.sizeofcmds,sVar50);
    pmVar42 = pmVar53;
  }
  else {
    uVar48 = (ulonglong)((uint)(pmVar60->__mbstate8 + lVar54) & 7);
    lVar34 = 8 - uVar48;
    if (uVar48 == 0) {
      lVar34 = 0;
    }
    pbVar22 = (byte *)(pmVar60->__mbstate8 + lVar54 + lVar34);
    pbVar35 = (byte *)((ulonglong)uVar17 - 1);
    sVar50 = uVar17 & 3;
    uVar48 = (ulonglong)sVar50;
    if ((byte *)((longlong)&MACH_HEADER.magic + 2) < pbVar35) {
      lVar28 = (longlong)piVar58 + uVar51 + 0x1c0;
      pbVar35 = (byte *)((longlong)piVar58 + lVar63 + uVar51 + lVar54 + 0x10);
      lVar34 = lVar34 + lVar63 + uVar51 + lVar54 * 2 + (longlong)piVar58;
      pmVar37 = (mbstate_t *)0x0;
      do {
        *(char **)(lVar28 + -0x1b0 + (longlong)pmVar42) = pmVar42->__mbstate8 + lVar34;
        pbVar22 = pbVar22 + (longlong)pmVar42->__mbstate8;
        *(byte **)(pbVar35 + (longlong)pmVar42) = pbVar22;
        pbVar22 = pbVar22 + (longlong)pmVar42->__mbstate8;
        *(byte **)(lVar28 + -0x120 + (longlong)pmVar42) = pbVar22;
        pbVar22 = pbVar22 + (longlong)pmVar42->__mbstate8;
        *(byte **)(pbVar35 + 0x90 + (longlong)pmVar42) = pbVar22;
        pbVar22 = pbVar22 + (longlong)pmVar42->__mbstate8;
        *(byte **)(lVar28 + -0x90 + (longlong)pmVar42) = pbVar22;
        pbVar22 = pbVar22 + (longlong)pmVar42->__mbstate8;
        *(byte **)(pbVar35 + 0x120 + (longlong)pmVar42) = pbVar22;
        pbVar22 = pbVar22 + (longlong)pmVar42->__mbstate8;
        *(byte **)(lVar28 + (longlong)pmVar42) = pbVar22;
        *(byte **)(pbVar35 + 0x1b0 + (longlong)pmVar42) = pbVar22 + (longlong)pmVar42->__mbstate8;
        pbVar22 = pbVar22 + (longlong)pmVar42->__mbstate8 + (longlong)pmVar42->__mbstate8;
        pmVar37 = (mbstate_t *)(pmVar37->__mbstate8 + 4);
        lVar28 = lVar28 + 0x240;
        pbVar35 = pbVar35 + 0x240;
        lVar34 = lVar34 + (longlong)pmVar42 * 8;
      } while ((mbstate_t *)(ulonglong)(uVar17 & 0xfffffffc) != pmVar37);
      pbVar22 = (byte *)(pmVar42->__mbstate8 + lVar34);
      pmVar27 = (mbstate_t *)(ulonglong)(uVar17 & 0xfffffffc);
    }
    else {
      pmVar37 = (mbstate_t *)0x0;
    }
    if (uVar48 != 0) {
      pbVar35 = (byte *)(pmVar42->__mbstate8 + uVar51 + lVar63 + (longlong)pmVar37 * 0x90 + lVar54 +
                         (longlong)piVar58 + 0x10);
      sVar50 = sVar50 * 0x10;
      lVar34 = 0;
      do {
        *(byte **)(pmVar42->__mbstate8 + ((longlong)pmVar37 * 0x90 | uVar51) + (longlong)piVar58 +
                  lVar34 + 0x10) = pbVar22;
        *(byte **)(pbVar35 + lVar34) = pbVar22 + (longlong)pmVar42->__mbstate8;
        pbVar22 = pbVar22 + (longlong)pmVar42->__mbstate8 + (longlong)pmVar42->__mbstate8;
        lVar34 = lVar34 + 0x90;
      } while (uVar48 * 0x90 != lVar34);
    }
    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf37e72;
    _memset_pattern16(pbVar35,&MACH_HEADER.sizeofcmds,sVar50);
    if (uVar17 == 1) {
      uVar48 = 0;
    }
    else {
      pbVar35 = (byte *)(pmVar42->__mbstate8 + uVar51 + (longlong)piVar58 + 0x98);
      uVar48 = 0;
      do {
        pbVar22 = pbVar35 + lVar63 + lVar54 + -0x90;
        pbVar22[0] = 0xfe;
        pbVar22[1] = 0xff;
        pbVar22[2] = 0xff;
        pbVar22[3] = 0xff;
        pbVar35[-0x90] = 0xfe;
        pbVar35[-0x8f] = 0xff;
        pbVar35[-0x8e] = 0xff;
        pbVar35[-0x8d] = 0xff;
        pbVar22 = pbVar35 + lVar63 + lVar54;
        pbVar22[0] = 0xfe;
        pbVar22[1] = 0xff;
        pbVar22[2] = 0xff;
        pbVar22[3] = 0xff;
        pbVar35[0] = 0xfe;
        pbVar35[1] = 0xff;
        pbVar35[2] = 0xff;
        pbVar35[3] = 0xff;
        uVar48 = uVar48 + 2;
        pbVar35 = pbVar35 + 0x120;
      } while ((uVar17 & 0xfffffffe) != uVar48);
    }
    if ((uVar17 & 1) != 0) {
      pbVar35 = (byte *)((longlong)pmVar60 + uVar48 * 0x90 + 8);
      pbVar35[0] = 0xfe;
      pbVar35[1] = 0xff;
      pbVar35[2] = 0xff;
      pbVar35[3] = 0xff;
      pbVar35 = (byte *)((longlong)pmVar53 + uVar48 * 0x90 + 8);
      pbVar35[0] = 0xfe;
      pbVar35[1] = 0xff;
      pbVar35[2] = 0xff;
      pbVar35[3] = 0xff;
    }
  }
  local_1160 = unaff_RSI;
  local_1140 = unaff_RSI;
  if (local_11cc == 1) {
    if ((uint)local_1188 != 0) {
      local_1140 = (mbstate_t *)(unaff_RSI->__mbstate8 + 1);
      local_10e0 = (uint)(byte)unaff_RSI->__mbstate8[0];
      local_11f0 = 0;
      goto LAB_00f38126;
    }
    local_11f0 = 0;
  }
  else {
    if (local_11cc == 3) {
      pcVar4 = (code *)unaff_RSI->_mbstateL;
      *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf37ff8;
      local_11f0 = (*pcVar4)();
      pmVar42 = unaff_RSI;
      goto LAB_00f38126;
    }
    local_11f0 = 0;
    if (local_11cc == 2) {
      if (unaff_RSI == (mbstate_t *)0x0) {
        local_10e0 = 0;
        local_11f0 = 0;
        local_1140 = (mbstate_t *)0x0;
        goto LAB_00f38126;
      }
      uVar17 = 0x20;
      if (-1 < (int)(uint)local_1188) {
        uVar17 = (uint)local_1188;
      }
      if (0 < (int)uVar17) {
        *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf38070;
        local_111c = _mbrtowc((wchar_t *)(local_d8.__mbstate8 + 0x20),(char *)(ulonglong)uVar17,
                              sVar50,pmVar27);
        uVar48 = CONCAT44(extraout_var,local_111c);
        local_1134 = 1;
        if (0xfffffffffffffffd < uVar48) goto LAB_00f3b0b3;
        if ((uVar48 == 0) && (-1 < (int)(uint)local_1188)) {
          local_111c = 1;
          local_1140 = (mbstate_t *)(unaff_RSI->__mbstate8 + 1);
        }
        else {
          local_1140 = (mbstate_t *)(unaff_RSI->__mbstate8 + uVar48);
        }
        local_10e0 = 0;
        pmVar42 = pmVar53;
        goto LAB_00f38126;
      }
    }
    else if ((local_11cc == 0) && ((uint)local_1188 != 0)) {
      local_1160 = (mbstate_t *)(unaff_RSI->__mbstate8 + 4);
      local_10e0 = *(uint *)unaff_RSI;
      goto LAB_00f38126;
    }
  }
  local_10e0 = 0;
  local_111c = 1;
  local_11f0 = 0;
LAB_00f38126:
  local_1248[0] = (mbstate_t *)((longlong)pmVar21 * 4);
  local_1208 = (mbstate_t *)(ulonglong)(uVar6 & 0xfffffff8);
  local_1200 = (dword *)((longlong)(ulonglong)(uVar6 & 0xfffffff8) + -8);
  local_1220 = ((ulonglong)local_1200 >> 3) + 1;
  local_1268 = (ulonglong)((uint)local_1220 & 3);
  local_1210 = (ulonglong)(uVar6 & 3);
  local_11f8 = -(local_1220 & 0xfffffffffffffffc);
  pmVar36 = (mbstate_t *)(local_1268 << 5);
  local_1238 = piVar58 + (longlong)pmVar21;
  stack0xffffffffffffed90 = (dword *)((longlong)local_1178 + (longlong)pmVar21 * 4);
  local_1260 = (uint *)(local_1178->__mbstate8 + 0x10);
  local_1230 = (longlong)&local_1268 + lVar7;
  local_1134 = 0xffffffff;
  local_1100 = (mbstate_t *)0xffffffff;
  pmVar37 = (mbstate_t *)0x0;
LAB_00f3821a:
  do {
    pmVar61 = pmVar60;
    pmVar52 = pmVar37;
    pmVar60 = pmVar53;
    uVar17 = local_10e0;
    local_1170 = (ulonglong)uVar56;
    uVar25 = (uint)pmVar52;
    if (0 < (int)local_d8._mbstateL._0_4_) {
      lVar63 = *(longlong *)(unaff_RDI->__mbstate8 + 0x10);
      uVar44 = (undefined7)((ulonglong)pmVar42 >> 8);
      pmVar42 = (mbstate_t *)CONCAT71(uVar44,uVar56 == 10);
      if (*(longlong *)(lVar63 + 8) != 0) {
        local_1218 = (longlong *)(CONCAT44(local_1218._4_4_,local_1194) & 0xffffffff00000004);
        pmVar37 = (mbstate_t *)0x0;
        bVar29 = (int)uVar25 < 1 && (param_5 & 1) == 0;
        pmVar26 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar52 >> 8),bVar29);
        bVar40 = uVar56 == 10 & (byte)((local_1194 & 4) >> 2);
        pmVar42 = (mbstate_t *)CONCAT71(uVar44,bVar40);
        pmVar53 = (mbstate_t *)(lVar63 + 8);
        do {
          lVar54 = (longlong)*(int *)(lVar63 + 0x10) * 0x90;
          if (*(int *)((longlong)pmVar61 + lVar54 + 8) < (int)uVar25) {
            uVar18 = *(uint *)(lVar63 + 0x28);
            if (uVar18 == 0) goto LAB_00f38650;
            bVar24 = ((uVar18 & 1) == 0 || bVar29) | bVar40;
            pmVar37 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar37 >> 8),bVar24);
            if (bVar24 == 1) {
              if ((uVar18 & 2) != 0) {
                pmVar37 = (mbstate_t *)(ulonglong)local_10e0;
                uVar30 = param_5 & 2 | local_10e0;
                pmVar26 = (mbstate_t *)(ulonglong)uVar30;
                if ((uVar30 != 0) && ((local_10e0 != 10 || ((int)local_1218 == 0))))
                goto LAB_00f382e0;
              }
              if (((uVar18 & 0x10) == 0) || ((int)uVar25 < 1)) goto LAB_00f38430;
              if (uVar56 != 0x5f) {
                if (uVar56 < 0x80) {
                  pmVar37 = (mbstate_t *)&section_000004c0.flags;
                  uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_1170 * 4 + 0x3c) &
                           0x500;
                }
                else {
                  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf383a9;
                  uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar37,(ulong)pmVar26);
                  pmVar42 = pmVar53;
                }
                if (uVar18 == 0) {
                  if ((ulonglong)local_10e0 != 0x5f) {
                    if (local_10e0 < 0x80) {
                      pmVar37 = (mbstate_t *)&section_000004c0.flags;
                      uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                        (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf38409;
                      uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar37,(ulong)pmVar26);
                      pmVar42 = pmVar53;
                    }
                    if (uVar18 == 0) goto LAB_00f382e0;
                  }
LAB_00f38430:
                  uVar18 = *(uint *)(lVar63 + 0x28);
                  uVar44 = (undefined7)((ulonglong)pmVar53 >> 8);
                  if ((uVar18 & 0x20) == 0) {
joined_r0x00f385aa:
                    if ((((uVar18 & 0x40) == 0) || (uVar25 == 0)) || (local_10e0 == 0)) {
LAB_00f38643:
                      if (*(char *)(lVar63 + 0x28) < '\0') {
                        if ((uVar25 != 0) && (local_10e0 != 0)) {
                          uVar45 = (undefined7)((ulonglong)pmVar42 >> 8);
                          if (uVar56 == 0x5f) {
                            pmVar42 = (mbstate_t *)CONCAT71(uVar45,1);
                            if (local_10e0 == 0x5f) goto LAB_00f38650;
                          }
                          else {
                            if (uVar56 < 0x80) {
                              pmVar37 = (mbstate_t *)&section_000004c0.flags;
                              uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                local_1170 * 4 + 0x3c) & 0x500;
                              pmVar42 = (mbstate_t *)CONCAT71(uVar45,uVar18 != 0);
                            }
                            else {
                              *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf38afd;
                              uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar37,(ulong)pmVar26);
                              pmVar42 = (mbstate_t *)CONCAT71(uVar44,uVar18 != 0);
                            }
                            if (local_10e0 == 0x5f) {
                              if (uVar18 != 0) goto LAB_00f38650;
                              goto LAB_00f382e0;
                            }
                          }
                          if (local_10e0 < 0x80) {
                            pmVar37 = (mbstate_t *)&section_000004c0.flags;
                            uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                              (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf38b4a;
                            uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar37,(ulong)pmVar26);
                          }
                          bVar24 = (byte)pmVar42 ^ uVar18 != 0;
                          pmVar42 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar42 >> 8),bVar24);
                          if (bVar24 == 0) goto LAB_00f38650;
                        }
                      }
                      else {
LAB_00f38650:
                        *(longlong *)((longlong)pmVar61 + lVar54) = pmVar53->_mbstateL;
                        *(uint *)((longlong)pmVar61 + lVar54 + 8) = uVar25;
                        pmVar42 = local_1248[0];
                        if (0 < (int)uVar6) {
                          *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf38685;
                          _memset(pmVar52,(int)pmVar42,(size_t)pmVar53);
                          pmVar26 = pmVar42;
                        }
                        puVar23 = *(uint **)(lVar63 + 0x18);
                        if ((puVar23 != (uint *)0x0) && (uVar18 = *puVar23, -1 < (int)uVar18)) {
                          pmVar26 = (mbstate_t *)((longlong)pmVar61 + lVar54 + 0x10);
                          do {
                            puVar23 = puVar23 + 1;
                            if ((int)uVar18 < (int)uVar6) {
                              *(uint *)(pmVar26->_mbstateL + (ulonglong)uVar18 * 4) = uVar25;
                            }
                            uVar18 = *puVar23;
                          } while (-1 < (int)uVar18);
                        }
                        pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x28);
                        *(int *)pbVar35 = local_res18;
                        *(uint *)(pbVar35 + 4) = uStackX_1c;
                        *(uint *)(pbVar35 + 8) = uStackX_20;
                        *(uint *)(pbVar35 + 0xc) = uStackX_24;
                        pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x18);
                        *(ulonglong *)pbVar35 = CONCAT44(iStackX_c,local_res8);
                        *(ulonglong *)(pbVar35 + 8) = CONCAT44(uStackX_14,uStackX_10);
                        pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x38);
                        pbVar35[0] = 0;
                        pbVar35[1] = 0;
                        pbVar35[2] = 0;
                        pbVar35[3] = 0;
                        pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x3c);
                        pbVar35[0] = 0;
                        pbVar35[1] = 0;
                        pbVar35[2] = 0;
                        pbVar35[3] = 0;
                        pbVar35[4] = 0;
                        pbVar35[5] = 0;
                        pbVar35[6] = 0;
                        pbVar35[7] = 0;
                        pbVar35[8] = 0;
                        pbVar35[9] = 0;
                        pbVar35[10] = 0;
                        pbVar35[0xb] = 0;
                        pbVar35[0xc] = 0;
                        pbVar35[0xd] = 0;
                        pbVar35[0xe] = 0;
                        pbVar35[0xf] = 0;
                        pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x4c);
                        pbVar35[0] = 0;
                        pbVar35[1] = 0;
                        pbVar35[2] = 0;
                        pbVar35[3] = 0;
                        pmVar42 = *(mbstate_t **)(lVar63 + 0x20);
                        if (pmVar42 != (mbstate_t *)0x0) {
                          local_11b8 = (longlong *)CONCAT44(local_11b8._4_4_,local_res8);
                          local_1190 = (mbstate_t *)CONCAT44(local_1190._4_4_,iStackX_c);
                          local_11c0 = (mbstate_t *)CONCAT44(local_11c0._4_4_,uStackX_14);
                          local_11c8 = (longlong *)CONCAT44(local_11c8._4_4_,local_res18);
                          pmVar26 = (mbstate_t *)(ulonglong)uStackX_20;
                          local_1180 = (mbstate_t *)CONCAT44(local_1180._4_4_,uStackX_24);
                          uVar18 = *(uint *)(pmVar42->__mbstate8 + 0x20);
                          uVar30 = uStackX_1c;
                          if (0 < (int)uVar18) {
                            local_11a8 = (uint *)CONCAT44(local_11a8._4_4_,uStackX_1c);
                            local_11b0 = CONCAT44(local_11b0._4_4_,uStackX_20);
                            *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf387b7;
                            ___bzero();
                            pmVar26 = (mbstate_t *)(local_11b0 & 0xffffffff);
                            uVar30 = (uint)local_11a8;
                          }
                          *(uint *)((longlong)pmVar61 + lVar54 + 0x38) = uVar18;
                          uVar18 = *(uint *)pmVar42;
                          if (uVar18 != 0xffffffff) {
                            if (uVar18 == 0xfffffffe) {
                              uVar18 = (uint)local_11b8;
                            }
                            *(uint *)((longlong)pmVar61 + lVar54 + 0x18) = uVar18;
                          }
                          uVar18 = *(uint *)(pmVar42->__mbstate8 + 4);
                          if (uVar18 != 0xffffffff) {
                            if (uVar18 == 0xfffffffe) {
                              uVar18 = (uint)local_1190;
                            }
                            *(uint *)((longlong)pmVar61 + lVar54 + 0x1c) = uVar18;
                          }
                          uVar18 = uStackX_10;
                          if (*(uint *)(pmVar42->__mbstate8 + 8) != 0xfffffffe) {
                            uVar18 = *(uint *)(pmVar42->__mbstate8 + 8);
                          }
                          *(uint *)((longlong)pmVar61 + lVar54 + 0x20) = uVar18;
                          uVar18 = *(uint *)(pmVar42->__mbstate8 + 0xc);
                          if (uVar18 != 0xffffffff) {
                            if (uVar18 == 0xfffffffe) {
                              uVar18 = (uint)local_11c0;
                            }
                            *(uint *)((longlong)pmVar61 + lVar54 + 0x24) = uVar18;
                          }
                          uVar18 = *(uint *)(pmVar42->__mbstate8 + 0x10);
                          if (uVar18 != 0xffffffff) {
                            if (uVar18 == 0xfffffffe) {
                              uVar18 = (uint)local_11c8;
                            }
                            *(uint *)((longlong)pmVar61 + lVar54 + 0x28) = uVar18;
                          }
                          uVar18 = *(uint *)(pmVar42->__mbstate8 + 0x14);
                          if (uVar18 != 0xffffffff) {
                            if (uVar18 == 0xfffffffe) {
                              uVar18 = uVar30;
                            }
                            *(uint *)((longlong)pmVar61 + lVar54 + 0x2c) = uVar18;
                          }
                          uVar18 = *(uint *)(pmVar42->__mbstate8 + 0x18);
                          if (uVar18 != 0xffffffff) {
                            if (uVar18 == 0xfffffffe) {
                              uVar18 = (uint)pmVar26;
                            }
                            *(uint *)((longlong)pmVar61 + lVar54 + 0x30) = uVar18;
                          }
                          uVar18 = *(uint *)(pmVar42->__mbstate8 + 0x1c);
                          if (uVar18 != 0xffffffff) {
                            if (uVar18 == 0xfffffffe) {
                              uVar18 = (uint)local_1180;
                            }
                            *(uint *)((longlong)pmVar61 + lVar54 + 0x34) = uVar18;
                          }
                        }
                        pmVar37 = unaff_RDI;
                        if (pmVar53->_mbstateL == *(longlong *)(unaff_RDI->__mbstate8 + 0x18)) {
                          if (0 < (int)uVar6) {
                            puVar23 = *(uint **)((longlong)pmVar61 + lVar54 + 0x10);
                            if ((uVar6 < 8) ||
                               ((local_1178 < (mbstate_t *)(puVar23 + (longlong)pmVar21) &&
                                (puVar23 < stack0xffffffffffffed90)))) {
                              pmVar37 = (mbstate_t *)0x0;
                            }
                            else {
                              if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_1200) {
                                lVar34 = 0;
                                lVar54 = local_11f8;
                                do {
                                  uVar13 = *(undefined8 *)(puVar23 + lVar34 + 2);
                                  uVar14 = *(undefined8 *)(puVar23 + lVar34 + 4);
                                  uVar15 = *(undefined8 *)(puVar23 + lVar34 + 4 + 2);
                                  pdVar1 = (dword *)((longlong)local_1178 + lVar34 * 4);
                                  *(undefined8 *)pdVar1 = *(undefined8 *)(puVar23 + lVar34);
                                  *(undefined8 *)(pdVar1 + 2) = uVar13;
                                  pbVar35 = (byte *)((longlong)local_1178 + lVar34 * 4 + 0x10);
                                  *(undefined8 *)pbVar35 = uVar14;
                                  *(undefined8 *)(pbVar35 + 8) = uVar15;
                                  uVar13 = *(undefined8 *)(puVar23 + lVar34 + 8 + 2);
                                  uVar14 = *(undefined8 *)(puVar23 + lVar34 + 0xc);
                                  uVar15 = *(undefined8 *)(puVar23 + lVar34 + 0xc + 2);
                                  pbVar35 = (byte *)((longlong)local_1178 + lVar34 * 4 + 0x20);
                                  *(undefined8 *)pbVar35 = *(undefined8 *)(puVar23 + lVar34 + 8);
                                  *(undefined8 *)(pbVar35 + 8) = uVar13;
                                  pbVar35 = (byte *)((longlong)local_1178 + lVar34 * 4 + 0x30);
                                  *(undefined8 *)pbVar35 = uVar14;
                                  *(undefined8 *)(pbVar35 + 8) = uVar15;
                                  uVar13 = *(undefined8 *)(puVar23 + lVar34 + 0x10 + 2);
                                  uVar14 = *(undefined8 *)(puVar23 + lVar34 + 0x14);
                                  uVar15 = *(undefined8 *)(puVar23 + lVar34 + 0x14 + 2);
                                  pbVar35 = (byte *)((longlong)local_1178 + lVar34 * 4 + 0x40);
                                  *(undefined8 *)pbVar35 = *(undefined8 *)(puVar23 + lVar34 + 0x10);
                                  *(undefined8 *)(pbVar35 + 8) = uVar13;
                                  pbVar35 = (byte *)((longlong)local_1178 + lVar34 * 4 + 0x50);
                                  *(undefined8 *)pbVar35 = uVar14;
                                  *(undefined8 *)(pbVar35 + 8) = uVar15;
                                  uVar13 = *(undefined8 *)(puVar23 + lVar34 + 0x18 + 2);
                                  uVar14 = *(undefined8 *)(puVar23 + lVar34 + 0x1c);
                                  uVar15 = *(undefined8 *)(puVar23 + lVar34 + 0x1c + 2);
                                  pbVar35 = (byte *)((longlong)local_1178 + lVar34 * 4 + 0x60);
                                  *(undefined8 *)pbVar35 = *(undefined8 *)(puVar23 + lVar34 + 0x18);
                                  *(undefined8 *)(pbVar35 + 8) = uVar13;
                                  pbVar35 = (byte *)((longlong)local_1178 + lVar34 * 4 + 0x70);
                                  *(undefined8 *)pbVar35 = uVar14;
                                  *(undefined8 *)(pbVar35 + 8) = uVar15;
                                  lVar34 = lVar34 + 0x20;
                                  lVar54 = lVar54 + 4;
                                } while (lVar54 != 0);
                              }
                              else {
                                lVar34 = 0;
                              }
                              if (local_1268 != 0) {
                                pmVar42 = (mbstate_t *)0x0;
                                do {
                                  pbVar22 = (byte *)((longlong)(puVar23 + lVar34) +
                                                    (longlong)pmVar42->__mbstate8);
                                  uVar13 = *(undefined8 *)(pbVar22 + 8);
                                  pbVar35 = (byte *)((longlong)(puVar23 + lVar34 + 4) +
                                                    (longlong)pmVar42->__mbstate8);
                                  uVar14 = *(undefined8 *)pbVar35;
                                  uVar15 = *(undefined8 *)(pbVar35 + 8);
                                  pbVar35 = (byte *)((longlong)(local_1260 + lVar34 + -4) +
                                                    (longlong)pmVar42->__mbstate8);
                                  *(undefined8 *)pbVar35 = *(undefined8 *)pbVar22;
                                  *(undefined8 *)(pbVar35 + 8) = uVar13;
                                  pbVar35 = (byte *)((longlong)(local_1260 + lVar34) +
                                                    (longlong)pmVar42->__mbstate8);
                                  *(undefined8 *)pbVar35 = uVar14;
                                  *(undefined8 *)(pbVar35 + 8) = uVar15;
                                  pmVar42 = (mbstate_t *)(pmVar42->__mbstate8 + 0x20);
                                } while (pmVar36 != pmVar42);
                              }
                              pmVar37 = local_1208;
                              pmVar26 = local_1208;
                              pmVar42 = pmVar21;
                              if (local_1208 == pmVar21) goto LAB_00f382b7;
                            }
                            uVar51 = ~(ulonglong)pmVar37;
                            for (uVar48 = local_1210; uVar48 != 0; uVar48 = uVar48 - 1) {
                              *(uint *)((longlong)local_1178 + (longlong)pmVar37 * 4) =
                                   puVar23[(longlong)pmVar37];
                              pmVar37 = (mbstate_t *)((longlong)pmVar37 + 1);
                            }
                            pmVar26 = (mbstate_t *)(uVar51 + (longlong)pmVar21);
                            pmVar42 = local_1178;
                            if ((mbstate_t *)((longlong)&MACH_HEADER.magic + 2) <
                                (mbstate_t *)(uVar51 + (longlong)pmVar21)) {
                              do {
                                *(uint *)((longlong)local_1178 + (longlong)pmVar37 * 4) =
                                     puVar23[(longlong)pmVar37];
                                *(uint *)((longlong)local_1178 + (longlong)pmVar37 * 4 + 4) =
                                     puVar23[(longlong)((longlong)pmVar37 + 1)];
                                *(uint *)((longlong)local_1178 + (longlong)pmVar37 * 4 + 8) =
                                     puVar23[(longlong)((longlong)pmVar37 + 2)];
                                pmVar26 = (mbstate_t *)
                                          (ulonglong)puVar23[(longlong)((longlong)pmVar37 + 3)];
                                *(uint *)((longlong)local_1178 + (longlong)pmVar37 * 4 + 0xc) =
                                     puVar23[(longlong)((longlong)pmVar37 + 3)];
                                pmVar37 = (mbstate_t *)((longlong)pmVar37 + 4);
                              } while (pmVar21 != pmVar37);
                            }
                          }
LAB_00f382b7:
                          local_d8._mbstateL = 0;
                          local_d8._8_8_ = 0;
                          local_d8._16_4_ = 0;
                          local_1134 = uVar25;
                        }
                      }
                    }
                    else {
                      uVar45 = (undefined7)((ulonglong)pmVar42 >> 8);
                      if (uVar56 == 0x5f) {
                        pmVar42 = (mbstate_t *)CONCAT71(uVar45,1);
                        if (local_10e0 != 0x5f) {
LAB_00f384d9:
                          if (local_10e0 < 0x80) {
                            pmVar37 = (mbstate_t *)&section_000004c0.flags;
                            uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                              (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf38613;
                            uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar37,(ulong)pmVar26);
                          }
                          if (SUB81(pmVar42,0) != (uVar18 != 0)) goto LAB_00f38643;
                        }
                      }
                      else {
                        if (uVar56 < 0x80) {
                          pmVar37 = (mbstate_t *)&section_000004c0.flags;
                          uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                            local_1170 * 4 + 0x3c) & 0x500;
                          pmVar42 = (mbstate_t *)CONCAT71(uVar45,uVar18 != 0);
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf385c5;
                          uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar37,(ulong)pmVar26);
                          pmVar42 = (mbstate_t *)CONCAT71(uVar44,uVar18 != 0);
                        }
                        if (local_10e0 != 0x5f) goto LAB_00f384d9;
                        if (uVar18 == 0) goto LAB_00f38643;
                      }
                    }
                  }
                  else {
                    if (uVar56 != 0x5f) {
                      if (uVar56 < 0x80) {
                        pmVar37 = (mbstate_t *)&section_000004c0.flags;
                        uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_1170 * 4 + 0x3c)
                                 & 0x500;
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf38518;
                        uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar37,(ulong)pmVar26);
                        pmVar42 = pmVar53;
                      }
                      if (uVar18 == 0) goto LAB_00f382e0;
                    }
                    if ((ulonglong)local_10e0 != 0x5f) {
                      if (local_10e0 < 0x80) {
                        pmVar37 = (mbstate_t *)&section_000004c0.flags;
                        uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                          (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3857d;
                        uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar37,(ulong)pmVar26);
                        pmVar42 = pmVar53;
                      }
                      if (uVar18 == 0) {
                        uVar18 = *(uint *)(lVar63 + 0x28);
                        goto joined_r0x00f385aa;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00f382e0:
          pmVar53 = (mbstate_t *)(lVar63 + 0x40);
          plVar62 = (longlong *)(lVar63 + 0x40);
          lVar63 = lVar63 + 0x38;
          pmVar27 = pmVar36;
        } while (*plVar62 != 0);
      }
    }
    if ((int)*(uint *)(unaff_RDI->__mbstate8 + 0x54) < 1) {
      lVar63 = 0;
    }
    else {
      pmVar42 = (mbstate_t *)0x0;
      do {
        lVar63 = (longlong)pmVar42 * 0x90;
        if (*(int *)((longlong)pmVar60 + lVar63 + 8) == (int)local_1100) {
          iVar20 = *(int *)((longlong)pmVar60 + lVar63 + 0x38);
          lVar54 = (longlong)iVar20;
          iVar41 = *(int *)((longlong)pmVar60 + lVar63 + 0x18);
          iVar59 = iVar41;
          if (iVar41 == -1) {
            iVar59 = 0;
          }
          uVar18 = iVar59 + *(int *)((longlong)pmVar60 + lVar54 * 0x14 + lVar63 + 0x3c);
          if ((((int)uVar18 <= *(int *)((longlong)pmVar60 + lVar63 + 0x24)) &&
              (*(int *)((longlong)pmVar60 + lVar54 * 0x14 + lVar63 + 0x40) <
               *(int *)((longlong)pmVar60 + lVar63 + 0x28))) &&
             (*(int *)((longlong)pmVar60 + lVar54 * 0x14 + lVar63 + 0x4c) <
              *(int *)((longlong)pmVar60 + lVar63 + 0x34))) {
            pmVar53 = (mbstate_t *)((longlong)pmVar60 + lVar63 + 0x3c);
            uVar30 = uVar18;
            if (iVar20 < 1) {
LAB_00f38c32:
              uVar31 = *(uint *)((longlong)pmVar61 + lVar63 + 8);
            }
            else {
              if (iVar41 != -1) {
                uVar30 = *(uint *)pmVar53 + iVar41;
                goto LAB_00f38c32;
              }
              uVar30 = *(uint *)pmVar53 + local_res8;
              uVar31 = *(uint *)((longlong)pmVar61 + lVar63 + 8);
            }
            if ((uVar31 != uVar25) || ((int)uVar30 < *(int *)((longlong)pmVar61 + lVar63 + 0x3c))) {
              lVar34 = (longlong)pmVar42 * 0x90;
              *(undefined8 *)((longlong)pmVar61 + lVar34) =
                   *(undefined8 *)((longlong)pmVar60 + lVar34);
              *(uint *)((longlong)pmVar61 + lVar63 + 8) = uVar25;
              if (0 < (int)uVar6) {
                pmVar27 = *(mbstate_t **)((longlong)pmVar60 + lVar34 + 0x10);
                puVar23 = *(uint **)((longlong)pmVar61 + lVar34 + 0x10);
                if ((uVar6 < 8) ||
                   ((puVar23 < (dword *)((longlong)pmVar27 + (longlong)pmVar21 * 4) &&
                    (pmVar27 < (mbstate_t *)(puVar23 + (longlong)pmVar21))))) {
                  pmVar37 = (mbstate_t *)0x0;
                }
                else {
                  if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_1200) {
                    lVar28 = 0;
                    lVar34 = local_11f8;
                    do {
                      pdVar1 = (dword *)((longlong)pmVar27 + lVar28 * 4);
                      uVar13 = *(undefined8 *)(pdVar1 + 2);
                      pbVar35 = (byte *)((longlong)pmVar27 + lVar28 * 4 + 0x10);
                      uVar14 = *(undefined8 *)pbVar35;
                      uVar15 = *(undefined8 *)(pbVar35 + 8);
                      *(undefined8 *)(puVar23 + lVar28) = *(undefined8 *)pdVar1;
                      *(undefined8 *)(puVar23 + lVar28 + 2) = uVar13;
                      *(undefined8 *)(puVar23 + lVar28 + 4) = uVar14;
                      *(undefined8 *)(puVar23 + lVar28 + 4 + 2) = uVar15;
                      pbVar35 = (byte *)((longlong)pmVar27 + lVar28 * 4 + 0x20);
                      uVar13 = *(undefined8 *)(pbVar35 + 8);
                      pbVar22 = (byte *)((longlong)pmVar27 + lVar28 * 4 + 0x30);
                      uVar14 = *(undefined8 *)pbVar22;
                      uVar15 = *(undefined8 *)(pbVar22 + 8);
                      *(undefined8 *)(puVar23 + lVar28 + 8) = *(undefined8 *)pbVar35;
                      *(undefined8 *)(puVar23 + lVar28 + 8 + 2) = uVar13;
                      *(undefined8 *)(puVar23 + lVar28 + 0xc) = uVar14;
                      *(undefined8 *)(puVar23 + lVar28 + 0xc + 2) = uVar15;
                      pbVar35 = (byte *)((longlong)pmVar27 + lVar28 * 4 + 0x40);
                      uVar13 = *(undefined8 *)(pbVar35 + 8);
                      pbVar22 = (byte *)((longlong)pmVar27 + lVar28 * 4 + 0x50);
                      uVar14 = *(undefined8 *)pbVar22;
                      uVar15 = *(undefined8 *)(pbVar22 + 8);
                      *(undefined8 *)(puVar23 + lVar28 + 0x10) = *(undefined8 *)pbVar35;
                      *(undefined8 *)(puVar23 + lVar28 + 0x10 + 2) = uVar13;
                      *(undefined8 *)(puVar23 + lVar28 + 0x14) = uVar14;
                      *(undefined8 *)(puVar23 + lVar28 + 0x14 + 2) = uVar15;
                      pbVar35 = (byte *)((longlong)pmVar27 + lVar28 * 4 + 0x60);
                      uVar13 = *(undefined8 *)(pbVar35 + 8);
                      pbVar22 = (byte *)((longlong)pmVar27 + lVar28 * 4 + 0x70);
                      uVar14 = *(undefined8 *)pbVar22;
                      uVar15 = *(undefined8 *)(pbVar22 + 8);
                      *(undefined8 *)(puVar23 + lVar28 + 0x18) = *(undefined8 *)pbVar35;
                      *(undefined8 *)(puVar23 + lVar28 + 0x18 + 2) = uVar13;
                      *(undefined8 *)(puVar23 + lVar28 + 0x1c) = uVar14;
                      *(undefined8 *)(puVar23 + lVar28 + 0x1c + 2) = uVar15;
                      lVar28 = lVar28 + 0x20;
                      lVar34 = lVar34 + 4;
                    } while (lVar34 != 0);
                  }
                  else {
                    lVar28 = 0;
                  }
                  if ((local_1220 & 3) != 0) {
                    pdVar1 = (dword *)((longlong)pmVar27 + lVar28 * 4);
                    pmVar37 = (mbstate_t *)0x0;
                    do {
                      pbVar22 = (byte *)((longlong)pdVar1 + (longlong)pmVar37->__mbstate8);
                      uVar13 = *(undefined8 *)(pbVar22 + 8);
                      pbVar35 = (byte *)((longlong)(pdVar1 + 4) + (longlong)pmVar37->__mbstate8);
                      uVar14 = *(undefined8 *)pbVar35;
                      uVar15 = *(undefined8 *)(pbVar35 + 8);
                      pbVar35 = (byte *)((longlong)(puVar23 + lVar28) +
                                        (longlong)pmVar37->__mbstate8);
                      *(undefined8 *)pbVar35 = *(undefined8 *)pbVar22;
                      *(undefined8 *)(pbVar35 + 8) = uVar13;
                      pbVar35 = (byte *)((longlong)(puVar23 + lVar28 + 4) +
                                        (longlong)pmVar37->__mbstate8);
                      *(undefined8 *)pbVar35 = uVar14;
                      *(undefined8 *)(pbVar35 + 8) = uVar15;
                      pmVar37 = (mbstate_t *)(pmVar37->__mbstate8 + 0x20);
                    } while (pmVar36 != pmVar37);
                  }
                  pmVar37 = local_1208;
                  if (local_1208 == pmVar21) goto LAB_00f38e43;
                }
                uVar51 = ~(ulonglong)pmVar37;
                for (uVar48 = local_1210; uVar48 != 0; uVar48 = uVar48 - 1) {
                  puVar23[(longlong)pmVar37] = *(dword *)((longlong)pmVar27 + (longlong)pmVar37 * 4)
                  ;
                  pmVar37 = (mbstate_t *)(pmVar37->__mbstate8 + 1);
                }
                local_1180 = pmVar53;
                if ((byte *)((longlong)&MACH_HEADER.magic + 2) < pmVar21->__mbstate8 + uVar51) {
                  do {
                    puVar23[(longlong)pmVar37] =
                         *(dword *)((longlong)pmVar27 + (longlong)pmVar37 * 4);
                    puVar23[(longlong)((longlong)pmVar37 + 1)] =
                         *(uint *)((longlong)pmVar27 + (longlong)pmVar37 * 4 + 4);
                    puVar23[(longlong)((longlong)pmVar37 + 2)] =
                         *(uint *)((longlong)pmVar27 + (longlong)pmVar37 * 4 + 8);
                    puVar23[(longlong)((longlong)pmVar37 + 3)] =
                         *(uint *)((longlong)pmVar27 + (longlong)pmVar37 * 4 + 0xc);
                    pmVar37 = (mbstate_t *)(pmVar37->__mbstate8 + 4);
                  } while (pmVar21 != pmVar37);
                }
              }
LAB_00f38e43:
              pdVar1 = (dword *)((longlong)pmVar61 + lVar63);
              uVar13 = *(undefined8 *)((longlong)pmVar60 + lVar63 + 0x18);
              uVar14 = *(undefined8 *)((longlong)pmVar60 + lVar63 + 0x20);
              uVar15 = *(undefined8 *)((longlong)pmVar60 + lVar63 + 0x30);
              pbVar35 = (byte *)((longlong)pmVar61 + lVar63 + 0x28);
              *(undefined8 *)pbVar35 = *(undefined8 *)((longlong)pmVar60 + lVar63 + 0x28);
              *(undefined8 *)(pbVar35 + 8) = uVar15;
              pbVar35 = (byte *)((longlong)pmVar61 + lVar63 + 0x18);
              *(undefined8 *)pbVar35 = uVar13;
              *(undefined8 *)(pbVar35 + 8) = uVar14;
              *(undefined4 *)((longlong)pmVar61 + lVar63 + 0x38) =
                   *(undefined4 *)((longlong)pmVar60 + lVar63 + 0x38);
              *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf38e93;
              _memcpy(pdVar1,(void *)(lVar54 * 0x14 + 0x14),(size_t)pmVar53);
              pdVar1[lVar54 * 5 + 0x10] = pdVar1[lVar54 * 5 + 0x10] + 1;
              pdVar1[lVar54 * 5 + 0x13] = pdVar1[lVar54 * 5 + 0x13] + 1;
              pdVar1[lVar54 * 5 + 0xf] = uVar18;
              if (0 < iVar20) {
                *(uint *)((longlong)pmVar61 + lVar63 + 0x3c) = uVar30;
                pbVar35 = (byte *)((longlong)pmVar61 + lVar63 + 0x40);
                *(int *)pbVar35 = *(int *)pbVar35 + 1;
                pbVar35 = (byte *)((longlong)pmVar61 + lVar63 + 0x4c);
                *(int *)pbVar35 = *(int *)pbVar35 + 1;
              }
            }
          }
        }
        pmVar42 = (mbstate_t *)((longlong)pmVar42 + 1);
        uVar18 = *(uint *)(unaff_RDI->__mbstate8 + 0x54);
      } while ((longlong)pmVar42 < (longlong)(int)uVar18);
      if ((int)uVar18 < 1) {
        lVar63 = 0;
      }
      else {
        if (uVar18 == 1) {
          uVar48 = 0;
          lVar63 = 0;
        }
        else {
          uVar48 = 0;
          lVar63 = 0;
          pmVar53 = pmVar61;
          do {
            if (*(uint *)(pmVar53->__mbstate8 + 8) == uVar25) {
              *(mbstate_t **)((longlong)local_10d8 + lVar63 * 8) = pmVar53;
              lVar63 = lVar63 + 1;
            }
            if (*(uint *)((longlong)pmVar53 + 0x98) == uVar25) {
              pmVar42 = (mbstate_t *)((longlong)pmVar53 + 0x90);
              *(mbstate_t **)((longlong)local_10d8 + lVar63 * 8) = pmVar42;
              lVar63 = lVar63 + 1;
            }
            uVar48 = uVar48 + 2;
            pmVar53 = (mbstate_t *)((longlong)pmVar53 + 0x120);
          } while ((uVar18 & 0xfffffffe) != uVar48);
        }
        if (((uVar18 & 1) != 0) && (*(uint *)((longlong)pmVar61 + uVar48 * 0x90 + 8) == uVar25)) {
          *(dword **)((longlong)local_10d8 + lVar63 * 8) =
               (dword *)(uVar48 * 0x90 + (longlong)pmVar61);
          lVar63 = lVar63 + 1;
        }
      }
    }
    local_1224 = local_1194 & 4;
    uVar18 = (local_1194 & 4) >> 2;
    uVar44 = (undefined7)((ulonglong)pmVar42 >> 8);
    pmVar42 = (mbstate_t *)CONCAT71(uVar44,(int)uVar25 < 1);
    local_124c = uVar18;
    if (lVar63 != 0) {
      bVar29 = (int)uVar25 < 1 && (param_5 & 1) == 0;
      local_10f8 = (mbstate_t *)(local_10d8[0].__mbstate8 + lVar63 * 8);
      pmVar53 = local_10d8;
      pmVar27 = (mbstate_t *)(CONCAT71(uVar44,bVar29) & 0xffffffff);
      do {
        plVar62 = (longlong *)pmVar53->_mbstateL;
        uVar48 = (ulonglong)(int)plVar62[7];
        pmVar37 = (mbstate_t *)(uVar48 * 5);
        iVar20 = *(int *)((longlong)plVar62 + 0x1c);
        iVar41 = iVar20;
        if (iVar20 == -1) {
          iVar41 = 0;
        }
        uVar30 = iVar41 + *(int *)((longlong)plVar62 + uVar48 * 0x14 + 0x3c);
        pmVar42 = (mbstate_t *)(ulonglong)uVar30;
        if ((((int)uVar30 <= *(int *)((longlong)plVar62 + 0x24)) &&
            (*(int *)((longlong)plVar62 + uVar48 * 0x14 + 0x44) < *(int *)((longlong)plVar62 + 0x2c)
            )) && (*(int *)((longlong)plVar62 + uVar48 * 0x14 + 0x4c) <
                   *(int *)((longlong)plVar62 + 0x34))) {
          local_11b8 = (longlong *)((longlong)plVar62 + 0x3c);
          pmVar26 = pmVar42;
          if (0 < (int)plVar62[7]) {
            iVar41 = *(int *)((longlong)plVar62 + 0x3c);
            if (iVar20 == -1) {
              pmVar26 = (mbstate_t *)(ulonglong)(uint)(iVar41 + iStackX_c);
            }
            else {
              pmVar26 = (mbstate_t *)(ulonglong)(uint)(iVar41 + iVar20);
            }
          }
          local_11c0 = (mbstate_t *)CONCAT44(local_11c0._4_4_,(int)pmVar26);
          local_11a8 = (uint *)CONCAT44(local_11a8._4_4_,uVar30);
          local_1190 = pmVar37;
          local_11b0 = uVar48;
          lVar63 = *plVar62;
          if (*(longlong *)(lVar63 + 8) != 0) {
            local_11c8 = plVar62;
            local_1218 = plVar62 + 3;
            local_1248[1] = (mbstate_t *)(uVar48 * 0x14 + 0x14);
            local_1100 = (mbstate_t *)(lVar63 + 8);
            do {
              iVar20 = *(int *)(lVar63 + 0x10);
              uVar30 = *(uint *)(lVar63 + 0x28);
              if (uVar30 == 0) goto LAB_00f39410;
              bVar40 = (uVar30 & 1) == 0 | (byte)pmVar27 | uVar56 == 10 & (byte)uVar18;
              pmVar26 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar26 >> 8),bVar40);
              if (bVar40 == 1) {
                if ((uVar30 & 2) != 0) {
                  pmVar26 = (mbstate_t *)(ulonglong)local_10e0;
                  uVar31 = param_5 & 2 | local_10e0;
                  pmVar37 = (mbstate_t *)(ulonglong)uVar31;
                  pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                  if ((uVar31 != 0) && ((local_10e0 != 10 || (local_1224 == 0)))) goto LAB_00f390d0;
                }
                if (((uVar30 & 0x10) == 0) || ((int)uVar25 < 1)) goto LAB_00f39210;
                if (uVar56 != 0x5f) {
                  if (uVar56 < 0x80) {
                    pmVar26 = (mbstate_t *)&section_000004c0.flags;
                    uVar30 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_1170 * 4 + 0x3c) &
                             0x500;
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39192;
                    uVar30 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)pmVar37);
                    pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                  }
                  if (uVar30 == 0) {
                    if ((ulonglong)local_10e0 != 0x5f) {
                      if (local_10e0 < 0x80) {
                        pmVar26 = (mbstate_t *)&section_000004c0.flags;
                        uVar30 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                          (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf391ec;
                        uVar30 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)pmVar37);
                        pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                      }
                      if (uVar30 == 0) goto LAB_00f390d0;
                    }
LAB_00f39210:
                    uVar30 = *(uint *)(lVar63 + 0x28);
                    if ((uVar30 & 0x20) == 0) {
joined_r0x00f39383:
                      if ((((uVar30 & 0x40) == 0) || (uVar25 == 0)) || (local_10e0 == 0)) {
LAB_00f39404:
                        if (*(char *)(lVar63 + 0x28) < '\0') {
                          if ((uVar25 != 0) && (local_10e0 != 0)) {
                            uVar44 = (undefined7)((ulonglong)pmVar42 >> 8);
                            if (uVar56 == 0x5f) {
                              pmVar42 = (mbstate_t *)CONCAT71(uVar44,1);
                              if (local_10e0 == 0x5f) goto LAB_00f39410;
                            }
                            else {
                              if (uVar56 < 0x80) {
                                pmVar26 = (mbstate_t *)&section_000004c0.flags;
                                uVar30 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                  local_1170 * 4 + 0x3c) & 0x500;
                              }
                              else {
                                *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39bec;
                                uVar30 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)pmVar37);
                                pmVar27 = (mbstate_t *)
                                          CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                              }
                              pmVar42 = (mbstate_t *)CONCAT71(uVar44,uVar30 != 0);
                              if (local_10e0 == 0x5f) {
                                if (uVar30 != 0) goto LAB_00f39410;
                                goto LAB_00f390d0;
                              }
                            }
                            if (local_10e0 < 0x80) {
                              pmVar26 = (mbstate_t *)&section_000004c0.flags;
                              uVar30 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                            }
                            else {
                              *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39c2f;
                              uVar30 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)pmVar37);
                              pmVar27 = (mbstate_t *)
                                        CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                            }
                            bVar40 = (byte)pmVar42 ^ uVar30 != 0;
                            pmVar42 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar42 >> 8),bVar40);
                            if (bVar40 == 0) goto LAB_00f39410;
                          }
                        }
                        else {
LAB_00f39410:
                          if (0 < (int)uVar6) {
                            piVar57 = (int *)local_11c8[2];
                            pmVar27 = pmVar21;
                            if ((uVar6 < 8) ||
                               ((piVar58 < piVar57 + (longlong)pmVar21 && (piVar57 < local_1238))))
                            {
                              pmVar26 = (mbstate_t *)0x0;
                            }
                            else {
                              if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_1200) {
                                lVar34 = 0;
                                lVar54 = local_11f8;
                                do {
                                  uVar13 = *(undefined8 *)(piVar57 + lVar34 + 2);
                                  uVar14 = *(undefined8 *)(piVar57 + lVar34 + 4);
                                  uVar15 = *(undefined8 *)(piVar57 + lVar34 + 4 + 2);
                                  *(undefined8 *)(piVar58 + lVar34) =
                                       *(undefined8 *)(piVar57 + lVar34);
                                  *(undefined8 *)(piVar58 + lVar34 + 2) = uVar13;
                                  puVar2 = (undefined8 *)
                                           ((longlong)&local_1268 + lVar34 * 4 + lVar7);
                                  *puVar2 = uVar14;
                                  puVar2[1] = uVar15;
                                  uVar13 = *(undefined8 *)(piVar57 + lVar34 + 8 + 2);
                                  uVar14 = *(undefined8 *)(piVar57 + lVar34 + 0xc);
                                  uVar15 = *(undefined8 *)(piVar57 + lVar34 + 0xc + 2);
                                  puVar2 = (undefined8 *)
                                           ((longlong)&local_1258 + lVar34 * 4 + lVar7);
                                  *puVar2 = *(undefined8 *)(piVar57 + lVar34 + 8);
                                  puVar2[1] = uVar13;
                                  puVar2 = (undefined8 *)((longlong)local_1248 + lVar34 * 4 + lVar7)
                                  ;
                                  *puVar2 = uVar14;
                                  puVar2[1] = uVar15;
                                  uVar13 = *(undefined8 *)(piVar57 + lVar34 + 0x10 + 2);
                                  uVar14 = *(undefined8 *)(piVar57 + lVar34 + 0x14);
                                  uVar15 = *(undefined8 *)(piVar57 + lVar34 + 0x14 + 2);
                                  puVar2 = (undefined8 *)
                                           ((longlong)&local_1238 + lVar34 * 4 + lVar7);
                                  *puVar2 = *(undefined8 *)(piVar57 + lVar34 + 0x10);
                                  puVar2[1] = uVar13;
                                  *(undefined8 *)(&stack0xffffffffffffedd8 + lVar34 * 4 + lVar7) =
                                       uVar14;
                                  *(undefined8 *)
                                   ((longlong)(&stack0xffffffffffffedd8 + lVar34 * 4 + lVar7) + 8) =
                                       uVar15;
                                  uVar13 = *(undefined8 *)(piVar57 + lVar34 + 0x18 + 2);
                                  uVar14 = *(undefined8 *)(piVar57 + lVar34 + 0x1c);
                                  uVar15 = *(undefined8 *)(piVar57 + lVar34 + 0x1c + 2);
                                  puVar2 = (undefined8 *)
                                           ((longlong)&local_1218 + lVar34 * 4 + lVar7);
                                  *puVar2 = *(undefined8 *)(piVar57 + lVar34 + 0x18);
                                  puVar2[1] = uVar13;
                                  puVar2 = (undefined8 *)
                                           ((longlong)&local_1208 + lVar34 * 4 + lVar7);
                                  *puVar2 = uVar14;
                                  puVar2[1] = uVar15;
                                  lVar34 = lVar34 + 0x20;
                                  lVar54 = lVar54 + 4;
                                } while (lVar54 != 0);
                              }
                              else {
                                lVar34 = 0;
                              }
                              if ((local_1220 & 3) != 0) {
                                lVar54 = local_1230 + lVar34 * 4;
                                pmVar42 = (mbstate_t *)0x0;
                                do {
                                  pbVar22 = (byte *)((longlong)(piVar57 + lVar34) +
                                                    (longlong)pmVar42->__mbstate8);
                                  uVar13 = *(undefined8 *)(pbVar22 + 8);
                                  pbVar35 = (byte *)((longlong)(piVar57 + lVar34 + 4) +
                                                    (longlong)pmVar42->__mbstate8);
                                  uVar14 = *(undefined8 *)pbVar35;
                                  uVar15 = *(undefined8 *)(pbVar35 + 8);
                                  *(undefined8 *)(pmVar42->__mbstate8 + lVar54 + -0x10) =
                                       *(undefined8 *)pbVar22;
                                  *(undefined8 *)(pmVar42->__mbstate8 + lVar54 + -0x10 + 8) = uVar13
                                  ;
                                  *(undefined8 *)(pmVar42->__mbstate8 + lVar54) = uVar14;
                                  *(undefined8 *)(pmVar42->__mbstate8 + lVar54 + 8) = uVar15;
                                  pmVar42 = (mbstate_t *)(pmVar42->__mbstate8 + 0x20);
                                } while (pmVar36 != pmVar42);
                              }
                              pmVar26 = local_1208;
                              pmVar37 = local_1208;
                              if (local_1208 == pmVar21) goto LAB_00f395b0;
                            }
                            uVar51 = ~(ulonglong)pmVar26;
                            for (uVar48 = local_1210; uVar48 != 0; uVar48 = uVar48 - 1) {
                              piVar58[(longlong)pmVar26] = piVar57[(longlong)pmVar26];
                              pmVar26 = (mbstate_t *)((longlong)pmVar26 + 1);
                            }
                            pmVar37 = (mbstate_t *)(uVar51 + (longlong)pmVar21);
                            if ((mbstate_t *)((longlong)&MACH_HEADER.magic + 2) <
                                (mbstate_t *)(uVar51 + (longlong)pmVar21)) {
                              do {
                                piVar58[(longlong)pmVar26] = piVar57[(longlong)pmVar26];
                                *(int *)(auStack_1278 + (longlong)pmVar26 * 4 + lVar7 + 4) =
                                     piVar57[(longlong)((longlong)pmVar26 + 1)];
                                *(int *)(auStack_1278 + (longlong)pmVar26 * 4 + lVar7 + 8) =
                                     piVar57[(longlong)((longlong)pmVar26 + 2)];
                                pmVar37 = (mbstate_t *)
                                          (ulonglong)
                                          (uint)piVar57[(longlong)((longlong)pmVar26 + 3)];
                                *(int *)((longlong)&uStack_126c + (longlong)pmVar26 * 4 + lVar7) =
                                     piVar57[(longlong)((longlong)pmVar26 + 3)];
                                pmVar26 = (mbstate_t *)((longlong)pmVar26 + 4);
                              } while (pmVar21 != pmVar26);
                            }
                          }
LAB_00f395b0:
                          puVar23 = *(uint **)(lVar63 + 0x18);
                          if (puVar23 != (uint *)0x0) {
                            uVar30 = *puVar23;
                            while (pmVar26 = (mbstate_t *)(ulonglong)uVar30, -1 < (int)uVar30) {
                              puVar23 = puVar23 + 1;
                              if ((int)uVar30 < (int)uVar6) {
                                piVar58[(longlong)pmVar26] = uVar25;
                              }
                              uVar30 = *puVar23;
                            }
                          }
                          lVar54 = (longlong)iVar20 * 0x90;
                          if (*(uint *)((longlong)pmVar61 + lVar54 + 8) == uVar25) {
                            iVar20 = *(int *)((longlong)pmVar61 + lVar54 + 0x3c);
                            uVar44 = (undefined7)((ulonglong)pmVar27 >> 8);
                            pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar29);
                            pmVar42 = pmVar36;
                            if ((int)(uint)local_11c0 <= iVar20) {
                              if ((uint)local_11c0 != iVar20) goto LAB_00f396c0;
                              if ((local_1178 != (mbstate_t *)0x0) && (0 < (int)uVar6)) {
                                pmVar27 = *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x38);
                                pmVar26 = *(mbstate_t **)((longlong)pmVar61 + lVar54 + 0x10);
                                pmVar37 = (mbstate_t *)0x0;
                                do {
                                  iVar20 = piVar58[(longlong)pmVar37];
                                  uVar30 = *(dword *)((longlong)pmVar26 + (longlong)pmVar37 * 4);
                                  if (*(dword *)((longlong)pmVar27 + (longlong)pmVar37 * 4) == 0) {
                                    if (iVar20 < (int)uVar30) goto LAB_00f396c0;
                                    if ((int)uVar30 < iVar20) break;
                                  }
                                  else {
                                    if ((int)uVar30 < iVar20) goto LAB_00f396c0;
                                    if (iVar20 < (int)uVar30) break;
                                  }
                                  pmVar37 = (mbstate_t *)((longlong)pmVar37 + 1);
                                } while (pmVar21 != pmVar37);
                                pmVar27 = (mbstate_t *)
                                          CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                                goto LAB_00f390d0;
                              }
                            }
                            pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar29);
                          }
                          else {
LAB_00f396c0:
                            local_1180 = (mbstate_t *)((longlong)pmVar61 + lVar54);
                            ((mbstate_t *)((longlong)pmVar61 + lVar54))->_mbstateL =
                                 *(longlong *)local_1100;
                            *(uint *)((longlong)pmVar61 + lVar54 + 8) = uVar25;
                            pmVar42 = pmVar52;
                            if (0 < (int)uVar6) {
                              piVar57 = *(int **)((longlong)pmVar61 + lVar54 + 0x10);
                              if ((uVar6 < 8) ||
                                 ((piVar57 < local_1238 && (piVar58 < piVar57 + (longlong)pmVar21)))
                                 ) {
                                pmVar42 = (mbstate_t *)0x0;
                              }
                              else {
                                if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_1200) {
                                  lVar28 = 0;
                                  lVar34 = local_11f8;
                                  do {
                                    uVar13 = *(undefined8 *)(piVar58 + lVar28 + 2);
                                    puVar2 = (undefined8 *)
                                             ((longlong)&local_1268 + lVar28 * 4 + lVar7);
                                    uVar14 = *puVar2;
                                    uVar15 = puVar2[1];
                                    *(undefined8 *)(piVar57 + lVar28) =
                                         *(undefined8 *)(piVar58 + lVar28);
                                    *(undefined8 *)(piVar57 + lVar28 + 2) = uVar13;
                                    *(undefined8 *)(piVar57 + lVar28 + 4) = uVar14;
                                    *(undefined8 *)(piVar57 + lVar28 + 4 + 2) = uVar15;
                                    puVar2 = (undefined8 *)
                                             ((longlong)&local_1258 + lVar28 * 4 + lVar7);
                                    uVar13 = puVar2[1];
                                    puVar3 = (undefined8 *)
                                             ((longlong)local_1248 + lVar28 * 4 + lVar7);
                                    uVar14 = *puVar3;
                                    uVar15 = puVar3[1];
                                    *(undefined8 *)(piVar57 + lVar28 + 8) = *puVar2;
                                    *(undefined8 *)(piVar57 + lVar28 + 8 + 2) = uVar13;
                                    *(undefined8 *)(piVar57 + lVar28 + 0xc) = uVar14;
                                    *(undefined8 *)(piVar57 + lVar28 + 0xc + 2) = uVar15;
                                    puVar2 = (undefined8 *)
                                             ((longlong)&local_1238 + lVar28 * 4 + lVar7);
                                    uVar13 = puVar2[1];
                                    uVar14 = *(undefined8 *)
                                              (&stack0xffffffffffffedd8 + lVar28 * 4 + lVar7);
                                    uVar15 = *(undefined8 *)
                                              ((longlong)
                                               (&stack0xffffffffffffedd8 + lVar28 * 4 + lVar7) + 8);
                                    *(undefined8 *)(piVar57 + lVar28 + 0x10) = *puVar2;
                                    *(undefined8 *)(piVar57 + lVar28 + 0x10 + 2) = uVar13;
                                    *(undefined8 *)(piVar57 + lVar28 + 0x14) = uVar14;
                                    *(undefined8 *)(piVar57 + lVar28 + 0x14 + 2) = uVar15;
                                    puVar2 = (undefined8 *)
                                             ((longlong)&local_1218 + lVar28 * 4 + lVar7);
                                    uVar13 = puVar2[1];
                                    puVar3 = (undefined8 *)
                                             ((longlong)&local_1208 + lVar28 * 4 + lVar7);
                                    uVar14 = *puVar3;
                                    uVar15 = puVar3[1];
                                    *(undefined8 *)(piVar57 + lVar28 + 0x18) = *puVar2;
                                    *(undefined8 *)(piVar57 + lVar28 + 0x18 + 2) = uVar13;
                                    *(undefined8 *)(piVar57 + lVar28 + 0x1c) = uVar14;
                                    *(undefined8 *)(piVar57 + lVar28 + 0x1c + 2) = uVar15;
                                    lVar28 = lVar28 + 0x20;
                                    lVar34 = lVar34 + 4;
                                  } while (lVar34 != 0);
                                }
                                else {
                                  lVar28 = 0;
                                }
                                if ((local_1220 & 3) != 0) {
                                  lVar34 = local_1230 + lVar28 * 4;
                                  pmVar42 = (mbstate_t *)0x0;
                                  do {
                                    uVar13 = *(undefined8 *)
                                              (pmVar42->__mbstate8 + lVar34 + -0x10 + 8);
                                    uVar14 = *(undefined8 *)(pmVar42->__mbstate8 + lVar34);
                                    uVar15 = *(undefined8 *)(pmVar42->__mbstate8 + lVar34 + 8);
                                    pbVar35 = (byte *)((longlong)(piVar57 + lVar28) +
                                                      (longlong)pmVar42->__mbstate8);
                                    *(undefined8 *)pbVar35 =
                                         *(undefined8 *)(pmVar42->__mbstate8 + lVar34 + -0x10);
                                    *(undefined8 *)(pbVar35 + 8) = uVar13;
                                    pbVar35 = (byte *)((longlong)(piVar57 + lVar28 + 4) +
                                                      (longlong)pmVar42->__mbstate8);
                                    *(undefined8 *)pbVar35 = uVar14;
                                    *(undefined8 *)(pbVar35 + 8) = uVar15;
                                    pmVar42 = (mbstate_t *)(pmVar42->__mbstate8 + 0x20);
                                  } while (pmVar36 != pmVar42);
                                }
                                pmVar42 = local_1208;
                                if (local_1208 == pmVar21) goto LAB_00f39890;
                              }
                              uVar51 = ~(ulonglong)pmVar42;
                              for (uVar48 = local_1210; uVar48 != 0; uVar48 = uVar48 - 1) {
                                piVar57[(longlong)pmVar42] = piVar58[(longlong)pmVar42];
                                pmVar42 = (mbstate_t *)((longlong)pmVar42 + 1);
                              }
                              if ((byte *)((longlong)&MACH_HEADER.magic + 2) <
                                  pmVar21->__mbstate8 + uVar51) {
                                do {
                                  piVar57[(longlong)pmVar42] = piVar58[(longlong)pmVar42];
                                  piVar57[(longlong)((longlong)pmVar42 + 1)] =
                                       *(int *)(auStack_1278 + (longlong)pmVar42 * 4 + lVar7 + 4);
                                  piVar57[(longlong)((longlong)pmVar42 + 2)] =
                                       *(int *)(auStack_1278 + (longlong)pmVar42 * 4 + lVar7 + 8);
                                  piVar57[(longlong)((longlong)pmVar42 + 3)] =
                                       *(int *)((longlong)&uStack_126c +
                                               (longlong)pmVar42 * 4 + lVar7);
                                  pmVar42 = (mbstate_t *)(pmVar42->__mbstate8 + 4);
                                } while (pmVar21 != pmVar42);
                              }
                            }
LAB_00f39890:
                            lVar34 = *local_1218;
                            uVar8 = *(undefined4 *)((longlong)local_1218 + 4);
                            lVar28 = local_1218[1];
                            uVar9 = *(undefined4 *)((longlong)local_1218 + 0xc);
                            uVar10 = *(undefined4 *)((longlong)local_1218 + 0x14);
                            lVar16 = local_1218[3];
                            uVar11 = *(undefined4 *)((longlong)local_1218 + 0x1c);
                            pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x28);
                            *(int *)pbVar35 = (int)local_1218[2];
                            *(undefined4 *)(pbVar35 + 4) = uVar10;
                            *(int *)(pbVar35 + 8) = (int)lVar16;
                            *(undefined4 *)(pbVar35 + 0xc) = uVar11;
                            pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x18);
                            *(int *)pbVar35 = (int)lVar34;
                            *(undefined4 *)(pbVar35 + 4) = uVar8;
                            *(int *)(pbVar35 + 8) = (int)lVar28;
                            *(undefined4 *)(pbVar35 + 0xc) = uVar9;
                            pmVar37 = local_1180;
                            piVar57 = *(int **)(lVar63 + 0x20);
                            pmVar26 = pmVar21;
                            if (piVar57 != (int *)0x0) {
                              local_11a0 = CONCAT44(local_11a0._4_4_,local_res8);
                              iVar20 = piVar57[8];
                              iVar41 = *(int *)((longlong)pmVar61 + lVar54 + 0x38);
                              uVar55 = iStackX_c;
                              uVar47 = local_res18;
                              uVar46 = uStackX_1c;
                              uVar32 = uStackX_20;
                              uVar30 = uStackX_24;
                              uVar31 = uStackX_14;
                              uVar19 = uStackX_10;
                              if (iVar41 < iVar20) {
                                local_11e8 = uStackX_24;
                                local_11e4 = uStackX_20;
                                local_11dc = local_res18;
                                local_11e0 = uStackX_1c;
                                local_11d8 = uStackX_14;
                                local_11d4 = uStackX_10;
                                local_11d0 = iStackX_c;
                                *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39943;
                                ___bzero((longlong)iVar41 * 5,pmVar37);
                                uVar55 = local_11d0;
                                uVar47 = local_11dc;
                                uVar46 = local_11e0;
                                uVar32 = local_11e4;
                                uVar30 = local_11e8;
                                uVar31 = local_11d8;
                                uVar19 = local_11d4;
                              }
                              pmVar26 = (mbstate_t *)(ulonglong)uVar31;
                              pmVar42 = (mbstate_t *)(ulonglong)uVar30;
                              *(int *)((longlong)pmVar61 + lVar54 + 0x38) = iVar20;
                              iVar20 = *piVar57;
                              if (iVar20 != -1) {
                                if (iVar20 == -2) {
                                  iVar20 = (int)local_11a0;
                                }
                                *(int *)((longlong)pmVar61 + lVar54 + 0x18) = iVar20;
                              }
                              iVar20 = piVar57[1];
                              if (iVar20 != -1) {
                                if (iVar20 == -2) {
                                  iVar20 = uVar55;
                                }
                                *(int *)((longlong)pmVar61 + lVar54 + 0x1c) = iVar20;
                              }
                              if (piVar57[2] != 0xfffffffe) {
                                uVar19 = piVar57[2];
                              }
                              pmVar27 = (mbstate_t *)(ulonglong)uVar19;
                              *(uint *)((longlong)pmVar61 + lVar54 + 0x20) = uVar19;
                              uVar19 = piVar57[3];
                              if (uVar19 != 0xffffffff) {
                                if (uVar19 == 0xfffffffe) {
                                  uVar19 = uVar31;
                                }
                                *(uint *)((longlong)pmVar61 + lVar54 + 0x24) = uVar19;
                              }
                              iVar20 = piVar57[4];
                              if (iVar20 != -1) {
                                if (iVar20 == -2) {
                                  iVar20 = uVar47;
                                }
                                *(int *)((longlong)pmVar61 + lVar54 + 0x28) = iVar20;
                              }
                              uVar31 = piVar57[5];
                              if (uVar31 != 0xffffffff) {
                                if (uVar31 == 0xfffffffe) {
                                  uVar31 = uVar46;
                                }
                                *(uint *)((longlong)pmVar61 + lVar54 + 0x2c) = uVar31;
                              }
                              uVar31 = piVar57[6];
                              if (uVar31 != 0xffffffff) {
                                if (uVar31 == 0xfffffffe) {
                                  uVar31 = uVar32;
                                }
                                *(uint *)((longlong)pmVar61 + lVar54 + 0x30) = uVar31;
                              }
                              uVar31 = piVar57[7];
                              if (uVar31 != 0xffffffff) {
                                if (uVar31 == 0xfffffffe) {
                                  uVar31 = uVar30;
                                }
                                *(uint *)((longlong)pmVar61 + lVar54 + 0x34) = uVar31;
                              }
                            }
                            *(int *)((longlong)pmVar61 + lVar54 + 0x38) = (int)local_11c8[7];
                            pmVar37 = local_1248[1];
                            pbVar22 = (byte *)((longlong)pmVar61 + lVar54 + 0x3c);
                            *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39a4f;
                            sVar50 = (size_t)pmVar26;
                            _memcpy(pmVar42,pmVar37,sVar50);
                            pmVar42 = local_1180;
                            pmVar26 = local_1248[0];
                            pbVar35 = (byte *)((longlong)local_1180 +
                                              (longlong)local_1190 * 4 + 0x44);
                            *(int *)pbVar35 = *(int *)pbVar35 + 1;
                            pbVar35 = (byte *)((longlong)local_1180 +
                                              (longlong)local_1190 * 4 + 0x4c);
                            *(int *)pbVar35 = *(int *)pbVar35 + 1;
                            *(uint *)((longlong)local_1180 + (longlong)local_1190 * 4 + 0x3c) =
                                 (uint)local_11a8;
                            if (0 < (int)(uint)local_11b0) {
                              *(uint *)pbVar22 = (uint)local_11c0;
                              pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x44);
                              *(int *)pbVar35 = *(int *)pbVar35 + 1;
                              pbVar35 = (byte *)((longlong)pmVar61 + lVar54 + 0x4c);
                              *(int *)pbVar35 = *(int *)pbVar35 + 1;
                            }
                            pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                            if (*(longlong *)local_1100 ==
                                *(longlong *)(unaff_RDI->__mbstate8 + 0x18)) {
                              pmVar43 = unaff_RDI;
                              if (-1 < (int)local_1134) {
                                if (((int)local_d8._mbstateL._0_4_ <= (int)(uint)local_11c0) &&
                                   (((local_d8._mbstateL._0_4_ != (uint)local_11c0 ||
                                     ((int)uVar6 < 1)) ||
                                    (pmVar43 = local_1178, (int)*(uint *)local_1178 < *piVar58))))
                                goto LAB_00f39ac9;
                              }
                              local_d8._16_4_ = *(undefined4 *)((longlong)pmVar61 + lVar54 + 0x4c);
                              local_d8._mbstateL = *(undefined8 *)pbVar22;
                              local_d8._8_8_ = *(undefined8 *)((longlong)pmVar61 + lVar54 + 0x44);
                              local_1134 = uVar25;
                              if (0 < (int)uVar6) {
                                *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39b72;
                                _memcpy(pmVar43,pmVar26,sVar50);
                                pmVar27 = (mbstate_t *)
                                          CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                                pmVar37 = pmVar26;
                              }
                            }
LAB_00f39ac9:
                            local_10f8->_mbstateL = (longlong)pmVar42;
                            pmVar26 = (mbstate_t *)(local_10f8->__mbstate8 + 8);
                            local_10f8 = pmVar26;
                            if (&local_d8 <= pmVar26) {
                              pmVar26 = local_10d8;
                              local_10f8 = local_10d8;
                            }
                          }
                        }
                      }
                      else {
                        uVar44 = (undefined7)((ulonglong)pmVar42 >> 8);
                        if (uVar56 == 0x5f) {
                          pmVar42 = (mbstate_t *)CONCAT71(uVar44,1);
                          if (local_10e0 != 0x5f) {
LAB_00f392c1:
                            if (local_10e0 < 0x80) {
                              pmVar26 = (mbstate_t *)&section_000004c0.flags;
                              uVar30 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                            }
                            else {
                              *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf393db;
                              uVar30 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)pmVar37);
                              pmVar27 = (mbstate_t *)
                                        CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                            }
                            if (SUB81(pmVar42,0) != (uVar30 != 0)) goto LAB_00f39404;
                          }
                        }
                        else {
                          if (uVar56 < 0x80) {
                            pmVar26 = (mbstate_t *)&section_000004c0.flags;
                            uVar30 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                              local_1170 * 4 + 0x3c) & 0x500;
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39397;
                            uVar30 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)pmVar37);
                            pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                          }
                          pmVar42 = (mbstate_t *)CONCAT71(uVar44,uVar30 != 0);
                          if (local_10e0 != 0x5f) goto LAB_00f392c1;
                          if (uVar30 == 0) goto LAB_00f39404;
                        }
                      }
                    }
                    else {
                      if (uVar56 != 0x5f) {
                        if (uVar56 < 0x80) {
                          pmVar26 = (mbstate_t *)&section_000004c0.flags;
                          uVar30 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                            local_1170 * 4 + 0x3c) & 0x500;
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf392fa;
                          uVar30 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)pmVar37);
                          pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                        }
                        if (uVar30 == 0) goto LAB_00f390d0;
                      }
                      if ((ulonglong)local_10e0 != 0x5f) {
                        if (local_10e0 < 0x80) {
                          pmVar26 = (mbstate_t *)&section_000004c0.flags;
                          uVar30 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                            (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39359;
                          uVar30 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)pmVar37);
                          pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar29);
                        }
                        if (uVar30 == 0) {
                          uVar30 = *(uint *)(lVar63 + 0x28);
                          goto joined_r0x00f39383;
                        }
                      }
                    }
                  }
                }
              }
LAB_00f390d0:
              local_1100 = (mbstate_t *)(lVar63 + 0x40);
              plVar62 = (longlong *)(lVar63 + 0x40);
              lVar63 = lVar63 + 0x38;
            } while (*plVar62 != 0);
          }
        }
        pmVar53 = (mbstate_t *)(pmVar53->__mbstate8 + 8);
        if (&local_d8 <= pmVar53) {
          pmVar53 = local_10d8;
        }
      } while (local_10f8 != pmVar53);
    }
    iVar20 = (int)local_1188;
    if (iVar20 < 0) {
      if (local_11cc == 3) {
        if ((int)local_11f0 != 0) goto LAB_00f3b092;
      }
      else if (local_10e0 == 0) goto LAB_00f3b092;
    }
    else if (iVar20 <= (int)uVar25) goto LAB_00f3b092;
    if (local_11cc == 1) {
      pmVar37 = (mbstate_t *)(ulonglong)(uVar25 + 1);
      if ((iVar20 < 0) || ((int)(uVar25 + 1) < iVar20)) {
        bVar40 = local_1140->__mbstate8[0];
        local_1140 = (mbstate_t *)(local_1140->__mbstate8 + 1);
        local_10e0 = (uint)bVar40;
      }
      else {
LAB_00f39cbd:
        local_10e0 = 0;
      }
    }
    else if (local_11cc == 3) {
      pmVar42 = (mbstate_t *)(ulonglong)(local_111c + uVar25);
      pcVar4 = (code *)unaff_RSI->_mbstateL;
      *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39dcd;
      local_11f0 = (*pcVar4)();
      pmVar37 = (mbstate_t *)(ulonglong)(local_111c + uVar25);
    }
    else if (local_11cc == 2) {
      uVar56 = local_111c + uVar25;
      pmVar37 = (mbstate_t *)(ulonglong)uVar56;
      if (local_1140 == (mbstate_t *)0x0) {
        local_10e0 = 0;
        local_1140 = (mbstate_t *)0x0;
      }
      else {
        uVar18 = iVar20 - uVar56;
        if (iVar20 < 0) {
          uVar18 = 0x20;
        }
        if ((int)uVar18 < 1) {
          local_10e0 = 0;
          local_111c = 1;
        }
        else {
          pmVar42 = (mbstate_t *)(ulonglong)uVar56;
          *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf39e3b;
          local_111c = _mbrtowc((wchar_t *)(local_d8.__mbstate8 + 0x20),(char *)(ulonglong)uVar18,
                                uVar6,pmVar27);
          uVar48 = CONCAT44(extraout_var_00,local_111c);
          if (0xfffffffffffffffd < uVar48) {
            if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
              return 1;
            }
            goto LAB_00f3b0e9;
          }
          if ((uVar48 == 0) && (-1 < (int)(uint)local_1188)) {
            local_111c = 1;
            local_10e0 = 0;
            local_1140 = (mbstate_t *)(local_1140->__mbstate8 + 1);
          }
          else {
            local_1140 = (mbstate_t *)((longlong)local_1140 + uVar48);
          }
          pmVar37 = (mbstate_t *)(ulonglong)uVar56;
        }
      }
    }
    else {
      pmVar37 = pmVar52;
      if (local_11cc == 0) {
        pmVar37 = (mbstate_t *)(ulonglong)(uVar25 + 1);
        if ((-1 < iVar20) && (iVar20 <= (int)(uVar25 + 1))) goto LAB_00f39cbd;
        local_10e0 = *(uint *)local_1160;
        local_1160 = (mbstate_t *)(local_1160->__mbstate8 + 4);
      }
    }
    uVar30 = (uint)pmVar37;
    uVar44 = (undefined7)((ulonglong)pmVar27 >> 8);
    pmVar27 = (mbstate_t *)CONCAT71(uVar44,uVar17 == 10);
    uVar18 = *(uint *)(unaff_RDI->__mbstate8 + 0x54);
    pmVar53 = pmVar61;
    uVar56 = uVar17;
    local_1100 = pmVar52;
    if (0 < (int)uVar18) {
      bVar40 = uVar17 == 10 & (byte)local_124c;
      pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar40);
      local_11a0 = (ulonglong)uVar17;
      puVar38 = (undefined *)0x0;
      pmVar52 = pmVar21;
LAB_00f39f61:
      pmVar26 = (mbstate_t *)((longlong)puVar38 * 0x90);
      if (((int)uVar25 <=
           (int)*(dword *)((longlong)(pmVar61->__mbstate8 + 8) + (longlong)puVar38 * 0x24 * 4)) &&
         (piVar57 = *(int **)((longlong)pmVar61 + (longlong)pmVar26),
         *(longlong *)(piVar57 + 2) != 0)) {
        local_1180 = (mbstate_t *)
                     ((dword *)((longlong)pmVar61 + (longlong)pmVar26->__mbstate8) + 0xe);
        local_11c0 = pmVar26;
        local_11a8 = (uint *)((longlong)(pmVar61->__mbstate8 + 0x3c) + (longlong)puVar38 * 0x24 * 4)
        ;
        plVar62 = (longlong *)(piVar57 + 2);
LAB_00f39fe6:
        uVar18 = piVar57[10];
        if (uVar18 == 0) {
LAB_00f3a750:
          plVar49 = (longlong *)(longlong)(int)*(uint *)local_1180;
          pmVar43 = (mbstate_t *)(longlong)piVar57[4];
          pbVar35 = (byte *)(pmVar61->__mbstate8 + (longlong)local_11c0->__mbstate8);
          local_11c8 = plVar49;
          lVar63 = (longlong)plVar49 * 5;
          if ((int)uVar17 < *piVar57) {
            uVar18 = *(uint *)(pbVar35 + (longlong)plVar49 * 0x14 + 0x3c);
LAB_00f3a7b2:
            pmVar26 = (mbstate_t *)(ulonglong)uVar18;
            uVar19 = *(uint *)((longlong)local_1180 + -0x18);
            uVar31 = uVar19 + uVar18;
            if (uVar19 == 0xffffffff) {
              uVar31 = uVar18;
            }
            pmVar42 = local_1180;
            if ((int)uVar31 <= (int)*(dword *)((longlong)local_1180 + -0x14)) {
              local_1190 = (mbstate_t *)CONCAT44(local_1190._4_4_,uVar19 + uVar18);
              uVar44 = (undefined7)((ulonglong)pmVar27 >> 8);
              if (*(int *)(pbVar35 + (longlong)plVar49 * 0x14 + 0x48) <
                  (int)*(dword *)((longlong)local_1180 + -8)) {
                pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar40);
                if (*(int *)(pbVar35 + (longlong)plVar49 * 0x14 + 0x4c) <
                    (int)*(dword *)((longlong)local_1180 + -4)) {
                  local_1218 = (longlong *)CONCAT44(local_1218._4_4_,1);
                  if ((int)*(uint *)local_1180 < 1) {
                    local_1190 = (mbstate_t *)CONCAT44(local_1190._4_4_,uVar31);
                  }
                  else if (uVar19 == 0xffffffff) {
                    uVar31 = *local_11a8 + uStackX_10;
                    local_1190 = (mbstate_t *)CONCAT44(local_1190._4_4_,uVar18);
                  }
                  else {
                    uVar31 = *local_11a8 + uVar19;
                  }
                  goto LAB_00f3a870;
                }
              }
              else {
                pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar40);
              }
            }
          }
          else {
            uVar18 = *(uint *)(pbVar35 + (longlong)plVar49 * 0x14 + 0x3c);
            if (piVar57[1] < (int)uVar17) goto LAB_00f3a7b2;
            local_1190 = (mbstate_t *)CONCAT44(local_1190._4_4_,uVar18);
            uVar31 = *local_11a8;
            local_1218 = (longlong *)((ulonglong)local_1218._4_4_ << 0x20);
LAB_00f3a870:
            local_11b0 = CONCAT44(local_11b0._4_4_,uVar31);
            if (0 < (int)uVar6) {
              piVar5 = *(int **)((longlong)local_1180 + -0x28);
              if ((uVar6 < 8) || ((piVar58 < piVar5 + (longlong)pmVar21 && (piVar5 < local_1238))))
              {
                pmVar42 = (mbstate_t *)0x0;
              }
              else {
                if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_1200) {
                  lVar34 = 0;
                  lVar54 = local_11f8;
                  do {
                    uVar13 = *(undefined8 *)(piVar5 + lVar34 + 2);
                    uVar14 = *(undefined8 *)(piVar5 + lVar34 + 4);
                    uVar15 = *(undefined8 *)(piVar5 + lVar34 + 4 + 2);
                    *(undefined8 *)(piVar58 + lVar34) = *(undefined8 *)(piVar5 + lVar34);
                    *(undefined8 *)(piVar58 + lVar34 + 2) = uVar13;
                    puVar2 = (undefined8 *)((longlong)&local_1268 + lVar34 * 4 + lVar7);
                    *puVar2 = uVar14;
                    puVar2[1] = uVar15;
                    uVar13 = *(undefined8 *)(piVar5 + lVar34 + 8 + 2);
                    uVar14 = *(undefined8 *)(piVar5 + lVar34 + 0xc);
                    uVar15 = *(undefined8 *)(piVar5 + lVar34 + 0xc + 2);
                    puVar2 = (undefined8 *)((longlong)&local_1258 + lVar34 * 4 + lVar7);
                    *puVar2 = *(undefined8 *)(piVar5 + lVar34 + 8);
                    puVar2[1] = uVar13;
                    puVar2 = (undefined8 *)((longlong)local_1248 + lVar34 * 4 + lVar7);
                    *puVar2 = uVar14;
                    puVar2[1] = uVar15;
                    uVar13 = *(undefined8 *)(piVar5 + lVar34 + 0x10 + 2);
                    uVar14 = *(undefined8 *)(piVar5 + lVar34 + 0x14);
                    uVar15 = *(undefined8 *)(piVar5 + lVar34 + 0x14 + 2);
                    puVar2 = (undefined8 *)((longlong)&local_1238 + lVar34 * 4 + lVar7);
                    *puVar2 = *(undefined8 *)(piVar5 + lVar34 + 0x10);
                    puVar2[1] = uVar13;
                    *(undefined8 *)(&stack0xffffffffffffedd8 + lVar34 * 4 + lVar7) = uVar14;
                    *(undefined8 *)((longlong)(&stack0xffffffffffffedd8 + lVar34 * 4 + lVar7) + 8) =
                         uVar15;
                    uVar13 = *(undefined8 *)(piVar5 + lVar34 + 0x18 + 2);
                    uVar14 = *(undefined8 *)(piVar5 + lVar34 + 0x1c);
                    uVar15 = *(undefined8 *)(piVar5 + lVar34 + 0x1c + 2);
                    puVar2 = (undefined8 *)((longlong)&local_1218 + lVar34 * 4 + lVar7);
                    *puVar2 = *(undefined8 *)(piVar5 + lVar34 + 0x18);
                    puVar2[1] = uVar13;
                    puVar2 = (undefined8 *)((longlong)&local_1208 + lVar34 * 4 + lVar7);
                    *puVar2 = uVar14;
                    puVar2[1] = uVar15;
                    lVar34 = lVar34 + 0x20;
                    lVar54 = lVar54 + 4;
                  } while (lVar54 != 0);
                }
                else {
                  lVar34 = 0;
                }
                if ((local_1220 & 3) != 0) {
                  lVar54 = local_1230 + lVar34 * 4;
                  pmVar42 = (mbstate_t *)0x0;
                  do {
                    pbVar22 = (byte *)((longlong)(piVar5 + lVar34) + (longlong)pmVar42->__mbstate8);
                    uVar13 = *(undefined8 *)(pbVar22 + 8);
                    pbVar35 = (byte *)((longlong)(piVar5 + lVar34 + 4) +
                                      (longlong)pmVar42->__mbstate8);
                    uVar14 = *(undefined8 *)pbVar35;
                    uVar15 = *(undefined8 *)(pbVar35 + 8);
                    *(undefined8 *)(pmVar42->__mbstate8 + lVar54 + -0x10) = *(undefined8 *)pbVar22;
                    *(undefined8 *)(pmVar42->__mbstate8 + lVar54 + -0x10 + 8) = uVar13;
                    *(undefined8 *)(pmVar42->__mbstate8 + lVar54) = uVar14;
                    *(undefined8 *)(pmVar42->__mbstate8 + lVar54 + 8) = uVar15;
                    pmVar42 = (mbstate_t *)(pmVar42->__mbstate8 + 0x20);
                  } while (pmVar36 != pmVar42);
                }
                pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar40);
                pmVar42 = local_1208;
                if (local_1208 == pmVar21) goto LAB_00f3aa4f;
              }
              uVar51 = ~(ulonglong)pmVar42;
              for (uVar48 = local_1210; uVar48 != 0; uVar48 = uVar48 - 1) {
                piVar58[(longlong)pmVar42] = piVar5[(longlong)pmVar42];
                pmVar42 = (mbstate_t *)(pmVar42->__mbstate8 + 1);
              }
              pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar40);
              if ((byte *)((longlong)&MACH_HEADER.magic + 2) < pmVar21->__mbstate8 + uVar51) {
                do {
                  piVar58[(longlong)pmVar42] = piVar5[(longlong)pmVar42];
                  *(int *)(auStack_1278 + (longlong)pmVar42 * 4 + lVar7 + 4) =
                       piVar5[(longlong)((longlong)pmVar42 + 1)];
                  *(int *)(auStack_1278 + (longlong)pmVar42 * 4 + lVar7 + 8) =
                       piVar5[(longlong)((longlong)pmVar42 + 2)];
                  *(int *)((longlong)&uStack_126c + (longlong)pmVar42 * 4 + lVar7) =
                       piVar5[(longlong)((longlong)pmVar42 + 3)];
                  pmVar42 = (mbstate_t *)(pmVar42->__mbstate8 + 4);
                } while (pmVar21 != pmVar42);
              }
            }
LAB_00f3aa4f:
            puVar23 = *(uint **)(piVar57 + 6);
            if (puVar23 != (uint *)0x0) {
              uVar18 = *puVar23;
              while (-1 < (int)uVar18) {
                puVar23 = puVar23 + 1;
                if ((int)uVar18 < (int)uVar6) {
                  piVar58[uVar18] = uVar30;
                }
                uVar18 = *puVar23;
              }
            }
            local_11b8 = plVar62;
            lVar54 = (longlong)pmVar43 * 0x90;
            if (*(uint *)((longlong)pmVar60 + lVar54 + 8) == uVar30) {
              pmVar26 = (mbstate_t *)(local_11b0 & 0xffffffff);
              iVar20 = *(int *)((longlong)pmVar60 + lVar54 + 0x3c);
              pmVar42 = pmVar43;
              if ((int)(uint)local_11b0 <= iVar20) {
                if ((uint)local_11b0 != iVar20) goto LAB_00f3ab61;
                if (0 < (int)uVar6) {
                  pmVar26 = *(mbstate_t **)((longlong)pmVar60 + lVar54 + 0x10);
                  pmVar43 = (mbstate_t *)0x0;
                  do {
                    iVar20 = piVar58[(longlong)pmVar43];
                    uVar18 = *(dword *)((longlong)pmVar26 + (longlong)pmVar43 * 4);
                    if (*(int *)(*(longlong *)(unaff_RDI->__mbstate8 + 0x38) + (longlong)pmVar43 * 4
                                ) == 0) {
                      pmVar27 = (mbstate_t *)(ulonglong)bVar40;
                      if (iVar20 < (int)uVar18) goto LAB_00f3ab61;
                      if ((int)uVar18 < iVar20) break;
                    }
                    else {
                      pmVar27 = (mbstate_t *)(ulonglong)bVar40;
                      if ((int)uVar18 < iVar20) goto LAB_00f3ab61;
                      if (iVar20 < (int)uVar18) break;
                    }
                    pmVar27 = (mbstate_t *)(ulonglong)bVar40;
                    pmVar43 = (mbstate_t *)(pmVar43->__mbstate8 + 1);
                  } while (pmVar21 != pmVar43);
                }
              }
            }
            else {
LAB_00f3ab61:
              pmVar42 = (mbstate_t *)((longlong)pmVar60 + lVar54);
              local_1248[1] = pmVar42;
              pmVar42->_mbstateL = *plVar62;
              *(uint *)((longlong)pmVar60 + lVar54 + 8) = uVar30;
              if (0 < (int)uVar6) {
                piVar5 = *(int **)((longlong)pmVar60 + lVar54 + 0x10);
                if ((uVar6 < 8) || ((piVar5 < local_1238 && (piVar58 < piVar5 + (longlong)pmVar21)))
                   ) {
                  pmVar27 = (mbstate_t *)0x0;
                }
                else {
                  if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_1200) {
                    lVar28 = 0;
                    lVar34 = local_11f8;
                    do {
                      uVar13 = *(undefined8 *)(piVar58 + lVar28 + 2);
                      puVar2 = (undefined8 *)((longlong)&local_1268 + lVar28 * 4 + lVar7);
                      uVar14 = *puVar2;
                      uVar15 = puVar2[1];
                      *(undefined8 *)(piVar5 + lVar28) = *(undefined8 *)(piVar58 + lVar28);
                      *(undefined8 *)(piVar5 + lVar28 + 2) = uVar13;
                      *(undefined8 *)(piVar5 + lVar28 + 4) = uVar14;
                      *(undefined8 *)(piVar5 + lVar28 + 4 + 2) = uVar15;
                      puVar2 = (undefined8 *)((longlong)&local_1258 + lVar28 * 4 + lVar7);
                      uVar13 = puVar2[1];
                      puVar3 = (undefined8 *)((longlong)local_1248 + lVar28 * 4 + lVar7);
                      uVar14 = *puVar3;
                      uVar15 = puVar3[1];
                      *(undefined8 *)(piVar5 + lVar28 + 8) = *puVar2;
                      *(undefined8 *)(piVar5 + lVar28 + 8 + 2) = uVar13;
                      *(undefined8 *)(piVar5 + lVar28 + 0xc) = uVar14;
                      *(undefined8 *)(piVar5 + lVar28 + 0xc + 2) = uVar15;
                      puVar2 = (undefined8 *)((longlong)&local_1238 + lVar28 * 4 + lVar7);
                      uVar13 = puVar2[1];
                      uVar14 = *(undefined8 *)(&stack0xffffffffffffedd8 + lVar28 * 4 + lVar7);
                      uVar15 = *(undefined8 *)
                                ((longlong)(&stack0xffffffffffffedd8 + lVar28 * 4 + lVar7) + 8);
                      *(undefined8 *)(piVar5 + lVar28 + 0x10) = *puVar2;
                      *(undefined8 *)(piVar5 + lVar28 + 0x10 + 2) = uVar13;
                      *(undefined8 *)(piVar5 + lVar28 + 0x14) = uVar14;
                      *(undefined8 *)(piVar5 + lVar28 + 0x14 + 2) = uVar15;
                      puVar2 = (undefined8 *)((longlong)&local_1218 + lVar28 * 4 + lVar7);
                      uVar13 = puVar2[1];
                      puVar3 = (undefined8 *)((longlong)&local_1208 + lVar28 * 4 + lVar7);
                      uVar14 = *puVar3;
                      uVar15 = puVar3[1];
                      *(undefined8 *)(piVar5 + lVar28 + 0x18) = *puVar2;
                      *(undefined8 *)(piVar5 + lVar28 + 0x18 + 2) = uVar13;
                      *(undefined8 *)(piVar5 + lVar28 + 0x1c) = uVar14;
                      *(undefined8 *)(piVar5 + lVar28 + 0x1c + 2) = uVar15;
                      lVar28 = lVar28 + 0x20;
                      lVar34 = lVar34 + 4;
                    } while (lVar34 != 0);
                  }
                  else {
                    lVar28 = 0;
                  }
                  if ((local_1220 & 3) != 0) {
                    lVar34 = local_1230 + lVar28 * 4;
                    pmVar27 = (mbstate_t *)0x0;
                    do {
                      uVar13 = *(undefined8 *)(pmVar27->__mbstate8 + lVar34 + -0x10 + 8);
                      uVar14 = *(undefined8 *)(pmVar27->__mbstate8 + lVar34);
                      uVar15 = *(undefined8 *)(pmVar27->__mbstate8 + lVar34 + 8);
                      pbVar35 = (byte *)((longlong)(piVar5 + lVar28) + (longlong)pmVar27->__mbstate8
                                        );
                      *(undefined8 *)pbVar35 = *(undefined8 *)(pmVar27->__mbstate8 + lVar34 + -0x10)
                      ;
                      *(undefined8 *)(pbVar35 + 8) = uVar13;
                      pbVar35 = (byte *)((longlong)(piVar5 + lVar28 + 4) +
                                        (longlong)pmVar27->__mbstate8);
                      *(undefined8 *)pbVar35 = uVar14;
                      *(undefined8 *)(pbVar35 + 8) = uVar15;
                      pmVar27 = (mbstate_t *)(pmVar27->__mbstate8 + 0x20);
                    } while (pmVar36 != pmVar27);
                  }
                  pmVar27 = local_1208;
                  if (local_1208 == pmVar21) goto LAB_00f3ad35;
                }
                uVar51 = ~(ulonglong)pmVar27;
                for (uVar48 = local_1210; uVar48 != 0; uVar48 = uVar48 - 1) {
                  piVar5[(longlong)pmVar27] = piVar58[(longlong)pmVar27];
                  pmVar27 = (mbstate_t *)(pmVar27->__mbstate8 + 1);
                }
                pmVar52 = pmVar21;
                if ((byte *)((longlong)&MACH_HEADER.magic + 2) < pmVar21->__mbstate8 + uVar51) {
                  do {
                    piVar5[(longlong)pmVar27] = piVar58[(longlong)pmVar27];
                    piVar5[(longlong)((longlong)pmVar27 + 1)] =
                         *(int *)(auStack_1278 + (longlong)pmVar27 * 4 + lVar7 + 4);
                    piVar5[(longlong)((longlong)pmVar27 + 2)] =
                         *(int *)(auStack_1278 + (longlong)pmVar27 * 4 + lVar7 + 8);
                    piVar5[(longlong)((longlong)pmVar27 + 3)] =
                         *(int *)((longlong)&uStack_126c + (longlong)pmVar27 * 4 + lVar7);
                    pmVar27 = (mbstate_t *)(pmVar27->__mbstate8 + 4);
                  } while (pmVar21 != pmVar27);
                }
              }
LAB_00f3ad35:
              uVar18 = *(uint *)local_1180;
              *(uint *)((longlong)pmVar60 + lVar54 + 0x38) = uVar18;
              uVar31 = *(uint *)((longlong)local_1180 + -0x20);
              uVar19 = *(uint *)((longlong)local_1180 + -0x1c);
              uVar55 = *(uint *)((longlong)local_1180 + -0x18);
              uVar47 = *(dword *)((longlong)local_1180 + -0x14);
              uVar46 = *(dword *)((longlong)local_1180 + -0xc);
              uVar32 = *(dword *)((longlong)local_1180 + -8);
              uVar12 = *(dword *)((longlong)local_1180 + -4);
              puVar23 = (uint *)((longlong)pmVar60 + lVar54 + 0x28);
              *puVar23 = *(dword *)((longlong)local_1180 + -0x10);
              puVar23[1] = uVar46;
              puVar23[2] = uVar32;
              puVar23[3] = uVar12;
              puVar23 = (uint *)((longlong)pmVar60 + lVar54 + 0x18);
              *puVar23 = uVar31;
              puVar23[1] = uVar19;
              puVar23[2] = uVar55;
              puVar23[3] = uVar47;
              piVar5 = *(int **)(piVar57 + 8);
              pmVar27 = local_1180;
              if (piVar5 != (int *)0x0) {
                local_11e4 = local_res8;
                local_11e8 = iStackX_c;
                iVar20 = piVar5[8];
                uVar55 = uStackX_10;
                uVar47 = local_res18;
                uVar46 = uStackX_1c;
                uVar32 = uStackX_20;
                uVar31 = uStackX_24;
                uVar19 = uStackX_14;
                if ((int)uVar18 < iVar20) {
                  local_11e0 = uStackX_24;
                  local_11dc = uStackX_20;
                  local_11d4 = local_res18;
                  local_11d8 = uStackX_1c;
                  local_11d0 = uStackX_14;
                  local_1170 = CONCAT44(local_1170._4_4_,uStackX_10);
                  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3adeb;
                  ___bzero((longlong)(int)uVar18 * 5,pmVar42);
                  uVar55 = (uint)local_1170;
                  uVar47 = local_11d4;
                  uVar46 = local_11d8;
                  uVar32 = local_11dc;
                  uVar31 = local_11e0;
                  uVar19 = local_11d0;
                }
                pmVar52 = (mbstate_t *)(ulonglong)uVar19;
                pmVar27 = (mbstate_t *)(ulonglong)uVar31;
                *(int *)((longlong)pmVar60 + lVar54 + 0x38) = iVar20;
                uVar18 = *piVar5;
                if (uVar18 != -1) {
                  if (uVar18 == -2) {
                    uVar18 = local_11e4;
                  }
                  *(uint *)((longlong)pmVar60 + lVar54 + 0x18) = uVar18;
                }
                uVar18 = piVar5[1];
                if (uVar18 != -1) {
                  if (uVar18 == -2) {
                    uVar18 = local_11e8;
                  }
                  *(uint *)((longlong)pmVar60 + lVar54 + 0x1c) = uVar18;
                }
                if (piVar5[2] != 0xfffffffe) {
                  uVar55 = piVar5[2];
                }
                *(uint *)((longlong)pmVar60 + lVar54 + 0x20) = uVar55;
                uVar18 = piVar5[3];
                if (uVar18 != 0xffffffff) {
                  if (uVar18 == 0xfffffffe) {
                    uVar18 = uVar19;
                  }
                  *(uint *)((longlong)pmVar60 + lVar54 + 0x24) = uVar18;
                }
                iVar20 = piVar5[4];
                if (iVar20 != -1) {
                  if (iVar20 == -2) {
                    iVar20 = uVar47;
                  }
                  *(int *)((longlong)pmVar60 + lVar54 + 0x28) = iVar20;
                }
                uVar18 = piVar5[5];
                if (uVar18 != 0xffffffff) {
                  if (uVar18 == 0xfffffffe) {
                    uVar18 = uVar46;
                  }
                  *(uint *)((longlong)pmVar60 + lVar54 + 0x2c) = uVar18;
                }
                uVar18 = piVar5[6];
                if (uVar18 != 0xffffffff) {
                  if (uVar18 == 0xfffffffe) {
                    uVar18 = uVar32;
                  }
                  *(uint *)((longlong)pmVar60 + lVar54 + 0x30) = uVar18;
                }
                uVar18 = piVar5[7];
                if (uVar18 != 0xffffffff) {
                  if (uVar18 == 0xfffffffe) {
                    uVar18 = uVar31;
                  }
                  *(uint *)((longlong)pmVar60 + lVar54 + 0x34) = uVar18;
                }
              }
              pmVar42 = (mbstate_t *)((longlong)pmVar60 + lVar54 + 0x3c);
              *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3aef2;
              _memcpy(pmVar27,(void *)((longlong)plVar49 * 0x14 + 0x14),(size_t)pmVar52);
              pmVar43 = local_1248[0];
              *(uint *)((longlong)local_1248[1] + (longlong)plVar49 * 0x14 + 0x3c) =
                   (uint)local_1190;
              pbVar35 = (byte *)((longlong)local_1248[1] + (longlong)plVar49 * 0x14 + 0x48);
              *(int *)pbVar35 = *(int *)pbVar35 + (int)local_1218;
              pbVar35 = (byte *)((longlong)local_1248[1] + (longlong)plVar49 * 0x14 + 0x4c);
              *(int *)pbVar35 = *(int *)pbVar35 + (int)local_1218;
              if (0 < (int)(uint)local_11c8) {
                *(uint *)pmVar42 = (uint)local_11b0;
                pbVar35 = (byte *)((longlong)pmVar60 + lVar54 + 0x48);
                *(int *)pbVar35 = *(int *)pbVar35 + (int)local_1218;
                pbVar35 = (byte *)((longlong)pmVar60 + lVar54 + 0x4c);
                *(int *)pbVar35 = *(int *)pbVar35 + (int)local_1218;
              }
              pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)lVar63 >> 8),bVar40);
              pmVar26 = unaff_RDI;
              if (*local_11b8 == *(longlong *)(unaff_RDI->__mbstate8 + 0x18)) {
                if (-1 < (int)local_1134) {
                  if (((int)local_d8._mbstateL._0_4_ <= (int)(uint)local_11b0) &&
                     ((((uint)local_11b0 != local_d8._mbstateL._0_4_ || ((int)uVar6 < 1)) ||
                      (pmVar26 = local_1178, (int)*(uint *)local_1178 < *piVar58))))
                  goto LAB_00f39fd0;
                }
                local_d8._mbstateL._4_4_ = *(undefined4 *)((longlong)pmVar60 + lVar54 + 0x40);
                local_d8._mbstateL._0_4_ = *(undefined4 *)((longlong)pmVar60 + lVar54 + 0x3c);
                local_d8._12_4_ = *(undefined4 *)((longlong)pmVar60 + lVar54 + 0x48);
                local_d8._8_4_ = *(undefined4 *)((longlong)pmVar60 + lVar54 + 0x44);
                local_d8._16_4_ = *(undefined4 *)((longlong)pmVar60 + lVar54 + 0x4c);
                pmVar26 = pmVar60;
                local_1134 = uVar30;
                if (0 < (int)uVar6) {
                  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3b024;
                  _memcpy(pmVar60,pmVar43,(size_t)pmVar52);
                  pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar40);
                }
              }
            }
          }
        }
        else {
          bVar24 = ((uVar18 & 1) == 0 || (int)uVar30 < 1 && (param_5 & 1) == 0) | (byte)pmVar27;
          pmVar26 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar26 >> 8),bVar24);
          if (bVar24 == 1) {
            puVar39 = puVar38;
            if ((uVar18 & 2) != 0) {
              pmVar26 = (mbstate_t *)(ulonglong)local_10e0;
              uVar31 = param_5 & 2 | local_10e0;
              puVar39 = (undefined *)(ulonglong)uVar31;
              if ((uVar31 != 0) && ((local_10e0 != 10 || (local_1224 == 0)))) goto LAB_00f39fd0;
            }
            if (((uVar18 & 0x10) != 0) && (0 < (int)uVar30)) {
              if (uVar17 != 0x5f) {
                if (uVar17 < 0x80) {
                  pmVar26 = (mbstate_t *)&section_000004c0.flags;
                  uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_11a0 * 4 + 0x3c) &
                           0x500;
                  uVar44 = (undefined7)((ulonglong)pmVar27 >> 8);
                  pmVar52 = pmVar21;
                }
                else {
                  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a0a2;
                  pmVar52 = pmVar21;
                  uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                  uVar44 = (undefined7)((ulonglong)pmVar27 >> 8);
                }
                pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar40);
                if (uVar18 != 0) goto LAB_00f39fd0;
                puVar39 = puVar38;
                if ((ulonglong)local_10e0 != 0x5f) {
                  if (local_10e0 < 0x80) {
                    pmVar26 = (mbstate_t *)&section_000004c0.flags;
                    uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                      (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a10d;
                    uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar38);
                  }
                  if (uVar18 == 0) goto LAB_00f39fb4;
                }
                goto LAB_00f3a131;
              }
              goto LAB_00f39fb4;
            }
LAB_00f3a131:
            uVar33 = (ulong)puVar39;
            uVar18 = piVar57[10];
            if ((uVar18 & 0x20) != 0) {
              if (uVar17 != 0x5f) {
                if (uVar17 < 0x80) {
                  pmVar26 = (mbstate_t *)&section_000004c0.flags;
                  uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_11a0 * 4 + 0x3c) &
                           0x500;
                }
                else {
                  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a1ed;
                  uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,uVar33);
                }
                if (uVar18 == 0) goto LAB_00f39fb4;
              }
              if ((ulonglong)local_10e0 == 0x5f) goto LAB_00f39fb4;
              if (local_10e0 < 0x80) {
                pmVar26 = (mbstate_t *)&section_000004c0.flags;
                uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                  (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                uVar44 = (undefined7)((ulonglong)pmVar27 >> 8);
                pmVar52 = pmVar21;
              }
              else {
                *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a25d;
                pmVar52 = pmVar21;
                uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,uVar33);
                uVar44 = (undefined7)((ulonglong)pmVar27 >> 8);
              }
              pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar40);
              if (uVar18 != 0) goto LAB_00f39fd0;
              uVar18 = piVar57[10];
              puVar39 = puVar38;
            }
            if ((((uVar18 & 0x40) == 0) || (uVar30 == 0)) || (local_10e0 == 0)) {
LAB_00f3a33b:
              if (-1 < (char)piVar57[10]) {
LAB_00f3a343:
                uVar31 = local_1194 & 2;
                uVar18 = piVar57[10] & 4;
                uVar44 = (undefined7)((ulonglong)pmVar27 >> 8);
                pmVar42 = (mbstate_t *)0x0;
                if ((uVar18 == 0) || (pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar40), uVar31 != 0))
                {
                  pmVar27 = (mbstate_t *)CONCAT71(uVar44,bVar40);
                  pmVar52 = pmVar21;
                }
                else {
                  if (uVar17 < 0x80) {
                    uVar18 = piVar57[0xb] &
                             *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_11a0 * 4 + 0x3c);
                    pmVar26 = (mbstate_t *)PTR___DefaultRuneLocale_0249c238;
                    pmVar52 = pmVar21;
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a3ee;
                    pmVar52 = pmVar21;
                    uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                    pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar40);
                  }
                  if (uVar18 == 0) goto LAB_00f39fd0;
                  uVar18 = piVar57[10] & 4;
                  puVar39 = puVar38;
                }
                if ((uVar18 != 0) && (uVar31 != 0)) {
                  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a443;
                  uVar18 = ___tolower((__darwin_ct_rune_t)pmVar26);
                  if (uVar18 < 0x80) {
                    pmVar26 = (mbstate_t *)(ulonglong)uVar18;
                    uVar18 = piVar57[0xb] &
                             *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                      (longlong)pmVar26 * 4 + 0x3c);
                    puVar39 = PTR___DefaultRuneLocale_0249c238;
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a466;
                    uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                  }
                  uVar33 = (ulong)puVar39;
                  pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar40);
                  if (uVar18 == 0) {
                    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a49c;
                    uVar18 = ___toupper((__darwin_ct_rune_t)pmVar26);
                    if (uVar18 < 0x80) {
                      pmVar26 = (mbstate_t *)(ulonglong)uVar18;
                      uVar18 = piVar57[0xb] &
                               *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                        (longlong)pmVar26 * 4 + 0x3c);
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a511;
                      uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,uVar33);
                    }
                    pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar40);
                    puVar39 = puVar38;
                    if (uVar18 == 0) goto LAB_00f39fd0;
                  }
                }
                if ((*(byte *)(piVar57 + 10) & 8) != 0) {
                  pmVar42 = *(mbstate_t **)(piVar57 + 0xc);
                  uVar18 = *(uint *)pmVar42;
                  if (uVar18 != 0) {
                    if ((local_1194 & 2) == 0) {
                      if (uVar17 < 0x80) {
                        do {
                          pmVar42 = (mbstate_t *)((longlong)pmVar42 + 4);
                          pmVar26 = (mbstate_t *)
                                    (ulonglong)
                                    *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                             local_11a0 * 4 + 0x3c);
                          if ((*(uint *)(PTR___DefaultRuneLocale_0249c238 + local_11a0 * 4 + 0x3c) &
                              uVar18) != 0) goto LAB_00f39fd0;
                          uVar18 = *(uint *)pmVar42;
                        } while (uVar18 != 0);
                      }
                      else {
                        do {
                          pmVar42 = (mbstate_t *)((longlong)pmVar42 + 4);
                          *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a72d;
                          iVar20 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                          if (iVar20 != 0) goto LAB_00f3b071;
                          pmVar27 = (mbstate_t *)(ulonglong)bVar40;
                        } while (*(uint *)pmVar42 != 0);
                      }
                    }
                    else {
                      do {
                        *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a5d2;
                        uVar18 = ___toupper((__darwin_ct_rune_t)pmVar26);
                        if (uVar18 < 0x80) {
                          pmVar26 = (mbstate_t *)(ulonglong)uVar18;
                          uVar18 = *(uint *)pmVar42 &
                                   *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                            (longlong)pmVar26 * 4 + 0x3c);
                          puVar39 = PTR___DefaultRuneLocale_0249c238;
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a608;
                          uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                        }
                        if (uVar18 != 0) goto LAB_00f3b071;
                        uVar33 = (ulong)puVar39;
                        *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a61f;
                        uVar18 = ___tolower((__darwin_ct_rune_t)pmVar26);
                        if (uVar18 < 0x80) {
                          pmVar26 = (mbstate_t *)(ulonglong)uVar18;
                          uVar18 = *(uint *)pmVar42 &
                                   *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                            (longlong)pmVar26 * 4 + 0x3c);
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a648;
                          uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,uVar33);
                        }
                        pmVar27 = (mbstate_t *)(ulonglong)bVar40;
                        if (uVar18 != 0) goto LAB_00f39fd0;
                        pdVar1 = (dword *)(pmVar42->__mbstate8 + 4);
                        pmVar42 = (mbstate_t *)(pmVar42->__mbstate8 + 4);
                        puVar39 = puVar38;
                      } while (*pdVar1 != 0);
                    }
                  }
                }
                goto LAB_00f3a750;
              }
              if ((uVar30 != 0) && (local_10e0 != 0)) {
                uVar44 = (undefined7)((ulonglong)pmVar42 >> 8);
                if (uVar17 == 0x5f) {
                  pmVar42 = (mbstate_t *)CONCAT71(uVar44,1);
                  if (local_10e0 == 0x5f) goto LAB_00f3a343;
                }
                else {
                  if (uVar17 < 0x80) {
                    pmVar26 = (mbstate_t *)&section_000004c0.flags;
                    uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_11a0 * 4 + 0x3c) &
                             0x500;
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a69e;
                    uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                  }
                  pmVar42 = (mbstate_t *)CONCAT71(uVar44,uVar18 != 0);
                  if (local_10e0 == 0x5f) {
                    if (uVar18 != 0) goto LAB_00f3a343;
                    goto LAB_00f39fb4;
                  }
                }
                if (local_10e0 < 0x80) {
                  pmVar26 = (mbstate_t *)&section_000004c0.flags;
                  uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                    (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                }
                else {
                  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a6e5;
                  uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                }
                bVar24 = (byte)pmVar42 ^ uVar18 != 0;
                pmVar42 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar42 >> 8),bVar24);
                if (bVar24 == 0) goto LAB_00f3a343;
              }
            }
            else {
              uVar44 = (undefined7)((ulonglong)pmVar42 >> 8);
              if (uVar17 == 0x5f) {
                pmVar42 = (mbstate_t *)CONCAT71(uVar44,1);
                if (local_10e0 != 0x5f) {
LAB_00f3a2e0:
                  if (local_10e0 < 0x80) {
                    pmVar26 = (mbstate_t *)&section_000004c0.flags;
                    uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                      (ulonglong)local_10e0 * 4 + 0x3c) & 0x500;
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a312;
                    uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                  }
                  if (SUB81(pmVar42,0) != (uVar18 != 0)) goto LAB_00f3a33b;
                }
              }
              else {
                if (uVar17 < 0x80) {
                  pmVar26 = (mbstate_t *)&section_000004c0.flags;
                  uVar18 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_11a0 * 4 + 0x3c) &
                           0x500;
                }
                else {
                  *(undefined8 *)((longlong)&uStack_1280 + lVar7) = 0xf3a2b0;
                  uVar18 = ___maskrune((__darwin_ct_rune_t)pmVar26,(ulong)puVar39);
                }
                pmVar42 = (mbstate_t *)CONCAT71(uVar44,uVar18 != 0);
                if (local_10e0 != 0x5f) goto LAB_00f3a2e0;
                if (uVar18 == 0) goto LAB_00f3a33b;
              }
            }
LAB_00f39fb4:
            pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar40);
            pmVar52 = pmVar21;
          }
        }
        goto LAB_00f39fd0;
      }
      goto LAB_00f39f51;
    }
  } while( true );
LAB_00f3b071:
  pmVar27 = (mbstate_t *)CONCAT71((int7)((ulonglong)pmVar27 >> 8),bVar40);
LAB_00f39fd0:
  plVar62 = (longlong *)(piVar57 + 0x10);
  plVar49 = (longlong *)(piVar57 + 0x10);
  piVar57 = piVar57 + 0xe;
  if (*plVar49 == 0) goto LAB_00f39f40;
  goto LAB_00f39fe6;
LAB_00f39f40:
  uVar18 = *(uint *)(unaff_RDI->__mbstate8 + 0x54);
LAB_00f39f51:
  puVar38 = puVar38 + 1;
  if ((longlong)(int)uVar18 <= (longlong)puVar38) goto LAB_00f3821a;
  goto LAB_00f39f61;
LAB_00f3b092:
  *(longlong *)(local_1258 + 0x10) = local_d8._mbstateL;
  *(undefined8 *)(local_1258 + 0x18) = local_d8._8_8_;
  *param_6 = local_1134;
  local_1134 = local_1134 >> 0x1f;
LAB_00f3b0b3:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return local_1134;
  }
LAB_00f3b0e9:
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)&uStack_1280 + lVar7) = &UNK_00f3b0ee;
  ___stack_chk_fail();
}



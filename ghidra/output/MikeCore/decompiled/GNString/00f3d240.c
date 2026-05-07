// Function: FUN_00f3d240
// Address: 00f3d240
// Size: 8490 bytes
// Class: GNString


uint FUN_00f3d240(int param_1,ulonglong param_2,uint *param_3,uint param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  mbstate_t *pmVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  byte *pbVar16;
  segment_command *psVar17;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  dword *pdVar18;
  char *pcVar19;
  dword *pdVar20;
  dword *pdVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  undefined7 uVar27;
  ulonglong uVar26;
  longlong lVar28;
  int *piVar29;
  uint *unaff_RSI;
  longlong lVar30;
  uint *puVar31;
  ulonglong uVar32;
  uint *puVar33;
  uint *puVar34;
  uint uVar35;
  longlong unaff_RDI;
  longlong lVar36;
  char *pcVar37;
  dword *pdVar38;
  size_t sVar39;
  char *pcVar40;
  bool bVar41;
  mbstate_t *pmVar42;
  char *pcVar43;
  dword *pdVar44;
  mbstate_t *pmVar45;
  longlong lVar46;
  uint uVar47;
  int iVar48;
  longlong *plVar49;
  bool bVar50;
  uint *local_res8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [36];
  uint local_1b4;
  ulonglong local_1b0;
  mbstate_t *local_1a8;
  uint *local_1a0;
  ulonglong local_198;
  dword *local_190;
  dword *local_188;
  dword *local_180;
  longlong local_178;
  uint local_16c;
  ulonglong local_168;
  int local_15c;
  dword *local_158;
  undefined8 local_150;
  uint local_144;
  ulonglong local_140;
  undefined8 local_138;
  uint *puVar51;
  dword *local_120;
  dword *local_110;
  uint *local_f8;
  dword *local_f0;
  size_t local_e8;
  uint local_e4;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_bc = 0;
  local_e8 = 1;
  local_16c = *(uint *)(unaff_RDI + 0x58);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if (param_3 == (uint *)0x0) {
    puVar34 = (uint *)0x0;
  }
  else {
    puVar34 = (uint *)(ulonglong)*(uint *)(unaff_RDI + 0x48);
  }
  uVar7 = (uint)puVar34;
  iVar14 = *(int *)(unaff_RDI + 0x54);
  iVar48 = iVar14 * 0x10;
  lVar28 = (longlong)(int)(uVar7 * 4);
  lVar8 = -((longlong)(int)(iVar14 * 0x30 + uVar7 * 4 + iVar14 * uVar7 * 4 * 2 + 0x3c) + 0xfU &
           0xfffffffffffffff0);
  pmVar45 = (mbstate_t *)(local_1d8 + lVar8);
  local_15c = param_1;
  local_144 = param_4;
  local_140 = param_2;
  *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3d331;
  ___bzero();
  uVar26 = (ulonglong)
           ((uint)((lVar28 << 0x3d) >> 0x3f) & 8 - ((uint)(pmVar45->__mbstate8 + lVar28) & 4));
  local_120 = (dword *)(pmVar45->__mbstate8 + lVar28 + uVar26);
  pmVar42 = (mbstate_t *)(longlong)(iVar48 + 0x10);
  uVar32 = (ulonglong)((uint)(char *)((longlong)local_120 + (longlong)pmVar42->__mbstate8) & 7);
  lVar46 = 8 - uVar32;
  if (uVar32 == 0) {
    lVar46 = 0;
  }
  pdVar18 = (dword *)((char *)((longlong)local_120 + (longlong)pmVar42->__mbstate8) + lVar46);
  local_158 = pdVar18;
  uVar32 = (ulonglong)((uint)(char *)((longlong)pdVar18 + (longlong)pmVar42->__mbstate8) & 7);
  lVar36 = 8 - uVar32;
  if (uVar32 == 0) {
    lVar36 = 0;
  }
  pdVar20 = &MACH_HEADER.cpusubtype;
  pcVar40 = (char *)((longlong)pdVar18 + (longlong)pmVar42->__mbstate8) + lVar36;
  uVar47 = *(uint *)(unaff_RDI + 0x54);
  if (0 < (int)uVar47) {
    uVar32 = (ulonglong)((uint)(pcVar40 + iVar48) & 7);
    lVar25 = 8 - uVar32;
    if (uVar32 == 0) {
      lVar25 = 0;
    }
    pcVar19 = pcVar40 + iVar48 + lVar25;
    if ((ulonglong)uVar47 - 1 < 3) {
      pdVar20 = (dword *)0x0;
    }
    else {
      pcVar15 = pmVar42->__mbstate8 + lVar46 + uVar26 + (longlong)pmVar45->__mbstate8 + 0x38;
      pcVar37 = pmVar45->__mbstate8 + uVar26 + 0x38;
      pcVar43 = pmVar45->__mbstate8 +
                lVar25 + lVar36 + lVar46 + uVar26 + (longlong)pmVar42 * 2 + (longlong)iVar48;
      pdVar20 = (dword *)0x0;
      do {
        *(char **)(pcVar15 + lVar28 + -0x30) = pcVar43 + lVar28;
        pcVar19 = pcVar19 + lVar28;
        *(char **)(pcVar37 + lVar28 + -0x30) = pcVar19;
        pcVar19 = pcVar19 + lVar28;
        *(char **)(pcVar15 + lVar28 + -0x20) = pcVar19;
        pcVar19 = pcVar19 + lVar28;
        *(char **)(pcVar37 + lVar28 + -0x20) = pcVar19;
        pcVar19 = pcVar19 + lVar28;
        *(char **)(pcVar15 + lVar28 + -0x10) = pcVar19;
        pcVar19 = pcVar19 + lVar28;
        *(char **)(pcVar37 + lVar28 + -0x10) = pcVar19;
        pcVar19 = pcVar19 + lVar28;
        *(char **)(pcVar15 + lVar28) = pcVar19;
        *(char **)(pcVar37 + lVar28) = pcVar19 + lVar28;
        pcVar19 = pcVar19 + lVar28 + lVar28;
        pdVar20 = pdVar20 + 1;
        pcVar15 = pcVar15 + 0x40;
        pcVar37 = pcVar37 + 0x40;
        pcVar43 = pcVar43 + lVar28 * 8;
      } while ((uint *)(ulonglong)(uVar47 & 0xfffffffc) != pdVar20);
      pcVar19 = pcVar43 + lVar28;
    }
    if ((ulonglong)(uVar47 & 3) != 0) {
      lVar25 = (longlong)pdVar20 * 0x10;
      pdVar20 = (dword *)(pmVar42->__mbstate8 + lVar25 + uVar26 + lVar46 + lVar28 +
                          (longlong)pmVar45 + 8);
      lVar30 = 0;
      do {
        *(char **)((longlong)pdVar20 + lVar30) = pcVar19;
        *(char **)((longlong)pmVar45 + lVar30 + uVar26 + lVar25 + lVar28 + 8) = pcVar19 + lVar28;
        pcVar19 = pcVar19 + lVar28 + lVar28;
        lVar30 = lVar30 + 0x10;
      } while ((ulonglong)(uVar47 & 3) << 4 != lVar30);
    }
    if ((ulonglong)uVar47 - 1 < 3) {
      uVar32 = 0;
    }
    else {
      pdVar20 = (dword *)((longlong)pmVar45 +
                         lVar36 + lVar46 + uVar26 + (longlong)pmVar42 * 2 + lVar28 + 0x30);
      uVar32 = 0;
      do {
        pdVar20[-0xc] = 0xffffffff;
        pdVar20[-8] = 0xffffffff;
        pdVar20[-4] = 0xffffffff;
        *pdVar20 = 0xffffffff;
        uVar32 = uVar32 + 4;
        pdVar20 = pdVar20 + 0x10;
      } while ((uVar47 & 0xfffffffc) != uVar32);
    }
    pdVar18 = (dword *)0x0;
    if ((ulonglong)(uVar47 & 3) != 0) {
      pdVar18 = (dword *)((ulonglong)(uVar47 & 3) << 4);
      pdVar20 = (dword *)0x0;
      do {
        pcVar19 = pmVar45->__mbstate8 +
                  uVar32 * 0x10 + lVar46 + uVar26 + lVar36 + (longlong)pmVar42 * 2 + lVar28 +
                  (longlong)pdVar20;
        pcVar19[0] = -1;
        pcVar19[1] = -1;
        pcVar19[2] = -1;
        pcVar19[3] = -1;
        pdVar20 = pdVar20 + 4;
      } while (pdVar18 != pdVar20);
    }
  }
  iVar14 = local_15c;
  sVar39 = (size_t)pcVar40;
  iVar48 = (int)local_140;
  puVar51 = unaff_RSI;
  if (((-1 < *(int *)(unaff_RDI + 0x30)) && (local_15c == 1)) && (unaff_RSI != (uint *)0x0)) {
    if (iVar48 < 0) {
      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3d6c4;
      pbVar16 = (byte *)_strchr((char *)pdVar18,(int)pdVar20);
    }
    else {
      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3d5ef;
      pbVar16 = _memchr(pdVar18,iVar48,sVar39);
    }
    if (pbVar16 == (byte *)0x0) {
LAB_00f3f3b6:
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
        return 1;
      }
LAB_00f3f3cb:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3f3d0;
      ___stack_chk_fail();
    }
    local_138 = 0;
    uVar47 = 0;
    if ((byte *)((longlong)unaff_RSI + 1U) <= pbVar16) {
      uVar47 = (uint)pbVar16[-1];
    }
    local_bc = (uint)*pbVar16;
    uVar35 = (int)pbVar16 - (int)unaff_RSI;
    local_f8 = (uint *)(pbVar16 + ((int)uVar35 < (int)local_140 || (int)local_140 < 0));
    goto LAB_00f3d8cd;
  }
  uVar47 = 0;
  local_f8 = unaff_RSI;
  if (local_15c == 1) {
    if (iVar48 != 0) {
      local_f8 = (uint *)((longlong)unaff_RSI + 1);
      local_bc = (uint)(byte)*unaff_RSI;
      local_138 = 0;
      uVar35 = 0;
      goto LAB_00f3d8cd;
    }
    local_138 = 0;
  }
  else {
    uVar35 = 0;
    if (local_15c == 3) {
      uVar5 = *(undefined8 *)(unaff_RSI + 6);
      pcVar4 = *(code **)unaff_RSI;
      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3d787;
      local_138 = (*pcVar4)(pdVar18,uVar5);
      uVar35 = 0;
      goto LAB_00f3d8cd;
    }
    if (local_15c == 2) {
      if (unaff_RSI == (uint *)0x0) {
        local_138 = 0;
        local_f8 = (uint *)0x0;
        goto LAB_00f3d8c6;
      }
      psVar17 = &segment_command_00000020;
      if (-1 < iVar48) {
        psVar17 = (segment_command *)(local_140 & 0xffffffff);
      }
      if (0 < (int)psVar17) {
        *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3d809;
        local_e8 = _mbrtowc((wchar_t *)&local_b8,(char *)psVar17,sVar39,pmVar42);
        uVar32 = CONCAT44(extraout_var,local_e8);
        local_e4 = 1;
        if (0xfffffffffffffffd < uVar32) {
LAB_00f3f395:
          if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
            return local_e4;
          }
          goto LAB_00f3f3cb;
        }
        uVar35 = 0;
        if ((uVar32 == 0) && (-1 < (int)local_140)) {
          local_e8 = 1;
          local_f8 = (uint *)((longlong)unaff_RSI + 1);
        }
        else {
          local_f8 = (uint *)(uVar32 + (longlong)unaff_RSI);
        }
        local_bc = 0;
        local_138 = 0;
        goto LAB_00f3d8cd;
      }
    }
    else if ((local_15c == 0) && (iVar48 != 0)) {
      local_bc = *unaff_RSI;
      local_138 = 0;
      puVar51 = unaff_RSI + 1;
      goto LAB_00f3d8cd;
    }
    local_138 = 0;
  }
LAB_00f3d8c6:
  local_bc = 0;
  local_e8 = 1;
  local_138 = 0;
  uVar35 = 0;
LAB_00f3d8cd:
  local_1d8._24_8_ = puVar34;
  local_1d8._8_8_ = (longlong)puVar34 * 4;
  local_1a8 = (mbstate_t *)(param_3 + (longlong)puVar34);
  local_188 = (dword *)(ulonglong)(uVar7 & 0xfffffff8);
  local_180 = (dword *)(ulonglong)(uVar7 & 0xfffffff8) + -2;
  local_1b0 = ((ulonglong)local_180 >> 3) + 1;
  local_1d8._16_8_ = ZEXT48((uint)local_1b0 & 3);
  local_198 = (ulonglong)(uVar7 & 3);
  local_178 = -(local_1b0 & 0xfffffffffffffffc);
  local_1a0 = param_3 + 4;
  pdVar18 = (dword *)(local_1d8._16_8_ << 5);
  local_190 = pdVar18;
  local_f0 = (dword *)0x0;
  local_e4 = 0xffffffff;
  local_110 = local_120;
  do {
    uVar12 = local_bc;
    if ((int)local_e4 < 0) {
      uVar27 = (undefined7)((ulonglong)pmVar42 >> 8);
      pmVar42 = (mbstate_t *)CONCAT71(uVar27,(int)uVar35 < 1);
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 8) != 0) {
        local_150 = (dword *)(CONCAT44(local_150._4_4_,local_16c) & 0xffffffff00000004);
        uVar13 = (local_16c & 4) >> 2;
        pdVar20 = (dword *)(ulonglong)uVar13;
        bVar41 = (int)uVar35 < 1 && (local_144 & 1) == 0;
        pmVar42 = (mbstate_t *)CONCAT71(uVar27,bVar41);
        local_168 = (ulonglong)uVar47;
        lVar46 = *(longlong *)(unaff_RDI + 0x10);
        do {
          while ((int)uVar35 <= *(int *)(pcVar40 + (longlong)*(int *)(lVar46 + 0x10) * 0x10)) {
LAB_00f3e1ae:
            plVar49 = (longlong *)(lVar46 + 0x40);
            lVar46 = lVar46 + 0x38;
            if (*plVar49 == 0) goto LAB_00f3e1c0;
          }
          uVar24 = *(uint *)(lVar46 + 0x28);
          if (uVar24 == 0) goto LAB_00f3dee0;
          bVar22 = (uVar24 & 1) == 0 | (byte)pmVar42 | uVar47 == 10 & (byte)uVar13;
          pdVar20 = (dword *)CONCAT71((int7)((ulonglong)pdVar20 >> 8),bVar22);
          if (bVar22 == 1) {
            if ((uVar24 & 2) != 0) {
              pdVar20 = (dword *)(ulonglong)local_bc;
              uVar23 = local_144 & 2 | local_bc;
              pdVar18 = (dword *)(ulonglong)uVar23;
              if ((uVar23 != 0) && ((local_bc != 10 || ((int)local_150 == 0)))) goto LAB_00f3da90;
            }
            if (((uVar24 & 0x10) == 0) || ((int)uVar35 < 1)) goto LAB_00f3dbe0;
            if (uVar47 != 0x5f) {
              if (uVar47 < 0x80) {
                pdVar20 = &section_000004c0.flags;
                uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_168 * 4 + 0x3c) & 0x500;
              }
              else {
                *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3db50;
                uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar20,(ulong)pdVar18);
                pmVar42 = (mbstate_t *)(ulonglong)bVar41;
              }
              if (uVar24 == 0) {
                if ((ulonglong)local_bc != 0x5f) {
                  if (local_bc < 0x80) {
                    pdVar20 = &section_000004c0.flags;
                    uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                      (ulonglong)local_bc * 4 + 0x3c) & 0x500;
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3dbb1;
                    uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar20,(ulong)pdVar18);
                    pmVar42 = (mbstate_t *)(ulonglong)bVar41;
                  }
                  if (uVar24 == 0) goto LAB_00f3da90;
                }
LAB_00f3dbe0:
                uVar24 = *(uint *)(lVar46 + 0x28);
                if ((uVar24 & 0x20) == 0) {
joined_r0x00f3dd57:
                  if ((((uVar24 & 0x40) == 0) || (uVar35 == 0)) || (local_bc == 0)) {
LAB_00f3ddec:
                    if (-1 < *(char *)(lVar46 + 0x28)) {
LAB_00f3dee0:
                      lVar28 = *(longlong *)(lVar46 + 8);
                      *(longlong *)local_120 = lVar28;
                      uVar5 = local_1d8._8_8_;
                      if (0 < (int)uVar7) {
                        *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3df08;
                        _memset(pdVar20,(int)uVar5,sVar39);
                      }
                      uVar5 = local_1d8._24_8_;
                      puVar34 = *(uint **)(lVar46 + 0x18);
                      if (puVar34 != (uint *)0x0) {
                        uVar24 = *puVar34;
                        while (-1 < (int)uVar24) {
                          puVar34 = puVar34 + 1;
                          if ((int)uVar24 < (int)uVar7) {
                            *(uint *)(*(longlong *)(local_120 + 2) + (ulonglong)uVar24 * 4) = uVar35
                            ;
                          }
                          uVar24 = *puVar34;
                        }
                      }
                      bVar50 = lVar28 == *(longlong *)(unaff_RDI + 0x18);
                      if (bVar50) {
                        local_f0 = (dword *)((longlong)&MACH_HEADER.magic + 1);
                        local_e4 = uVar35;
                      }
                      if (bVar50 && 0 < (int)uVar7) {
                        pmVar42 = *(mbstate_t **)(local_120 + 2);
                        if ((uVar7 < 8) ||
                           ((param_3 < (uint *)((longlong)pmVar42 + local_1d8._24_8_ * 4) &&
                            (pmVar42 < local_1a8)))) {
                          pdVar18 = (dword *)0x0;
                        }
                        else {
                          if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_180) {
                            lVar36 = 0;
                            lVar28 = local_178;
                            do {
                              puVar34 = (uint *)((longlong)pmVar42 + lVar36 * 4);
                              uVar9 = *(undefined8 *)(puVar34 + 2);
                              puVar2 = (undefined8 *)((longlong)pmVar42 + lVar36 * 4 + 0x10);
                              uVar10 = *puVar2;
                              uVar11 = puVar2[1];
                              *(undefined8 *)(param_3 + lVar36) = *(undefined8 *)puVar34;
                              *(undefined8 *)(param_3 + lVar36 + 2) = uVar9;
                              *(undefined8 *)(param_3 + lVar36 + 4) = uVar10;
                              *(undefined8 *)(param_3 + lVar36 + 4 + 2) = uVar11;
                              puVar2 = (undefined8 *)((longlong)pmVar42 + lVar36 * 4 + 0x20);
                              uVar9 = puVar2[1];
                              puVar3 = (undefined8 *)((longlong)pmVar42 + lVar36 * 4 + 0x30);
                              uVar10 = *puVar3;
                              uVar11 = puVar3[1];
                              *(undefined8 *)(param_3 + lVar36 + 8) = *puVar2;
                              *(undefined8 *)(param_3 + lVar36 + 8 + 2) = uVar9;
                              *(undefined8 *)(param_3 + lVar36 + 0xc) = uVar10;
                              *(undefined8 *)(param_3 + lVar36 + 0xc + 2) = uVar11;
                              puVar2 = (undefined8 *)((longlong)pmVar42 + lVar36 * 4 + 0x40);
                              uVar9 = puVar2[1];
                              puVar3 = (undefined8 *)((longlong)pmVar42 + lVar36 * 4 + 0x50);
                              uVar10 = *puVar3;
                              uVar11 = puVar3[1];
                              *(undefined8 *)(param_3 + lVar36 + 0x10) = *puVar2;
                              *(undefined8 *)(param_3 + lVar36 + 0x10 + 2) = uVar9;
                              *(undefined8 *)(param_3 + lVar36 + 0x14) = uVar10;
                              *(undefined8 *)(param_3 + lVar36 + 0x14 + 2) = uVar11;
                              puVar2 = (undefined8 *)((longlong)pmVar42 + lVar36 * 4 + 0x60);
                              uVar9 = puVar2[1];
                              puVar3 = (undefined8 *)((longlong)pmVar42 + lVar36 * 4 + 0x70);
                              uVar10 = *puVar3;
                              uVar11 = puVar3[1];
                              *(undefined8 *)(param_3 + lVar36 + 0x18) = *puVar2;
                              *(undefined8 *)(param_3 + lVar36 + 0x18 + 2) = uVar9;
                              *(undefined8 *)(param_3 + lVar36 + 0x1c) = uVar10;
                              *(undefined8 *)(param_3 + lVar36 + 0x1c + 2) = uVar11;
                              lVar36 = lVar36 + 0x20;
                              lVar28 = lVar28 + 4;
                            } while (lVar28 != 0);
                          }
                          else {
                            lVar36 = 0;
                          }
                          if (local_1d8._16_8_ != 0) {
                            puVar34 = (uint *)((longlong)pmVar42 + lVar36 * 4);
                            puVar31 = (uint *)0x0;
                            do {
                              puVar3 = (undefined8 *)((longlong)puVar34 + (longlong)puVar31);
                              uVar9 = puVar3[1];
                              puVar2 = (undefined8 *)((longlong)(puVar34 + 4) + (longlong)puVar31);
                              uVar10 = *puVar2;
                              uVar11 = puVar2[1];
                              puVar2 = (undefined8 *)
                                       ((longlong)(local_1a0 + lVar36 + -4) + (longlong)puVar31);
                              *puVar2 = *puVar3;
                              puVar2[1] = uVar9;
                              puVar2 = (undefined8 *)
                                       ((longlong)(local_1a0 + lVar36) + (longlong)puVar31);
                              *puVar2 = uVar10;
                              puVar2[1] = uVar11;
                              puVar31 = puVar31 + 8;
                            } while (local_190 != puVar31);
                          }
                          local_f0 = (dword *)((longlong)&MACH_HEADER.magic + 1);
                          pdVar18 = local_188;
                          local_e4 = uVar35;
                          if (local_188 == (dword *)local_1d8._24_8_) goto LAB_00f3e180;
                        }
                        uVar26 = ~(ulonglong)pdVar18;
                        for (uVar32 = local_198; uVar32 != 0; uVar32 = uVar32 - 1) {
                          param_3[(longlong)pdVar18] =
                               *(uint *)((longlong)pmVar42 + (longlong)pdVar18 * 4);
                          pdVar18 = (dword *)((longlong)pdVar18 + 1);
                        }
                        local_f0 = (dword *)((longlong)&MACH_HEADER.magic + 1);
                        local_e4 = uVar35;
                        if (2 < uVar26 + local_1d8._24_8_) {
                          do {
                            param_3[(longlong)pdVar18] =
                                 *(uint *)((longlong)pmVar42 + (longlong)pdVar18 * 4);
                            param_3[(longlong)((longlong)pdVar18 + 1)] =
                                 *(uint *)((longlong)pmVar42 + (longlong)pdVar18 * 4 + 4);
                            param_3[(longlong)((longlong)pdVar18 + 2)] =
                                 *(uint *)((longlong)pmVar42 + (longlong)pdVar18 * 4 + 8);
                            param_3[(longlong)((longlong)pdVar18 + 3)] =
                                 *(uint *)((longlong)pmVar42 + (longlong)pdVar18 * 4 + 0xc);
                            pdVar18 = pdVar18 + 1;
                          } while ((dword *)local_1d8._24_8_ != pdVar18);
                        }
                      }
LAB_00f3e180:
                      lVar28 = (longlong)*(int *)(lVar46 + 0x10) * 0x10;
                      *(uint *)(pcVar40 + lVar28) = uVar35;
                      pdVar20 = local_120 + 2;
                      *(dword **)(pcVar40 + lVar28 + 8) = pdVar20;
                      pdVar18 = local_120 + 4;
                      pmVar42 = (mbstate_t *)CONCAT71(SUB87(uVar5,1),bVar41);
                      local_120 = pdVar18;
                      goto LAB_00f3e1ae;
                    }
                    if ((uVar35 != 0) && (local_bc != 0)) {
                      if (uVar47 == 0x5f) {
                        bVar50 = true;
                        if (local_bc == 0x5f) goto LAB_00f3dee0;
                      }
                      else {
                        if (uVar47 < 0x80) {
                          pdVar20 = &section_000004c0.flags;
                          uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_168 * 4 + 0x3c
                                            ) & 0x500;
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3dea0;
                          uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar20,(ulong)pdVar18);
                          pmVar42 = (mbstate_t *)(ulonglong)bVar41;
                        }
                        bVar50 = uVar24 != 0;
                        if (local_bc == 0x5f) {
                          if (uVar24 != 0) goto LAB_00f3dee0;
                          goto LAB_00f3da90;
                        }
                      }
                      if (local_bc < 0x80) {
                        pdVar20 = &section_000004c0.flags;
                        uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                          (ulonglong)local_bc * 4 + 0x3c) & 0x500;
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3de60;
                        uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar20,(ulong)pdVar18);
                        pmVar42 = (mbstate_t *)(ulonglong)bVar41;
                      }
                      if (bVar50 == (uVar24 != 0)) goto LAB_00f3dee0;
                    }
                  }
                  else if (uVar47 == 0x5f) {
                    bVar50 = true;
                    if (local_bc != 0x5f) {
LAB_00f3dc84:
                      if (local_bc < 0x80) {
                        pdVar20 = &section_000004c0.flags;
                        uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                          (ulonglong)local_bc * 4 + 0x3c) & 0x500;
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3ddbb;
                        uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar20,(ulong)pdVar18);
                        pmVar42 = (mbstate_t *)(ulonglong)bVar41;
                      }
                      if (bVar50 != (uVar24 != 0)) goto LAB_00f3ddec;
                    }
                  }
                  else {
                    if (uVar47 < 0x80) {
                      pdVar20 = &section_000004c0.flags;
                      uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_168 * 4 + 0x3c) &
                               0x500;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3dd6f;
                      uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar20,(ulong)pdVar18);
                      pmVar42 = (mbstate_t *)(ulonglong)bVar41;
                    }
                    bVar50 = uVar24 != 0;
                    if (local_bc != 0x5f) goto LAB_00f3dc84;
                    if (uVar24 == 0) goto LAB_00f3ddec;
                  }
                }
                else {
                  if (uVar47 != 0x5f) {
                    if (uVar47 < 0x80) {
                      pdVar20 = &section_000004c0.flags;
                      uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + local_168 * 4 + 0x3c) &
                               0x500;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3dcc1;
                      uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar20,(ulong)pdVar18);
                      pmVar42 = (mbstate_t *)(ulonglong)bVar41;
                    }
                    if (uVar24 == 0) goto LAB_00f3da90;
                  }
                  if ((ulonglong)local_bc != 0x5f) {
                    if (local_bc < 0x80) {
                      pdVar20 = &section_000004c0.flags;
                      uVar24 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                        (ulonglong)local_bc * 4 + 0x3c) & 0x500;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3dd27;
                      uVar24 = ___maskrune((__darwin_ct_rune_t)pdVar20,(ulong)pdVar18);
                      pmVar42 = (mbstate_t *)(ulonglong)bVar41;
                    }
                    if (uVar24 == 0) {
                      uVar24 = *(uint *)(lVar46 + 0x28);
                      goto joined_r0x00f3dd57;
                    }
                  }
                }
              }
            }
          }
LAB_00f3da90:
          plVar49 = (longlong *)(lVar46 + 0x40);
          lVar46 = lVar46 + 0x38;
        } while (*plVar49 != 0);
      }
LAB_00f3e1c0:
      local_120[0] = 0;
      local_120[1] = 0;
      iVar48 = (int)local_140;
      iVar14 = local_15c;
      if (-1 < iVar48) goto LAB_00f3d9fb;
LAB_00f3e1ea:
      if (iVar14 != 3) {
        if (local_bc != 0) goto LAB_00f3e207;
        goto LAB_00f3f386;
      }
      if ((int)local_138 != 0) goto LAB_00f3f386;
    }
    else {
      if ((uVar7 == 0) || (local_120 == local_110)) goto LAB_00f3f386;
      iVar48 = (int)local_140;
      if (iVar48 < 0) goto LAB_00f3e1ea;
LAB_00f3d9fb:
      if (iVar48 <= (int)uVar35) {
LAB_00f3f386:
        *local_res8 = local_e4;
        local_e4 = local_e4 >> 0x1f;
        goto LAB_00f3f395;
      }
    }
LAB_00f3e207:
    iVar48 = (int)local_140;
    if (iVar14 == 1) {
      uVar35 = uVar35 + 1;
      if ((iVar48 < 0) || ((int)uVar35 < iVar48)) {
        uVar47 = *local_f8;
        local_f8 = (uint *)((longlong)local_f8 + 1);
        local_bc = (uint)(byte)uVar47;
      }
      else {
        local_bc = 0;
      }
    }
    else if (iVar14 == 3) {
      uVar35 = uVar35 + local_e8;
      pcVar4 = *(code **)unaff_RSI;
      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e2d5;
      local_138 = (*pcVar4)();
    }
    else if (iVar14 == 2) {
      uVar35 = uVar35 + local_e8;
      if (local_f8 == (uint *)0x0) {
        local_bc = 0;
        local_f8 = (uint *)0x0;
      }
      else {
        uVar47 = iVar48 - uVar35;
        if (iVar48 < 0) {
          uVar47 = 0x20;
        }
        if ((int)uVar47 < 1) {
          local_bc = 0;
          local_e8 = 1;
        }
        else {
          *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e449;
          local_e8 = _mbrtowc((wchar_t *)&local_b8,(char *)(ulonglong)uVar47,sVar39,pmVar42);
          uVar32 = CONCAT44(extraout_var_00,local_e8);
          if (0xfffffffffffffffd < uVar32) goto LAB_00f3f3b6;
          if ((uVar32 == 0) && (-1 < (int)local_140)) {
            local_e8 = 1;
            local_bc = 0;
            local_f8 = (uint *)((longlong)local_f8 + 1);
          }
          else {
            local_f8 = (uint *)((longlong)local_f8 + uVar32);
          }
        }
      }
    }
    else if (iVar14 == 0) {
      uVar35 = uVar35 + 1;
      if ((iVar48 < 0) || ((int)uVar35 < iVar48)) {
        local_bc = *puVar51;
        puVar51 = puVar51 + 1;
      }
      else {
        local_bc = 0;
      }
    }
    pdVar18 = local_f0;
    pdVar20 = local_110;
    local_120 = local_158;
    if ((*(int *)(unaff_RDI + 0x4c) != 0) && ((int)local_f0 != 0)) {
      lVar46 = *(longlong *)local_110;
      pdVar20 = local_158;
      if (lVar46 != 0) {
        uVar47 = **(uint **)(unaff_RDI + 0x40);
        if ((int)uVar47 < 0) {
          pdVar18 = local_110 + 2;
          do {
            *(longlong *)pdVar20 = lVar46;
            uVar5 = *(undefined8 *)(pdVar20 + 2);
            *(undefined8 *)(pdVar20 + 2) = *(undefined8 *)pdVar18;
            *(undefined8 *)pdVar18 = uVar5;
            pdVar20 = pdVar20 + 4;
            lVar46 = *(longlong *)(pdVar18 + 2);
            pdVar18 = pdVar18 + 4;
          } while (lVar46 != 0);
        }
        else {
          pdVar44 = *(uint **)(unaff_RDI + 0x40) + 2;
          pdVar21 = pdVar44;
          uVar13 = uVar47;
          pdVar38 = local_110;
LAB_00f3e3ba:
          do {
            pdVar18 = pdVar21;
            if (((int)uVar13 < (int)uVar7) &&
               ((lVar28 = *(longlong *)(pdVar38 + 2),
                *(uint *)(lVar28 + (longlong)(int)pdVar21[-1] * 4) != param_3[(int)pdVar21[-1]] ||
                ((int)param_3[uVar13] <= *(int *)(lVar28 + (ulonglong)uVar13 * 4))))) {
              uVar13 = *pdVar21;
              pdVar21 = pdVar21 + 2;
              if (-1 < (int)uVar13) goto LAB_00f3e3ba;
              *(longlong *)pdVar20 = lVar46;
              uVar5 = *(undefined8 *)(pdVar20 + 2);
              *(longlong *)(pdVar20 + 2) = lVar28;
              *(undefined8 *)(pdVar38 + 2) = uVar5;
              pdVar20 = pdVar20 + 4;
              pdVar18 = pdVar21;
            }
            lVar46 = *(longlong *)(pdVar38 + 4);
            pdVar38 = pdVar38 + 4;
            pdVar21 = pdVar44;
            uVar13 = uVar47;
          } while (lVar46 != 0);
        }
      }
      *(undefined8 *)pdVar20 = 0;
      local_f0 = (dword *)0x0;
      pdVar20 = local_158;
      local_120 = local_110;
    }
    uVar47 = local_144 & 1;
    uVar27 = (undefined7)((ulonglong)pdVar18 >> 8);
    pdVar18 = (dword *)CONCAT71(uVar27,uVar12 == 10);
    piVar29 = *(int **)pdVar20;
    local_158 = pdVar20;
    local_1d8._0_8_ = local_120;
    if (piVar29 != (int *)0x0) {
      local_1b4 = local_16c & 4;
      pdVar21 = (dword *)0x0;
      bVar22 = uVar12 == 10 & (byte)((local_16c & 4) >> 2);
      pdVar18 = (dword *)CONCAT71(uVar27,bVar22);
      local_168 = CONCAT71(local_168._1_7_,bVar22);
      local_150 = (dword *)(ulonglong)uVar12;
      local_110 = pdVar20;
      do {
        if (*(longlong *)(piVar29 + 2) != 0) {
          plVar49 = (longlong *)(piVar29 + 2);
          pmVar42 = pmVar45;
          do {
            pmVar45 = pmVar42;
            if ((*piVar29 <= (int)uVar12) && ((int)uVar12 <= piVar29[1])) {
              uVar13 = piVar29[10];
              if (uVar13 == 0) {
LAB_00f3ec69:
                uVar5 = local_1d8._24_8_;
                if (0 < (int)uVar7) {
                  puVar34 = *(uint **)(local_110 + 2);
                  if ((uVar7 < 8) ||
                     ((pmVar42 < (mbstate_t *)(puVar34 + local_1d8._24_8_) &&
                      (puVar34 < (uint *)((longlong)pmVar42 + local_1d8._24_8_ * 4))))) {
                    pdVar20 = (dword *)0x0;
                  }
                  else {
                    if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_180) {
                      lVar28 = 0;
                      lVar46 = local_178;
                      do {
                        uVar9 = *(undefined8 *)(puVar34 + lVar28 + 2);
                        uVar10 = *(undefined8 *)(puVar34 + lVar28 + 4);
                        uVar11 = *(undefined8 *)(puVar34 + lVar28 + 4 + 2);
                        puVar31 = (uint *)((longlong)pmVar42 + lVar28 * 4);
                        *(undefined8 *)puVar31 = *(undefined8 *)(puVar34 + lVar28);
                        *(undefined8 *)(puVar31 + 2) = uVar9;
                        puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x10);
                        *puVar2 = uVar10;
                        puVar2[1] = uVar11;
                        uVar9 = *(undefined8 *)(puVar34 + lVar28 + 8 + 2);
                        uVar10 = *(undefined8 *)(puVar34 + lVar28 + 0xc);
                        uVar11 = *(undefined8 *)(puVar34 + lVar28 + 0xc + 2);
                        puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x20);
                        *puVar2 = *(undefined8 *)(puVar34 + lVar28 + 8);
                        puVar2[1] = uVar9;
                        puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x30);
                        *puVar2 = uVar10;
                        puVar2[1] = uVar11;
                        uVar9 = *(undefined8 *)(puVar34 + lVar28 + 0x10 + 2);
                        uVar10 = *(undefined8 *)(puVar34 + lVar28 + 0x14);
                        uVar11 = *(undefined8 *)(puVar34 + lVar28 + 0x14 + 2);
                        puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x40);
                        *puVar2 = *(undefined8 *)(puVar34 + lVar28 + 0x10);
                        puVar2[1] = uVar9;
                        puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x50);
                        *puVar2 = uVar10;
                        puVar2[1] = uVar11;
                        uVar9 = *(undefined8 *)(puVar34 + lVar28 + 0x18 + 2);
                        uVar10 = *(undefined8 *)(puVar34 + lVar28 + 0x1c);
                        uVar11 = *(undefined8 *)(puVar34 + lVar28 + 0x1c + 2);
                        puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x60);
                        *puVar2 = *(undefined8 *)(puVar34 + lVar28 + 0x18);
                        puVar2[1] = uVar9;
                        puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x70);
                        *puVar2 = uVar10;
                        puVar2[1] = uVar11;
                        lVar28 = lVar28 + 0x20;
                        lVar46 = lVar46 + 4;
                      } while (lVar46 != 0);
                    }
                    else {
                      lVar28 = 0;
                    }
                    pdVar18 = local_190;
                    if ((local_1b0 & 3) != 0) {
                      puVar31 = (uint *)((longlong)pmVar42 + lVar28 * 4);
                      puVar33 = (uint *)0x0;
                      do {
                        puVar3 = (undefined8 *)((longlong)(puVar34 + lVar28) + (longlong)puVar33);
                        uVar9 = puVar3[1];
                        puVar2 = (undefined8 *)
                                 ((longlong)(puVar34 + lVar28 + 4) + (longlong)puVar33);
                        uVar10 = *puVar2;
                        uVar11 = puVar2[1];
                        puVar2 = (undefined8 *)((longlong)puVar31 + (longlong)puVar33);
                        *puVar2 = *puVar3;
                        puVar2[1] = uVar9;
                        puVar2 = (undefined8 *)((longlong)(puVar31 + 4) + (longlong)puVar33);
                        *puVar2 = uVar10;
                        puVar2[1] = uVar11;
                        puVar33 = puVar33 + 8;
                      } while (pdVar18 != puVar33);
                    }
                    pdVar20 = local_188;
                    pdVar18 = local_188;
                    if (local_188 == (dword *)uVar5) goto LAB_00f3ee04;
                  }
                  uVar26 = ~(ulonglong)pdVar20;
                  for (uVar32 = local_198; uVar32 != 0; uVar32 = uVar32 - 1) {
                    *(uint *)((longlong)pmVar42 + (longlong)pdVar20 * 4) =
                         puVar34[(longlong)pdVar20];
                    pdVar20 = (dword *)((longlong)pdVar20 + 1);
                  }
                  pdVar18 = (dword *)(uVar26 + uVar5);
                  if ((uint *)((longlong)&MACH_HEADER.magic + 2) < (dword *)(uVar26 + uVar5)) {
                    do {
                      *(uint *)((longlong)pmVar42 + (longlong)pdVar20 * 4) =
                           puVar34[(longlong)pdVar20];
                      *(uint *)((longlong)pmVar42 + (longlong)pdVar20 * 4 + 4) =
                           puVar34[(longlong)((longlong)pdVar20 + 1)];
                      *(uint *)((longlong)pmVar42 + (longlong)pdVar20 * 4 + 8) =
                           puVar34[(longlong)((longlong)pdVar20 + 2)];
                      pdVar18 = (dword *)(ulonglong)puVar34[(longlong)((longlong)pdVar20 + 3)];
                      *(uint *)((longlong)pmVar42 + (longlong)pdVar20 * 4 + 0xc) =
                           puVar34[(longlong)((longlong)pdVar20 + 3)];
                      pdVar20 = pdVar20 + 1;
                    } while ((dword *)uVar5 != pdVar20);
                  }
                }
LAB_00f3ee04:
                puVar34 = *(uint **)(piVar29 + 6);
                if (puVar34 != (uint *)0x0) {
                  uVar13 = *puVar34;
                  while (-1 < (int)uVar13) {
                    puVar34 = puVar34 + 1;
                    if ((int)uVar13 < (int)uVar7) {
                      *(uint *)((longlong)pmVar42 + (ulonglong)uVar13 * 4) = uVar35;
                    }
                    uVar13 = *puVar34;
                  }
                }
                pdVar21 = (dword *)((longlong)piVar29[4] * 0x10);
                if (*(int *)(pcVar40 + (longlong)pdVar21) < (int)uVar35) {
                  pdVar18 = (dword *)(pcVar40 + (longlong)pdVar21);
                  lVar46 = *plVar49;
                  *(longlong *)local_120 = lVar46;
                  pmVar45 = *(mbstate_t **)(local_120 + 2);
                  *(mbstate_t **)(local_120 + 2) = pmVar42;
                  *pdVar18 = uVar35;
                  *(dword **)(pcVar40 + 8 + (longlong)pdVar21) = local_120 + 2;
                  if (lVar46 == *(longlong *)(unaff_RDI + 0x18)) {
                    if (local_e4 == 0xffffffff) {
                      if (0 < (int)uVar7) goto LAB_00f3efd2;
                    }
                    else {
                      if (((int)uVar7 < 1) ||
                         (pdVar21 = (dword *)(ulonglong)*(uint *)pmVar42,
                         (int)*param_3 < (int)*(uint *)pmVar42)) goto LAB_00f3f0af;
LAB_00f3efd2:
                      if ((uVar7 < 8) ||
                         ((param_3 < (uint *)((longlong)pmVar42 + uVar5 * 4) &&
                          (pmVar42 < local_1a8)))) {
                        pdVar21 = (dword *)0x0;
                      }
                      else {
                        if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_180) {
                          lVar28 = 0;
                          lVar46 = local_178;
                          do {
                            puVar34 = (uint *)((longlong)pmVar42 + lVar28 * 4);
                            uVar9 = *(undefined8 *)(puVar34 + 2);
                            puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x10);
                            uVar10 = *puVar2;
                            uVar11 = puVar2[1];
                            *(undefined8 *)(param_3 + lVar28) = *(undefined8 *)puVar34;
                            *(undefined8 *)(param_3 + lVar28 + 2) = uVar9;
                            *(undefined8 *)(param_3 + lVar28 + 4) = uVar10;
                            *(undefined8 *)(param_3 + lVar28 + 4 + 2) = uVar11;
                            puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x20);
                            uVar9 = puVar2[1];
                            puVar3 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x30);
                            uVar10 = *puVar3;
                            uVar11 = puVar3[1];
                            *(undefined8 *)(param_3 + lVar28 + 8) = *puVar2;
                            *(undefined8 *)(param_3 + lVar28 + 8 + 2) = uVar9;
                            *(undefined8 *)(param_3 + lVar28 + 0xc) = uVar10;
                            *(undefined8 *)(param_3 + lVar28 + 0xc + 2) = uVar11;
                            puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x40);
                            uVar9 = puVar2[1];
                            puVar3 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x50);
                            uVar10 = *puVar3;
                            uVar11 = puVar3[1];
                            *(undefined8 *)(param_3 + lVar28 + 0x10) = *puVar2;
                            *(undefined8 *)(param_3 + lVar28 + 0x10 + 2) = uVar9;
                            *(undefined8 *)(param_3 + lVar28 + 0x14) = uVar10;
                            *(undefined8 *)(param_3 + lVar28 + 0x14 + 2) = uVar11;
                            puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x60);
                            uVar9 = puVar2[1];
                            puVar3 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x70);
                            uVar10 = *puVar3;
                            uVar11 = puVar3[1];
                            *(undefined8 *)(param_3 + lVar28 + 0x18) = *puVar2;
                            *(undefined8 *)(param_3 + lVar28 + 0x18 + 2) = uVar9;
                            *(undefined8 *)(param_3 + lVar28 + 0x1c) = uVar10;
                            *(undefined8 *)(param_3 + lVar28 + 0x1c + 2) = uVar11;
                            lVar28 = lVar28 + 0x20;
                            lVar46 = lVar46 + 4;
                            pdVar18 = (dword *)0x0;
                          } while (lVar46 != 0);
                        }
                        else {
                          lVar28 = 0;
                        }
                        if ((local_1b0 & 3) != 0) {
                          pdVar18 = local_1a0 + lVar28;
                          puVar34 = (uint *)((longlong)pmVar42 + lVar28 * 4);
                          puVar31 = (uint *)0x0;
                          do {
                            puVar3 = (undefined8 *)((longlong)puVar34 + (longlong)puVar31);
                            uVar9 = puVar3[1];
                            puVar2 = (undefined8 *)((longlong)(puVar34 + 4) + (longlong)puVar31);
                            uVar10 = *puVar2;
                            uVar11 = puVar2[1];
                            *(undefined8 *)((longlong)(pdVar18 + -4) + (longlong)puVar31) = *puVar3;
                            ((undefined8 *)((longlong)(pdVar18 + -4) + (longlong)puVar31))[1] =
                                 uVar9;
                            *(undefined8 *)((longlong)pdVar18 + (longlong)puVar31) = uVar10;
                            ((undefined8 *)((longlong)pdVar18 + (longlong)puVar31))[1] = uVar11;
                            puVar31 = puVar31 + 8;
                          } while (local_190 != puVar31);
                        }
                        local_f0 = (dword *)((longlong)&MACH_HEADER.magic + 1);
                        pdVar21 = local_188;
                        local_e4 = uVar35;
                        if (local_188 == (dword *)uVar5) goto LAB_00f3f0af;
                      }
                      pdVar18 = (dword *)(~(ulonglong)pdVar21 + uVar5);
                      for (uVar32 = local_198; uVar32 != 0; uVar32 = uVar32 - 1) {
                        param_3[(longlong)pdVar21] =
                             *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4);
                        pdVar21 = (dword *)((longlong)pdVar21 + 1);
                      }
                      if ((uint *)((longlong)&MACH_HEADER.magic + 2) < pdVar18) {
                        do {
                          param_3[(longlong)pdVar21] =
                               *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4);
                          param_3[(longlong)((longlong)pdVar21 + 1)] =
                               *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4 + 4);
                          param_3[(longlong)((longlong)pdVar21 + 2)] =
                               *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4 + 8);
                          uVar13 = *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4 + 0xc);
                          pdVar18 = (dword *)(ulonglong)uVar13;
                          param_3[(longlong)((longlong)pdVar21 + 3)] = uVar13;
                          pdVar21 = pdVar21 + 1;
                        } while ((dword *)uVar5 != pdVar21);
                      }
                    }
                    local_f0 = (dword *)((longlong)&MACH_HEADER.magic + 1);
                    local_e4 = uVar35;
                  }
LAB_00f3f0af:
                  local_120 = local_120 + 4;
                }
                else if (0 < (int)uVar7) {
                  pdVar18 = *(dword **)(unaff_RDI + 0x38);
                  pcVar19 = pcVar40 + 8 + (longlong)pdVar21;
                  pmVar6 = (mbstate_t *)**(undefined8 **)pcVar19;
                  puVar34 = (uint *)0x0;
LAB_00f3eec9:
                  uVar13 = *(uint *)((longlong)pmVar42 + (longlong)puVar34 * 4);
                  uVar24 = *(uint *)((longlong)pmVar6 + (longlong)puVar34 * 4);
                  pdVar21 = (dword *)(ulonglong)uVar24;
                  if (pdVar18[(longlong)puVar34] == 0) {
                    if ((int)uVar13 < (int)uVar24) goto LAB_00f3ef2b;
                    if ((int)uVar13 <= (int)uVar24) goto LAB_00f3eec0;
                  }
                  else if ((int)uVar24 < (int)uVar13) {
LAB_00f3ef2b:
                    **(undefined8 **)pcVar19 = pmVar42;
                    pdVar21 = (dword *)*plVar49;
                    pmVar45 = pmVar6;
                    if (pdVar21 == *(uint **)(unaff_RDI + 0x18)) {
                      if ((7 < uVar7) &&
                         (((uint *)((longlong)pmVar42 + uVar5 * 4) <= param_3 ||
                          (local_1a8 <= pmVar42)))) {
                        if ((uint *)((longlong)&MACH_HEADER.sizeofcmds + 3) < local_180) {
                          lVar28 = 0;
                          lVar46 = local_178;
                          do {
                            puVar34 = (uint *)((longlong)pmVar42 + lVar28 * 4);
                            uVar9 = *(undefined8 *)(puVar34 + 2);
                            puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x10);
                            uVar10 = *puVar2;
                            uVar11 = puVar2[1];
                            *(undefined8 *)(param_3 + lVar28) = *(undefined8 *)puVar34;
                            *(undefined8 *)(param_3 + lVar28 + 2) = uVar9;
                            *(undefined8 *)(param_3 + lVar28 + 4) = uVar10;
                            *(undefined8 *)(param_3 + lVar28 + 4 + 2) = uVar11;
                            puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x20);
                            uVar9 = puVar2[1];
                            puVar3 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x30);
                            uVar10 = *puVar3;
                            uVar11 = puVar3[1];
                            *(undefined8 *)(param_3 + lVar28 + 8) = *puVar2;
                            *(undefined8 *)(param_3 + lVar28 + 8 + 2) = uVar9;
                            *(undefined8 *)(param_3 + lVar28 + 0xc) = uVar10;
                            *(undefined8 *)(param_3 + lVar28 + 0xc + 2) = uVar11;
                            puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x40);
                            uVar9 = puVar2[1];
                            puVar3 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x50);
                            uVar10 = *puVar3;
                            uVar11 = puVar3[1];
                            *(undefined8 *)(param_3 + lVar28 + 0x10) = *puVar2;
                            *(undefined8 *)(param_3 + lVar28 + 0x10 + 2) = uVar9;
                            *(undefined8 *)(param_3 + lVar28 + 0x14) = uVar10;
                            *(undefined8 *)(param_3 + lVar28 + 0x14 + 2) = uVar11;
                            puVar2 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x60);
                            uVar9 = puVar2[1];
                            puVar3 = (undefined8 *)((longlong)pmVar42 + lVar28 * 4 + 0x70);
                            uVar10 = *puVar3;
                            uVar11 = puVar3[1];
                            *(undefined8 *)(param_3 + lVar28 + 0x18) = *puVar2;
                            *(undefined8 *)(param_3 + lVar28 + 0x18 + 2) = uVar9;
                            *(undefined8 *)(param_3 + lVar28 + 0x1c) = uVar10;
                            *(undefined8 *)(param_3 + lVar28 + 0x1c + 2) = uVar11;
                            lVar28 = lVar28 + 0x20;
                            lVar46 = lVar46 + 4;
                            pdVar18 = (dword *)0x0;
                          } while (lVar46 != 0);
                        }
                        else {
                          lVar28 = 0;
                        }
                        if ((local_1b0 & 3) != 0) {
                          pdVar18 = local_1a0 + lVar28;
                          puVar34 = (uint *)((longlong)pmVar42 + lVar28 * 4);
                          puVar31 = (uint *)0x0;
                          do {
                            puVar3 = (undefined8 *)((longlong)puVar34 + (longlong)puVar31);
                            uVar9 = puVar3[1];
                            puVar2 = (undefined8 *)((longlong)(puVar34 + 4) + (longlong)puVar31);
                            uVar10 = *puVar2;
                            uVar11 = puVar2[1];
                            *(undefined8 *)((longlong)(pdVar18 + -4) + (longlong)puVar31) = *puVar3;
                            ((undefined8 *)((longlong)(pdVar18 + -4) + (longlong)puVar31))[1] =
                                 uVar9;
                            *(undefined8 *)((longlong)pdVar18 + (longlong)puVar31) = uVar10;
                            ((undefined8 *)((longlong)pdVar18 + (longlong)puVar31))[1] = uVar11;
                            puVar31 = puVar31 + 8;
                          } while (local_190 != puVar31);
                        }
                        pdVar21 = local_188;
                        if (local_188 != (dword *)uVar5) {
LAB_00f3ef71:
                          pdVar18 = (dword *)(~(ulonglong)pdVar21 + uVar5);
                          for (uVar32 = local_198; uVar32 != 0; uVar32 = uVar32 - 1) {
                            param_3[(longlong)pdVar21] =
                                 *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4);
                            pdVar21 = (dword *)((longlong)pdVar21 + 1);
                          }
                          if ((uint *)((longlong)&MACH_HEADER.magic + 2) < pdVar18) {
                            do {
                              param_3[(longlong)pdVar21] =
                                   *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4);
                              param_3[(longlong)((longlong)pdVar21 + 1)] =
                                   *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4 + 4);
                              param_3[(longlong)((longlong)pdVar21 + 2)] =
                                   *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4 + 8);
                              uVar13 = *(uint *)((longlong)pmVar42 + (longlong)pdVar21 * 4 + 0xc);
                              pdVar18 = (dword *)(ulonglong)uVar13;
                              param_3[(longlong)((longlong)pdVar21 + 3)] = uVar13;
                              pdVar21 = pdVar21 + 1;
                            } while ((dword *)uVar5 != pdVar21);
                          }
                        }
                        local_f0 = (dword *)((longlong)&MACH_HEADER.magic + 1);
                        local_e4 = uVar35;
                        goto LAB_00f3eea3;
                      }
                      pdVar21 = (dword *)0x0;
                      goto LAB_00f3ef71;
                    }
                  }
                  else if ((int)uVar24 <= (int)uVar13) goto LAB_00f3eec0;
                }
              }
              else {
                bVar22 = ((uVar13 & 1) == 0 || (int)uVar35 < 1 && uVar47 == 0) | (byte)local_168;
                pdVar21 = (dword *)CONCAT71((int7)((ulonglong)pdVar21 >> 8),bVar22);
                if (bVar22 == 1) {
                  if ((uVar13 & 2) != 0) {
                    pdVar21 = (dword *)(ulonglong)local_bc;
                    uVar24 = local_144 & 2 | local_bc;
                    pdVar18 = (dword *)(ulonglong)uVar24;
                    if ((uVar24 != 0) && ((local_bc != 10 || (local_1b4 == 0)))) goto LAB_00f3eea3;
                  }
                  if (((uVar13 & 0x10) == 0) || ((int)uVar35 < 1)) goto LAB_00f3e6f1;
                  if (uVar12 != 0x5f) {
                    if (uVar12 < 0x80) {
                      pdVar21 = &section_000004c0.flags;
                      uVar13 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                        (longlong)local_150 * 4 + 0x3c) & 0x500;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e675;
                      uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,(ulong)pdVar18);
                    }
                    if (uVar13 == 0) {
                      if ((ulonglong)local_bc != 0x5f) {
                        if (local_bc < 0x80) {
                          pdVar21 = &section_000004c0.flags;
                          uVar13 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                            (ulonglong)local_bc * 4 + 0x3c) & 0x500;
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e6ce;
                          uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,(ulong)pdVar18);
                        }
                        if (uVar13 == 0) goto LAB_00f3eea3;
                      }
LAB_00f3e6f1:
                      uVar13 = piVar29[10];
                      if ((uVar13 & 0x20) == 0) {
joined_r0x00f3e859:
                        if ((((uVar13 & 0x40) == 0) || (uVar35 == 0)) || (local_bc == 0)) {
LAB_00f3e8db:
                          if (-1 < (char)piVar29[10]) goto LAB_00f3e8e1;
                          if ((uVar35 != 0) && (local_bc != 0)) {
                            if (uVar12 == 0x5f) {
                              bVar41 = true;
                              if (local_bc == 0x5f) goto LAB_00f3e8e1;
                            }
                            else {
                              if (uVar12 < 0x80) {
                                pdVar21 = &section_000004c0.flags;
                                uVar13 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                  (longlong)local_150 * 4 + 0x3c) & 0x500;
                              }
                              else {
                                *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3ea6e;
                                uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,(ulong)pdVar18);
                              }
                              bVar41 = uVar13 != 0;
                              if (local_bc == 0x5f) {
                                if (uVar13 != 0) goto LAB_00f3e8e1;
                                goto LAB_00f3eea3;
                              }
                            }
                            if (local_bc < 0x80) {
                              pdVar21 = &section_000004c0.flags;
                              if (!(bool)(bVar41 ^ (*(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                             (ulonglong)local_bc * 4 + 0x3c) & 0x500
                                                   ) != 0)) {
LAB_00f3e8e1:
                                if ((*(byte *)(piVar29 + 10) & 4) != 0) {
                                  if ((*(byte *)(unaff_RDI + 0x58) & 2) == 0) {
                                    if (uVar12 < 0x80) {
                                      uVar13 = piVar29[0xb] &
                                               *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                        (longlong)local_150 * 4 + 0x3c);
                                      pdVar21 = (dword *)PTR___DefaultRuneLocale_0249c238;
                                      pdVar18 = local_150;
                                    }
                                    else {
                                      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e9b5;
                                      uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,
                                                           (ulong)pdVar18);
                                    }
                                    if (uVar13 == 0) goto LAB_00f3eea3;
                                    if ((*(byte *)(piVar29 + 10) & 4) == 0) goto LAB_00f3eb0e;
                                  }
                                  if ((*(byte *)(unaff_RDI + 0x58) & 2) != 0) {
                                    *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e9f5;
                                    uVar13 = ___tolower((__darwin_ct_rune_t)pdVar21);
                                    if (uVar13 < 0x80) {
                                      pdVar21 = (dword *)(ulonglong)uVar13;
                                      uVar13 = piVar29[0xb] &
                                               *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                        (longlong)pdVar21 * 4 + 0x3c);
                                      pdVar18 = (dword *)PTR___DefaultRuneLocale_0249c238;
                                    }
                                    else {
                                      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3ea16;
                                      uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,
                                                           (ulong)pdVar18);
                                    }
                                    if (uVar13 == 0) {
                                      *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3ea41;
                                      uVar13 = ___toupper((__darwin_ct_rune_t)pdVar21);
                                      if (uVar13 < 0x80) {
                                        pdVar21 = (dword *)(ulonglong)uVar13;
                                        uVar13 = piVar29[0xb] &
                                                 *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                          (longlong)pdVar21 * 4 + 0x3c);
                                        pdVar18 = (dword *)PTR___DefaultRuneLocale_0249c238;
                                      }
                                      else {
                                        *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3eaeb;
                                        uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,
                                                             (ulong)pdVar18);
                                      }
                                      if (uVar13 == 0) goto LAB_00f3eea3;
                                    }
                                  }
                                }
LAB_00f3eb0e:
                                if ((*(byte *)(piVar29 + 10) & 8) != 0) {
                                  puVar34 = *(uint **)(piVar29 + 0xc);
                                  uVar13 = *puVar34;
                                  if (uVar13 != 0) {
                                    if ((*(byte *)(unaff_RDI + 0x58) & 2) == 0) {
                                      if (uVar12 < 0x80) {
                                        pdVar21 = (dword *)(ulonglong)
                                                           *(uint *)(
                                                  PTR___DefaultRuneLocale_0249c238 +
                                                  (longlong)local_150 * 4 + 0x3c);
                                        do {
                                          puVar34 = puVar34 + 1;
                                          pdVar18 = local_150;
                                          if ((*(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                        (longlong)local_150 * 4 + 0x3c) & uVar13) !=
                                              0) goto LAB_00f3eea3;
                                          uVar13 = *puVar34;
                                        } while (uVar13 != 0);
                                      }
                                      else {
                                        do {
                                          puVar34 = puVar34 + 1;
                                          *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3ec3a;
                                          iVar14 = ___maskrune((__darwin_ct_rune_t)pdVar21,
                                                               (ulong)pdVar18);
                                          if (iVar14 != 0) goto LAB_00f3eea3;
                                        } while (*puVar34 != 0);
                                      }
                                    }
                                    else {
                                      do {
                                        *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3eb88;
                                        uVar13 = ___toupper((__darwin_ct_rune_t)pdVar21);
                                        if (uVar13 < 0x80) {
                                          pdVar21 = (dword *)(ulonglong)uVar13;
                                          uVar13 = *puVar34 &
                                                   *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                            (longlong)pdVar21 * 4 + 0x3c);
                                          pdVar18 = (dword *)PTR___DefaultRuneLocale_0249c238;
                                        }
                                        else {
                                          *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3ebb8;
                                          uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,
                                                               (ulong)pdVar18);
                                        }
                                        if (uVar13 != 0) goto LAB_00f3eea3;
                                        *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3ebc8;
                                        uVar13 = ___tolower((__darwin_ct_rune_t)pdVar21);
                                        if (uVar13 < 0x80) {
                                          pdVar21 = (dword *)(ulonglong)uVar13;
                                          uVar13 = *puVar34 &
                                                   *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                            (longlong)pdVar21 * 4 + 0x3c);
                                          pdVar18 = (dword *)PTR___DefaultRuneLocale_0249c238;
                                        }
                                        else {
                                          *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3ebf8;
                                          uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,
                                                               (ulong)pdVar18);
                                        }
                                        if (uVar13 != 0) goto LAB_00f3eea3;
                                        puVar31 = puVar34 + 1;
                                        puVar34 = puVar34 + 1;
                                      } while (*puVar31 != 0);
                                    }
                                  }
                                }
                                goto LAB_00f3ec69;
                              }
                            }
                            else {
                              *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3eab5;
                              iVar14 = ___maskrune((__darwin_ct_rune_t)pdVar21,(ulong)pdVar18);
                              if (bVar41 == (iVar14 != 0)) goto LAB_00f3e8e1;
                            }
                          }
                        }
                        else if (uVar12 == 0x5f) {
                          bVar41 = true;
                          if (local_bc != 0x5f) {
LAB_00f3e796:
                            if (local_bc < 0x80) {
                              pdVar21 = &section_000004c0.flags;
                              uVar13 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                                (ulonglong)local_bc * 4 + 0x3c) & 0x500;
                            }
                            else {
                              *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e8b2;
                              uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,(ulong)pdVar18);
                            }
                            if (bVar41 != (uVar13 != 0)) goto LAB_00f3e8db;
                          }
                        }
                        else {
                          if (uVar12 < 0x80) {
                            pdVar21 = &section_000004c0.flags;
                            uVar13 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                              (longlong)local_150 * 4 + 0x3c) & 0x500;
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e86e;
                            uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,(ulong)pdVar18);
                          }
                          bVar41 = uVar13 != 0;
                          if (local_bc != 0x5f) goto LAB_00f3e796;
                          if (uVar13 == 0) goto LAB_00f3e8db;
                        }
                      }
                      else {
                        if (uVar12 != 0x5f) {
                          if (uVar12 < 0x80) {
                            pdVar21 = &section_000004c0.flags;
                            uVar13 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                              (longlong)local_150 * 4 + 0x3c) & 0x500;
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e7d3;
                            uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,(ulong)pdVar18);
                          }
                          if (uVar13 == 0) goto LAB_00f3eea3;
                        }
                        if ((ulonglong)local_bc != 0x5f) {
                          if (local_bc < 0x80) {
                            pdVar21 = &section_000004c0.flags;
                            uVar13 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                              (ulonglong)local_bc * 4 + 0x3c) & 0x500;
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_1e0 + lVar8) = 0xf3e831;
                            uVar13 = ___maskrune((__darwin_ct_rune_t)pdVar21,(ulong)pdVar18);
                          }
                          if (uVar13 == 0) {
                            uVar13 = piVar29[10];
                            goto joined_r0x00f3e859;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_00f3eea3:
            plVar49 = (longlong *)(piVar29 + 0x10);
            plVar1 = (longlong *)(piVar29 + 0x10);
            piVar29 = piVar29 + 0xe;
            pmVar42 = pmVar45;
          } while (*plVar1 != 0);
        }
        piVar29 = *(int **)(local_110 + 4);
        local_110 = local_110 + 4;
      } while (piVar29 != (int *)0x0);
    }
    local_120[0] = 0;
    local_120[1] = 0;
    local_110 = (dword *)local_1d8._0_8_;
    pmVar42 = pmVar45;
    iVar14 = local_15c;
    uVar47 = uVar12;
  } while( true );
LAB_00f3eec0:
  puVar34 = (uint *)((longlong)puVar34 + 1);
  if ((uint *)uVar5 == puVar34) goto LAB_00f3eea3;
  goto LAB_00f3eec9;
}



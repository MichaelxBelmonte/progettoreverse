// Function: FUN_00dfb1b0
// Address: 00dfb1b0
// Size: 5022 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00dfb1b0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong **pplVar8;
  char *pcVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_278;
  char local_270;
  longlong *local_268;
  char local_260;
  longlong *local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong *local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong *local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38;
  
  FUN_00dfd1c0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00e09be0();
  lVar4 = local_b0;
  if (local_a8[0] == '\0') {
    if (((local_b0 != 0) && (FUN_00d50b00(), local_a8[0] != '\0')) && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8[0] = '\0';
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  local_88 = lVar4;
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  uVar14 = (**(code **)(*plVar3 + 0x18))();
  local_278 = DAT_02784a80;
  if (DAT_02784a80 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_270 = '\x01';
  uVar14 = FUN_000175c0(uVar14,&local_278);
  lVar4 = local_b0;
  pcVar9 = local_48;
  if (local_a8[0] != '\0') {
    pcVar9 = local_a8;
  }
  local_48[0] = local_a8[0];
  *pcVar9 = '\0';
  lVar12 = local_88;
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    local_a8[0] = '\0';
    local_b0 = 0;
    local_a0 = lVar4;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_f0 = lVar4;
    while( true ) {
      iVar10 = local_98._4_4_;
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar10 = -local_98._4_4_;
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 - local_98._4_4_);
          uVar14 = FUN_00d23690(uVar14,local_98._4_4_);
          local_90 = local_90 + iVar10;
          iVar10 = 0;
        }
        local_98 = CONCAT44(iVar10,(int)local_98);
      }
      plVar13 = DAT_02787870;
      lVar4 = (longlong)(int)local_98;
      iVar10 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar10);
      if (*(int *)(local_a0 + 0xc) <= iVar10) break;
      local_b0 = *(longlong *)(*(longlong *)(local_a0 + 0x10) + 8 + lVar4 * 8);
      if (DAT_02787870 != (longlong *)0x0) {
        uVar14 = FUN_00d50b00();
      }
      local_268 = plVar13;
      local_260 = '\x01';
      uVar14 = FUN_000175c0(uVar14,&local_268);
      plVar13 = local_40;
      if ((DAT_026fd0c0 == '\0') &&
         (iVar10 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Da_03, iVar10 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        uVar14 = ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_40;
        uVar14 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar13 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar13 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_260 != '\0') && (local_268 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if (plVar13 != (longlong *)0x0) {
        local_250 = '\0';
        local_258 = plVar13;
        uVar5 = FUN_00d25fa0();
        plVar11 = local_40;
        if (local_40 == (longlong *)0x0) {
          local_5c = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          plVar11 = (longlong *)0x0;
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
            local_5c = 0;
            if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_00dfb533;
            FUN_00d50b20();
          }
          else {
            local_38 = '\0';
          }
          local_5c = 0;
        }
LAB_00dfb533:
        if ((local_250 != '\0') && (local_258 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          local_f8 = plVar11;
          FUN_00d28390();
          cVar2 = (**(code **)(*unaff_RSI + 0x388))();
          if ((cVar2 != '\0') &&
             ((iVar10 = FUN_000030b0(), uVar14 = extraout_XMM0_Da_00, iVar10 == 2 ||
              (uVar6 = FUN_00d28380(), uVar14 = extraout_XMM0_Da_01, (uVar6 & 1) != 0)))) {
            lVar4 = DAT_02784a88;
            local_58 = plVar13;
            if (DAT_02784a88 != 0) {
              uVar14 = FUN_00d50b00();
            }
            local_248 = lVar4;
            local_240 = '\x01';
            uVar14 = FUN_000175c0(uVar14,&local_248);
            plVar13 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_240 != '\0') && (local_248 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            if (plVar13 == (longlong *)0x0) {
              iVar10 = -1;
              lVar4 = DAT_02784a90;
            }
            else {
              local_238 = plVar13;
              local_230 = '\0';
              iVar10 = FUN_00c716c0();
              if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar14 = FUN_00d50b20();
              lVar4 = DAT_02784a90;
            }
            DAT_02784a90 = lVar4;
            if (lVar4 != 0) {
              uVar14 = FUN_00d50b00();
            }
            local_220 = '\x01';
            local_228 = lVar4;
            FUN_000175c0(uVar14,&local_228);
            plVar13 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_220 != '\0') && (local_228 != 0)) {
              FUN_00d50b20();
            }
            if (plVar13 != (longlong *)0x0) {
              local_218 = plVar13;
              local_210 = '\0';
              uVar14 = FUN_00c716c0();
              local_70 = (longlong *)CONCAT44(local_70._4_4_,uVar14);
              if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar14 = FUN_00d50b20();
              lVar4 = DAT_02784a98;
              if (((iVar10 == 1) && ((int)local_70 != -1)) && (unaff_RSI[5] != 0)) {
                if (DAT_02784a98 != 0) {
                  uVar14 = FUN_00d50b00();
                }
                local_208 = lVar4;
                local_200 = '\x01';
                FUN_000175c0(uVar14,&local_208);
                plVar13 = local_40;
                if ((DAT_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
                  _DAT_026d5e58 = FUN_00d4fe50();
                  DAT_026d5e40 = "GNString";
                  _DAT_026d5e48 = 0x40;
                  _DAT_026d5e50 = FUN_0005d920;
                  _DAT_026d5e60 = 0;
                  uRam00000000026d5e68 = 0;
                  _DAT_026d5e70 = 0;
                  uRam00000000026d5e78 = 0;
                  _DAT_026d5e80 = 0;
                  uRam00000000026d5e88 = 0;
                  _DAT_026d5e90 = 0;
                  uRam00000000026d5e98 = 0;
                  _DAT_026d5ea0 = 0;
                  uRam00000000026d5ea8 = 0;
                  _DAT_026d5eb0 = 0;
                  uRam00000000026d5eb8 = 0;
                  _DAT_026d5ec0 = 0;
                  uRam00000000026d5ec8 = 0;
                  _DAT_026d5ed0 = 0;
                  uRam00000000026d5ed8 = 0;
                  _DAT_026d5ee0 = 0;
                  uRam00000000026d5ee8 = 0;
                  _DAT_026d5ef0 = 0;
                  uRam00000000026d5ef8 = 0;
                  _DAT_026d5f00 = 0;
                  ___cxa_guard_release();
                }
                pplVar8 = (longlong **)&DAT_02802688;
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 0x360))();
                  cVar2 = FUN_00e85ea0();
                  pplVar8 = &local_40;
                  if (cVar2 == '\0') {
                    pplVar8 = (longlong **)&DAT_02802688;
                  }
                }
                plVar13 = *pplVar8;
                if (*(char *)(pplVar8 + 1) == '\0') {
                  if (plVar13 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(undefined1 *)(pplVar8 + 1) = 0;
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_200 != '\0') && (local_208 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar13 != (longlong *)0x0) {
                  local_1f0 = '\0';
                  local_1f8 = plVar13;
                  (**(code **)(*(longlong *)unaff_RSI[5] + 0x18))
                            ((ulonglong)local_70 & 0xffffffff,&local_1f8);
                  if (local_40 == (longlong *)0x0) {
                    bVar1 = true;
                    local_70 = (longlong *)0x0;
                  }
                  else {
                    local_70 = local_40;
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                      bVar1 = false;
                      if ((local_38 == '\0') || (bVar1 = false, local_40 == (longlong *)0x0))
                      goto LAB_00dfb8dd;
                      FUN_00d50b20();
                    }
                    else {
                      local_38 = '\0';
                    }
                    bVar1 = false;
                  }
LAB_00dfb8dd:
                  if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  if (local_70 != (longlong *)0x0) {
                    local_1e8 = local_70;
                    local_1e0 = '\0';
                    uVar14 = FUN_00ca9940();
                    plVar13 = local_40;
                    if (local_38 == '\0') {
                      if (((local_40 != (longlong *)0x0) &&
                          (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                         (local_40 != (longlong *)0x0)) {
                        uVar14 = FUN_00d50b20();
                      }
                    }
                    else {
                      local_38 = '\0';
                    }
                    if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    plVar11 = DAT_02787870;
                    if (plVar13 != (longlong *)0x0) {
                      local_68 = plVar13;
                      if (DAT_02787870 != (longlong *)0x0) {
                        uVar14 = FUN_00d50b00();
                      }
                      local_1d8 = plVar11;
                      local_1d0 = '\x01';
                      FUN_000175c0(uVar14,&local_1d8);
                      plVar13 = local_40;
                      if ((DAT_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0))
                      {
                        _DAT_026d5e58 = FUN_00d4fe50();
                        DAT_026d5e40 = "GNString";
                        _DAT_026d5e48 = 0x40;
                        _DAT_026d5e50 = FUN_0005d920;
                        _DAT_026d5e60 = 0;
                        uRam00000000026d5e68 = 0;
                        _DAT_026d5e70 = 0;
                        uRam00000000026d5e78 = 0;
                        _DAT_026d5e80 = 0;
                        uRam00000000026d5e88 = 0;
                        _DAT_026d5e90 = 0;
                        uRam00000000026d5e98 = 0;
                        _DAT_026d5ea0 = 0;
                        uRam00000000026d5ea8 = 0;
                        _DAT_026d5eb0 = 0;
                        uRam00000000026d5eb8 = 0;
                        _DAT_026d5ec0 = 0;
                        uRam00000000026d5ec8 = 0;
                        _DAT_026d5ed0 = 0;
                        uRam00000000026d5ed8 = 0;
                        _DAT_026d5ee0 = 0;
                        uRam00000000026d5ee8 = 0;
                        _DAT_026d5ef0 = 0;
                        uRam00000000026d5ef8 = 0;
                        _DAT_026d5f00 = 0;
                        ___cxa_guard_release();
                      }
                      pplVar8 = (longlong **)&DAT_02802688;
                      if (plVar13 != (longlong *)0x0) {
                        (**(code **)(*plVar13 + 0x360))();
                        cVar2 = FUN_00e85ea0();
                        pplVar8 = &local_40;
                        if (cVar2 == '\0') {
                          pplVar8 = (longlong **)&DAT_02802688;
                        }
                      }
                      plVar11 = local_58;
                      plVar13 = *pplVar8;
                      if (*(char *)(pplVar8 + 1) == '\0') {
                        if (plVar13 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        *(undefined1 *)(pplVar8 + 1) = 0;
                      }
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_1c0 = '\0';
                      local_1c8 = plVar13;
                      cVar2 = (**(code **)(*plVar11 + 0x50))();
                      uVar14 = extraout_XMM0_Da_02;
                      if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                        uVar14 = FUN_00d50b20();
                      }
                      lVar4 = DAT_027855c0;
                      if (cVar2 != '\0') {
                        if (DAT_027855c0 != 0) {
                          uVar14 = FUN_00d50b00();
                        }
                        local_1b8 = lVar4;
                        local_1b0 = '\x01';
                        FUN_000175c0(uVar14,&local_1b8);
                        plVar11 = local_40;
                        if ((DAT_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)
                           ) {
                          local_50 = plVar13;
                          _DAT_026d5e58 = FUN_00d4fe50();
                          DAT_026d5e40 = "GNString";
                          _DAT_026d5e48 = 0x40;
                          _DAT_026d5e50 = FUN_0005d920;
                          _DAT_026d5e60 = 0;
                          uRam00000000026d5e68 = 0;
                          _DAT_026d5e70 = 0;
                          uRam00000000026d5e78 = 0;
                          _DAT_026d5e80 = 0;
                          uRam00000000026d5e88 = 0;
                          _DAT_026d5e90 = 0;
                          uRam00000000026d5e98 = 0;
                          _DAT_026d5ea0 = 0;
                          uRam00000000026d5ea8 = 0;
                          _DAT_026d5eb0 = 0;
                          uRam00000000026d5eb8 = 0;
                          _DAT_026d5ec0 = 0;
                          uRam00000000026d5ec8 = 0;
                          _DAT_026d5ed0 = 0;
                          uRam00000000026d5ed8 = 0;
                          _DAT_026d5ee0 = 0;
                          uRam00000000026d5ee8 = 0;
                          _DAT_026d5ef0 = 0;
                          uRam00000000026d5ef8 = 0;
                          _DAT_026d5f00 = 0;
                          ___cxa_guard_release();
                          plVar13 = local_50;
                        }
                        pplVar8 = (longlong **)&DAT_02802688;
                        if (plVar11 != (longlong *)0x0) {
                          (**(code **)(*plVar11 + 0x360))();
                          cVar2 = FUN_00e85ea0();
                          pplVar8 = &local_40;
                          if (cVar2 == '\0') {
                            pplVar8 = (longlong **)&DAT_02802688;
                          }
                        }
                        lVar4 = local_88;
                        plVar11 = *pplVar8;
                        if (*(char *)(pplVar8 + 1) == '\0') {
                          if (plVar11 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          *(undefined1 *)(pplVar8 + 1) = 0;
                        }
                        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                          FUN_00d50b20();
                        }
                        if (plVar11 != (longlong *)0x0) {
                          local_1a0 = '\0';
                          local_1a8 = plVar11;
                          uVar14 = FUN_00e09be0();
                          local_80 = local_40;
                          if (local_38 == '\0') {
                            if (((local_40 != (longlong *)0x0) &&
                                (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                               (local_40 != (longlong *)0x0)) {
                              uVar14 = FUN_00d50b20();
                            }
                          }
                          else {
                            local_38 = '\0';
                          }
                          if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                            uVar14 = FUN_00d50b20();
                          }
                          if (local_80 != (longlong *)0x0) {
                            local_198 = lVar4;
                            local_190 = '\0';
                            local_188 = local_80;
                            local_180 = '\0';
                            cVar2 = FUN_00e0d3d0(uVar14,1);
                            if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_190 != '\0') && (local_198 != 0)) {
                              FUN_00d50b20();
                            }
                            if (cVar2 == '\0') {
                              if (*param_1 != 0) {
                                local_38 = '\0';
                                local_40 = plVar13;
                                FUN_00d21140();
                                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                              }
                            }
                            else {
                              local_50 = plVar13;
                              plVar7 = (longlong *)FUN_00e8fc40();
                              FUN_00022d50();
                              uVar14 = (**(code **)(*plVar7 + 0x18))();
                              plVar11 = DAT_02787870;
                              local_170 = '\0';
                              local_178 = plVar13;
                              local_78 = plVar7;
                              if (DAT_02787870 != (longlong *)0x0) {
                                uVar14 = FUN_00d50b00();
                              }
                              local_40 = plVar11;
                              local_38 = '\0';
                              uVar14 = FUN_00ca0840(uVar14,&local_40);
                              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                                uVar14 = FUN_00d50b20();
                              }
                              if (plVar11 != (longlong *)0x0) {
                                uVar14 = FUN_00d50b20();
                              }
                              if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                                uVar14 = FUN_00d50b20();
                              }
                              plVar13 = DAT_02784aa0;
                              if (DAT_02784aa0 != (longlong *)0x0) {
                                uVar14 = FUN_00d50b00();
                              }
                              local_168 = plVar13;
                              local_160 = '\x01';
                              uVar14 = FUN_000175c0(uVar14,&local_168);
                              plVar13 = local_40;
                              if (local_38 == '\0') {
                                if (((local_40 != (longlong *)0x0) &&
                                    (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                                   (local_40 != (longlong *)0x0)) {
                                  uVar14 = FUN_00d50b20();
                                }
                              }
                              else {
                                local_38 = '\0';
                              }
                              if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
                                uVar14 = FUN_00d50b20();
                              }
                              plVar11 = DAT_02784aa0;
                              if (plVar13 != (longlong *)0x0) {
                                local_158 = plVar13;
                                local_150 = '\0';
                                if (DAT_02784aa0 != (longlong *)0x0) {
                                  uVar14 = FUN_00d50b00();
                                }
                                local_40 = plVar11;
                                local_38 = '\0';
                                FUN_00ca0840(uVar14,&local_40);
                                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar11 != (longlong *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                uVar14 = FUN_00d50b20();
                              }
                              plVar13 = DAT_02784aa8;
                              if (DAT_02784aa8 != (longlong *)0x0) {
                                uVar14 = FUN_00d50b00();
                              }
                              local_148 = plVar13;
                              local_140 = '\x01';
                              uVar14 = FUN_000175c0(uVar14,&local_148);
                              plVar13 = local_40;
                              if (local_38 == '\0') {
                                if (((local_40 != (longlong *)0x0) &&
                                    (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                                   (local_40 != (longlong *)0x0)) {
                                  uVar14 = FUN_00d50b20();
                                }
                              }
                              else {
                                local_38 = '\0';
                              }
                              if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
                                uVar14 = FUN_00d50b20();
                              }
                              plVar11 = DAT_02784aa8;
                              if (plVar13 != (longlong *)0x0) {
                                local_138 = plVar13;
                                local_130 = '\0';
                                if (DAT_02784aa8 != (longlong *)0x0) {
                                  uVar14 = FUN_00d50b00();
                                }
                                local_40 = plVar11;
                                local_38 = '\0';
                                FUN_00ca0840(uVar14,&local_40);
                                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar11 != (longlong *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                uVar14 = FUN_00d50b20();
                              }
                              lVar4 = DAT_02784ab0;
                              if (DAT_02784ab0 != 0) {
                                uVar14 = FUN_00d50b00();
                              }
                              local_128 = lVar4;
                              local_120 = '\x01';
                              FUN_000175c0(uVar14,&local_128);
                              plVar13 = local_40;
                              if (local_38 == '\0') {
                                if (((local_40 != (longlong *)0x0) &&
                                    (FUN_00d50b00(), local_38 != '\0')) &&
                                   (local_40 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                              }
                              else {
                                local_38 = '\0';
                              }
                              if ((local_120 != '\0') && (local_128 != 0)) {
                                FUN_00d50b20();
                              }
                              if (plVar13 != (longlong *)0x0) {
                                local_118 = plVar13;
                                local_110 = '\0';
                                iVar10 = FUN_00c716c0();
                                if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                FUN_00d50b20();
                                if (iVar10 != 0) {
                                  (**(code **)(*unaff_RSI + 0x390))();
                                  local_108 = local_78;
                                  local_100 = '\0';
                                  uVar14 = FUN_00d46530();
                                  plVar11 = local_40;
                                  plVar13 = local_50;
                                  local_b8 = 0;
                                  if (local_38 == '\0') {
                                    if (local_40 != (longlong *)0x0) {
                                      uVar14 = FUN_00d50b00();
                                    }
                                  }
                                  else {
                                    local_38 = '\0';
                                  }
                                  local_b8 = '\x01';
                                  local_c0 = plVar11;
                                  FUN_00dfd350(uVar14,&local_c0);
                                  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                  FUN_00d50b20();
                                  goto LAB_00dfc1ad;
                                }
                              }
                              FUN_00d50b20();
                              plVar13 = local_50;
                            }
LAB_00dfc1ad:
                            FUN_00d50b20();
                          }
                          FUN_00d50b20();
                        }
                      }
                      if (plVar13 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      FUN_00d50b20();
                    }
                    if (!bVar1) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
            }
          }
          if ((char)local_5c == '\0') {
            FUN_00d50b20();
          }
        }
        uVar14 = FUN_00d50b20();
      }
    }
    FUN_015ac3a0();
    lVar12 = local_88;
    if (local_48[0] != '\0') {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



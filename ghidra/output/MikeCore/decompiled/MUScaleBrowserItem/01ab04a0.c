// Function: FUN_01ab04a0
// Address: 01ab04a0
// Size: 3548 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01ab04a0(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *in_RCX;
  longlong **pplVar9;
  int iVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined8 *local_1e8;
  undefined1 local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined8 *local_1a8;
  undefined1 local_1a0;
  longlong *local_198;
  undefined1 local_190;
  undefined8 *local_188;
  undefined1 local_180;
  longlong *local_178;
  undefined1 local_170;
  longlong *local_168;
  undefined1 local_160;
  longlong *local_158;
  undefined1 local_150;
  undefined1 local_148 [8];
  undefined1 local_140;
  longlong *local_138;
  undefined1 local_130;
  undefined1 local_128 [8];
  undefined1 local_120;
  longlong *local_118;
  undefined1 local_110;
  longlong *local_108;
  undefined1 local_100;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_81;
  code *local_80;
  longlong *local_78;
  char local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  lVar7 = *in_RCX;
  local_81 = (char)in_RCX[1];
  if ((local_81 == '\0') || (lVar7 == 0)) {
    if (lVar7 == 0) {
      lVar7 = unaff_RSI;
      if (unaff_RSI != 0) goto LAB_01ab04cf;
      lVar7 = 0;
    }
  }
  else {
LAB_01ab04cf:
    param_1 = FUN_00d50b00();
    local_81 = '\x01';
  }
  local_e8 = '\0';
  local_f0 = lVar7;
  local_c0 = lVar7;
  FUN_00c9fe40(param_1,&local_f0);
  plVar5 = local_78;
  pplVar9 = &local_50;
  if (local_70[0] != '\0') {
    pplVar9 = (longlong **)local_70;
  }
  local_50 = (longlong *)CONCAT71(local_50._1_7_,local_70[0]);
  *(char *)pplVar9 = '\0';
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) goto LAB_01ab119a;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  local_80 = DAT_02572370;
  (*DAT_02572370)();
  local_90 = puVar4;
  FUN_017aae40();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017a9f30();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017aa1e0();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_02572358;
  (*local_80)();
  plVar1 = (longlong *)*in_RCX;
  if (plVar1 == (longlong *)0x0) {
    if ((*(char *)(unaff_RSI + 0x91) != '\0') || (*(char *)(unaff_RSI + 0x92) != '\0')) {
      FUN_017bf2e0();
      lVar7 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_140 = 1;
      local_1e8 = local_90;
      local_1e0 = 0;
      uVar12 = FUN_01ab1b30(&local_1e8,local_148);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = plVar1;
      local_70[0] = '\0';
      FUN_00d214d0(uVar12,*(undefined4 *)((longlong)plVar5 + 0xc));
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_017bf050();
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_130 = 1;
    local_138 = plVar1;
    local_1d8 = local_90;
    local_1d0 = 0;
    uVar8 = FUN_01ab1b30(&local_1d8);
    plVar11 = local_78;
    uVar12 = extraout_XMM0_Da_01;
    if (local_78 == (longlong *)0x0) {
      local_80 = (code *)0x0;
    }
    else {
      local_80 = (code *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      if (local_70[0] == '\0') {
        uVar12 = FUN_00d50b00();
      }
    }
    if (plVar1 != (longlong *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      local_70[0] = '\0';
      local_78 = (longlong *)0x0;
      local_40 = plVar11;
      local_68 = plVar11;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_60._4_4_ = 0;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar10 = -local_60._4_4_;
          }
          else {
            iVar10 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar10 = 0;
          }
          local_60 = CONCAT44(iVar10,(int)local_60);
        }
        lVar7 = (longlong)(int)local_60;
        iVar10 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (*(int *)((longlong)local_68 + 0xc) <= iVar10) break;
        local_1c8 = *(longlong **)(local_68[2] + 8 + lVar7 * 8);
        local_1c0 = 0;
        local_1b0 = 0;
        local_1b8 = plVar5;
        local_78 = local_1c8;
        cVar3 = FUN_01ab2150(local_68[2],&local_1b8);
        if (cVar3 == '\0') {
          local_50 = local_78;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar12 = FUN_01b53440();
      plVar11 = local_40;
    }
    if ((*(char *)(unaff_RSI + 0x90) != '\0') &&
       ((*(char *)(unaff_RSI + 0x91) != '\0' || (*(char *)(unaff_RSI + 0x92) != '\0')))) {
      uVar12 = FUN_017bed60();
      plVar1 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01ab0d1f;
        }
      }
      else if (local_78 != (longlong *)0x0) {
LAB_01ab0d1f:
        cVar3 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar3 != '\0') {
          plVar6 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar6 = (longlong)&DAT_02641258;
          *(undefined1 *)((longlong)plVar6 + 0xc) = 0;
          plVar6[2] = 0;
          plVar6[3] = 0;
          (*DAT_02641270)();
          local_e0 = plVar1;
          local_d8 = '\0';
          FUN_01aa3fc0();
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar1 + 0x390))();
          local_b8 = local_78;
          local_b0 = 0;
          if (local_70[0] == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_b0 = '\x01';
          FUN_01aa3f40();
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01aa3f00();
          local_70[0] = '\0';
          local_78 = plVar6;
          FUN_00d21140();
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        uVar12 = FUN_00d50b20();
      }
    }
  }
  else {
    if ((DAT_02737920 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      _DAT_027e2e88 = FUN_00d4fe50();
      _DAT_027e2e70 = "MUScaleBrowserItem";
      _DAT_027e2e78 = 0x20;
      _DAT_027e2e80 = FUN_00841ad0;
      _DAT_027e2e90 = 0;
      uRam00000000027e2e98 = 0;
      _DAT_027e2ea0 = 0;
      uRam00000000027e2ea8 = 0;
      _DAT_027e2eb0 = 0;
      uRam00000000027e2eb8 = 0;
      _DAT_027e2ec0 = 0;
      uRam00000000027e2ec8 = 0;
      _DAT_027e2ed0 = 0;
      uRam00000000027e2ed8 = 0;
      _DAT_027e2ee0 = 0;
      uRam00000000027e2ee8 = 0;
      _DAT_027e2ef0 = 0;
      uRam00000000027e2ef8 = 0;
      _DAT_027e2f00 = 0;
      uRam00000000027e2f08 = 0;
      _DAT_027e2f10 = 0;
      uRam00000000027e2f18 = 0;
      _DAT_027e2f20 = 0;
      uRam00000000027e2f28 = 0;
      _DAT_027e2f30 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      in_RCX = &DAT_02802688;
    }
    lVar7 = *in_RCX;
    lVar2 = in_RCX[1];
    if (((char)lVar2 == '\0') || (lVar7 == 0)) {
      if (lVar7 == 0) {
        local_80 = (code *)0x0;
        plVar11 = (longlong *)0x0;
        uVar12 = extraout_XMM0_Da;
        goto LAB_01ab108e;
      }
    }
    else {
      FUN_00d50b00();
    }
    local_a8 = lVar7;
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_78 + 0x3a0))();
    uVar12 = extraout_XMM0_Da_00;
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar3 == '\0') {
LAB_01ab0fa5:
      local_80 = (code *)0x0;
      local_40 = (longlong *)0x0;
    }
    else {
      FUN_01aa3f90();
      lVar7 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_120 = 1;
      local_1a8 = local_90;
      local_1a0 = 0;
      uVar12 = FUN_01ab1b30(&local_1a8,local_128);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = plVar1;
      local_70[0] = '\0';
      FUN_00d214d0(uVar12,*(undefined4 *)((longlong)plVar5 + 0xc));
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01aa3f90();
      plVar1 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70[0] = '\0';
      }
      local_110 = 1;
      local_118 = plVar1;
      cVar3 = FUN_01ab2450();
      uVar12 = extraout_XMM0_Da_02;
      if (plVar1 != (longlong *)0x0) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (cVar3 == '\0') goto LAB_01ab0fa5;
      uVar12 = FUN_01aa3f90();
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_100 = 1;
      local_108 = plVar1;
      uVar12 = FUN_01aafac0(uVar12,&local_108);
      plVar11 = local_78;
      if ((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b00();
      }
      if (plVar1 != (longlong *)0x0) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar11 == (longlong *)0x0) goto LAB_01ab0fa5;
      local_198 = plVar11;
      local_190 = 0;
      local_188 = local_90;
      local_180 = 0;
      FUN_01ab1b30(&local_188);
      local_40 = local_78;
      if (local_78 == (longlong *)0x0) {
        local_80 = (code *)0x0;
      }
      else {
        if (local_70[0] == '\0') {
          FUN_00d50b00();
        }
        local_70[0] = '\0';
        local_78 = (longlong *)0x0;
        local_68 = local_40;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_60._4_4_ = 0;
        while( true ) {
          if (local_60._4_4_ != 0) {
            if (local_60._4_4_ < 1) {
              iVar10 = -local_60._4_4_;
            }
            else {
              iVar10 = (int)local_60 - local_60._4_4_;
              local_60 = CONCAT44(local_60._4_4_,iVar10);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar10 = 0;
            }
            local_60 = CONCAT44(iVar10,(int)local_60);
          }
          lVar7 = (longlong)(int)local_60;
          iVar10 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (*(int *)((longlong)local_68 + 0xc) <= iVar10) break;
          local_178 = *(longlong **)(local_68[2] + 8 + lVar7 * 8);
          local_170 = 0;
          local_160 = 0;
          local_168 = plVar5;
          local_78 = local_178;
          cVar3 = FUN_01ab2150(local_68[2],&local_168);
          if (cVar3 == '\0') {
            local_50 = local_78;
            local_48 = '\0';
            FUN_00d21140();
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar8 = FUN_01b53440();
        local_80 = (code *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
      uVar12 = FUN_00d50b20();
    }
    plVar11 = local_40;
    if ((char)lVar2 != '\0') {
      uVar12 = FUN_00d50b20();
      plVar11 = local_40;
    }
  }
LAB_01ab108e:
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    FUN_01ab2600(0,FUN_01aaec30);
    if (local_78 == plVar5) {
LAB_01ab10de:
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_01ab10de;
      }
      FUN_00d50b20();
    }
    local_150 = 0;
    local_158 = plVar5;
    uVar12 = FUN_01aaf2c0();
  }
  local_d0 = local_c0;
  local_c8 = '\0';
  local_70[0] = '\0';
  local_78 = plVar5;
  FUN_00ca0840(uVar12,&local_d0);
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ab119a:
  if (*(int *)((longlong)plVar5 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((local_81 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



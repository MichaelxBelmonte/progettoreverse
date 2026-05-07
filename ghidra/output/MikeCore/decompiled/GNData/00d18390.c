// Function: FUN_00d18390
// Address: 00d18390
// Size: 6843 bytes
// Class: GNData
// String references:
//   "GNData"
//   "Class %@ not found in runtime."
//   "GNString"
//   "GNDictionary"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00d18390(undefined4 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar13;
  longlong **pplVar14;
  ulonglong uVar15;
  undefined7 uVar17;
  longlong lVar16;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  longlong local_308;
  char local_300;
  longlong local_2f8;
  char local_2f0;
  longlong *local_2e8;
  char local_2e0;
  longlong local_2d8;
  char local_2d0;
  longlong local_2c8;
  char local_2c0;
  longlong *local_2b8;
  char local_2b0;
  longlong local_2a8;
  char local_2a0;
  longlong *local_298;
  char local_290;
  longlong *local_288;
  char local_280;
  longlong local_278;
  char local_270;
  longlong *local_268;
  char local_260;
  longlong *local_258;
  char local_250;
  longlong *local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong *local_228;
  char local_220;
  longlong *local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1d8;
  char local_1d0;
  longlong local_1b8;
  char local_1b0;
  longlong local_198;
  char local_190;
  longlong local_178;
  char local_170;
  longlong local_138;
  char local_130;
  longlong local_108;
  char local_100;
  longlong *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  char local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  uint local_a8 [2];
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  uint local_70 [2];
  longlong *local_68;
  char local_60;
  longlong *local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong *local_40;
  
  lVar9 = DAT_027e7c20;
  local_e0 = (longlong *)0x0;
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  if (DAT_027e7c20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_308 = lVar9;
  local_300 = '\x01';
  uVar18 = FUN_000175c0(param_1,&local_308);
  plVar12 = local_78;
  if (local_78 == (longlong *)0x0) {
    bVar3 = true;
    plVar12 = (longlong *)0x0;
  }
  else {
    if ((char)local_70[0] == '\0') {
      uVar18 = FUN_00d50b00();
      bVar3 = false;
      if (((char)local_70[0] == '\0') || (local_78 == (longlong *)0x0)) goto LAB_00d1844a;
      uVar18 = FUN_00d50b20();
    }
    else {
      local_70[0] = local_70[0] & 0xffffff00;
    }
    bVar3 = false;
  }
LAB_00d1844a:
  if ((local_300 != '\0') && (local_308 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar9 = DAT_0277c868;
  if (plVar12 != (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)plVar12;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  if (DAT_0277c868 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_2f8 = lVar9;
  local_2f0 = '\x01';
  FUN_000175c0(uVar18,&local_2f8);
  plVar12 = *(longlong **)(unaff_RSI + 0x70);
  if (plVar12 != local_78) {
    if ((char)local_70[0] == '\0') {
      if (local_78 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RSI + 0x70) = 0;
      }
      else {
        FUN_00d50b00();
        plVar12 = *(longlong **)(unaff_RSI + 0x70);
        *(longlong **)(unaff_RSI + 0x70) = local_78;
      }
    }
    else {
      local_70[0] = local_70[0] & 0xffffff00;
      *(longlong **)(unaff_RSI + 0x70) = local_78;
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2f0 != '\0') && (local_2f8 != 0)) {
    FUN_00d50b20();
  }
  plVar12 = DAT_0277c870;
  if (DAT_0277c870 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_78 = plVar12;
  local_70[0] = local_70[0] & 0xffffff00;
  cVar5 = FUN_00c9ff50();
  uVar18 = extraout_XMM0_Da;
  if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  lVar9 = DAT_027edfd0;
  if (cVar5 == '\0') {
    if (DAT_027edfd0 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_2d8 = lVar9;
    local_2d0 = '\x01';
    FUN_000175c0(uVar18,&local_2d8);
    plVar12 = (longlong *)CONCAT44(uStack_c4,local_c8);
    if (local_c0 == '\0') {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c0 = '\0';
    }
    local_70[0] = local_70[0] & 0xffffff00;
    local_78 = plVar12;
    uVar18 = FUN_00d243f0();
    if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_2d0 != '\0') && (local_2d8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_d8 = 0;
    uVar18 = FUN_00d216c0();
    local_2e8 = DAT_0277c870;
    local_a0 = *(longlong *)(unaff_RSI + 0x28);
    if (DAT_0277c870 != (longlong *)0x0) {
      uVar18 = FUN_00d50b00();
    }
    local_2e0 = '\x01';
    FUN_000175c0(uVar18,&local_2e8);
    plVar12 = (longlong *)CONCAT44(uStack_c4,local_c8);
    if ((DAT_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026cd0e8 = FUN_00d4fe50();
      DAT_026cd0d0 = "GNDictionary";
      _DAT_026cd0d8 = 0x28;
      _DAT_026cd0e0 = FUN_00022d20;
      _DAT_026cd0f0 = 0;
      uRam00000000026cd0f8 = 0;
      _DAT_026cd100 = 0;
      _DAT_026cd178 = 0;
      uRam00000000026cd180 = 0;
      _DAT_026cd188 = 0;
      DAT_026cd18a = 6;
      _DAT_026cd108 = 0;
      uRam00000000026cd110 = 0;
      _DAT_026cd118 = 0;
      uRam00000000026cd120 = 0;
      _DAT_026cd128 = 0;
      uRam00000000026cd130 = 0;
      _DAT_026cd138 = 0;
      uRam00000000026cd140 = 0;
      _DAT_026cd148 = 0;
      uRam00000000026cd150 = 0;
      _DAT_026cd158 = 0;
      uRam00000000026cd160 = 0;
      _DAT_026cd168 = 0;
      uRam00000000026cd170 = 0;
      DAT_026cd193 = 0;
      _DAT_026cd18b = 0;
      ___cxa_guard_release();
    }
    puVar11 = (uint *)&DAT_02802688;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 != '\0') {
        if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
        cVar5 = FUN_00e8db60();
        puVar11 = &local_c8;
        if (cVar5 == '\0') {
          puVar11 = (uint *)&DAT_02802688;
        }
      }
    }
    plVar12 = *(longlong **)puVar11;
    if ((char)puVar11[2] == '\0') {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(puVar11 + 2) = 0;
    }
    local_70[0] = local_70[0] & 0xffffff00;
    local_78 = plVar12;
    FUN_00d21140();
    if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      FUN_00d50b20();
    }
    if ((local_2e0 != '\0') && (local_2e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RSI + 0x7c) = 1;
    local_c8 = 0;
    uVar18 = FUN_00d23310();
    plVar12 = local_78;
    puVar11 = local_a8;
    if ((char)local_70[0] != '\0') {
      puVar11 = local_70;
    }
    local_a8[0]._0_1_ = (char)local_70[0];
    *(undefined1 *)puVar11 = 0;
    if (((char)local_70[0] != '\0') && (plVar12 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if (((char)local_a8[0] == '\0') && (plVar12 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b00();
    }
    uVar18 = FUN_00d1b5a0(uVar18,&local_c8);
    if (plVar12 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar9 = DAT_0277c880;
  if (DAT_0277c880 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_2c8 = lVar9;
  local_2c0 = '\x01';
  pplVar14 = &local_78;
  FUN_000175c0(uVar18,&local_2c8);
  plVar12 = local_78;
  if ((DAT_026d0220 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    _DAT_02789140 = FUN_000378a0;
    _DAT_02789150 = 0;
    uRam0000000002789158 = 0;
    _DAT_02789160 = 0;
    uRam0000000002789168 = 0;
    _DAT_02789170 = 0;
    uRam0000000002789178 = 0;
    _DAT_02789180 = 0;
    uRam0000000002789188 = 0;
    _DAT_02789190 = 0;
    uRam0000000002789198 = 0;
    _DAT_027891a0 = 0;
    uRam00000000027891a8 = 0;
    _DAT_027891b0 = 0;
    uRam00000000027891b8 = 0;
    _DAT_027891c0 = 0;
    uRam00000000027891c8 = 0;
    _DAT_027891d0 = 0;
    uRam00000000027891d8 = 0;
    _DAT_027891e0 = 0;
    uRam00000000027891e8 = 0;
    _DAT_027891f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar12 == (longlong *)0x0) {
LAB_00d188e0:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_00d188e0;
  }
  plVar12 = *pplVar14;
  if (plVar12 == (longlong *)0x0) {
    uVar15 = 0;
    plVar12 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    uVar15 = CONCAT71((int7)((ulonglong)pplVar14 >> 8),1);
  }
  if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    FUN_00d50b20();
  }
  local_d8 = uVar15;
  local_d0 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_0004b090();
    uVar18 = (**(code **)(*plVar7 + 0x18))();
    local_2b0 = '\0';
    local_2b8 = plVar12;
    (**(code **)(*plVar7 + 0x5f8))(uVar18,&local_2b8);
    plVar12 = *(longlong **)(unaff_RSI + 0x60);
    if (plVar12 != local_78) {
      if ((char)local_70[0] == '\0') {
        if (local_78 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar12 = *(longlong **)(unaff_RSI + 0x60);
          plVar7 = local_78;
        }
      }
      else {
        local_70[0] = local_70[0] & 0xffffff00;
        plVar7 = local_78;
      }
      *(longlong **)(unaff_RSI + 0x60) = plVar7;
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_2b0 != '\0') && (local_2b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d216c0();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_0258a670;
  (*DAT_0258a688)();
  puVar1 = *(undefined8 **)(unaff_RSI + 0x38);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RSI + 0x38) = puVar8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar18 = FUN_00e38130(0,0,0);
  lVar9 = *(longlong *)(unaff_RSI + 0x28);
  if (lVar9 == 0) {
    lVar9 = 0;
    local_90 = 0;
    local_48 = 0;
    plVar12 = (longlong *)0x0;
    local_50 = 0;
    local_80 = (longlong *)0x0;
    local_98 = 0;
    lVar16 = 0;
    local_88 = 0;
    local_58 = (longlong *)0x0;
  }
  else {
    lVar13 = 0;
    local_58 = (longlong *)0x0;
    local_88 = 0;
    local_98 = 0;
    local_80 = (longlong *)0x0;
    local_50 = 0;
    plVar12 = (longlong *)0x0;
    local_48 = 0;
    local_90 = 0;
    lVar16 = 0;
    do {
      if (*(int *)(lVar9 + 0xc) <= lVar13) goto LAB_00d19572;
      lVar9 = *(longlong *)(lVar9 + 0x10);
      lVar2 = *(longlong *)(lVar9 + lVar13 * 8);
      local_40 = plVar12;
      if (lVar16 == lVar2) {
        if (((char)local_98 == '\0') && (lVar16 != 0)) {
          local_98 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
          uVar15 = 0;
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        if (lVar2 != 0) {
          uVar15 = local_98 & 0xffffffff;
          lVar9 = FUN_00d50b00();
          uVar18 = extraout_XMM0_Da_00;
        }
        if (((char)local_98 == '\0') || (lVar16 == 0)) {
          local_98 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
          lVar16 = lVar2;
        }
        else {
          uVar15 = local_98 & 0xffffffff;
          uVar10 = FUN_00d50b20();
          local_98 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          lVar16 = lVar2;
          uVar18 = extraout_XMM0_Da_01;
        }
      }
      lVar9 = DAT_028a75a8;
      local_1b0 = 0;
      local_a0 = lVar16;
      if (DAT_028a75a8 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_1b8 = lVar9;
      local_1b0 = '\x01';
      uVar10 = FUN_000175c0(uVar18,&local_1b8);
      plVar7 = local_78;
      plVar12 = local_e0;
      uVar17 = (undefined7)(uVar15 >> 8);
      uVar18 = extraout_XMM0_Da_02;
      if (local_78 == local_e0) {
        plVar7 = local_e0;
        if (((char)local_90 == '\0') && (local_78 != (longlong *)0x0)) {
          if ((char)local_70[0] != '\0') goto LAB_00d18c23;
          local_90 = 0;
          uVar18 = FUN_00d50b00();
LAB_00d18c88:
          uVar15 = CONCAT71(uVar17,1);
          plVar7 = plVar12;
          plVar4 = local_40;
        }
        else {
          uVar15 = local_90 & 0xffffffff;
          plVar4 = local_40;
        }
joined_r0x00d18fb3:
        local_40 = plVar4;
        if ((char)local_70[0] == '\0') {
          local_90 = uVar15 & 0xffffffff;
        }
        else {
          if (local_78 != (longlong *)0x0) {
            uVar18 = FUN_00d50b20();
          }
          local_90 = uVar15 & 0xffffffff;
        }
      }
      else {
        if ((char)local_70[0] == '\0') {
          if (local_78 != (longlong *)0x0) {
            uVar18 = FUN_00d50b00();
          }
          local_e0 = plVar7;
          uVar15 = CONCAT71(uVar17,1);
          plVar4 = local_40;
          if (((char)local_90 != '\0') && (plVar12 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
            plVar12 = plVar7;
            goto LAB_00d18c88;
          }
          goto joined_r0x00d18fb3;
        }
        local_e0 = local_78;
        if (((char)local_90 != '\0') && (plVar12 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
          uVar18 = extraout_XMM0_Da_03;
        }
LAB_00d18c23:
        local_70[0] = local_70[0] & 0xffffff00;
        local_90 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        plVar4 = local_40;
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar4 == (longlong *)0x0) {
        local_b0 = local_48;
      }
      else if ((char)local_48 == '\0') {
        local_b0 = 0;
      }
      else {
        local_b0 = 0;
        local_b8 = CONCAT71(local_b8._1_7_,(char)local_50);
        uVar18 = FUN_00d50b20();
      }
      plVar12 = *(longlong **)(unaff_RSI + 0x50);
      if (plVar12 == (longlong *)0x0) {
LAB_00d18e9b:
        lVar9 = DAT_028a75b8;
        local_190 = 0;
        if (DAT_028a75b8 != 0) {
          uVar18 = FUN_00d50b00();
        }
        local_198 = lVar9;
        local_190 = '\x01';
        FUN_000175c0(uVar18,&local_198);
        plVar12 = local_78;
        if (local_78 == local_80) {
          plVar12 = local_80;
          if (((char)local_50 == '\0') && (local_78 != (longlong *)0x0)) {
            if ((char)local_70[0] != '\0') goto LAB_00d18f29;
            local_b8 = CONCAT71(local_b8._1_7_,1);
            FUN_00d50b00();
            plVar12 = local_80;
          }
          else {
            local_b8 = CONCAT71(local_b8._1_7_,(char)local_50);
          }
        }
        else if ((char)local_70[0] == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_b8 = CONCAT71(local_b8._1_7_,1);
          if (((char)local_50 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_80 = plVar12;
            plVar12 = local_80;
          }
        }
        else {
          if (((char)local_50 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00d18f29:
          local_70[0] = local_70[0] & 0xffffff00;
          local_b8 = CONCAT71(local_b8._1_7_,1);
        }
        local_80 = plVar12;
        if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_190 != '\0') && (local_198 != 0)) {
          FUN_00d50b20();
        }
        local_288 = local_80;
        local_280 = '\0';
        uVar10 = FUN_00c82360();
        plVar12 = local_78;
        uVar18 = extraout_XMM0_Da_06;
        if (local_78 == local_58) {
          if (((char)local_88 == '\0') && (local_78 != (longlong *)0x0)) {
            plVar12 = local_58;
            if ((char)local_70[0] == '\0') {
              uVar18 = FUN_00d50b00();
              goto LAB_00d190f0;
            }
            goto LAB_00d19075;
          }
          uVar15 = local_88 & 0xffffffff;
          cVar5 = (char)local_70[0];
joined_r0x00d190d2:
          if ((cVar5 == '\0') || (local_78 == (longlong *)0x0)) {
            local_88 = uVar15 & 0xffffffff;
          }
          else {
            uVar18 = FUN_00d50b20();
            local_88 = uVar15 & 0xffffffff;
          }
        }
        else {
          if ((char)local_70[0] == '\0') {
            if (local_78 != (longlong *)0x0) {
              uVar18 = FUN_00d50b00();
            }
            if (((char)local_88 != '\0') && (local_58 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
              local_58 = plVar12;
LAB_00d190f0:
              plVar12 = local_58;
            }
            uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
            local_58 = plVar12;
            cVar5 = (char)local_70[0];
            goto joined_r0x00d190d2;
          }
          if (((char)local_88 != '\0') && (local_58 != (longlong *)0x0)) {
            uVar10 = FUN_00d50b20();
            uVar18 = extraout_XMM0_Da_07;
          }
LAB_00d19075:
          local_70[0] = local_70[0] & 0xffffff00;
          local_88 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          local_58 = plVar12;
        }
        if ((local_280 != '\0') && (local_288 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        lVar9 = DAT_027815a8;
        if (local_58 == (longlong *)0x0) {
          if (DAT_027815a8 != 0) {
            uVar18 = FUN_00d50b00();
          }
          plVar12 = local_80;
          local_278 = lVar9;
          local_270 = '\x01';
          local_70[0] = 1;
          local_78 = &DAT_024c5048;
          local_60 = 0;
          if (local_80 != (longlong *)0x0) {
            uVar18 = FUN_00d50b00();
          }
          local_68 = plVar12;
          local_60 = '\x01';
          FUN_00cc7b40(uVar18,&local_78);
          local_78 = &DAT_024c5048;
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_270 != '\0') && (local_278 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar10 = FUN_00c811e0();
        plVar12 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
          local_48 = local_b0;
        }
        else {
          local_48 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          if ((char)local_70[0] == '\0') {
            FUN_00d50b00();
            if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        (**(code **)(*plVar12 + 0x20))();
        local_260 = '\0';
        local_268 = plVar12;
        uVar18 = FUN_00d21140();
        if ((local_260 == '\0') || (local_268 == (longlong *)0x0)) {
          local_50 = local_b8 & 0xff;
        }
        else {
          uVar18 = FUN_00d50b20();
          local_50 = local_b8 & 0xff;
        }
      }
      else {
        FUN_00d50b00();
        local_2a8 = local_a0;
        local_2a0 = '\0';
        uVar10 = (**(code **)(*plVar12 + 0x18))(&local_2a8,&stack0xfffffffffffffe58);
        plVar12 = local_78;
        uVar18 = extraout_XMM0_Da_04;
        if (local_78 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
          local_48 = local_b0;
        }
        else if ((char)local_70[0] == '\0') {
          uVar10 = FUN_00d50b00();
          local_48 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          uVar18 = extraout_XMM0_Da_05;
          if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
        }
        else {
          local_70[0] = local_70[0] & 0xffffff00;
          local_48 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        }
        if ((local_2a0 != '\0') && (local_2a8 != 0)) {
          uVar18 = FUN_00d50b20();
        }
        if (unaff_RSI != 0) {
          uVar18 = FUN_00d50b20();
        }
        if (plVar12 == (longlong *)0x0) {
          local_b0 = local_48;
          goto LAB_00d18e9b;
        }
        local_290 = '\0';
        local_298 = plVar12;
        uVar18 = FUN_00d21140();
        if ((local_290 != '\0') && (local_298 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      local_250 = '\0';
      local_240 = '\0';
      local_258 = plVar12;
      local_248 = plVar7;
      uVar18 = FUN_019b43b0(uVar18,&local_248);
      if ((local_240 != '\0') && (local_248 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_250 != '\0') && (local_258 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RSI + 0x80) != 0) {
        if ((DAT_026fd0c0 == '\0') &&
           (iVar6 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Da_10, iVar6 != 0)) {
          local_40 = plVar12;
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
          uVar18 = ___cxa_guard_release();
          plVar12 = local_40;
        }
        pplVar14 = (longlong **)&DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          local_b8._0_1_ = (char)local_50;
          (**(code **)(*plVar7 + 0x360))();
          local_b8 = CONCAT71(local_b8._1_7_,(char)local_50);
          cVar5 = FUN_00e85ea0();
          pplVar14 = &local_e0;
          uVar18 = extraout_XMM0_Da_08;
          if (cVar5 == '\0') {
            pplVar14 = (longlong **)&DAT_02802688;
          }
        }
        plVar7 = local_e0;
        lVar9 = DAT_0277cea0;
        if (*pplVar14 != (longlong *)0x0) {
          local_40 = plVar12;
          if (DAT_0277cea0 != 0) {
            FUN_00d50b00();
          }
          local_238 = lVar9;
          local_230 = '\x01';
          cVar5 = FUN_00d90870();
          uVar18 = extraout_XMM0_Da_09;
          if ((local_230 != '\0') && (local_238 != 0)) {
            uVar18 = FUN_00d50b20();
          }
          plVar12 = local_40;
          if (cVar5 != '\0') goto LAB_00d18ac0;
        }
        local_228 = plVar7;
        local_220 = '\0';
        local_210 = '\0';
        local_218 = plVar12;
        uVar18 = FUN_00ca0840(uVar18,&local_218);
        if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_220 != '\0') && (local_228 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
LAB_00d18ac0:
      lVar13 = lVar13 + 1;
      lVar9 = *(longlong *)(unaff_RSI + 0x28);
      lVar16 = local_a0;
    } while (lVar9 != 0);
    lVar9 = 0;
  }
LAB_00d19572:
  lVar13 = *(longlong *)(unaff_RSI + 0x30);
  iVar6 = *(int *)(lVar13 + 0xc);
  local_a0 = lVar16;
  local_40 = plVar12;
  if (0 < iVar6) {
    local_b8 = DAT_025908a0;
    lVar16 = 1;
    while( true ) {
      *(undefined8 *)(unaff_RSI + 0x40) =
           *(undefined8 *)(*(longlong *)(lVar13 + 0x10) + -8 + lVar16 * 8);
      *(undefined4 *)(unaff_RSI + 0x78) = 0;
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + -8 + lVar16 * 8);
      lVar13 = *(longlong *)(unaff_RSI + 0x48);
      if (lVar13 != lVar9) {
        if (lVar9 != 0) {
          FUN_00d50b00();
          lVar13 = *(longlong *)(unaff_RSI + 0x48);
        }
        *(longlong *)(unaff_RSI + 0x48) = lVar9;
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
      }
      plVar12 = *(longlong **)(unaff_RSI + 0x50);
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
        local_208 = *(longlong *)(unaff_RSI + 0x40);
        local_200 = '\0';
        local_170 = 0;
        lVar9 = *(longlong *)(unaff_RSI + 0x48);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        local_170 = '\x01';
        local_178 = lVar9;
        (**(code **)(*plVar12 + 0x20))(&local_178,&local_208);
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if ((local_200 != '\0') && (local_208 != 0)) {
          FUN_00d50b20();
        }
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
      }
      cVar5 = (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x1e8))();
      plVar12 = *(longlong **)(unaff_RSI + 0x40);
      if (cVar5 == '\0') {
        FUN_00d50b00();
        (**(code **)(*plVar12 + 0x118))();
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b00();
        (**(code **)(*plVar12 + 0x248))();
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
      }
      plVar12 = *(longlong **)(unaff_RSI + 0x50);
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
        local_1d8 = *(longlong *)(unaff_RSI + 0x40);
        local_1d0 = '\0';
        local_130 = 0;
        lVar9 = *(longlong *)(unaff_RSI + 0x48);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        local_130 = '\x01';
        local_138 = lVar9;
        (**(code **)(*plVar12 + 0x28))(&local_138,&local_1d8);
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
      }
      lVar13 = *(longlong *)(unaff_RSI + 0x30);
      iVar6 = *(int *)(lVar13 + 0xc);
      if (iVar6 <= lVar16) break;
      lVar9 = *(longlong *)(unaff_RSI + 0x28);
      lVar16 = lVar16 + 1;
    }
  }
  lVar9 = local_a0;
  if ((*(char *)(unaff_RSI + 0x58) != '\0') && (0 < iVar6)) {
    lVar16 = 0;
    do {
      *(undefined8 *)(unaff_RSI + 0x40) = *(undefined8 *)(*(longlong *)(lVar13 + 0x10) + lVar16 * 8)
      ;
      *(undefined4 *)(unaff_RSI + 0x78) = 0;
      lVar13 = *(longlong *)(unaff_RSI + 0x48);
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x28) + 0x10) + lVar16 * 8);
      if (lVar13 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar13 = *(longlong *)(unaff_RSI + 0x48);
        }
        *(longlong *)(unaff_RSI + 0x48) = lVar2;
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
      }
      plVar12 = *(longlong **)(unaff_RSI + 0x40);
      FUN_00d50b00();
      (**(code **)(*plVar12 + 0x138))();
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      lVar16 = lVar16 + 1;
      lVar13 = *(longlong *)(unaff_RSI + 0x30);
    } while (lVar16 < *(int *)(lVar13 + 0xc));
  }
  if (*(char *)(unaff_RSI + 0x7c) != '\0') {
    FUN_00d23310();
    plVar4 = local_78;
    plVar12 = local_d0;
    puVar11 = &local_c8;
    if ((char)local_70[0] != '\0') {
      puVar11 = local_70;
    }
    local_c8 = CONCAT31(local_c8._1_3_,(char)local_70[0]);
    *(undefined1 *)puVar11 = 0;
    if (((char)local_70[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == local_40) {
      plVar7 = local_40;
      if (((char)local_48 == '\0') && (plVar4 != (longlong *)0x0)) {
        cVar5 = '\x01';
        if ((char)local_c8 == '\0') {
          FUN_00d50b00();
          plVar7 = local_40;
        }
      }
      else {
        cVar5 = (char)local_48;
        if (((char)local_c8 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar7 = local_40;
          cVar5 = (char)local_48;
        }
      }
    }
    else {
      plVar7 = plVar4;
      if ((char)local_c8 == '\0') {
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
          local_40 = plVar4;
          FUN_00d50b20();
          plVar7 = local_40;
          cVar5 = '\x01';
          goto LAB_00d19e4e;
        }
      }
      else if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
        local_40 = plVar4;
        cVar5 = '\x01';
        goto LAB_00d19e4e;
      }
      local_40 = plVar4;
      cVar5 = '\x01';
    }
    goto LAB_00d19e4e;
  }
  uVar18 = FUN_00d46530();
  plVar12 = local_d0;
  local_100 = 0;
  local_108 = CONCAT44(uStack_c4,local_c8);
  if (local_c0 == '\0') {
    if (local_108 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_c0 = '\0';
  }
  local_100 = '\x01';
  FUN_019a54a0(uVar18,&local_108);
  plVar7 = local_78;
  if (local_78 == local_40) {
    cVar5 = (char)local_48;
    if (((char)local_48 == '\0') && (local_40 != (longlong *)0x0)) {
      plVar7 = local_40;
      if ((char)local_70[0] != '\0') goto LAB_00d19d8c;
      FUN_00d50b00();
      cVar5 = '\x01';
    }
LAB_00d19dfc:
    plVar7 = local_40;
    if (((char)local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_70[0] == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      cVar5 = '\x01';
      if (((char)local_48 == '\0') || (local_40 == (longlong *)0x0)) {
        local_40 = plVar7;
      }
      else {
        local_40 = plVar7;
        FUN_00d50b20();
      }
      goto LAB_00d19dfc;
    }
    if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
      local_40 = local_78;
      FUN_00d50b20();
    }
LAB_00d19d8c:
    local_70[0] = local_70[0] & 0xffffff00;
    cVar5 = '\x01';
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
    FUN_00d50b20();
  }
LAB_00d19e4e:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (cVar5 == '\0') {
    if (plVar7 == (longlong *)0x0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = (longlong)plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  else {
    *unaff_RDI = (longlong)plVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (((char)local_d8 != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



// Function: FUN_0062e2d0
// Address: 0062e2d0
// Size: 5520 bytes
// Class: MDPluginMenuViewController


void FUN_0062e2d0(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar12 [16];
  longlong local_260;
  char local_258;
  undefined8 *local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  undefined8 *local_190;
  char local_188;
  undefined8 *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  longlong local_158;
  char local_150;
  undefined1 local_148 [16];
  longlong *local_138;
  char local_130;
  longlong *local_a8;
  char local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar10 = FUN_01e534b0();
  local_260 = DAT_02725840;
  if (DAT_02725840 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_258 = '\x01';
  FUN_01e57490(uVar10,&local_260);
  plVar6 = local_40;
  local_160 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_160 = (longlong *)0x0;
      plVar6 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  FUN_000a94a0();
  if (plVar6 == (longlong *)0x0) {
LAB_0062e378:
    plVar5 = *(longlong **)(unaff_RDI + 0x88);
    plVar4 = DAT_02802688;
    plVar7 = plVar5;
    if (plVar5 != DAT_02802688) {
LAB_0062e3dd:
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x88) = plVar4;
      plVar7 = plVar4;
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar7 = *(longlong **)(unaff_RDI + 0x88);
      }
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0062e378;
    plVar5 = *(longlong **)(unaff_RDI + 0x88);
    plVar4 = local_160;
    plVar7 = plVar5;
    if (plVar5 != local_160) goto LAB_0062e3dd;
  }
  *(undefined1 *)(plVar7 + 0x31) = 1;
  local_130 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x78) + 0x10))();
  FUN_00d50b00();
  local_130 = '\x01';
  local_138 = (longlong *)(unaff_RDI + 0x78);
  FUN_006c6090();
  if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
    (**(code **)(*local_138 + 0x10))();
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  *puVar3 = &DAT_02516280;
  (*DAT_02516298)();
  local_248 = '\x01';
  local_250 = puVar3;
  FUN_006c5420();
  if ((local_248 != '\0') && (local_250 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  local_240 = DAT_02725848;
  if (DAT_02725848 != 0) {
    FUN_00d50b00();
  }
  local_238 = '\x01';
  FUN_003b6200();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = *(longlong **)(unaff_RDI + 0x88);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar2 == '\0') {
    uVar9 = DAT_02390124;
  }
  local_98 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_50 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar2 == '\0') {
    uVar9 = DAT_02390124;
  }
  local_88 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_60 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar2 == '\0') {
    uVar9 = DAT_02390124;
  }
  local_148 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_70 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar2 == '\0') {
    uVar9 = DAT_02390124;
  }
  auVar12 = insertps(local_148,ZEXT416(uVar9),0x10);
  auVar11 = insertps(local_98,local_88._0_4_,0x10);
  (**(code **)(*plVar5 + 0x940))(auVar11._0_8_,auVar12._0_8_);
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar4 + 0x18))();
  plVar5 = *(longlong **)(unaff_RDI + 0xb8);
  if (plVar5 == plVar4) {
    FUN_00d50b20();
LAB_0062e6e9:
    plVar5 = *(longlong **)(unaff_RDI + 0x88);
    plVar4 = *(longlong **)(unaff_RDI + 0xb8);
    if (plVar4 != (longlong *)0x0) goto LAB_0062e718;
    plVar4 = (longlong *)0x0;
  }
  else {
    *(longlong **)(unaff_RDI + 0xb8) = plVar4;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
      goto LAB_0062e6e9;
    }
    plVar5 = *(longlong **)(unaff_RDI + 0x88);
LAB_0062e718:
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x450))();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  local_230 = DAT_02725850;
  if (DAT_02725850 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  FUN_003b6200();
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar4 + 0x18))();
  plVar5 = *(longlong **)(unaff_RDI + 0xd8);
  if (plVar5 == plVar4) {
    FUN_00d50b20();
LAB_0062e816:
    plVar5 = *(longlong **)(unaff_RDI + 0xb8);
    plVar4 = *(longlong **)(unaff_RDI + 0xd8);
    if (plVar4 != (longlong *)0x0) goto LAB_0062e845;
    plVar4 = (longlong *)0x0;
  }
  else {
    *(longlong **)(unaff_RDI + 0xd8) = plVar4;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
      goto LAB_0062e816;
    }
    plVar5 = *(longlong **)(unaff_RDI + 0xb8);
LAB_0062e845:
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x450))();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  local_220 = DAT_02725858;
  if (DAT_02725858 != 0) {
    FUN_00d50b00();
  }
  local_218 = '\x01';
  FUN_003b6200();
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar4 + 0x18))();
  plVar5 = *(longlong **)(unaff_RDI + 0xd0);
  if (plVar5 == plVar4) {
    FUN_00d50b20();
LAB_0062e943:
    plVar4 = *(longlong **)(unaff_RDI + 0xd0);
    plVar5 = *(longlong **)(unaff_RDI + 0xd8);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_0062e97a;
    }
  }
  else {
    *(longlong **)(unaff_RDI + 0xd0) = plVar4;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
      goto LAB_0062e943;
    }
    plVar5 = *(longlong **)(unaff_RDI + 0xd8);
  }
  FUN_00d50b00();
LAB_0062e97a:
  (**(code **)(*plVar5 + 0x450))();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  local_210 = DAT_02725860;
  if (DAT_02725860 != 0) {
    FUN_00d50b00();
  }
  local_208 = '\x01';
  FUN_003b6200();
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = *(longlong **)(unaff_RDI + 0xd0);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar2 == '\0') {
    uVar9 = DAT_02390124;
  }
  local_98 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_50 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar2 == '\0') {
    uVar9 = DAT_02390124;
  }
  local_88 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_60 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar2 == '\0') {
    uVar9 = DAT_02390124;
  }
  local_148 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_70 + 0x450))();
  uVar9 = DAT_02394298;
  if (cVar2 == '\0') {
    uVar9 = DAT_02390124;
  }
  auVar12 = insertps(local_148,ZEXT416(uVar9),0x10);
  auVar11 = insertps(local_98,local_88._0_4_,0x10);
  (**(code **)(*plVar5 + 0x940))(auVar11._0_8_,auVar12._0_8_);
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_000a0940();
  (**(code **)(*plVar5 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0xc0);
  *(longlong **)(unaff_RDI + 0xc0) = plVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_0009ea80();
  FUN_00d50b00();
  FUN_0009a380();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_000a0940();
    (**(code **)(*plVar5 + 0x18))();
    lVar1 = *(longlong *)(unaff_RDI + 200);
    *(longlong **)(unaff_RDI + 200) = plVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_0009ea80();
    FUN_00d50b00();
    FUN_0009a380();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  FUN_006306b0();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_01e56750();
    FUN_01e5bc90();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01e56750();
    FUN_01e5bc90();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_006311f0();
  FUN_01f27fe0();
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  uVar10 = FUN_00d50b00();
  local_200 = 0;
  local_1f8 = '\0';
  FUN_01f47190(uVar10,&local_200);
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((longlong *)(unaff_RDI + 0x70) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if (cVar2 == '\0') {
    bVar8 = *(longlong *)(unaff_RDI + 0x80) != 0;
  }
  else {
    bVar8 = false;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x308);
    FUN_00d6f370();
    local_1f0 = DAT_02725838;
    if (DAT_02725838 != 0) {
      FUN_00d50b00();
    }
    local_1e8 = '\x01';
    FUN_00d8ede0();
    local_a8 = local_60;
    local_a0 = 0;
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_a0 = '\x01';
    FUN_00d710b0(&local_a8,&local_1f0);
    plVar4 = local_40;
    FUN_0062deb0();
    plVar5 = local_70;
    if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar4 + 0x50))();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01e56750();
      FUN_01e5ca90();
      plVar5 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        if (lVar1 == 0) {
          FUN_00d6f370();
          local_1c0 = DAT_02725828;
          if (DAT_02725828 != 0) {
            FUN_00d50b00();
          }
          local_1b8 = '\x01';
          (**(code **)(*plVar5 + 0x4d8))();
          local_98._0_8_ = FUN_00d70af0();
          local_98._8_8_ = extraout_XMM0_Qb_01;
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d6f370();
          local_1b0 = DAT_02725830;
          if (DAT_02725830 != 0) {
            FUN_00d50b00();
          }
          local_1a8 = '\x01';
          (**(code **)(*plVar5 + 0x4d8))();
          local_88._0_8_ = FUN_00d70af0();
          local_88._8_8_ = extraout_XMM0_Qb_02;
          if ((local_1a8 != '\0') && (local_1b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d6f370();
          local_1e0 = DAT_02725818;
          if (DAT_02725818 != 0) {
            FUN_00d50b00();
          }
          local_1d8 = '\x01';
          (**(code **)(*plVar5 + 0x4d8))();
          local_98._0_8_ = FUN_00d70af0();
          local_98._8_8_ = extraout_XMM0_Qb;
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d6f370();
          local_1d0 = DAT_02725820;
          if (DAT_02725820 != 0) {
            FUN_00d50b00();
          }
          local_1c8 = '\x01';
          (**(code **)(*plVar5 + 0x4d8))();
          local_88._0_8_ = FUN_00d70af0();
          local_88._8_8_ = extraout_XMM0_Qb_00;
          if ((local_1c8 != '\0') && (local_1d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_98 = insertps(local_98,local_88._0_4_,0x10);
        FUN_01e56750();
        local_88._0_8_ = FUN_01e59080();
        local_88._8_8_ = extraout_XMM0_Qb_03;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        auVar11 = local_88;
        if (local_88._0_4_ <= local_98._0_4_) {
          auVar11 = local_98;
        }
        auVar12._4_4_ = -(uint)(local_98._4_4_ < local_88._4_4_);
        auVar12._0_4_ = -(uint)(local_98._0_4_ < local_88._0_4_);
        auVar12._8_4_ = -(uint)(local_98._8_4_ < local_88._8_4_);
        auVar12._12_4_ = -(uint)(local_98._12_4_ < local_88._12_4_);
        auVar12 = blendvps(local_98,local_88,auVar12);
        blendps(auVar12,auVar11,0xd);
        (**(code **)(*plVar5 + 0x4e8))();
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0xe0) == 0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_000a9310();
    (**(code **)(*plVar4 + 0x18))();
    plVar5 = *(longlong **)(unaff_RDI + 0xe0);
    if (plVar5 == plVar4) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(unaff_RDI + 0xe0) = plVar4;
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar1 = DAT_02725868;
    if (DAT_02725868 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = lVar1;
    local_198 = '\x01';
    FUN_003b6200();
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *puVar3 = &DAT_024e21e0;
    (*DAT_024e21f8)();
    local_188 = '\x01';
    local_190 = puVar3;
    FUN_006c5420();
    if ((local_188 != '\0') && (local_190 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x558))();
    plVar5 = *(longlong **)(unaff_RDI + 0xe0);
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_40 + 0x450))();
    uVar9 = DAT_02394298;
    if (cVar2 == '\0') {
      uVar9 = DAT_02390124;
    }
    local_98 = ZEXT416(uVar9);
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_50 + 0x450))();
    uVar9 = DAT_02394298;
    if (cVar2 == '\0') {
      uVar9 = DAT_02390124;
    }
    local_88 = ZEXT416(uVar9);
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_60 + 0x450))();
    uVar9 = DAT_02394298;
    if (cVar2 == '\0') {
      uVar9 = DAT_02390124;
    }
    local_148 = ZEXT416(uVar9);
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_70 + 0x450))();
    uVar9 = DAT_02394298;
    if (cVar2 == '\0') {
      uVar9 = DAT_02390124;
    }
    auVar12 = insertps(local_148,ZEXT416(uVar9),0x10);
    auVar11 = insertps(local_98,local_88._0_4_,0x10);
    (**(code **)(*plVar5 + 0x940))(auVar11._0_8_,auVar12._0_8_);
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006c5fa0();
    FUN_006c5f80();
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x948))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x958))();
  }
  if (*(longlong *)(unaff_RDI + 0x170) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_000a9310();
    (**(code **)(*plVar5 + 0x18))();
    lVar1 = *(longlong *)(unaff_RDI + 0x170);
    *(longlong **)(unaff_RDI + 0x170) = plVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *puVar3 = &DAT_02516640;
    (*DAT_02516658)();
    local_178 = '\x01';
    local_180 = puVar3;
    FUN_006c5420();
    if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02725870;
    if (DAT_02725870 != 0) {
      FUN_00d50b00();
    }
    local_170 = lVar1;
    local_168 = '\x01';
    FUN_003b6200();
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x558))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x958))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x948))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x990))();
    plVar5 = *(longlong **)(unaff_RDI + 0xe0);
    lVar1 = *(longlong *)(unaff_RDI + 0x170);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x450))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e40eb0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    plVar5 = *(longlong **)(unaff_RDI + 0xd8);
    local_150 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0xe0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_150 = '\x01';
    local_158 = lVar1;
    (**(code **)(*plVar5 + 0x450))();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    FUN_006c4ec0();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



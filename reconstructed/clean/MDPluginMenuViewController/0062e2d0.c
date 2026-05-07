// Function: FUN_0062e2d0
// Address: 0062e2d0
// Size: 5520 bytes
// Class: MDPluginMenuViewController

void FUN_0062e2d0(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  bool bVar8;
  uint uVar9;
  uint64_t uVar10;
  uint8_t auVar11 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar12 [16];
  int64_t local_260;
  char local_258;
  void*local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  void*local_190;
  char local_188;
  void*local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  int64_t local_158;
  char local_150;
  uint8_t local_148 [16];
  int64_t *local_138;
  char local_130;
  int64_t *local_a8;
  char local_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar10 = FUN_01e534b0();
  local_260 = g_02725840;
  if (g_02725840 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_258 = '\x01';
  FUN_01e57490(uVar10,&local_260);
  plVar6 = local_40;
  local_160 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_160 = (int64_t *)0x0;
      plVar6 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
  if (plVar6 == (int64_t *)0x0) {
LAB_0062e378:
    plVar5 = *(int64_t **)(this_ptr + 0x88);
    plVar4 = g_02802688;
    plVar7 = plVar5;
    if (plVar5 != g_02802688) {
LAB_0062e3dd:
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x88) = plVar4;
      plVar7 = plVar4;
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar7 = *(int64_t **)(this_ptr + 0x88);
      }
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0062e378;
    plVar5 = *(int64_t **)(this_ptr + 0x88);
    plVar4 = local_160;
    plVar7 = plVar5;
    if (plVar5 != local_160) goto LAB_0062e3dd;
  }
  *(void*)(plVar7 + 0x31) = 1;
  local_130 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x78) + 0x10))();
  FUN_00d50b00();
  local_130 = '\x01';
  local_138 = (int64_t *)(this_ptr + 0x78);
  FUN_006c6090();
  if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
    (**(code **)(*local_138 + 0x10))();
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(void*)(puVar3 + 6) = 0;
  *puVar3 = &g_02516280;
  (*g_02516298)();
  local_248 = '\x01';
  local_250 = puVar3;
  FUN_006c5420();
  if ((local_248 != '\0') && (local_250 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  local_240 = g_02725848;
  if (g_02725848 != 0) {
    FUN_00d50b00();
  }
  local_238 = '\x01';
  FUN_003b6200();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = *(int64_t **)(this_ptr + 0x88);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  uVar9 = g_02394298;
  if (cVar2 == '\0') {
    uVar9 = g_02390124;
  }
  local_98 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_50 + 0x450))();
  uVar9 = g_02394298;
  if (cVar2 == '\0') {
    uVar9 = g_02390124;
  }
  local_88 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_60 + 0x450))();
  uVar9 = g_02394298;
  if (cVar2 == '\0') {
    uVar9 = g_02390124;
  }
  local_148 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_70 + 0x450))();
  uVar9 = g_02394298;
  if (cVar2 == '\0') {
    uVar9 = g_02390124;
  }
  auVar12 = insertps(local_148,ZEXT416(uVar9),0x10);
  auVar11 = insertps(local_98,local_88._0_4_,0x10);
  (**(code **)(*plVar5 + 0x940))(auVar11._0_8_,auVar12._0_8_);
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar4 + 0x18))();
  plVar5 = *(int64_t **)(this_ptr + 0xb8);
  if (plVar5 == plVar4) {
    FUN_00d50b20();
LAB_0062e6e9:
    plVar5 = *(int64_t **)(this_ptr + 0x88);
    plVar4 = *(int64_t **)(this_ptr + 0xb8);
    if (plVar4 != (int64_t *)0x0) goto LAB_0062e718;
    plVar4 = (int64_t *)0x0;
  }
  else {
    *(int64_t **)(this_ptr + 0xb8) = plVar4;
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
      goto LAB_0062e6e9;
    }
    plVar5 = *(int64_t **)(this_ptr + 0x88);
LAB_0062e718:
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x450))();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  local_230 = g_02725850;
  if (g_02725850 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  FUN_003b6200();
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar4 + 0x18))();
  plVar5 = *(int64_t **)(this_ptr + 0xd8);
  if (plVar5 == plVar4) {
    FUN_00d50b20();
LAB_0062e816:
    plVar5 = *(int64_t **)(this_ptr + 0xb8);
    plVar4 = *(int64_t **)(this_ptr + 0xd8);
    if (plVar4 != (int64_t *)0x0) goto LAB_0062e845;
    plVar4 = (int64_t *)0x0;
  }
  else {
    *(int64_t **)(this_ptr + 0xd8) = plVar4;
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
      goto LAB_0062e816;
    }
    plVar5 = *(int64_t **)(this_ptr + 0xb8);
LAB_0062e845:
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x450))();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  local_220 = g_02725858;
  if (g_02725858 != 0) {
    FUN_00d50b00();
  }
  local_218 = '\x01';
  FUN_003b6200();
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar4 + 0x18))();
  plVar5 = *(int64_t **)(this_ptr + 0xd0);
  if (plVar5 == plVar4) {
    FUN_00d50b20();
LAB_0062e943:
    plVar4 = *(int64_t **)(this_ptr + 0xd0);
    plVar5 = *(int64_t **)(this_ptr + 0xd8);
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_0062e97a;
    }
  }
  else {
    *(int64_t **)(this_ptr + 0xd0) = plVar4;
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
      goto LAB_0062e943;
    }
    plVar5 = *(int64_t **)(this_ptr + 0xd8);
  }
  FUN_00d50b00();
LAB_0062e97a:
  (**(code **)(*plVar5 + 0x450))();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  local_210 = g_02725860;
  if (g_02725860 != 0) {
    FUN_00d50b00();
  }
  local_208 = '\x01';
  FUN_003b6200();
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = *(int64_t **)(this_ptr + 0xd0);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  uVar9 = g_02394298;
  if (cVar2 == '\0') {
    uVar9 = g_02390124;
  }
  local_98 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_50 + 0x450))();
  uVar9 = g_02394298;
  if (cVar2 == '\0') {
    uVar9 = g_02390124;
  }
  local_88 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_60 + 0x450))();
  uVar9 = g_02394298;
  if (cVar2 == '\0') {
    uVar9 = g_02390124;
  }
  local_148 = ZEXT416(uVar9);
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_70 + 0x450))();
  uVar9 = g_02394298;
  if (cVar2 == '\0') {
    uVar9 = g_02390124;
  }
  auVar12 = insertps(local_148,ZEXT416(uVar9),0x10);
  auVar11 = insertps(local_98,local_88._0_4_,0x10);
  (**(code **)(*plVar5 + 0x940))(auVar11._0_8_,auVar12._0_8_);
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_000a0940();
  (**(code **)(*plVar5 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0xc0);
  *(int64_t **)(this_ptr + 0xc0) = plVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_0009ea80();
  FUN_00d50b00();
  FUN_0009a380();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_000a0940();
    (**(code **)(*plVar5 + 0x18))();
    lVar1 = *(int64_t *)(this_ptr + 200);
    *(int64_t **)(this_ptr + 200) = plVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_0009ea80();
    FUN_00d50b00();
    FUN_0009a380();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  FUN_006306b0();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_01e56750();
    FUN_01e5bc90();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01e56750();
    FUN_01e5bc90();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_006311f0();
  FUN_01f27fe0();
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  uVar10 = FUN_00d50b00();
  local_200 = 0;
  local_1f8 = '\0';
  FUN_01f47190(uVar10,&local_200);
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)(this_ptr + 0x70) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if (cVar2 == '\0') {
    bVar8 = *(int64_t *)(this_ptr + 0x80) != 0;
  }
  else {
    bVar8 = false;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x308);
    FUN_00d6f370();
    local_1f0 = g_02725838;
    if (g_02725838 != 0) {
      FUN_00d50b00();
    }
    local_1e8 = '\x01';
    FUN_00d8ede0();
    local_a8 = local_60;
    local_a0 = 0;
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
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
    if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar4 + 0x50))();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01e56750();
      FUN_01e5ca90();
      plVar5 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        if (lVar1 == 0) {
          FUN_00d6f370();
          local_1c0 = g_02725828;
          if (g_02725828 != 0) {
            FUN_00d50b00();
          }
          local_1b8 = '\x01';
          (**(code **)(*plVar5 + 0x4d8))();
          local_98._0_8_ = FUN_00d70af0();
          local_98._8_8_ = extraout_XMM0_Qb_01;
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d6f370();
          local_1b0 = g_02725830;
          if (g_02725830 != 0) {
            FUN_00d50b00();
          }
          local_1a8 = '\x01';
          (**(code **)(*plVar5 + 0x4d8))();
          local_88._0_8_ = FUN_00d70af0();
          local_88._8_8_ = extraout_XMM0_Qb_02;
          if ((local_1a8 != '\0') && (local_1b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d6f370();
          local_1e0 = g_02725818;
          if (g_02725818 != 0) {
            FUN_00d50b00();
          }
          local_1d8 = '\x01';
          (**(code **)(*plVar5 + 0x4d8))();
          local_98._0_8_ = FUN_00d70af0();
          local_98._8_8_ = extraout_XMM0_Qb;
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d6f370();
          local_1d0 = g_02725820;
          if (g_02725820 != 0) {
            FUN_00d50b00();
          }
          local_1c8 = '\x01';
          (**(code **)(*plVar5 + 0x4d8))();
          local_88._0_8_ = FUN_00d70af0();
          local_88._8_8_ = extraout_XMM0_Qb_00;
          if ((local_1c8 != '\0') && (local_1d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_98 = insertps(local_98,local_88._0_4_,0x10);
        FUN_01e56750();
        local_88._0_8_ = FUN_01e59080();
        local_88._8_8_ = extraout_XMM0_Qb_03;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_000a9310();
    (**(code **)(*plVar4 + 0x18))();
    plVar5 = *(int64_t **)(this_ptr + 0xe0);
    if (plVar5 == plVar4) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0xe0) = plVar4;
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar1 = g_02725868;
    if (g_02725868 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = lVar1;
    local_198 = '\x01';
    FUN_003b6200();
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(void*)(puVar3 + 6) = 0;
    *puVar3 = &g_024e21e0;
    (*g_024e21f8)();
    local_188 = '\x01';
    local_190 = puVar3;
    FUN_006c5420();
    if ((local_188 != '\0') && (local_190 != (void*)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x558))();
    plVar5 = *(int64_t **)(this_ptr + 0xe0);
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_40 + 0x450))();
    uVar9 = g_02394298;
    if (cVar2 == '\0') {
      uVar9 = g_02390124;
    }
    local_98 = ZEXT416(uVar9);
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_50 + 0x450))();
    uVar9 = g_02394298;
    if (cVar2 == '\0') {
      uVar9 = g_02390124;
    }
    local_88 = ZEXT416(uVar9);
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_60 + 0x450))();
    uVar9 = g_02394298;
    if (cVar2 == '\0') {
      uVar9 = g_02390124;
    }
    local_148 = ZEXT416(uVar9);
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_70 + 0x450))();
    uVar9 = g_02394298;
    if (cVar2 == '\0') {
      uVar9 = g_02390124;
    }
    auVar12 = insertps(local_148,ZEXT416(uVar9),0x10);
    auVar11 = insertps(local_98,local_88._0_4_,0x10);
    (**(code **)(*plVar5 + 0x940))(auVar11._0_8_,auVar12._0_8_);
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006c5fa0();
    FUN_006c5f80();
    (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x948))();
    (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x958))();
  }
  if (*(int64_t *)(this_ptr + 0x170) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_000a9310();
    (**(code **)(*plVar5 + 0x18))();
    lVar1 = *(int64_t *)(this_ptr + 0x170);
    *(int64_t **)(this_ptr + 0x170) = plVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(void*)(puVar3 + 6) = 0;
    *puVar3 = &g_02516640;
    (*g_02516658)();
    local_178 = '\x01';
    local_180 = puVar3;
    FUN_006c5420();
    if ((local_178 != '\0') && (local_180 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02725870;
    if (g_02725870 != 0) {
      FUN_00d50b00();
    }
    local_170 = lVar1;
    local_168 = '\x01';
    FUN_003b6200();
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x170) + 0x558))();
    (**(code **)(**(int64_t **)(this_ptr + 0x170) + 0x958))();
    (**(code **)(**(int64_t **)(this_ptr + 0x170) + 0x948))();
    (**(code **)(**(int64_t **)(this_ptr + 0x170) + 0x990))();
    plVar5 = *(int64_t **)(this_ptr + 0xe0);
    lVar1 = *(int64_t *)(this_ptr + 0x170);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x450))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e40eb0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(this_ptr + 0xd8);
    local_150 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0xe0);
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
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}


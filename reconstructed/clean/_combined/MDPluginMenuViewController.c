// ===================================================================
// MDPluginMenuViewController — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 0062e2d0
// ============================================================
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



// ============================================================
// 0062bd30
// ============================================================
// Function: FUN_0062bd30
// Address: 0062bd30
// Size: 3589 bytes
// Class: MDPluginMenuViewController

void FUN_0062bd30(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  int64_t *local_280;
  char local_278;
  int64_t *local_270;
  char local_268;
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
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_100;
  char local_f8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_60;
  char local_58;
  int64_t *local_30;
  char local_28;
  
  plVar4 = (int64_t *)FUN_00018320();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0xb0);
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0xb0) = plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00179ed0();
  plVar1 = *(int64_t **)(this_ptr + 0xb0);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x638))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xb0);
  lVar2 = *(int64_t *)(this_ptr + 0xd0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x4c8))(g_023dccec,g_023dccf4);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_30 + 0x918))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*local_60 + 0x520))();
  if (local_28 == '\0') {
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_00179e70();
  if (local_30 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  lVar2 = g_027257c8;
  if (g_027257c8 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x748))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    plVar1 = *(int64_t **)(this_ptr + 0x88);
    (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x5c8))();
    if (local_28 == '\0') {
      if (local_30 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    (**(code **)(*plVar1 + 0x450))();
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_001771e0();
    (**(code **)(*local_30 + 0xad8))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_001771e0();
    (**(code **)(*local_30 + 0xa20))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_001771e0();
    (**(code **)(*local_30 + 0x990))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_001771e0();
    lVar2 = g_027257d0;
    if (g_027257d0 != 0) {
      FUN_00d50b00();
    }
    FUN_003b6200();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_001771e0();
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_60 + 0x450))();
    uVar5 = g_02394298;
    if (cVar3 == '\0') {
      uVar5 = g_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_280 + 0x450))();
    uVar6 = g_02394298;
    if (cVar3 == '\0') {
      uVar6 = g_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_270 + 0x450))();
    uVar7 = g_02394298;
    if (cVar3 == '\0') {
      uVar7 = g_02390124;
    }
    auVar10 = blendps(ZEXT816(0),ZEXT416(uVar7),1);
    auVar9 = insertps(ZEXT416(uVar5),uVar6,0x10);
    (**(code **)(*local_30 + 0x940))(auVar9._0_8_,auVar10._0_8_);
    if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_278 != '\0') && (local_280 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x88);
    uVar8 = FUN_001771e0();
    if (local_28 == '\0') {
      if (local_30 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    (**(code **)(*plVar1 + 0x9e8))(uVar8,0);
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_240 = g_02787850;
  if (g_02787850 != 0) {
    FUN_00d50b00();
  }
  local_238 = '\x01';
  local_230 = 0;
  local_228 = '\0';
  FUN_00d41430(&local_230,&local_240);
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_220 = g_027257e0;
  if (g_027257e0 != 0) {
    FUN_00d50b00();
  }
  local_218 = '\x01';
  local_210 = 0;
  local_208 = '\0';
  FUN_00d41430(&local_210,&local_220);
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_200 = g_026e4838;
  if (g_026e4838 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  local_f8 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_100 = lVar2;
  FUN_00d41430(&local_100,&local_200);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1f0 = g_027257f0;
  if (g_027257f0 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  local_d8 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_e0 = lVar2;
  FUN_00d41430(&local_e0,&local_1f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1e0 = g_027294f0;
  if (g_027294f0 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = '\x01';
  local_1d0 = 0;
  local_1c8 = '\0';
  FUN_00d41430(&local_1d0,&local_1e0);
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1c0 = g_02725800;
  if (g_02725800 != 0) {
    FUN_00d50b00();
  }
  local_1b8 = '\x01';
  local_1b0 = 0;
  local_1a8 = '\0';
  FUN_00d41430(&local_1b0,&local_1c0);
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_1a0 = g_02725808;
    if (g_02725808 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    local_190 = 0;
    local_188 = '\0';
    FUN_00d41430(&local_190,&local_1a0);
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_180 = g_02725810;
  if (g_02725810 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  FUN_00d50b00();
  FUN_00d41430(&stack0xffffffffffffff70,&local_180);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_170 = g_02725810;
  if (g_02725810 != 0) {
    FUN_00d50b00();
  }
  local_168 = '\x01';
  FUN_00d50b00();
  local_160 = 0;
  local_158 = '\0';
  FUN_00d40470(&local_160,&stack0xffffffffffffff80,1,3);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0062b480
// ============================================================
// Function: FUN_0062b480
// Address: 0062b480
// Size: 1466 bytes
// Class: MDPluginMenuViewController
// String references:
//   "MDPluginMenuViewController"

void FUN_0062b480(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  uint uVar7;
  uint64_t uVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t local_e8 [16];
  uint local_d8;
  uint8_t local_c8 [16];
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0xf0) != 0) {
    return;
  }
  plVar5 = (int64_t *)FUN_00018320();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0xf0);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0xf0) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = *(int64_t **)(this_ptr + 0xf0);
  local_50 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar2;
  (**(code **)(*plVar1 + 0x4c8))(g_023dccec,g_023dccf4);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x918))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x948))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x928))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  plVar1 = local_38;
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_b8 + 0x450))();
  local_e8._0_4_ = g_02394298;
  if (cVar3 == '\0') {
    local_e8._0_4_ = g_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_a8 + 0x450))();
  local_d8 = g_02394298;
  if (cVar3 == '\0') {
    local_d8 = g_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_98 + 0x450))();
  local_c8._0_4_ = g_02394298;
  if (cVar3 == '\0') {
    local_c8._0_4_ = g_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_88 + 0x450))();
  local_e8._4_4_ = 0;
  local_e8._8_8_ = _UNK_023945e8;
  local_e8._0_8_ = local_e8._0_8_ | g_023945e0;
  local_d8 = local_d8 | (uint)g_023945e0;
  local_c8._4_4_ = 0;
  local_c8._8_8_ = _UNK_023945e8;
  local_c8._0_8_ = local_c8._0_8_ | g_023945e0;
  uVar7 = g_02394298;
  if (cVar3 == '\0') {
    uVar7 = g_02390124;
  }
  auVar10 = insertps(local_c8,ZEXT416(uVar7),0x10);
  auVar9 = insertps(local_e8,local_d8,0x10);
  (**(code **)(*plVar1 + 0x940))(auVar9._0_8_,auVar10._0_8_);
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027257c0;
  if (g_027257c0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  pplVar6 = &local_38;
  FUN_00176e40(&local_68,&local_78);
  plVar1 = local_38;
  if ((g_0271ca50 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02708f48 = FUN_00015ff0();
    g_02708f30 = "MDPluginMenuViewController";
    g_02708f38 = 0x80;
    g_02708f40 = FUN_004ad2e0;
    g_02708f50 = 0;
    ram_0000000002708f58 = 0;
    g_02708f60 = 0;
    ram_0000000002708f68 = 0;
    g_02708f70 = 0;
    ram_0000000002708f78 = 0;
    g_02708f80 = 0;
    ram_0000000002708f88 = 0;
    g_02708f90 = 0;
    ram_0000000002708f98 = 0;
    g_02708fa0 = 0;
    ram_0000000002708fa8 = 0;
    g_02708fb0 = 0;
    ram_0000000002708fb8 = 0;
    g_02708fc0 = 0;
    ram_0000000002708fc8 = 0;
    g_02708fd0 = 0;
    ram_0000000002708fd8 = 0;
    g_02708fe0 = 0;
    ram_0000000002708fe8 = 0;
    g_02708ff0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0062b822;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_0062b822:
  plVar5 = *(int64_t **)(this_ptr + 0xf8);
  plVar1 = *pplVar6;
  if (plVar5 != plVar1) {
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0xf8) = 0;
      }
      else {
        FUN_00d50b00();
        plVar5 = *(int64_t **)(this_ptr + 0xf8);
        *(int64_t **)(this_ptr + 0xf8) = *pplVar6;
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
      *(int64_t **)(this_ptr + 0xf8) = plVar1;
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x630))();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  uVar8 = FUN_00176c40();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x9e8))(uVar8,0);
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xf8) != 0) {
    FUN_004aa180();
  }
  return;
}



// ============================================================
// 0062d8e0
// ============================================================
// Function: FUN_0062d8e0
// Address: 0062d8e0
// Size: 837 bytes
// Class: MDPluginMenuViewController

void FUN_0062d8e0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t this_ptr;
  bool bVar3;
  uint32_t uVar4;
  uint32_t local_a8;
  uint32_t uStack_a4;
  int64_t local_98;
  char local_90;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  int64_t *local_28;
  char local_20;
  
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_28 + 0x450))();
  if ((cVar2 == '\0') && (*(int64_t *)(this_ptr + 0x80) != 0)) {
    FUN_01e561b0();
    bVar3 = local_98 != 0;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar3 = false;
  }
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    FUN_01e561b0();
    (**(code **)(*local_28 + 0x4d8))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_a8 = (uint32_t)param_2;
    uStack_a4 = (uint32_t)((uint64_t)param_2 >> 0x20);
    if (*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x308) == 0) {
      FUN_00d6f370();
      lVar1 = g_02725828;
      if (g_02725828 != 0) {
        FUN_00d50b00();
      }
      FUN_00d70a00(local_a8);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d6f370();
      lVar1 = g_02725830;
      if (g_02725830 != 0) {
        FUN_00d50b00();
      }
      FUN_00d70a00(uStack_a4);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d6f370();
      lVar1 = g_02725818;
      if (g_02725818 != 0) {
        FUN_00d50b00();
      }
      FUN_00d70a00(local_a8);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d6f370();
      lVar1 = g_02725820;
      if (g_02725820 != 0) {
        FUN_00d50b00();
      }
      FUN_00d70a00(uStack_a4);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    uVar4 = FUN_0062deb0();
    local_30 = 0;
    lVar1 = g_02725838;
    if ((local_90 == '\0') && (local_98 != 0)) {
      uVar4 = FUN_00d50b00();
      lVar1 = g_02725838;
    }
    local_30 = '\x01';
    local_38 = local_98;
    g_02725838 = lVar1;
    if (lVar1 != 0) {
      local_30 = '\x01';
      uVar4 = FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_00d6f570(uVar4,&local_48);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0062deb0
// ============================================================
// Function: FUN_0062deb0
// Address: 0062deb0
// Size: 631 bytes
// Class: MDPluginMenuViewController
// String references:
//   "%@;%@"

int64_t * FUN_0062deb0(void)

{
  int64_t *this_ptr;
  int64_t lVar1;
  int iVar2;
  bool bVar3;
  uint8_t local_a0 [8];
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d8ede0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_01f50cc0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0062e118;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0062e118;
  lVar1 = local_60;
  if (0 < *(int *)(local_60 + 0xc)) {
    iVar2 = 0;
    do {
      FUN_01f51240();
      FUN_00d962d0();
      FUN_00083ea0(2,local_a0);
      FUN_00d8cb40();
      if (local_70 == lVar1) {
LAB_0062e061:
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        bVar3 = lVar1 != 0;
        lVar1 = local_70;
        if (bVar3) {
          FUN_00d50b20();
          goto LAB_0062e061;
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        local_68 = '\0';
        lVar1 = local_70;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(local_60 + 0xc));
  }
  FUN_0065c9a0();
  FUN_00d50b20();
  local_60 = lVar1;
LAB_0062e118:
  *this_ptr = local_60;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}


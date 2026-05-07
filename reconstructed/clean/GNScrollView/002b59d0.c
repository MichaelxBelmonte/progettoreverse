// Function: FUN_002b59d0
// Address: 002b59d0
// Size: 5585 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_002b59d0(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  float fVar12;
  uint32_t uVar13;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t auVar14 [16];
  float local_378;
  uint32_t uStack_374;
  uint32_t uStack_370;
  uint32_t uStack_36c;
  int64_t local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  int64_t *local_310;
  char local_308;
  int64_t *local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int64_t *local_2e0;
  char local_2d8;
  int64_t *local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t *local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t *local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t *local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar13 = (uint32_t)((uint64_t)param_2 >> 0x20);
  fVar12 = (float)param_2;
  (**(code **)(*arg1 + 0x20))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002b6f81;
    }
  }
  else if (local_40 != (int64_t *)0x0) goto LAB_002b6f81;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar6 = (int64_t)&g_024dbaf0;
  plVar6[2] = (int64_t)&g_024dc430;
  plVar6[0x27] = 0;
  plVar6[0x28] = 0;
  *(void*)(plVar6 + 0x29) = 0;
  FUN_00d500e0();
  plVar6[0x27] = (int64_t)arg1;
  plVar7 = (int64_t *)(**(code **)(*arg1 + 0x10))();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_60 = plVar7;
  (**(code **)(*plVar6 + 0x640))();
  uVar9 = (**(code **)(*local_40 + 0x580))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*arg1 + 0x48))();
  local_378 = (float)uVar9;
  if (cVar5 == '\0') {
    (**(code **)(*plVar7 + 0x4d8))();
    auVar11._4_4_ = uVar13;
    auVar11._0_4_ = fVar12 + g_023b1698;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._12_4_ = in_XMM1_Dd;
    auVar11 = blendps(ZEXT816(0),auVar11,1);
    (**(code **)(*plVar6 + 0x4d0))(auVar11._0_8_,g_023b16b0);
  }
  else {
    (**(code **)(*plVar7 + 0x4d8))();
    auVar14 = insertps(g_023b16c0,ZEXT416((uint)(g_02390d00 + local_378 + g_023b169c)),0x10);
    auVar1._4_4_ = uVar13;
    auVar1._0_4_ = fVar12 + g_023b1698;
    auVar1._8_4_ = in_XMM1_Dc;
    auVar1._12_4_ = in_XMM1_Dd;
    auVar11 = blendps(ZEXT816(0),auVar1,1);
    (**(code **)(*plVar6 + 0x4d0))(auVar11._0_8_,auVar14._0_4_);
  }
  (**(code **)(*plVar6 + 0x570))();
  (**(code **)(*plVar6 + 0x558))();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar7 + 0x27) = 0;
  plVar7[0x2e] = 0;
  *(void*)(plVar7 + 0x2f) = 0;
  plVar7[0x30] = 0;
  *(void*)(plVar7 + 0x31) = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(void*)(plVar7 + 0x2a) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  *(void*)((int64_t)plVar7 + 0x165) = 0;
  *(void*)((int64_t)plVar7 + 0x18c) = 0;
  *(void*)((int64_t)plVar7 + 0x194) = 0;
  *(void*)((int64_t)plVar7 + 0x199) = 0;
  plVar7[0x35] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  *(void*)((int64_t)plVar7 + 500) = 0;
  *(void*)(plVar7 + 0x3f) = 0;
  plVar7[0x43] = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  *(void*)(plVar7 + 0x3e) = 0;
  *(void*)((int64_t)plVar7 + 0x1fc) = 0;
  *(void*)((int64_t)plVar7 + 0x204) = 0;
  *(void*)((int64_t)plVar7 + 0x20c) = 0;
  *plVar7 = (int64_t)&g_02687f80;
  plVar7[2] = (int64_t)&g_02688a68;
  plVar7[0x39] = (int64_t)&g_02688aa8;
  plVar7[0x44] = 0;
  *(void*)(plVar7 + 0x45) = 0;
  plVar7[0x46] = 0;
  *(void*)(plVar7 + 0x47) = 0;
  plVar7[0x48] = 0;
  *(void*)(plVar7 + 0x49) = 0;
  *(void*)((int64_t)plVar7 + 0x24c) = 0;
  *(void*)(plVar7 + 0x4a) = 0;
  (*g_02687f98)();
  FUN_01cef4c0();
  FUN_01cef490();
  (**(code **)(*plVar7 + 0x558))();
  (**(code **)(*plVar7 + 0x4d0))();
  lVar3 = g_026deab0;
  if (g_026deab0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar7 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar7 + 0xa20))();
  FUN_01d7ac40();
  FUN_01cef4e0();
  lVar3 = g_026f6f70;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_026fc528;
  if (g_026fc528 != 0) {
    FUN_00d50b00();
  }
  local_330 = lVar4;
  local_328 = '\x01';
  local_320 = 0;
  local_318 = '\0';
  FUN_00d31230(&local_320,&local_330);
  local_c0 = local_40;
  local_b8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_b8 = '\x01';
  (**(code **)(*plVar7 + 0x6a8))();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if ((local_328 != '\0') && (local_330 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_0027c9f0();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_002b8a90();
  (**(code **)(*plVar8 + 0x18))();
  local_308 = '\x01';
  local_310 = plVar8;
  FUN_01d779a0();
  if ((local_308 != '\0') && (local_310 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_2f0 = g_026fc520;
  local_2f8 = '\0';
  local_300 = plVar6;
  if (g_026fc520 != 0) {
    FUN_00d50b00();
  }
  local_2e8 = '\x01';
  local_2d8 = '\0';
  local_2e0 = plVar7;
  FUN_00d41430(&local_2e0,&local_2f0);
  if ((local_2d8 != '\0') && (local_2e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f8 != '\0') && (local_300 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_2c0 = g_027f0f20;
  local_2c8 = '\0';
  local_2d0 = plVar6;
  if (g_027f0f20 != 0) {
    FUN_00d50b00();
  }
  local_2b8 = '\x01';
  local_2b0 = 0;
  local_2a8 = '\0';
  FUN_00d41430(&local_2b0,&local_2c0);
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c8 != '\0') && (local_2d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_290 = g_027ebc60;
  local_298 = '\0';
  local_2a0 = plVar6;
  if (g_027ebc60 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  local_280 = 0;
  local_278 = '\0';
  FUN_00d41430(&local_280,&local_290);
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_260 = g_026f6e90;
  local_268 = '\0';
  local_270 = plVar6;
  if (g_026f6e90 != 0) {
    FUN_00d50b00();
  }
  local_258 = '\x01';
  local_250 = 0;
  local_248 = '\0';
  FUN_00d41430(&local_250,&local_260);
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_230 = g_026fce70;
  local_238 = '\0';
  local_240 = plVar6;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  FUN_00d41430(&local_220,&local_230);
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_200 = g_026d7d88;
  local_208 = '\0';
  local_210 = plVar6;
  if (g_026d7d88 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  local_1f0 = 0;
  local_1e8 = '\0';
  FUN_00d41430(&local_1f0,&local_200);
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_1d0 = g_026f6d10;
  local_1d8 = '\0';
  local_1e0 = plVar6;
  if (g_026f6d10 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = '\x01';
  local_1c0 = 0;
  local_1b8 = '\0';
  FUN_00d41430(&local_1c0,&local_1d0);
  plVar8 = local_60;
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_1a8 = '\0';
  local_1b0 = plVar7;
  (**(code **)(*plVar6 + 0x450))();
  if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*arg1 + 0x48))();
  if (cVar5 == '\0') {
    local_50 = 0;
    local_48 = (int64_t *)0x0;
  }
  else {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(void*)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(void*)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(void*)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(void*)((int64_t)plVar7 + 0x165) = 0;
    *(void*)((int64_t)plVar7 + 0x18c) = 0;
    *(void*)((int64_t)plVar7 + 0x194) = 0;
    *(void*)((int64_t)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *plVar7 = (int64_t)&g_02677e10;
    plVar7[2] = (int64_t)&g_026788e8;
    plVar7[0x39] = (int64_t)&g_02678928;
    *(void*)((int64_t)plVar7 + 500) = 0;
    *(void*)(plVar7 + 0x3f) = 0;
    plVar7[0x43] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(void*)(plVar7 + 0x3e) = 0;
    *(void*)((int64_t)plVar7 + 0x1fc) = 0;
    *(void*)((int64_t)plVar7 + 0x204) = 0;
    *(void*)((int64_t)plVar7 + 0x20c) = 0;
    (*g_02677e28)();
    FUN_01cef4c0();
    (**(code **)(*plVar7 + 0x558))();
    auVar11 = blendps(ZEXT416((uint)(g_023b16a0 - local_378)),g_023b16e0,0xe);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
    local_1a0 = plVar8;
    local_198 = '\0';
    (**(code **)(*plVar7 + 0xa20))();
    if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = g_026fb888;
    if (g_026fb888 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar3;
    local_188 = '\x01';
    (**(code **)(*plVar7 + 0xa10))();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d0fe80();
    uVar10 = (**(code **)(*plVar7 + 0xa18))();
    local_b0 = local_d0;
    local_a8 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != 0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_a8 = '\x01';
    FUN_01d5e6e0(uVar10,&local_b0);
    local_48 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_48 = (int64_t *)0x0;
      local_50 = 0;
    }
    else if (local_38 == '\0') {
      uVar10 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_50 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_01d65230();
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      (**(code **)(*plVar7 + 0x6a8))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = g_026fc530;
    if (g_026fc530 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar3;
    local_178 = '\x01';
    FUN_01d51a40();
    local_90 = local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    FUN_01cef3b0();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    local_168 = '\0';
    local_170 = plVar7;
    (**(code **)(*plVar6 + 0x450))();
    if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar7 + 0x27) = 0;
  plVar7[0x2e] = 0;
  *(void*)(plVar7 + 0x2f) = 0;
  plVar7[0x30] = 0;
  *(void*)(plVar7 + 0x31) = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(void*)(plVar7 + 0x2a) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  *(void*)((int64_t)plVar7 + 0x165) = 0;
  *(void*)((int64_t)plVar7 + 0x18c) = 0;
  *(void*)((int64_t)plVar7 + 0x194) = 0;
  *(void*)((int64_t)plVar7 + 0x199) = 0;
  plVar7[0x35] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  *plVar7 = (int64_t)&g_02677e10;
  plVar7[2] = (int64_t)&g_026788e8;
  plVar7[0x39] = (int64_t)&g_02678928;
  *(void*)((int64_t)plVar7 + 500) = 0;
  *(void*)(plVar7 + 0x3f) = 0;
  plVar7[0x43] = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  *(void*)(plVar7 + 0x3e) = 0;
  *(void*)((int64_t)plVar7 + 0x1fc) = 0;
  *(void*)((int64_t)plVar7 + 0x204) = 0;
  *(void*)((int64_t)plVar7 + 0x20c) = 0;
  (*g_02677e28)();
  FUN_01cef4c0();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = local_60;
  uStack_374 = (uint32_t)((uint64_t)uVar9 >> 0x20);
  uStack_370 = (uint32_t)extraout_XMM0_Qb;
  uStack_36c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  if (cVar5 == '\0') {
    auVar14._4_4_ = uStack_374;
    auVar14._0_4_ = local_378 + g_023b169c + g_023b1608;
    auVar14._8_4_ = uStack_370;
    auVar14._12_4_ = uStack_36c;
    auVar11 = insertps(ZEXT416((uint)(g_023b16a0 - local_378)),auVar14,0x10);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
  }
  else {
    auVar2._4_4_ = uStack_374;
    auVar2._0_4_ = local_378 + g_023b169c + g_023b1608;
    auVar2._8_4_ = uStack_370;
    auVar2._12_4_ = uStack_36c;
    auVar11 = insertps(g_023b16c0,auVar2,0x10);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
  }
  local_160 = plVar8;
  local_158 = '\0';
  (**(code **)(*plVar7 + 0xa20))();
  if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_026fc538;
  if (g_026fc538 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar3;
  local_148 = '\x01';
  (**(code **)(*plVar7 + 0xa10))();
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_026f6f90;
  if (g_026f6f90 != 0) {
    FUN_00d50b00();
  }
  local_140 = lVar3;
  local_138 = '\x01';
  FUN_01d51a40();
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  FUN_01cef3b0();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d0fe80();
  local_130 = g_026f6f70;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026fe490;
  local_128 = '\x01';
  if (g_026fe490 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar3;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_00d31230(&local_110,&local_120);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  plVar8 = local_60;
  local_68 = '\x01';
  (**(code **)(*plVar7 + 0x6a8))();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d9a650();
  local_f8 = '\0';
  local_100 = plVar7;
  FUN_01d9ad20();
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d9a660();
  plVar6[0x28] = (int64_t)plVar7;
  local_e8 = '\0';
  local_f0 = plVar6;
  (**(code **)(*plVar8 + 0x450))();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_d8 = '\0';
  local_e0 = plVar6;
  (**(code **)(*arg1 + 0x28))();
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x38))();
  FUN_00d50b00();
  FUN_00d50b20();
  if (((char)local_50 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_002b6f81:
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}


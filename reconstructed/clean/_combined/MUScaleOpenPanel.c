// ===================================================================
// MUScaleOpenPanel — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (7):
//                   _modeMatrix
//                   _tuningMatrix
//                   _fundamentalPopUp
//                   _pitchPopUp
//                   _stretchingPopUp
//                   _externalScalesButton
//                   _openedDistribution


// ============================================================
// 01b31bc0
// ============================================================
// Function: FUN_01b31bc0
// Address: 01b31bc0
// Size: 14986 bytes
// Class: MUScaleOpenPanel
// String references:
//   "%%@%%I    (%@)"
//   "%@ = %.1f  (%@, A -> %.1f)"
//   "A = %.1f  (%@)"
//   "A = 440.0  (%@)"
//   "%@ = %.1f  (%@)"
//   "A=%.1f    (%@)"
// === MUScaleOpenPanel properties ===
//                   _modeMatrix
//                   _tuningMatrix
//                   _fundamentalPopUp
//                   _pitchPopUp
//                   _stretchingPopUp
//                   _externalScalesButton
//                   _openedDistribution


void FUN_01b31bc0(void)

{
  char cVar1;
  char cVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t this_ptr;
  void*puVar13;
  uint32_t uVar14;
  float fVar15;
  uint32_t uVar16;
  int64_t local_688;
  char local_680;
  int64_t local_678;
  char local_670;
  int64_t local_668;
  char local_660;
  int64_t local_658;
  char local_650;
  int64_t *local_648;
  char local_640;
  int64_t local_638;
  char local_630;
  int64_t local_628;
  char local_620;
  int64_t local_618;
  char local_610;
  int64_t local_608;
  char local_600;
  int64_t local_5f8;
  char local_5f0;
  int64_t local_5e8;
  char local_5e0;
  int64_t local_5d8;
  char local_5d0;
  int64_t *local_5c8;
  char local_5c0;
  int64_t local_5b8;
  char local_5b0;
  int64_t local_5a8;
  char local_5a0;
  int64_t local_598;
  char local_590;
  int64_t local_588;
  char local_580;
  int64_t local_578;
  char local_570;
  int64_t local_568;
  char local_560;
  int64_t local_558;
  char local_550;
  int64_t local_548;
  char local_540;
  int64_t local_538;
  char local_530;
  int64_t local_528;
  char local_520;
  int64_t local_518;
  char local_510;
  int64_t local_508;
  char local_500;
  int64_t local_4f8;
  char local_4f0;
  int64_t local_4e8;
  char local_4e0;
  int64_t local_4d8;
  char local_4d0;
  int64_t local_4c8;
  char local_4c0;
  int64_t local_4b8;
  char local_4b0;
  int64_t local_4a8;
  char local_4a0;
  int64_t local_498;
  char local_490;
  int64_t local_488;
  char local_480;
  int64_t local_478;
  char local_470;
  int64_t local_468;
  char local_460;
  int64_t local_458;
  char local_450;
  int64_t local_448;
  char local_440;
  int64_t local_438;
  char local_430;
  int64_t local_428;
  char local_420;
  int64_t local_418;
  char local_410;
  int64_t local_408;
  char local_400;
  int64_t local_3f8;
  char local_3f0;
  int64_t local_3e8;
  char local_3e0;
  int64_t local_3d8;
  char local_3d0;
  int64_t local_3c8;
  char local_3c0;
  int64_t local_3b8;
  char local_3b0;
  int64_t local_3a8;
  char local_3a0;
  int64_t local_398;
  char local_390;
  int64_t local_388;
  char local_380;
  int64_t local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  int64_t local_358;
  char local_350;
  int64_t local_348;
  char local_340;
  int64_t local_338;
  char local_330;
  int64_t local_328;
  char local_320;
  int64_t local_318;
  char local_310;
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  uint32_t local_2a8;
  uint32_t local_2a4;
  float local_2a0;
  float local_29c;
  int64_t *local_258;
  char local_250;
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t *local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  int64_t *local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  float local_a0 [2];
  int64_t *local_98;
  float local_90;
  float local_8c;
  int64_t local_88;
  char local_80;
  int64_t local_70;
  char local_68;
  uint32_t local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01e125e0();
  FUN_01d6f8d0();
  plVar10 = *(int64_t **)(this_ptr + 0xb0);
  FUN_00d50b00();
  (**(code **)(*plVar10 + 0xa20))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar5 = g_027e45a0;
  plVar10 = *(int64_t **)(this_ptr + 0xb0);
  if (g_027e45a0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar10 + 0xa10))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_01d6f8d0();
  plVar10 = *(int64_t **)(this_ptr + 0xb8);
  FUN_00d50b00();
  (**(code **)(*plVar10 + 0xa20))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar5 = g_027e45a8;
  plVar10 = *(int64_t **)(this_ptr + 0xb8);
  if (g_027e45a8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar10 + 0xa10))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_01d6f8d0();
  plVar10 = *(int64_t **)(this_ptr + 0xc0);
  FUN_00d50b00();
  (**(code **)(*plVar10 + 0xa20))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar5 = g_027e45b0;
  plVar10 = *(int64_t **)(this_ptr + 0xc0);
  if (g_027e45b0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar10 + 0xa10))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x4a0))();
  FUN_00d23310();
  plVar10 = local_98;
  pfVar6 = &local_90;
  local_58 = local_90._0_1_;
  pfVar7 = pfVar6;
  if (local_90._0_1_ == '\0') {
    pfVar7 = (float *)&local_58;
  }
  *(void*)pfVar7 = 0;
  if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar9 = (void*)pfVar6;
  (**(code **)(*plVar10 + 0x958))();
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x4a0))();
  FUN_00d23310();
  plVar10 = local_98;
  local_58 = local_90._0_1_;
  pfVar6 = &local_90;
  if (local_90._0_1_ == '\0') {
    pfVar6 = (float *)&local_58;
  }
  *(void*)pfVar6 = 0;
  if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar10 + 0x958))();
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01b27070();
  local_48 = local_98;
  if ((local_90._0_1_ == '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar3 = FUN_01b270b0();
  local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,uVar3);
  if (local_48 != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x4a0))();
    FUN_00d23310();
    plVar10 = local_98;
    local_a0[0] = (float)CONCAT31(local_a0[0]._1_3_,local_90._0_1_);
    pfVar6 = &local_90;
    if (local_90._0_1_ == '\0') {
      pfVar6 = local_a0;
    }
    *(void*)pfVar6 = 0;
    if ((local_90._0_1_ != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_016ab300();
    pvVar4 = _pthread_getspecific(pVar9);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar9 = (void*)local_48;
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_01736d70();
    local_258 = local_b0;
    local_250 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (int64_t *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_250 = '\x01';
    FUN_016ac280(uVar3,&local_258);
    plVar11 = local_98;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    (**(code **)(*plVar10 + 0x958))();
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_250 != '\0') && (local_258 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a0[0]._0_1_ != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x4a0))();
    FUN_00d23310();
    plVar10 = local_98;
    pfVar6 = &local_90;
    pfVar7 = local_a0;
    if (local_90._0_1_ != '\0') {
      pfVar7 = pfVar6;
    }
    local_a0[0] = (float)CONCAT31(local_a0[0]._1_3_,local_90._0_1_);
    *(void*)pfVar7 = 0;
    if ((local_90._0_1_ != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (void*)pfVar6;
    FUN_016ab300();
    pvVar4 = _pthread_getspecific(pVar9);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar9 = (void*)local_48;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_01770c90();
    local_238 = local_b0;
    local_230 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (int64_t *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_230 = '\x01';
    FUN_016ac280(uVar3,&local_238);
    local_248 = local_98;
    local_240 = 0;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    local_240 = '\x01';
    (**(code **)(*plVar10 + 0x958))();
    if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a0[0]._0_1_ != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    plVar10 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar10 = local_48, lVar5 != 0)) {
      plVar10 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar10 + 0x370))();
    lVar5 = g_027e4590;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = g_027e45b8;
    if (g_027e45b8 != 0) {
      FUN_00d50b00();
    }
    local_688 = lVar8;
    local_680 = '\x01';
    local_678 = 0;
    local_670 = '\0';
    plVar10 = &local_678;
    uVar14 = FUN_00d31230(plVar10,&local_688);
    pVar9 = (void*)plVar10;
    local_88 = CONCAT71(uStack_57,local_58);
    local_90 = 1.4013e-45;
    local_98 = &g_024c5048;
    local_80 = 0;
    if (local_88 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_00d8cb40(uVar14,&local_98);
    lVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = &g_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_670 != '\0') && (local_678 != 0)) {
      FUN_00d50b20();
    }
    if ((local_680 != '\0') && (local_688 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    plVar10 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar10 = local_48, lVar5 != 0)) {
      plVar10 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    local_668 = lVar8;
    local_660 = '\0';
    local_658 = 0;
    local_650 = '\0';
    (**(code **)(*plVar10 + 0x3c0))(&local_668,uVar3,&local_658);
    plVar10 = local_98;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    if ((local_650 != '\0') && (local_658 != 0)) {
      FUN_00d50b20();
    }
    if ((local_660 != '\0') && (local_668 != 0)) {
      FUN_00d50b20();
    }
    local_648 = plVar10;
    local_640 = '\0';
    FUN_01d6f990();
    if ((local_640 != '\0') && (local_648 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x4a0))();
  FUN_00d23340();
  plVar10 = local_98;
  local_58 = local_90._0_1_;
  pfVar6 = &local_90;
  if (local_90._0_1_ == '\0') {
    pfVar6 = (float *)&local_58;
  }
  *(char *)pfVar6 = '\0';
  if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_638 = 0;
  local_630 = '\0';
  (**(code **)(*plVar10 + 0x958))();
  if ((local_630 != '\0') && (local_638 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x4a0))();
  FUN_00d23340();
  plVar10 = local_98;
  pfVar6 = &local_90;
  pfVar7 = (float *)&local_58;
  if (local_90._0_1_ != '\0') {
    pfVar7 = pfVar6;
  }
  local_58 = local_90._0_1_;
  *(char *)pfVar7 = '\0';
  if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar9 = (void*)pfVar6;
  local_628 = 0;
  local_620 = '\0';
  (**(code **)(*plVar10 + 0x958))();
  if ((local_620 != '\0') && (local_628 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = (int64_t *)(this_ptr + 0xe0);
  if (*(int64_t *)(this_ptr + 0xe0) != 0) {
    FUN_01e42030();
    plVar11 = local_98;
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_01e11330();
      FUN_016ab300();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_017aabc0();
      local_210 = 0;
      local_218 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (local_218 != 0) {
          uVar3 = FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_210 = '\x01';
      FUN_016ac280(uVar3,&local_218);
      local_228 = local_98;
      local_220 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_220 = '\x01';
      FUN_01e125e0();
      if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x4a0))();
    FUN_00d23340();
    plVar11 = local_98;
    local_a0[0] = (float)CONCAT31(local_a0[0]._1_3_,local_90._0_1_);
    pfVar6 = local_a0;
    pfVar7 = &local_90;
    if (local_90._0_1_ == '\0') {
      pfVar7 = pfVar6;
    }
    *(void*)pfVar7 = 0;
    if ((local_90._0_1_ != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (void*)pfVar6;
    FUN_016ab300();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_01736d70();
    local_1f8 = local_b0;
    local_1f0 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (int64_t *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_1f0 = '\x01';
    FUN_016ac280(uVar3,&local_1f8);
    local_208 = local_98;
    local_200 = 0;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    local_200 = '\x01';
    (**(code **)(*plVar11 + 0x958))();
    if ((local_200 != '\0') && (local_208 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a0[0]._0_1_ != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x4a0))();
    FUN_00d23340();
    plVar11 = local_98;
    pfVar6 = &local_90;
    if (local_90._0_1_ == '\0') {
      pfVar6 = local_a0;
    }
    local_a0[0] = (float)CONCAT31(local_a0[0]._1_3_,local_90._0_1_);
    *(void*)pfVar6 = 0;
    if ((local_90._0_1_ != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (void*)pfVar6;
    FUN_016ab300();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_01770c90();
    local_1d8 = local_b0;
    local_1d0 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (int64_t *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_1d0 = '\x01';
    FUN_016ac280(uVar3,&local_1d8);
    local_1e8 = local_98;
    local_1e0 = 0;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    local_1e0 = '\x01';
    (**(code **)(*plVar11 + 0x958))();
    if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a0[0]._0_1_ != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar11 = (int64_t *)*plVar10;
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      plVar11 = (int64_t *)*plVar10;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    uVar3 = (**(code **)(*plVar11 + 0x370))();
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = g_027e4590;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = g_027e45c0;
    local_618 = lVar5;
    local_610 = '\x01';
    if (g_027e45c0 != 0) {
      FUN_00d50b00();
    }
    local_608 = lVar8;
    local_600 = '\x01';
    local_5f8 = 0;
    local_5f0 = '\0';
    plVar11 = &local_5f8;
    uVar14 = FUN_00d31230(plVar11,&local_608);
    pVar9 = (void*)plVar11;
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 1.4013e-45;
    local_98 = &g_024c5048;
    local_80 = 0;
    if (lVar5 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_d0 = (int64_t *)CONCAT44(local_d0._4_4_,uVar3);
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(uVar14,&local_98);
    lVar5 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = &g_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_5f0 != '\0') && (local_5f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_600 != '\0') && (local_608 != 0)) {
      FUN_00d50b20();
    }
    if ((local_610 != '\0') && (local_618 != 0)) {
      FUN_00d50b20();
    }
    plVar11 = (int64_t *)*plVar10;
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      plVar11 = (int64_t *)*plVar10;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
    }
    local_5e8 = lVar5;
    local_5e0 = '\0';
    local_5d8 = 0;
    local_5d0 = '\0';
    plVar12 = &local_5e8;
    (**(code **)(*plVar11 + 0x3c0))(plVar12,(uint64_t)local_d0 & 0xffffffff,&local_5d8);
    plVar11 = local_98;
    pVar9 = (void*)plVar12;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    if ((local_5d0 != '\0') && (local_5d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_5e0 != '\0') && (local_5e8 != 0)) {
      FUN_00d50b20();
    }
    local_5c8 = plVar11;
    local_5c0 = '\0';
    FUN_01d6f990();
    if ((local_5c0 != '\0') && (local_5c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x918))();
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x918))();
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x918))();
  (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x998))();
  if ((local_48 == (int64_t *)0x0) ||
     (puVar13 = (void*)*plVar10, puVar13 == (void*)0x0)) {
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_0173e440();
    local_308 = g_027e4590;
    local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,uVar3);
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_027e4618;
    local_300 = '\x01';
    if (g_027e4618 != 0) {
      FUN_00d50b00();
    }
    local_2f8 = lVar5;
    local_2f0 = '\x01';
    local_2e8 = 0;
    local_2e0 = '\0';
    FUN_00d31230(&local_2e8,&local_2f8);
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 2.8026e-45;
    local_8c = local_b8._0_4_;
    local_98 = (int64_t *)&g_024ff418;
    local_80 = 0;
    fVar15 = local_b8._0_4_;
    if (lVar5 != 0) {
      fVar15 = (float)FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(fVar15,&local_98);
    local_f8 = local_40;
    local_f0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_f0 = '\x01';
    FUN_01d6f990();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (int64_t *)&g_024ff418;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_2e0 != '\0') && (local_2e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_300 != '\0') && (local_308 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x918))();
    (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x998))();
    local_2d8 = g_027e4590;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_027e45f8;
    local_2d0 = '\x01';
    if (g_027e45f8 != 0) {
      FUN_00d50b00();
    }
    local_2c8 = lVar5;
    local_2c0 = '\x01';
    local_2b8 = 0;
    local_2b0 = '\0';
    FUN_00d31230(&local_2b8,&local_2c8);
    local_e8 = local_98;
    local_e0 = 0;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    local_e0 = '\x01';
    FUN_01d6f990();
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_2b0 != '\0') && (local_2b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2c0 != '\0') && (local_2c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d0 != '\0') && (local_2d8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x918))();
    (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x998))();
    (**(code **)(**(int64_t **)(this_ptr + 200) + 0x998))();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      puVar13 = (void*)*plVar10;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        puVar13 = (void*)puVar13[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    plVar11 = (int64_t *)*puVar13;
    uVar3 = (*plVar11[0x6e])();
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)plVar11);
    plVar12 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar12 = local_48, lVar5 != 0)) {
      plVar11 = local_48;
      plVar12 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    uVar14 = (**(code **)(*plVar12 + 0x370))();
    pVar9 = (void*)plVar11;
    if (*(char *)(this_ptr + 0xf2) == '\0') {
      pvVar4 = _pthread_getspecific(pVar9);
      plVar12 = local_48;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar12 = local_48, lVar5 != 0)) {
        plVar11 = local_48;
        plVar12 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      pVar9 = (void*)plVar11;
      uVar16 = (**(code **)(*plVar12 + 0x3a0))();
      local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,uVar16);
    }
    else {
      pvVar4 = _pthread_getspecific(pVar9);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar9 = (void*)local_48;
      }
      uVar14 = FUN_0173fbe0();
      local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,uVar14);
      uVar14 = uVar3;
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar9 = (void*)local_48;
    }
    local_2a8 = FUN_0173e440();
    fVar15 = (float)FUN_01773e50();
    local_2a0 = (float)_exp2f((fVar15 + g_0241b650) * g_023941f4);
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_29c = (float)FUN_0173fbe0();
    FUN_01b3b230(local_29c,uVar14);
    local_d8 = local_98;
    if ((local_90._0_1_ == '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar16 = FUN_0173fbe0();
    local_d0 = (int64_t *)CONCAT44(local_d0._4_4_,uVar16);
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173ecc0(local_b8._0_4_ - local_d0._0_4_);
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_2a4 = FUN_0173e440();
    plVar11 = (int64_t *)*plVar10;
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      plVar11 = (int64_t *)*plVar10;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    lVar5 = g_027e45c8;
    if (g_027e45c8 != 0) {
      FUN_00d50b00();
    }
    local_5b8 = lVar5;
    local_5b0 = '\x01';
    local_5a8 = 0;
    local_5a0 = '\0';
    plVar10 = &local_5b8;
    (**(code **)(*plVar11 + 0x3c0))(plVar10,uVar3,&local_5a8);
    plVar11 = local_98;
    pVar9 = (void*)plVar10;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    if ((local_5a0 != '\0') && (local_5a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_5b0 != '\0') && (local_5b8 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = plVar11;
    pvVar4 = _pthread_getspecific(pVar9);
    lVar5 = g_027e45c8;
    plVar10 = local_48;
    if ((pvVar4 != (void *)0x0) &&
       (lVar8 = FUN_00e8b990(), lVar5 = g_027e45c8, plVar10 = local_48, lVar8 != 0)) {
      plVar10 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    g_027e45c8 = lVar5;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_590 = '\x01';
    local_588 = 0;
    local_580 = '\0';
    local_598 = lVar5;
    (**(code **)(*plVar10 + 0x3c0))(&local_598,uVar14,&local_588);
    plVar10 = local_98;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    if ((local_580 != '\0') && (local_588 != 0)) {
      FUN_00d50b20();
    }
    if ((local_590 != '\0') && (local_598 != 0)) {
      FUN_00d50b20();
    }
    local_a0[0] = (float)_exp2f(local_b8._0_4_ * g_023941f4);
    local_578 = g_027e4590;
    local_a0[0] = local_a0[0] * g_023941f8;
    local_b8 = plVar10;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_027e45d0;
    local_570 = '\x01';
    if (g_027e45d0 != 0) {
      FUN_00d50b00();
    }
    local_568 = lVar5;
    local_560 = '\x01';
    local_558 = 0;
    local_550 = '\0';
    FUN_00d31230(&local_558,&local_568);
    local_b0 = plVar10;
    local_c8 = CONCAT71(uStack_57,local_58);
    FUN_0049c630(&local_c8,local_a0,4);
    local_98 = (int64_t *)&g_02647118;
    local_60 = local_2a4;
    FUN_00d8cb40(local_2a4,&local_98);
    local_1c8 = local_40;
    local_1c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1c0 = '\x01';
    FUN_01d6f990();
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (int64_t *)&g_024f9300;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &g_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_550 != '\0') && (local_558 != 0)) {
      FUN_00d50b20();
    }
    if ((local_560 != '\0') && (local_568 != 0)) {
      FUN_00d50b20();
    }
    if ((local_570 != '\0') && (local_578 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = g_027e4590;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = g_027e45d8;
    local_548 = lVar5;
    local_540 = '\x01';
    if (g_027e45d8 != 0) {
      FUN_00d50b00();
    }
    local_538 = lVar8;
    local_530 = '\x01';
    local_528 = 0;
    local_520 = '\0';
    FUN_00d31230(&local_528,&local_538);
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 2.8026e-45;
    local_8c = (float)local_2a8;
    local_98 = (int64_t *)&g_024ff418;
    local_80 = 0;
    uVar3 = local_2a8;
    if (lVar5 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(uVar3,&local_98);
    local_1b8 = local_40;
    local_1b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1b0 = '\x01';
    FUN_01d6f990();
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (int64_t *)&g_024ff418;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_520 != '\0') && (local_528 != 0)) {
      FUN_00d50b20();
    }
    if ((local_530 != '\0') && (local_538 != 0)) {
      FUN_00d50b20();
    }
    if ((local_540 != '\0') && (local_548 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = g_027e4590;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = g_027e45e0;
    local_518 = lVar5;
    local_510 = '\x01';
    if (g_027e45e0 != 0) {
      FUN_00d50b00();
    }
    local_508 = lVar8;
    local_500 = '\x01';
    local_4f8 = 0;
    local_4f0 = '\0';
    uVar3 = FUN_00d31230(&local_4f8,&local_508);
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 1.4013e-45;
    local_98 = &g_024c5048;
    local_80 = 0;
    if (lVar5 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(uVar3,&local_98);
    local_1a8 = local_40;
    local_1a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1a0 = '\x01';
    FUN_01d6f990();
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &g_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_4f0 != '\0') && (local_4f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_500 != '\0') && (local_508 != 0)) {
      FUN_00d50b20();
    }
    if ((local_510 != '\0') && (local_518 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = g_027e4590;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = g_027e45e8;
    local_4e8 = lVar5;
    local_4e0 = '\x01';
    if (g_027e45e8 != 0) {
      FUN_00d50b00();
    }
    local_4d8 = lVar8;
    local_4d0 = '\x01';
    local_4c8 = 0;
    local_4c0 = '\0';
    FUN_00d31230(&local_4c8,&local_4d8);
    fVar15 = local_2a0 * g_023941f8;
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 2.8026e-45;
    local_98 = (int64_t *)&g_024ff418;
    local_80 = 0;
    local_8c = fVar15;
    if (lVar5 != 0) {
      fVar15 = (float)FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(fVar15,&local_98);
    local_198 = local_40;
    local_190 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_190 = '\x01';
    FUN_01d6f990();
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (int64_t *)&g_024ff418;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_4c0 != '\0') && (local_4c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4d0 != '\0') && (local_4d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4e0 != '\0') && (local_4e8 != 0)) {
      FUN_00d50b20();
    }
    local_a0[0] = (float)_exp2f(local_29c * g_023941f4);
    local_4b8 = g_027e4590;
    local_a0[0] = local_a0[0] * g_023941f8;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_027e45f0;
    local_4b0 = '\x01';
    if (g_027e45f0 != 0) {
      FUN_00d50b00();
    }
    local_4a8 = lVar5;
    local_4a0 = '\x01';
    local_498 = 0;
    local_490 = '\0';
    FUN_00d31230(&local_498,&local_4a8);
    local_b0 = local_d0;
    local_c8 = CONCAT71(uStack_57,local_58);
    plVar10 = &local_c8;
    uVar3 = FUN_0049c630(plVar10,local_a0,3);
    pVar9 = (void*)plVar10;
    FUN_00d8cb40(uVar3,&local_98);
    local_188 = local_40;
    local_180 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_180 = '\x01';
    FUN_01d6f990();
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (int64_t *)&g_024f9300;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &g_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    plVar10 = local_d0;
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_490 != '\0') && (local_498 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4a0 != '\0') && (local_4a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4b0 != '\0') && (local_4b8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x918))();
    (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x998))();
    pvVar4 = _pthread_getspecific(pVar9);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar9 = (void*)local_48;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01770770();
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01770770();
    if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = local_b8;
    lVar5 = g_027e4590;
    if (cVar1 == '\0' && cVar2 == '\0') {
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      plVar11 = local_b8;
      lVar8 = g_027e45f8;
      local_488 = lVar5;
      local_480 = '\x01';
      if (g_027e45f8 != 0) {
        FUN_00d50b00();
      }
      local_478 = lVar8;
      local_470 = '\x01';
      local_468 = 0;
      local_460 = '\0';
      FUN_00d31230(&local_468,&local_478);
      local_178 = local_98;
      local_170 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      plVar12 = local_d8;
      local_170 = '\x01';
      FUN_01d6f990();
      if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_460 != '\0') && (local_468 != 0)) {
        FUN_00d50b20();
      }
      if ((local_470 != '\0') && (local_478 != 0)) {
        FUN_00d50b20();
      }
      if ((local_480 != '\0') && (local_488 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x918))();
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x998))();
    }
    else if (cVar1 == '\x01' && cVar2 == '\0') {
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      plVar11 = local_b8;
      lVar8 = g_027e4600;
      local_458 = lVar5;
      local_450 = '\x01';
      if (g_027e4600 != 0) {
        FUN_00d50b00();
      }
      local_448 = lVar8;
      local_440 = '\x01';
      local_438 = 0;
      local_430 = '\0';
      FUN_00d31230(&local_438,&local_448);
      local_168 = local_98;
      local_160 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_160 = '\x01';
      FUN_01d6f990();
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_430 != '\0') && (local_438 != 0)) {
        FUN_00d50b20();
      }
      if ((local_440 != '\0') && (local_448 != 0)) {
        FUN_00d50b20();
      }
      if ((local_450 != '\0') && (local_458 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_027e45f8;
      local_428 = lVar5;
      local_420 = '\x01';
      if (g_027e45f8 != 0) {
        FUN_00d50b00();
      }
      local_418 = lVar8;
      local_410 = '\x01';
      local_408 = 0;
      local_400 = '\0';
      FUN_00d31230(&local_408,&local_418);
      local_158 = local_98;
      local_150 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      plVar12 = local_d8;
      local_150 = '\x01';
      FUN_01d6f990();
      if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_400 != '\0') && (local_408 != 0)) {
        FUN_00d50b20();
      }
      if ((local_410 != '\0') && (local_418 != 0)) {
        FUN_00d50b20();
      }
      if ((local_420 != '\0') && (local_428 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x918))();
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x998))();
    }
    else if (cVar1 == '\0' && cVar2 == '\x01') {
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_027e4608;
      local_3f8 = lVar5;
      local_3f0 = '\x01';
      if (g_027e4608 != 0) {
        FUN_00d50b00();
      }
      local_3e8 = lVar8;
      local_3e0 = '\x01';
      local_3d8 = 0;
      local_3d0 = '\0';
      FUN_00d31230(&local_3d8,&local_3e8);
      local_148 = local_98;
      local_140 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_140 = '\x01';
      FUN_01d6f990();
      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_3d0 != '\0') && (local_3d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3e0 != '\0') && (local_3e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3f0 != '\0') && (local_3f8 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_027e4610;
      local_3c8 = lVar5;
      local_3c0 = '\x01';
      if (g_027e4610 != 0) {
        FUN_00d50b00();
      }
      local_3b8 = lVar8;
      local_3b0 = '\x01';
      local_3a8 = 0;
      local_3a0 = '\0';
      FUN_00d31230(&local_3a8,&local_3b8);
      local_138 = local_98;
      local_130 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      plVar12 = local_d8;
      local_130 = '\x01';
      FUN_01d6f990();
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_3a0 != '\0') && (local_3a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3b0 != '\0') && (local_3b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3c0 != '\0') && (local_3c8 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x918))();
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x998))();
    }
    else {
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_027e4600;
      local_398 = lVar5;
      local_390 = '\x01';
      if (g_027e4600 != 0) {
        FUN_00d50b00();
      }
      local_388 = lVar8;
      local_380 = '\x01';
      local_378 = 0;
      local_370 = '\0';
      FUN_00d31230(&local_378,&local_388);
      local_128 = local_98;
      local_120 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_120 = '\x01';
      FUN_01d6f990();
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_370 != '\0') && (local_378 != 0)) {
        FUN_00d50b20();
      }
      if ((local_380 != '\0') && (local_388 != 0)) {
        FUN_00d50b20();
      }
      if ((local_390 != '\0') && (local_398 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_027e4610;
      local_368 = lVar5;
      local_360 = '\x01';
      if (g_027e4610 != 0) {
        FUN_00d50b00();
      }
      local_358 = lVar8;
      local_350 = '\x01';
      local_348 = 0;
      local_340 = '\0';
      FUN_00d31230(&local_348,&local_358);
      local_118 = local_98;
      local_110 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_110 = '\x01';
      FUN_01d6f990();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_340 != '\0') && (local_348 != 0)) {
        FUN_00d50b20();
      }
      if ((local_350 != '\0') && (local_358 != 0)) {
        FUN_00d50b20();
      }
      if ((local_360 != '\0') && (local_368 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_027e45f8;
      local_338 = lVar5;
      local_330 = '\x01';
      if (g_027e45f8 != 0) {
        FUN_00d50b00();
      }
      local_328 = lVar8;
      local_320 = '\x01';
      local_318 = 0;
      local_310 = '\0';
      FUN_00d31230(&local_318,&local_328);
      local_108 = local_98;
      local_100 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      plVar12 = local_d8;
      local_100 = '\x01';
      FUN_01d6f990();
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_310 != '\0') && (local_318 != 0)) {
        FUN_00d50b20();
      }
      if ((local_320 != '\0') && (local_328 != 0)) {
        FUN_00d50b20();
      }
      if ((local_330 != '\0') && (local_338 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x918))();
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x998))();
    }
    (**(code **)(**(int64_t **)(this_ptr + 200) + 0x998))();
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b2ed90
// ============================================================
// Function: FUN_01b2ed90
// Address: 01b2ed90
// Size: 3131 bytes
// Class: MUScaleOpenPanel
// === MUScaleOpenPanel properties ===
//                   _modeMatrix
//                   _tuningMatrix
//                   _fundamentalPopUp
//                   _pitchPopUp
//                   _stretchingPopUp
//                   _externalScalesButton
//                   _openedDistribution


void FUN_01b2ed90(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint32_t uVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  float fVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float local_158;
  float local_138;
  float fStack_134;
  float local_c8;
  int64_t local_b0;
  char local_a8;
  float local_8c;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  cVar4 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar4 != '\0') {
    FUN_01e3f820();
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
      FUN_01d3abf0();
      uVar18 = FUN_01e466c0();
      uVar19 = FUN_01b2e910();
      auVar21._8_4_ = (int)extraout_XMM0_Qb;
      auVar21._0_8_ = uVar19;
      auVar21._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
      cVar4 = FUN_00d05410();
      if (cVar4 != '\0') {
        *(byte *)((int64_t)this_ptr + 0x1d9) = *(byte *)((int64_t)this_ptr + 0x1d9) ^ 1;
                                                (**(code **)(*this_ptr + 0x620))();
        return;
      }
      iVar5 = FUN_01d3b620();
      fStack_134 = (float)((uint64_t)uVar18 >> 0x20);
      if (((iVar5 == 2) && ((char)this_ptr[0x3b] != '\0')) &&
         (lVar7 = this_ptr[0x39], 0xf < *(int *)(lVar7 + 0x18))) {
        local_44 = g_02411fd8;
        uVar11 = 0xffffffff;
        lVar9 = 8;
        uVar10 = 0;
        do {
          uVar1 = *(uint64_t *)(*(int64_t *)(lVar7 + 0x10) + -8 + lVar9);
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar1;
          cVar4 = FUN_00d05410(lVar7,uVar1,(int)*(void*)(*(int64_t *)(lVar7 + 0x10) + lVar9)
                              );
          lVar7 = this_ptr[0x39];
          if (cVar4 != '\0') {
            fVar13 = (float)((uint)((*(float *)(*(int64_t *)(lVar7 + 0x10) + 4 + lVar9) *
                                     g_0239011c +
                                    *(float *)(*(int64_t *)(lVar7 + 0x10) + -4 + lVar9)) -
                                   fStack_134) & g_02390140);
            auVar21 = ZEXT416((uint)local_44);
            if (fVar13 < local_44) {
              uVar11 = uVar10 & 0xffffffff;
              local_44 = fVar13;
            }
          }
          uVar10 = uVar10 + 1;
          iVar5 = *(int *)(lVar7 + 0x18);
          iVar8 = iVar5 + 0xf;
          if (-1 < iVar5) {
            iVar8 = iVar5;
          }
          lVar9 = lVar9 + 0x10;
        } while ((int64_t)uVar10 < (int64_t)(iVar8 >> 4));
        if ((int)uVar11 != -1) {
          lVar7 = *this_ptr;
          _exp2f(*(float *)(*(int64_t *)(this_ptr[0x3a] + 0x10) + (int64_t)(int)uVar11 * 4) *
                 g_023941f4);
          (**(code **)(lVar7 + 0x928))();
          (**(code **)(*this_ptr + 0xa18))();
          if (local_40 == (int64_t *)0x0) {
            bVar12 = false;
          }
          else {
            (**(code **)(*this_ptr + 0xa28))();
            bVar12 = local_b0 != 0;
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar12) {
            return;
          }
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_026717b8;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(void*)((int64_t)puVar6 + 0x2c) = 0;
          *(void*)((int64_t)puVar6 + 0x34) = 0;
          (*g_026717d0)();
          (**(code **)(*this_ptr + 0xa18))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01caeb20();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar18 = (**(code **)(*this_ptr + 0xa28))();
          (**(code **)(*local_40 + 0x3b8))(uVar18,1);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return;
        }
      }
      (**(code **)(*this_ptr + 0x930))();
      fVar14 = (float)_log10f();
      FUN_01e436c0();
      FUN_01e436c0();
      fVar13 = *(float *)(this_ptr + 0x3d);
      fVar15 = fVar15 * g_0239011c;
      if ((fStack_134 <= fVar15) &&
         (plVar2 = (int64_t *)this_ptr[0x40], plVar2 != (int64_t *)0x0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x18))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      pcVar3 = g_026717d0;
      local_158 = auVar21._0_4_;
      fVar14 = fVar14 * local_158 * g_02390120;
      local_138 = (float)uVar18;
      local_158 = local_138;
      local_c8 = local_138;
      local_8c = fVar14;
LAB_01b2f140:
      (**(code **)(*this_ptr + 0x658))();
      plVar2 = (int64_t *)*arg1;
      if (plVar2 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01b2f1ed;
          }
          goto LAB_01b2f1a3;
        }
LAB_01b2f1ad:
        if (*arg1 == 0) goto LAB_01b2f829;
LAB_01b2f200:
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 6) goto LAB_01b2f83d;
        iVar5 = FUN_01d3a5a0();
        if (iVar5 == 5) {
          FUN_01d3abf0();
          uVar18 = FUN_01e466c0();
          fVar17 = (float)uVar18;
          uStack_54 = (uint)((uint64_t)uVar18 >> 0x20);
          uStack_50 = (uint)extraout_XMM0_Qb_00;
          uStack_4c = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
          auVar26._0_4_ = (uint)(fVar17 - local_c8) & g_023945e0;
          auVar26._4_4_ = uStack_54 & _UNK_023945e4;
          auVar26._8_4_ = uStack_50 & _UNK_023945e8;
          auVar26._12_4_ = uStack_4c & _UNK_023945ec;
          auVar27._4_12_ = SUB1612(auVar26 | g_023945f0,4);
          auVar27._0_4_ = SUB164(auVar26 | g_023945f0,0) + (fVar17 - local_c8);
          auVar20._0_12_ = ZEXT812(0);
          auVar20._12_4_ = 0;
          auVar21 = roundss(auVar20,auVar27,0xb);
          local_c8 = fVar17;
          if ((auVar21._0_4_ != g_0239424c) || (NAN(auVar21._0_4_) || NAN(g_0239424c))) {
            local_58 = fVar17 - local_138;
            if (fStack_134 <= fVar15) {
              if (*(int *)((int64_t)this_ptr + 0x1dc) == 1) {
                FUN_01e436c0();
                FUN_01e436c0();
                auVar22._4_12_ = local_58._4_12_;
                auVar22._0_4_ = local_58 / (auVar27._0_4_ * g_02390120);
                fVar25 = (float)___exp10f(auVar22._0_8_);
                fVar17 = *(float *)(this_ptr + 0x3e);
                if (*(float *)(this_ptr + 0x3e) <= fVar25) {
                  fVar17 = fVar25;
                }
                fVar25 = *(float *)((int64_t)this_ptr + 500);
                if (fVar17 <= *(float *)((int64_t)this_ptr + 500)) {
                  fVar25 = fVar17;
                }
                auVar21 = ZEXT416((uint)fVar25);
                fVar17 = (float)_log10f();
                FUN_01e436c0();
                FUN_01e436c0();
                auVar28._4_12_ = auVar21._4_12_;
                auVar28._0_4_ = auVar21._0_4_ * g_02390120 * fVar17 + fVar13;
                fVar17 = *(float *)(this_ptr + 0x3d);
                if ((fVar17 != auVar28._0_4_) || (NAN(fVar17) || NAN(auVar28._0_4_))) {
                  auVar21 = auVar28;
                  FUN_01e436c0();
                  FUN_01e436c0();
                  uVar16 = ___exp10f((fVar17 - auVar28._0_4_) / (auVar21._0_4_ * g_02390120));
                  *(void*)((int64_t)this_ptr + 0x1ec) = uVar16;
                  *(float *)(this_ptr + 0x3d) = auVar28._0_4_;
                  (**(code **)(*this_ptr + 0x620))();
                  (**(code **)(*this_ptr + 0xa18))();
                  if (local_40 == (int64_t *)0x0) {
                    bVar12 = false;
                  }
                  else {
                    (**(code **)(*this_ptr + 0xa28))();
                    bVar12 = local_b0 != 0;
                    if ((local_a8 != '\0') && (local_b0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (bVar12) {
                    puVar6 = (void*)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar6 = &g_026717b8;
                    puVar6[2] = 0;
                    puVar6[3] = 0;
                    puVar6[4] = 0;
                    puVar6[5] = 0;
                    *(void*)((int64_t)puVar6 + 0x2c) = 0;
                    *(void*)((int64_t)puVar6 + 0x34) = 0;
                    (*pcVar3)();
                    (**(code **)(*this_ptr + 0xa18))();
                    if (local_38 == '\0') {
                      if (local_40 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_38 = '\0';
                    }
                    FUN_01caeb20();
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar18 = (**(code **)(*this_ptr + 0xa28))();
                    (**(code **)(*local_40 + 0x3b8))(uVar18,1);
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                }
                goto LAB_01b2f140;
              }
              if (*(int *)((int64_t)this_ptr + 0x1dc) == 0) {
                uVar10 = FUN_01d3b590();
                if ((uVar10 & 8) == 0) {
                  auVar23._0_4_ = (uint)local_58 & g_023945e0;
                  auVar23._4_4_ = uStack_54 & _UNK_023945e4;
                  auVar23._8_4_ = uStack_50 & _UNK_023945e8;
                  auVar23._12_4_ = uStack_4c & _UNK_023945ec;
                  auVar24._4_12_ = SUB1612(auVar23 | g_023945f0,4);
                  auVar24._0_4_ = SUB164(auVar23 | g_023945f0,0) + local_58;
                  auVar21 = roundss(auVar24,auVar24,0xb);
                  fVar25 = fVar14 - auVar21._0_4_;
                  local_8c = fVar25;
                  local_158 = fVar17;
                  fVar17 = fVar25;
                }
                else {
                  fVar25 = fVar17;
                  fVar17 = (fVar17 - local_158) * g_0241b638 + local_8c;
                }
                auVar21 = ZEXT416((uint)fVar25);
                FUN_01e436c0();
                FUN_01e436c0();
                ___exp10f(fVar17 / (auVar21._0_4_ * g_02390120));
                (**(code **)(*this_ptr + 0x928))();
                (**(code **)(*this_ptr + 0xa18))();
                if (local_40 == (int64_t *)0x0) {
                  bVar12 = false;
                }
                else {
                  (**(code **)(*this_ptr + 0xa28))();
                  bVar12 = local_b0 != 0;
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (bVar12) {
                  puVar6 = (void*)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar6 = &g_026717b8;
                  puVar6[2] = 0;
                  puVar6[3] = 0;
                  puVar6[4] = 0;
                  puVar6[5] = 0;
                  *(void*)((int64_t)puVar6 + 0x2c) = 0;
                  *(void*)((int64_t)puVar6 + 0x34) = 0;
                  (*pcVar3)();
                  (**(code **)(*this_ptr + 0xa18))();
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  FUN_01caeb20();
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar18 = (**(code **)(*this_ptr + 0xa28))();
                  (**(code **)(*local_40 + 0x3b8))(uVar18,1);
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
                goto LAB_01b2f140;
              }
            }
            if (fVar15 < fStack_134) {
              local_58 = local_58 + fVar13;
              fVar17 = *(float *)(this_ptr + 0x3d);
              if ((fVar17 != local_58) || (NAN(fVar17) || NAN(local_58))) {
                FUN_01e436c0();
                FUN_01e436c0();
                uVar16 = ___exp10f((fVar17 - local_58) / (auVar27._0_4_ * g_02390120));
                *(void*)((int64_t)this_ptr + 0x1ec) = uVar16;
                *(float *)(this_ptr + 0x3d) = local_58;
                (**(code **)(*this_ptr + 0x620))();
              }
            }
          }
        }
        goto LAB_01b2f140;
      }
      lVar7 = arg1[1];
      if (local_38 != '\0') {
        *arg1 = (int64_t)local_40;
        if (((char)lVar7 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01b2f1a3:
        *(void*)(arg1 + 1) = 1;
        local_38 = '\0';
        goto LAB_01b2f1ad;
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar7 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b2f1ed:
      *(void*)(arg1 + 1) = 1;
      if (*arg1 != 0) goto LAB_01b2f200;
LAB_01b2f829:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b2f83d:
      if ((fStack_134 <= fVar15) &&
         (plVar2 = (int64_t *)this_ptr[0x40], plVar2 != (int64_t *)0x0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x20))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01d122b0();
    }
  }
  return;
}



// ============================================================
// 01b302d0
// ============================================================
// Function: FUN_01b302d0
// Address: 01b302d0
// Size: 3729 bytes
// Class: MUScaleOpenPanel
// String references:
//   "handleCancel"
//   "handleSheetClose"
//   "handleOK"
//   "MUScaleOpenPanel"
//   "handleStartBrowserPlayback"
//   "handleSelectCell"
//   "handleModeMatrixChanged"
//   "handleTuningMatrixChanged"
//   "handleFundamentalPopUpChanged"
//   "handlePitchPopUpChanged"
//   "handleStretchingPopUpChanged"
//   "handleSelectFolderForExternalScales"
// === MUScaleOpenPanel properties ===
//                   _modeMatrix
//                   _tuningMatrix
//                   _fundamentalPopUp
//                   _pitchPopUp
//                   _stretchingPopUp
//                   _externalScalesButton
//                   _openedDistribution


void FUN_01b302d0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b4040 = "handleOK";
      g_028b4048 = &g_02738800;
      g_028b4050 = 0;
      g_028b4058 = &g_027e4620;
      g_028b4060 = FUN_01b3d980;
      g_028b4068 = 0x5c1;
      g_028b4070 = 0;
      ram_00000000028b4078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4088 = "handleCancel";
      g_028b4090 = &g_02738800;
      g_028b4098 = 0;
      g_028b40a0 = &g_027e4620;
      g_028b40a8 = FUN_01b3d980;
      g_028b40b0 = 0x5c9;
      g_028b40b8 = 0;
      ram_00000000028b40c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b40d0 = "handleSheetClose";
      g_028b40d8 = &g_02738800;
      g_028b40e0 = 0;
      g_028b40e8 = &g_027e4620;
      g_028b40f0 = FUN_01b3d980;
      g_028b40f8 = 0x5d9;
      g_028b4100 = 0;
      ram_00000000028b4108 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4118 = "handleSelectCell";
      g_028b4120 = &g_02738800;
      g_028b4128 = 0;
      g_028b4130 = &g_027e4620;
      g_028b4138 = FUN_01b3d980;
      g_028b4140 = 0x5e1;
      g_028b4148 = 0;
      ram_00000000028b4150 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4160 = "handleStartBrowserPlayback";
      g_028b4168 = &g_02738800;
      g_028b4170 = 0;
      g_028b4178 = &g_027e4620;
      g_028b4180 = FUN_01b3d980;
      g_028b4188 = 0x5e9;
      g_028b4190 = 0;
      ram_00000000028b4198 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b41a8 = "handleModeMatrixChanged";
      g_028b41b0 = &g_02738800;
      g_028b41b8 = 0;
      g_028b41c0 = &g_027e4620;
      g_028b41c8 = FUN_01b3d980;
      g_028b41d0 = 0x5f1;
      g_028b41d8 = 0;
      ram_00000000028b41e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b41f0 = "handleTuningMatrixChanged";
      g_028b41f8 = &g_02738800;
      g_028b4200 = 0;
      g_028b4208 = &g_027e4620;
      g_028b4210 = FUN_01b3d980;
      g_028b4218 = 0x5f9;
      g_028b4220 = 0;
      ram_00000000028b4228 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4238 = "handleFundamentalPopUpChanged";
      g_028b4240 = &g_02738800;
      g_028b4248 = 0;
      g_028b4250 = &g_027e4620;
      g_028b4258 = FUN_01b3d980;
      g_028b4260 = 0x601;
      g_028b4268 = 0;
      ram_00000000028b4270 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4280 = "handlePitchPopUpChanged";
      g_028b4288 = &g_02738800;
      g_028b4290 = 0;
      g_028b4298 = &g_027e4620;
      g_028b42a0 = FUN_01b3d980;
      g_028b42a8 = 0x609;
      g_028b42b0 = 0;
      ram_00000000028b42b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b42c8 = "handleStretchingPopUpChanged";
      g_028b42d0 = &g_02738800;
      g_028b42d8 = 0;
      g_028b42e0 = &g_027e4620;
      g_028b42e8 = FUN_01b3d980;
      g_028b42f0 = 0x611;
      g_028b42f8 = 0;
      ram_00000000028b4300 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4310 = "handleSelectFolderForExternalScales";
      g_028b4318 = &g_02738800;
      g_028b4320 = 0;
      g_028b4328 = &g_027e4620;
      g_028b4330 = FUN_01b3d980;
      g_028b4338 = 0x619;
      g_028b4340 = 0;
      ram_00000000028b4348 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 01b31380
// ============================================================
// Function: FUN_01b31380
// Address: 01b31380
// Size: 1214 bytes
// Class: MUScaleOpenPanel
// === MUScaleOpenPanel properties ===
//                   _modeMatrix
//                   _tuningMatrix
//                   _fundamentalPopUp
//                   _pitchPopUp
//                   _stretchingPopUp
//                   _externalScalesButton
//                   _openedDistribution


void FUN_01b31380(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  int64_t lVar2;
  int64_t this_ptr;
  uint64_t uVar3;
  float extraout_XMM0_Db;
  uint32_t extraout_XMM0_Dd;
  uint64_t in_XMM1_Qb;
  uint8_t auVar4 [16];
  int64_t local_d0;
  char local_c8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_30;
  char local_28;
  
  FUN_01e125e0();
  FUN_01cfc0e0();
  if (local_28 == '\0') {
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_01e11fd0();
  if (local_30 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027e4580;
  if (g_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceb8d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ceb930();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_01aa61d0();
  FUN_01ab2e00();
  FUN_01b3e230();
  FUN_00d6f370();
  local_a0 = g_027e4588;
  if (g_027e4588 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d710b0(&local_90,&local_a0);
  if (local_28 == '\0') {
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != (int64_t *)0x0) {
    local_80 = local_30;
    local_78 = '\0';
    FUN_01b3e4c0();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x104) = 0xffffffff;
  *(void*)(this_ptr + 0x108) = 0xffffffff;
  *(void*)(this_ptr + 0x10c) = 0xffffffff;
  *(void*)(this_ptr + 0x110) = 0xffffffff;
  *(void*)(this_ptr + 0x114) = 0xffffffff;
  if ((*(char *)(this_ptr + 0x88) == '\0') && (*(char *)(this_ptr + 0x89) == '\0')) {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x478))();
      local_68 = '\0';
      local_70 = 0;
      (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0xa20))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    uVar3 = (**(code **)(*local_30 + 0x4d8))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 200) + 0x4d8))();
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x478))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x478))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar1._8_8_ = in_XMM1_Qb;
    auVar1._0_8_ = param_2;
    auVar4._4_4_ = extraout_XMM0_Db;
    auVar4._0_4_ = (extraout_XMM0_Db + g_0241d220) - (float)((uint64_t)uVar3 >> 0x20);
    auVar4._8_4_ = extraout_XMM0_Dd;
    auVar4._12_4_ = extraout_XMM0_Dd;
    auVar4 = insertps(auVar1,auVar4,0x10);
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d0))((int)uVar3,auVar4._0_8_);
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x558))();
    FUN_01e40eb0();
    local_58 = 0;
    local_60 = *(int64_t *)(this_ptr + 0x78);
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    (**(code **)(*local_30 + 0x450))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b31bc0();
  return;
}


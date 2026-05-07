// Function: FUN_00342300
// Address: 00342300
// Size: 10346 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00342300(void)

{
  int64_t *plVar1;
  byte bVar2;
  int64_t *plVar3;
  void*puVar4;
  void*puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t this_ptr;
  char cVar10;
  uint uVar11;
  undefined7 uVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_600;
  uint8_t local_5f8;
  int64_t local_5f0;
  uint8_t local_5e8;
  int64_t local_5e0;
  uint8_t local_5d8;
  int64_t local_5d0;
  uint8_t local_5c8;
  int64_t local_5c0;
  uint8_t local_5b8;
  int64_t local_5b0;
  uint8_t local_5a8;
  int64_t local_5a0;
  uint8_t local_598;
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
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  void*local_228;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
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
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x3f8) != 0) {
    FUN_01e1f120();
    FUN_00d50130();
  }
  plVar3 = (int64_t *)FUN_0019ef40();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x3f8);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x3f8) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  FUN_01e1f120();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar8 = g_026de690;
  if (g_026de690 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar8;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  local_228 = puVar4;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &g_0261d518;
  puVar5[2] = &g_0261d9d8;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar13 = (*g_0261d530)();
  lVar8 = g_02702d50;
  if (g_02702d50 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_600 = lVar8;
  local_5f8 = 1;
  FUN_00346b70(uVar13,&local_600);
  local_208 = local_50;
  local_200 = 0;
  lVar9 = g_026f6e68;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      lVar9 = g_026f6e68;
    }
  }
  else {
    local_48 = '\0';
  }
  local_200 = '\x01';
  g_026f6e68 = lVar9;
  if (lVar9 != 0) {
    local_200 = '\x01';
    FUN_00d50b00();
  }
  lVar7 = g_02702d50;
  if (g_02702d50 != 0) {
    FUN_00d50b00();
  }
  local_568 = lVar7;
  local_560 = '\x01';
  local_558 = 0;
  local_550 = '\0';
  FUN_00d31230(&local_558,&local_568);
  local_1f8 = local_70;
  local_1f0 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_1f0 = '\x01';
  uVar13 = FUN_01a59400(&local_1f8,&local_208);
  lVar7 = local_40;
  if (local_40 == 0) {
    uVar12 = (undefined7)((uint64_t)puVar4 >> 8);
    bVar2 = 1;
    lVar7 = 0;
    local_60 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar13 = FUN_00d50b00();
      bVar2 = 0;
      uVar12 = 0;
      local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_0034262b;
      uVar13 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
    bVar2 = 0;
    uVar12 = 0;
  }
LAB_0034262b:
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_550 != '\0') && (local_558 != 0)) {
    FUN_00d50b20();
  }
  if ((local_560 != '\0') && (local_568 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_540 = '\0';
  local_548 = lVar7;
  local_58 = lVar7;
  FUN_01e1f090();
  if ((local_540 != '\0') && (local_548 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_02630fb8;
  puVar4[2] = &g_02631478;
  uVar13 = (*g_02630fd0)();
  lVar8 = g_02702d58;
  local_5f0 = local_78;
  local_5e8 = 0;
  if (g_02702d58 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_5e0 = lVar8;
  local_5d8 = 1;
  FUN_00346b70(uVar13,&local_5e0);
  local_1d8 = local_50;
  local_1d0 = 0;
  local_538 = g_026f6e68;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_538 = g_026f6e68;
    }
  }
  else {
    local_48 = '\0';
  }
  local_1d0 = '\x01';
  g_026f6e68 = local_538;
  if (local_538 != 0) {
    local_1d0 = '\x01';
    FUN_00d50b00();
  }
  lVar9 = g_026fbc80;
  local_530 = '\x01';
  if (g_026fbc80 != 0) {
    FUN_00d50b00();
  }
  local_528 = lVar9;
  local_520 = '\x01';
  local_518 = 0;
  local_510 = '\0';
  FUN_00d31230(&local_518,&local_528);
  local_1c8 = local_70;
  local_1c0 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_1c0 = '\x01';
  FUN_01a59400(&local_1c8,&local_1d8);
  local_1e8 = local_40;
  local_1e0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_1e0 = '\x01';
  FUN_01e261e0();
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_510 != '\0') && (local_518 != 0)) {
    FUN_00d50b20();
  }
  if ((local_520 != '\0') && (local_528 != 0)) {
    FUN_00d50b20();
  }
  if ((local_530 != '\0') && (local_538 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_026359a0;
  puVar4[2] = &g_02635e60;
  uVar13 = (*g_026359b8)();
  lVar8 = g_02702d58;
  local_5d0 = local_78;
  local_5c8 = 0;
  if (g_02702d58 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_5c0 = lVar8;
  local_5b8 = 1;
  FUN_00346b70(uVar13,&local_5c0);
  local_1a8 = local_50;
  local_1a0 = 0;
  local_508 = g_026f6e68;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_508 = g_026f6e68;
    }
  }
  else {
    local_48 = '\0';
  }
  local_1a0 = '\x01';
  g_026f6e68 = local_508;
  if (local_508 != 0) {
    local_1a0 = '\x01';
    FUN_00d50b00();
  }
  lVar9 = g_026fbc88;
  local_500 = '\x01';
  if (g_026fbc88 != 0) {
    FUN_00d50b00();
  }
  local_4f8 = lVar9;
  local_4f0 = '\x01';
  local_4e8 = 0;
  local_4e0 = '\0';
  FUN_00d31230(&local_4e8,&local_4f8);
  local_198 = local_70;
  local_190 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_190 = '\x01';
  FUN_01a59400(&local_198,&local_1a8);
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
  FUN_01e261e0();
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4e0 != '\0') && (local_4e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4f0 != '\0') && (local_4f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_500 != '\0') && (local_508 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_0261c148;
  puVar4[2] = &g_0261c608;
  (*g_0261c160)();
  local_4c8 = g_026f6e68;
  local_4d0 = '\0';
  local_4d8 = 0;
  if (g_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_02702d60;
  local_4c0 = '\x01';
  if (g_02702d60 != 0) {
    FUN_00d50b00();
  }
  local_4b8 = lVar8;
  local_4b0 = '\x01';
  local_4a8 = 0;
  local_4a0 = '\0';
  FUN_00d31230(&local_4a8,&local_4b8);
  local_188 = local_50;
  local_180 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_180 = '\x01';
  FUN_01a59400(&local_188,&local_4d8);
  lVar8 = local_40;
  if (local_40 == local_58) {
    if ((bool)(bVar2 & local_58 != 0)) {
      lVar8 = local_58;
      if (local_38 != '\0') goto LAB_00342e36;
      uVar11 = (uint)CONCAT71(uVar12,1);
      FUN_00d50b00();
    }
    else {
      uVar11 = (uint)local_60;
    }
LAB_00342e8f:
    lVar8 = local_58;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar11 = (uint)CONCAT71(uVar12,1);
      if (((byte)local_60 & local_58 != 0) == 1) {
        local_58 = lVar8;
        FUN_00d50b20();
      }
      else {
        local_58 = lVar8;
      }
      goto LAB_00342e8f;
    }
    if (((byte)local_60 & local_58 != 0) == 1) {
      local_58 = local_40;
      FUN_00d50b20();
    }
LAB_00342e36:
    local_38 = '\0';
    uVar11 = (uint)CONCAT71(uVar12,1);
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4a0 != '\0') && (local_4a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4b0 != '\0') && (local_4b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4c0 != '\0') && (local_4c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4d0 != '\0') && (local_4d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_490 = '\0';
  local_498 = lVar8;
  local_58 = lVar8;
  FUN_01e1f090();
  if ((local_490 != '\0') && (local_498 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e262d0();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_026202e8;
  puVar4[2] = &g_026207c8;
  puVar4[7] = 0;
  uVar13 = (*g_02620300)();
  lVar8 = g_026de698;
  local_5b0 = local_78;
  local_5a8 = 0;
  if (g_026de698 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_5a0 = lVar8;
  local_598 = 1;
  FUN_00346b70(uVar13,&local_5a0);
  local_178 = local_50;
  local_170 = 0;
  local_488 = g_026f6e68;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_488 = g_026f6e68;
    }
  }
  else {
    local_48 = '\0';
  }
  local_170 = '\x01';
  g_026f6e68 = local_488;
  if (local_488 != 0) {
    local_170 = '\x01';
    FUN_00d50b00();
  }
  lVar9 = g_026de698;
  local_480 = '\x01';
  if (g_026de698 != 0) {
    FUN_00d50b00();
  }
  local_478 = lVar9;
  local_470 = '\x01';
  local_468 = 0;
  local_460 = '\0';
  FUN_00d31230(&local_468,&local_478);
  local_168 = local_70;
  local_160 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_160 = '\x01';
  uVar13 = FUN_01a59400(&local_168,&local_178);
  lVar9 = local_40;
  cVar10 = (char)uVar11;
  if (local_40 == local_58) {
    lVar9 = local_58;
    if ((cVar10 == '\0') && (local_58 != 0)) {
      if (local_38 != '\0') goto LAB_00343191;
      local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      FUN_00d50b00();
      lVar9 = local_58;
    }
    else {
      local_60 = (uint64_t)uVar11;
    }
joined_r0x00343fa4:
    local_58 = lVar9;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      if ((cVar10 != '\0') && (local_58 != 0)) {
        local_58 = lVar9;
        FUN_00d50b20();
        lVar9 = local_58;
      }
      goto joined_r0x00343fa4;
    }
    if ((cVar10 != '\0') && (local_58 != 0)) {
      local_58 = local_40;
      uVar13 = FUN_00d50b20();
    }
LAB_00343191:
    local_38 = '\0';
    local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
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
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_450 = '\0';
  local_458 = lVar9;
  local_58 = lVar9;
  FUN_01e1f090();
  if ((local_450 != '\0') && (local_458 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_0266aea8;
  puVar4[2] = &g_0266b368;
  *(void*)((int64_t)puVar4 + 0x31) = 0;
  (*g_0266aec0)();
  lVar8 = g_026e1810;
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar13 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  local_50 = lVar8;
  local_48 = '\0';
  FUN_000175c0(uVar13,&local_50);
  lVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    local_38 = '\0';
    local_40 = lVar9;
    FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_01c402f0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = g_026f6e68;
  local_448 = 0;
  local_440 = '\0';
  if (g_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar9 = g_02702d68;
  local_438 = lVar8;
  local_430 = '\x01';
  if (g_02702d68 != 0) {
    FUN_00d50b00();
  }
  local_428 = lVar9;
  local_420 = '\x01';
  local_418 = 0;
  local_410 = '\0';
  FUN_00d31230(&local_418,&local_428);
  local_148 = local_50;
  local_140 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_140 = '\x01';
  FUN_01a59400(&local_148,&local_448);
  local_158 = local_40;
  local_150 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_150 = '\x01';
  FUN_01e261e0();
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_410 != '\0') && (local_418 != 0)) {
    FUN_00d50b20();
  }
  if ((local_420 != '\0') && (local_428 != 0)) {
    FUN_00d50b20();
  }
  if ((local_430 != '\0') && (local_438 != 0)) {
    FUN_00d50b20();
  }
  if ((local_440 != '\0') && (local_448 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_02657908;
  puVar4[2] = &g_02657dd0;
  (*g_02657920)();
  local_3f8 = g_026f6e68;
  local_400 = '\0';
  local_408 = 0;
  if (g_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_02702d70;
  local_3f0 = '\x01';
  if (g_02702d70 != 0) {
    FUN_00d50b00();
  }
  local_3e8 = lVar8;
  local_3e0 = '\x01';
  local_3d8 = 0;
  local_3d0 = '\0';
  FUN_00d31230(&local_3d8,&local_3e8);
  local_128 = local_50;
  local_120 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_120 = '\x01';
  FUN_01a59400(&local_128,&local_408);
  local_138 = local_40;
  local_130 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_130 = '\x01';
  FUN_01e261e0();
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
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
  if ((local_400 != '\0') && (local_408 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar8 = g_026debe8;
  if (g_026debe8 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  bVar2 = (byte)(((int64_t)dVar14 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar8;
  local_48 = '\0';
  FUN_000175c0(uVar13,&local_50);
  lVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    local_38 = '\0';
    local_40 = lVar9;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((lVar9 != 0 & bVar2) != 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_02653ba8;
    puVar4[2] = &g_02654070;
    (*g_02653bc0)();
    local_3b8 = g_026f6e68;
    local_3c0 = '\0';
    local_3c8 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar8 = g_02702d78;
    local_3b0 = '\x01';
    if (g_02702d78 != 0) {
      FUN_00d50b00();
    }
    local_3a8 = lVar8;
    local_3a0 = '\x01';
    local_398 = 0;
    local_390 = '\0';
    FUN_00d31230(&local_398,&local_3a8);
    local_108 = local_50;
    local_100 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_100 = '\x01';
    FUN_01a59400(&local_108,&local_3c8);
    local_118 = local_40;
    local_110 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_110 = '\x01';
    FUN_01e261e0();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_390 != '\0') && (local_398 != 0)) {
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
    FUN_00d50b20();
  }
  lVar8 = g_026f6f08;
  if (g_026f6f08 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  lVar9 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  bVar2 = (byte)(((int64_t)dVar14 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar8;
  local_48 = '\0';
  FUN_000175c0(uVar13,&local_50);
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    local_38 = '\0';
    local_40 = lVar7;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = g_026e1810;
  if ((lVar7 != 0 & bVar2) == 0) goto joined_r0x00343ea2;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_0265f070;
  puVar4[2] = &g_0265f530;
  (*g_0265f088)();
  local_378 = g_026f6e68;
  local_380 = '\0';
  local_388 = 0;
  if (g_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_02702d80;
  local_370 = '\x01';
  if (g_02702d80 != 0) {
    FUN_00d50b00();
  }
  local_368 = lVar8;
  local_360 = '\x01';
  local_358 = 0;
  local_350 = '\0';
  FUN_00d31230(&local_358,&local_368);
  local_f8 = local_50;
  local_f0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_f0 = '\x01';
  FUN_01a59400(&local_f8,&local_388);
  lVar7 = local_40;
  uVar12 = (undefined7)((uint64_t)lVar9 >> 8);
  if (local_40 == local_58) {
    if (((char)local_60 == '\0') && (local_58 != 0)) {
      lVar7 = local_58;
      if (local_38 != '\0') goto LAB_00343f27;
      uVar6 = CONCAT71(uVar12,1);
      FUN_00d50b00();
    }
    else {
      uVar6 = local_60 & 0xffffffff;
    }
LAB_00343fd3:
    lVar7 = local_58;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar6 = CONCAT71(uVar12,1);
      if (((char)local_60 == '\0') || (local_58 == 0)) {
        local_58 = lVar7;
      }
      else {
        local_58 = lVar7;
        FUN_00d50b20();
      }
      goto LAB_00343fd3;
    }
    if (((char)local_60 != '\0') && (local_58 != 0)) {
      local_58 = local_40;
      FUN_00d50b20();
    }
LAB_00343f27:
    local_38 = '\0';
    uVar6 = CONCAT71(uVar12,1);
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_350 != '\0') && (local_358 != 0)) {
    FUN_00d50b20();
  }
  if ((local_360 != '\0') && (local_368 != 0)) {
    FUN_00d50b20();
  }
  if ((local_370 != '\0') && (local_378 != 0)) {
    FUN_00d50b20();
  }
  if ((local_380 != '\0') && (local_388 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_340 = '\0';
  local_348 = lVar7;
  FUN_01e1f090();
  if ((local_340 != '\0') && (local_348 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e262d0();
  local_60 = uVar6 & 0xffffffff;
  lVar8 = g_026e1810;
  local_58 = lVar7;
joined_r0x00343ea2:
  g_026e1810 = lVar8;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  bVar2 = (byte)(((int64_t)dVar14 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_48 = '\0';
  local_50 = lVar8;
  FUN_000175c0(uVar13,&local_50);
  lVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    local_38 = '\0';
    local_40 = lVar9;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = local_78;
  lVar7 = local_58;
  if ((lVar9 != 0 & bVar2) != 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_0262be70;
    puVar4[2] = &g_0262c338;
    (*g_0262be88)();
    local_328 = g_026f6e68;
    local_330 = '\0';
    local_338 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar9 = g_02702d88;
    local_320 = '\x01';
    if (g_02702d88 != 0) {
      FUN_00d50b00();
    }
    local_318 = lVar9;
    local_310 = '\x01';
    local_308 = 0;
    local_300 = '\0';
    FUN_00d31230(&local_308,&local_318);
    local_e8 = local_50;
    local_e0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_e0 = '\x01';
    FUN_01a59400(&local_e8,&local_338);
    lVar9 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_300 != '\0') && (local_308 != 0)) {
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
    FUN_00d50b20();
    local_2f8 = lVar9;
    local_2f0 = '\0';
    FUN_01e1f090();
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_02643ec0;
    puVar4[2] = &g_02644388;
    (*g_02643ed8)();
    local_2d8 = g_026f6e68;
    local_2e0 = '\0';
    local_2e8 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_02702d90;
    local_2d0 = '\x01';
    if (g_02702d90 != 0) {
      FUN_00d50b00();
    }
    local_2c8 = lVar7;
    local_2c0 = '\x01';
    local_2b8 = 0;
    local_2b0 = '\0';
    FUN_00d31230(&local_2b8,&local_2c8);
    local_c8 = local_50;
    local_c0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_c0 = '\x01';
    FUN_01a59400(&local_c8,&local_2e8);
    local_d8 = local_40;
    local_d0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_d0 = '\x01';
    FUN_01e261e0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
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
    if ((local_2e0 != '\0') && (local_2e8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_0262b958;
    puVar4[2] = &g_0262be20;
    (*g_0262b970)();
    local_298 = g_026f6e68;
    local_2a0 = '\0';
    local_2a8 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_02702d98;
    local_290 = '\x01';
    if (g_02702d98 != 0) {
      FUN_00d50b00();
    }
    local_288 = lVar7;
    local_280 = '\x01';
    local_278 = 0;
    local_270 = '\0';
    FUN_00d31230(&local_278,&local_288);
    local_a8 = local_50;
    local_a0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_a0 = '\x01';
    FUN_01a59400(&local_a8,&local_2a8);
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    FUN_01e261e0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_270 != '\0') && (local_278 != 0)) {
      FUN_00d50b20();
    }
    if ((local_280 != '\0') && (local_288 != 0)) {
      FUN_00d50b20();
    }
    if ((local_290 != '\0') && (local_298 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2a0 != '\0') && (local_2a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_02666108;
    puVar4[2] = &g_026665d0;
    (*g_02666120)();
    local_258 = g_026f6e68;
    local_260 = '\0';
    local_268 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_02702da0;
    local_250 = '\x01';
    if (g_02702da0 != 0) {
      FUN_00d50b00();
    }
    local_248 = lVar7;
    local_240 = '\x01';
    local_238 = 0;
    local_230 = '\0';
    FUN_00d31230(&local_238,&local_248);
    local_88 = local_50;
    local_80 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_80 = '\x01';
    FUN_01a59400(&local_88,&local_268);
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    lVar7 = local_58;
    local_90 = '\x01';
    FUN_01e261e0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_230 != '\0') && (local_238 != 0)) {
      FUN_00d50b20();
    }
    if ((local_240 != '\0') && (local_248 != 0)) {
      FUN_00d50b20();
    }
    if ((local_250 != '\0') && (local_258 != 0)) {
      FUN_00d50b20();
    }
    if ((local_260 != '\0') && (local_268 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (((char)local_60 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (local_228 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}


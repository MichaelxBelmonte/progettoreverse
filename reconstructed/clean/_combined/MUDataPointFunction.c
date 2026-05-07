// ===================================================================
// MUDataPointFunction — Complete reconstructed pseudocode
// 28 functions
// ===================================================================


// ============================================================
// 01400f40
// ============================================================
// Function: FUN_01400f40
// Address: 01400f40
// Size: 15147 bytes
// Class: MUDataPointFunction
// String references:
//   "%@1"
//   "%@3"
//   "%@5"
//   "1%@"
//   "3%@"
//   "5%@"

int64_t * FUN_01400f40(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_780;
  uint8_t local_778;
  int64_t local_770;
  uint8_t local_768;
  int64_t local_760;
  uint8_t local_758;
  int64_t local_750;
  uint8_t local_748;
  int64_t local_740;
  uint8_t local_738;
  int64_t local_730;
  uint8_t local_728;
  int64_t local_720;
  uint8_t local_718;
  int64_t local_710;
  uint8_t local_708;
  int64_t local_700;
  uint8_t local_6f8;
  int64_t local_6f0;
  uint8_t local_6e8;
  int64_t local_6e0;
  uint8_t local_6d8;
  int64_t local_6d0;
  uint8_t local_6c8;
  int64_t local_6c0;
  uint8_t local_6b8;
  int64_t local_6b0;
  uint8_t local_6a8;
  int64_t local_6a0;
  uint8_t local_698;
  int64_t local_690;
  uint8_t local_688;
  int64_t local_680;
  uint8_t local_678;
  int64_t local_670;
  uint8_t local_668;
  int64_t local_660;
  uint8_t local_658;
  int64_t local_650;
  uint8_t local_648;
  int64_t local_640;
  uint8_t local_638;
  int64_t local_630;
  uint8_t local_628;
  int64_t local_620;
  uint8_t local_618;
  int64_t local_610;
  uint8_t local_608;
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
  int64_t local_590;
  uint8_t local_588;
  int64_t local_580;
  uint8_t local_578;
  int64_t local_570;
  uint8_t local_568;
  int64_t local_560;
  uint8_t local_558;
  int64_t local_550;
  uint8_t local_548;
  int64_t local_540;
  uint8_t local_538;
  int64_t local_530;
  uint8_t local_528;
  int64_t local_520;
  uint8_t local_518;
  int64_t local_510;
  uint8_t local_508;
  int64_t local_500;
  uint8_t local_4f8;
  int64_t local_4f0;
  uint8_t local_4e8;
  int64_t local_4e0;
  uint8_t local_4d8;
  int64_t local_4d0;
  uint8_t local_4c8;
  int64_t local_4c0;
  uint8_t local_4b8;
  int64_t local_4b0;
  uint8_t local_4a8;
  int64_t local_4a0;
  uint8_t local_498;
  int64_t local_490;
  uint8_t local_488;
  int64_t local_480;
  uint8_t local_478;
  int64_t local_470;
  uint8_t local_468;
  int64_t local_460;
  uint8_t local_458;
  int64_t local_450;
  uint8_t local_448;
  int64_t local_440;
  uint8_t local_438;
  int64_t local_430;
  uint8_t local_428;
  int64_t local_420;
  uint8_t local_418;
  int64_t local_410;
  uint8_t local_408;
  int64_t local_400;
  uint8_t local_3f8;
  int64_t local_3f0;
  uint8_t local_3e8;
  int64_t local_3e0;
  uint8_t local_3d8;
  uint8_t local_3c8;
  uint8_t local_3c0 [8];
  uint8_t local_3b8;
  uint8_t local_3b0 [8];
  uint8_t local_3a8;
  uint8_t local_3a0 [8];
  uint8_t local_398;
  int64_t local_390;
  char local_388;
  int64_t local_380;
  char local_378;
  int64_t local_370;
  char local_368;
  int64_t local_360;
  char local_358;
  int64_t local_350;
  char local_348;
  int64_t local_340;
  char local_338;
  int64_t local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  int64_t local_310;
  char local_308;
  int64_t local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int64_t local_2e0;
  char local_2d8;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
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
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
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
  int64_t local_a0;
  int64_t local_98;
  int64_t local_90;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  
  FUN_00d933c0();
  local_98 = local_50;
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = *(int64_t *)(arg1 + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_a0 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_90 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_a8 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c09e0;
  if (g_027c09e0 != 0) {
    FUN_00d50b00();
  }
  local_780 = lVar1;
  local_778 = 1;
  local_770 = local_a0;
  local_768 = 0;
  FUN_014004b0(&local_770,&local_780,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014012cd;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)&g_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014012cd:
    local_58 = param_2 + 1;
    *(void*)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c09e8;
  local_760 = *param_2;
  local_758 = 0;
  if (g_027c09e8 != 0) {
    FUN_00d50b00();
  }
  local_750 = lVar1;
  local_748 = 1;
  local_740 = local_90;
  local_738 = 0;
  FUN_014004b0(&local_740,&local_750,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014013d1;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)&g_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014013d1:
    local_58 = param_2 + 1;
    *(void*)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c09f0;
  local_730 = *param_2;
  local_728 = 0;
  if (g_027c09f0 != 0) {
    FUN_00d50b00();
  }
  local_720 = lVar1;
  local_718 = 1;
  local_710 = local_a8;
  local_708 = 0;
  FUN_014004b0(&local_710,&local_720,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014014d5;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)&g_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014014d5:
    local_58 = param_2 + 1;
    *(void*)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c09f8;
  local_700 = *param_2;
  local_6f8 = 0;
  if (g_027c09f8 != 0) {
    FUN_00d50b00();
  }
  local_6f0 = lVar1;
  local_6e8 = 1;
  local_6e0 = local_a0;
  local_6d8 = 0;
  FUN_014004b0(&local_6e0,&local_6f0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014015d9;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)&g_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014015d9:
    local_58 = param_2 + 1;
    *(void*)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a00;
  local_6d0 = *param_2;
  local_6c8 = 0;
  if (g_027c0a00 != 0) {
    FUN_00d50b00();
  }
  local_6c0 = lVar1;
  local_6b8 = 1;
  local_6b0 = local_90;
  local_6a8 = 0;
  FUN_014004b0(&local_6b0,&local_6c0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014016dd;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)&g_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014016dd:
    local_58 = param_2 + 1;
    *(void*)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a08;
  local_6a0 = *param_2;
  local_698 = 0;
  if (g_027c0a08 != 0) {
    FUN_00d50b00();
  }
  local_690 = lVar1;
  local_688 = 1;
  local_680 = local_a8;
  local_678 = 0;
  FUN_014004b0(&local_680,&local_690,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014017e1;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)&g_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014017e1:
    local_58 = param_2 + 1;
    *(void*)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_98;
  if (local_98 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_e0 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_e0 = '\x01';
  local_e8 = local_80;
  local_390 = local_a0;
  local_388 = '\0';
  FUN_00d98db0(&local_390,&local_e8,1);
  lVar3 = *param_2;
  if (lVar3 == local_68) {
    if (((char)param_2[1] == '\0') && (local_68 != 0)) {
      if (local_60 != '\0') goto LAB_01401906;
      FUN_00d50b00();
      goto LAB_014019ff;
    }
LAB_01401a04:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_68;
      if (((char)lVar5 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_014019ff:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01401a04;
    }
    *param_2 = local_68;
    if (((char)lVar5 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01401906:
    *(void*)(param_2 + 1) = 1;
    local_60 = '\0';
  }
  if ((local_388 != '\0') && (local_390 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_98;
  if (local_98 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_d0 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_d0 = '\x01';
  local_d8 = local_80;
  local_380 = local_90;
  local_378 = '\0';
  FUN_00d98db0(&local_380,&local_d8,1);
  lVar3 = *param_2;
  if (lVar3 == local_68) {
    if (((char)param_2[1] == '\0') && (local_68 != 0)) {
      if (local_60 != '\0') goto LAB_01401b84;
      FUN_00d50b00();
      goto LAB_01401bbb;
    }
LAB_01401bc0:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_68;
      if (((char)lVar5 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_01401bbb:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01401bc0;
    }
    *param_2 = local_68;
    if (((char)lVar5 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01401b84:
    *(void*)(param_2 + 1) = 1;
    local_60 = '\0';
  }
  if ((local_378 != '\0') && (local_380 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_98;
  bVar4 = true;
  if (local_98 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_c0 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_c0 = '\x01';
  local_c8 = local_80;
  local_370 = local_a8;
  local_368 = '\0';
  FUN_00d98db0(&local_370,&local_c8,1);
  lVar3 = *param_2;
  if (lVar3 == local_68) {
    if (((char)param_2[1] == '\0') && (local_68 != 0)) {
      if (local_60 != '\0') goto LAB_01401d40;
      FUN_00d50b00();
      goto LAB_01401d77;
    }
LAB_01401d7c:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_68;
      if (((char)lVar5 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_01401d77:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01401d7c;
    }
    *param_2 = local_68;
    if (((char)lVar5 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01401d40:
    *(void*)(param_2 + 1) = 1;
    local_60 = '\0';
  }
  if ((local_368 != '\0') && (local_370 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a10;
  local_670 = *param_2;
  local_668 = 0;
  if (g_027c0a10 != 0) {
    FUN_00d50b00();
  }
  local_660 = lVar1;
  local_658 = 1;
  local_650 = local_90;
  local_648 = 0;
  FUN_014004b0(&local_650,&local_660,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_01401ee7;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)&g_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01401ee7:
    local_58 = param_2 + 1;
    *(void*)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a18;
  if (g_027c0a18 != 0) {
    FUN_00d50b00();
  }
  local_360 = lVar1;
  local_358 = '\x01';
  local_350 = local_90;
  local_348 = '\0';
  FUN_00d98db0(&local_350,&local_360,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_01401f9c;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)&g_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01401f9c:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_348 != '\0') && (local_350 != 0)) {
    FUN_00d50b20();
  }
  if ((local_358 != '\0') && (local_360 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027df9a8;
  if (g_027df9a8 != 0) {
    FUN_00d50b00();
  }
  local_340 = lVar1;
  local_338 = '\x01';
  FUN_00d8ede0();
  local_b0 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_b0 = '\x01';
  local_b8 = local_68;
  FUN_00d98db0(&local_b8,&local_340,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402113;
      FUN_00d50b00();
      goto LAB_0140214a;
    }
LAB_0140214f:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_0140214a:
      *(void*)(param_2 + 1) = 1;
      goto LAB_0140214f;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01402113:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_338 != '\0') && (local_340 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a20;
  if (g_027c0a20 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a28;
  local_330 = lVar1;
  local_328 = '\x01';
  if (g_027c0a28 != 0) {
    FUN_00d50b00();
  }
  local_320 = lVar3;
  local_318 = '\x01';
  FUN_00d98db0(&local_320,&local_330,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402259;
      FUN_00d50b00();
      goto LAB_01402290;
    }
LAB_01402295:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01402290:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01402295;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01402259:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if ((local_328 != '\0') && (local_330 != 0)) {
    FUN_00d50b20();
  }
  local_310 = *param_2;
  local_308 = '\0';
  FUN_01729150();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_3c8 = 1;
  FUN_014009a0();
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_014023c1;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(param_2 + 1) = 1;
      bVar4 = false;
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_014023c1:
      *(void*)(param_2 + 1) = 1;
    }
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_308 != '\0') && (local_310 != 0)) {
    FUN_00d50b20();
  }
  local_300 = *param_2;
  local_2f8 = '\0';
  FUN_017297a0();
  lVar1 = g_027c0a30;
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
    lVar1 = g_027c0a30;
  }
  local_3b8 = 1;
  g_027c0a30 = lVar1;
  if (lVar1 != 0) {
    local_3b8 = 1;
    FUN_00d50b00();
  }
  local_638 = 1;
  local_640 = lVar1;
  FUN_01400c50(&local_640,local_3c0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
        goto LAB_01402556;
      }
      goto LAB_01402502;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01402502:
      *(void*)(param_2 + 1) = 1;
      bVar4 = false;
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01402556:
      *(void*)(param_2 + 1) = 1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_2f8 != '\0') && (local_300 != 0)) {
    FUN_00d50b20();
  }
  local_2f0 = *param_2;
  local_2e8 = '\0';
  FUN_0172a090();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027cc900;
  local_3a8 = 1;
  if (g_027cc900 != 0) {
    local_3a8 = 1;
    FUN_00d50b00();
  }
  local_628 = 1;
  local_630 = lVar1;
  FUN_01400c50(&local_630,local_3b0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
        goto LAB_014026e1;
      }
      goto LAB_0140268d;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_0140268d:
      *(void*)(param_2 + 1) = 1;
      bVar4 = false;
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_014026e1:
      *(void*)(param_2 + 1) = 1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027cc900;
  if (g_027cc900 == 0) {
LAB_01402778:
    local_f0 = '\x01';
    local_f8 = lVar1;
    local_2e0 = 0;
  }
  else {
    FUN_00d50b00();
    local_2e0 = g_027cc900;
    local_f8 = lVar1;
    local_f0 = '\x01';
    if (g_027cc900 == 0) goto LAB_01402778;
    FUN_00d50b00();
  }
  local_2d8 = '\x01';
  FUN_00d98db0(&local_2e0,&local_f8,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_014027f0;
      FUN_00d50b00();
      goto LAB_01402827;
    }
LAB_0140282c:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01402827:
      *(void*)(param_2 + 1) = 1;
      goto LAB_0140282c;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014027f0:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_2d8 != '\0') && (local_2e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a38;
  local_620 = *param_2;
  local_618 = 0;
  if (g_027c0a38 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a40;
  local_610 = lVar1;
  local_608 = 1;
  if (g_027c0a40 != 0) {
    FUN_00d50b00();
  }
  local_600 = lVar3;
  local_5f8 = 1;
  FUN_014004b0(&local_600,&local_610,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01402975;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01402975:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a48;
  local_5f0 = *param_2;
  local_5e8 = 0;
  if (g_027c0a48 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a50;
  local_5e0 = lVar1;
  local_5d8 = 1;
  if (g_027c0a50 != 0) {
    FUN_00d50b00();
  }
  local_5d0 = lVar3;
  local_5c8 = 1;
  FUN_014004b0(&local_5d0,&local_5e0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01402a98;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01402a98:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c7e08;
  if (g_027c7e08 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a50;
  local_2d0 = lVar1;
  local_2c8 = '\x01';
  if (g_027c0a50 != 0) {
    FUN_00d50b00();
  }
  local_2c0 = lVar3;
  local_2b8 = '\x01';
  FUN_00d98db0(&local_2c0,&local_2d0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402b70;
      FUN_00d50b00();
      goto LAB_01402be6;
    }
LAB_01402beb:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01402be6:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01402beb;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01402b70:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c8 != '\0') && (local_2d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027cc8c0;
  if (g_027cc8c0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a58;
  local_2b0 = lVar1;
  local_2a8 = '\x01';
  if (g_027c0a58 != 0) {
    FUN_00d50b00();
  }
  local_2a0 = lVar3;
  local_298 = '\x01';
  FUN_00d98db0(&local_2a0,&local_2b0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402ce1;
      FUN_00d50b00();
      goto LAB_01402d18;
    }
LAB_01402d1d:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01402d18:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01402d1d;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01402ce1:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027df510;
  if (g_027df510 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a60;
  local_290 = lVar1;
  local_288 = '\x01';
  if (g_027c0a60 != 0) {
    FUN_00d50b00();
  }
  local_280 = lVar3;
  local_278 = '\x01';
  FUN_00d98db0(&local_280,&local_290,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402e13;
      FUN_00d50b00();
      goto LAB_01402e4a;
    }
LAB_01402e4f:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01402e4a:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01402e4f;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01402e13:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a68;
  if (g_027c0a68 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a60;
  local_270 = lVar1;
  local_268 = '\x01';
  if (g_027c0a60 != 0) {
    FUN_00d50b00();
  }
  local_260 = lVar3;
  local_258 = '\x01';
  FUN_00d98db0(&local_260,&local_270,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402f45;
      FUN_00d50b00();
      goto LAB_01402f7c;
    }
LAB_01402f81:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01402f7c:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01402f81;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01402f45:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fce10;
  if (g_026fce10 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a60;
  local_250 = lVar1;
  local_248 = '\x01';
  if (g_027c0a60 != 0) {
    FUN_00d50b00();
  }
  local_240 = lVar3;
  local_238 = '\x01';
  FUN_00d98db0(&local_240,&local_250,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403074;
      FUN_00d50b00();
      goto LAB_014030ab;
    }
LAB_014030b0:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_014030ab:
      *(void*)(param_2 + 1) = 1;
      goto LAB_014030b0;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01403074:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  local_230 = *param_2;
  local_228 = '\0';
  FUN_017281b0();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027c0a70;
  local_398 = 1;
  if (g_027c0a70 != 0) {
    local_398 = 1;
    FUN_00d50b00();
  }
  local_5b8 = 1;
  local_5c0 = lVar1;
  FUN_01400c50(&local_5c0,local_3a0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
        goto LAB_01403235;
      }
      goto LAB_014031e1;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_014031e1:
      *(void*)(param_2 + 1) = 1;
      bVar4 = false;
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01403235:
      *(void*)(param_2 + 1) = 1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027be638;
  if (g_027be638 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a70;
  local_220 = lVar1;
  local_218 = '\x01';
  if (g_027c0a70 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar3;
  local_208 = '\x01';
  FUN_00d98db0(&local_210,&local_220,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_0140332e;
      FUN_00d50b00();
      goto LAB_01403365;
    }
LAB_0140336a:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01403365:
      *(void*)(param_2 + 1) = 1;
      goto LAB_0140336a;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_0140332e:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027be640;
  if (g_027be640 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a60;
  local_200 = lVar1;
  local_1f8 = '\x01';
  if (g_027c0a60 != 0) {
    FUN_00d50b00();
  }
  local_1f0 = lVar3;
  local_1e8 = '\x01';
  FUN_00d98db0(&local_1f0,&local_200,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_0140345d;
      FUN_00d50b00();
      goto LAB_01403494;
    }
LAB_01403499:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01403494:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01403499;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_0140345d:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a60;
  if (g_027c0a60 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027df510;
  local_1e0 = lVar1;
  local_1d8 = '\x01';
  if (g_027df510 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = lVar3;
  local_1c8 = '\x01';
  FUN_00d98db0(&local_1d0,&local_1e0,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_0140358c;
      FUN_00d50b00();
      goto LAB_014035c3;
    }
LAB_014035c8:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_014035c3:
      *(void*)(param_2 + 1) = 1;
      goto LAB_014035c8;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_0140358c:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a70;
  if (g_027c0a70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027cc8f0;
  local_1c0 = lVar1;
  local_1b8 = '\x01';
  if (g_027cc8f0 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar3;
  local_1a8 = '\x01';
  FUN_00d98db0(&local_1b0,&local_1c0,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_014036bb;
      FUN_00d50b00();
      goto LAB_014036f2;
    }
LAB_014036f7:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_014036f2:
      *(void*)(param_2 + 1) = 1;
      goto LAB_014036f7;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014036bb:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a30;
  if (g_027c0a30 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027df560;
  local_1a0 = lVar1;
  local_198 = '\x01';
  if (g_027df560 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar3;
  local_188 = '\x01';
  FUN_00d98db0(&local_190,&local_1a0,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_014037ea;
      FUN_00d50b00();
      goto LAB_01403821;
    }
LAB_01403826:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01403821:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01403826;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_014037ea:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a40;
  if (g_027c0a40 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a78;
  local_180 = lVar1;
  local_178 = '\x01';
  if (g_027c0a78 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar3;
  local_168 = '\x01';
  FUN_00d98db0(&local_170,&local_180,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403919;
      FUN_00d50b00();
      goto LAB_01403950;
    }
LAB_01403955:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01403950:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01403955;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01403919:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a50;
  if (g_027c0a50 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027df620;
  local_160 = lVar1;
  local_158 = '\x01';
  if (g_027df620 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar3;
  local_148 = '\x01';
  FUN_00d98db0(&local_150,&local_160,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403a48;
      FUN_00d50b00();
      goto LAB_01403a7f;
    }
LAB_01403a84:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01403a7f:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01403a84;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01403a48:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a28;
  if (g_027c0a28 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0a20;
  local_140 = lVar1;
  local_138 = '\x01';
  if (g_027c0a20 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar3;
  local_128 = '\x01';
  FUN_00d98db0(&local_130,&local_140,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403b77;
      FUN_00d50b00();
      goto LAB_01403bae;
    }
LAB_01403bb3:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01403bae:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01403bb3;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01403b77:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a58;
  if (g_027c0a58 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027cc8c0;
  local_120 = lVar1;
  local_118 = '\x01';
  if (g_027cc8c0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar3;
  local_108 = '\x01';
  FUN_00d98db0(&local_110,&local_120,0);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403ca6;
      FUN_00d50b00();
      goto LAB_01403cdd;
    }
LAB_01403ce2:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_01403cdd:
      *(void*)(param_2 + 1) = 1;
      goto LAB_01403ce2;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01403ca6:
    *(void*)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a80;
  local_5b0 = *param_2;
  local_5a8 = 0;
  if (g_027c0a80 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027df8e0;
  local_5a0 = lVar1;
  local_598 = 1;
  if (g_027df8e0 != 0) {
    FUN_00d50b00();
  }
  local_590 = lVar3;
  local_588 = 1;
  FUN_014004b0(&local_590,&local_5a0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01403e2b;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01403e2b:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a88;
  local_580 = *param_2;
  local_578 = 0;
  if (g_027c0a88 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027df8e0;
  local_570 = lVar1;
  local_568 = 1;
  if (g_027df8e0 != 0) {
    FUN_00d50b00();
  }
  local_560 = lVar3;
  local_558 = 1;
  FUN_014004b0(&local_560,&local_570,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01403f4e;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01403f4e:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a90;
  local_550 = *param_2;
  local_548 = 0;
  if (g_027c0a90 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027df8e8;
  local_540 = lVar1;
  local_538 = 1;
  if (g_027df8e8 != 0) {
    FUN_00d50b00();
  }
  local_530 = lVar3;
  local_528 = 1;
  FUN_014004b0(&local_530,&local_540,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01404071;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01404071:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0a98;
  local_520 = *param_2;
  local_518 = 0;
  if (g_027c0a98 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027df8e8;
  local_510 = lVar1;
  local_508 = 1;
  if (g_027df8e8 != 0) {
    FUN_00d50b00();
  }
  local_500 = lVar3;
  local_4f8 = 1;
  FUN_014004b0(&local_500,&local_510,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01404194;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01404194:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0aa0;
  local_4f0 = *param_2;
  local_4e8 = 0;
  if (g_027c0aa0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0aa8;
  local_4e0 = lVar1;
  local_4d8 = 1;
  if (g_027c0aa8 != 0) {
    FUN_00d50b00();
  }
  local_4d0 = lVar3;
  local_4c8 = 1;
  FUN_014004b0(&local_4d0,&local_4e0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_014042b7;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_014042b7:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0ab0;
  local_4c0 = *param_2;
  local_4b8 = 0;
  if (g_027c0ab0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027c0ab8;
  local_4b0 = lVar1;
  local_4a8 = 1;
  if (g_027c0ab8 != 0) {
    FUN_00d50b00();
  }
  local_4a0 = lVar3;
  local_498 = 1;
  FUN_014004b0(&local_4a0,&local_4b0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_014043da;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_014043da:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0ac0;
  local_490 = *param_2;
  local_488 = 0;
  if (g_027c0ac0 != 0) {
    FUN_00d50b00();
  }
  local_480 = lVar1;
  local_478 = 1;
  lVar3 = *(int64_t *)(arg1 + 0x78);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_468 = 1;
  local_470 = lVar3;
  FUN_014004b0(&local_470,&local_480,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_014044fe;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_014044fe:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0ac8;
  local_460 = *param_2;
  local_458 = 0;
  if (g_027c0ac8 != 0) {
    FUN_00d50b00();
  }
  local_450 = lVar1;
  local_448 = 1;
  lVar3 = *(int64_t *)(arg1 + 0x80);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_438 = 1;
  local_440 = lVar3;
  FUN_014004b0(&local_440,&local_450,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01404625;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01404625:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0ad0;
  local_430 = *param_2;
  local_428 = 0;
  if (g_027c0ad0 != 0) {
    FUN_00d50b00();
  }
  local_420 = lVar1;
  local_418 = 1;
  lVar3 = *(int64_t *)(arg1 + 0x88);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_408 = 1;
  local_410 = lVar3;
  FUN_014004b0(&local_410,&local_420,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_0140474c;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_0140474c:
    local_70 = param_2 + 1;
    *(void*)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027c0ad8;
  local_400 = *param_2;
  local_3f8 = 0;
  if (g_027c0ad8 != 0) {
    FUN_00d50b00();
  }
  local_3f0 = lVar1;
  local_3e8 = 1;
  lVar3 = *(int64_t *)(arg1 + 0x90);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_3d8 = 1;
  local_3e0 = lVar3;
  FUN_014004b0(&local_3e0,&local_3f0,1);
  puVar2 = (void*)*param_2;
  if (puVar2 == &g_024c5048) {
    if ((char)param_2[1] != '\0') {
      if (bVar4) {
        FUN_00d50b20();
      }
      goto LAB_0140487a;
    }
    if (!bVar4) {
      FUN_00d50b00();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(param_2 + 1) = 1;
LAB_0140487a:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_2 + 1) = 0;
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  if (local_98 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 013f70b0
// ============================================================
// Function: FUN_013f70b0
// Address: 013f70b0
// Size: 4590 bytes
// Class: MUDataPointFunction

double FUN_013f70b0(double param_1,double param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  byte in_CL;
  void* pVar13;
  void* pVar14;
  void* pVar15;
  int64_t lVar17;
  uint64_t uVar18;
  int iVar19;
  uint *in_RDX;
  int64_t lVar20;
  void* *arg1;
  int64_t this_ptr;
  void* pVar21;
  uint64_t uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  double dVar28;
  double dVar29;
  double local_b8;
  void* local_ac;
  int iVar16;
  
  pVar14 = *(void* *)(*(int64_t *)(this_ptr + 0x48) + 0xc);
  lVar17 = (int64_t)(int)pVar14;
  pVar13 = *arg1;
  pVar15 = 1;
  if (0 < (int)pVar13) {
    pVar15 = pVar13;
  }
  lVar8 = **(int64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
  pvVar6 = _pthread_getspecific(pVar13);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  plVar1 = (int64_t *)(this_ptr + 0x48);
  dVar28 = (double)(int)pVar15 * param_2;
  if (*(double *)(lVar8 + 0x38) <= param_1) {
    lVar8 = lVar17 + -1;
    lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pVar13 = (void*)lVar8;
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    if (param_1 < *(double *)(lVar7 + 0x38) || param_1 == *(double *)(lVar7 + 0x38)) {
      uVar5 = *in_RDX;
      uVar22 = (uint64_t)uVar5;
      if (((int)uVar5 < 0) || ((int)pVar14 <= (int)uVar5)) {
        *in_RDX = 0xffffffff;
        pVar21 = uVar5;
      }
      else {
        lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + uVar22 * 8);
        uVar18 = uVar22;
        pvVar6 = _pthread_getspecific(uVar5);
        if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        pVar21 = (void*)uVar18;
        if (*(double *)(lVar7 + 0x38) <= param_1) {
          if ((int)uVar5 < (int)pVar13) {
            lVar7 = 0;
            do {
              lVar9 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + uVar22 * 8 + lVar7 * 8);
              pvVar6 = _pthread_getspecific((void*)uVar18);
              if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8)
                ;
              }
              if (*(double *)(lVar9 + 0x38) <= param_1) {
                lVar9 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + uVar22 * 8 + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((void*)uVar18);
                if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar9 = *(int64_t *)
                           (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                if (param_1 < *(double *)(lVar9 + 0x38)) {
                  uVar22 = uVar22 + lVar7;
                  pVar21 = (void*)uVar18;
                  if ((int)uVar22 != -1) goto LAB_013f7621;
                  break;
                }
              }
              pVar21 = (void*)uVar18;
              if ((lVar8 <= (int64_t)(uVar22 + lVar7 + 1)) ||
                 (iVar4 = (int)lVar7, lVar7 = lVar7 + 1, iVar4 == 2)) break;
            } while( true );
          }
        }
        else if (0 < (int)uVar5) {
          iVar4 = -1;
          do {
            lVar7 = *(int64_t *)(*plVar1 + 0x10);
            lVar9 = *(int64_t *)(lVar7 + (uint64_t)(uVar5 + iVar4) * 8);
            pvVar6 = _pthread_getspecific((void*)lVar7);
            pVar21 = (void*)lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            if (*(double *)(lVar9 + 0x38) <= param_1) {
              lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + uVar22 * 8);
              pvVar6 = _pthread_getspecific(pVar21);
              if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
              if (param_1 < *(double *)(lVar7 + 0x38)) {
                uVar22 = (uint64_t)(uVar5 + iVar4);
                goto LAB_013f7621;
              }
            }
            if ((int64_t)uVar22 < 2) break;
            uVar22 = uVar22 - 1;
            bVar23 = iVar4 != -3;
            iVar4 = iVar4 + -1;
          } while (bVar23);
        }
      }
      lVar7 = **(int64_t **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar21);
      if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      uVar22 = 0;
      if ((*(double *)(lVar7 + 0x38) != param_1) || (NAN(*(double *)(lVar7 + 0x38)) || NAN(param_1))
         ) {
        uVar5 = FUN_013f3690(param_1);
        uVar22 = 0;
        if (uVar5 != 0xffffffff) {
          uVar22 = (uint64_t)uVar5;
        }
      }
LAB_013f7621:
      uVar5 = (uint)uVar22;
      lVar9 = (int64_t)(int)uVar5;
      lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 * 8);
      uVar18 = uVar22;
      pvVar6 = _pthread_getspecific(uVar5);
      if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      local_ac = uVar5 + 1;
      dVar29 = *(double *)(lVar7 + 0x38);
      lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 * 8);
      pvVar6 = _pthread_getspecific((void*)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      local_b8 = *(double *)(lVar7 + 0x40);
      lVar10 = (int64_t)(int)local_ac;
      lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar10 * 8);
      pvVar6 = _pthread_getspecific((void*)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      dVar24 = *(double *)(lVar7 + 0x38);
      lVar7 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar10 * 8);
      pvVar6 = _pthread_getspecific((void*)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      dVar25 = *(double *)(lVar7 + 0x40);
      if ((param_2 == 0.0) && (!NAN(param_2))) {
        *arg1 = pVar15;
        *in_RDX = uVar5;
        return (param_1 - dVar29) * ((dVar25 - local_b8) / (dVar24 - dVar29)) + local_b8;
      }
      dVar28 = dVar28 + param_1;
      dVar3 = param_1 + param_2;
      if (param_2 <= 0.0) {
        iVar4 = 0;
        if (dVar3 < dVar29) {
          uVar22 = uVar22 & 0xffffffff;
          lVar8 = (uVar22 << 0x20) + 0x100000000;
          lVar17 = uVar22 * 8;
          lVar7 = 0;
          do {
            if ((int)(uVar5 + (int)lVar7) < 1) {
              if (in_CL == 0) {
                lVar17 = **(int64_t **)(*plVar1 + 0x10);
                pvVar6 = _pthread_getspecific((void*)uVar18);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
              }
              else {
                lVar9 = lVar9 * 8;
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 + lVar7 * 8);
                lVar10 = lVar9;
                pvVar6 = _pthread_getspecific((void*)lVar9);
                pVar13 = (void*)lVar10;
                if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                dVar29 = *(double *)(lVar17 + 0x38);
                lVar17 = *(int64_t *)(lVar9 + *(int64_t *)(*plVar1 + 0x10) + lVar7 * 8);
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + (lVar8 >> 0x1d));
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
                dVar24 = *(double *)(lVar17 + 0x38);
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + (lVar8 >> 0x20) * 8);
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = (dVar3 - dVar29) *
                         ((*(double *)(lVar17 + 0x40) - dVar28) / (dVar24 - dVar29)) + dVar28;
              }
              *arg1 = 1;
              *in_RDX = 0;
              return dVar28;
            }
            lVar10 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar17 + -8 + lVar7 * 8);
            pvVar6 = _pthread_getspecific((void*)uVar18);
            if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8)
              ;
            }
            dVar29 = *(double *)(lVar10 + 0x38);
            lVar7 = lVar7 + -1;
            lVar8 = lVar8 + -0x100000000;
          } while (dVar3 < dVar29);
          lVar8 = *(int64_t *)(*plVar1 + 0x10);
          lVar9 = *(int64_t *)(lVar8 + (uVar22 + lVar7 & 0xffffffff) * 8);
          pvVar6 = _pthread_getspecific((void*)lVar8);
          pVar13 = (void*)lVar8;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_b8 = *(double *)(lVar9 + 0x40);
          lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar17 + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific(pVar13);
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          dVar24 = *(double *)(lVar8 + 0x38);
          lVar17 = *(int64_t *)(lVar17 + *(int64_t *)(*plVar1 + 0x10) + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific(pVar13);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          dVar25 = *(double *)(lVar17 + 0x40);
          iVar4 = 1;
          uVar5 = (uint)(uVar22 + lVar7);
        }
        if (dVar29 <= dVar28) goto LAB_013f8197;
        iVar19 = (uint)(uVar5 == 0 & in_CL) +
                 (int)((param_1 - dVar29) / (double)(g_023945b0 ^ (uint64_t)param_2));
        iVar16 = 1;
        if (0 < iVar19) {
          iVar16 = iVar19;
        }
      }
      else {
        iVar4 = 0;
        if (dVar24 < dVar3) {
          lVar7 = lVar10 << 0x20;
          do {
            lVar11 = lVar7 >> 0x1d;
            lVar9 = lVar7 >> 0x20;
            if (lVar8 <= lVar10) {
              if (in_CL == 0) {
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
              }
              else {
                lVar17 = *(int64_t *)(*plVar1 + 0x10);
                lVar8 = *(int64_t *)(lVar17 + (lVar7 + -0x100000000 >> 0x1d));
                pvVar6 = _pthread_getspecific((void*)lVar17);
                pVar14 = (void*)lVar17;
                if ((pvVar6 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                  lVar8 = *(int64_t *)
                           (lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8);
                }
                dVar29 = *(double *)(lVar8 + 0x38);
                lVar17 = *(int64_t *)
                          (*(int64_t *)(*plVar1 + 0x10) + (lVar7 + -0x100000000 >> 0x20) * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar11);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar24 = *(double *)(lVar17 + 0x38);
                lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = (dVar3 - dVar29) *
                         ((*(double *)(lVar17 + 0x40) - dVar28) / (dVar24 - dVar29)) + dVar28;
              }
              *arg1 = 1;
              *in_RDX = pVar13;
              return dVar28;
            }
            lVar20 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + 8 + lVar10 * 8);
            pvVar6 = _pthread_getspecific((void*)uVar18);
            if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              lVar20 = *(int64_t *)(lVar20 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8)
              ;
            }
            pVar21 = (void*)uVar18;
            dVar24 = *(double *)(lVar20 + 0x38);
            lVar7 = lVar7 + 0x100000000;
            iVar4 = (int)uVar22;
            uVar5 = iVar4 + 1;
            uVar22 = (uint64_t)uVar5;
            lVar10 = lVar10 + 1;
          } while (dVar24 < dVar3);
          lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar11);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          dVar29 = *(double *)(lVar17 + 0x38);
          lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar9 * 8);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_b8 = *(double *)(lVar17 + 0x40);
          lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + lVar10 * 8);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_ac = iVar4 + 2;
          dVar25 = *(double *)(lVar17 + 0x40);
          iVar4 = 1;
        }
        if (dVar28 <= dVar24) goto LAB_013f8197;
        iVar19 = (uint)(local_ac == pVar13 & in_CL) + (int)((dVar24 - param_1) / param_2);
        iVar16 = 1;
        if (0 < iVar19) {
          iVar16 = iVar19;
        }
      }
      dVar28 = (double)iVar16 * param_2 + param_1;
      pVar15 = iVar16 + iVar4;
LAB_013f8197:
      *arg1 = pVar15;
      *in_RDX = uVar5;
      return (dVar28 - dVar29) * ((dVar25 - local_b8) / (dVar24 - dVar29)) + local_b8;
    }
    *in_RDX = pVar13;
    pVar21 = 1;
    if (0.0 <= param_2) {
LAB_013f72d1:
      if (in_CL != 0) goto LAB_013f78bd;
      lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
      pvVar6 = _pthread_getspecific(pVar14);
      goto joined_r0x013f72f8;
    }
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    pVar21 = pVar15;
    if (*(double *)(lVar8 + 0x38) <= dVar28 + param_1 &&
        dVar28 + param_1 != *(double *)(lVar8 + 0x38)) goto LAB_013f72d1;
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar4 = (int)((param_1 - *(double *)(lVar8 + 0x38)) /
                 (double)(g_023945b0 ^ (uint64_t)param_2));
    pVar21 = 1;
    if (-1 < iVar4) {
      pVar21 = iVar4 + 1;
    }
LAB_013f78bd:
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -0x10 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    dVar28 = *(double *)(lVar8 + 0x38);
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -0x10 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    dVar29 = *(double *)(lVar8 + 0x40);
    lVar8 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    uVar2 = *(void*)(lVar8 + 0x38);
    lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar24 = *(double *)(lVar17 + 0x40) - dVar29;
    uVar26 = (uint32_t)uVar2;
    uVar27 = (uint32_t)((uint64_t)uVar2 >> 0x20);
  }
  else {
    *in_RDX = 0;
    pVar21 = 1;
    if (0.0 < param_2) {
      lVar17 = **(int64_t **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar13);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      pVar21 = pVar15;
      if (dVar28 + param_1 < *(double *)(lVar17 + 0x38)) goto LAB_013f71d3;
      lVar17 = **(int64_t **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar13);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      iVar4 = (int)((*(double *)(lVar17 + 0x38) - param_1) / param_2);
      pVar13 = iVar4 + 1;
      pVar21 = 1;
      if (-1 < iVar4) {
        pVar21 = pVar13;
      }
    }
    else {
LAB_013f71d3:
      if (in_CL == 0) {
        lVar17 = **(int64_t **)(*plVar1 + 0x10);
        pvVar6 = _pthread_getspecific(pVar13);
joined_r0x013f72f8:
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        dVar29 = *(double *)(lVar17 + 0x40);
        goto LAB_013f7a0a;
      }
    }
    lVar17 = **(int64_t **)(*plVar1 + 0x10);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar28 = *(double *)(lVar17 + 0x38);
    lVar17 = **(int64_t **)(*plVar1 + 0x10);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar29 = *(double *)(lVar17 + 0x40);
    lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + 8);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    uVar2 = *(void*)(lVar17 + 0x38);
    lVar17 = *(int64_t *)(*(int64_t *)(*plVar1 + 0x10) + 8);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar24 = *(double *)(lVar17 + 0x40) - dVar29;
    uVar26 = (uint32_t)uVar2;
    uVar27 = (uint32_t)((uint64_t)uVar2 >> 0x20);
  }
  dVar29 = (((double)(int)pVar21 * param_2 + param_1) - dVar28) *
           (dVar24 / ((double)CONCAT44(uVar27,uVar26) - dVar28)) + dVar29;
LAB_013f7a0a:
  *arg1 = pVar21;
  return dVar29;
}



// ============================================================
// 013f18d0
// ============================================================
// Function: FUN_013f18d0
// Address: 013f18d0
// Size: 2201 bytes
// Class: MUDataPointFunction

uint64_t FUN_013f18d0(uint64_t param_1)

{
  double dVar1;
  char *pcVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  uint64_t unaff_RBX;
  uint64_t uVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t local_60;
  char local_58 [8];
  double local_50;
  double local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_38[0] = '\0';
  if (*(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) == 0) {
    uVar7 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_013f21f6;
  }
  FUN_00d23310();
  lVar5 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_58[0]);
  local_40[0] = local_58[0];
  pcVar8 = local_40;
  pcVar2 = local_58;
  if (local_58[0] == '\0') {
    pcVar2 = pcVar8;
  }
  *pcVar2 = '\0';
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    local_60 = 0;
  }
  else if (local_40[0] == '\0') {
    pcVar8 = local_38;
    local_38[0] = '\0';
  }
  else {
    local_38[0] = '\x01';
    local_40[0] = '\0';
  }
  pvVar3 = _pthread_getspecific((void*)lVar5);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    if (!NAN(*(double *)(local_60 + 0x38))) goto LAB_013f19b6;
LAB_013f21e1:
    uVar7 = 0;
  }
  else {
    if (NAN(*(double *)
             (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x38)
           )) goto LAB_013f21e1;
LAB_013f19b6:
    pvVar3 = _pthread_getspecific((void*)lVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (!NAN(*(double *)(local_60 + 0x40))) goto LAB_013f1a01;
      goto LAB_013f21e1;
    }
    if (NAN(*(double *)
             (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x40)
           )) goto LAB_013f21e1;
LAB_013f1a01:
    lVar4 = *(int64_t *)(this_ptr + 0x48);
    uVar7 = CONCAT71((int7)((uint64_t)pcVar8 >> 8),1);
    if (1 < *(int *)(lVar4 + 0xc)) {
      lVar10 = 1;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar10 * 8);
        pVar6 = (void*)lVar5;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x38);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x38);
        }
        if (NAN(dVar1)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x40);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (NAN(dVar1)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x38) <= local_48) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x38) <= local_48) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x40) <= local_48) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x40) <= local_48) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (g_02390448 <= *(double *)(local_60 + 0x60)) goto LAB_013f21e1;
        }
        else if (g_02390448 <=
                 *(double *)
                  (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x60)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (g_02390448 <= *(double *)(local_60 + 0x68)) goto LAB_013f21e1;
        }
        else if (g_02390448 <=
                 *(double *)
                  (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x68)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(local_60 + 0x70);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x70);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(local_60 + 0x78);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x78);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (g_02390448 <= *(double *)(lVar9 + 0x60)) goto LAB_013f21e1;
        }
        else if (g_02390448 <=
                 *(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x60)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (g_02390448 <= *(double *)(lVar9 + 0x68)) goto LAB_013f21e1;
        }
        else if (g_02390448 <=
                 *(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x68)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x70);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x70);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x78);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x78);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x70);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x38) <= local_48 + local_50) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x38) <= local_48 + local_50) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x78);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x40) <= local_48 + local_50) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x40) <= local_48 + local_50) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x60);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (local_48 + local_50 <= *(double *)(lVar5 + 0x38)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar9 + 0x68);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (local_48 + local_50 <= *(double *)(lVar5 + 0x40)) goto LAB_013f21e1;
        lVar10 = lVar10 + 1;
        lVar4 = *(int64_t *)(this_ptr + 0x48);
        lVar5 = (int64_t)*(int *)(lVar4 + 0xc);
      } while (lVar10 < lVar5);
      uVar7 = CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
    }
  }
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_013f21f6:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 013f8740
// ============================================================
// Function: FUN_013f8740
// Address: 013f8740
// Size: 2626 bytes
// Class: MUDataPointFunction

void* FUN_013f8740(uint8_t param_1,int64_t *param_2,uint64_t param_3,void *param_4)

{
  uint64_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int iVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int iVar11;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar12;
  int64_t lVar13;
  double dVar14;
  double dVar15;
  int64_t local_a8;
  char local_a0;
  uint32_t in_stack_ffffffffffffff78;
  uint32_t in_stack_ffffffffffffff7c;
  char local_80;
  int64_t local_58;
  code *local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25683c0;
  *puVar2 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  FUN_00c8e7d0();
  if ((local_80 != '\0') && (CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78) != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar11 = *(int *)(local_58 + 0xc);
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar7 = *(int *)(CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78) + 0xc);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar7 <= iVar11) {
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f8ba7;
      }
    }
    else if (local_58 != 0) {
LAB_013f8ba7:
      local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = lVar13;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar13 = (int64_t)(int)local_40;
        iVar11 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        if (*(int *)(local_48 + 0xc) <= iVar11) break;
        lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
        local_58 = lVar13;
        pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
        lVar6 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
          lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        iVar11 = *(int *)(puVar2 + 3);
        FUN_00c8e340();
        *(void*)(puVar2[2] + (int64_t)iVar11) = *(void*)(lVar13 + 0x38);
        if (local_40._4_4_ != 0) {
          if (local_40 < 0) {
            iVar11 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar11 = 0;
          }
          local_40 = CONCAT44(iVar11,(int)local_40);
        }
      }
      lVar13 = local_48;
      FUN_01a81420();
      pVar8 = (void*)lVar13;
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 == 0) goto LAB_013f8fbf;
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_58 == 0) goto LAB_013f8fbf;
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar11 = -local_40._4_4_;
        }
        else {
          iVar11 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar11);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
      lVar13 = (int64_t)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      lVar6 = (int64_t)iVar11;
      iVar7 = iVar11 + 7;
      if (-1 < lVar6) {
        iVar7 = iVar11;
      }
      if (7 < lVar6) {
        iVar7 = iVar7 >> 3;
        lVar4 = 0;
        do {
          dVar14 = *(double *)(puVar2[2] + lVar4 * 8);
          if ((dVar14 == *(double *)(lVar13 + 0x38)) &&
             (!NAN(dVar14) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f8ecf;
          lVar4 = lVar4 + 1;
        } while (iVar7 != (int)lVar4);
      }
      FUN_00c8e340(iVar7,1);
      *(void*)(puVar2[2] + lVar6) = *(void*)(lVar13 + 0x38);
LAB_013f8ecf:
    }
    FUN_01a81420();
    FUN_00d50b20();
    goto LAB_013f8fbf;
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_013f8a27;
    }
  }
  else if (local_58 != 0) {
LAB_013f8a27:
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar13 = (int64_t)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      FUN_00c8e340();
      *(void*)(puVar2[2] + (int64_t)iVar11) = *(void*)(lVar13 + 0x38);
      if (local_40._4_4_ != 0) {
        if (local_40 < 0) {
          iVar11 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
    }
    lVar13 = local_48;
    FUN_01a81420();
    pVar8 = (void*)lVar13;
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == 0) goto LAB_013f8fbf;
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_013f8fbf;
  local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  local_58 = 0;
  local_48 = lVar13;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar11 = -local_40._4_4_;
      }
      else {
        iVar11 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar11 = 0;
      }
      local_40 = CONCAT44(iVar11,(int)local_40);
    }
    lVar13 = (int64_t)(int)local_40;
    iVar11 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar11);
    if (*(int *)(local_48 + 0xc) <= iVar11) break;
    lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
    local_58 = lVar13;
    pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
    lVar6 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
      lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    iVar11 = *(int *)(puVar2 + 3);
    lVar6 = (int64_t)iVar11;
    iVar7 = iVar11 + 7;
    if (-1 < lVar6) {
      iVar7 = iVar11;
    }
    if (7 < lVar6) {
      iVar7 = iVar7 >> 3;
      lVar4 = 0;
      do {
        dVar14 = *(double *)(puVar2[2] + lVar4 * 8);
        if ((dVar14 == *(double *)(lVar13 + 0x38)) &&
           (!NAN(dVar14) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f8d6f;
        lVar4 = lVar4 + 1;
      } while (iVar7 != (int)lVar4);
    }
    FUN_00c8e340(iVar7,1);
    *(void*)(puVar2[2] + lVar6) = *(void*)(lVar13 + 0x38);
LAB_013f8d6f:
  }
  FUN_01a81420();
  FUN_00d50b20();
LAB_013f8fbf:
  local_58 = 0;
  local_50 = FUN_00e8b590;
  plVar9 = &local_58;
  _qsort_r(plVar9,8,0x1708ec0,param_4,
           (int *)CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78));
  local_58 = CONCAT44(local_58._4_4_,0xffffffff);
  plVar5 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar5 + 0x18))();
  if (7 < *(int *)(puVar2 + 3)) {
    lVar13 = 0;
    do {
      uVar1 = *(void*)(puVar2[2] + lVar13 * 8);
      pvVar3 = _pthread_getspecific((void*)plVar9);
      plVar12 = plVar5;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = plVar5;
        plVar12 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      plVar10 = (int64_t *)*arg1;
      pVar8 = (void*)plVar9;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar10 = (int64_t *)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar14 = (double)(**(code **)(*plVar10 + 0x3d8))(uVar1,param_1);
      plVar9 = (int64_t *)*param_2;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar9 = (int64_t *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar15 = (double)(**(code **)(*plVar9 + 0x3d8))(uVar1,param_1);
      (**(code **)(*plVar12 + 0x418))(uVar1,dVar14 * dVar15);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      iVar11 = *(int *)(puVar2 + 3);
      iVar7 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      plVar9 = (int64_t *)(uint64_t)(uint)(iVar7 >> 3);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar7 >> 3);
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 013f9470
// ============================================================
// Function: FUN_013f9470
// Address: 013f9470
// Size: 2707 bytes
// Class: MUDataPointFunction

int * FUN_013f9470(float param_1,int64_t *param_2,uint64_t param_3,void *param_4)

{
  uint64_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint8_t in_CL;
  int iVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int iVar11;
  int64_t *arg1;
  int *this_ptr;
  int64_t *plVar12;
  int64_t lVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  int64_t local_b8;
  char local_b0;
  uint32_t local_88;
  uint32_t uStack_84;
  char local_80;
  int64_t local_58;
  code *local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25683c0;
  *puVar2 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  FUN_00c8e7d0();
  if ((local_80 != '\0') && (CONCAT44(uStack_84,local_88) != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar11 = *(int *)(local_58 + 0xc);
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar7 = *(int *)(CONCAT44(uStack_84,local_88) + 0xc);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar7 <= iVar11) {
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f98d7;
      }
    }
    else if (local_58 != 0) {
LAB_013f98d7:
      local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = lVar13;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar13 = (int64_t)(int)local_40;
        iVar11 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        if (*(int *)(local_48 + 0xc) <= iVar11) break;
        lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
        local_58 = lVar13;
        pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
        lVar6 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
          lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        iVar11 = *(int *)(puVar2 + 3);
        FUN_00c8e340();
        *(void*)(puVar2[2] + (int64_t)iVar11) = *(void*)(lVar13 + 0x38);
        if (local_40._4_4_ != 0) {
          if (local_40 < 0) {
            iVar11 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar11 = 0;
          }
          local_40 = CONCAT44(iVar11,(int)local_40);
        }
      }
      lVar13 = local_48;
      FUN_01a81420();
      pVar8 = (void*)lVar13;
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 == 0) goto LAB_013f9cef;
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_58 == 0) goto LAB_013f9cef;
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar11 = -local_40._4_4_;
        }
        else {
          iVar11 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar11);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
      lVar13 = (int64_t)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      lVar6 = (int64_t)iVar11;
      iVar7 = iVar11 + 7;
      if (-1 < lVar6) {
        iVar7 = iVar11;
      }
      if (7 < lVar6) {
        iVar7 = iVar7 >> 3;
        lVar4 = 0;
        do {
          dVar15 = *(double *)(puVar2[2] + lVar4 * 8);
          if ((dVar15 == *(double *)(lVar13 + 0x38)) &&
             (!NAN(dVar15) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f9bff;
          lVar4 = lVar4 + 1;
        } while (iVar7 != (int)lVar4);
      }
      FUN_00c8e340(iVar7,1);
      *(void*)(puVar2[2] + lVar6) = *(void*)(lVar13 + 0x38);
LAB_013f9bff:
    }
    FUN_01a81420();
    FUN_00d50b20();
    goto LAB_013f9cef;
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_013f9762;
    }
  }
  else if (local_58 != 0) {
LAB_013f9762:
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar13 = (int64_t)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      FUN_00c8e340();
      *(void*)(puVar2[2] + (int64_t)iVar11) = *(void*)(lVar13 + 0x38);
      if (local_40._4_4_ != 0) {
        if (local_40 < 0) {
          iVar11 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
    }
    lVar13 = local_48;
    FUN_01a81420();
    pVar8 = (void*)lVar13;
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == 0) goto LAB_013f9cef;
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_013f9cef;
  local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  local_58 = 0;
  local_48 = lVar13;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar11 = -local_40._4_4_;
      }
      else {
        iVar11 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar11 = 0;
      }
      local_40 = CONCAT44(iVar11,(int)local_40);
    }
    lVar13 = (int64_t)(int)local_40;
    iVar11 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar11);
    if (*(int *)(local_48 + 0xc) <= iVar11) break;
    lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
    local_58 = lVar13;
    pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
    lVar6 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
      lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    iVar11 = *(int *)(puVar2 + 3);
    lVar6 = (int64_t)iVar11;
    iVar7 = iVar11 + 7;
    if (-1 < lVar6) {
      iVar7 = iVar11;
    }
    if (7 < lVar6) {
      iVar7 = iVar7 >> 3;
      lVar4 = 0;
      do {
        dVar15 = *(double *)(puVar2[2] + lVar4 * 8);
        if ((dVar15 == *(double *)(lVar13 + 0x38)) &&
           (!NAN(dVar15) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f9a9f;
        lVar4 = lVar4 + 1;
      } while (iVar7 != (int)lVar4);
    }
    FUN_00c8e340(iVar7,1);
    *(void*)(puVar2[2] + lVar6) = *(void*)(lVar13 + 0x38);
LAB_013f9a9f:
  }
  FUN_01a81420();
  FUN_00d50b20();
LAB_013f9cef:
  local_58 = 0;
  local_50 = FUN_00e8b590;
  plVar9 = &local_58;
  _qsort_r(plVar9,8,0x1708ec0,param_4,this_ptr);
  local_58 = CONCAT44(local_58._4_4_,0xffffffff);
  plVar5 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar5 + 0x18))();
  if (7 < *(int *)(puVar2 + 3)) {
    fVar14 = g_02390124 - param_1;
    lVar13 = 0;
    do {
      uVar1 = *(void*)(puVar2[2] + lVar13 * 8);
      pvVar3 = _pthread_getspecific((void*)plVar9);
      plVar12 = plVar5;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = plVar5;
        plVar12 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      plVar10 = (int64_t *)*arg1;
      pVar8 = (void*)plVar9;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar10 = (int64_t *)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar15 = (double)(**(code **)(*plVar10 + 0x3d8))(uVar1,in_CL);
      plVar9 = (int64_t *)*param_2;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar9 = (int64_t *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar16 = (double)(**(code **)(*plVar9 + 0x3d8))(uVar1,in_CL);
      (**(code **)(*plVar12 + 0x418))(uVar1,dVar16 * (double)param_1 + dVar15 * (double)fVar14);
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      iVar11 = *(int *)(puVar2 + 3);
      iVar7 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      plVar9 = (int64_t *)(uint64_t)(uint)(iVar7 >> 3);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar7 >> 3);
  }
  *(int64_t **)this_ptr = plVar5;
  *(void*)(this_ptr + 2) = 1;
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 013fa1f0
// ============================================================
// Function: FUN_013fa1f0
// Address: 013fa1f0
// Size: 2202 bytes
// Class: MUDataPointFunction

void FUN_013fa1f0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint8_t auVar5 [16];
  int64_t lVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  void* pVar11;
  char *pcVar12;
  int64_t arg1;
  int64_t *plVar13;
  void*this_ptr;
  int iVar14;
  int iVar15;
  uint32_t uVar16;
  double dVar17;
  uint8_t auVar18 [16];
  double dVar19;
  uint8_t auVar20 [16];
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  double local_a8;
  double local_98;
  double dStack_90;
  uint8_t local_78 [16];
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  int local_48;
  int iStack_44;
  int local_40;
  char local_38 [8];
  
  local_50 = *(int64_t *)(arg1 + 0x48);
  iVar14 = *(int *)(local_50 + 0xc);
  local_58[0] = '\0';
  local_60 = 0;
  local_48 = -1;
  iStack_44 = 0;
  local_40 = 0;
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_a8 = 0.0;
  local_78 = ZEXT816(0);
LAB_013fa25e:
  iVar15 = -1;
  do {
    if (iStack_44 != 0) {
      if (iStack_44 < 1) {
        iStack_44 = -iStack_44;
      }
      else {
        local_48 = local_48 - iStack_44;
        FUN_00d23690();
        local_40 = local_40 + iStack_44;
        iStack_44 = 0;
      }
    }
    lVar6 = (int64_t)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(local_50 + 0xc) <= local_48) {
      lVar6 = local_50;
      FUN_01a81420();
      pVar11 = (void*)lVar6;
      if (iVar14 == 0) {
        plVar10 = (int64_t *)FUN_000bea40();
        (**(code **)(*plVar10 + 0x18))();
        pvVar7 = _pthread_getspecific(pVar11);
        plVar13 = plVar10;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar13 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x418))(0,g_0238fee8);
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        plVar13 = plVar10;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar13 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x418))((int)g_0238fee8,g_0238fee8);
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        dVar17 = (double)iVar14;
        uVar16 = (uint32_t)((uint64_t)dVar17 >> 0x20);
        auVar18._8_4_ = SUB84(dVar17,0);
        auVar18._0_8_ = dVar17;
        auVar18._12_4_ = uVar16;
        auVar18 = divpd(local_78,auVar18);
        auVar5._8_8_ = dStack_90;
        auVar5._0_8_ = local_98;
        auVar20._8_4_ = SUB84(dVar17,0);
        auVar20._0_8_ = dVar17;
        auVar20._12_4_ = uVar16;
        auVar20 = divpd(auVar5,auVar20);
        dVar17 = auVar18._8_8_;
        dVar19 = (auVar20._0_8_ - dVar17 * auVar18._0_8_) / (auVar20._8_8_ - dVar17 * dVar17);
        dVar17 = auVar18._0_8_ - dVar17 * dVar19;
        plVar10 = (int64_t *)FUN_000bea40();
        (**(code **)(*plVar10 + 0x18))();
        if ((NAN(dVar17)) || (NAN(dVar19))) {
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar13 + 0x418))(0,g_0238fee8);
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          FUN_00d23340();
          pVar11 = (void*)CONCAT71((int7)((uint64_t)arg1 >> 8),local_58[0]);
          pcVar12 = local_38;
          if (local_58[0] != '\0') {
            pcVar12 = local_58;
          }
          local_38[0] = local_58[0];
          *pcVar12 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar11);
          lVar6 = local_60;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          (**(code **)(*plVar13 + 0x418))((int)*(void*)(lVar6 + 0x38),g_0238fee8);
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar13 + 0x418))(0,dVar17);
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if (iVar15 != -1) {
            pvVar7 = _pthread_getspecific(pVar11);
            plVar13 = plVar10;
            if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar13 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            lVar6 = *(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10);
            lVar9 = *(int64_t *)(lVar6 + (int64_t)iVar15 * 8);
            pvVar7 = _pthread_getspecific((void*)lVar6);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            (**(code **)(*plVar13 + 0x418))((int)*(void*)(lVar9 + 0x38),dVar17);
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if (iVar15 != *(int *)(*(int64_t *)(arg1 + 0x48) + 0xc) + -1) {
              FUN_00d23340();
              pVar11 = (void*)CONCAT71((int7)((uint64_t)lVar6 >> 8),local_58[0]);
              pcVar12 = local_38;
              if (local_58[0] != '\0') {
                pcVar12 = local_58;
              }
              local_38[0] = local_58[0];
              *pcVar12 = '\0';
              if ((local_58[0] != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar11);
              if ((pvVar7 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                dVar4 = *(double *)(local_60 + 0x38);
              }
              else {
                dVar4 = *(double *)
                         (*(int64_t *)
                           (local_60 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x38)
                ;
              }
              if ((local_38[0] != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar11);
              plVar13 = plVar10;
              if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar13 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              dVar17 = dVar17 + dVar19 * dVar4;
              dVar19 = g_0240e410;
              if (g_0240e410 <= dVar17) {
                dVar19 = dVar17;
              }
              (**(code **)(*plVar13 + 0x418))(SUB84(dVar4,0),dVar19);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      *this_ptr = plVar10;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    lVar9 = *(int64_t *)(local_50 + 0x10);
    local_60 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
    if (iVar15 == -1) {
      pvVar7 = _pthread_getspecific((void*)lVar9);
      lVar6 = local_60;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      if (local_a8 <= *(double *)(lVar6 + 0x40)) break;
      iVar15 = local_40 + local_48;
    }
    pVar11 = (void*)lVar9;
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar17 = local_78._8_8_ + *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar4 = local_78._0_8_;
    dVar19 = *(double *)(lVar6 + 0x40);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar2 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar3 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    local_98 = dVar3 * *(double *)(lVar6 + 0x40) + local_98;
    dStack_90 = dStack_90 + dVar1 * dVar2;
    local_78._8_4_ = SUB84(dVar17,0);
    local_78._0_8_ = dVar4 + dVar19;
    local_78._12_4_ = (int)((uint64_t)dVar17 >> 0x20);
  } while( true );
  pvVar7 = _pthread_getspecific((void*)lVar9);
  lVar6 = local_60;
  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    lVar6 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
  }
  iVar14 = iVar14 + -1;
  local_a8 = *(double *)(lVar6 + 0x40);
  goto LAB_013fa25e;
}



// ============================================================
// 013f6a80
// ============================================================
// Function: FUN_013f6a80
// Address: 013f6a80
// Size: 1560 bytes
// Class: MUDataPointFunction

double FUN_013f6a80(double param_1,void* param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  void* in_ECX;
  void* pVar12;
  uint64_t uVar13;
  uint uVar14;
  uint *arg1;
  int64_t this_ptr;
  void* pVar15;
  int iVar16;
  uint64_t uVar17;
  bool bVar18;
  char local_50;
  
  iVar5 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc);
  pVar15 = iVar5 - 1;
  if (iVar5 == 0) {
    return 0.0;
  }
  lVar10 = **(int64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
  pvVar7 = _pthread_getspecific(in_ECX);
  local_50 = (char)param_2;
  if ((pVar15 == 0) && (local_50 != '\0')) {
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar10 + 0x38);
    lVar10 = **(int64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
    pvVar7 = _pthread_getspecific(in_ECX);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    return (param_1 - dVar1) + *(double *)(lVar10 + 0x40);
  }
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
  }
  if (param_1 <= *(double *)(lVar10 + 0x38)) {
    if (arg1 != (uint *)0x0) {
      *arg1 = 0;
    }
    if (local_50 == '\0') {
      lVar10 = **(int64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
      pvVar7 = _pthread_getspecific(param_2);
joined_r0x013f6d6e:
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      return *(double *)(lVar10 + 0x40);
    }
    pVar15 = 1;
    uVar14 = 0;
  }
  else {
    lVar8 = (int64_t)(int)pVar15;
    lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + lVar8 * 8);
    pvVar7 = _pthread_getspecific(pVar15);
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    if (param_1 < *(double *)(lVar10 + 0x38) || param_1 == *(double *)(lVar10 + 0x38)) {
      if (arg1 != (uint *)0x0) {
        uVar6 = *arg1;
        uVar17 = (uint64_t)uVar6;
        if (((int)uVar6 < 0) || (iVar5 <= (int)uVar6)) {
          *arg1 = 0xffffffff;
        }
        else {
          lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar17 * 8)
          ;
          uVar13 = uVar17;
          pvVar7 = _pthread_getspecific(uVar6);
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          if (*(double *)(lVar10 + 0x38) <= param_1) {
            if ((int)uVar6 < (int)pVar15) {
              lVar10 = 0;
              do {
                lVar9 = *(int64_t *)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar17 * 8 +
                         lVar10 * 8);
                pvVar7 = _pthread_getspecific((void*)uVar13);
                if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  lVar9 = *(int64_t *)
                           (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                }
                iVar16 = (int)lVar10;
                if (*(double *)(lVar9 + 0x38) <= param_1) {
                  lVar9 = *(int64_t *)
                           (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar17 * 8 + 8 +
                           lVar10 * 8);
                  pvVar7 = _pthread_getspecific((void*)uVar13);
                  if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                    lVar9 = *(int64_t *)
                             (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                  }
                  if (param_1 < *(double *)(lVar9 + 0x38)) {
                    uVar6 = uVar6 + iVar16;
                    if (uVar6 != 0xffffffff) goto LAB_013f6ebb;
                    break;
                  }
                }
                if ((lVar8 <= (int64_t)(uVar17 + lVar10 + 1)) || (lVar10 = lVar10 + 1, iVar16 == 2)
                   ) break;
              } while( true );
            }
          }
          else if (0 < (int)uVar6) {
            iVar16 = -1;
            do {
              lVar10 = *(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10);
              lVar8 = *(int64_t *)(lVar10 + (uint64_t)(uVar6 + iVar16) * 8);
              pvVar7 = _pthread_getspecific((void*)lVar10);
              pVar15 = (void*)lVar10;
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8)
                ;
              }
              if (*(double *)(lVar8 + 0x38) <= param_1) {
                lVar10 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar17 * 8);
                pvVar7 = _pthread_getspecific(pVar15);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar10 = *(int64_t *)
                            (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                if (param_1 < *(double *)(lVar10 + 0x38)) {
                  uVar6 = uVar6 + iVar16;
                  goto LAB_013f6ebb;
                }
              }
              if ((int64_t)uVar17 < 2) break;
              uVar17 = uVar17 - 1;
              bVar18 = iVar16 != -3;
              iVar16 = iVar16 + -1;
            } while (bVar18);
          }
        }
      }
      uVar6 = FUN_013f3690(param_1);
LAB_013f6ebb:
      uVar14 = 0;
      if (uVar6 != 0xffffffff) {
        uVar14 = uVar6;
      }
      pVar15 = uVar14 + 1;
      if (arg1 != (uint *)0x0) {
        *arg1 = uVar14;
      }
    }
    else {
      if (arg1 != (uint *)0x0) {
        *arg1 = pVar15;
      }
      if (local_50 == '\0') {
        lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + lVar8 * 8);
        pvVar7 = _pthread_getspecific(pVar15);
        goto joined_r0x013f6d6e;
      }
      uVar14 = iVar5 - 2;
    }
    if ((int)uVar14 < 0) goto LAB_013f7063;
  }
  if ((((int)uVar14 < iVar5) && (-1 < (int)pVar15)) && ((int)pVar15 < iVar5)) {
    pVar12 = 0x2802558;
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)uVar14 * 8);
    pvVar7 = _pthread_getspecific(0x2802558);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar10 + 0x38);
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)uVar14 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar2 = *(double *)(lVar10 + 0x40);
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)pVar15 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar3 = *(double *)(lVar10 + 0x38);
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)pVar15 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    if ((dVar1 == dVar3) && (!NAN(dVar1) && !NAN(dVar3))) {
      return dVar2;
    }
    dVar4 = *(double *)(lVar10 + 0x40);
    if ((dVar1 + dVar3) * g_023942d0 < param_1) {
      return ((dVar4 - dVar2) * (param_1 - dVar3)) / (dVar3 - dVar1) + dVar4;
    }
    return dVar2 + ((dVar4 - dVar2) * (param_1 - dVar1)) / (dVar3 - dVar1);
  }
LAB_013f7063:
  if (local_50 == '\0') {
    param_1 = 0.0;
  }
  return param_1;
}



// ============================================================
// 013f3ad0
// ============================================================
// Function: FUN_013f3ad0
// Address: 013f3ad0
// Size: 1610 bytes
// Class: MUDataPointFunction

void FUN_013f3ad0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  int64_t *in_RCX;
  int64_t *plVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  uint8_t local_68;
  int64_t *local_60;
  int64_t local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  local_40 = (int64_t *)CONCAT44(local_40._4_4_,(int)in_RCX);
  if (*(int *)(this_ptr[9] + 0xc) == 0) {
                                            (**(code **)(*this_ptr + 0x3e0))(0,0);
    return;
  }
  if (*arg1 == 0) {
    param_1 = FUN_00d23310();
    in_RCX = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_013f3be4;
      }
      in_RCX = arg1 + 1;
      local_60 = in_RCX;
      if (local_38[0] == '\0') {
        param_1 = FUN_00d50b00();
      }
    }
    else {
      local_60 = arg1 + 1;
      lVar2 = arg1[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          param_1 = FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
    }
    *(void*)local_60 = 1;
  }
LAB_013f3be4:
  if (*param_2 == 0) {
    param_1 = FUN_00d23340();
    in_RCX = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_013f3cb4;
      }
      in_RCX = param_2 + 1;
      local_60 = in_RCX;
      if (local_38[0] == '\0') {
        param_1 = FUN_00d50b00();
      }
    }
    else {
      local_60 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          param_1 = FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
    }
    *(void*)local_60 = 1;
  }
LAB_013f3cb4:
  if ((char)local_40 != '\0') {
    local_80 = *arg1;
    local_78 = 0;
    uVar8 = FUN_013f37e0(param_1,&local_80);
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] == '\0') && (local_50 != 0)) {
        in_RCX = arg1 + 1;
        local_40 = in_RCX;
        if (local_48[0] == '\0') {
          uVar8 = FUN_00d50b00();
        }
        goto LAB_013f3d62;
      }
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_40 = arg1 + 1;
      lVar2 = arg1[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          uVar8 = FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
LAB_013f3d62:
      *(void*)local_40 = 1;
    }
    local_70 = *param_2;
    local_68 = 0;
    FUN_013f38b0(uVar8,&local_70);
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3e10;
      }
      in_RCX = param_2 + 1;
      local_40 = in_RCX;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    *(void*)local_40 = 1;
  }
LAB_013f3e10:
  if (*arg1 == 0) {
    FUN_00d23310();
    in_RCX = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3f2f;
      }
      in_RCX = arg1 + 1;
      local_40 = in_RCX;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = arg1 + 1;
      lVar2 = arg1[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    *(void*)local_40 = 1;
  }
LAB_013f3f2f:
  pVar4 = (void*)in_RCX;
  if (*param_2 == 0) {
    FUN_00d23340();
    plVar5 = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar4 = (void*)plVar5;
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3fff;
      }
      plVar5 = param_2 + 1;
      local_40 = plVar5;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pVar4 = (void*)plVar5;
    *(void*)local_40 = 1;
  }
LAB_013f3fff:
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (int64_t *)FUN_013faed0();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_013faed0();
  (**(code **)(*this_ptr + 0x3e0))(local_40,uVar7);
  return;
}



// ============================================================
// 013f07a0
// ============================================================
// Function: FUN_013f07a0
// Address: 013f07a0
// Size: 2389 bytes
// Class: MUDataPointFunction

void FUN_013f07a0(double param_1,double param_2,double param_3,double param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint32_t in_EAX;
  int iVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  void* in_ECX;
  int64_t *plVar7;
  int unaff_ESI;
  int64_t *this_ptr;
  bool bVar8;
  double in_XMM4_Qa;
  double in_XMM5_Qa;
  uint32_t unaff_XMM6_Da;
  uint32_t unaff_XMM6_Db;
  uint32_t unaff_XMM7_Da;
  uint32_t unaff_XMM7_Db;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_res8;
  double local_res10;
  int64_t local_128;
  char local_120;
  int64_t local_f8;
  char local_f0;
  int64_t local_d8;
  char local_d0;
  uint32_t local_a8;
  uint32_t local_48;
  
  dVar14 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) - param_1;
  dVar11 = param_3 - param_1;
  dVar13 = in_XMM4_Qa - (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  dVar16 = param_4 - param_2;
  dVar17 = in_XMM5_Qa - (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  if ((dVar14 != 0.0) || (NAN(dVar14))) {
    dVar14 = ((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) - param_2) / dVar14;
    dVar19 = dVar14 * dVar14;
    dVar9 = (double)((uint64_t)(dVar14 * dVar16 - dVar19 * dVar11) & g_023908f0);
    dVar10 = (double)((uint64_t)(dVar14 * dVar17 - dVar19 * dVar13) & _UNK_023908f8);
    dVar15 = (double)((uint64_t)(dVar11 * dVar14 - dVar16) & g_023908f0);
    dVar14 = (double)((uint64_t)(dVar13 * dVar14 - dVar17) & _UNK_023908f8);
    dVar18 = local_res8 * (dVar19 + g_0238fee8);
    dVar19 = local_res10 * (dVar19 + g_0238fee8);
    auVar1._4_4_ = (uint)(dVar18 < dVar10) * -0x80000000;
    auVar1._0_4_ = (uint)(dVar18 < dVar9) * -0x80000000;
    auVar1._8_4_ = (uint)(dVar19 < dVar15) * -0x80000000;
    auVar1._12_4_ = (uint)(dVar19 < dVar14) * -0x80000000;
    iVar3 = movmskps(in_EAX,auVar1);
    if (iVar3 == 0) {
      return;
    }
    auVar2._4_4_ = (uint)(dVar10 <= dVar18 + dVar18) * -0x80000000;
    auVar2._0_4_ = (uint)(dVar9 <= dVar18 + dVar18) * -0x80000000;
    auVar2._8_4_ = (uint)(dVar15 <= dVar19 + dVar19) * -0x80000000;
    auVar2._12_4_ = (uint)(dVar14 <= dVar19 + dVar19) * -0x80000000;
    uVar4 = movmskps(iVar3,auVar2);
    bVar8 = (char)uVar4 == '\x0f';
  }
  else {
    if ((dVar11 <= local_res8) && (dVar13 <= local_res8)) {
      return;
    }
    dVar14 = local_res8 + local_res8;
    in_ECX = CONCAT31((int3)(in_ECX >> 8),dVar11 <= dVar14);
    bVar8 = dVar13 <= dVar14 && dVar11 <= dVar14;
  }
  if (unaff_ESI < 0x19) {
    dVar14 = (in_XMM5_Qa - param_4) * (in_XMM5_Qa - param_4) +
             (in_XMM4_Qa - param_3) * (in_XMM4_Qa - param_3);
    dVar11 = dVar16 * dVar16 + dVar11 * dVar11;
    dVar13 = dVar17 * dVar17 + dVar13 * dVar13;
    if (((((bVar8) || (dVar14 <= g_0240e9b8 * (dVar11 + dVar13))) ||
         ((dVar11 + dVar13) * g_0241c3f0 <= dVar14)) ||
        ((dVar11 <= dVar14 * g_0240d7d0 || (dVar11 <= dVar13 * g_0240d7d0)))) ||
       ((dVar13 <= dVar14 * g_0240d7d0 || (dVar13 <= g_0240d7d0 * dVar11)))) {
      dVar14 = (g_023942d0 * dVar14 + dVar11) / (dVar14 + dVar11 + dVar13);
      dVar10 = g_0238fee8 - dVar14;
      dVar16 = param_3 * dVar14 + param_1 * dVar10;
      dVar17 = in_XMM4_Qa * dVar14 + param_3 * dVar10;
      dVar19 = param_4 * dVar14 + param_2 * dVar10;
      dVar13 = in_XMM5_Qa * dVar14 + param_4 * dVar10;
      dVar11 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) +
                        in_XMM4_Qa * dVar10) + dVar17 * dVar10;
      dVar9 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + in_XMM5_Qa * dVar10
                       ) + dVar13 * dVar10;
      dVar13 = dVar14 * dVar9 + dVar10 * (dVar14 * dVar13 + dVar10 * dVar19);
      FUN_013f07a0(SUB84(param_1,0),param_2,dVar16,dVar19,*this_ptr,0);
      plVar7 = (int64_t *)*this_ptr;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (int64_t *)*this_ptr;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_48 = SUB84(dVar14 * dVar11 + dVar10 * (dVar14 * dVar17 + dVar10 * dVar16),0);
      (**(code **)(*plVar7 + 0x418))(local_48,dVar13);
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      dVar11 = dVar11 / (dVar11 + dVar14 + dVar13);
      dVar18 = g_0238fee8 - dVar11;
      dVar17 = in_XMM4_Qa * dVar11 + param_3 * dVar18;
      dVar19 = in_XMM5_Qa * dVar11 + param_4 * dVar18;
      dVar9 = dVar11 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) + in_XMM4_Qa * dVar18;
      dVar10 = dVar11 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + in_XMM5_Qa * dVar18;
      dVar15 = dVar11 * dVar9 + dVar17 * dVar18;
      dVar16 = dVar11 * dVar10 + dVar19 * dVar18;
      dVar17 = dVar11 * dVar15 +
               dVar18 * (dVar11 * dVar17 + dVar18 * (param_3 * dVar11 + param_1 * dVar18));
      dVar19 = dVar11 * dVar16 +
               dVar18 * (dVar11 * dVar19 + dVar18 * (param_4 * dVar11 + param_2 * dVar18));
      FUN_013f07a0(SUB84(param_1,0),param_2);
      plVar7 = (int64_t *)*this_ptr;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (int64_t *)*this_ptr;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_a8 = SUB84(dVar17,0);
      (**(code **)(*plVar7 + 0x418))(local_a8,dVar19);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      dVar14 = dVar14 / (dVar13 + dVar14);
      dVar12 = g_0238fee8 - dVar14;
      dVar18 = dVar9 * dVar14 + dVar15 * dVar12;
      dVar17 = dVar15 * dVar14 + dVar17 * dVar12;
      dVar13 = dVar10 * dVar14 + dVar16 * dVar12;
      dVar16 = dVar16 * dVar14 + dVar19 * dVar12;
      dVar11 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) + dVar12 * dVar9) +
               dVar12 * dVar18;
      dVar9 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + dVar12 * dVar10) +
              dVar12 * dVar13;
      dVar13 = dVar14 * dVar9 + dVar12 * (dVar12 * dVar16 + dVar14 * dVar13);
      FUN_013f07a0(local_a8,dVar19,dVar17,dVar16);
      plVar7 = (int64_t *)*this_ptr;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (int64_t *)*this_ptr;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_48 = SUB84(dVar14 * dVar11 + dVar12 * (dVar12 * dVar17 + dVar14 * dVar18),0);
      (**(code **)(*plVar7 + 0x418))(local_48,dVar13);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_013f07a0(local_48,dVar13,dVar11,dVar9);
  }
  return;
}



// ============================================================
// 013fc010
// ============================================================
// Function: FUN_013fc010
// Address: 013fc010
// Size: 623 bytes
// Class: MUDataPointFunction

void FUN_013fc010(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  void*puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint uVar7;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t arg1;
  uint64_t uVar16;
  int64_t this_ptr;
  int64_t lVar17;
  int iVar8;
  
  if (*(int64_t *)(this_ptr + 0x20) == 0) {
    if (*(int64_t *)(this_ptr + 0x50) == 0) {
      return;
    }
LAB_013fc06c:
    uVar10 = FUN_011ede20();
    uVar7 = (uint)uVar10;
    lVar17 = *(int64_t *)(this_ptr + 0x20);
  }
  else {
    if (*(int64_t *)(this_ptr + 0x50) != 0) {
      iVar6 = FUN_011ede20();
      lVar17 = *(int64_t *)(this_ptr + 0x20);
      iVar9 = *(int *)(lVar17 + 0x18);
      iVar8 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar8 = iVar9;
      }
      uVar7 = iVar8 >> 2;
      if ((int)uVar7 <= iVar6) goto LAB_013fc07f;
      goto LAB_013fc06c;
    }
    iVar9 = *(int *)(*(int64_t *)(this_ptr + 0x20) + 0x18);
    iVar8 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar8 = iVar9;
    }
    uVar7 = iVar8 >> 2;
    uVar10 = (uint64_t)uVar7;
    lVar17 = *(int64_t *)(this_ptr + 0x20);
  }
  if (lVar17 == 0) {
    uVar7 = (uint)uVar10;
    if ((int)uVar7 < 1) {
      return;
    }
    uVar12 = uVar10 & 0xffffffff;
    if ((uVar7 < 4) || ((param_2 < arg1 + uVar12 * 8 && (arg1 < param_2 + uVar12 * 8)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint64_t)(uVar7 & 0xfffffffc);
      uVar16 = (uVar11 - 4 >> 2) + 1;
      uVar13 = (uint64_t)((uint)uVar16 & 3);
      if (uVar11 - 4 < 0xc) {
        lVar14 = 0;
      }
      else {
        lVar17 = -(uVar16 & 0xfffffffffffffffc);
        lVar14 = 0;
        do {
          puVar1 = (void*)(arg1 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x10 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(param_2 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(param_2 + 0x10 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x20 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x30 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(param_2 + 0x20 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(param_2 + 0x30 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x40 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x50 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(param_2 + 0x40 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(param_2 + 0x50 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x60 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x70 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(param_2 + 0x60 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(param_2 + 0x70 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0);
      }
      if (uVar13 != 0) {
        lVar17 = param_2 + lVar14 * 8;
        lVar14 = arg1 + lVar14 * 8;
        lVar15 = 0;
        do {
          puVar2 = (void*)(lVar14 + lVar15);
          uVar3 = puVar2[1];
          puVar1 = (void*)(lVar14 + 0x10 + lVar15);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (void*)(lVar17 + lVar15);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1 = (void*)(lVar17 + 0x10 + lVar15);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar15 = lVar15 + 0x20;
        } while (uVar13 << 5 != lVar15);
      }
      if (uVar11 == uVar12) {
        return;
      }
    }
    uVar13 = ~uVar11;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(void*)(param_2 + uVar11 * 8) = *(void*)(arg1 + uVar11 * 8);
      uVar11 = uVar11 + 1;
    }
    if (uVar13 + uVar12 < 3) {
      return;
    }
    do {
      *(void*)(param_2 + uVar11 * 8) = *(void*)(arg1 + uVar11 * 8);
      *(void*)(param_2 + 8 + uVar11 * 8) = *(void*)(arg1 + 8 + uVar11 * 8);
      *(void*)(param_2 + 0x10 + uVar11 * 8) = *(void*)(arg1 + 0x10 + uVar11 * 8);
      *(void*)(param_2 + 0x18 + uVar11 * 8) = *(void*)(arg1 + 0x18 + uVar11 * 8);
      uVar11 = uVar11 + 4;
    } while (uVar12 != uVar11);
    return;
  }
LAB_013fc07f:
  if (0 < (int)uVar7) {
    lVar14 = 0;
    lVar17 = (int64_t)**(int **)(lVar17 + 0x10);
    if (lVar17 != -1) goto LAB_013fc0b7;
LAB_013fc0e0:
    *(void*)(param_2 + lVar14 * 8) = 0;
    if ((uint64_t)uVar7 - 1 != lVar14) {
      while( true ) {
        lVar14 = lVar14 + 1;
        lVar17 = (int64_t)
                 *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x10) + lVar14 * 4);
        if (lVar17 == -1) break;
LAB_013fc0b7:
        iVar9 = FUN_011ede20();
        if (iVar9 <= (int)lVar17) break;
        *(void*)(param_2 + lVar14 * 8) = *(void*)(arg1 + lVar17 * 8);
        if ((uint64_t)uVar7 - 1 == lVar14) {
          return;
        }
      }
      goto LAB_013fc0e0;
    }
  }
  return;
}



// ============================================================
// 013f4fc0
// ============================================================
// Function: FUN_013f4fc0
// Address: 013f4fc0
// Size: 1539 bytes
// Class: MUDataPointFunction

void FUN_013f4fc0(double param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  void* pVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  int64_t lVar13;
  double dVar14;
  double dVar15;
  double local_80;
  uint64_t local_78;
  double local_70;
  double local_68;
  int64_t local_38;
  
  lVar7 = *arg1;
  if (*(int *)(lVar7 + 0xc) < 2) {
    return;
  }
  local_68 = 0.0;
  lVar13 = 1;
  local_38 = 0;
  bVar2 = false;
  lVar12 = 0;
  lVar10 = 0;
  bVar3 = false;
  do {
    pVar9 = (void*)lVar10;
    lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar13 * 8);
    if (local_38 == lVar7) {
      if ((!bVar2) && (local_38 != 0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        bVar2 = true;
        local_38 = lVar7;
      }
      else {
        bVar2 = true;
        local_38 = lVar7;
      }
    }
    lVar7 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + -8 + lVar13 * 8);
    if (lVar12 == lVar7) {
      if ((!bVar3) && (lVar12 != 0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (lVar12 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
        lVar12 = lVar7;
      }
      else {
        bVar3 = true;
        lVar12 = lVar7;
      }
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_013faf30();
    if (cVar5 == '\0') {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = (void*)local_38;
      }
      dVar15 = (double)FUN_013faed0();
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_013faed0();
      local_68 = local_68 + (dVar15 - dVar14);
    }
    lVar13 = lVar13 + 1;
    lVar7 = *arg1;
    lVar10 = (int64_t)*(int *)(lVar7 + 0xc);
  } while (lVar13 < lVar10);
  if ((local_68 != 0.0) || (NAN(local_68))) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    lVar7 = *arg1;
    uVar1 = *(uint *)(lVar7 + 0xc);
    local_78 = (uint64_t)uVar1;
    if (1 < (int)uVar1) {
      local_70 = 0.0;
      local_80 = local_68;
      lVar10 = lVar12;
      while( true ) {
        uVar11 = uVar1 - 1;
        lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + (uint64_t)uVar11 * 8);
        if (local_38 == lVar7) {
          lVar7 = local_38;
          bVar4 = bVar2;
          if ((!bVar2) && (local_38 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00(lVar7);
          }
          bVar4 = true;
          if ((bVar2) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar4;
        local_38 = lVar7;
        pVar9 = uVar1 - 2;
        lVar12 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (uint64_t)pVar9 * 8);
        if (lVar10 == lVar12) {
          lVar12 = lVar10;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar10 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_013faf30();
        if (cVar5 == '\0') {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pVar9 = (void*)local_38;
          }
          local_70 = (double)FUN_013faed0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_013faed0();
          local_70 = local_70 - dVar15;
        }
        lVar7 = *(int64_t *)(*(int64_t *)(this_ptr[9] + 0x10) + (uint64_t)uVar11 * 8);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x428))((local_80 * param_1) / local_68,0);
        FUN_00d23740();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_013faf30();
        if ((int64_t)local_78 < 3) break;
        if (cVar5 == '\0') {
          local_80 = local_80 - local_70;
        }
        local_78 = local_78 - 1;
        lVar7 = *arg1;
        lVar10 = lVar12;
        uVar1 = uVar11;
      }
      if (puVar8 == (void*)0x0) goto LAB_013f55d9;
    }
    FUN_00d50b20();
  }
LAB_013f55d9:
  if ((bVar3) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 013ffd40
// ============================================================
// Function: FUN_013ffd40
// Address: 013ffd40
// Size: 1287 bytes
// Class: MUDataPointFunction
// String references:
//   "b#%@"
//   "%@11"
//   "%@9"
//   "%@13"
//   "%@7"

void FUN_013ffd40(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  FUN_00d50100();
  FUN_00d933c0();
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  lVar2 = lVar1;
  if (lVar1 != local_50) {
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 == 0) {
        lVar2 = 0;
        goto LAB_013ffd7a;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x60);
      *(int64_t *)(this_ptr + 0x60) = local_50;
    }
    else {
      local_48 = '\0';
LAB_013ffd7a:
      *(int64_t *)(this_ptr + 0x60) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_50;
    }
  }
  if ((local_48 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d933c0();
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  lVar2 = lVar1;
  if (lVar1 != local_50) {
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 == 0) {
        lVar2 = 0;
        goto LAB_013ffdf1;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x68);
      *(int64_t *)(this_ptr + 0x68) = local_50;
    }
    else {
      local_48 = '\0';
LAB_013ffdf1:
      *(int64_t *)(this_ptr + 0x68) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_50;
    }
  }
  if ((local_48 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(int64_t *)(this_ptr + 0x70);
  lVar3 = lVar2;
  if (lVar2 != local_30) {
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar3 = 0;
        goto LAB_013ffe99;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x70);
      *(int64_t *)(this_ptr + 0x70) = local_30;
    }
    else {
      local_28 = '\0';
LAB_013ffe99:
      *(int64_t *)(this_ptr + 0x70) = lVar3;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(int64_t *)(this_ptr + 0x78);
  lVar3 = lVar2;
  if (lVar2 != local_30) {
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar3 = 0;
        goto LAB_013fff52;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x78);
      *(int64_t *)(this_ptr + 0x78) = local_30;
    }
    else {
      local_28 = '\0';
LAB_013fff52:
      *(int64_t *)(this_ptr + 0x78) = lVar3;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(int64_t *)(this_ptr + 0x80);
  lVar3 = lVar2;
  if (lVar2 != local_30) {
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar3 = 0;
        goto LAB_0140000e;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x80);
      *(int64_t *)(this_ptr + 0x80) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0140000e:
      *(int64_t *)(this_ptr + 0x80) = lVar3;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  lVar3 = lVar2;
  if (lVar2 != local_30) {
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar3 = 0;
        goto LAB_014000d3;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x88);
      *(int64_t *)(this_ptr + 0x88) = local_30;
    }
    else {
      local_28 = '\0';
LAB_014000d3:
      *(int64_t *)(this_ptr + 0x88) = lVar3;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(int64_t *)(this_ptr + 0x90);
  lVar3 = lVar2;
  if (lVar2 == local_30) goto LAB_014001e3;
  lVar3 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar3 = 0;
      goto LAB_01400198;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0x90);
    *(int64_t *)(this_ptr + 0x90) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01400198:
    *(int64_t *)(this_ptr + 0x90) = lVar3;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar3 = local_30;
  }
LAB_014001e3:
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 013f5f90
// ============================================================
// Function: FUN_013f5f90
// Address: 013f5f90
// Size: 820 bytes
// Class: MUDataPointFunction

uint64_t FUN_013f5f90(void* param_1)

{
  int64_t lVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  int64_t this_ptr;
  double dVar5;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  double local_48;
  double local_40;
  char local_38 [8];
  
  if (*(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) != 0) {
    FUN_00d23310();
    local_38[0] = local_68[0];
    pcVar2 = local_68;
    if (local_68[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_013faed0();
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar2 = local_68;
    if (local_68[0] == '\0') {
      pcVar2 = local_38;
    }
    local_38[0] = local_68[0];
    *pcVar2 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = (double)FUN_013faf20();
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x48);
    if (lVar1 != 0) {
      local_68[0] = '\0';
      local_50 = 0;
      local_58 = 0;
      local_60 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          if (iVar4 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_013faed0();
            if ((local_40 != dVar5) || (NAN(local_40) || NAN(dVar5))) {
LAB_013f61a9:
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faed0();
              if (dVar5 <= local_40) goto LAB_013f62c2;
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faf20();
              if (dVar5 <= local_48) goto LAB_013f62c2;
            }
            else {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faf20();
              if ((local_48 != dVar5) || (NAN(local_48) || NAN(dVar5))) goto LAB_013f61a9;
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_013faed0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_48 = (double)FUN_013faf20();
            if (NAN(local_40)) {
LAB_013f62c2:
              FUN_01a81420();
              return 0;
            }
          }
          iVar4 = iVar4 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar4);
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_01a81420();
    }
  }
  return 1;
}



// ============================================================
// 013fdaf0
// ============================================================
// Function: FUN_013fdaf0
// Address: 013fdaf0
// Size: 661 bytes
// Class: MUDataPointFunction

void FUN_013fdaf0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar4;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t **)(arg1 + 0x38) == (int64_t *)0x0) {
    bVar1 = false;
  }
  else {
    local_88 = *param_2;
    local_80 = '\0';
    (**(code **)(**(int64_t **)(arg1 + 0x38) + 0x18))(param_1,&local_88);
    plVar4 = local_38;
    if (local_38 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      bVar1 = false;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
      bVar1 = true;
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) goto LAB_013fdd47;
  }
  FUN_00ce7000();
  local_78 = g_027c0250;
  if (g_027c0250 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  (**(code **)(*local_98 + 0x400))();
  plVar4 = local_38;
  if (local_38 == (int64_t *)0x0) {
    plVar4 = (int64_t *)0x0;
  }
  else if (local_30 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
    bVar1 = true;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar4 + 0x398))();
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*plVar4 + 0x3a0))(), cVar3 == '\0'))
  goto LAB_013fdd47;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  local_48 = 0;
  local_40 = '\0';
  local_68 = plVar4;
  FUN_00b8a050(&local_48,&local_58,0,1);
  plVar2 = local_38;
  if (local_38 == plVar4) {
    if (!bVar1) {
      if (local_30 != '\0') goto LAB_013fdd04;
      FUN_00d50b00();
    }
joined_r0x013fdcef:
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar4 = plVar2;
      if (bVar1) {
        FUN_00d50b20();
      }
      goto joined_r0x013fdcef;
    }
    plVar4 = local_38;
    if (bVar1) {
      FUN_00d50b20();
    }
LAB_013fdd04:
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar1 = true;
LAB_013fdd47:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 013f82a0
// ============================================================
// Function: FUN_013f82a0
// Address: 013f82a0
// Size: 925 bytes
// Class: MUDataPointFunction

void* FUN_013f82a0(double param_1,double param_2)

{
  bool bVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte bVar6;
  void* in_ECX;
  int64_t *plVar7;
  void*this_ptr;
  uint64_t unaff_R15;
  undefined7 uVar8;
  int64_t local_40;
  char local_38;
  
  plVar2 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar7 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar7 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x408))();
  lVar4 = local_40;
  if (local_40 == 0) {
    bVar6 = 1;
    lVar4 = 0;
    uVar8 = 0;
    bVar1 = false;
  }
  else {
    uVar8 = (undefined7)((uint64_t)unaff_R15 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = 0;
      bVar1 = true;
    }
    else {
      bVar6 = 0;
      bVar1 = true;
    }
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar7 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar7 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x408))();
  if (local_40 == lVar4) {
    if ((bool)(bVar6 & lVar4 != 0)) {
      bVar1 = true;
      if (local_38 != '\0') goto LAB_013f8534;
      FUN_00d50b00();
      goto LAB_013f8505;
    }
  }
  else {
    if (local_38 != '\0') {
      bVar6 = bVar1 & lVar4 != 0;
      in_ECX = (void*)CONCAT71(uVar8,bVar6);
      bVar1 = true;
      lVar4 = local_40;
      if (bVar6 == 1) {
        FUN_00d50b20();
      }
      goto LAB_013f8534;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar6 = bVar1 & lVar4 != 0;
    in_ECX = (void*)CONCAT71(uVar8,bVar6);
    bVar1 = true;
    lVar4 = local_40;
    if (bVar6 != 1) goto LAB_013f8534;
    FUN_00d50b20();
LAB_013f8505:
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_013f8534:
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_1 * param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 013f63e0
// ============================================================
// Function: FUN_013f63e0
// Address: 013f63e0
// Size: 689 bytes
// Class: MUDataPointFunction

void FUN_013f63e0(int64_t *param_1)

{
  bool bVar1;
  char cVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  int64_t local_58;
  char local_50;
  
  if ((this_ptr[0xb] == 0) && (cVar2 = (**(code **)(*this_ptr + 0x370))(), cVar2 != '\0')) {
    plVar3 = (int64_t *)FUN_000bea40();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb6d0();
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb720();
    lVar5 = this_ptr[9];
    if (*(int *)(lVar5 + 0xc) < 1) {
      lVar8 = 0;
      bVar1 = false;
    }
    else {
      lVar9 = 0;
      bVar1 = false;
      lVar8 = 0;
      do {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar9 * 8);
        if (lVar8 == lVar5) {
          if ((!bVar1) && (lVar8 != 0)) {
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          if ((bVar1) && (lVar8 != 0)) {
            FUN_00d50b20();
            bVar1 = true;
            lVar8 = lVar5;
          }
          else {
            bVar1 = true;
            lVar8 = lVar5;
          }
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        plVar7 = plVar3;
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = plVar3;
          plVar7 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        pVar6 = (void*)param_1;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_013faed0();
        (**(code **)(*plVar7 + 0x418))(uVar11,uVar10);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        lVar5 = this_ptr[9];
        param_1 = (int64_t *)(int64_t)*(int *)(lVar5 + 0xc);
      } while (lVar9 < (int64_t)param_1);
    }
    FUN_00d64850();
    plVar7 = (int64_t *)this_ptr[0xb];
    if (plVar7 != plVar3) {
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      this_ptr[0xb] = (int64_t)plVar3;
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if ((bVar1) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 014009a0
// ============================================================
// Function: FUN_014009a0
// Address: 014009a0
// Size: 504 bytes
// Class: MUDataPointFunction

int64_t * FUN_014009a0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar5;
  uint64_t uVar6;
  uint32_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (1 < *(int *)(lVar1 + 0xc))) {
    uVar7 = 0;
    uVar6 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar5 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + uVar5 * 8);
        if ((int)uVar5 != 0) {
          local_58 = '\0';
          lVar3 = **(int64_t **)(*param_2 + 0x10);
          local_38 = 0;
          local_60 = lVar2;
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\x01';
          local_40 = lVar3;
          FUN_00d98db0(&local_40,&local_60,0,param_4,uVar6,uVar7);
          lVar3 = local_50;
          lVar2 = *arg1;
          if (lVar2 == local_50) {
            if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01400afd;
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto LAB_01400af8;
            }
LAB_01400ac2:
            *(void*)(arg1 + 1) = 1;
            local_48 = '\0';
          }
          else {
            lVar4 = arg1[1];
            if (local_48 != '\0') {
              *arg1 = local_50;
              if (((char)lVar4 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01400ac2;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            *arg1 = lVar3;
            if (((char)lVar4 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
LAB_01400af8:
            *(void*)(arg1 + 1) = 1;
LAB_01400afd:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar5 & 0xffffffff;
      } while ((int)uVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *arg1;
  if ((char)arg1[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(arg1 + 1) = 0;
  }
  return this_ptr;
}



// ============================================================
// 013f5760
// ============================================================
// Function: FUN_013f5760
// Address: 013f5760
// Size: 653 bytes
// Class: MUDataPointFunction

double FUN_013f5760(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int64_t lVar6;
  void *pvVar7;
  void* pVar8;
  void* pVar9;
  uint64_t uVar10;
  int64_t this_ptr;
  int64_t lVar11;
  double dVar12;
  double dVar13;
  uint64_t local_58;
  int64_t local_48;
  double local_40;
  
  lVar6 = *(int64_t *)(this_ptr + 0x48);
  uVar1 = *(uint *)(lVar6 + 0xc);
  local_58 = (uint64_t)uVar1;
  local_40 = 0.0;
  if (1 < (int)uVar1) {
    uVar10 = (uint64_t)(uVar1 - 1);
    local_40 = 0.0;
    local_48 = 0;
    bVar2 = false;
    lVar11 = 0;
    bVar3 = false;
    while( true ) {
      pVar9 = (void*)uVar10;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + uVar10 * 8);
      pVar8 = pVar9;
      if (local_48 == lVar6) {
        lVar6 = local_48;
        bVar4 = bVar2;
        if ((!bVar2) && (local_48 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar2) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar4;
      local_48 = lVar6;
      uVar10 = (uint64_t)(pVar9 - 1);
      lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar10 * 8);
      if (lVar11 == lVar6) {
        lVar6 = lVar11;
        bVar4 = bVar3;
        if ((!bVar3) && (lVar11 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar3) && (lVar11 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar11 = lVar6;
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_013faf30();
      dVar12 = g_02391030;
      if (cVar5 != '\0') {
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faed0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        dVar12 = dVar12 - dVar13;
      }
      local_40 = local_40 + dVar12;
      if ((int64_t)local_58 < 3) break;
      local_58 = local_58 - 1;
      lVar6 = *(int64_t *)(this_ptr + 0x48);
      bVar3 = bVar4;
    }
    if ((bVar4) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_40;
}



// ============================================================
// 01400c50
// ============================================================
// Function: FUN_01400c50
// Address: 01400c50
// Size: 558 bytes
// Class: MUDataPointFunction

int64_t * FUN_01400c50(int64_t *param_1,int64_t *param_2,byte param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint local_4c;
  int64_t local_48;
  char local_40;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar6 = 0;
      local_4c = (uint)param_3;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
        cVar5 = (**(code **)(*(int64_t *)*param_1 + 0x50))();
        if (cVar5 == '\0') {
          local_68 = '\0';
          local_60 = *param_1;
          local_58 = '\0';
          local_70 = lVar2;
          FUN_00d98db0(&local_60,&local_70,local_4c);
          lVar4 = local_48;
          lVar2 = *arg1;
          if (lVar2 == local_48) {
            if (((char)arg1[1] == '\0') && (local_48 != 0)) {
              if (local_40 != '\0') goto LAB_01400da0;
              FUN_00d50b00();
              goto LAB_01400ddd;
            }
LAB_01400de5:
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar3 = arg1[1];
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
              *arg1 = lVar4;
              if (((char)lVar3 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_01400ddd:
              *(void*)(arg1 + 1) = 1;
              goto LAB_01400de5;
            }
            *arg1 = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
LAB_01400da0:
            *(void*)(arg1 + 1) = 1;
            local_40 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *arg1;
  if ((char)arg1[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(arg1 + 1) = 0;
  }
  return this_ptr;
}



// ============================================================
// 014004b0
// ============================================================
// Function: FUN_014004b0
// Address: 014004b0
// Size: 734 bytes
// Class: MUDataPointFunction

void FUN_014004b0(int64_t *param_1,int64_t *param_2,uint32_t param_3)

{
  void*puVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  void*puVar4;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  uint32_t local_44;
  void*local_40;
  char local_38;
  
  local_50 = param_2;
  local_44 = param_3;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d8db80();
  if ((char)local_44 == '\0') {
    iVar2 = FUN_00d90910();
  }
  else {
    iVar2 = FUN_00d90c30();
  }
  do {
    if (iVar2 == -1) {
      FUN_00d8c7d0();
      *this_ptr = puVar3;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    FUN_00d8e3d0();
    puVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != (void*)0x0)) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_90 = puVar1;
    local_88 = '\0';
    local_80 = *param_1;
    local_78 = '\0';
    FUN_00d98db0(&local_80,&local_90,0);
    puVar4 = local_40;
    if (local_40 == puVar3) {
LAB_014006a1:
      puVar4 = puVar3;
      if (local_38 != '\0') {
LAB_014006a7:
        if (local_40 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
          puVar3 = puVar4;
          goto LAB_014006a1;
        }
        if (local_38 == '\0') goto LAB_014006b5;
        goto LAB_014006a7;
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_014006b5:
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_44 == '\0') {
      local_58 = '\0';
      local_60 = *local_50;
      iVar2 = FUN_00d90910();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
      local_70 = *local_50;
      iVar2 = FUN_00d90c30();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar3 = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  } while( true );
}



// ============================================================
// 013fc290
// ============================================================
// Function: FUN_013fc290
// Address: 013fc290
// Size: 617 bytes
// Class: MUDataPointFunction

void FUN_013fc290(void)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint32_t local_1850;
  int local_184c [5];
  uint8_t local_1838 [2048];
  uint8_t local_1038 [4096];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)((int64_t)this_ptr + 0x39) == '\0') && (this_ptr[2] != -1)) {
    iVar1 = FUN_011edec0();
    lVar3 = FUN_011edcb0();
    lVar5 = this_ptr[3];
    lVar8 = 0;
    if (lVar5 == -1) {
      lVar8 = (int64_t)iVar1;
    }
    lVar8 = lVar3 - lVar8;
    if ((this_ptr[2] < lVar8) && (lVar6 = this_ptr[6], lVar6 < lVar8)) {
      if (this_ptr[9] == 0) {
        FUN_013fb700();
        (**(code **)(*this_ptr + 0x3a8))();
        lVar5 = this_ptr[3];
        lVar6 = this_ptr[6];
      }
      plVar4 = this_ptr + 2;
      if (lVar6 != 0) {
        plVar4 = this_ptr + 6;
      }
      lVar3 = *plVar4;
      lVar6 = lVar8;
      if (lVar5 < lVar8) {
        lVar6 = lVar5;
      }
      if (lVar5 == -1) {
        lVar6 = lVar8;
      }
      iVar7 = (int)lVar6 - (int)lVar3;
      if (0 < iVar7) {
        iVar2 = FUN_011edd80();
        if (iVar2 < iVar7) {
          FUN_011edd80();
          FUN_00b87ec0();
          FUN_011edd80();
        }
        uVar9 = FUN_011ee140(local_1038,&local_1850,local_184c,lVar3);
        uVar9 = FUN_013fc010(uVar9,local_1838);
        uVar9 = FUN_00b87ba0(uVar9,local_1850);
        if (local_184c[0] != 0) {
          uVar9 = FUN_013fc010(uVar9,local_1838);
          FUN_00b87ba0(uVar9,local_184c[0]);
        }
        (**(code **)(*this_ptr + 0x3b0))();
        lVar5 = this_ptr[3];
      }
      if ((lVar5 != -1) && (lVar5 < lVar8)) {
        FUN_00b881a0();
        if (0 < iVar1) {
          FUN_00da6b00(((double)iVar1 / (double)this_ptr[5]) * g_0240d7f8);
        }
        (**(code **)(*this_ptr + 0x3b8))();
      }
      this_ptr[6] = lVar6;
    }
    else if ((lVar5 != -1) && (lVar5 < lVar3)) {
      FUN_00b881a0();
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
                                                (**(code **)(*this_ptr + 0x3b8))();
        return;
      }
      goto LAB_013fc4f4;
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
LAB_013fc4f4:
                      ___stack_chk_fail();
}



// ============================================================
// 013fea10
// ============================================================
// Function: FUN_013fea10
// Address: 013fea10
// Size: 767 bytes
// Class: MUDataPointFunction

void FUN_013fea10(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012cbe00();
  lVar2 = *(int64_t *)(this_ptr + 0x70);
  lVar4 = lVar2;
  if (lVar2 == local_38) goto LAB_013feb28;
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_013feae6;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    *(int64_t *)(this_ptr + 0x70) = local_38;
  }
  else {
    local_30 = '\0';
LAB_013feae6:
    *(int64_t *)(this_ptr + 0x70) = lVar4;
  }
  param_1 = (void*)lVar2;
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_013feb28:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_0124c640();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012642b0(*(void*)(this_ptr + 0x60));
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01259540(0);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x70);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012e6a70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 013f1180
// ============================================================
// Function: FUN_013f1180
// Address: 013f1180
// Size: 625 bytes
// Class: MUDataPointFunction

void FUN_013f1180(void* param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xd] == 0) {
    if (this_ptr[0xc] == 0) {
      FUN_013ef520();
    }
    (**(code **)(*this_ptr + 0x3f8))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f63e0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x3f8))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_013f6360();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      bVar1 = false;
      local_40 = 0;
    }
    else {
      (**(code **)(*this_ptr + 0x3f8))();
      pvVar3 = _pthread_getspecific(param_1);
      plVar5 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar5 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar5 + 0x378))();
      if (local_40 == 0) {
        local_40 = 0;
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb6d0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
    }
    FUN_00d64850();
    lVar4 = this_ptr[0xd];
    if (lVar4 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0xd] = local_40;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if ((bVar1) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 013f4430
// ============================================================
// Function: FUN_013f4430
// Address: 013f4430
// Size: 667 bytes
// Class: MUDataPointFunction

void FUN_013f4430(void* param_1)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t this_ptr;
  double dVar4;
  double dVar5;
  double extraout_XMM0_Qa;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) == 0) {
LAB_013f464c:
    FUN_013f2b30();
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013faed0();
    FUN_00d23310();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_013faed0();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (dVar4 <= dVar5) {
      iVar1 = 0;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar4 = (double)FUN_013faed0();
      FUN_00d23340();
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = local_38;
      }
      local_38[0] = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_013faed0();
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (dVar5 < dVar4) goto LAB_013f464c;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faed0();
      iVar1 = FUN_013f3690();
      if (iVar1 == -1) {
        return;
      }
      iVar1 = iVar1 + 1;
      dVar5 = extraout_XMM0_Qa;
    }
    FUN_013f2cf0(dVar5,iVar1);
  }
  return;
}



// ============================================================
// 013fe1d0
// ============================================================
// Function: FUN_013fe1d0
// Address: 013fe1d0
// Size: 572 bytes
// Class: MUDataPointFunction

void FUN_013fe1d0(void)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t *local_50;
  char local_48;
  
  cVar1 = *(char *)(this_ptr + 0xc);
joined_r0x013fe1e6:
  if (cVar1 != '\0') {
    lVar2 = *(int64_t *)(this_ptr + 0x20);
    if (lVar2 != 0) {
      for (lVar3 = 0; (int)lVar3 < *(int *)(lVar2 + 0xc); lVar3 = lVar3 + 1) {
        (**(code **)(**(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar3 * 8) + 0x3c0))();
      }
      FUN_013fe7c0();
    }
    *(void*)(this_ptr + 0xd) = 1;
    return;
  }
  do {
    FUN_013fe550();
    if (local_48 == '\0') {
      if (local_50 == (int64_t *)0x0) break;
      FUN_00d50b00();
    }
    else if (local_50 == (int64_t *)0x0) break;
    local_48 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  } while( true );
LAB_013fe2a8:
  FUN_013fe550();
  if (local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_013fe340;
    FUN_00d50b00();
  }
  else if (local_50 == (int64_t *)0x0) goto LAB_013fe340;
  local_48 = '\0';
  FUN_00d23f50();
  FUN_00d50b20();
  goto LAB_013fe2a8;
LAB_013fe340:
  (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x368))();
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  if (lVar2 != 0) {
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    for (lVar3 = 0; lVar3 < *(int *)(lVar2 + 0xc); lVar3 = lVar3 + 1) {
      local_50 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar3 * 8);
      (**(code **)(*local_50 + 0x3a0))();
    }
    FUN_013fe7c0();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x378))();
  FUN_00da68a0(g_02390108);
  cVar1 = *(char *)(this_ptr + 0xc);
  goto joined_r0x013fe1e6;
}



// ============================================================
// 013ff8e0
// ============================================================
// Function: FUN_013ff8e0
// Address: 013ff8e0
// Size: 580 bytes
// Class: MUDataPointFunction

uint32_t FUN_013ff8e0(int *param_1,void*param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int local_84;
  int64_t *local_40;
  char local_38;
  
  if (*arg1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00ddb860();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d95590();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d95590();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar2 = (**(code **)(*local_40 + 0x410))();
    if ((char)uVar2 != '\0') {
      *param_1 = local_84 + -1;
      uVar3 = FUN_013ff630();
      *param_2 = uVar3;
    }
    FUN_00d50b20();
  }
  return uVar2;
}



// ============================================================
// 013fee70
// ============================================================
// Function: FUN_013fee70
// Address: 013fee70
// Size: 525 bytes
// Class: MUDataPointFunction

void FUN_013fee70(void* param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) {
    bVar2 = true;
  }
  else {
    FUN_00d50b00();
    FUN_00cb1f10();
    cVar3 = FUN_00db3690();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      bVar1 = true;
      bVar2 = false;
      goto LAB_013fefc4;
    }
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  bVar1 = false;
LAB_013fefc4:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_01289e80();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (!bVar1 && !bVar2) {
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar5 != 0 && !bVar2) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 013f23b0
// ============================================================
// Function: FUN_013f23b0
// Address: 013f23b0
// Size: 1212 bytes
// Class: MUDataPointFunction
// String references:
//   "MUDataPointFunction"
//   "addPoint"
//   "removePoint"
//   "insertPointAtIndex"

void FUN_013f23b0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87cb0();
  // [STATIC_INIT: property registration]
      g_028acd50 = "addPoint";
      g_028acd58 = &g_02794158;
      g_028acd60 = 0;
      g_028acd68 = &g_027c0228;
      g_028acd70 = FUN_013f5e10;
      g_028acd78 = FUN_013f2b30;
      g_028acd80 = 0;
      ram_00000000028acd88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028acd98 = "removePoint";
      g_028acda0 = &g_02794158;
      g_028acda8 = 0;
      g_028acdb0 = &g_027c0228;
      g_028acdb8 = FUN_013f5e10;
      g_028acdc0 = FUN_013f2ec0;
      g_028acdc8 = 0;
      ram_00000000028acdd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028acde0 = "insertPointAtIndex";
      g_028acde8 = &g_02794158;
      g_028acdf0 = 0;
      g_028acdf8 = &g_027c022b;
      g_028ace00 = FUN_013f5e90;
      g_028ace08 = FUN_013f2cf0;
      g_028ace10 = 0;
      ram_00000000028ace18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}


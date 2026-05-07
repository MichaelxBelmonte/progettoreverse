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


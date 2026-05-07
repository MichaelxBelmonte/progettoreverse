// Function: FUN_00be4190
// Address: 00be4190
// Size: 4713 bytes
// Class: GNString
// String references:
//   "ARA"
//   "audioSources"
//   "audioSource"
//   "documentArchiveID"
//   "openAutomatically"
//   "suggestedPlugIn"
//   "plugInName"
//   "lowestSupportedVersion"
//   "manufacturerName"
//   "informationURL"
//   "persistentID"
//   "archiveData"
//   "<%s>\n"
//   "<%@>\n"
//   "</%@>\n"
//   "<%@>"
//   "</%s>\n"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00be4190(uint64_t param_1,int64_t param_2)

{
  void*puVar1;
  int64_t lVar2;
  int iVar3;
  void*arg1;
  int64_t this_ptr;
  int iVar4;
  int64_t local_400;
  uint8_t local_3f8;
  uint64_t local_3f0;
  uint8_t local_3e8;
  int64_t local_3e0;
  uint8_t local_3d8;
  uint64_t local_3d0;
  uint8_t local_3c8;
  uint64_t local_3c0;
  uint8_t local_3b8;
  uint64_t local_3b0;
  uint8_t local_3a8;
  uint64_t local_3a0;
  uint8_t local_398;
  int64_t local_390;
  uint8_t local_388;
  uint64_t local_380;
  uint8_t local_378;
  int64_t local_370;
  uint8_t local_368;
  uint64_t local_360;
  uint8_t local_358;
  uint64_t local_350;
  uint8_t local_348;
  int64_t local_340;
  uint8_t local_338;
  uint64_t local_330;
  uint8_t local_328;
  int64_t local_320;
  uint8_t local_318;
  uint64_t local_310;
  uint8_t local_308;
  int64_t local_300;
  uint8_t local_2f8;
  uint64_t local_2f0;
  uint8_t local_2e8;
  int64_t local_2e0;
  uint8_t local_2d8;
  uint64_t local_2d0;
  uint8_t local_2c8;
  uint64_t local_2c0;
  uint8_t local_2b8;
  int64_t local_2b0;
  uint8_t local_2a8;
  uint64_t local_2a0;
  uint8_t local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  uint64_t local_260;
  uint8_t local_258;
  uint64_t local_250;
  uint8_t local_248;
  uint64_t local_240;
  uint8_t local_238;
  uint64_t local_230;
  uint8_t local_228;
  uint64_t local_220;
  uint8_t local_218;
  int64_t local_210;
  uint8_t local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  uint8_t local_1c0 [8];
  uint8_t local_1b8;
  uint8_t local_1a8;
  uint8_t local_1a0 [8];
  uint8_t local_198;
  void*local_190;
  uint8_t local_188;
  void*local_180;
  uint8_t local_178;
  uint8_t local_170 [8];
  uint8_t local_168;
  void*local_160;
  uint8_t local_158;
  void*local_150;
  uint8_t local_148;
  void*local_140;
  uint8_t local_138;
  void*local_130;
  uint8_t local_128;
  uint8_t local_120 [8];
  uint8_t local_118;
  void*local_110;
  uint8_t local_108;
  uint8_t local_100 [8];
  uint8_t local_f8;
  uint8_t local_f0 [8];
  uint8_t local_e8;
  uint8_t local_e0 [8];
  uint8_t local_d8;
  void*local_d0;
  uint8_t local_c8;
  void*local_c0;
  uint8_t local_b8;
  int local_ac;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  uint local_90;
  char *local_88;
  uint64_t local_80;
  int local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  uint local_48;
  char *local_40;
  char local_38;
  
  *(int64_t *)(this_ptr + 0x18) = param_2;
  lVar2 = g_02766af0;
  if (g_02766af0 != 0) {
    FUN_00d50b00();
  }
  local_400 = lVar2;
  local_3f8 = 1;
  FUN_00be5e40(0,&local_400);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02766af8;
  local_3f0 = *arg1;
  local_3e8 = 0;
  if (g_02766af8 != 0) {
    FUN_00d50b00();
  }
  local_3e0 = lVar2;
  local_3d8 = 1;
  FUN_00be5e40(0,&local_3e0);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_3d0 = *arg1;
  local_3c8 = 0;
  local_90 = 1;
  local_98 = &g_026ba3d0;
  local_88 = "ARA";
  FUN_00d8cb40();
  puVar1 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_1b8 = 1;
  FUN_00be5e40(2,local_1c0);
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_3c0 = *arg1;
  local_3b8 = 0;
  local_90 = 1;
  local_98 = &g_026ba3d0;
  local_88 = "audioSources";
  FUN_00d8cb40();
  puVar1 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_1a8 = 1;
  FUN_00be5e40(4);
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_88 = *(char **)(this_ptr + 0x28);
  if (local_88 == (char *)0x0) {
    iVar4 = 4;
  }
  else {
    local_90 = local_90 & 0xffffff00;
    local_98 = (void*)0x0;
    local_80 = 0xffffffff;
    local_78 = 0;
    iVar4 = 4;
    local_80._4_4_ = 0;
    while( true ) {
      if (local_80._4_4_ != 0) {
        if (local_80._4_4_ < 1) {
          iVar3 = -local_80._4_4_;
        }
        else {
          iVar3 = (int)local_80 - local_80._4_4_;
          local_80 = CONCAT44(local_80._4_4_,iVar3);
          FUN_00d23690();
          local_78 = local_78 + local_80._4_4_;
          iVar3 = 0;
        }
        local_80 = CONCAT44(iVar3,(int)local_80);
      }
      lVar2 = (int64_t)(int)local_80;
      iVar3 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar3);
      if (*(int *)((int64_t)local_88 + 0xc) <= iVar3) break;
      local_98 = *(void**)(*(int64_t *)((int64_t)local_88 + 0x10) + 8 + lVar2 * 8);
      if (*(int64_t *)((int64_t)local_98 + 0x10) != 0) {
        local_3b0 = *arg1;
        local_3a8 = 0;
        local_48 = 1;
        local_50 = &g_026ba3d0;
        local_40 = "audioSource";
        FUN_00d8cb40(*(int64_t *)((int64_t)local_88 + 0x10),&local_50);
        lVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_198 = 1;
        local_ac = iVar4 + 2;
        FUN_00be5e40(local_ac,local_1a0);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_3a0 = *arg1;
        local_398 = 0;
        FUN_00d91a70();
        puVar1 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x28);
        }
        else {
          local_48 = local_48 & 0xffffff00;
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x28);
        }
        local_188 = 1;
        local_190 = puVar1;
        if (lVar2 != 0) {
          local_188 = 1;
          FUN_00d50b00();
        }
        local_388 = 1;
        iVar3 = iVar4 + 4;
        local_390 = lVar2;
        FUN_00be5fd0(&local_390,&local_190,iVar3);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_380 = *arg1;
        local_378 = 0;
        FUN_00d91a70();
        puVar1 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          if (*(char *)((int64_t)local_98 + 0x38) == '\0') goto LAB_00be46c8;
LAB_00be4680:
          lVar2 = g_027e3c48;
          local_180 = puVar1;
          local_178 = 1;
          if (g_027e3c48 == 0) {
LAB_00be46e0:
            local_178 = 1;
            local_180 = puVar1;
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
          if (*(char *)((int64_t)local_98 + 0x38) != '\0') goto LAB_00be4680;
LAB_00be46c8:
          lVar2 = g_02787960;
          local_178 = 1;
          local_180 = puVar1;
          if (g_02787960 == 0) goto LAB_00be46e0;
          FUN_00d50b00();
        }
        local_368 = 1;
        local_370 = lVar2;
        FUN_00be5fd0(&local_370,&local_180,iVar3);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_360 = *arg1;
        local_358 = 0;
        FUN_00d91a70();
        lVar2 = local_70;
        local_48 = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        local_40 = (char *)lVar2;
        local_38 = '\x01';
        FUN_00d94e10();
        lVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_168 = 1;
        FUN_00be5e40(iVar3,local_170);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        local_350 = *arg1;
        local_348 = 0;
        FUN_00d91a70();
        puVar1 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x40);
        }
        else {
          local_48 = local_48 & 0xffffff00;
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x40);
        }
        local_158 = 1;
        local_160 = puVar1;
        if (lVar2 != 0) {
          local_158 = 1;
          FUN_00d50b00();
        }
        local_338 = 1;
        iVar4 = iVar4 + 6;
        local_340 = lVar2;
        FUN_00be5fd0(&local_340,&local_160,iVar4);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_330 = *arg1;
        local_328 = 0;
        FUN_00d91a70();
        puVar1 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x48);
        }
        else {
          local_48 = local_48 & 0xffffff00;
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x48);
        }
        local_148 = 1;
        local_150 = puVar1;
        if (lVar2 != 0) {
          local_148 = 1;
          FUN_00d50b00();
        }
        local_318 = 1;
        local_320 = lVar2;
        FUN_00be5fd0(&local_320,&local_150,iVar4);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_310 = *arg1;
        local_308 = 0;
        FUN_00d91a70();
        puVar1 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x50);
        }
        else {
          local_48 = local_48 & 0xffffff00;
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x50);
        }
        local_138 = 1;
        local_140 = puVar1;
        if (lVar2 != 0) {
          local_138 = 1;
          FUN_00d50b00();
        }
        local_2f8 = 1;
        local_300 = lVar2;
        FUN_00be5fd0(&local_300,&local_140,iVar4);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_2f0 = *arg1;
        local_2e8 = 0;
        FUN_00d91a70();
        puVar1 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x58);
        }
        else {
          local_48 = local_48 & 0xffffff00;
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x58);
        }
        local_128 = 1;
        local_130 = puVar1;
        if (lVar2 != 0) {
          local_128 = 1;
          FUN_00d50b00();
        }
        local_2d8 = 1;
        local_2e0 = lVar2;
        FUN_00be5fd0(&local_2e0,&local_130,iVar4);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_2d0 = *arg1;
        local_2c8 = 0;
        FUN_00d91a70();
        lVar2 = local_70;
        local_48 = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        local_40 = (char *)lVar2;
        local_38 = '\x01';
        FUN_00d94e10();
        lVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_118 = 1;
        FUN_00be5e40(iVar3,local_120);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        local_2c0 = *arg1;
        local_2b8 = 0;
        FUN_00d91a70();
        puVar1 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x30);
        }
        else {
          local_48 = local_48 & 0xffffff00;
          lVar2 = *(int64_t *)((int64_t)local_98 + 0x30);
        }
        local_108 = 1;
        local_110 = puVar1;
        if (lVar2 != 0) {
          local_108 = 1;
          FUN_00d50b00();
        }
        local_2a8 = 1;
        local_2b0 = lVar2;
        FUN_00be5fd0(&local_2b0,&local_110,iVar3);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_2a0 = *arg1;
        local_298 = 0;
        FUN_00d91a70();
        lVar2 = local_70;
        local_48 = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        local_40 = (char *)lVar2;
        local_38 = '\x01';
        FUN_00d94e10();
        lVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_f8 = 1;
        FUN_00be5e40(iVar3,local_100);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*arg1 + 0x390))();
        if ((local_288 != '\0') && (local_290 != 0)) {
          FUN_00d50b20();
        }
        local_a0 = 0;
        lVar2 = *(int64_t *)((int64_t)local_98 + 0x10);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_a0 = '\x01';
        local_a8 = lVar2;
        FUN_00ccdbb0();
        if ((local_278 != '\0') && (local_280 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*arg1 + 0x390))();
        if ((local_268 != '\0') && (local_270 != 0)) {
          FUN_00d50b20();
        }
        *(void*)((int64_t)local_98 + 0x18) = local_1e0;
        *(void*)((int64_t)local_98 + 0x20) = local_1d8;
        if (*(int64_t *)((int64_t)local_98 + 0x10) != 0) {
          *(void*)((int64_t)local_98 + 0x10) = 0;
          FUN_00d50b20();
        }
        local_260 = *arg1;
        local_258 = 0;
        FUN_00d91a70();
        lVar2 = local_70;
        local_48 = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        local_40 = (char *)lVar2;
        local_38 = '\x01';
        FUN_00d94e10();
        lVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_e8 = 1;
        FUN_00be5e40(0,local_f0);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != (char *)0x0)) {
          FUN_00d50b20();
        }
        iVar4 = local_ac;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        local_250 = *arg1;
        local_248 = 0;
        local_48 = 1;
        local_50 = &g_026ba3d0;
        local_40 = "audioSource";
        FUN_00d8cb40();
        lVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_d8 = 1;
        FUN_00be5e40(iVar4,local_e0);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01503a00();
  }
  local_240 = *arg1;
  local_238 = 0;
  local_90 = 1;
  local_98 = &g_026ba3d0;
  local_88 = "audioSources";
  FUN_00d8cb40();
  puVar1 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_c8 = 1;
  local_d0 = puVar1;
  FUN_00be5e40(iVar4 + -2,&local_d0);
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_230 = *arg1;
  local_228 = 0;
  local_90 = 1;
  local_98 = &g_026ba3d0;
  local_88 = "ARA";
  FUN_00d8cb40();
  puVar1 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_b8 = 1;
  local_c0 = puVar1;
  FUN_00be5e40(iVar4 + -4,&local_c0);
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02766b00;
  local_220 = *arg1;
  local_218 = 0;
  if (g_02766b00 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar2;
  local_208 = 1;
  FUN_00be5e40(0,&local_210);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  *(int64_t *)(this_ptr + 0x20) = (int64_t)local_98 - param_2;
  if (((int64_t)local_98 - param_2 & 1U) != 0) {
    FUN_00ccdee0();
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    *(int64_t *)(this_ptr + 0x20) = *(int64_t *)(this_ptr + 0x20) + 1;
  }
  if (*(int64_t *)(this_ptr + 0x10) != 0) {
    *(void*)(this_ptr + 0x10) = 0;
    FUN_00d50b20();
  }
  return;
}


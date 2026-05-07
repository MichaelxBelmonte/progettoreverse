// Function: FUN_01a68ad0
// Address: 01a68ad0
// Size: 7627 bytes
// Class: MUTool

void* FUN_01a68ad0(int64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t lVar7;
  void* in_ECX;
  char *pcVar8;
  int iVar9;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar10;
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
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_1f8 = param_1;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  local_90 = plVar5;
  (**(code **)(*plVar5 + 0x18))();
  cVar4 = (**(code **)(*arg1 + 0x9d0))();
  if (cVar4 == '\0') {
    FUN_01b6d0d0();
    pvVar6 = _pthread_getspecific(in_ECX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*arg1 + 0xa70))((uint32_t)local_1f8);
    FUN_012523c0(&local_a0,0,&local_98,0);
    lVar7 = local_88;
    pcVar8 = &local_60;
    if (local_80[0] != '\0') {
      pcVar8 = local_80;
    }
    local_60 = local_80[0];
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 == '\0') && (lVar7 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 == 0) {
      *(void*)((int64_t)arg1 + 0x204) = 0;
      bVar2 = false;
      bVar1 = false;
      lVar7 = g_027e26a0;
      goto joined_r0x01a69536;
    }
    FUN_00d50b20();
  }
  else {
    local_a0 = (**(code **)(*arg1 + 0x9d8))();
    local_98 = (**(code **)(*arg1 + 0x9e0))();
  }
  *(void*)((int64_t)arg1 + 0x204) = 0;
  FUN_00d403d0();
  lVar7 = g_027e2678;
  if (g_027e2678 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_408 = 0;
  local_400 = '\0';
  FUN_00d40470(&local_408,&stack0xfffffffffffffe20,3,3);
  if ((local_400 != '\0') && (local_408 != 0)) {
    FUN_00d50b20();
  }
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a6c2e0(local_98,local_a0,1);
  lVar3 = local_88;
  if ((local_80[0] == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  local_1f8 = lVar3;
  if ((local_a0._4_4_ == 0) || (local_98 >> 0x20 == 0)) {
    if (lVar3 != 0) goto LAB_01a69319;
  }
  else if (lVar3 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_78 = lVar3;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar9 = -local_70._4_4_;
        }
        else {
          iVar9 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar9);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
      lVar7 = (int64_t)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)(local_78 + 0xc) <= iVar9) break;
      local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar7 * 8);
      FUN_0171b9c0();
      local_3f8 = local_88;
      local_3f0 = '\0';
      local_3e8 = 0;
      local_3e0 = '\0';
      uVar10 = FUN_01721000(&local_3e8,&local_3f8);
      lVar3 = local_40;
      lVar7 = g_027e2680;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar10 = FUN_00d50b00();
          lVar7 = g_027e2680;
        }
      }
      else {
        local_38 = '\0';
      }
      g_027e2680 = lVar7;
      if (lVar7 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_3d0 = '\x01';
      local_3d8 = lVar7;
      FUN_01d5d9b0(uVar10,&local_3d8);
      if ((local_3d0 != '\0') && (local_3d8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3e0 != '\0') && (local_3e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3f0 != '\0') && (local_3f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      uVar10 = FUN_01d66da0();
      lVar7 = g_027e2688;
      local_3c8 = local_88;
      local_3c0 = '\0';
      if (g_027e2688 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_40 = lVar7;
      local_38 = '\0';
      FUN_00ca0840(uVar10,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_3c0 != '\0') && (local_3c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      uVar10 = FUN_00dd67f0();
      lVar7 = g_027e2690;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          uVar10 = FUN_00d50b00();
          lVar7 = g_027e2690;
        }
      }
      else {
        local_a8 = '\0';
      }
      g_027e2690 = lVar7;
      if (lVar7 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar7;
      FUN_00ca0840(uVar10,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (local_b0 != 0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      uVar10 = FUN_00dd67f0();
      lVar7 = g_027652e0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          uVar10 = FUN_00d50b00();
          lVar7 = g_027652e0;
        }
      }
      else {
        local_a8 = '\0';
      }
      g_027652e0 = lVar7;
      if (lVar7 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar7;
      FUN_00ca0840(uVar10,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (local_b0 != 0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a74380();
    if (*(int *)(local_1f8 + 0xc) != 0) {
      FUN_01d5dc80();
    }
LAB_01a69319:
    FUN_00d50b20();
    lVar3 = local_1f8;
  }
  bVar2 = true;
  bVar1 = true;
  lVar7 = g_027e26a0;
  local_1f8 = lVar3;
joined_r0x01a69536:
  g_027e26a0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
    bVar1 = bVar2;
  }
  lVar3 = g_027e26a8;
  local_3b0 = '\x01';
  local_3b8 = lVar7;
  if (g_027e26a8 != 0) {
    FUN_00d50b00();
  }
  local_3a8 = lVar3;
  local_3a0 = '\x01';
  local_398 = 0;
  local_390 = '\0';
  uVar10 = FUN_00d31230(&local_398,&local_3a8);
  lVar7 = local_88;
  local_388 = g_027e2670;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_388 = g_027e2670;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e2670 = local_388;
  if (local_388 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_380 = '\x01';
  FUN_01d5d9b0(uVar10,&local_388);
  if ((local_380 != '\0') && (local_388 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
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
  if (bVar1) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027e2690;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027e2690;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027e2690 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027652e0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027652e0;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027652e0 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e26b0;
  local_378 = lVar7;
  local_370 = '\x01';
  if (g_027e26b0 != 0) {
    FUN_00d50b00();
  }
  local_368 = lVar3;
  local_360 = '\x01';
  local_358 = 0;
  local_350 = '\0';
  uVar10 = FUN_00d31230(&local_358,&local_368);
  lVar7 = local_88;
  local_348 = g_027e26b8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_348 = g_027e26b8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26b8 = local_348;
  if (local_348 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_340 = '\x01';
  FUN_01d5d9b0(uVar10,&local_348);
  if ((local_340 != '\0') && (local_348 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
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
  FUN_01d5e230();
  FUN_01a6cc80();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027e2690;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027e2690;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027e2690 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027652e0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027652e0;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027652e0 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e26c0;
  local_338 = lVar7;
  local_330 = '\x01';
  if (g_027e26c0 != 0) {
    FUN_00d50b00();
  }
  local_328 = lVar3;
  local_320 = '\x01';
  local_318 = 0;
  local_310 = '\0';
  uVar10 = FUN_00d31230(&local_318,&local_328);
  lVar7 = local_88;
  local_308 = g_027e26c8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_308 = g_027e26c8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26c8 = local_308;
  if (local_308 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_300 = '\x01';
  FUN_01d5d9b0(uVar10,&local_308);
  if ((local_300 != '\0') && (local_308 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
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
  FUN_01d5e230();
  FUN_01a6cd50();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027e2690;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027e2690;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027e2690 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027652e0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027652e0;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027652e0 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e26d0;
  local_2f8 = lVar7;
  local_2f0 = '\x01';
  if (g_027e26d0 != 0) {
    FUN_00d50b00();
  }
  local_2e8 = lVar3;
  local_2e0 = '\x01';
  local_2d8 = 0;
  local_2d0 = '\0';
  uVar10 = FUN_00d31230(&local_2d8,&local_2e8);
  lVar7 = local_88;
  local_2c8 = g_027e26d8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_2c8 = g_027e26d8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26d8 = local_2c8;
  if (local_2c8 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_2c0 = '\x01';
  FUN_01d5d9b0(uVar10,&local_2c8);
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2e0 != '\0') && (local_2e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f0 != '\0') && (local_2f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01a6ce30();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027e2690;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027e2690;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027e2690 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027652e0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027652e0;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027652e0 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d5dc80();
  local_2b8 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = g_027e26e0;
  local_2b0 = '\x01';
  if (g_027e26e0 != 0) {
    FUN_00d50b00();
  }
  local_2a8 = lVar7;
  local_2a0 = '\x01';
  local_298 = 0;
  local_290 = '\0';
  uVar10 = FUN_00d31230(&local_298,&local_2a8);
  lVar7 = local_88;
  local_288 = g_027e26e8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_288 = g_027e26e8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26e8 = local_288;
  if (local_288 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_280 = '\x01';
  FUN_01d5d9b0(uVar10,&local_288);
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e26f0;
  local_278 = lVar7;
  local_270 = '\x01';
  if (g_027e26f0 != 0) {
    FUN_00d50b00();
  }
  local_268 = lVar3;
  local_260 = '\x01';
  local_258 = 0;
  local_250 = '\0';
  uVar10 = FUN_00d31230(&local_258,&local_268);
  lVar7 = local_88;
  local_248 = g_027e26f8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_248 = g_027e26f8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26f8 = local_248;
  if (local_248 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_240 = '\x01';
  FUN_01d5d9b0(uVar10,&local_248);
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e2700;
  local_238 = lVar7;
  local_230 = '\x01';
  if (g_027e2700 != 0) {
    FUN_00d50b00();
  }
  local_228 = lVar3;
  local_220 = '\x01';
  local_218 = 0;
  local_210 = '\0';
  uVar10 = FUN_00d31230(&local_218,&local_228);
  lVar7 = local_88;
  local_208 = g_027e2708;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_208 = g_027e2708;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e2708 = local_208;
  if (local_208 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_200 = '\x01';
  FUN_01d5d9b0(uVar10,&local_208);
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = local_90;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}


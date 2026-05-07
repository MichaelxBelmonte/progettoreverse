// Function: FUN_00cc9d90
// Address: 00cc9d90
// Size: 1902 bytes
// Class: GNBCFA

uint32_t FUN_00cc9d90(int64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  bool bVar2;
  void*puVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint32_t uVar9;
  void*local_138;
  char local_130;
  void*local_128;
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
  void*local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
    return 0;
  }
  plVar7 = (int64_t *)(this_ptr + 0x18);
  cVar5 = FUN_00cc9bd0();
  local_58 = plVar7;
  if (cVar5 == '\0') goto LAB_00cca392;
  FUN_00dac670();
  cVar5 = FUN_00daa980();
  if (cVar5 != '\0') {
    FUN_00daa970();
    cVar5 = FUN_00daaf60();
    if (cVar5 == '\0') goto LAB_00cca392;
    FUN_00daa970();
  }
  cVar5 = FUN_00daac70();
  if (cVar5 == '\0') goto LAB_00cca392;
  FUN_00dac670();
  FUN_00daa9c0();
  local_48 = 0;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  *plVar6 = (int64_t)&g_0258cea8;
  *(void*)(plVar6 + 5) = 0;
  *(void*)((int64_t)plVar6 + 0x2c) = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  (*g_0258cec0)();
  local_48 = '\x01';
  local_50 = plVar6;
  uVar8 = FUN_00e4b5a0();
  if (*param_4 != 0) {
    (**(code **)(*local_50 + 0x5e0))();
    local_c8 = (void*)*param_4;
    local_c0 = '\0';
    uVar8 = FUN_00ca1b70();
    if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    puVar3 = g_02774ad0;
    if (g_02774ad0 != (void*)0x0) {
      uVar8 = FUN_00d50b00();
    }
    local_138 = puVar3;
    local_130 = '\x01';
    uVar8 = FUN_000175c0(uVar8,&local_138);
    plVar7 = local_58;
    puVar3 = local_c8;
    if (local_c0 == '\0') {
      if (((local_c8 != (void*)0x0) && (uVar8 = FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_c0 = '\0';
    }
    if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      local_128 = puVar3;
      local_120 = '\0';
      (**(code **)(*local_50 + 0x600))();
      if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_50 + 0x5e0))();
      puVar3 = g_02774ad0;
      if (g_02774ad0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_c8 = puVar3;
      local_c0 = '\0';
      FUN_00ca13a0();
      if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_00d50b20();
    }
  }
  local_118 = *param_1;
  local_110 = '\0';
  local_60 = 0;
  lVar1 = *plVar7;
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  uVar8 = FUN_00e45630(uVar8,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 == '\0') {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      FUN_00daa970();
      FUN_00daa9c0();
      FUN_00daa990();
    }
    lVar1 = g_02774ad8;
    if (g_02774ad8 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_02774ae0;
    local_108 = lVar1;
    local_100 = '\x01';
    if (g_02774ae0 != 0) {
      FUN_00d50b00();
    }
    plVar7 = g_02774ae8;
    local_f8 = lVar4;
    local_f0 = '\x01';
    local_38 = 0;
    if (g_02774ae8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = g_02774af0;
    local_40 = plVar7;
    local_38 = '\x01';
    local_70 = 0;
    if (g_02774af0 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    uVar9 = FUN_00cca9a0(&local_78,local_58,&local_50);
    FUN_00e972c0(uVar9,&local_c8);
    FUN_002d10d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
LAB_00cca374:
    bVar2 = false;
  }
  else {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      FUN_00daa970();
      FUN_00daa9c0();
      FUN_00daa990();
    }
    FUN_00dac670();
    FUN_00dac5e0();
    cVar5 = FUN_00daac70();
    bVar2 = true;
    if (cVar5 != '\0') {
      FUN_00dac5e0();
      goto LAB_00cca374;
    }
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    return uVar8;
  }
LAB_00cca392:
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    FUN_00daa970();
    FUN_00daa9c0();
    FUN_00daa990();
  }
  lVar1 = g_02774ad8;
  if (g_02774ad8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_02774af8;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (g_02774af8 != 0) {
    FUN_00d50b00();
  }
  plVar7 = g_02774ae8;
  local_d8 = lVar4;
  local_d0 = '\x01';
  if (g_02774ae8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar7;
  local_40 = (int64_t *)*local_58;
  uVar8 = FUN_00083ea0(2,&local_40);
  FUN_00e972c0(uVar8,&local_c8);
  local_c8 = (void*)&g_0253d630;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = &g_024c5048;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  return 0;
}


// Function: FUN_0008dd70
// Address: 0008dd70
// Size: 1583 bytes
// Class: MDMetaWindowController

void FUN_0008dd70(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t this_ptr;
  float fVar7;
  uint8_t auVar5 [16];
  uint32_t uVar8;
  uint8_t auVar6 [16];
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  void*local_100;
  char local_f8;
  void*local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  
  FUN_01e534b0();
  plVar1 = *(int64_t **)(this_ptr + 0x80);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00aea5e0();
    FUN_00aea6b0();
    (**(code **)(*plVar1 + 0xab8))();
    plVar1 = *(int64_t **)(this_ptr + 0x80);
    FUN_00aea5e0();
    FUN_00aea6b0();
    (**(code **)(*plVar1 + 0xac8))();
    plVar1 = *(int64_t **)(this_ptr + 0x80);
    FUN_00aea5e0();
    FUN_00aea6b0();
    FUN_00d46dc0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x988))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar4 + 0xc) = 0;
    *(void*)((int64_t)puVar4 + 0x14) = 0;
    *(void*)((int64_t)puVar4 + 0x1a) = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(void*)((int64_t)puVar4 + 0x44) = 0;
    *(void*)((int64_t)puVar4 + 0x4c) = 0;
    *puVar4 = &g_0252f488;
    (*g_0252f4a0)();
    lVar2 = g_026d8928;
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_026d8930;
    if (g_026d8930 != 0) {
      FUN_00d50b00();
    }
    local_120 = lVar3;
    local_118 = '\x01';
    local_110 = 0;
    local_108 = '\0';
    FUN_00d31230(&local_110,&local_120);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d4c980();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_f8 = '\0';
    local_100 = puVar4;
    (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x9b8))();
    if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_b8 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  local_b8 = '\x01';
  local_c0 = (int64_t *)(this_ptr + 0x70);
  FUN_01b56760();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01e06f80();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  local_a8 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x78) + 0x10))();
  FUN_00d50b00();
  local_a8 = '\x01';
  local_b0 = (int64_t *)(this_ptr + 0x78);
  (**(code **)(*plVar1 + 0xae0))();
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_026016d8;
  *(void*)((int64_t)puVar4 + 0xc) = 0;
  (*g_026016f0)();
  local_e8 = '\x01';
  local_f0 = puVar4;
  FUN_01e058f0();
  if ((local_e8 != '\0') && (local_f0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x98);
  local_98 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x128);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_a0 = lVar2;
  (**(code **)(*plVar1 + 0x978))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e07450();
  local_88 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_90 = (int64_t *)(this_ptr + 0x70);
  FUN_01b56760();
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x98);
  local_78 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x78) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_80 = (int64_t *)(this_ptr + 0x78);
  (**(code **)(*plVar1 + 0xae0))();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    auVar5._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x4d8))();
    auVar5._8_8_ = extraout_XMM0_Qb;
    fVar7 = (float)((uint64_t)auVar5._0_8_ >> 0x20);
    uVar8 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar6._4_4_ = fVar7;
    auVar6._0_4_ = fVar7 + g_02390124;
    auVar6._8_4_ = uVar8;
    auVar6._12_4_ = uVar8;
    auVar6 = insertps(auVar5,auVar6,0x10);
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x4d0))(auVar6._0_8_);
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_e0 = g_026f6cf0;
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_00d41430(&local_d0,&local_e0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


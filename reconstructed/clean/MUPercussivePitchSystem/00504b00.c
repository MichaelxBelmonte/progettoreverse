// Function: FUN_00504b00
// Address: 00504b00
// Size: 1891 bytes
// Class: MUPercussivePitchSystem

void FUN_00504b00(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  char cVar6;
  void*puVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t **pplVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar11 [16];
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_00504b52:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00504b52;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (this_ptr[0x42] != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        local_78 = 0;
        lVar2 = this_ptr[0x42];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\x01';
        local_80 = lVar2;
        (**(code **)(*this_ptr + 0x470))();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    puVar7 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(void*)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(void*)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(void*)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(void*)((int64_t)puVar7 + 0x165) = 0;
    *(void*)((int64_t)puVar7 + 0x18c) = 0;
    *(void*)((int64_t)puVar7 + 0x194) = 0;
    *(void*)((int64_t)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &g_02645fa8;
    puVar7[2] = &g_02646a70;
    puVar7[0x39] = 0;
    puVar7[0x3a] = 0;
    *(void*)((int64_t)puVar7 + 0x1d7) = 0;
    puVar7[0x3f] = 0;
    puVar7[0x40] = 0;
    *(void*)((int64_t)puVar7 + 0x1ec) = 0;
    *(void*)((int64_t)puVar7 + 500) = 0;
    *(void*)((int64_t)puVar7 + 0x1dc) = 0;
    *(void*)((int64_t)puVar7 + 0x1e4) = 0;
    (*g_02645fc0)();
    puVar3 = (void*)this_ptr[0x42];
    if (puVar3 == puVar7) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x42] = (int64_t)puVar7;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (int64_t *)this_ptr[0x42];
    uVar5 = FUN_01b2b5d0();
    auVar11._8_4_ = extraout_XMM0_Dc;
    auVar11._0_8_ = uVar5;
    auVar11._12_4_ = extraout_XMM0_Dd;
    auVar11 = insertps(g_023b4a40,auVar11,0x10);
    (**(code **)(*plVar4 + 0x4d0))(0,auVar11._0_8_);
    (**(code **)(*(int64_t *)this_ptr[0x42] + 0x558))();
    local_68 = 0;
    local_70 = this_ptr[0x42];
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_01b0ac50();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02709e38;
    plVar4 = (int64_t *)this_ptr[0x42];
    if (g_02709e38 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0xa10))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x42] + 0xa20))();
    FUN_01b2ff20(g_023b4a10);
    FUN_01b2ff30(g_023b4a14);
    FUN_01b2fe80();
    if (this_ptr[0x45] != 0) {
      FUN_00d50130();
    }
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_000161a0();
    (**(code **)(*plVar8 + 0x18))();
    plVar4 = (int64_t *)this_ptr[0x45];
    if (plVar4 == plVar8) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x45] = (int64_t)plVar8;
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    uVar10 = (**(code **)(*plVar8 + 0x18))();
    plVar4 = g_02709e40;
    if (g_02709e40 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
    local_40 = plVar4;
    local_38 = '\0';
    uVar10 = FUN_00ca0840(uVar10,&local_40);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = g_027e3c80;
    plVar4 = (int64_t *)this_ptr[0x45];
    if (g_027e3c80 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_98 = '\0';
    local_a0 = plVar8;
    (**(code **)(*plVar4 + 0x508))(uVar10,&local_a0);
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x990))();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01b214b0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ad48c0();
    FUN_004fe810();
    FUN_01e53c20();
    plVar4 = local_40;
    (**(code **)(*plVar1 + 0x640))();
    local_50 = local_90;
    local_48 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar4 + 0x638))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00504610();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  pplVar9 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  FUN_0050ef30();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 != '\0') goto LAB_005051cd;
  }
  pplVar9 = (int64_t **)&g_02802688;
LAB_005051cd:
  plVar1 = *pplVar9;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x990))();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00504610();
    FUN_00d50b20();
  }
  return;
}


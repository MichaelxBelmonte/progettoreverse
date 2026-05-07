// Function: FUN_01d83f70
// Address: 01d83f70
// Size: 1453 bytes
// Class: GNValue
// String references:
//   "GNValue"

void* FUN_01d83f70(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar9;
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
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_31;
  
  FUN_01f97770();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_f0 = *param_1;
  local_e8 = '\0';
  uVar9 = FUN_01f97ca0(&local_f0,&stack0xffffffffffffff90);
  local_40 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (int64_t *)0x0) && (uVar9 = FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (arg1 != (int64_t *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_e0 = *param_1;
  local_d8 = '\0';
  pplVar8 = &local_50;
  (**(code **)(*arg1 + 0x88))(uVar9,&local_e0);
  plVar1 = local_50;
  if ((g_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026d4348 = FUN_00d4fe50();
    g_026d4330 = "GNValue";
    g_026d4338 = 0x18;
    g_026d4340 = FUN_00053cb0;
    g_026d4350 = 0;
    ram_00000000026d4358 = 0;
    g_026d4360 = 0;
    ram_00000000026d4368 = 0;
    g_026d4370 = 0;
    ram_00000000026d4378 = 0;
    g_026d4380 = 0;
    ram_00000000026d4388 = 0;
    g_026d4390 = 0;
    ram_00000000026d4398 = 0;
    g_026d43a0 = 0;
    ram_00000000026d43a8 = 0;
    g_026d43b0 = 0;
    ram_00000000026d43b8 = 0;
    g_026d43c0 = 0;
    ram_00000000026d43c8 = 0;
    g_026d43d0 = 0;
    ram_00000000026d43d8 = 0;
    g_026d43e0 = 0;
    ram_00000000026d43e8 = 0;
    g_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01d840a5:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01d840a5;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  plVar7 = (int64_t *)*param_2;
  if ((g_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026d4348 = FUN_00d4fe50();
    g_026d4330 = "GNValue";
    g_026d4338 = 0x18;
    g_026d4340 = FUN_00053cb0;
    g_026d4350 = 0;
    ram_00000000026d4358 = 0;
    g_026d4360 = 0;
    ram_00000000026d4368 = 0;
    g_026d4370 = 0;
    ram_00000000026d4378 = 0;
    g_026d4380 = 0;
    ram_00000000026d4388 = 0;
    g_026d4390 = 0;
    ram_00000000026d4398 = 0;
    g_026d43a0 = 0;
    ram_00000000026d43a8 = 0;
    g_026d43b0 = 0;
    ram_00000000026d43b8 = 0;
    g_026d43c0 = 0;
    ram_00000000026d43c8 = 0;
    g_026d43d0 = 0;
    ram_00000000026d43d8 = 0;
    g_026d43e0 = 0;
    ram_00000000026d43e8 = 0;
    g_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d84167:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar7 = param_2;
    if (cVar5 == '\0') goto LAB_01d84167;
  }
  lVar2 = *plVar7;
  local_31 = (char)plVar7[1];
  if ((local_31 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar7 = local_40;
  if ((plVar1 == (int64_t *)0x0) || (lVar2 == 0)) {
LAB_01d84230:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar4 = false;
    bVar3 = false;
    plVar7 = local_40;
  }
  else {
    if (local_40 == (int64_t *)0x0) {
      local_b8 = '\0';
      local_c0 = lVar2;
      cVar5 = (**(code **)(*plVar1 + 0x50))();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') goto LAB_01d84230;
      local_b0 = *param_1;
      local_a8 = '\0';
      local_a0 = *param_2;
      local_98 = '\0';
      (**(code **)(*arg1 + 0x410))(&local_a0,&local_b0);
      plVar7 = local_40;
      if (local_50 != (int64_t *)0x0) {
        plVar7 = local_50;
        if (local_48 == '\0') {
          FUN_00d50b00();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      local_88 = '\0';
      local_90 = plVar1;
      FUN_01f995d0();
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_78 = '\0';
      local_80 = lVar2;
      FUN_01f99620();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar7 + 0x378))();
    }
    else {
      local_c8 = '\0';
      local_d0 = lVar2;
      FUN_01f993b0();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
    }
    *this_ptr = plVar7;
    *(void*)(this_ptr + 1) = 1;
    bVar4 = true;
    bVar3 = true;
  }
  if ((local_31 != '\0') && (bVar3 = bVar4, lVar2 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3 && plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}


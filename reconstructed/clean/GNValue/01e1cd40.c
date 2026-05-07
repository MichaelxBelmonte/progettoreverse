// Function: FUN_01e1cd40
// Address: 01e1cd40
// Size: 1116 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNString"

void FUN_01e1cd40(uint32_t param_1,int64_t *param_2,uint32_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  lVar1 = g_027f3348;
  plVar4 = (int64_t *)*param_2;
  local_38 = param_3;
  local_34 = param_1;
  if (g_027f3348 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01e1cf6c;
  plVar4 = (int64_t *)*arg1;
  if ((g_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar4 == (int64_t *)0x0) {
LAB_01e1cdf5:
    plVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = arg1;
    if (cVar2 == '\0') goto LAB_01e1cdf5;
  }
  if (*plVar4 != 0) {
    cVar2 = FUN_00dd6e50();
    if ((cVar2 != 'E') && (cVar2 = FUN_00dd6e50(), local_98 = g_027f3350, cVar2 != 'R')) {
      if (g_027f3350 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      (**(code **)(*this_ptr + 0x1f0))((uint8_t)local_34,&local_98,(uint8_t)local_38);
      if (local_90 == '\0') {
        return;
      }
      if (local_98 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    goto LAB_01e1cf6c;
  }
  plVar4 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (int64_t *)0x0) {
LAB_01e1cef8:
    plVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = arg1;
    if (cVar2 == '\0') goto LAB_01e1cef8;
  }
  lVar1 = g_0276cc80;
  if (*plVar4 != 0) {
    if (g_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    FUN_00d91000(1,&local_88);
    iVar3 = *(int *)(local_c8 + 0xc);
    if (local_c0 != '\0') {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027f3350;
    if (iVar3 != 4) {
      local_78 = *arg1;
      local_70 = '\0';
      if (g_027f3350 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      (**(code **)(*this_ptr + 0x1f0))((uint8_t)local_34,&local_68,(uint8_t)local_38);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 == '\0') {
        return;
      }
      if (local_78 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
LAB_01e1cf6c:
  local_58 = *arg1;
  local_50 = '\0';
  local_48 = *param_2;
  local_40 = '\0';
  FUN_00d5adf0((uint8_t)local_34,&local_48,(uint8_t)local_38);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}


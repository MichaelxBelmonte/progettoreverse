// Function: FUN_01a8a330
// Address: 01a8a330
// Size: 657 bytes
// Class: GNValue
// String references:
//   "GNValue"

int64_t * FUN_01a8a330(int64_t *param_1,uint64_t param_2,uint32_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar6;
  uint32_t uVar7;
  int64_t local_70;
  char local_68;
  uint32_t local_5c;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_70 = *param_1;
  local_68 = '\0';
  pplVar6 = &local_40;
  local_5c = param_3;
  (**(code **)(**(int64_t **)(arg1 + 0xe8) + 0x390))(param_1,&local_70);
  plVar1 = local_40;
  if ((g_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    pplVar6 = &g_02802688;
    plVar1 = g_02802688;
    cVar3 = g_02802690;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar6 = &g_02802688;
    }
    plVar1 = *pplVar6;
    cVar3 = *(char *)(pplVar6 + 1);
  }
  if (cVar3 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    lVar2 = *param_1;
    if ((char)param_1[1] == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar2;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar2;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_1 + 1) = 0;
    }
  }
  else {
    uVar5 = FUN_00dd6320();
    plVar1 = *(int64_t **)(arg1 + 0xe8);
    uVar7 = FUN_00dd67f0(uVar5 & 0xffffffff00000000);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar7 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x388))(uVar7,&local_50);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return this_ptr;
}


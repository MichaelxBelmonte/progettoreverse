// Function: FUN_00e8dcc0
// Address: 00e8dcc0
// Size: 690 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNString"
//   "%I,%I"

void FUN_00e8dcc0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  void*local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  
  plVar6 = (int64_t *)*param_2;
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
  if (plVar6 == (int64_t *)0x0) {
LAB_00e8dd0d:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar3 == '\0') goto LAB_00e8dd0d;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00e8dd34:
    uVar5 = FUN_00dd63c0();
    local_38 = 2;
    local_34 = (uint32_t)uVar5;
    local_40 = &g_024c3df0;
    local_30 = (uint32_t)(uVar5 >> 0x20);
    FUN_00d8cb40(uVar5 >> 0x20,&local_40);
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_00e8dd34;
  plVar6 = (int64_t *)*param_2;
  if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00e8ddbd;
  }
  param_2 = &g_02802688;
LAB_00e8ddbd:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    *(void*)(this_ptr + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(void*)(this_ptr + 1) = 0;
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}


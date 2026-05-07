// Function: FUN_00c72d10
// Address: 00c72d10
// Size: 727 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNString"

uint64_t FUN_00c72d10(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  uint64_t local_58;
  
  plVar5 = (int64_t *)*this_ptr;
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
  if (plVar5 == (int64_t *)0x0) {
LAB_00c72d58:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = this_ptr;
    if (cVar3 == '\0') goto LAB_00c72d58;
  }
  lVar1 = plVar5[1];
  if (((char)lVar1 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00c72d7f:
    local_58 = FUN_00dd6c90();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return local_58;
  }
  if (*plVar5 != 0) goto LAB_00c72d7f;
  plVar5 = (int64_t *)*this_ptr;
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
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c72de3;
  }
  this_ptr = &g_02802688;
LAB_00c72de3:
  lVar2 = g_027720b0;
  lVar1 = this_ptr[1];
  if (((char)lVar1 == '\0') || (*this_ptr == 0)) {
    if (*this_ptr == 0) {
      if (g_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      return g_023dcce4;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_58 = FUN_00d96b50();
  if ((char)lVar1 == '\0') {
    return local_58;
  }
  FUN_00d50b20();
  return local_58;
}


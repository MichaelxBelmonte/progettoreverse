// Function: FUN_00d92680
// Address: 00d92680
// Size: 693 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00d92680(uint64_t param_1,uint *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar7;
  int64_t local_38;
  uint8_t local_30;
  
  plVar1 = (int64_t *)*this_ptr;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
LAB_00d926cd:
    this_ptr = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00d926cd;
  }
  lVar2 = *this_ptr;
  plVar1 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00d92714;
  }
  arg1 = &g_02802688;
LAB_00d92714:
  lVar3 = *arg1;
  if (lVar2 == lVar3) {
    uVar6 = 0;
  }
  else {
    if (param_2 == (uint *)0x0) {
      uVar7 = 2;
    }
    else {
      uVar7 = *param_2;
    }
    if (lVar2 == 0) {
      uVar6 = 0xffffffff;
    }
    else if (lVar3 == 0) {
      uVar6 = 1;
    }
    else {
      if ((*(int *)(lVar2 + 0x20) == -1) && (*(int64_t *)(lVar2 + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      FUN_00e7b4e0();
      local_30 = 0;
      local_38 = lVar3;
      uVar6 = FUN_00d92950((uVar7 & 0xfffffffe) == 2 | 8,&local_38);
    }
    if ((uVar7 & 0xfffffffd) == 1) {
      if ((int)uVar6 == -1) {
        uVar6 = 1;
      }
      else if ((int)uVar6 == 1) {
        uVar6 = 0xffffffff;
      }
    }
  }
  return uVar6;
}


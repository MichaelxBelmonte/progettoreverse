// Function: FUN_00d204f0
// Address: 00d204f0
// Size: 671 bytes
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


uint32_t FUN_00d204f0(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  uint32_t uVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar3 = 0;
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    return 0;
  }
  local_70 = *arg1;
  local_68 = '\0';
  pplVar5 = &local_40;
  FUN_000175c0(param_1,&local_70);
  plVar1 = local_40;
  uVar6 = FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_00d20562:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00d20562;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    uVar3 = FUN_00d45870();
    FUN_00d50b20();
    return uVar3;
  }
  local_60 = *arg1;
  local_58 = '\0';
  pplVar5 = &local_40;
  uVar6 = FUN_000175c0(uVar6,&local_60);
  plVar1 = local_40;
  if ((g_026fd0c0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_01, iVar4 != 0)) {
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
    uVar6 = ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da_00;
    if (cVar2 != '\0') goto LAB_00d2062c;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_00d2062c:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    local_50 = *arg1;
    local_48 = '\0';
    FUN_000175c0(uVar6,&local_50);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar3 = FUN_00d8d560();
    FUN_00d50b20();
  }
  return uVar3;
}


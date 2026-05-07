// Function: FUN_00d1f2e0
// Address: 00d1f2e0
// Size: 527 bytes
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


uint64_t FUN_00d1f2e0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  void*arg1;
  uint64_t local_58;
  uint8_t local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  int64_t *local_28;
  char local_20;
  
  local_58 = *arg1;
  local_50 = 0;
  FUN_00d1c6d0(0,&local_58);
  local_20 = local_40 != '\0';
  local_28 = local_48;
  if ((bool)local_20) {
    local_40 = '\0';
  }
  FUN_00053ac0();
  plVar1 = g_02802688;
  if (local_48 != (int64_t *)0x0) {
    (**(code **)(*local_48 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = g_02802688;
    if (cVar2 != '\0') {
      plVar1 = local_28;
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    uVar4 = FUN_00dd63c0();
    goto LAB_00d1f389;
  }
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
  if (local_48 == (int64_t *)0x0) {
LAB_00d1f3e7:
    plVar1 = g_02802688;
  }
  else {
    (**(code **)(*local_48 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = local_28;
    if (cVar2 == '\0') goto LAB_00d1f3e7;
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar4 = FUN_00e7b4e0();
  }
  else {
    local_30 = '\0';
    local_38 = plVar1;
    uVar4 = FUN_00d97540();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00d1f389:
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar4;
}


// Function: FUN_00d1e2d0
// Address: 00d1e2d0
// Size: 516 bytes
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


uint32_t FUN_00d1e2d0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*arg1;
  uint32_t uVar4;
  uint64_t local_50;
  uint8_t local_48;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  uint32_t local_24;
  char local_20;
  
  local_50 = *arg1;
  local_48 = 0;
  FUN_00d1c6d0(0,&local_50);
  local_20 = local_38 != '\0';
  local_30 = local_40;
  if ((bool)local_20) {
    local_38 = '\0';
  }
  FUN_00053ac0();
  plVar1 = g_02802688;
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*local_40 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = g_02802688;
    if (cVar2 != '\0') {
      plVar1 = local_30;
    }
  }
  if (plVar1 == (int64_t *)0x0) {
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
    plVar1 = g_02802688;
    if (local_40 != (int64_t *)0x0) {
      (**(code **)(*local_40 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar1 = g_02802688;
      if (cVar2 != '\0') {
        plVar1 = local_30;
      }
    }
    if (plVar1 == (int64_t *)0x0) {
      local_24 = 0;
      local_40 = local_30;
    }
    else {
      uVar4 = FUN_00d8d7b0();
      local_24 = 0;
      local_40 = local_30;
      if (plVar1 != (int64_t *)0x0) {
        local_24 = uVar4;
      }
    }
  }
  else {
    local_24 = FUN_00d459e0();
  }
  if ((local_20 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return local_24;
}


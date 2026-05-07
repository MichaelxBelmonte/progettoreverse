// Function: FUN_00d1eda0
// Address: 00d1eda0
// Size: 548 bytes
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


uint64_t FUN_00d1eda0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*arg1;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint64_t local_68;
  uint8_t local_60;
  uint64_t local_58;
  uint64_t uStack_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  int64_t *local_28;
  char local_20;
  
  local_68 = *arg1;
  local_60 = 0;
  FUN_00d1c6d0(0,&local_68);
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
    if (local_48 != (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar1 = g_02802688;
      if (cVar2 != '\0') {
        plVar1 = local_28;
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      local_30 = '\0';
      local_38 = plVar1;
      local_58 = FUN_00d96b50();
      uStack_50 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_28;
      if (plVar1 != (int64_t *)0x0) goto joined_r0x00d1eeeb;
    }
    uStack_50 = 0;
    local_58 = g_023dcce4;
    local_48 = local_28;
  }
  else {
    local_58 = FUN_00dd6c90();
    uStack_50 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  }
joined_r0x00d1eeeb:
  if ((local_20 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return local_58;
}


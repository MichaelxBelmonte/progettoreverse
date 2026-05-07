// Function: FUN_00d1e780
// Address: 00d1e780
// Size: 557 bytes
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


uint64_t FUN_00d1e780(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void*arg1;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint64_t local_78;
  uint8_t local_70;
  uint64_t local_68;
  uint64_t uStack_60;
  uint64_t local_58;
  uint64_t uStack_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  int64_t *local_28;
  char local_20;
  
  uVar6 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar5 = (uint32_t)param_2;
  local_78 = *arg1;
  local_70 = 0;
  FUN_00d1c6d0(0,&local_78);
  local_20 = local_40 != '\0';
  local_28 = local_48;
  if ((bool)local_20) {
    local_40 = '\0';
  }
  FUN_00053ac0();
  plVar1 = g_02802688;
  if (local_48 != (int64_t *)0x0) {
    (**(code **)(*local_48 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar1 = g_02802688;
    if (cVar3 != '\0') {
      plVar1 = local_28;
    }
  }
  if (plVar1 == (int64_t *)0x0) {
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
    plVar2 = g_02802688;
    plVar1 = local_38;
    if (local_48 != (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar2 = g_02802688;
      plVar1 = local_38;
      if (cVar3 != '\0') {
        plVar2 = local_28;
      }
    }
    local_38 = plVar2;
    if (local_38 == (int64_t *)0x0) {
      uStack_60 = 0;
      uStack_50 = 0;
      local_68 = g_023dccec;
      local_58 = g_023dccf4;
      local_38 = plVar1;
    }
    else {
      local_30 = '\0';
      local_68 = FUN_00d96410();
      uStack_60 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
      local_58 = CONCAT44(uVar6,uVar5);
      uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68 = FUN_00dd6ab0();
    uStack_60 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    local_58 = CONCAT44(uVar6,uVar5);
    uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
  }
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return local_68;
}


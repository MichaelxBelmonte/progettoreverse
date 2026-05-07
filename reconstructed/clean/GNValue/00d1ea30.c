// Function: FUN_00d1ea30
// Address: 00d1ea30
// Size: 737 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNString"

uint64_t FUN_00d1ea30(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void*arg1;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint64_t local_78;
  uint8_t local_70;
  uint64_t local_68;
  uint64_t uStack_60;
  uint64_t local_58;
  uint64_t uStack_50;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  int64_t *local_20;
  char local_18;
  
  uVar7 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar6 = (uint32_t)param_2;
  local_78 = *arg1;
  local_70 = 0;
  FUN_00d1c6d0(0,&local_78);
  local_18 = local_38 != '\0';
  local_20 = local_40;
  if ((bool)local_18) {
    local_38 = '\0';
  }
  if ((g_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  plVar1 = local_20;
  plVar2 = g_02802688;
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*local_40 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar1 = local_20;
    plVar2 = g_02802688;
    if (cVar4 != '\0') {
      plVar2 = local_20;
    }
  }
  local_20 = plVar1;
  if (plVar2 == (int64_t *)0x0) {
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
    plVar3 = g_02802688;
    plVar2 = local_30;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar3 = g_02802688;
      plVar2 = local_30;
      if (cVar4 != '\0') {
        plVar3 = local_20;
      }
    }
    local_30 = plVar3;
    if (local_30 == (int64_t *)0x0) {
      uStack_60 = 0;
      uStack_50 = 0;
      local_68 = g_023dcd0c;
      local_58 = g_023dcd14;
      local_30 = plVar2;
    }
    else {
      local_28 = '\0';
      local_68 = FUN_00d967b0();
      uStack_60 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
      local_58 = CONCAT44(uVar7,uVar6);
      uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68 = FUN_00dd6b50();
    uStack_60 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    local_58 = CONCAT44(uVar7,uVar6);
    uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
  }
  if ((local_18 != '\0') && (local_20 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return local_68;
}


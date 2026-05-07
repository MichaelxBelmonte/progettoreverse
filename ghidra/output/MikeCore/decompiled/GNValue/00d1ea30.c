// Function: FUN_00d1ea30
// Address: 00d1ea30
// Size: 737 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00d1ea8b) */
/* WARNING: Removing unreachable block (ram,0x00d1ea90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d1ea30(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  longlong *local_20;
  char local_18;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  local_78 = *unaff_RSI;
  local_70 = 0;
  FUN_00d1c6d0(0,&local_78);
  local_18 = local_38 != '\0';
  local_20 = local_40;
  if ((bool)local_18) {
    local_38 = '\0';
  }
  if ((DAT_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d4348 = FUN_00d4fe50();
    _DAT_026d4330 = "GNValue";
    _DAT_026d4338 = 0x18;
    _DAT_026d4340 = FUN_00053cb0;
    _DAT_026d4350 = 0;
    uRam00000000026d4358 = 0;
    _DAT_026d4360 = 0;
    uRam00000000026d4368 = 0;
    _DAT_026d4370 = 0;
    uRam00000000026d4378 = 0;
    _DAT_026d4380 = 0;
    uRam00000000026d4388 = 0;
    _DAT_026d4390 = 0;
    uRam00000000026d4398 = 0;
    _DAT_026d43a0 = 0;
    uRam00000000026d43a8 = 0;
    _DAT_026d43b0 = 0;
    uRam00000000026d43b8 = 0;
    _DAT_026d43c0 = 0;
    uRam00000000026d43c8 = 0;
    _DAT_026d43d0 = 0;
    uRam00000000026d43d8 = 0;
    _DAT_026d43e0 = 0;
    uRam00000000026d43e8 = 0;
    _DAT_026d43f0 = 0;
    ___cxa_guard_release();
  }
  plVar1 = local_20;
  plVar2 = DAT_02802688;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar1 = local_20;
    plVar2 = DAT_02802688;
    if (cVar4 != '\0') {
      plVar2 = local_20;
    }
  }
  local_20 = plVar1;
  if (plVar2 == (longlong *)0x0) {
    if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e60 = 0;
      uRam00000000026d5e68 = 0;
      _DAT_026d5e70 = 0;
      uRam00000000026d5e78 = 0;
      _DAT_026d5e80 = 0;
      uRam00000000026d5e88 = 0;
      _DAT_026d5e90 = 0;
      uRam00000000026d5e98 = 0;
      _DAT_026d5ea0 = 0;
      uRam00000000026d5ea8 = 0;
      _DAT_026d5eb0 = 0;
      uRam00000000026d5eb8 = 0;
      _DAT_026d5ec0 = 0;
      uRam00000000026d5ec8 = 0;
      _DAT_026d5ed0 = 0;
      uRam00000000026d5ed8 = 0;
      _DAT_026d5ee0 = 0;
      uRam00000000026d5ee8 = 0;
      _DAT_026d5ef0 = 0;
      uRam00000000026d5ef8 = 0;
      _DAT_026d5f00 = 0;
      ___cxa_guard_release();
    }
    plVar3 = DAT_02802688;
    plVar2 = local_30;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar3 = DAT_02802688;
      plVar2 = local_30;
      if (cVar4 != '\0') {
        plVar3 = local_20;
      }
    }
    local_30 = plVar3;
    if (local_30 == (longlong *)0x0) {
      uStack_60 = 0;
      uStack_50 = 0;
      local_68 = DAT_023dcd0c;
      local_58 = DAT_023dcd14;
      local_30 = plVar2;
    }
    else {
      local_28 = '\0';
      local_68 = FUN_00d967b0();
      uStack_60 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
      local_58 = CONCAT44(uVar7,uVar6);
      uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
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
  if ((local_18 != '\0') && (local_20 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return local_68;
}



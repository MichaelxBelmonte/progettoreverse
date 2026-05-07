// Function: FUN_00d1e780
// Address: 00d1e780
// Size: 557 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00d1e7dd) */
/* WARNING: Removing unreachable block (ram,0x00d1e7e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d1e780(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *unaff_RSI;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  longlong *local_28;
  char local_20;
  
  uVar6 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (undefined4)param_2;
  local_78 = *unaff_RSI;
  local_70 = 0;
  FUN_00d1c6d0(0,&local_78);
  local_20 = local_40 != '\0';
  local_28 = local_48;
  if ((bool)local_20) {
    local_40 = '\0';
  }
  FUN_00053ac0();
  plVar1 = DAT_02802688;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar1 = DAT_02802688;
    if (cVar3 != '\0') {
      plVar1 = local_28;
    }
  }
  if (plVar1 == (longlong *)0x0) {
    if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    plVar2 = DAT_02802688;
    plVar1 = local_38;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar2 = DAT_02802688;
      plVar1 = local_38;
      if (cVar3 != '\0') {
        plVar2 = local_28;
      }
    }
    local_38 = plVar2;
    if (local_38 == (longlong *)0x0) {
      uStack_60 = 0;
      uStack_50 = 0;
      local_68 = DAT_023dccec;
      local_58 = DAT_023dccf4;
      local_38 = plVar1;
    }
    else {
      local_30 = '\0';
      local_68 = FUN_00d96410();
      uStack_60 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
      local_58 = CONCAT44(uVar6,uVar5);
      uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
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
  if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return local_68;
}



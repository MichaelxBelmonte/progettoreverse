// Function: FUN_01deec00
// Address: 01deec00
// Size: 562 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01deec00(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong **pplVar7;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  pplVar7 = &local_88;
  local_34 = param_2;
  FUN_01db9a80();
  plVar6 = local_88;
  if ((DAT_026f20e8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026f2038 = FUN_001ba850();
    _DAT_026f2020 = "GNTableColumnAssoc";
    _DAT_026f2028 = 0x58;
    _DAT_026f2030 = FUN_001f28d0;
    _DAT_026f2040 = 0;
    uRam00000000026f2048 = 0;
    _DAT_026f2050 = 0;
    uRam00000000026f2058 = 0;
    _DAT_026f2060 = 0;
    uRam00000000026f2068 = 0;
    _DAT_026f2070 = 0;
    uRam00000000026f2078 = 0;
    _DAT_026f2080 = 0;
    uRam00000000026f2088 = 0;
    _DAT_026f2090 = 0;
    uRam00000000026f2098 = 0;
    _DAT_026f20a0 = 0;
    uRam00000000026f20a8 = 0;
    _DAT_026f20b0 = 0;
    uRam00000000026f20b8 = 0;
    _DAT_026f20c0 = 0;
    uRam00000000026f20c8 = 0;
    _DAT_026f20d0 = 0;
    uRam00000000026f20d8 = 0;
    _DAT_026f20e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01deec69;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_01deec69:
  plVar6 = *pplVar7;
  if (plVar6 == (longlong *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar6 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_80 != '\0') && (bVar1 = bVar2, local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    local_58 = *unaff_RSI;
    local_50 = '\0';
    local_48 = *param_1;
    local_40 = '\0';
    uVar4 = FUN_01dc7f90(&local_48,local_34);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = *unaff_RSI;
    local_70 = '\0';
    local_68 = *param_1;
    local_60 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0x530))(&local_68,local_34);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}



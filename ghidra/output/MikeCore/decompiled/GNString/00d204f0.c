// Function: FUN_00d204f0
// Address: 00d204f0
// Size: 671 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00d204f0(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar3 = 0;
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    return 0;
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  pplVar5 = &local_40;
  FUN_000175c0(param_1,&local_70);
  plVar1 = local_40;
  uVar6 = FUN_00053ac0();
  if (plVar1 == (longlong *)0x0) {
LAB_00d20562:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00d20562;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    uVar3 = FUN_00d45870();
    FUN_00d50b20();
    return uVar3;
  }
  local_60 = *unaff_RSI;
  local_58 = '\0';
  pplVar5 = &local_40;
  uVar6 = FUN_000175c0(uVar6,&local_60);
  plVar1 = local_40;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_01, iVar4 != 0)) {
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
    uVar6 = ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da_00;
    if (cVar2 != '\0') goto LAB_00d2062c;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_00d2062c:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    local_50 = *unaff_RSI;
    local_48 = '\0';
    FUN_000175c0(uVar6,&local_50);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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



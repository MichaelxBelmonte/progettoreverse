// Function: FUN_01501fc0
// Address: 01501fc0
// Size: 1121 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01501fc0(undefined4 param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *in_RCX;
  longlong **pplVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  lVar3 = DAT_0270b838;
  local_58 = in_RCX;
  if (DAT_0270b838 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_88 = lVar3;
  local_80 = '\x01';
  pplVar8 = &local_40;
  FUN_000175c0(param_1,&local_88);
  plVar1 = local_40;
  uVar10 = FUN_00053ac0();
  if (plVar1 == (longlong *)0x0) {
LAB_01502041:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar5 == '\0') goto LAB_01502041;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  local_50 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00d45ad0();
    uVar10 = extraout_XMM0_Da_00;
  }
  *param_2 = uVar6;
  plVar1 = DAT_027c2530;
  if (DAT_027c2530 != (longlong *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  local_78 = plVar1;
  local_70 = '\x01';
  pplVar8 = &local_40;
  FUN_000175c0(uVar10,&local_78);
  plVar1 = local_40;
  if (DAT_026fd0c0 == '\0') {
    iVar7 = ___cxa_guard_acquire();
    if (iVar7 != 0) {
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
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0150210e:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0150210e;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_027c2530;
  local_48 = plVar1;
  if (DAT_027c2530 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar2;
  local_38 = '\0';
  uVar10 = FUN_00ca13a0();
  plVar4 = local_58;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar2 = (longlong *)*plVar4;
    lVar3 = plVar4[1];
    if (plVar2 == plVar1) {
      if (((char)lVar3 != '\0') || (plVar1 == (longlong *)0x0)) goto LAB_01502202;
      uVar10 = FUN_00d50b00();
    }
    else {
      if (plVar1 != (longlong *)0x0) {
        uVar10 = FUN_00d50b00();
      }
      *local_58 = (longlong)plVar1;
      if (((char)lVar3 != '\0') && (plVar2 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
    }
    *(undefined1 *)(local_58 + 1) = 1;
  }
LAB_01502202:
  plVar1 = DAT_02709968;
  if (DAT_02709968 != (longlong *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  local_68 = plVar1;
  local_60 = '\x01';
  pplVar8 = &local_40;
  FUN_000175c0(uVar10,&local_68);
  plVar1 = local_40;
  FUN_002771e0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_01502267;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_01502267:
  plVar2 = local_48;
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = DAT_02709968;
  if (DAT_02709968 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar4;
  local_38 = '\0';
  FUN_00ca13a0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (*unaff_RSI != 0) {
    lVar3 = *(longlong *)(*unaff_RSI + 0x10);
    for (lVar9 = 0; lVar9 < *(int *)(lVar3 + 0xc); lVar9 = lVar9 + 1) {
      FUN_00d50130();
    }
  }
  *unaff_RDI = (longlong)plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



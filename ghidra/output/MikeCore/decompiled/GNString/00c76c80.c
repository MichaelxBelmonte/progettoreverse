// Function: FUN_00c76c80
// Address: 00c76c80
// Size: 1463 bytes
// Class: GNString
// String references:
//   "%I is not a valid CTypeID."
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c76c80(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_40;
  uint local_38;
  int local_34;
  
  lVar2 = DAT_02772178;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_02772178 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  pplVar7 = &local_40;
  uVar8 = (**(code **)(*plVar1 + 0x578))(param_1,&local_a8);
  plVar1 = local_40;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar5 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00c76d0f:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_00c76d0f;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    cVar3 = '\0';
    plVar1 = (longlong *)*unaff_RSI;
    local_88 = DAT_02772180;
  }
  else {
    local_90 = '\0';
    local_98 = plVar1;
    cVar3 = FUN_00d97c90();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = FUN_00d50b20();
    plVar1 = (longlong *)*unaff_RSI;
    local_88 = DAT_02772180;
  }
  DAT_02772180 = local_88;
  if (local_88 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar7 = &local_40;
  (**(code **)(*plVar1 + 0x578))(uVar8,&local_88);
  plVar1 = local_40;
  uVar8 = FUN_00053ac0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_00;
    if (cVar4 != '\0') goto LAB_00c76e14;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_00c76e14:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    cVar3 = FUN_00d45870();
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027815a8;
  if (cVar3 != '\0') {
    switch((int)cVar3) {
    case 0x2a:
    case 0x43:
    case 0x45:
    case 0x49:
    case 0x50:
    case 0x52:
    case 0x53:
    case 0x55:
    case 0x62:
    case 99:
    case 100:
    case 0x66:
    case 0x69:
    case 0x6c:
    case 0x71:
    case 0x73:
      goto switchD_00c76ea9_caseD_2a;
    default:
      if (DAT_027815a8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = '\x01';
      local_38 = 1;
      local_40 = &DAT_024cc6f0;
      local_34 = (int)cVar3;
      FUN_00cc7b40(uVar8,&local_40);
      if (local_60 == '\0') {
        return;
      }
      if (local_68 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  local_58 = *unaff_RSI;
  local_50 = '\0';
  FUN_00d61ea0();
  if (local_50 == '\0') {
    return;
  }
  if (local_58 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
switchD_00c76ea9_caseD_2a:
  if (*(longlong *)(unaff_RDI + 0x58) != 0) {
    *(undefined8 *)(unaff_RDI + 0x58) = 0;
    FUN_00d50b20();
  }
  uVar8 = FUN_00c7a4d0();
  plVar1 = *(longlong **)(unaff_RDI + 0x50);
  plVar6 = plVar1;
  if (plVar1 != local_40) {
    if ((char)local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_00c76eee;
      }
      uVar8 = FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x50);
      *(longlong **)(unaff_RDI + 0x50) = local_40;
      plVar6 = local_40;
    }
    else {
      local_38 = local_38 & 0xffffff00;
      plVar6 = local_40;
LAB_00c76eee:
      *(longlong **)(unaff_RDI + 0x50) = plVar6;
    }
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b20();
      plVar6 = local_40;
    }
  }
  if (((char)local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_02704000;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_02704000 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar7 = &local_40;
  (**(code **)(*plVar1 + 0x578))(uVar8,&local_78);
  plVar1 = local_40;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c76fef;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_00c76fef:
  plVar6 = *(longlong **)(unaff_RDI + 0x10);
  plVar1 = *pplVar7;
  if (plVar6 != plVar1) {
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar1 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0x10) = 0;
      }
      else {
        FUN_00d50b00();
        plVar6 = *(longlong **)(unaff_RDI + 0x10);
        *(longlong **)(unaff_RDI + 0x10) = *pplVar7;
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
      *(longlong **)(unaff_RDI + 0x10) = plVar1;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// Function: FUN_00643690
// Address: 00643690
// Size: 1060 bytes
// Class: MDProjectInsp
// String references:
//   "MDProjectInsp"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00643690(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong **pplVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    if (*(longlong *)(unaff_RDI + 0xc0) == 0) {
      return;
    }
    iVar4 = FUN_00643ea0();
    uVar7 = extraout_XMM0_Da_00;
    lVar2 = DAT_026fce40;
    if (iVar4 == -1) {
      FUN_006447a0();
      uVar7 = FUN_00643150();
      lVar2 = DAT_026fce40;
    }
    DAT_026fce40 = lVar2;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_38 = '\x01';
    pplVar6 = &local_30;
    local_40 = lVar2;
    FUN_0009d910(uVar7,&local_40);
    plVar5 = local_30;
    if ((DAT_0271db30 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026fcf28 = FUN_00018750();
      _DAT_026fcf10 = "MDProjectInsp";
      _DAT_026fcf18 = 0x160;
      _DAT_026fcf20 = FUN_002d5a20;
      _DAT_026fcf30 = 0;
      uRam00000000026fcf38 = 0;
      _DAT_026fcf40 = 0;
      _DAT_026fcfb8 = 0;
      uRam00000000026fcfc0 = 0;
      _DAT_026fcfc8 = 0;
      DAT_026fcfca = 1;
      _DAT_026fcf48 = 0;
      uRam00000000026fcf50 = 0;
      _DAT_026fcf58 = 0;
      uRam00000000026fcf60 = 0;
      _DAT_026fcf68 = 0;
      uRam00000000026fcf70 = 0;
      _DAT_026fcf78 = 0;
      uRam00000000026fcf80 = 0;
      _DAT_026fcf88 = 0;
      uRam00000000026fcf90 = 0;
      _DAT_026fcf98 = 0;
      uRam00000000026fcfa0 = 0;
      _DAT_026fcfa8 = 0;
      uRam00000000026fcfb0 = 0;
      DAT_026fcfd3 = 0;
      _DAT_026fcfcb = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
LAB_0064385f:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0064385f;
    }
    plVar5 = *pplVar6;
    if (plVar5 == (longlong *)0x0) {
      bVar1 = false;
      plVar5 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar6 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      bVar1 = true;
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_006438fe;
  }
  if (*(longlong *)(unaff_RDI + 200) == 0) {
    return;
  }
  iVar4 = FUN_00644650();
  uVar7 = extraout_XMM0_Da;
  lVar2 = DAT_026fce40;
  if (iVar4 == -1) {
    FUN_006449a0();
    uVar7 = FUN_00643150();
    lVar2 = DAT_026fce40;
  }
  DAT_026fce40 = lVar2;
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = '\x01';
  pplVar6 = &local_30;
  local_50 = lVar2;
  FUN_0009d910(uVar7,&local_50);
  plVar5 = local_30;
  if ((DAT_0271db30 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026fcf28 = FUN_00018750();
    _DAT_026fcf10 = "MDProjectInsp";
    _DAT_026fcf18 = 0x160;
    _DAT_026fcf20 = FUN_002d5a20;
    _DAT_026fcf30 = 0;
    uRam00000000026fcf38 = 0;
    _DAT_026fcf40 = 0;
    _DAT_026fcfb8 = 0;
    uRam00000000026fcfc0 = 0;
    _DAT_026fcfc8 = 0;
    DAT_026fcfca = 1;
    _DAT_026fcf48 = 0;
    uRam00000000026fcf50 = 0;
    _DAT_026fcf58 = 0;
    uRam00000000026fcf60 = 0;
    _DAT_026fcf68 = 0;
    uRam00000000026fcf70 = 0;
    _DAT_026fcf78 = 0;
    uRam00000000026fcf80 = 0;
    _DAT_026fcf88 = 0;
    uRam00000000026fcf90 = 0;
    _DAT_026fcf98 = 0;
    uRam00000000026fcfa0 = 0;
    _DAT_026fcfa8 = 0;
    uRam00000000026fcfb0 = 0;
    DAT_026fcfd3 = 0;
    _DAT_026fcfcb = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_006437b9:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_006437b9;
  }
  plVar5 = *pplVar6;
  if (plVar5 == (longlong *)0x0) {
    bVar1 = false;
    plVar5 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar6 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
    }
    bVar1 = true;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_006438fe:
  if ((plVar5 != (longlong *)0x0) && (FUN_002d2180(), bVar1)) {
    FUN_00d50b20();
  }
  return;
}



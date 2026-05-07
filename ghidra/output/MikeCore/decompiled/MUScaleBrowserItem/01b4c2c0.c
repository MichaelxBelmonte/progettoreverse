// Function: FUN_01b4c2c0
// Address: 01b4c2c0
// Size: 886 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b4c2c0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((DAT_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b4c31a:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b4c31a;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x970))();
  plVar7 = local_40;
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b4c46b;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01b4c46b;
  uVar5 = FUN_00d95590();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  FUN_00d97f20(uVar5,&local_60);
  plVar8 = local_40;
  plVar9 = plVar7;
  if (plVar7 == local_40) {
joined_r0x01b4c410:
    plVar8 = plVar9;
    if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar9 = plVar8;
      plVar7 = local_40;
      goto joined_r0x01b4c410;
    }
    FUN_00d50b20();
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01b4c46b:
  plVar7 = *(longlong **)(unaff_RDI + 0xb8);
  if ((plVar8 == (longlong *)0x0) || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) {
    bVar2 = false;
    uVar5 = 0;
  }
  else if (plVar1 == (longlong *)0x0) {
    uVar5 = 1;
    bVar2 = false;
  }
  else {
    FUN_01aa3f90();
    uVar5 = (**(code **)(*local_40 + 0x3a0))();
    bVar2 = true;
  }
  (**(code **)(*plVar7 + 0x998))(uVar5);
  if (((bVar2) && (local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0xb0);
    plVar9 = (longlong *)0x0;
  }
  else {
    FUN_01aa3f90();
    plVar9 = local_50;
    if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    plVar7 = *(longlong **)(unaff_RDI + 0xb0);
    (**(code **)(*plVar9 + 0x3a0))();
  }
  (**(code **)(*plVar7 + 0x998))();
  if ((plVar1 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



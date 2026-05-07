// Function: FUN_00bfc1b0
// Address: 00bfc1b0
// Size: 921 bytes
// Class: GNOverloudParametricEQView
// String references:
//   "GNOverloudParametricEQView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfc1b0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong **pplVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  uVar10 = FUN_01ccad60();
  plVar1 = local_40;
  if ((DAT_0276f570 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar7 != 0)) {
    _DAT_0276f4c0 = FUN_0006d940();
    _DAT_0276f4a8 = "GNOverloudParametricEQView";
    _DAT_0276f4b0 = 0x140;
    _DAT_0276f4b8 = FUN_00c43ad0;
    _DAT_0276f4c8 = 0;
    uRam000000000276f4d0 = 0;
    _DAT_0276f4d8 = 0;
    uRam000000000276f4e0 = 0;
    _DAT_0276f4e8 = 0;
    uRam000000000276f4f0 = 0;
    _DAT_0276f4f8 = 0;
    uRam000000000276f500 = 0;
    _DAT_0276f508 = 0;
    uRam000000000276f510 = 0;
    _DAT_0276f518 = 0;
    uRam000000000276f520 = 0;
    _DAT_0276f528 = 0;
    uRam000000000276f530 = 0;
    _DAT_0276f538 = 0;
    uRam000000000276f540 = 0;
    _DAT_0276f548 = 0;
    uRam000000000276f550 = 0;
    _DAT_0276f558 = 0;
    uRam000000000276f560 = 0;
    _DAT_0276f568 = 0;
    uVar10 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00bfc209:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar6 == '\0') goto LAB_00bfc209;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar4 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_50 = lVar4;
  local_48 = '\x01';
  FUN_01ccaae0(uVar10,&local_50);
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d26010();
  if (local_40 == (longlong *)0x0) {
    FUN_00c40480();
LAB_00bfc321:
    bVar3 = true;
  }
  else {
    plVar8 = (longlong *)(**(code **)(*local_40 + 0x10))();
    FUN_00c40480();
    if (plVar8 == (longlong *)0x0) goto LAB_00bfc321;
    (**(code **)(*plVar8 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00bfc321;
    FUN_00d50b00();
    bVar3 = false;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  if (bVar3) goto LAB_00bfc476;
  cVar6 = FUN_00b378e0();
  if (cVar6 == '\0') {
    FUN_00bfc770();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00bfc395;
      }
      if (plVar1[0x27] != 0) {
        plVar1[0x27] = 0;
LAB_00bfc403:
        FUN_00d50b20();
      }
    }
    else {
LAB_00bfc395:
      plVar8 = (longlong *)plVar1[0x27];
      if (plVar8 != local_40) {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar1[0x27] = (longlong)local_40;
        if (plVar8 != (longlong *)0x0) goto LAB_00bfc403;
      }
    }
    (**(code **)(*plVar1 + 0x620))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00b37610();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00bfc3c9;
      }
      if (plVar1[0x27] != 0) {
        plVar1[0x27] = 0;
        goto LAB_00bfc439;
      }
    }
    else {
      local_38 = '\0';
LAB_00bfc3c9:
      plVar2 = (longlong *)plVar1[0x27];
      if (plVar2 != plVar8) {
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar1[0x27] = (longlong)plVar8;
        if (plVar2 != (longlong *)0x0) {
LAB_00bfc439:
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*plVar1 + 0x620))();
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00bfc476:
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



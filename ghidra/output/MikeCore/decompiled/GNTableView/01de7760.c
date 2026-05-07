// Function: FUN_01de7760
// Address: 01de7760
// Size: 709 bytes
// Class: GNTableView
// String references:
//   "GNTableView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de7760(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong unaff_RDI;
  longlong *local_60;
  char local_58;
  
  FUN_01ccad60();
  plVar1 = local_60;
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_01de7968;
  pplVar5 = &local_60;
  FUN_01ccad60();
  plVar1 = local_60;
  if ((DAT_026e56b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026fd498 = FUN_0006d940();
    _DAT_026fd480 = "GNTableView";
    _DAT_026fd488 = 0x2a0;
    _DAT_026fd490 = FUN_00193920;
    _DAT_026fd4a0 = 0;
    uRam00000000026fd4a8 = 0;
    _DAT_026fd4b0 = 0;
    uRam00000000026fd4b8 = 0;
    _DAT_026fd4c0 = 0;
    uRam00000000026fd4c8 = 0;
    _DAT_026fd4d0 = 0;
    uRam00000000026fd4d8 = 0;
    _DAT_026fd4e0 = 0;
    uRam00000000026fd4e8 = 0;
    _DAT_026fd4f0 = 0;
    uRam00000000026fd4f8 = 0;
    _DAT_026fd500 = 0;
    uRam00000000026fd508 = 0;
    _DAT_026fd510 = 0;
    uRam00000000026fd518 = 0;
    _DAT_026fd520 = 0;
    uRam00000000026fd528 = 0;
    _DAT_026fd530 = 0;
    uRam00000000026fd538 = 0;
    _DAT_026fd540 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01de77e1:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01de77e1;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf190();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f2e58;
  if (DAT_027f2e58 != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf130();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x7f8))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x10))();
  FUN_00d50b00();
  FUN_01de09b0();
  if ((longlong *)(unaff_RDI + 0x48) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x50) + 0x10))();
  FUN_00d50b00();
  FUN_01de09c0();
  if ((longlong *)(unaff_RDI + 0x50) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x50) + 0x10))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01de7968:
  FUN_01cc9ce0();
  return;
}



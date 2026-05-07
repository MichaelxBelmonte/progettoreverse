// Function: FUN_01be82b0
// Address: 01be82b0
// Size: 1080 bytes
// Class: MUMultiTrackItem
// String references:
//   "MUMultiTrackItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01be82b0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  
  FUN_01e3b710();
  *(undefined4 *)((longlong)unaff_RDI + 0x204) = 0x43480000;
  *(undefined1 *)((longlong)unaff_RDI + 0x20c) = 1;
  (**(code **)(*unaff_RDI + 0x4d0))(0,_DAT_0241e200);
  (**(code **)(*unaff_RDI + 0x570))();
  (**(code **)(*unaff_RDI + 0x558))();
  plVar3 = (longlong *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x2a];
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2a] = (longlong)plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((DAT_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d7a88 = FUN_00d4fe50();
    _DAT_026d7a70 = "MUMultiTrackItem";
    _DAT_026d7a78 = 0x60;
    _DAT_026d7a80 = FUN_0006eae0;
    _DAT_026d7a90 = 0;
    uRam00000000026d7a98 = 0;
    _DAT_026d7aa0 = 0;
    _DAT_026d7b18 = 0;
    uRam00000000026d7b20 = 0;
    _DAT_026d7b28 = 0;
    DAT_026d7b2a = 1;
    _DAT_026d7aa8 = 0;
    uRam00000000026d7ab0 = 0;
    _DAT_026d7ab8 = 0;
    uRam00000000026d7ac0 = 0;
    _DAT_026d7ac8 = 0;
    uRam00000000026d7ad0 = 0;
    _DAT_026d7ad8 = 0;
    uRam00000000026d7ae0 = 0;
    _DAT_026d7ae8 = 0;
    uRam00000000026d7af0 = 0;
    _DAT_026d7af8 = 0;
    uRam00000000026d7b00 = 0;
    _DAT_026d7b08 = 0;
    uRam00000000026d7b10 = 0;
    DAT_026d7b33 = 0;
    _DAT_026d7b2b = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01d2d3a0();
  FUN_01d2d390();
  plVar1 = unaff_RDI + 0x27;
  (**(code **)(unaff_RDI[0x27] + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar5 + 0x18))();
  plVar3 = (longlong *)unaff_RDI[0x2b];
  if (plVar3 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2b] = (longlong)plVar5;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((DAT_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d7a88 = FUN_00d4fe50();
    _DAT_026d7a70 = "MUMultiTrackItem";
    _DAT_026d7a78 = 0x60;
    _DAT_026d7a80 = FUN_0006eae0;
    _DAT_026d7a90 = 0;
    uRam00000000026d7a98 = 0;
    _DAT_026d7aa0 = 0;
    _DAT_026d7b18 = 0;
    uRam00000000026d7b20 = 0;
    _DAT_026d7b28 = 0;
    DAT_026d7b2a = 1;
    _DAT_026d7aa8 = 0;
    uRam00000000026d7ab0 = 0;
    _DAT_026d7ab8 = 0;
    uRam00000000026d7ac0 = 0;
    _DAT_026d7ac8 = 0;
    uRam00000000026d7ad0 = 0;
    _DAT_026d7ad8 = 0;
    uRam00000000026d7ae0 = 0;
    _DAT_026d7ae8 = 0;
    uRam00000000026d7af0 = 0;
    _DAT_026d7af8 = 0;
    uRam00000000026d7b00 = 0;
    _DAT_026d7b08 = 0;
    uRam00000000026d7b10 = 0;
    DAT_026d7b33 = 0;
    _DAT_026d7b2b = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01d2d3a0();
  FUN_01d2d390();
  (**(code **)(unaff_RDI[0x27] + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x3d) = 1;
  return;
}



// Function: FUN_01c33700
// Address: 01c33700
// Size: 507 bytes
// Class: GNTableView
// String references:
//   "GNTableView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c33700(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *local_48;
  char local_40;
  longlong *plVar5;
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = unaff_RDI;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
LAB_01c337ac:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_01c337ac;
      }
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    if ((DAT_026e56b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    plVar4 = &DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffffc8;
      if (cVar1 == '\0') {
        plVar4 = &DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x4d8))();
      FUN_01dcea90();
      uVar3 = FUN_01dd3250();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      return uVar3;
    }
  } while( true );
}



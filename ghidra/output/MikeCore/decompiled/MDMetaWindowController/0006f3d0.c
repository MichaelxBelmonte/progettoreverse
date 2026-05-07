// Function: FUN_0006f3d0
// Address: 0006f3d0
// Size: 576 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006f3d0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  pplVar5 = &local_30;
  FUN_00d3ecf0();
  plVar1 = local_30;
  if ((DAT_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026e0ab8 = FUN_00015ff0();
    _DAT_026e0aa0 = "MDMetaWindowController";
    _DAT_026e0aa8 = 0x198;
    _DAT_026e0ab0 = FUN_0006dea0;
    _DAT_026e0ac0 = 0;
    uRam00000000026e0ac8 = 0;
    _DAT_026e0ad0 = 0;
    _DAT_026e0b48 = 0;
    uRam00000000026e0b50 = 0;
    _DAT_026e0b58 = 0;
    DAT_026e0b5a = 1;
    _DAT_026e0ad8 = 0;
    uRam00000000026e0ae0 = 0;
    _DAT_026e0ae8 = 0;
    uRam00000000026e0af0 = 0;
    _DAT_026e0af8 = 0;
    uRam00000000026e0b00 = 0;
    _DAT_026e0b08 = 0;
    uRam00000000026e0b10 = 0;
    _DAT_026e0b18 = 0;
    uRam00000000026e0b20 = 0;
    _DAT_026e0b28 = 0;
    uRam00000000026e0b30 = 0;
    _DAT_026e0b38 = 0;
    uRam00000000026e0b40 = 0;
    DAT_026e0b63 = 0;
    _DAT_026e0b5b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0006f425:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0006f425;
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
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x5e0))();
    plVar2 = local_30;
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x5e0))();
      FUN_00752180();
      plVar1 = local_30;
      if (local_28 == '\0') {
        if (local_30 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_0006f700();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0006f537;
    }
  }
  FUN_0006f700();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_0006f537:
  FUN_00d50b20();
  return;
}



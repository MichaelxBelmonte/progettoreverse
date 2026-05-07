// Function: FUN_002a9ac0
// Address: 002a9ac0
// Size: 996 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x002a9c4b) */
/* WARNING: Removing unreachable block (ram,0x002a9c50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a9ac0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar5;
  longlong **pplVar6;
  bool bVar7;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  bool local_38;
  
  pplVar6 = &local_40;
  FUN_01f27fe0();
  FUN_01f2e7e0();
  plVar4 = local_50;
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != false) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    FUN_01f27fe0();
    FUN_01f2e7e0();
    pplVar5 = &local_50;
    FUN_01e5c650();
    plVar4 = local_50;
    if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    if (plVar4 == (longlong *)0x0) {
LAB_002a9b7c:
      pplVar5 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_002a9b7c;
    }
    plVar4 = *pplVar5;
    if (plVar4 == (longlong *)0x0) {
      bVar1 = false;
      plVar4 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar5 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
      }
      bVar1 = true;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != false) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) goto LAB_002a9ce4;
  }
  (**(code **)(*unaff_RSI + 0x4a0))();
  FUN_00d23310();
  bVar7 = local_48 == '\0';
  local_40 = local_50;
  if (bVar7) {
    local_38 = false;
  }
  else {
    local_38 = true;
    local_48 = '\0';
  }
  local_38 = !bVar7;
  if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (local_50 == (longlong *)0x0) {
LAB_002a9c8a:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*local_50 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_002a9c8a;
  }
  plVar4 = *pplVar6;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
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
  if ((local_38 != false) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_002a9ce4:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = (longlong)plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



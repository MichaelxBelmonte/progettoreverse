// Function: FUN_002aa330
// Address: 002aa330
// Size: 791 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002aa330(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong **pplVar5;
  longlong *unaff_RDI;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  FUN_01f2e7e0();
  plVar1 = local_50;
  local_40[0] = local_48[0];
  pcVar4 = local_40;
  if (local_48[0] != '\0') {
    pcVar4 = local_48;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  pplVar5 = &local_50;
  FUN_01e5c650();
  plVar1 = local_50;
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
  if (plVar1 == (longlong *)0x0) {
LAB_002aa3f2:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_002aa3f2;
  }
  plVar1 = *pplVar5;
  local_60 = *(char *)(pplVar5 + 1);
  pplVar5 = pplVar5 + 1;
  if (local_60 == '\0') {
    pplVar5 = (longlong **)&local_60;
  }
  *(undefined1 *)pplVar5 = 0;
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_002aa560;
  }
  (**(code **)(*plVar1 + 0x5d8))();
  plVar1 = local_50;
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  local_38[0] = local_48[0];
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pplVar5 = &local_50;
    FUN_01e55ec0();
    plVar1 = local_50;
    FUN_00082eb0();
    if (plVar1 == (longlong *)0x0) {
LAB_002aa4b5:
      pplVar5 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_002aa4b5;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    plVar1 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = (longlong)plVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = (longlong)plVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_60 != '\0') {
    FUN_00d50b20();
  }
LAB_002aa560:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}



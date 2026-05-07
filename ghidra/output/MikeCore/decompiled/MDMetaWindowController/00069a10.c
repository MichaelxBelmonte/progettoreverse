// Function: FUN_00069a10
// Address: 00069a10
// Size: 1054 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x00069d4b) */
/* WARNING: Removing unreachable block (ram,0x00069d54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00069a10(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong **pplVar6;
  longlong *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar3 = DAT_026d7800;
  if (DAT_026d7800 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    (**(code **)(*unaff_RDI + 0x918))();
  }
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar3 = DAT_026d7808;
  if (DAT_026d7808 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    if (unaff_RDI[0x2a] != 0) {
      unaff_RDI[0x2a] = 0;
      FUN_00d50b20();
    }
    *(undefined1 *)((longlong)unaff_RDI + 0x189) = 1;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar3 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') goto LAB_00069d2e;
  pplVar6 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  if ((DAT_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
LAB_00069be3:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00069be3;
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
  if (plVar1 == (longlong *)0x0) goto LAB_00069d2e;
  (**(code **)(*plVar1 + 0x5e0))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00069c6d;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00069c6d:
    FUN_00756eb0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00069ca1;
      }
      if (unaff_RDI[0x33] != 0) {
        unaff_RDI[0x33] = 0;
        goto LAB_00069ce0;
      }
    }
    else {
      local_38 = '\0';
LAB_00069ca1:
      plVar2 = (longlong *)unaff_RDI[0x33];
      if (plVar2 != plVar1) {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        unaff_RDI[0x33] = (longlong)plVar1;
        if (plVar2 != (longlong *)0x0) {
LAB_00069ce0:
          FUN_00d50b20();
        }
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x918))();
  FUN_00d50b20();
LAB_00069d2e:
  FUN_00d530a0();
  return;
}



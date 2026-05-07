// Function: FUN_0048b260
// Address: 0048b260
// Size: 880 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0048b260(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  longlong **pplVar6;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = unaff_RSI;
  do {
    (**(code **)(*plVar5 + 0x370))();
    plVar4 = local_48;
    if (local_48 == plVar5) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_0048b2f7;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar5 = plVar4;
LAB_0048b2f7:
        local_38[0] = '\x01';
        pcVar3 = local_40;
        plVar4 = plVar5;
      }
      *pcVar3 = '\0';
      plVar5 = plVar4;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    plVar4 = (longlong *)&DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffffa0;
      if (cVar1 == '\0') {
        plVar4 = (longlong *)&DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x0048b470;
    }
  } while (plVar5 != (longlong *)0x0);
  plVar5 = (longlong *)0x0;
joined_r0x0048b470:
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_0063f230();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0048b4e3;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_0048b4e3:
    cVar1 = FUN_00212c70();
    if (cVar1 != '\0') {
      pplVar6 = &local_48;
      FUN_0021cc50();
      plVar5 = local_48;
      FUN_0034d920();
      if (plVar5 == (longlong *)0x0) {
        pplVar6 = &DAT_02802688;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        plVar5 = DAT_02802688;
        if (DAT_02802690 != '\0') goto LAB_0048b544;
LAB_0048b58a:
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar5;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 == '\0') {
          pplVar6 = &DAT_02802688;
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        plVar5 = *pplVar6;
        if (*(char *)(pplVar6 + 1) == '\0') goto LAB_0048b58a;
LAB_0048b544:
        *unaff_RDI = plVar5;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0048b5be;
    }
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0048b5be:
  FUN_00d50b20();
  return unaff_RDI;
}



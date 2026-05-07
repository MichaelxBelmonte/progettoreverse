// Function: FUN_006c6310
// Address: 006c6310
// Size: 1240 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x006c6792) */
/* WARNING: Removing unreachable block (ram,0x006c679b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c6310(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  bool bVar9;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_48 + 0x450))();
  if (cVar4 != '\0') {
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_006c6775;
  }
  if ((char)unaff_RDI[0x31] == '\0') {
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_006c6775;
  }
  iVar6 = FUN_01d3a5a0();
  if (iVar6 != 2) {
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_006c6775;
  }
  sVar5 = FUN_01d3b760();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (sVar5 != 0x20) goto LAB_006c6775;
  FUN_01e42030();
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_006c6775;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (longlong *)0x0) goto LAB_006c6775;
  FUN_00d50b00();
  local_38[0] = '\0';
  do {
    (**(code **)(*unaff_RDI + 0x370))();
    if (local_48 == unaff_RDI) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_006c64a7;
      }
    }
    else {
      unaff_RDI = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_006c64a7:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    plVar8 = &DAT_02802688;
    if (unaff_RDI != (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar8 = (longlong *)&stack0xffffffffffffff88;
      if (cVar4 == '\0') {
        plVar8 = &DAT_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (unaff_RDI != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      bVar9 = unaff_RDI != (longlong *)0x0;
      goto LAB_006c6624;
    }
  } while (unaff_RDI != (longlong *)0x0);
  unaff_RDI = (longlong *)0x0;
  bVar9 = false;
LAB_006c6624:
  FUN_00d50b20();
  bVar3 = true;
  if (unaff_RDI == (longlong *)0x0) {
    bVar1 = true;
LAB_006c6713:
    local_50 = (longlong *)0x0;
    bVar2 = true;
  }
  else {
    (**(code **)(*unaff_RDI + 0x5e0))();
    if (local_48 == (longlong *)0x0) {
      bVar1 = false;
      goto LAB_006c6713;
    }
    if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00756eb0();
    local_50 = local_48 + 2;
    if (local_48 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
      bVar3 = true;
    }
    else {
      if (local_40[0] == '\0') {
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(*local_50 + 0x50))();
      if ((cVar4 != '\0') && (cVar4 = (**(code **)(*local_50 + 0x58))(), cVar4 == '\0')) {
        (**(code **)(*local_50 + 0x48))();
        FUN_00d50b20();
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b20();
        if (bVar9) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        return;
      }
      bVar3 = false;
    }
    bVar1 = false;
    bVar2 = false;
  }
  FUN_00d50b20();
  if (!bVar3 && local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  if (bVar9 && !bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_006c6775:
  FUN_01e459c0();
  return;
}



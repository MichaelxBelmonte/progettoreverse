// Function: FUN_00467c50
// Address: 00467c50
// Size: 839 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467c50(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RDI[0x13] != 0) {
    FUN_003a9490(param_1);
  }
  if (unaff_RDI[0x14] != 0) {
    FUN_002da960(param_1);
  }
  if (unaff_RDI[0x25] != 0) {
    FUN_0013c660(param_1);
  }
  if (unaff_RDI[0x18] == 0) {
    return;
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  do {
    (**(code **)(*unaff_RDI + 0x370))();
    if (local_48 == unaff_RDI) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00467d47;
      }
    }
    else {
      unaff_RDI = local_48;
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
LAB_00467d47:
        local_38[0] = '\x01';
        pcVar3 = local_40;
      }
      *pcVar3 = '\0';
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
    plVar4 = &DAT_02802688;
    if (unaff_RDI != (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffffa8;
      if (cVar1 == '\0') {
        plVar4 = &DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (unaff_RDI != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00467eba;
    }
  } while (unaff_RDI != (longlong *)0x0);
  unaff_RDI = (longlong *)0x0;
LAB_00467eba:
  FUN_00d50b20();
  if (unaff_RDI == (longlong *)0x0) goto LAB_00467f80;
  (**(code **)(*unaff_RDI + 0x5e0))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00467f14;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_00467f14:
    FUN_00756eb0();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00467f56;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_00467f56:
      FUN_01aa1310();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00467f80:
  FUN_00884a60();
  return;
}



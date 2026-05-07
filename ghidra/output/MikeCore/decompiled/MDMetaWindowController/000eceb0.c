// Function: FUN_000eceb0
// Address: 000eceb0
// Size: 1079 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x000ed02d) */
/* WARNING: Removing unreachable block (ram,0x000ed036) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eceb0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong *local_50;
  char local_48 [15];
  char local_39;
  char local_38 [8];
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = unaff_RDI;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_50 == plVar5) {
      if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0'))
      goto LAB_000ecf47;
    }
    else {
      plVar5 = local_50;
      if (local_48[0] == '\0') {
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
LAB_000ecf47:
        local_38[0] = '\x01';
        pcVar3 = local_48;
      }
      *pcVar3 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar4 = &DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffffa0;
      if (cVar1 == '\0') {
        plVar4 = &DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar5 != (longlong *)0x0);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    local_39 = FUN_0078d680();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = unaff_RDI;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_50 == plVar5) {
        if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_000ed0c7;
        }
      }
      else {
        plVar5 = local_50;
        if (local_48[0] == '\0') {
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
LAB_000ed0c7:
          local_38[0] = '\x01';
          pcVar3 = local_48;
        }
        *pcVar3 = '\0';
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
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
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (longlong *)&stack0xffffffffffffffa0;
        if (cVar1 == '\0') {
          plVar4 = &DAT_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (unaff_RDI == (longlong *)0x0) goto LAB_000ed252;
        goto LAB_000ed24d;
      }
    } while (plVar5 != (longlong *)0x0);
    plVar5 = (longlong *)0x0;
    if (unaff_RDI != (longlong *)0x0) {
LAB_000ed24d:
      FUN_00d50b20();
    }
LAB_000ed252:
    if ((local_39 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_0063f230();
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        FUN_0063f230();
        FUN_00212c70();
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x998))();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



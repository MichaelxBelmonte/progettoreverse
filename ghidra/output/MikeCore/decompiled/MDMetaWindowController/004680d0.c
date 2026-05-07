// Function: FUN_004680d0
// Address: 004680d0
// Size: 645 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x00468262) */
/* WARNING: Removing unreachable block (ram,0x0046826f) */
/* WARNING: Removing unreachable block (ram,0x004681a0) */
/* WARNING: Removing unreachable block (ram,0x004681ad) */
/* WARNING: Removing unreachable block (ram,0x00468318) */
/* WARNING: Removing unreachable block (ram,0x00468321) */

void FUN_004680d0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong *unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_01e53f10();
  FUN_00465c80();
  if (unaff_RDI[0x14] == 0) {
    return;
  }
  FUN_004b43d0(param_1,0);
  lVar1 = unaff_RDI[0x14];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_0033caa0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (iVar3 < 0) {
    FUN_004b43d0(param_1,2);
    lVar1 = unaff_RDI[0x14];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar3 = FUN_0033caa0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 < 0) {
      FUN_004b43d0(param_1,1);
      lVar1 = unaff_RDI[0x14];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      iVar3 = FUN_0033caa0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (iVar3 < 0) {
        return;
      }
      FUN_004b43d0(param_1,1);
      if (local_30 != 0) {
        bVar2 = true;
        if (local_28 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_0046832d;
      }
    }
    else {
      FUN_004b43d0(param_1,2);
      if (local_30 != 0) {
        bVar2 = true;
        if (local_28 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_0046832d;
      }
    }
  }
  else {
    FUN_004b43d0(param_1,0);
    if (local_30 != 0) {
      bVar2 = true;
      if (local_28 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_0046832d;
    }
  }
  local_30 = 0;
  bVar2 = false;
LAB_0046832d:
  if ((local_30 != 0) && ((**(code **)(*unaff_RDI + 0x5c0))(), bVar2)) {
    FUN_00d50b20();
  }
  return;
}



// Function: FUN_00d268e0
// Address: 00d268e0
// Size: 710 bytes
// Class: GNSerialNumber


/* WARNING: Removing unreachable block (ram,0x00d269b4) */
/* WARNING: Removing unreachable block (ram,0x00d269bd) */
/* WARNING: Removing unreachable block (ram,0x00d26b6d) */
/* WARNING: Removing unreachable block (ram,0x00d26b76) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_00d268e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  int local_64;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RDI == 0) {
    return false;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0x18) {
    return false;
  }
  FUN_00d26d10();
  plVar1 = (longlong *)*unaff_RDI;
  if (plVar1 == local_40) {
    if (((char)unaff_RDI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d269aa;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RDI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RDI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d269aa:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0x14) {
    return false;
  }
  FUN_00d8f140(param_1,0x13);
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00ddb860();
  cVar3 = (**(code **)(*local_40 + 0x430))(param_1,1);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    return false;
  }
  FUN_00d276b0();
  plVar1 = (longlong *)*unaff_RDI;
  if (plVar1 == local_40) {
    if (((char)unaff_RDI[1] != '\0') || (local_40 == (longlong *)0x0)) {
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x00d26b15;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    lVar2 = unaff_RDI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
        local_40 = (longlong *)*unaff_RDI;
      }
      *(undefined1 *)(unaff_RDI + 1) = 1;
      plVar1 = local_40;
      goto joined_r0x00d26b15;
    }
    *unaff_RDI = (longlong)local_40;
    if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  plVar1 = (longlong *)*unaff_RDI;
joined_r0x00d26b15:
  if (plVar1 == (longlong *)0x0) {
    return false;
  }
  iVar4 = FUN_00d2a2e0();
  return local_64 == iVar4;
}



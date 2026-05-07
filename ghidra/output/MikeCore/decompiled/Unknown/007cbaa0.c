// Function: FUN_007cbaa0
// Address: 007cbaa0
// Size: 520 bytes
// Class: Unknown


void FUN_007cbaa0(void)

{
  longlong lVar1;
  longlong *unaff_RDI;
  undefined4 uVar2;
  longlong local_28;
  char local_20;
  
  (**(code **)(*unaff_RDI + 0x5e8))();
  lVar1 = unaff_RDI[0x10];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00364b20();
  if (local_20 == '\0') {
    if (local_28 != 0) {
      uVar2 = FUN_00d50b00();
    }
  }
  else {
    local_20 = '\0';
  }
  FUN_01a296f0(uVar2,0);
  if (local_28 != 0) {
    FUN_00d50b20();
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((char)unaff_RDI[0x19] != '\0') {
    lVar1 = unaff_RDI[0x10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00364b20();
    if (local_20 == '\0') {
      if (local_28 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_20 = '\0';
    }
    FUN_01a2db70();
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00364f30();
  if (local_20 == '\0') {
    if (local_28 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_20 = '\0';
  }
  FUN_01289850((int)unaff_RDI[0x16],*(undefined4 *)((longlong)unaff_RDI + 0xb4));
  if (local_28 != 0) {
    FUN_00d50b20();
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5f0))();
  return;
}



// Function: FUN_01be58e0
// Address: 01be58e0
// Size: 701 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01be5982) */
/* WARNING: Removing unreachable block (ram,0x01be598e) */
/* WARNING: Removing unreachable block (ram,0x01be5a68) */
/* WARNING: Removing unreachable block (ram,0x01be5a74) */
/* WARNING: Removing unreachable block (ram,0x01be592c) */
/* WARNING: Removing unreachable block (ram,0x01be5935) */
/* WARNING: Removing unreachable block (ram,0x01be5ac5) */
/* WARNING: Removing unreachable block (ram,0x01be5ad2) */

int FUN_01be58e0(void)

{
  int iVar1;
  longlong *unaff_RDI;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_b0;
  char local_a8;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x27] != 0) {
    FUN_01bbfb40();
    plVar2 = local_40;
    if (local_38 != '\0') goto LAB_01be593f;
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01be593f;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_01be593f:
  FUN_01bf21a0();
  uVar3 = (**(code **)(*unaff_RDI + 0x920))();
  if (unaff_RDI[0x27] == 0) {
    local_68 = '\0';
    local_70 = 0;
  }
  else {
    FUN_01bbfb40();
  }
  FUN_01be8270();
  FUN_01bcee20();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_80 = local_40;
  local_78 = '\0';
  iVar1 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x388))(0,&local_80);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    FUN_01c023b0();
  }
  else {
    (**(code **)(*plVar2 + 0x930))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d50b00();
    FUN_01c025c0(uVar3,&stack0xffffffffffffffa0,0);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return iVar1;
}



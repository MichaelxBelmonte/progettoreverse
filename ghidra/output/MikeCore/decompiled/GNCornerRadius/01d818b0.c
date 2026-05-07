// Function: FUN_01d818b0
// Address: 01d818b0
// Size: 632 bytes
// Class: GNCornerRadius


/* WARNING: Removing unreachable block (ram,0x01d81997) */
/* WARNING: Removing unreachable block (ram,0x01d819a3) */
/* WARNING: Removing unreachable block (ram,0x01d81b00) */
/* WARNING: Removing unreachable block (ram,0x01d81b09) */

void FUN_01d818b0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dc;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  uVar6 = extraout_XMM0_Dc;
  uVar4 = (**(code **)(*unaff_RDI + 0x920))();
  uVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))(uVar5,3,uVar4,uVar3,uVar5,uVar6);
  uVar6 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x960))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*unaff_RDI + 0x9e0))();
  local_48 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_70;
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*plVar1 + 0x400))(uVar6,param_2,&local_50,0);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



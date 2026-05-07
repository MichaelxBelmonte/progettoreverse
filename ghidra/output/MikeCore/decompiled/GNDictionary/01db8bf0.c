// Function: FUN_01db8bf0
// Address: 01db8bf0
// Size: 676 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01db8cff) */
/* WARNING: Removing unreachable block (ram,0x01db8d0b) */
/* WARNING: Removing unreachable block (ram,0x01db8e6c) */
/* WARNING: Removing unreachable block (ram,0x01db8e75) */

void FUN_01db8bf0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong *unaff_RDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar3 = FUN_01e420b0();
  if (cVar3 != '\0') {
    (**(code **)(*unaff_RDI + 0x878))();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_01e3f820();
  uVar7 = extraout_XMM0_Dc;
  uVar5 = (**(code **)(*unaff_RDI + 0x920))();
  uVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))(uVar6,2,uVar5,uVar4,uVar6,uVar7);
  uVar7 = FUN_01e3f820();
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
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_78;
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*plVar1 + 0x400))(uVar7,param_2,&local_50,0);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
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



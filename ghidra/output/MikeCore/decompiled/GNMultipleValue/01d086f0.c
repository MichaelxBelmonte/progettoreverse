// Function: FUN_01d086f0
// Address: 01d086f0
// Size: 688 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01d087fa) */
/* WARNING: Removing unreachable block (ram,0x01d08803) */
/* WARNING: Removing unreachable block (ram,0x01d0897a) */
/* WARNING: Removing unreachable block (ram,0x01d08983) */

void FUN_01d086f0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dc;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  cVar3 = (**(code **)(*unaff_RDI + 0xac8))();
  if (cVar3 != '\0') {
    (**(code **)(*unaff_RDI + 0x878))();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (longlong *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_01e07410();
  if (cVar3 != '\0') {
    uVar5 = FUN_01e3f820();
    uVar6 = extraout_XMM0_Dc;
    cVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_01e05890();
    }
    (**(code **)(*plVar1 + 0x3f0))(uVar5,0x18,0,uVar4,uVar5,uVar6);
  }
  cVar3 = (**(code **)(*unaff_RDI + 0xac8))();
  if (cVar3 == '\0') {
    uVar6 = FUN_01e3f820();
    (**(code **)(*unaff_RDI + 0x960))();
    plVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x9e0))();
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_68;
    uVar5 = *(undefined4 *)((longlong)unaff_RDI + 0x174);
    (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*plVar1 + 0x400))(uVar6,param_2,&local_48,uVar5);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



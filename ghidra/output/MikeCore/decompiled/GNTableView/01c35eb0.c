// Function: FUN_01c35eb0
// Address: 01c35eb0
// Size: 960 bytes
// Class: GNTableView


void FUN_01c35eb0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_01c33700();
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*local_48 + 0x490))(uVar4,0x17,0);
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x640))();
    uVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*local_b8 + 0x4a8))(uVar4,0x17);
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x960))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01c36250;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01c36250;
  iVar5 = FUN_00d8c7a0();
  if (iVar5 != 0) {
    (**(code **)(*unaff_RDI + 0x9e8))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    FUN_01d48a10();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_a8 = plVar2;
    local_a0 = '\0';
    local_90 = '\0';
    local_98 = plVar1;
    (**(code **)(*unaff_RDI + 0xa00))(param_2,&local_a8);
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x3f8))(param_1,param_2);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01c36250:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



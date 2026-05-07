// Function: FUN_012b9080
// Address: 012b9080
// Size: 863 bytes
// Class: MULSSComponentRenderer


void FUN_012b9080(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *unaff_RDI;
  longlong *plVar3;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_54 = param_2;
  FUN_00da5ad0();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar2;
  FUN_00da6c20();
  local_b0 = DAT_027bec88;
  if (DAT_027bec88 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_000175c0(param_1,&local_b0);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar2 + 0x18))();
    FUN_00da6c20();
    plVar1 = DAT_027bec88;
    local_98 = '\0';
    local_a0 = plVar2;
    if (DAT_027bec88 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_40 = plVar1;
    local_38 = '\0';
    FUN_00ca0840(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d46530();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = plVar1;
  local_88 = '\0';
  FUN_012c20e0(param_1,&local_90);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_00e83120();
    if ((((local_40 != (longlong *)0x0) && (plVar3 = local_40, local_38 == '\0')) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = '\0';
    local_70 = plVar1;
    local_68 = '\0';
    local_80 = plVar3;
    FUN_012c2030(param_1,&local_70);
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = local_60;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



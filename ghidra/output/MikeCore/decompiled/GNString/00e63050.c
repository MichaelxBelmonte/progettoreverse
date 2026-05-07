// Function: FUN_00e63050
// Address: 00e63050
// Size: 508 bytes
// Class: GNString


undefined4 FUN_00e63050(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *unaff_RDI;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RDI == 0) {
    return 0;
  }
  FUN_00e00d20();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar1 + 0x3a0))();
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x428))();
  }
  cVar3 = (**(code **)(*plVar1 + 0x3a0))();
  if (cVar3 == '\0') {
    uVar4 = 0;
    goto LAB_00e631c3;
  }
  FUN_00e00d20();
  local_60 = DAT_02787820;
  if (DAT_02787820 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  (**(code **)(*local_70 + 0x400))(param_1,&local_60);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ca91d0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00e63166;
    }
    uVar4 = 0;
  }
  else {
LAB_00e63166:
    uVar4 = 0;
    if ((plVar1 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
      local_50 = plVar1;
      local_48 = '\0';
      uVar4 = FUN_00c91cf0(param_1,1);
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00e631c3:
  FUN_00d50b20();
  return uVar4;
}



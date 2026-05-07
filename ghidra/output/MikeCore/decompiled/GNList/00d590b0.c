// Function: FUN_00d590b0
// Address: 00d590b0
// Size: 640 bytes
// Class: GNList


void FUN_00d590b0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_02774da0;
  if (DAT_02774da0 != 0) {
    FUN_00e31530(param_1,0);
  }
  local_90 = lVar2;
  local_88 = '\x01';
  FUN_00d99b10(param_1,&local_90);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00e31530(param_1,0);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02774da0;
  if (DAT_02774da0 != 0) {
    FUN_00e31530(param_1,0);
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_00d99be0(param_1,&local_80);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00e31530(param_1,0);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    if (unaff_RDI == (longlong *)0x0) {
      unaff_RDI = (longlong *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_00e31530(param_1,0);
    }
  }
  else {
    local_70 = plVar3;
    local_68 = '\0';
    (**(code **)(*unaff_RDI + 0x98))(param_1,&local_70);
    unaff_RDI = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = false;
      unaff_RDI = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00e31530(param_1,0);
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_60 = *unaff_RSI;
  local_58 = '\0';
  local_50 = plVar4;
  local_48 = '\0';
  (**(code **)(*unaff_RDI + 200))(param_1,&local_50);
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



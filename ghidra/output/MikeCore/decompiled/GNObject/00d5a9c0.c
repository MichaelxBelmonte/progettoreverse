// Function: FUN_00d5a9c0
// Address: 00d5a9c0
// Size: 574 bytes
// Class: GNObject
// String references:
//   "Cannot set scalar for key %@ directly. Property is not an attribute"
//   "Cannot set scalar for key %@ directly. Type mismatch."


void FUN_00d5a9c0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x360))();
  FUN_00e86210();
  local_88 = *param_1;
  local_80 = '\0';
  FUN_00c841b0(local_88,&local_88);
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00e31530();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar2 + 0x368))();
  lVar1 = DAT_0277ddb0;
  if (cVar3 == '\0') {
    local_54 = param_2;
    if (DAT_0277ddb0 != 0) {
      FUN_00e31530();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    lVar1 = *param_1;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      FUN_00e31530();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_2 = local_54;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_0277ddb0;
  if (*(char *)(plVar2[0xc] + 0x19) != (char)param_2) {
    if (DAT_0277ddb0 != 0) {
      FUN_00e31530();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    lVar1 = *param_1;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00e31530();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x208))(1,plVar2);
  FUN_00d50b20();
  return;
}



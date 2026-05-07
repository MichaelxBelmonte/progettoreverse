// Function: FUN_00de0f30
// Address: 00de0f30
// Size: 552 bytes
// Class: GNList


void FUN_00de0f30(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x3d0))();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    (**(code **)(*unaff_RSI + 0x3d0))();
    lVar1 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RSI + 0x3e0))();
  lVar1 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = lVar1;
  local_38 = '\0';
  FUN_00d214d0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = *param_2;
  local_68 = '\0';
  local_58 = '\0';
  local_60 = puVar2;
  (**(code **)(*unaff_RSI + 0x3d8))(&local_60,&local_70,0);
  lVar1 = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



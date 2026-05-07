// Function: FUN_01f42cb0
// Address: 01f42cb0
// Size: 570 bytes
// Class: Unknown
// String references:
//   "%@.%@"


void FUN_01f42cb0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar5;
  undefined8 *local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  cVar4 = FUN_00d8ca50();
  if (cVar4 == '\0') {
    local_70 = *param_2;
    local_68 = '\0';
    (**(code **)(*unaff_RSI + 0x620))();
    if (local_68 == '\0') {
      return;
    }
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_00d8f1a0();
  puVar1 = local_60;
  if ((((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_58 != '\0')
      ) && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8ed10();
  puVar2 = local_60;
  if (((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) &&
     ((FUN_00d50b00(), local_58 != '\0' && (local_60 != (undefined8 *)0x0)))) {
    FUN_00d50b20();
  }
  local_80 = puVar1;
  local_78 = '\0';
  (**(code **)(*unaff_RSI + 0x620))();
  puVar5 = local_60;
  puVar3 = puVar1;
  if (puVar1 != local_60) {
    if (local_58 != '\0') {
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      local_58 = '\0';
      goto LAB_01f42e0b;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    puVar3 = puVar5;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar5 = puVar3;
  if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f42e0b:
  if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_88 = puVar2;
    FUN_00083ea0(2,&local_88);
    FUN_00d8cb40();
    local_60 = (undefined8 *)&DAT_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



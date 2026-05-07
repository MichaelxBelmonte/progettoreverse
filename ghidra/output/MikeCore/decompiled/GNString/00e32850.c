// Function: FUN_00e32850
// Address: 00e32850
// Size: 763 bytes
// Class: GNString
// String references:
//   "%@: %p"


void FUN_00e32850(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  undefined8 local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  char local_30;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  puVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_68 = puVar2;
  local_60 = '\0';
  FUN_00d21140();
  if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RSI + 0x18) != 0) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    local_38 = (undefined8 *)local_b8;
    local_c0 = *(undefined8 *)(unaff_RSI + 0x18);
    FUN_00083ea0(2,&local_c0);
    FUN_00d8cb40();
    puVar2 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_38 = puVar2;
    local_30 = '\0';
    FUN_00d21140();
    if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = (undefined8 *)&DAT_0253d630;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &DAT_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RSI + 0x20) != 0) {
    FUN_00d74120();
    puVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_68 = puVar2;
    local_60 = '\0';
    FUN_00d21140();
    if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027259e0;
  local_90 = '\0';
  local_98 = puVar3;
  if (DAT_027259e0 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  FUN_00d95130();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



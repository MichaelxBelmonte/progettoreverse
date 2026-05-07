// Function: FUN_00dcc2a0
// Address: 00dcc2a0
// Size: 753 bytes
// Class: GNString
// String references:
//   " %@"
//   ":%I"


/* WARNING: Removing unreachable block (ram,0x00dcc566) */
/* WARNING: Removing unreachable block (ram,0x00dcc572) */

void FUN_00dcc2a0(void)

{
  undefined8 *puVar1;
  longlong *unaff_RSI;
  longlong local_a0;
  char local_98;
  undefined8 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined8 *local_60;
  uint local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  puVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar1;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0x388))();
  local_58 = 1;
  local_60 = &DAT_024c5048;
  local_48 = 0;
  if (local_a0 != 0) {
    FUN_00d50b00();
  }
  local_50 = local_a0;
  local_48 = '\x01';
  FUN_00d8cb40();
  puVar1 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = local_68 & 0xffffff00;
  }
  local_40 = puVar1;
  local_38 = '\0';
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_64 = (**(code **)(*unaff_RSI + 0x390))();
  local_68 = 1;
  local_70 = &DAT_024cc6f0;
  FUN_00d8cb40(&DAT_024cc6f0,&local_70);
  puVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar1;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8ede0();
  puVar1 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  FUN_00d95130();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



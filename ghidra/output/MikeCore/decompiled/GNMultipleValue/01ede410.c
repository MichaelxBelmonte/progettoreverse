// Function: FUN_01ede410
// Address: 01ede410
// Size: 701 bytes
// Class: GNMultipleValue
// String references:
//   "%@"
//   "%I %I %I %I"


/* WARNING: Removing unreachable block (ram,0x01ede6a2) */
/* WARNING: Removing unreachable block (ram,0x01ede6ae) */

void FUN_01ede410(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  undefined8 uVar3;
  longlong local_a0;
  char local_98;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined8 *local_60;
  uint local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  puVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar2;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  uVar3 = FUN_00d962d0(*(undefined8 *)(unaff_RSI + 0xc),*(undefined8 *)(unaff_RSI + 0x14));
  local_58 = 1;
  local_60 = &DAT_024c5048;
  local_48 = 0;
  if (local_a0 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_50 = local_a0;
  local_48 = '\x01';
  FUN_00d8cb40(uVar3,&local_60);
  puVar2 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = local_68 & 0xffffff00;
  }
  local_40 = puVar2;
  local_38 = '\0';
  uVar3 = FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  local_64 = *(undefined4 *)(unaff_RSI + 0x1c);
  local_68 = 4;
  local_70 = (undefined8 *)&DAT_026b0d80;
  FUN_00d8cb40(uVar3,&local_70);
  puVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar2;
  local_58 = local_58 & 0xffffff00;
  uVar3 = FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  lVar1 = DAT_027259e0;
  if (DAT_027259e0 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_00d95130(uVar3,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



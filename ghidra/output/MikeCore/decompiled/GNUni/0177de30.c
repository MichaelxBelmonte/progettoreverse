// Function: FUN_0177de30
// Address: 0177de30
// Size: 551 bytes
// Class: GNUni


void FUN_0177de30(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_b8;
  char local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar2 = DAT_027ce898;
  if (DAT_027ce898 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ce890;
  if (DAT_027ce890 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027ce8a0;
  local_88 = lVar1;
  local_80 = '\x01';
  if (DAT_027ce8a0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar3;
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  FUN_00d31230(&local_68,&local_78);
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_a0 = 1;
  FUN_0177bd20();
  local_30 = 0;
  if ((local_b0 == '\0') && (local_b8 != 0)) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  local_38 = local_b8;
  FUN_0009d720();
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_90 = 1;
  FUN_0177dd10(local_98,local_a8,0);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}



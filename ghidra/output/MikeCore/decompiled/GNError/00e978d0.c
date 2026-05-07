// Function: FUN_00e978d0
// Address: 00e978d0
// Size: 871 bytes
// Class: GNError
// String references:
//   "GNError: %@\nMessage: %@"
//   "\nDeveloperMessage:\n%@"
//   "\nUserInfo:\n%@"


void FUN_00e978d0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  undefined8 local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_80;
  uint local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  local_50 = *(undefined8 *)(unaff_RSI + 0x10);
  local_a8 = *(undefined8 *)(unaff_RSI + 0x18);
  FUN_00083ea0(2,&local_a8);
  FUN_00d8cb40();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_50 = lVar1;
  local_48 = '\0';
  FUN_00d21140();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (undefined8 *)&DAT_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar1 != 0) {
    local_78 = 1;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = lVar1;
    FUN_00d8cb40();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = lVar1;
    local_48 = '\0';
    FUN_00d21140();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x28);
  if (lVar1 != 0) {
    local_78 = 1;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = lVar1;
    FUN_00d8cb40();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = lVar1;
    local_48 = '\0';
    FUN_00d21140();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  local_98 = '\0';
  local_a0 = puVar2;
  FUN_00d92220();
  local_90 = local_80;
  local_88 = 0;
  if ((char)local_78 == '\0') {
    if (local_80 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = local_78 & 0xffffff00;
  }
  local_88 = '\x01';
  FUN_00d95130();
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



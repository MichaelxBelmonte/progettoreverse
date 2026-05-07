// Function: FUN_01f312b0
// Address: 01f312b0
// Size: 641 bytes
// Class: Unknown


void FUN_01f312b0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  lVar1 = DAT_02725a70;
  if (DAT_02725a70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02800030;
  local_b0 = lVar1;
  local_a8 = '\x01';
  if (DAT_02800030 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d31230(&local_90,&local_a0);
  local_30 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  lVar1 = DAT_02725a70;
  local_28 = '\x01';
  local_f0 = *unaff_RSI;
  local_e8 = 0;
  if (DAT_02725a70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02800038;
  local_80 = lVar1;
  local_78 = '\x01';
  if (DAT_02800038 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d31230(&local_60,&local_70);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_b8 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  FUN_01f316e0(local_c0,&local_f0,&local_e0,&local_d0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}



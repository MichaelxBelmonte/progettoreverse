// Function: FUN_00ae6870
// Address: 00ae6870
// Size: 911 bytes
// Class: Unknown


void FUN_00ae6870(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  longlong local_110;
  undefined8 *local_108;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
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
  
  lVar1 = DAT_02754ce8;
  if (unaff_ESI == 2) {
    if (DAT_02754ce8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02754cf8;
    local_98 = lVar1;
    local_90 = '\x01';
    if (DAT_02754cf8 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    FUN_00d31230(&local_78,&local_88);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 1) {
    if (DAT_02754ce8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02754cf0;
    local_c8 = lVar1;
    local_c0 = '\x01';
    if (DAT_02754cf0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    FUN_00d31230(&local_a8,&local_b8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d46530();
    lVar1 = DAT_02754d00;
    if (DAT_02754d00 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar1;
    FUN_00083ea0(2,&local_110);
    FUN_000b4da0();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_30 = '\0';
    }
    local_108 = (undefined8 *)&DAT_0253d630;
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    local_108 = &DAT_024c5048;
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02754ce8;
    if (DAT_02754ce8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02754d08;
    local_68 = lVar1;
    local_60 = '\x01';
    if (DAT_02754d08 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar3;
    local_50 = '\x01';
    local_48 = lVar2;
    local_40 = '\0';
    FUN_00d31230(&local_48,&local_58);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



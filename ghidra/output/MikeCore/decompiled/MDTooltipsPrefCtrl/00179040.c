// Function: FUN_00179040
// Address: 00179040
// Size: 575 bytes
// Class: MDTooltipsPrefCtrl
// String references:
//   "%@ [Module]"
//   "%@ [Header]"


void FUN_00179040(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  FUN_00176c40();
  puVar3 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00176c40();
    local_40 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    FUN_00d8cb40(param_1,&local_50);
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_003b6200();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar2;
    FUN_00d8cb40(param_1,&local_50);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_003b6200();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



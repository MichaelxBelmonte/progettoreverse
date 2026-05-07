// Function: FUN_01da7fd0
// Address: 01da7fd0
// Size: 544 bytes
// Class: GNString
// String references:
//   " %@"


void FUN_01da7fd0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_01da7e30();
  local_30 = 0;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  local_38 = (longlong)local_68;
  local_30 = '\x01';
  FUN_00d8dbf0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RSI + 0x10);
  if (plVar1 != (longlong *)0x0) {
    local_40 = 0;
    lVar2 = *(longlong *)(unaff_RSI + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar2;
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027f1fc8;
    if (cVar4 == '\0') {
      if (DAT_027f1fc8 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027f1fd0;
      if (DAT_027f1fd0 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar3;
      local_80 = '\x01';
      local_78 = 0;
      local_70 = '\0';
      FUN_00d31230(&local_78,&local_88);
      local_60 = 1;
      local_68 = &DAT_024c5048;
      local_50 = 0;
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
      local_58 = local_a8;
      local_50 = '\x01';
      FUN_00d94d80();
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
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
    }
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



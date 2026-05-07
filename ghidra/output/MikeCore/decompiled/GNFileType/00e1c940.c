// Function: FUN_00e1c940
// Address: 00e1c940
// Size: 571 bytes
// Class: GNFileType
// String references:
//   "com.apple.nserror.%@.%I"


void FUN_00e1c940(void)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)();
  FUN_00e1ccf0();
  puVar3 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_00e1ccf0();
  puVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  local_48 = (*(code *)PTR__objc_msgSend_024a9998)();
  local_60 = 2;
  local_68 = &DAT_024c5048;
  local_50 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_58 = (longlong)puVar3;
  local_50 = '\x01';
  local_68 = (undefined8 *)&DAT_025df2a0;
  FUN_00d8cb40();
  local_40 = local_78;
  local_38 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_38 = '\x01';
  local_98 = (longlong)puVar4;
  local_90 = '\0';
  FUN_00e97060(DAT_025908a0,&local_98);
  lVar2 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80 != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_68 = &DAT_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  (*(code *)PTR__objc_release_024a99a0)();
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



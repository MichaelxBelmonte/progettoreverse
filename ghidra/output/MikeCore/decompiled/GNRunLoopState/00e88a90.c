// Function: FUN_00e88a90
// Address: 00e88a90
// Size: 569 bytes
// Class: GNRunLoopState


void FUN_00e88a90(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  local_98 = DAT_027c24d8;
  if (cVar4 == '\0') {
    if (DAT_027c24d8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02789420;
    local_90 = '\x01';
    if (DAT_02789420 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_027c24e8;
    local_88 = lVar1;
    local_80 = '\x01';
    if (DAT_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar2;
    local_a0 = *unaff_RSI;
    FUN_00083ea0(2,&local_a0);
    FUN_00e972c0();
    local_78 = (undefined8 *)&DAT_0253d630;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
    local_38 = local_48;
    local_30 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_30 = '\x01';
    FUN_00daa940();
    puVar3 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (undefined8 *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e88ea0();
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



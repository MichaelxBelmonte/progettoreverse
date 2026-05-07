// Function: FUN_0054d030
// Address: 0054d030
// Size: 707 bytes
// Class: MDURLOpenedController


void FUN_0054d030(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar4;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x70);
  lVar2 = *unaff_RSI;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *(longlong *)(unaff_RDI + 0x70) = lVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(unaff_RDI + 0x70);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_00d8ede0();
    puVar4 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0054d0c0;
    }
  }
  else {
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\0';
LAB_0054d0c0:
  lVar1 = DAT_0270d080;
  if (DAT_0270d080 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  FUN_00083ea0(2,&local_a8);
  FUN_000b4da0();
  lVar2 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != 0) && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  local_60 = (undefined8 *)&DAT_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_68 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_a0 = lVar2;
  local_98 = '\0';
  local_70 = lVar1;
  FUN_00e0e2a0();
  puVar3 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (undefined8 *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_90 = puVar3;
  local_88 = '\0';
  FUN_01e125e0();
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



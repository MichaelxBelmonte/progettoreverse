// Function: FUN_01e0c230
// Address: 01e0c230
// Size: 588 bytes
// Class: GNMultipleValue


void FUN_01e0c230(void)

{
  longlong lVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_c8;
  undefined8 *local_c0;
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
  longlong local_40;
  char local_38;
  
  if ((longlong *)unaff_RDI[0x43] != (longlong *)0x0) {
    local_80 = *unaff_RSI;
    local_78 = '\0';
    (**(code **)(*(longlong *)unaff_RDI[0x43] + 0x20))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((*(char *)((longlong)unaff_RDI + 0x20a) != '\0') && (unaff_RDI[0x3a] != 0)) {
    (**(code **)(*unaff_RDI + 0xb28))();
  }
  FUN_00d403d0();
  local_70 = DAT_027f30a8;
  if (DAT_027f30a8 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_00d50b00();
  lVar1 = DAT_027f30b0;
  if (DAT_027f30b0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar1;
  FUN_00083ea0(2,&local_c8);
  FUN_000b4da0();
  local_40 = local_60;
  local_38 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\x01';
  FUN_00d40470(&local_40,&stack0xffffffffffffffb0,1,3);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = (undefined8 *)&DAT_0253d630;
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = &DAT_024c5048;
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (*(char *)((longlong)unaff_RDI + 0x209) != '\0') {
    (**(code **)(*unaff_RDI + 0xa50))();
  }
  return;
}



// Function: FUN_00df3740
// Address: 00df3740
// Size: 513 bytes
// Class: GNCompressor


void FUN_00df3740(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong local_b0;
  undefined8 *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_00d4efa0();
  FUN_00c7e7b0();
  puVar2 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027847f8;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    local_88 = puVar2;
    local_80 = '\0';
    local_78 = *unaff_RSI;
    local_70 = '\0';
    FUN_00e972c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = puVar2;
    local_a0 = '\0';
    local_98 = *unaff_RSI;
    local_90 = '\0';
    if (DAT_027847f8 != 0) {
      FUN_00d50b00();
      lVar3 = *param_2;
    }
    local_38 = lVar1;
    local_b0 = lVar3;
    FUN_00083ea0(2,&local_b0);
    FUN_00e972c0();
    local_68 = (undefined8 *)&DAT_0253d630;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &DAT_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



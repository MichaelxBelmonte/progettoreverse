// Function: FUN_01d7b1b0
// Address: 01d7b1b0
// Size: 1272 bytes
// Class: GNMultipleValue
// String references:
//   ".%@"


void FUN_01d7b1b0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_90 = local_50;
  local_88 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_88 = '\x01';
  FUN_00e3f850();
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xa18))();
  puVar2 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)(*unaff_RDI + 0xa18))();
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_110 != 0) {
      FUN_00d50b00();
    }
    local_40 = local_110;
    local_38 = '\x01';
    FUN_00d8cb40();
    local_80 = local_60;
    local_78 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_78 = '\x01';
    FUN_00e3f850();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((unaff_RDI[10] != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
    local_b8 = 0;
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b00();
    local_100 = DAT_027f0e20;
    local_b8 = '\x01';
    local_c0 = unaff_RDI + 2;
    if (DAT_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\x01';
    local_a8 = 0;
    lVar1 = unaff_RDI[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_b0 = lVar1;
    FUN_00e3fb50(&local_b0,&local_100);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      (**(code **)(*local_c0 + 0x10))();
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_01d10140();
  if (cVar3 != '\0') {
    local_98 = 0;
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b00();
    local_f0 = DAT_027f2f40;
    local_98 = '\x01';
    local_a0 = unaff_RDI + 2;
    if (DAT_027f2f40 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    (**(code **)(*unaff_RDI + 0x960))();
    local_70 = local_50;
    local_68 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_68 = '\x01';
    FUN_00e3fb50(&local_70,&local_f0);
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02774da0;
  if (DAT_02774da0 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar1;
  local_d8 = '\x01';
  FUN_00e3f850();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x44] != (longlong *)0x0) {
    local_d0 = *unaff_RSI;
    local_c8 = '\0';
    (**(code **)(*(longlong *)unaff_RDI[0x44] + 0x370))();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e3faa0();
  (**(code **)(*unaff_RDI + 0xa18))();
  puVar2 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00e3faa0();
  }
  FUN_00e3faa0();
  return;
}



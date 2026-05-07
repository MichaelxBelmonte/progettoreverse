// Function: FUN_01d5a790
// Address: 01d5a790
// Size: 501 bytes
// Class: GNMultipleValue


void FUN_01d5a790(void)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  cVar1 = FUN_01d10140();
  if (cVar1 != '\0') {
    FUN_00d4efa0();
    FUN_00c82bb0();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    FUN_00e3f850();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b00();
    local_88 = DAT_027f2f40;
    local_60 = '\x01';
    local_68 = unaff_RDI + 2;
    if (DAT_027f2f40 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    (**(code **)(*unaff_RDI + 0x960))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_00e3fb50(&local_48,&local_88);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00e3faa0();
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  FUN_01e4d060();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// Function: FUN_00356890
// Address: 00356890
// Size: 598 bytes
// Class: Unknown


void FUN_00356890(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined1 in_CL;
  undefined1 unaff_SIL;
  longlong *unaff_RDI;
  bool bVar2;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined1 local_74;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_74 = unaff_SIL;
  if (DAT_02807338 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &DAT_024fafc8;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    param_1 = (*DAT_024fafe0)();
    bVar2 = DAT_02807338 == (undefined8 *)0x0;
    DAT_02807338 = puVar1;
    if (((bVar2) || (param_1 = FUN_00d50b20(), DAT_02807338 != (undefined8 *)0x0)) &&
       (DAT_02807340 == '\0')) {
      DAT_02807340 = '\x01';
      param_1 = FUN_00e8cb90();
    }
  }
  FUN_003c0750(param_1,in_CL);
  local_50 = local_70;
  local_48 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_48 = '\x01';
  FUN_01c00e50();
  FUN_01bbfb40();
  FUN_01beead0();
  local_40 = local_60;
  local_38 = 0;
  local_88 = DAT_027032d8;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      local_88 = DAT_027032d8;
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\x01';
  DAT_027032d8 = local_88;
  if (local_88 != 0) {
    local_38 = '\x01';
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_004afe20(&local_88,&local_40,0,local_74);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5c0))();
  return;
}



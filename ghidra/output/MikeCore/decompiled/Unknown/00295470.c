// Function: FUN_00295470
// Address: 00295470
// Size: 986 bytes
// Class: Unknown


void FUN_00295470(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  longlong local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
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
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_110 = *param_1;
  local_108 = '\0';
  local_118 = param_3;
  FUN_01cafe60(param_1,&local_110);
  puVar1 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (undefined8 *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (puVar1 == (undefined8 *)0x0) {
    if (param_4 == '\0') {
      local_b0 = *param_1;
      local_a8 = '\0';
      local_a0 = *param_2;
      local_98 = '\0';
      local_90 = *local_118;
      local_88 = '\0';
      FUN_01cafb30(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_f0 = *param_1;
      local_e8 = '\0';
      local_e0 = *param_2;
      local_d8 = '\0';
      local_d0 = *local_118;
      local_c8 = '\0';
      local_c0 = 0;
      local_b8 = '\0';
      FUN_00d46530();
      FUN_00d46530();
      local_140 = local_128;
      FUN_00083ea0(2,&local_140);
      FUN_00295b80();
      local_40 = local_50;
      local_38 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_38 = '\x01';
      FUN_01cafb90(&local_d0,&local_e0,&local_c0,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_80 = (undefined8 *)&DAT_0253d630;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_100 = *param_2;
    local_f8 = '\0';
    FUN_01caf3f0();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



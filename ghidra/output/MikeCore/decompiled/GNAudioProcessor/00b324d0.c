// Function: FUN_00b324d0
// Address: 00b324d0
// Size: 948 bytes
// Class: GNAudioProcessor
// String references:
//   "editValueForKey"
//   "Edit %@"
//   "v@@I@"


void FUN_00b324d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  int local_c4;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  uint local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  char local_50;
  
  local_c4 = (int)param_1;
  if (((*param_3 != 0) && (local_c4 != 3)) && (local_c4 != 2)) {
    local_108 = *param_2;
    local_100 = '\0';
    (**(code **)(*unaff_RDI + 0x88))(param_1,&local_108);
    puVar1 = local_b0;
    if ((char)local_a8 == '\0') {
      if (local_b0 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if (((char)local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_a8 = local_a8 & 0xffffff00;
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_c0 = *param_2;
    local_110 = *param_3;
    FUN_00b359e0(&local_c4,&local_c0,&local_110,4);
    FUN_00db2930("v@@I@","editValueForKey",&local_b0);
    local_b0 = (undefined8 *)&DAT_02532370;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_b0 = (undefined8 *)&DAT_0253d630;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_b0 = &DAT_024c5048;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_f8 = *param_2;
    local_f0 = '\0';
    FUN_00d9a330();
    local_a0 = local_c0;
    local_a8 = 1;
    local_b0 = &DAT_024c5048;
    local_98 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00db3140();
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (puVar1 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_b0 = &DAT_024c5048;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_e8 = *unaff_RSI;
  local_e0 = '\0';
  local_d8 = *param_2;
  local_d0 = '\0';
  (**(code **)(*unaff_RDI + 0x80))();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  return;
}



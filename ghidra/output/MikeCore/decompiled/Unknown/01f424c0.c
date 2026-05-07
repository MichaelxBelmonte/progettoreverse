// Function: FUN_01f424c0
// Address: 01f424c0
// Size: 756 bytes
// Class: Unknown


void FUN_01f424c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_110;
  undefined8 *local_108;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  char local_28 [8];
  
  local_78 = *param_2;
  local_70 = '\0';
  (**(code **)(*unaff_RSI + 0x610))();
  local_48 = local_68;
  local_40 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_40 = '\x01';
  FUN_00d30620();
  FUN_00d305f0();
  FUN_00d30660();
  FUN_00d305f0();
  local_88 = local_c8;
  local_110 = local_a8;
  FUN_00083ea0(2,&local_110);
  FUN_000b6830();
  local_38 = local_58;
  local_30 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_30 = '\x01';
  (**(code **)(*unaff_RSI + 0x6b0))(&local_48,&local_78,&local_38,1);
  FUN_00ca1380();
  lVar1 = local_88;
  pcVar2 = local_28;
  if (local_80[0] != '\0') {
    pcVar2 = local_80;
  }
  local_28[0] = local_80[0];
  *pcVar2 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_28[0] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_28[0] = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_108 = (undefined8 *)&DAT_0253d630;
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_108 = &DAT_024c5048;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}



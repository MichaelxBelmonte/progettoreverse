// Function: FUN_013214f0
// Address: 013214f0
// Size: 581 bytes
// Class: Unknown


void FUN_013214f0(float param_1)

{
  longlong lVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_d0;
  double local_c8;
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
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  float local_2c;
  
  local_2c = param_1;
  local_c8 = (double)FUN_00e7d6f0();
  if ((*(float *)(unaff_RDI + 0x18) <= local_2c) || (*(double *)(unaff_RDI + 0x20) <= local_c8)) {
    FUN_00d403d0();
    local_70 = DAT_02729590;
    if (DAT_02729590 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_60 = *unaff_RSI;
    local_58 = '\0';
    FUN_00d46dc0(local_2c);
    lVar1 = DAT_027295d8;
    if (DAT_027295d8 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar1;
    FUN_00083ea0(2,&local_d0);
    FUN_000b4da0();
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
    FUN_00d40470(&local_40,&local_60,1,3);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
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
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    *(float *)(unaff_RDI + 0x18) = local_2c + DAT_02394254;
    *(double *)(unaff_RDI + 0x20) = local_c8 + DAT_02390108;
  }
  return;
}



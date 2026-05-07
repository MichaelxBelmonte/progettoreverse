// Function: FUN_00d042e0
// Address: 00d042e0
// Size: 508 bytes
// Class: GNInt
// String references:
//   "%@ Hz"
//   "%@ kHz"
//   "%@ MHz"


void FUN_00d042e0(float param_1)

{
  longlong unaff_RSI;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  fVar3 = *(float *)(unaff_RSI + 0x18);
  if (*(float *)(unaff_RSI + 0x18) <= param_1) {
    fVar3 = param_1;
  }
  fVar1 = *(float *)(unaff_RSI + 0x1c);
  if (fVar3 <= *(float *)(unaff_RSI + 0x1c)) {
    fVar1 = fVar3;
  }
  if (DAT_02393944 <= fVar1) {
    if (DAT_0240e358 <= fVar1) {
      uVar2 = (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x378))(fVar1 / DAT_0240e358);
      local_40 = local_30;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      if (local_30 != 0) {
        uVar2 = FUN_00d50b00();
      }
      local_38 = '\x01';
      FUN_00d8cb40(uVar2,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x378))(fVar1 / DAT_02393944);
      local_40 = local_30;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      if (local_30 != 0) {
        uVar2 = FUN_00d50b00();
      }
      local_38 = '\x01';
      FUN_00d8cb40(uVar2,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x378))();
    local_40 = local_30;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_30 != 0) {
      uVar2 = FUN_00d50b00();
    }
    local_38 = '\x01';
    FUN_00d8cb40(uVar2,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



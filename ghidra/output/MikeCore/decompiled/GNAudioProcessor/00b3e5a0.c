// Function: FUN_00b3e5a0
// Address: 00b3e5a0
// Size: 703 bytes
// Class: GNAudioProcessor
// String references:
//   "%@:"


void FUN_00b3e5a0(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_0275e928;
  if (DAT_0275e928 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 0;
  local_98 = '\0';
  (**(code **)(*unaff_RDI + 0x508))(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x5d0))();
  plVar4 = local_60;
  if (local_60 == (longlong *)0x0) {
    bVar2 = true;
    plVar4 = (longlong *)0x0;
    plVar1 = (longlong *)unaff_RDI[0x10];
  }
  else {
    if ((char)local_58 == '\0') {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = false;
    plVar1 = (longlong *)unaff_RDI[0x10];
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x478))(param_1,(int)unaff_RDI[0xe]);
    local_58 = 1;
    local_60 = &DAT_024c5048;
    local_48 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_50 = local_c0;
    local_48 = '\x01';
    FUN_00d8cb40(param_1,&local_60);
    local_40 = local_80;
    local_38 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_38 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[0x11];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0xa20))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_0275e930;
    plVar1 = (longlong *)unaff_RDI[0x11];
    if (DAT_0275e930 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    (**(code **)(*plVar1 + 0xa10))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2 && plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



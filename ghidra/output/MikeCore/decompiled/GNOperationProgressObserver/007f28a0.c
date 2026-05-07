// Function: FUN_007f28a0
// Address: 007f28a0
// Size: 1012 bytes
// Class: GNOperationProgressObserver


void FUN_007f28a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
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
  longlong *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_00172bc0();
    local_d8 = '\0';
    local_e0 = (longlong *)0x0;
    FUN_017a9390();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      (**(code **)(*local_e0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x18);
  lVar3 = lVar2;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x18) = lVar1;
    lVar3 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
    }
  }
  if ((lVar3 != 0) && (*param_2 != 0)) {
    FUN_017a6db0();
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 != (undefined8 *)0x0) {
      FUN_017a6db0();
      (**(code **)(*local_f0 + 0x468))();
      lVar1 = DAT_02729550;
      if (DAT_02729550 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar1;
      FUN_00083ea0(2,&local_108);
      FUN_000b4da0();
      lVar2 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      local_70 = (undefined8 *)&DAT_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &DAT_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_0272f678;
      local_d0 = lVar1;
      local_c8 = '\x01';
      if (DAT_0272f678 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar3;
      local_b8 = '\x01';
      local_b0 = lVar2;
      local_a8 = '\0';
      FUN_00d31230(&local_b0,&local_c0);
      local_40 = local_70;
      local_38 = 0;
      if (local_68 == '\0') {
        if (local_70 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_38 = '\x01';
      local_a0 = *param_2;
      local_98 = '\0';
      FUN_00172950();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      local_78 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = (longlong *)(unaff_RDI + 0x10);
      FUN_017a9390();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



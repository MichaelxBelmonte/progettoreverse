// Function: FUN_01f44ac0
// Address: 01f44ac0
// Size: 820 bytes
// Class: GNInfoController


undefined4 FUN_01f44ac0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *unaff_RSI;
  longlong local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
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
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x478))();
  uVar6 = 2;
  if (cVar5 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x468))();
    plVar4 = local_50;
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02725a70;
    if (plVar4 == (longlong *)0x0) {
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_028001b0;
      local_80 = lVar1;
      local_78 = '\x01';
      if (DAT_028001b0 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_01f6ca30();
      uVar6 = (**(code **)(*local_50 + 0x5e0))();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x468))();
      (**(code **)(*local_c0 + 0x388))();
      lVar1 = DAT_02800148;
      if (DAT_02800148 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar1;
      FUN_00083ea0(2,&local_d8);
      FUN_000b4da0();
      lVar3 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      local_50 = (longlong *)&DAT_0253d630;
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02725a70;
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_028001a8;
      local_b0 = lVar1;
      local_a8 = '\x01';
      if (DAT_028001a8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar2;
      local_98 = '\x01';
      FUN_01f6ca30();
      local_90 = lVar3;
      local_88 = '\0';
      uVar6 = (**(code **)(*local_50 + 0x5d8))();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar6;
}



// Function: FUN_01f44640
// Address: 01f44640
// Size: 640 bytes
// Class: GNInfoController


undefined4 FUN_01f44640(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *unaff_RSI;
  longlong local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x478))();
  uVar5 = 2;
  if (cVar4 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x468))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (longlong *)0x0) {
      uVar5 = 1;
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x468))();
      (**(code **)(*local_a0 + 0x388))();
      lVar1 = DAT_02800148;
      if (DAT_02800148 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar1;
      FUN_00083ea0(2,&local_b8);
      FUN_000b4da0();
      lVar3 = local_30;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_28 = '\0';
      }
      local_60 = (longlong *)&DAT_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02725a70;
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_028001a0;
      local_90 = lVar1;
      local_88 = '\x01';
      if (DAT_028001a0 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar2;
      local_78 = '\x01';
      FUN_01f6ca30();
      local_70 = lVar3;
      local_68 = '\0';
      uVar5 = (**(code **)(*local_60 + 0x5d8))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar5;
}



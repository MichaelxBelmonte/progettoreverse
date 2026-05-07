// Function: FUN_00d2f5f0
// Address: 00d2f5f0
// Size: 1224 bytes
// Class: Unknown


undefined8 * FUN_00d2f5f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  undefined8 *local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_024c15e8;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  FUN_00d500e0();
  uVar7 = FUN_00d2fd00();
  local_58 = (longlong)local_40;
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    uVar7 = FUN_00d50b00();
  }
  lVar1 = *unaff_RSI;
  lVar2 = puVar6[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b00();
    }
    puVar6[2] = lVar1;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_02800160;
  if (DAT_02800160 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  uVar7 = FUN_000175c0(uVar7,&local_98);
  lVar1 = puVar6[3];
  if ((undefined8 *)lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (undefined8 *)0x0) {
        puVar6[3] = 0;
      }
      else {
        uVar7 = FUN_00d50b00();
        lVar1 = puVar6[3];
        puVar6[3] = local_40;
      }
    }
    else {
      local_38 = '\0';
      puVar6[3] = local_40;
    }
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = DAT_02800170;
  if (DAT_02800170 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  uVar7 = FUN_000175c0(uVar7,&local_88);
  lVar1 = puVar6[4];
  if ((undefined8 *)lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (undefined8 *)0x0) {
        puVar6[4] = 0;
      }
      else {
        uVar7 = FUN_00d50b00();
        lVar1 = puVar6[4];
        puVar6[4] = local_40;
      }
    }
    else {
      local_38 = '\0';
      puVar6[4] = local_40;
    }
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = DAT_0277d5a0;
  if (DAT_0277d5a0 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_000175c0(uVar7,&local_78);
  lVar1 = puVar6[5];
  if ((undefined8 *)lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (undefined8 *)0x0) {
        puVar6[5] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = puVar6[5];
        puVar6[5] = local_40;
      }
    }
    else {
      local_38 = '\0';
      puVar6[5] = local_40;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6[5] != 0) {
    FUN_00ca92b0();
  }
  lVar1 = *param_2;
  lVar2 = puVar6[6];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar6[6] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  local_38 = '\0';
  local_40 = puVar6;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d5a8;
  plVar3 = (longlong *)*unaff_RSI;
  if (DAT_0277d5a8 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar1;
  local_60 = '\x01';
  cVar5 = (**(code **)(*plVar3 + 0x50))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = DAT_028a76f8;
  if (cVar5 != '\0') {
    if ((DAT_028a76f8 != puVar6) &&
       (FUN_00d50b00(), DAT_028a76f8 = puVar6, puVar4 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (DAT_028a7700 == '\0') {
      DAT_028a7700 = '\x01';
      FUN_00e8cb90();
    }
    if (DAT_028a76e8 == (undefined8 *)0x0) {
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b00();
        DAT_028a76e8 = puVar6;
      }
      if (DAT_028a76f0 == '\0') {
        DAT_028a76f0 = '\x01';
        FUN_00e8cb90();
      }
    }
  }
  plVar3 = (longlong *)*unaff_RSI;
  FUN_00d2fe60();
  local_50 = local_40;
  local_48 = 0;
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  cVar5 = (**(code **)(*plVar3 + 0x50))();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = DAT_028a76e8;
  if (cVar5 != '\0') {
    if ((DAT_028a76e8 != puVar6) &&
       (FUN_00d50b00(), DAT_028a76e8 = puVar6, puVar4 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (DAT_028a76f0 == '\0') {
      DAT_028a76f0 = '\x01';
      FUN_00e8cb90();
    }
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



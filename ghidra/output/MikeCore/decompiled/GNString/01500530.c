// Function: FUN_01500530
// Address: 01500530
// Size: 597 bytes
// Class: GNString


void FUN_01500530(undefined1 *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar5;
  longlong local_98;
  undefined8 *local_90 [2];
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined1 *local_40;
  undefined4 local_34;
  
  if (((longlong *)*unaff_RSI == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))(), cVar3 == '\0')) {
    lVar1 = DAT_027c24d8;
    if (DAT_027c24d8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_027c24e0;
    local_60 = lVar1;
    local_58 = '\x01';
    if (DAT_027c24e0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027c24e8;
    local_50 = lVar2;
    local_48 = '\x01';
    if (DAT_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_98 = *unaff_RSI;
    uVar5 = FUN_00083ea0(2,&local_98);
    FUN_00e972c0(uVar5,local_90);
    local_90[0] = (undefined8 *)&DAT_0253d630;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_90[0] = &DAT_024c5048;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_40 = param_1;
  local_34 = param_2;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025c2098;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  FUN_00d500e0();
  lVar1 = *unaff_RSI;
  lVar2 = puVar4[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar4[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (((char)local_34 == '\0') || (cVar3 = FUN_01500890(), cVar3 == '\0')) {
    cVar3 = FUN_01500dd0();
    if (cVar3 != '\0') {
      if (local_40 != (undefined1 *)0x0) {
        *local_40 = 0;
      }
      goto LAB_01500749;
    }
    if (((char)local_34 != '\0') || (cVar3 = FUN_01500890(), cVar3 == '\0')) {
      if (local_40 != (undefined1 *)0x0) {
        *local_40 = 0;
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      FUN_00d50b20();
      return;
    }
  }
  if (local_40 != (undefined1 *)0x0) {
    *local_40 = 1;
  }
LAB_01500749:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



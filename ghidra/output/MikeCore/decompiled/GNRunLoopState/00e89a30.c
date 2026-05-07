// Function: FUN_00e89a30
// Address: 00e89a30
// Size: 524 bytes
// Class: GNRunLoopState


undefined8 FUN_00e89a30(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  iVar3 = FUN_00e89860();
  local_50 = DAT_02789460;
  if (iVar3 == -1) {
    if (DAT_02789460 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02789468;
    local_48 = '\x01';
    if (DAT_02789468 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02789470;
    local_40 = lVar1;
    local_38 = '\x01';
    if (DAT_02789470 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027d2068;
    if (DAT_027d2068 != 0) {
      FUN_00d50b00();
    }
    local_a8 = *unaff_RSI;
    local_a0 = lVar1;
    FUN_002bd7b0(&local_a0,&local_a8,4);
    local_98 = (undefined8 *)&DAT_02670890;
    local_58 = param_2;
    FUN_00e972c0();
    local_98 = (undefined8 *)&DAT_025df260;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (undefined8 *)&DAT_0253d630;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &DAT_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = 0xffffffffffffffff;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + (longlong)iVar3 * 8);
    }
    uVar4 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x30) + 0x10) + (longlong)iVar3 * 8);
    FUN_00dac5e0();
  }
  return uVar4;
}



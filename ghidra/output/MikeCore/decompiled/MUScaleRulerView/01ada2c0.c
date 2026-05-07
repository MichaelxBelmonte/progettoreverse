// Function: FUN_01ada2c0
// Address: 01ada2c0
// Size: 798 bytes
// Class: MUScaleRulerView


/* WARNING: Removing unreachable block (ram,0x01ada488) */
/* WARNING: Removing unreachable block (ram,0x01ada494) */

void FUN_01ada2c0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  longlong *local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = FUN_01ad9100();
  if (cVar2 == '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    local_80 = *unaff_RSI;
    local_78 = '\0';
    local_70 = 0;
    local_68 = '\0';
    (**(code **)(*local_40 + 0x528))(param_1,param_2);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d39800(param_1,param_2,DAT_023908d8);
    plVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cfbee0(DAT_02390120,DAT_02390120,DAT_02390120);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    uVar3 = (**(code **)(*unaff_RDI + 0x640))();
    local_a0 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_98 = '\x01';
    (**(code **)(*local_c0 + 0x3b0))(uVar3,&local_a0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01d488d0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = plVar1;
    local_88 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



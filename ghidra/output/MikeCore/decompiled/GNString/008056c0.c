// Function: FUN_008056c0
// Address: 008056c0
// Size: 679 bytes
// Class: GNString
// String references:
//   "%I %%"


undefined8 FUN_008056c0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *unaff_RDI;
  float fVar6;
  undefined8 uVar7;
  undefined8 *local_80;
  undefined4 local_78;
  int local_74;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (param_2 != 0) {
    (**(code **)(*unaff_RDI + 0x5e8))();
    iVar4 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x920))();
    if (iVar4 < 8) {
      FUN_00364bb0();
      lVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      uVar5 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x920))();
      uVar7 = FUN_00802530();
      puVar2 = local_80;
      if (((char)local_78 == '\0') && (local_80 != (undefined8 *)0x0)) {
        uVar7 = FUN_00d50b00();
      }
      FUN_00803100(uVar7,uVar5);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00364bb0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    fVar6 = (float)(**(code **)(*(longlong *)unaff_RDI[0x12] + 0x930))();
    FUN_00802530();
    local_58 = 0;
    if (((char)local_78 == '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    local_60 = local_80;
    local_58 = '\x01';
    FUN_012762c0((double)fVar6);
    if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x5f0))();
    plVar1 = (longlong *)unaff_RDI[0x13];
    fVar6 = (float)(**(code **)(*(longlong *)unaff_RDI[0x12] + 0x930))();
    local_74 = (int)(fVar6 * DAT_023908e0);
    local_78 = 1;
    local_80 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_80);
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x19) = 1;
  }
  return 1;
}



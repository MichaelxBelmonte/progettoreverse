// Function: FUN_008060d0
// Address: 008060d0
// Size: 1249 bytes
// Class: GNString
// String references:
//   "%I %%"
//   "1/%I T"
//   "%I/%I"


ulonglong FUN_008060d0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar6;
  float fVar7;
  undefined8 uVar8;
  int local_c4;
  int local_c0;
  float local_bc;
  undefined *local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined *local_98;
  char local_90;
  undefined *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  undefined *local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  int local_4c;
  undefined *local_48;
  uint local_40;
  int local_38;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 != 0) {
    uVar8 = (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x970))();
    local_98 = local_48;
    local_90 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (undefined *)0x0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_90 = '\x01';
    cVar4 = FUN_007424c0(uVar8,&local_c0);
    if ((local_90 != '\0') && (local_98 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      uVar6 = 0;
    }
    else {
      plVar1 = (longlong *)unaff_RDI[0x1b];
      if ((local_c4 == 3) && (local_c0 != 3)) {
        local_50 = 1;
        local_58 = &DAT_024cc6f0;
        local_4c = local_c0;
        FUN_00d8cb40(&DAT_024cc6f0,&local_58);
        local_88 = local_48;
        local_80 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (undefined *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_80 = '\x01';
        (**(code **)(*plVar1 + 0x968))();
        if ((local_80 != '\0') && (local_88 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = 2;
        local_48 = &DAT_024c3df0;
        local_38 = local_c0;
        FUN_00d8cb40(&DAT_024c3df0,&local_48);
        local_78 = local_58;
        local_70 = 0;
        if ((char)local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        local_70 = '\x01';
        (**(code **)(*plVar1 + 0x968))();
        if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)(unaff_RDI + 0x1c) = 1;
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x918))();
      (**(code **)(*unaff_RDI + 0x5e8))();
      FUN_00364bb0();
      puVar3 = local_48;
      if ((char)local_40 == '\0') {
        if (local_48 != (undefined *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = local_40 & 0xffffff00;
      }
      uVar5 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x920))();
      uVar8 = FUN_00802530();
      puVar2 = local_58;
      if (((char)local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
        uVar8 = FUN_00d50b00();
      }
      FUN_00803100(uVar8,uVar5);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00364bb0();
      local_68 = local_48;
      local_60 = 0;
      if ((char)local_40 == '\0') {
        if (local_48 != (undefined *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = local_40 & 0xffffff00;
      }
      local_60 = '\x01';
      local_bc = (float)(**(code **)(*(longlong *)unaff_RDI[0x12] + 0x930))();
      FUN_00802530();
      local_a8 = local_58;
      local_a0 = 0;
      if (((char)local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_012762c0((double)local_bc);
      if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x5f0))();
      plVar1 = (longlong *)unaff_RDI[0x13];
      fVar7 = (float)(**(code **)(*(longlong *)unaff_RDI[0x12] + 0x930))();
      local_4c = (int)(fVar7 * DAT_023908e0);
      local_50 = 1;
      local_58 = &DAT_024cc6f0;
      FUN_00d8cb40(&DAT_024cc6f0,&local_58);
      local_b8 = local_48;
      local_b0 = 0;
      if ((char)local_40 == '\0') {
        if (local_48 != (undefined *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = local_40 & 0xffffff00;
      }
      local_b0 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_b0 != '\0') && (local_b8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 0x19) = 1;
    }
  }
  return uVar6 & 0xffffffff;
}



// Function: FUN_01e3b960
// Address: 01e3b960
// Size: 630 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x01e3b98b) */
/* WARNING: Removing unreachable block (ram,0x01e3b994) */

void FUN_01e3b960(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  longlong local_28;
  char local_20;
  
  FUN_01d81f40();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  unaff_RDI[3] = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x450))();
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = uVar4;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = param_2;
  (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  (**(code **)(*unaff_RDI + 0x558))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  unaff_RDI[6] = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = unaff_RDI[8];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        unaff_RDI[8] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = unaff_RDI[8];
        unaff_RDI[8] = local_28;
      }
    }
    else {
      local_20 = '\0';
      unaff_RDI[8] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 9) = uVar2;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = unaff_RDI[10];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        unaff_RDI[10] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = unaff_RDI[10];
        unaff_RDI[10] = local_28;
      }
    }
    else {
      local_20 = '\0';
      unaff_RDI[10] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0xb) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = unaff_RDI[0xc];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        unaff_RDI[0xc] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = unaff_RDI[0xc];
        unaff_RDI[0xc] = local_28;
      }
    }
    else {
      local_20 = '\0';
      unaff_RDI[0xc] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  FUN_00e88810();
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  return;
}



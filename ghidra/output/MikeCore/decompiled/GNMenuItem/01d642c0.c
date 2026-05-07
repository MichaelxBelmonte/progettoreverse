// Function: FUN_01d642c0
// Address: 01d642c0
// Size: 741 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d642eb) */
/* WARNING: Removing unreachable block (ram,0x01d642f4) */

void FUN_01d642c0(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_28;
  char local_20;
  
  FUN_00d50cd0();
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x18) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x1c) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x20) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x20);
        *(longlong *)(unaff_RDI + 0x20) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x20) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x28);
        *(longlong *)(unaff_RDI + 0x28) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x28) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x30) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x30);
        *(longlong *)(unaff_RDI + 0x30) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x30) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  *(longlong *)(unaff_RDI + 0x38) = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x40) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x40);
        *(longlong *)(unaff_RDI + 0x40) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x40) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x48) = uVar2;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x50) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x50);
        *(longlong *)(unaff_RDI + 0x50) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x50) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  return;
}



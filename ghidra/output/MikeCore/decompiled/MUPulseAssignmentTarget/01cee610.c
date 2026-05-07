// Function: FUN_01cee610
// Address: 01cee610
// Size: 670 bytes
// Class: MUPulseAssignmentTarget


/* WARNING: Removing unreachable block (ram,0x01cee63b) */
/* WARNING: Removing unreachable block (ram,0x01cee644) */

void FUN_01cee610(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_28;
  char local_20;
  
  FUN_01d0ec70();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1d0);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1d0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x1d0);
        *(longlong *)(unaff_RDI + 0x1d0) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x1d0) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1d8);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1d8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x1d8);
        *(longlong *)(unaff_RDI + 0x1d8) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x1d8) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1e0);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1e0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x1e0);
        *(longlong *)(unaff_RDI + 0x1e0) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x1e0) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1e8);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1e8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x1e8);
        *(longlong *)(unaff_RDI + 0x1e8) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x1e8) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x1f0) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 500) = uVar3;
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x1f8) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x1fc) = uVar3;
  return;
}



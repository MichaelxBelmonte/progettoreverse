// Function: FUN_01d0ec70
// Address: 01d0ec70
// Size: 623 bytes
// Class: GNControl


/* WARNING: Removing unreachable block (ram,0x01d0ec9b) */
/* WARNING: Removing unreachable block (ram,0x01d0eca4) */

void FUN_01d0ec70(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_28;
  char local_20;
  
  FUN_01e3b960();
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x138) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x140);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x140) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x140);
        *(longlong *)(unaff_RDI + 0x140) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x140) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x148) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x14c) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x150) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x158);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x158) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x158);
        *(longlong *)(unaff_RDI + 0x158) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x158) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x160);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x160) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x160);
        *(longlong *)(unaff_RDI + 0x160) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x160) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x168) = uVar2;
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x16a) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x430))();
  *(undefined4 *)(unaff_RDI + 0x170) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x174) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  return;
}



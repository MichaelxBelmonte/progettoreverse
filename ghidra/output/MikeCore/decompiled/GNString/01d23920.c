// Function: FUN_01d23920
// Address: 01d23920
// Size: 524 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d2394d) */
/* WARNING: Removing unreachable block (ram,0x01d23956) */

void FUN_01d23920(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_01d81f40();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  FUN_00e88810();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x30) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x30);
        *(longlong *)(unaff_RDI + 0x30) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x30) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x38) = uVar2;
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x39) = uVar2;
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x3a) = uVar2;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x48) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x48);
        *(longlong *)(unaff_RDI + 0x48) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x48) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x50) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x50);
        *(longlong *)(unaff_RDI + 0x50) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x50) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}



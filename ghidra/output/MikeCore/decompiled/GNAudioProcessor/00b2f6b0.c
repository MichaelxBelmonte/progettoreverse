// Function: FUN_00b2f6b0
// Address: 00b2f6b0
// Size: 658 bytes
// Class: GNAudioProcessor


/* WARNING: Removing unreachable block (ram,0x00b2f6dd) */
/* WARNING: Removing unreachable block (ram,0x00b2f6e6) */

void FUN_00b2f6b0(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_00d50cd0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x28);
        *(longlong *)(unaff_RDI + 0x28) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x28) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
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
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x40) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x40);
        *(longlong *)(unaff_RDI + 0x40) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x40) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(undefined8 *)(unaff_RDI + 0x38) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x38);
        *(longlong *)(unaff_RDI + 0x38) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(longlong *)(unaff_RDI + 0x38) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x18) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x48) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x4c) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  FUN_00e88810();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x50) = uVar3;
  return;
}



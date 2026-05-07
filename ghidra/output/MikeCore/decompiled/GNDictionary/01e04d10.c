// Function: FUN_01e04d10
// Address: 01e04d10
// Size: 770 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01e04d88) */
/* WARNING: Removing unreachable block (ram,0x01e04d91) */

void FUN_01e04d10(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  lVar2 = DAT_027f30a0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027f30a0 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d0ec70();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x1d0);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1d0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x1d0);
        *(longlong *)(unaff_RDI + 0x1d0) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x1d0) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x1e8);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1e8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x1e8);
        *(longlong *)(unaff_RDI + 0x1e8) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x1e8) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x1f0);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1f0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x1f0);
        *(longlong *)(unaff_RDI + 0x1f0) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x1f0) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x1f8);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1f8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x1f8);
        *(longlong *)(unaff_RDI + 0x1f8) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x1f8) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x1e0) = uVar3;
  if (0 < iVar4) {
    uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
    *(undefined1 *)(unaff_RDI + 0x208) = uVar3;
    if (iVar4 != 1) {
      uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
      *(undefined1 *)(unaff_RDI + 0x1e3) = uVar3;
    }
  }
  return;
}



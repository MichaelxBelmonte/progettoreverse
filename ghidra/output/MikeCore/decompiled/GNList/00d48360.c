// Function: FUN_00d48360
// Address: 00d48360
// Size: 734 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d483d8) */
/* WARNING: Removing unreachable block (ram,0x00d483e1) */

void FUN_00d48360(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  lVar2 = DAT_0277dca0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0277dca0 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50cd0();
  uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0xc) = uVar5;
  uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x430))();
  *(undefined4 *)(unaff_RDI + 0x10) = uVar5;
  uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x430))();
  *(undefined4 *)(unaff_RDI + 0x14) = uVar5;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x18) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x18);
        *(longlong *)(unaff_RDI + 0x18) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x18) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x20) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x21) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x28);
        *(longlong *)(unaff_RDI + 0x28) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x28) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x30) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x30);
        *(longlong *)(unaff_RDI + 0x30) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x30) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (1 < iVar4) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
    lVar2 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          *(undefined8 *)(unaff_RDI + 0x38) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(longlong *)(unaff_RDI + 0x38);
          *(longlong *)(unaff_RDI + 0x38) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(longlong *)(unaff_RDI + 0x38) = local_38;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



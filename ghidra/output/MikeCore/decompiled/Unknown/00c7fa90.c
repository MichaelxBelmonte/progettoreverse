// Function: FUN_00c7fa90
// Address: 00c7fa90
// Size: 570 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c7fb08) */
/* WARNING: Removing unreachable block (ram,0x00c7fb11) */

void FUN_00c7fa90(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  lVar2 = DAT_027f37f0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027f37f0 != 0) {
    FUN_00d50b00();
  }
  iVar3 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50cd0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x10) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x10);
        *(longlong *)(unaff_RDI + 0x10) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x10) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  FUN_00e88810();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  FUN_00e88810();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  FUN_00e88810();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
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
  if (1 < iVar3) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  }
  return;
}



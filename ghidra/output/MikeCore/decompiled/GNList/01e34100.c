// Function: FUN_01e34100
// Address: 01e34100
// Size: 687 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e3412f) */
/* WARNING: Removing unreachable block (ram,0x01e34138) */
/* WARNING: Removing unreachable block (ram,0x01e341bd) */
/* WARNING: Removing unreachable block (ram,0x01e341c6) */

void FUN_01e34100(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  FUN_00d50cd0();
  lVar2 = DAT_027f3880;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027f3880 != 0) {
    FUN_00d50b00();
  }
  iVar3 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (iVar3 < 2) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
    if (local_30 == '\0') {
      if (local_38 == 0) goto LAB_01e341d3;
      FUN_00d50b00();
    }
    else if (local_38 == 0) goto LAB_01e341d3;
    FUN_00d50b20();
  }
LAB_01e341d3:
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
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar2 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x40) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RDI + 0x40);
        *(longlong *)(unaff_RDI + 0x40) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x40) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}



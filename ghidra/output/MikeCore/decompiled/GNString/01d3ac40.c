// Function: FUN_01d3ac40
// Address: 01d3ac40
// Size: 572 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d3acb9) */
/* WARNING: Removing unreachable block (ram,0x01d3acc2) */

void FUN_01d3ac40(void)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong local_38;
  char local_30;
  
  lVar6 = DAT_027efe10;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027efe10 != 0) {
    FUN_00d50b00();
  }
  iVar2 = (**(code **)(*plVar1 + 0x598))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50cd0();
  iVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(int *)(unaff_RDI + 0xc) = iVar3;
  if (iVar3 != 2) {
    return;
  }
  uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x20) = uVar4;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar6 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar6 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(unaff_RDI + 0x18) = 0;
      }
      else {
        FUN_00d50b00();
        lVar6 = *(longlong *)(unaff_RDI + 0x18);
        *(longlong *)(unaff_RDI + 0x18) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(unaff_RDI + 0x18) = local_38;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (iVar2 != 1) {
    if (iVar2 < 2) {
      return;
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
    lVar6 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar6 != local_38) {
      lVar5 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar6 = *(longlong *)(unaff_RDI + 0x10);
        }
      }
      else {
        local_30 = '\0';
      }
      *(longlong *)(unaff_RDI + 0x10) = lVar5;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_30 == '\0') {
      return;
    }
    if (local_38 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  FUN_00d920f0();
  lVar6 = *(longlong *)(unaff_RDI + 0x10);
  lVar5 = lVar6;
  if (lVar6 == local_38) goto LAB_01d3ae1b;
  lVar5 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar5 = 0;
      goto LAB_01d3ada9;
    }
    FUN_00d50b00();
    lVar6 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong *)(unaff_RDI + 0x10) = local_38;
  }
  else {
    local_30 = '\0';
LAB_01d3ada9:
    *(longlong *)(unaff_RDI + 0x10) = lVar5;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
    lVar5 = local_38;
  }
LAB_01d3ae1b:
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}



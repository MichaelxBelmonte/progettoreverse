// Function: FUN_00c79930
// Address: 00c79930
// Size: 672 bytes
// Class: GNAttributeType


/* WARNING: Removing unreachable block (ram,0x00c7995f) */
/* WARNING: Removing unreachable block (ram,0x00c79968) */

void FUN_00c79930(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  FUN_00d50cd0();
  lVar2 = DAT_02772550;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_02772550 != 0) {
    FUN_00d50b00();
  }
  iVar3 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
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
  if (0 < iVar3) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
    lVar2 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          *(undefined8 *)(unaff_RDI + 0x20) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(longlong *)(unaff_RDI + 0x20);
          *(longlong *)(unaff_RDI + 0x20) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(longlong *)(unaff_RDI + 0x20) = local_38;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (1 < iVar3) {
      uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
      *(undefined4 *)(unaff_RDI + 0x38) = uVar4;
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
    }
  }
  return;
}



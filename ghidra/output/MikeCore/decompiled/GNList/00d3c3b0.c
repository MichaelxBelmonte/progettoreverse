// Function: FUN_00d3c3b0
// Address: 00d3c3b0
// Size: 920 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d3c3f0) */
/* WARNING: Removing unreachable block (ram,0x00d3c3fc) */

void FUN_00d3c3b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  FUN_00d50cd0();
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  lVar3 = DAT_0277d7c0;
  if (cVar4 == '\0') {
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0277d7c0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x578))();
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  lVar6 = lVar2;
  if (lVar2 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_00d3c469;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x20);
      *(longlong *)(unaff_RDI + 0x20) = local_40;
    }
    else {
      local_38 = '\0';
LAB_00d3c469:
      *(longlong *)(unaff_RDI + 0x20) = lVar6;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0277d7f8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0277d7f8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x578))();
  lVar2 = *(longlong *)(unaff_RDI + 0x38);
  lVar6 = lVar2;
  if (lVar2 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_00d3c526;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x38);
      *(longlong *)(unaff_RDI + 0x38) = local_40;
    }
    else {
      local_38 = '\0';
LAB_00d3c526:
      *(longlong *)(unaff_RDI + 0x38) = lVar6;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d4efa0();
  lVar3 = DAT_0277d800;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0277d800 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x578))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00c84370();
  lVar2 = *(longlong *)(unaff_RDI + 0x30);
  lVar6 = lVar2;
  if (lVar2 == local_40) goto LAB_00d3c674;
  lVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar6 = 0;
      goto LAB_00d3c632;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0x30);
    *(longlong *)(unaff_RDI + 0x30) = local_40;
  }
  else {
    local_38 = '\0';
LAB_00d3c632:
    *(longlong *)(unaff_RDI + 0x30) = lVar6;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar6 = local_40;
  }
LAB_00d3c674:
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0277d808;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0277d808 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar1 + 0x520))();
  *(undefined4 *)(unaff_RDI + 0x40) = uVar5;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// Function: FUN_00d3b530
// Address: 00d3b530
// Size: 823 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d3b56e) */
/* WARNING: Removing unreachable block (ram,0x00d3b57a) */

void FUN_00d3b530(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
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
  lVar5 = lVar2;
  if (lVar2 != local_38) {
    lVar5 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar5 = 0;
        goto LAB_00d3b5df;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x20);
      *(longlong *)(unaff_RDI + 0x20) = local_38;
    }
    else {
      local_30 = '\0';
LAB_00d3b5df:
      *(longlong *)(unaff_RDI + 0x20) = lVar5;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027e7c20;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x578))();
  lVar2 = *(longlong *)(unaff_RDI + 0x38);
  lVar5 = lVar2;
  if (lVar2 != local_38) {
    lVar5 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar5 = 0;
        goto LAB_00d3b690;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x38);
      *(longlong *)(unaff_RDI + 0x38) = local_38;
    }
    else {
      local_30 = '\0';
LAB_00d3b690:
      *(longlong *)(unaff_RDI + 0x38) = lVar5;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d4efa0();
  lVar3 = DAT_0277d7f0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0277d7f0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x578))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00c841b0();
  lVar2 = *(longlong *)(unaff_RDI + 0x30);
  lVar5 = lVar2;
  if (lVar2 == local_38) goto LAB_00d3b7dc;
  lVar5 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar5 = 0;
      goto LAB_00d3b79a;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0x30);
    *(longlong *)(unaff_RDI + 0x30) = local_38;
  }
  else {
    local_30 = '\0';
LAB_00d3b79a:
    *(longlong *)(unaff_RDI + 0x30) = lVar5;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = local_38;
  }
LAB_00d3b7dc:
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  return;
}



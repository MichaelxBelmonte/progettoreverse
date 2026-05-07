// Function: FUN_00aebab0
// Address: 00aebab0
// Size: 567 bytes
// Class: GNString


void FUN_00aebab0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  longlong local_38;
  longlong local_30;
  char local_28;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x390))(param_1,&local_38);
  lVar3 = local_30;
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (lVar3 != 0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (unaff_RSI < 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x398))();
    lVar3 = local_30;
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02765700;
    if (lVar3 != 0) {
      if (DAT_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    *(longlong *)(unaff_RDI + 0xa0) = local_70 - local_38;
  }
  else {
    *(longlong *)(unaff_RDI + 0xa0) = unaff_RSI;
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x3a0))();
    lVar3 = local_30;
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02765700;
    if (lVar3 != 0) {
      if (DAT_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  local_38 = local_38 + 4;
  *(longlong *)(unaff_RDI + 0xa0) = *(longlong *)(unaff_RDI + 0xa0) + -4;
  FUN_00c8e710();
  lVar3 = local_30;
  if ((((local_28 == '\0') && (local_30 != 0)) && (FUN_00d50b00(), local_28 != '\0')) &&
     (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar2 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar2 == lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x70) = lVar3;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x70);
  iVar1 = *(int *)(lVar3 + 0x18);
  FUN_00c8e340();
  *(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar1) = local_38;
  return;
}



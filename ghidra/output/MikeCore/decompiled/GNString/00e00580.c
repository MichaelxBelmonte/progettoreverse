// Function: FUN_00e00580
// Address: 00e00580
// Size: 576 bytes
// Class: GNString


void FUN_00e00580(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  lVar2 = DAT_028a8828;
  if ((DAT_028a8828 == 0) || (*(int *)(DAT_028a8828 + 0xc) == 0)) {
    FUN_00e00d20();
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00e01d80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00ce7730();
    plVar1 = local_40;
    local_60 = DAT_02784ac8;
    if (DAT_02784ac8 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    (**(code **)(*plVar1 + 0x400))(param_1,&local_60);
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00e01d80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00ce7810();
    plVar1 = local_40;
    local_50 = DAT_02784ac8;
    if (DAT_02784ac8 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x400))(param_1,&local_50);
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00e01d80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_028a8828;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_00e007aa;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00e007aa:
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



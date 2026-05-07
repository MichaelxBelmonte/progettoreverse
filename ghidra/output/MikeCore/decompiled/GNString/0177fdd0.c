// Function: FUN_0177fdd0
// Address: 0177fdd0
// Size: 515 bytes
// Class: GNString


void FUN_0177fdd0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  FUN_0177f010();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = *(longlong **)(local_40 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_027ce888;
  if (DAT_027ce888 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  cVar4 = '\x01';
  if (cVar3 == '\0') {
    plVar1 = *(longlong **)(local_40 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_027ce8a8;
    if (DAT_027ce8a8 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar5 = DAT_028adbf0;
  if (cVar4 != '\0') {
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  if ((DAT_028adbf0 == 0) || (DAT_028adbf9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adbf0 == 0) {
      FUN_0177d950();
      if (DAT_028adbf0 != local_40) {
        lVar5 = DAT_028adbf0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            lVar5 = DAT_028adbf0;
          }
        }
        else {
          local_38 = '\0';
        }
        DAT_028adbf0 = local_40;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != 0) && (DAT_028adbf8 == '\0')) {
        DAT_028adbf8 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      DAT_028adbf9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adbf9 = '\x01';
      FUN_00e8cb70();
    }
    lVar5 = DAT_028adbf0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_0177ffad;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0177ffad:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}



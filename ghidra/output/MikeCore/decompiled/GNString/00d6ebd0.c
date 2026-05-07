// Function: FUN_00d6ebd0
// Address: 00d6ebd0
// Size: 634 bytes
// Class: GNString


void FUN_00d6ebd0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  longlong *plVar3;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_028a7da8;
  if (DAT_028a7da8 != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  FUN_00d6efc0();
  plVar2 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00ce7730();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d6ec42;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
LAB_00d6ec42:
    lVar1 = DAT_028001c0;
    if ((plVar3 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
      if (DAT_028001c0 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar1;
      local_68 = '\x01';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_70);
      if (plVar3 == local_40) {
LAB_00d6ed33:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_00d6ed33;
        }
        FUN_00d50b20();
        local_38 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x388))();
      local_50 = local_60;
      local_48 = 0;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_48 = '\x01';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_50);
      plVar2 = local_40;
      if (local_40 == plVar3) {
LAB_00d6edeb:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar3 = plVar2;
          goto LAB_00d6edeb;
        }
        FUN_00d50b20();
        local_38 = '\0';
        plVar3 = local_40;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      *unaff_RDI = (longlong)plVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_00d6ee30;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_00d6ee30:
  FUN_00d50b20();
  return;
}



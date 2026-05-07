// Function: FUN_014fd840
// Address: 014fd840
// Size: 613 bytes
// Class: Unknown


undefined4 FUN_014fd840(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  int *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  int local_40;
  undefined4 uStack_3c;
  char local_38;
  
  lVar1 = DAT_027c2140;
  if (DAT_027c2140 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  FUN_00d8ede0();
  local_50 = local_68;
  local_48 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_48 = '\x01';
  FUN_00d997b0(&local_50,&local_98);
  lVar2 = CONCAT44(uStack_3c,local_40);
  lVar1 = *unaff_RDI;
  if (lVar1 == lVar2) {
    if (((char)unaff_RDI[1] != '\0') || (lVar2 == 0)) goto LAB_014fd960;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_014fd957;
    }
  }
  else {
    lVar4 = unaff_RDI[1];
    if (local_38 == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar2;
      if (((char)lVar4 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_014fd957:
      *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_014fd960:
      if ((local_38 != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014fd974;
    }
    *unaff_RDI = lVar2;
    if (((char)lVar4 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  local_38 = '\0';
LAB_014fd974:
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_88 = *unaff_RDI;
  local_80 = '\0';
  FUN_00ddb860();
  plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (local_38 == '\0') {
    if (((plVar3 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (CONCAT44(uStack_3c,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c2140;
  if (DAT_027c2140 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  (**(code **)(*plVar3 + 0x3c8))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = (**(code **)(*plVar3 + 0x410))();
  if (((char)uVar5 != '\0') && (unaff_RSI != (int *)0x0)) {
    *unaff_RSI = local_40 + 1;
  }
  FUN_00d50b20();
  return uVar5;
}



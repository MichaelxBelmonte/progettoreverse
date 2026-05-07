// Function: FUN_01c0e870
// Address: 01c0e870
// Size: 700 bytes
// Class: GNString


void FUN_01c0e870(undefined4 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  undefined4 uVar4;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  char local_30;
  
  if ((DAT_028b62b0 == (longlong *)0x0) || (DAT_028b62b9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b62b0 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar1 + 0x18))();
      bVar3 = DAT_028b62b0 == (longlong *)0x0;
      DAT_028b62b0 = plVar1;
      if (((bVar3) || (FUN_00d50b20(), DAT_028b62b0 != (longlong *)0x0)) && (DAT_028b62b8 == '\0'))
      {
        DAT_028b62b8 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028b62b9 = '\x01';
      param_1 = FUN_00e8cb70();
    }
    else {
      DAT_028b62b9 = '\x01';
      param_1 = FUN_00e8cb70();
    }
  }
  local_78 = *param_2;
  local_70 = '\0';
  FUN_01c0fe50(param_1,&local_78);
  puVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (undefined8 *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) goto LAB_01c0eaf5;
  local_68 = *param_2;
  local_60 = '\0';
  uVar4 = FUN_00cd1020();
  if (local_38 != (undefined8 *)0x0) {
    puVar2 = local_38;
    if (local_30 == '\0') {
      uVar4 = FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_028b62c0 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_0256df98;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x29) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x31) = 0;
      (*DAT_0256dfb0)();
      bVar3 = DAT_028b62c0 == (undefined8 *)0x0;
      DAT_028b62c0 = puVar2;
      if ((bVar3) || (uVar4 = FUN_00d50b20(), DAT_028b62c0 != (undefined8 *)0x0)) {
        if (DAT_028b62c8 == '\0') {
          DAT_028b62c8 = '\x01';
          uVar4 = FUN_00e8cb90();
          if (DAT_028b62c0 == (undefined8 *)0x0) goto LAB_01c0eaa4;
        }
LAB_01c0ea9a:
        puVar2 = DAT_028b62c0;
        uVar4 = FUN_00d50b00();
        goto LAB_01c0eaa6;
      }
    }
    else if (DAT_028b62c0 != (undefined8 *)0x0) goto LAB_01c0ea9a;
LAB_01c0eaa4:
    puVar2 = (undefined8 *)0x0;
  }
LAB_01c0eaa6:
  local_50 = '\0';
  local_48 = *param_2;
  local_40 = '\0';
  local_58 = puVar2;
  FUN_01c0ff00(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_01c0eaf5:
  if ((puVar2 == (undefined8 *)0x0) || (DAT_028b62c0 != puVar2)) {
    *unaff_RDI = puVar2;
  }
  else {
    FUN_00d50b20();
    *unaff_RDI = 0;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



// Function: FUN_01a58ff0
// Address: 01a58ff0
// Size: 648 bytes
// Class: Unknown


void FUN_01a58ff0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_70;
  char local_68;
  undefined8 *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RSI + 0x388))();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    bVar1 = false;
LAB_01a590ae:
    lVar5 = DAT_027e2160;
    if (DAT_027e2160 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    lVar4 = local_40;
    if (local_40 == 0) {
      lVar4 = 0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) goto LAB_01a59130;
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    (**(code **)(*unaff_RSI + 0x388))();
    FUN_01d21350();
    lVar4 = local_40;
    if (local_40 == 0) {
      lVar4 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 == 0) goto LAB_01a590ae;
LAB_01a59130:
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &DAT_02682260;
    uVar6 = (*DAT_02682278)();
    local_48 = '\x01';
    local_50 = puVar2;
    FUN_01d534b0(uVar6,&local_50);
    lVar5 = local_40;
    if (local_40 == lVar4) {
      lVar5 = lVar4;
      bVar3 = bVar1;
      if ((!bVar1) && (local_40 != 0)) {
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01a591e9;
        }
        goto LAB_01a59202;
      }
joined_r0x01a59265:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = lVar5;
LAB_01a591e9:
          lVar5 = lVar4;
          bVar3 = true;
        }
        goto joined_r0x01a59265;
      }
      if (bVar1) {
        FUN_00d50b20();
      }
LAB_01a59202:
      local_38 = '\0';
      bVar3 = true;
    }
    if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) goto LAB_01a59239;
    if (lVar5 != 0) {
      FUN_00d50b00();
      goto LAB_01a59239;
    }
  }
  lVar5 = 0;
LAB_01a59239:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



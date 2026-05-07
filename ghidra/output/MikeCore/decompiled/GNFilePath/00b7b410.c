// Function: FUN_00b7b410
// Address: 00b7b410
// Size: 711 bytes
// Class: GNFilePath


void FUN_00b7b410(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  byte bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00ce75c0();
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar3 = 1;
    plVar5 = (longlong *)0x0;
    bVar4 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar4 = true;
    bVar3 = 0;
    if ((local_38 != '\0') && (bVar3 = 0, local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
      bVar4 = true;
      bVar3 = 0;
    }
  }
  else {
    bVar4 = true;
    bVar3 = 0;
  }
  FUN_00003020();
  FUN_00d91a70(param_1,1);
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
  (**(code **)(*plVar5 + 0x400))(param_1,&local_50);
  plVar6 = local_40;
  if (local_40 == plVar5) {
    plVar6 = plVar5;
    bVar1 = bVar4;
    if ((bool)(bVar3 & local_40 != (longlong *)0x0)) {
      if (local_38 != '\0') goto LAB_00b7b50b;
      FUN_00d50b00();
      bVar1 = true;
    }
LAB_00b7b554:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar1 = true;
      if (bVar4) {
        FUN_00d50b20();
      }
      goto LAB_00b7b554;
    }
    plVar5 = plVar6;
    if (bVar4) {
      FUN_00d50b20();
    }
LAB_00b7b50b:
    local_38 = '\0';
    bVar1 = true;
    plVar6 = plVar5;
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_028a5680;
  if ((DAT_028a5680 == 0) && (lVar2 = DAT_027642c0, DAT_027642c0 == 0)) {
    lVar2 = 0;
  }
  else {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar2;
  (**(code **)(*plVar6 + 0x400))(param_1,&local_70);
  plVar5 = local_40;
  if (local_40 == plVar6) {
    plVar5 = plVar6;
    bVar4 = bVar1;
    if ((!bVar1) && (local_40 != (longlong *)0x0)) {
      if (local_38 != '\0') goto LAB_00b7b643;
      FUN_00d50b00();
      bVar4 = true;
    }
  }
  else {
    if (local_38 != '\0') {
      if (bVar1) {
        FUN_00d50b20();
      }
LAB_00b7b643:
      local_38 = '\0';
      bVar4 = true;
      goto LAB_00b7b687;
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar4 = true;
    if (bVar1) {
      FUN_00d50b20();
      bVar4 = true;
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00b7b687:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar4) && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



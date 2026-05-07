// Function: FUN_00cd59f0
// Address: 00cd59f0
// Size: 992 bytes
// Class: GNString


void FUN_00cd59f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  
  lVar5 = DAT_02704030;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_02704030 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar5;
  local_98 = '\x01';
  (**(code **)(*plVar1 + 0x578))(param_1,&local_a0);
  lVar5 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar5 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        *(undefined8 *)(unaff_RDI + 0x50) = 0;
      }
      else {
        FUN_00d50b00();
        lVar5 = *(longlong *)(unaff_RDI + 0x50);
        *(longlong *)(unaff_RDI + 0x50) = local_40;
      }
    }
    else {
      local_38 = '\0';
      *(longlong *)(unaff_RDI + 0x50) = local_40;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_02774d80;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_02774d80 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar5;
  local_88 = '\x01';
  (**(code **)(*plVar1 + 0x578))(param_1,&local_90);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_02774d88;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_02774d88 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar5;
  local_78 = '\x01';
  (**(code **)(*plVar1 + 0x578))(param_1,&local_80);
  lVar3 = local_40;
  lVar5 = local_50;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) {
    uVar4 = 0;
    lVar6 = 0;
LAB_00cd5c3b:
    local_48 = uVar4;
    if (lVar6 != 0) goto LAB_00cd5d16;
  }
  else {
    FUN_00cd29e0();
    lVar6 = local_40;
    if (local_40 != 0) {
      uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00cd5c3b;
    }
    lVar6 = 0;
    uVar4 = 0;
  }
  local_48 = uVar4;
  if (lVar3 != 0) {
    local_70 = lVar3;
    local_68 = '\0';
    FUN_00cddf30();
    lVar5 = local_60;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    uVar4 = FUN_00cd1020();
    if (local_40 == 0) {
      lVar6 = 0;
    }
    else {
      local_48 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      lVar6 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00cd5d16:
  if (lVar6 != 0) {
    lVar5 = *(longlong *)(lVar6 + 0x10);
    lVar2 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar2 != lVar5) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x40) = lVar5;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    *(undefined4 *)(unaff_RDI + 0x48) = 0;
    (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + 0x30) + 0x368))();
    lVar5 = *(longlong *)(lVar6 + 0x10);
    if (*(longlong *)(lVar5 + 0x38) != 0) {
      FUN_00cd4fc0();
      lVar5 = *(longlong *)(lVar6 + 0x10);
    }
    (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x378))();
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}



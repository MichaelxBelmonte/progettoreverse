// Function: FUN_01c87c50
// Address: 01c87c50
// Size: 1311 bytes
// Class: Unknown


void FUN_01c87c50(void)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar4 = *unaff_RSI;
  if (unaff_RDI[0x28] == lVar4) {
    return;
  }
  if (unaff_RDI[0x28] == 0) {
    lVar5 = 0;
    if (lVar4 != 0) goto LAB_01c87d80;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_e8 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_80 = 0;
    lVar4 = unaff_RDI[0x28];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar4;
    FUN_00d41040(&local_88,&local_e8);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = *unaff_RSI;
    lVar5 = unaff_RDI[0x28];
    if (lVar5 != lVar4) {
LAB_01c87d80:
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x28] = lVar4;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((longlong *)unaff_RDI[0x29] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x3a0))();
    plVar2 = local_38;
    plVar1 = (longlong *)unaff_RDI[0x28];
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == plVar1) {
LAB_01c87e71:
      lVar4 = unaff_RDI[0x29];
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x3a0))();
      plVar1 = local_38;
      local_70 = 0;
      local_78 = unaff_RDI[0x29];
      if (local_78 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x3e0))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = 0;
      if (unaff_RDI[0x29] != 0) {
        unaff_RDI[0x29] = 0;
        FUN_00d50b20();
        goto LAB_01c87e71;
      }
    }
    if (lVar4 != 0) goto LAB_01c8804f;
  }
  if (unaff_RDI[0x28] == 0) {
    return;
  }
  FUN_00e7bdb0();
  uVar3 = FUN_00e7bdb0();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_f8 + 0x378))();
  local_48 = local_a8;
  local_40 = 0;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
    lVar4 = unaff_RDI[0x2b];
  }
  else {
    local_a0 = '\0';
    lVar4 = unaff_RDI[0x2b];
  }
  local_40 = '\x01';
  if (lVar4 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  local_d8 = lVar4;
  FUN_01a8bca0(1,uVar3 >> 0x20,&local_48,&local_d8);
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = plVar1;
  local_c0 = '\0';
  (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x3d8))();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)unaff_RDI[0x29];
  if (plVar2 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x29] = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01c8804f:
  if (unaff_RDI[0x28] != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b8 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_50 = 0;
    lVar4 = unaff_RDI[0x28];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar4;
    FUN_00d41430(&local_58,&local_b8);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// Function: FUN_00500000
// Address: 00500000
// Size: 2044 bytes
// Class: MDHorizontalRulerSelectorView


undefined8 * FUN_00500000(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *unaff_RDI;
  int iVar3;
  longlong lVar4;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  FUN_0027c9f0();
  lVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar4;
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar2 + 0x18))();
  iVar3 = 0;
  local_48 = plVar2;
  do {
    lVar4 = DAT_02709e08;
    if (DAT_02709e08 != 0) {
      FUN_00d50b00();
    }
    local_f0 = lVar4;
    local_e8 = '\x01';
    FUN_01d5eb20(iVar3,&local_f0);
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_01d65230();
      local_d0 = local_40;
      local_c8 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c8 = '\x01';
      FUN_01d65460();
      local_c0 = local_58;
      local_b8 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_b8 = '\x01';
      FUN_01d5d9b0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d654a0();
      FUN_01d65490();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  FUN_01d5dc80();
  lVar4 = 0;
  do {
    lVar1 = DAT_02709e10;
    if (DAT_02709e10 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar1;
    local_d8 = '\x01';
    FUN_01d5eb20(*(undefined4 *)((longlong)&DAT_023b4a50 + lVar4),&local_e0);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_01d65230();
      local_b0 = local_40;
      local_a8 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_a8 = '\x01';
      FUN_01d65460();
      local_a0 = local_58;
      local_98 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_98 = '\x01';
      FUN_01d5d9b0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d654a0();
      FUN_01d65490();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x14);
  FUN_01d5dc80();
  lVar4 = local_60;
  local_90 = DAT_02709e18;
  if (DAT_02709e18 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_01d5eb20(0,&local_90);
  lVar1 = local_40;
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
  if (lVar1 != 0) {
    FUN_01d65230();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_01d65460();
    local_70 = local_58;
    local_68 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = '\x01';
    FUN_01d5d9b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d654a0();
    FUN_01d65490();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = DAT_02709e18;
  if (DAT_02709e18 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  FUN_01d5eb20(1,&local_90);
  lVar1 = local_40;
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
  if (lVar1 != 0) {
    FUN_01d65230();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_01d65460();
    local_70 = local_58;
    local_68 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = '\x01';
    FUN_01d5d9b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d654a0();
    FUN_01d65490();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



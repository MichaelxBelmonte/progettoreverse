// Function: FUN_00dbff30
// Address: 00dbff30
// Size: 1442 bytes
// Class: GNValue


void FUN_00dbff30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar3;
  bool bVar4;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  undefined8 *local_f8;
  undefined1 local_d8 [8];
  undefined1 local_d0;
  undefined8 *local_c8;
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
  undefined4 local_5c;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  lVar1 = DAT_02783b28;
  local_5c = param_4;
  if (DAT_02783b28 != 0) {
    FUN_00d50b00();
  }
  local_f8 = param_1;
  local_c8 = param_3;
  FUN_00dbdbc0();
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00dbdd00();
  lVar3 = local_48;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02783b10;
  lVar1 = DAT_02783b08;
  if ((char)local_5c == '\0') {
    local_168 = *unaff_RDI;
    local_160 = 0;
    local_a0 = lVar3;
    local_98 = '\0';
    if (DAT_02783b10 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    local_158 = *local_c8;
    local_150 = 0;
    FUN_00dbebd0(&local_90,&local_a0,&local_158);
    lVar1 = local_48;
    if (lVar3 == local_48) {
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar4 = lVar3 != 0;
      lVar3 = lVar1;
      if (bVar4) {
        FUN_00d50b20();
      }
    }
    else {
      bVar4 = lVar3 != 0;
      lVar3 = lVar1;
      if (bVar4) {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = lVar3;
    local_b8 = '\0';
    if (DAT_02783b08 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    local_178 = *local_c8;
    local_170 = 0;
    FUN_00dbebd0(&local_b0,&local_c0,&local_178);
    lVar1 = local_48;
    if (lVar3 == local_48) {
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar4 = lVar3 != 0;
      lVar3 = lVar1;
      if (bVar4) {
        FUN_00d50b20();
      }
    }
    else {
      bVar4 = lVar3 != 0;
      lVar3 = lVar1;
      if (bVar4) {
        FUN_00d50b20();
      }
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02783b18;
  local_148 = *unaff_RDI;
  local_140 = 0;
  local_78 = '\0';
  local_80 = lVar3;
  if (DAT_02783b18 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  local_138 = *local_f8;
  local_130 = 0;
  FUN_00dbf000();
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_d0 = 1;
  FUN_00dbebd0(&local_70,&local_80,local_d8);
  lVar2 = local_48;
  if (lVar3 == local_48) {
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar4 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_40 = '\0';
    lVar3 = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_128 = *unaff_RSI;
  local_120 = 0;
  local_110 = 0;
  FUN_00dbde70();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_108 = local_48;
  local_100 = 1;
  FUN_00dbfc90(&local_108,0);
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



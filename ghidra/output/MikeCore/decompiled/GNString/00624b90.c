// Function: FUN_00624b90
// Address: 00624b90
// Size: 1787 bytes
// Class: GNString


undefined4 FUN_00624b90(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong *local_50;
  uint local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  FUN_01f3a660();
  plVar3 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_80 = plVar3;
  FUN_01f27fe0();
  FUN_01f3a620();
  plVar3 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_d0 = plVar3;
  uVar5 = FUN_01caeae0();
  local_c8 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_00624d85;
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == (longlong *)0x0) {
LAB_00624d85:
    local_54 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    goto joined_r0x00624d8f;
  }
  lVar1 = DAT_02725a70;
  if (plVar3 == (longlong *)0x0) {
    if (DAT_02725a70 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02725a80;
    local_110 = lVar1;
    local_108 = '\x01';
    if (DAT_02725a80 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar2;
    local_f8 = '\x01';
    local_f0 = 0;
    local_e8 = '\0';
    FUN_00d31230(&local_f0,&local_100);
    local_a0 = local_50;
    local_98 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_98 = '\x01';
    FUN_01d64eb0();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_02725a70 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02725a78;
    if (DAT_02725a78 != 0) {
      FUN_00d50b00();
    }
    local_130 = lVar2;
    local_128 = '\x01';
    local_120 = 0;
    local_118 = '\0';
    FUN_00d31230(&local_120,&local_130);
    local_b0 = local_78;
    local_a8 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_a8 = '\x01';
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    FUN_00d50b00();
    local_40 = plVar3;
    local_38 = '\x01';
    FUN_00d93690();
    local_c0 = local_68;
    local_b8 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_b8 = '\x01';
    FUN_01d64eb0();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  local_54 = 0;
joined_r0x00624d8f:
  if (local_80 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_01da4890();
    plVar3 = local_50;
    if (((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e561b0();
    if (local_68 == 0) {
      local_48 = local_48 & 0xffffff00;
      local_50 = (longlong *)0x0;
      plVar6 = (longlong *)0x0;
    }
    else {
      FUN_01e561b0();
      FUN_01d8b200();
      plVar6 = local_50;
      if ((char)local_48 == '\0') {
        if (local_50 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      local_e0 = local_80;
      local_d8 = '\0';
      FUN_01caeba0();
      local_90 = local_50;
      local_88 = 0;
      if ((char)local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      local_88 = '\x01';
      uVar4 = (**(code **)(*plVar6 + 0x3b8))();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_54 == '\0') {
    FUN_00d50b20();
  }
  plVar3 = local_80;
  if (local_d0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}



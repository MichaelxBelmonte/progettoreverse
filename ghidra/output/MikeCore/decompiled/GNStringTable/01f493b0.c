// Function: FUN_01f493b0
// Address: 01f493b0
// Size: 1399 bytes
// Class: GNStringTable


undefined4 FUN_01f493b0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  uVar5 = FUN_01caeae0();
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f49416;
    }
LAB_01f494c8:
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  }
  else {
    if (local_58 == (longlong *)0x0) goto LAB_01f494c8;
LAB_01f49416:
    lVar1 = DAT_02725a70;
    if (*(longlong *)(unaff_RDI + 0xc0) == 0) {
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02725a80;
      local_f8 = lVar1;
      local_f0 = '\x01';
      if (DAT_02725a80 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      local_d8 = 0;
      local_d0 = '\0';
      FUN_00d31230(&local_d8,&local_e8);
      local_78 = local_58;
      local_70 = 0;
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = local_50 & 0xffffff00;
      }
      local_70 = '\x01';
      FUN_01d64eb0();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
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
      local_118 = lVar2;
      local_110 = '\x01';
      local_108 = 0;
      local_100 = '\0';
      FUN_00d31230(&local_108,&local_118);
      local_88 = local_b8;
      local_80 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_80 = '\x01';
      lVar2 = *(longlong *)(unaff_RDI + 0xc0);
      local_50 = 1;
      local_58 = &DAT_024c5048;
      local_40 = 0;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      local_48 = lVar2;
      FUN_00d93690();
      local_98 = local_c8;
      local_90 = 0;
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_c0 = '\0';
      }
      local_90 = '\x01';
      FUN_01d64eb0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      local_58 = &DAT_024c5048;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_34 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  }
  if (lVar1 == 0) {
    uVar4 = 0;
    goto LAB_01f49901;
  }
  FUN_01da4890();
  plVar3 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar3 + 0x468))();
  plVar3 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f4982a;
    }
LAB_01f49880:
    uVar4 = 0;
  }
  else {
    if (local_58 == (longlong *)0x0) goto LAB_01f49880;
LAB_01f4982a:
    local_a0 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_a8 = lVar1;
    FUN_01caeba0();
    local_68 = local_58;
    local_60 = 0;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    local_60 = '\x01';
    uVar4 = (**(code **)(*plVar3 + 0x3b8))();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f49901:
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return uVar4;
}



// Function: FUN_01d69be0
// Address: 01d69be0
// Size: 2026 bytes
// Class: GNMenuItem


void FUN_01d69be0(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_158;
  undefined8 *local_150 [2];
  longlong local_140;
  char local_138;
  longlong local_128;
  char local_120;
  undefined4 local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
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
  undefined4 local_6c;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01cb4330();
  if ((DAT_028b8450 == (longlong *)0x0) || (DAT_028b8459 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8450 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b8450 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b8450 != (longlong *)0x0;
        DAT_028b8450 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8458 == '\0') {
        DAT_028b8458 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_100 = local_68;
      local_f8 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_f8 = '\x01';
      (**(code **)(*unaff_RDI + 0x398))();
      local_f0 = local_58;
      local_e8 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_e8 = '\x01';
      FUN_01cfd290(DAT_02394214,&local_f0);
      local_6c = 0;
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_d0 = local_48;
      local_c8 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c8 = '\x01';
      (**(code **)(*unaff_RDI + 0x3a0))();
      local_c0 = local_38;
      local_b8 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_b8 = '\x01';
      FUN_01cfd290(DAT_02394214,&local_c0);
      local_158 = local_e0;
      FUN_0049c630(&local_158,&local_6c,4);
      local_150[0] = (undefined8 *)&DAT_02647118;
      local_118 = 0x3f800000;
      FUN_01f7ba60(0,local_150);
      local_150[0] = (undefined8 *)&DAT_024f9300;
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      local_150[0] = &DAT_024c5048;
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b8459 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8459 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b8460 == (longlong *)0x0) || (DAT_028b8469 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8460 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b8460 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b8460 != (longlong *)0x0;
        DAT_028b8460 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8468 == '\0') {
        DAT_028b8468 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_b0 = local_68;
      local_a8 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_a8 = '\x01';
      (**(code **)(*unaff_RDI + 0x3a0))();
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
      FUN_01cfd290(DAT_02391094,&local_a0);
      local_6c = 0x3f800000;
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_90 = local_48;
      local_88 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_88 = '\x01';
      (**(code **)(*unaff_RDI + 0x398))();
      local_80 = local_38;
      local_78 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_78 = '\x01';
      FUN_01cfd290(DAT_02391094,&local_80);
      local_158 = local_e0;
      FUN_0049c630(&local_158,&local_6c,4);
      local_150[0] = (undefined8 *)&DAT_02647118;
      local_118 = 0;
      FUN_01f7ba60(0,local_150);
      local_150[0] = (undefined8 *)&DAT_024f9300;
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      local_150[0] = &DAT_024c5048;
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b8469 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8469 = '\x01';
      FUN_00e8cb70();
    }
  }
  return;
}



// Function: FUN_01f872e0
// Address: 01f872e0
// Size: 1664 bytes
// Class: GNFilePath


undefined8 FUN_01f872e0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01f83aa0();
    plVar3 = local_50;
    lVar2 = DAT_027f1fc8;
    if (DAT_027f1fc8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02801050;
    if (DAT_02801050 != 0) {
      FUN_00d50b00();
    }
    local_150 = lVar1;
    local_148 = '\x01';
    local_140 = 0;
    local_138 = '\0';
    FUN_00d31230(&local_140,&local_150);
    local_a0 = local_60;
    local_98 = 0;
    lVar1 = DAT_028bb250;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
        lVar1 = DAT_028bb250;
      }
    }
    else {
      local_58 = '\0';
    }
    local_98 = '\x01';
    DAT_028bb250 = lVar1;
    if (lVar1 != 0) {
      local_98 = '\x01';
      FUN_00d50b00();
    }
    FUN_00df1af0();
    local_90 = local_b0;
    local_88 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_88 = '\x01';
    (**(code **)(*plVar3 + 0x4f0))(&local_90,&local_a0);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    local_120 = DAT_028bb250;
    local_130 = plVar3;
    local_128 = '\0';
    if (DAT_028bb250 != 0) {
      FUN_00d50b00();
    }
    local_118 = '\x01';
    FUN_001220c0();
    local_80 = local_60;
    local_78 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_78 = '\x01';
    local_108 = '\0';
    local_110 = 0;
    FUN_01f444f0(&local_80,&local_130,&local_110);
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d6f370();
      (**(code **)(*plVar4 + 0x368))();
      local_70 = local_50;
      local_68 = 0;
      local_100 = DAT_02801058;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          local_100 = DAT_02801058;
        }
      }
      else {
        local_48 = '\0';
      }
      local_68 = '\x01';
      DAT_02801058 = local_100;
      if (local_100 != 0) {
        local_68 = '\x01';
        FUN_00d50b00();
      }
      local_f8 = '\x01';
      FUN_00d6f570();
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01da4890();
      local_f0 = plVar4;
      local_e8 = '\0';
      cVar5 = (**(code **)(*local_40 + 0x448))();
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027f1fc8;
      if (cVar5 == '\0') {
        if (DAT_027f1fc8 != 0) {
          FUN_00d50b00();
        }
        lVar1 = DAT_02801060;
        local_e0 = lVar2;
        local_d8 = '\x01';
        if (DAT_02801060 != 0) {
          FUN_00d50b00();
        }
        local_d0 = lVar1;
        local_c8 = '\x01';
        FUN_01f6ca30();
        (**(code **)(*local_40 + 0x5e0))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01da4890();
        local_c0 = plVar4;
        local_b8 = '\0';
        (**(code **)(*local_40 + 0x450))();
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



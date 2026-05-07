// Function: FUN_01f88e80
// Address: 01f88e80
// Size: 2114 bytes
// Class: GNFilePath


undefined8 FUN_01f88e80(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  bool bVar6;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
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
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_00ce6e90();
  plVar5 = local_48;
  lVar1 = DAT_027f1fc8;
  if (DAT_027f1fc8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02801050;
  if (DAT_02801050 != 0) {
    FUN_00d50b00();
  }
  local_168 = lVar2;
  local_160 = '\x01';
  local_158 = 0;
  local_150 = '\0';
  FUN_00d31230(&local_158,&local_168);
  local_d8 = local_68;
  local_d0 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_d0 = '\x01';
  FUN_00deeb50();
  FUN_00df1af0();
  local_c8 = local_58;
  local_c0 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_c0 = '\x01';
  (**(code **)(*plVar5 + 0x4f0))(&local_c8,&local_d8);
  plVar5 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_148 = DAT_02801068;
  if (DAT_02801068 != 0) {
    FUN_00d50b00();
  }
  local_140 = '\x01';
  local_138 = 0;
  local_130 = '\0';
  FUN_00d710b0(&local_138,&local_148);
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) goto LAB_01f89296;
  local_128 = plVar3;
  local_120 = '\0';
  FUN_00cddf30();
  plVar3 = local_38;
  if (plVar5 == local_38) {
LAB_01f89255:
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar6 = plVar5 != (longlong *)0x0;
      plVar5 = plVar3;
      if (bVar6) {
        FUN_00d50b20();
      }
      goto LAB_01f89255;
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_30 = '\0';
    plVar5 = plVar3;
  }
  if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f89296:
  FUN_01f27fe0();
  local_110 = '\0';
  local_118 = plVar5;
  FUN_00deeb50();
  local_a8 = local_58;
  local_a0 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_a0 = '\x01';
  FUN_001220c0();
  local_b8 = local_68;
  local_b0 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_b0 = '\x01';
  FUN_00deeb50();
  local_98 = local_78;
  local_90 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_90 = '\x01';
  FUN_01f444f0(&local_b8,&local_118,&local_98);
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d6f370();
    (**(code **)(*plVar3 + 0x368))();
    local_88 = local_48;
    local_80 = 0;
    local_108 = DAT_02801068;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        local_108 = DAT_02801068;
      }
    }
    else {
      local_40 = '\0';
    }
    local_80 = '\x01';
    DAT_02801068 = local_108;
    if (local_108 != 0) {
      local_80 = '\x01';
      FUN_00d50b00();
    }
    local_100 = '\x01';
    FUN_00d6f570();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar4 = FUN_01f88b80();
    lVar1 = DAT_027f1fc8;
    if (cVar4 == '\0') {
      if (DAT_027f1fc8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02801060;
      local_f8 = lVar1;
      local_f0 = '\x01';
      if (DAT_02801060 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      FUN_01f6ca30();
      (**(code **)(*local_38 + 0x5e0))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}



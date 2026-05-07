// Function: FUN_01f6b400
// Address: 01f6b400
// Size: 1946 bytes
// Class: GNCustomAlertPanel


void FUN_01f6b400(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
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
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar1 != 0) {
    local_130 = 0;
    FUN_00d50b00();
    local_130 = '\x01';
    local_138 = lVar1;
    FUN_01f6c380(param_1,&local_138);
    local_d8 = local_38;
    local_d0 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_d0 = '\x01';
    local_188 = *unaff_RSI;
    local_180 = '\0';
    FUN_00e0e2a0(param_1,&local_188);
    local_e8 = local_48;
    local_e0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_e0 = '\x01';
    FUN_01e125e0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x80);
  if (lVar1 != 0) {
    local_120 = 0;
    FUN_00d50b00();
    local_120 = '\x01';
    local_128 = lVar1;
    FUN_01f6c380(param_1,&local_128);
    local_b8 = local_38;
    local_b0 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_b0 = '\x01';
    local_178 = *unaff_RSI;
    local_170 = '\0';
    FUN_00e0e2a0(param_1,&local_178);
    local_c8 = local_48;
    local_c0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_c0 = '\x01';
    FUN_01e125e0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar2 != (longlong *)0x0) {
    local_110 = 0;
    FUN_00d50b00();
    local_110 = '\x01';
    local_118 = plVar2;
    FUN_01f6c380(param_1,&local_118);
    local_98 = local_38;
    local_90 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_90 = '\x01';
    local_168 = *unaff_RSI;
    local_160 = '\0';
    FUN_00e0e2a0(param_1,&local_168);
    local_a8 = local_48;
    local_a0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_a0 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar2 != (longlong *)0x0) {
    local_100 = 0;
    FUN_00d50b00();
    local_100 = '\x01';
    local_108 = plVar2;
    FUN_01f6c380(param_1,&local_108);
    local_78 = local_38;
    local_70 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_70 = '\x01';
    local_158 = *unaff_RSI;
    local_150 = '\0';
    FUN_00e0e2a0(param_1,&local_158);
    local_88 = local_48;
    local_80 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x98);
  if (plVar2 != (longlong *)0x0) {
    local_f0 = 0;
    FUN_00d50b00();
    local_f0 = '\x01';
    local_f8 = plVar2;
    FUN_01f6c380(param_1,&local_f8);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    local_148 = *unaff_RSI;
    local_140 = '\0';
    FUN_00e0e2a0(param_1,&local_148);
    local_68 = local_48;
    local_60 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



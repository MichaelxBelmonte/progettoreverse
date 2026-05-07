// Function: FUN_01ee7b90
// Address: 01ee7b90
// Size: 3638 bytes
// Class: GNData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ee7b90(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 in_EDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 in_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar8 [16];
  float fVar10;
  undefined1 auVar9 [16];
  longlong *local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
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
  undefined1 local_b8 [16];
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  longlong local_40;
  char local_38;
  
  uStack_50 = in_XMM1_Qb;
  local_58 = (undefined1  [8])param_2;
  uStack_60 = in_XMM0_Qb;
  local_68 = (undefined1  [8])param_1;
  switch(in_EDX) {
  case 2:
    FUN_01d48b40();
    lVar2 = unaff_RDI[0x1f];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_58._0_4_ = (float)local_58._0_4_ + (float)local_68._0_4_;
    local_58._4_4_ = (float)local_58._4_4_ + (float)local_68._4_4_;
    uStack_50._0_4_ = (float)uStack_50 + (float)uStack_60;
    uStack_50._4_4_ = uStack_50._4_4_ + uStack_60._4_4_;
    local_b8._4_12_ = local_58._4_12_;
    local_b8._0_4_ = (float)local_58._0_4_ + DAT_02390d00;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    local_58._0_4_ = (float)local_58._4_4_ + DAT_02390d00;
    uStack_50._0_4_ = uStack_50._4_4_;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    lVar2 = unaff_RDI[0xe];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    break;
  case 3:
    FUN_01d48b40();
    FUN_01d48370();
    plVar1 = (longlong *)*unaff_RSI;
    local_210 = '\0';
    local_218 = plVar1;
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_218);
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    (**(code **)(*plVar1 + 0x398))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_160 = 0;
    lVar2 = unaff_RDI[0x1e];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_160 = '\x01';
    local_168 = lVar2;
    FUN_01d488d0();
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    local_208 = *unaff_RSI;
    local_200 = '\0';
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_208);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01ee9430();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
    local_b8._0_4_ = (int)unaff_RDI[0x34];
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    local_150 = 0;
    local_158 = unaff_RDI[0xe];
    if (local_158 != 0) {
      FUN_00d50b00();
    }
    local_150 = '\x01';
    FUN_01d488d0();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    auVar9 = insertps(_local_58,ZEXT416((uint)(DAT_02390d34 + (float)local_b8._0_4_)),0x10);
    auVar3._4_4_ = local_58._4_4_;
    auVar3._0_4_ = (local_58._4_4_ - (float)local_b8._0_4_) + local_68._4_4_;
    auVar3._8_4_ = local_58._12_4_;
    auVar3._12_4_ = local_58._12_4_;
    auVar8 = insertps(_local_68,auVar3,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))(auVar8._0_8_,auVar9._0_8_);
    plVar1 = (longlong *)*unaff_RSI;
    local_1f0 = '\0';
    local_1f8 = plVar1;
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_1f8);
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
    local_140 = 0;
    local_148 = unaff_RDI[0xf];
    if (local_148 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    FUN_01d488d0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_1e0 = '\0';
    local_1e8 = plVar1;
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_1e8);
    local_138 = local_40;
    local_130 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_130 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    FUN_01d48b40();
    local_100 = 0;
    local_108 = unaff_RDI[0xf];
    if (local_108 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    FUN_01d488d0();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_1c0 = '\0';
    local_1c8 = plVar1;
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_1c8);
    local_f8 = local_40;
    local_f0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_f0 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 5:
    FUN_01d48b40();
    local_120 = 0;
    local_128 = unaff_RDI[0xf];
    if (local_128 != 0) {
      FUN_00d50b00();
    }
    local_120 = '\x01';
    FUN_01d488d0();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_1d0 = '\0';
    local_1d8 = plVar1;
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_1d8);
    local_118 = local_40;
    local_110 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_110 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    break;
  default:
    local_178 = *unaff_RSI;
    local_170 = '\0';
    FUN_01cba0b0();
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 0xb:
    FUN_01cfcdc0();
    lVar2 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_1b8 = lVar2;
    local_1b0 = '\0';
    FUN_01d488d0();
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    local_b8._4_12_ = local_68._4_12_;
    local_b8._0_4_ = local_68._0_4_ + DAT_023b1608;
    plVar1 = (longlong *)*unaff_RSI;
    local_1a0 = '\0';
    local_58._4_4_ = (float)local_58._4_4_ + _UNK_02422a24;
    local_58._0_4_ = (float)local_58._0_4_ + _DAT_02422a20;
    uStack_50._0_4_ = (float)uStack_50 + _UNK_02422a28;
    uStack_50._4_4_ = uStack_50._4_4_ + _UNK_02422a2c;
    local_1a8 = plVar1;
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_1a8);
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar1 + 0x3a0))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48370();
    insertps(_local_58,*(undefined4 *)((longlong)unaff_RDI + 0x1a4),0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    local_e0 = 0;
    local_e8 = unaff_RDI[0xe];
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    FUN_01d488d0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    auVar8._4_4_ = local_68._4_4_;
    auVar8._0_4_ = local_68._4_4_;
    auVar8._8_4_ = uStack_60._4_4_;
    auVar8._12_4_ = uStack_60._4_4_;
    auVar9._4_12_ = auVar8._4_12_;
    auVar9._0_4_ = (float)local_68._4_4_ + DAT_02390124;
    local_b8 = insertps(local_b8,auVar9,0x10);
    fVar10 = local_58._4_4_;
    auVar4._4_4_ = fVar10;
    auVar4._0_4_ = fVar10;
    auVar4._8_4_ = local_58._12_4_;
    auVar4._12_4_ = local_58._12_4_;
    auVar5._4_12_ = auVar4._4_12_;
    auVar5._0_4_ = fVar10 + DAT_02390d00;
    _local_58 = insertps(_local_58,auVar5,0x10);
    plVar1 = (longlong *)*unaff_RSI;
    local_190 = '\0';
    local_198 = plVar1;
    _local_68 = auVar9;
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_198);
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
    local_d0 = 0;
    local_d8 = unaff_RDI[0xf];
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_01d488d0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    auVar6._4_12_ = local_68._4_12_;
    auVar6._0_4_ = local_68._0_4_ + DAT_02390d00;
    auVar8 = insertps(local_b8,auVar6,0x10);
    auVar7._0_4_ = auVar5._0_4_ + DAT_02390124;
    auVar7._4_12_ = auVar5._4_12_;
    auVar9 = insertps(_local_58,auVar7,0x10);
    plVar1 = (longlong *)*unaff_RSI;
    local_180 = '\0';
    local_188 = plVar1;
    (**(code **)(*unaff_RDI + 0x6a0))(0,auVar8._0_8_,auVar9._0_8_);
    local_c8 = local_40;
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



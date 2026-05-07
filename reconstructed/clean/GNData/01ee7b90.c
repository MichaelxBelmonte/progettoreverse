// Function: FUN_01ee7b90
// Address: 01ee7b90
// Size: 3638 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01ee7b90(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint32_t in_EDX;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t in_XMM0_Qb;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar8 [16];
  float fVar10;
  uint8_t auVar9 [16];
  int64_t *local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint8_t local_b8 [16];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  int64_t local_40;
  char local_38;
  
  uStack_50 = in_XMM1_Qb;
  local_58 = (uint8_t  [8])param_2;
  uStack_60 = in_XMM0_Qb;
  local_68 = (uint8_t  [8])param_1;
  switch(in_EDX) {
  case 2:
    FUN_01d48b40();
    lVar2 = this_ptr[0x1f];
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
    local_b8._0_4_ = (float)local_58._0_4_ + g_02390d00;
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    local_58._0_4_ = (float)local_58._4_4_ + g_02390d00;
    uStack_50._0_4_ = uStack_50._4_4_;
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    lVar2 = this_ptr[0xe];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    break;
  case 3:
    FUN_01d48b40();
    FUN_01d48370();
    plVar1 = (int64_t *)*arg1;
    local_210 = '\0';
    local_218 = plVar1;
    (**(code **)(*this_ptr + 0x6a0))(0,&local_218);
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
    if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_160 = 0;
    lVar2 = this_ptr[0x1e];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_160 = '\x01';
    local_168 = lVar2;
    FUN_01d488d0();
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    local_208 = *arg1;
    local_200 = '\0';
    (**(code **)(*this_ptr + 0x6a0))(0,&local_208);
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
    local_b8._0_4_ = (int)this_ptr[0x34];
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    local_150 = 0;
    local_158 = this_ptr[0xe];
    if (local_158 != 0) {
      FUN_00d50b00();
    }
    local_150 = '\x01';
    FUN_01d488d0();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    auVar9 = insertps(_local_58,ZEXT416((uint)(g_02390d34 + (float)local_b8._0_4_)),0x10);
    auVar3._4_4_ = local_58._4_4_;
    auVar3._0_4_ = (local_58._4_4_ - (float)local_b8._0_4_) + local_68._4_4_;
    auVar3._8_4_ = local_58._12_4_;
    auVar3._12_4_ = local_58._12_4_;
    auVar8 = insertps(_local_68,auVar3,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x390))(auVar8._0_8_,auVar9._0_8_);
    plVar1 = (int64_t *)*arg1;
    local_1f0 = '\0';
    local_1f8 = plVar1;
    (**(code **)(*this_ptr + 0x6a0))(0,&local_1f8);
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
    if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
    local_140 = 0;
    local_148 = this_ptr[0xf];
    if (local_148 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    FUN_01d488d0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_1e0 = '\0';
    local_1e8 = plVar1;
    (**(code **)(*this_ptr + 0x6a0))(0,&local_1e8);
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
    if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    FUN_01d48b40();
    local_100 = 0;
    local_108 = this_ptr[0xf];
    if (local_108 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    FUN_01d488d0();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_1c0 = '\0';
    local_1c8 = plVar1;
    (**(code **)(*this_ptr + 0x6a0))(0,&local_1c8);
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
    if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 5:
    FUN_01d48b40();
    local_120 = 0;
    local_128 = this_ptr[0xf];
    if (local_128 != 0) {
      FUN_00d50b00();
    }
    local_120 = '\x01';
    FUN_01d488d0();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_1d0 = '\0';
    local_1d8 = plVar1;
    (**(code **)(*this_ptr + 0x6a0))(0,&local_1d8);
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
    if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    break;
  default:
    local_178 = *arg1;
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
    local_b8._0_4_ = local_68._0_4_ + g_023b1608;
    plVar1 = (int64_t *)*arg1;
    local_1a0 = '\0';
    local_58._4_4_ = (float)local_58._4_4_ + _UNK_02422a24;
    local_58._0_4_ = (float)local_58._0_4_ + g_02422a20;
    uStack_50._0_4_ = (float)uStack_50 + _UNK_02422a28;
    uStack_50._4_4_ = uStack_50._4_4_ + _UNK_02422a2c;
    local_1a8 = plVar1;
    (**(code **)(*this_ptr + 0x6a0))(0,&local_1a8);
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
    if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48370();
    insertps(_local_58,*(void*)((int64_t)this_ptr + 0x1a4),0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    local_e0 = 0;
    local_e8 = this_ptr[0xe];
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
    auVar9._0_4_ = (float)local_68._4_4_ + g_02390124;
    local_b8 = insertps(local_b8,auVar9,0x10);
    fVar10 = local_58._4_4_;
    auVar4._4_4_ = fVar10;
    auVar4._0_4_ = fVar10;
    auVar4._8_4_ = local_58._12_4_;
    auVar4._12_4_ = local_58._12_4_;
    auVar5._4_12_ = auVar4._4_12_;
    auVar5._0_4_ = fVar10 + g_02390d00;
    _local_58 = insertps(_local_58,auVar5,0x10);
    plVar1 = (int64_t *)*arg1;
    local_190 = '\0';
    local_198 = plVar1;
    _local_68 = auVar9;
    (**(code **)(*this_ptr + 0x6a0))(0,&local_198);
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
    if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
    local_d0 = 0;
    local_d8 = this_ptr[0xf];
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_01d488d0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    auVar6._4_12_ = local_68._4_12_;
    auVar6._0_4_ = local_68._0_4_ + g_02390d00;
    auVar8 = insertps(local_b8,auVar6,0x10);
    auVar7._0_4_ = auVar5._0_4_ + g_02390124;
    auVar7._4_12_ = auVar5._4_12_;
    auVar9 = insertps(_local_58,auVar7,0x10);
    plVar1 = (int64_t *)*arg1;
    local_180 = '\0';
    local_188 = plVar1;
    (**(code **)(*this_ptr + 0x6a0))(0,auVar8._0_8_,auVar9._0_8_);
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
    if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


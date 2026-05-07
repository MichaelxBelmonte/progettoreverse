// Function: FUN_01d6b7d0
// Address: 01d6b7d0
// Size: 1691 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d6b7d0(uint64_t param_1,uint64_t param_2,int param_3)

{
  bool bVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  int in_EDX;
  void*arg1;
  int64_t *this_ptr;
  int iVar4;
  uint64_t in_XMM0_Qb;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  float fVar8;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  float fVar9;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint8_t local_58 [8];
  float fStack_50;
  float fStack_4c;
  int64_t local_40;
  char local_38;
  
  fStack_50 = (float)in_XMM1_Dc;
  local_58 = (uint8_t  [8])param_2;
  fStack_4c = (float)in_XMM1_Dd;
  local_d8 = (float)param_1;
  fStack_d4 = (float)((uint64_t)param_1 >> 0x20);
  fStack_cc = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  if (in_EDX == 0x10) {
    _local_58 = blendps(_local_58,g_023b5520,0xd);
  }
  else if (in_EDX == 0xf) {
    (**(code **)(*this_ptr + 0x3a0))();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    fVar9 = (float)(int)(float)local_58._4_4_ * g_0239011c + g_023b1608;
    fStack_d0 = (float)in_XMM0_Qb;
    local_d8 = (float)local_58._4_4_ * g_0239011c + local_d8;
    local_58._4_4_ = (float)local_58._4_4_ * g_0239011c + fStack_d4;
    fStack_50 = fStack_4c + fStack_cc;
    auVar5._4_4_ = local_58._4_4_;
    auVar5._0_4_ = local_d8;
    auVar5._8_4_ = fStack_4c + fStack_d0;
    auVar5._12_4_ = fStack_50;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = local_d8 + g_02390d00;
    local_58._0_4_ = local_58._4_4_;
    fStack_4c = fStack_50;
    fVar8 = (float)local_58._4_4_ + g_02390124;
    auVar7._4_4_ = local_58._4_4_;
    auVar7._0_4_ = fVar8;
    auVar7._8_4_ = fStack_50;
    auVar7._12_4_ = fStack_50;
    auVar7 = insertps(auVar6,auVar7,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar7._0_8_,fVar9);
    local_d8 = g_02390124 + local_d8;
    local_58._0_4_ = (float)local_58._0_4_ + g_02390d00;
    auVar2._4_4_ = local_58._4_4_;
    auVar2._0_4_ = local_58._0_4_;
    auVar2._8_4_ = fStack_50;
    auVar2._12_4_ = fStack_4c;
    auVar7 = insertps(ZEXT416((uint)local_d8),auVar2,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar7._0_8_,fVar9);
    auVar7 = insertps(auVar6,local_58._0_4_,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar7._0_8_,fVar9);
    (**(code **)(*this_ptr + 0x390))();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar7 = insertps(ZEXT416((uint)local_d8),fVar8,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar7._0_8_,fVar9);
    iVar4 = (int)fVar9;
    if ((int)fVar9 < 1) {
      return;
    }
    do {
      (**(code **)(*this_ptr + 0x398))();
      if (local_110 == '\0') {
        if (local_118 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_110 = '\0';
      }
      (**(code **)(*this_ptr + 0x3a0))();
      local_70 = 0;
      if (local_f0 == '\0') {
        if (local_f8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_f0 = '\0';
      }
      local_70 = '\x01';
      local_78 = local_f8;
      (**(code **)(*this_ptr + 0x3a8))();
      local_60 = 0;
      if (local_e0 == '\0') {
        if (local_e8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      local_60 = '\x01';
      local_68 = local_e8;
      FUN_01cfd290();
      local_80 = 0;
      if (local_100 == '\0') {
        if (local_108 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_100 = '\0';
      }
      local_80 = '\x01';
      local_88 = local_108;
      local_58._0_4_ = (float)iVar4;
      FUN_01cfd290((float)iVar4 / fVar9,&local_88);
      lVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (local_118 != 0) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
      bVar1 = 1 < iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar1);
    return;
  }
  FUN_01cbadc0();
  if ((in_EDX == 1) && (param_3 == 1)) {
    FUN_00d05530();
    (**(code **)(*this_ptr + 0x688))();
  }
  return;
}


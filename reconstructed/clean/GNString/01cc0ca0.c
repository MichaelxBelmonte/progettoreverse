// Function: FUN_01cc0ca0
// Address: 01cc0ca0
// Size: 2679 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01cc0ca0(uint64_t param_1,double param_2,float param_3,float param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  double dVar4;
  uint8_t auVar5 [16];
  uint32_t uVar6;
  int in_ECX;
  uint64_t in_RDX;
  void*arg1;
  int64_t *this_ptr;
  uint8_t in_R8B;
  uint32_t in_R9D;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar14;
  double dVar7;
  double dVar8;
  uint32_t uVar16;
  double dVar15;
  uint8_t auVar12 [16];
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar13 [16];
  double dVar17;
  float fVar19;
  uint64_t in_XMM1_Qb;
  uint8_t auVar18 [16];
  float fVar20;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint8_t local_68 [8];
  float fStack_60;
  float fStack_5c;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  
  uStack_50 = in_XMM1_Qb;
  local_58 = (uint8_t  [8])param_2;
  auVar13 = _local_58;
  local_58._0_4_ = SUB84(param_2,0);
  uVar16 = local_58._0_4_;
  local_58._4_4_ = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar6 = local_58._4_4_;
  uStack_50._0_4_ = (float)in_XMM1_Qb;
  uStack_50._4_4_ = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  local_88 = (float)param_1;
  fStack_84 = (float)((uint64_t)param_1 >> 0x20);
  switch((int)in_RDX) {
  case 8:
    (**(code **)(*this_ptr + 0x548))();
    if (g_02390d34 <= auVar13._0_4_ * param_3) {
      (**(code **)(*this_ptr + 0x488))(in_R8B,8,in_R9D);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
      (**(code **)(*this_ptr + 0x3c0))();
    }
    break;
  case 9:
  case 0x23:
  case 0x24:
    auVar10._0_8_ = (**(code **)(*this_ptr + 0x548))();
    auVar10._8_8_ = extraout_XMM0_Qb;
    fVar19 = auVar13._4_4_;
    fVar14 = auVar13._0_4_;
    if (fVar14 <= fVar19) {
      auVar18 = auVar13;
      if (fVar14 <= param_4 * fVar19) {
        auVar18._4_12_ = auVar13._4_12_;
        auVar18._0_4_ = param_4 * fVar19;
      }
      fVar14 = (float)((uint64_t)auVar10._0_8_ >> 0x20);
      uVar16 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar1._4_4_ = fVar14;
      auVar1._0_4_ = fVar14 + (fVar19 - auVar18._0_4_) * param_3;
      auVar1._8_4_ = uVar16;
      auVar1._12_4_ = uVar16;
      insertps(auVar10,auVar1,0x10);
      insertps(auVar13,auVar18,0x10);
    }
    else {
      fVar20 = fVar19;
      if (fVar19 <= param_4 * fVar14) {
        fVar20 = param_4 * fVar14;
      }
      auVar5._4_4_ = fVar19;
      auVar5._0_4_ = fVar20;
      auVar5._8_4_ = auVar13._12_4_;
      auVar5._12_4_ = auVar13._12_4_;
      blendps(auVar13,auVar5,1);
    }
    (**(code **)(*this_ptr + 0x488))(in_R8B,in_RDX & 0xffffffff,in_R9D);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (in_ECX != 0x10) {
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    }
    uVar9 = FUN_00d05530();
    (**(code **)(*this_ptr + 0x3c0))(uVar9,4);
    (**(code **)(*this_ptr + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x3c0))();
    break;
  case 0xe:
  case 0x10:
    auVar11._0_8_ = (**(code **)(*this_ptr + 0x548))();
    auVar11._8_8_ = extraout_XMM0_Qb_00;
    if ((float)local_58._0_4_ <= (float)local_58._4_4_) {
      fVar14 = (float)((uint64_t)auVar11._0_8_ >> 0x20);
      uVar16 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      auVar2._4_4_ = fVar14;
      auVar2._0_4_ = fVar14 + ((float)local_58._4_4_ - (float)local_58._0_4_) * param_3;
      auVar2._8_4_ = uVar16;
      auVar2._12_4_ = uVar16;
      insertps(auVar11,auVar2,0x10);
    }
    (**(code **)(*this_ptr + 0x488))(in_R8B,in_RDX & 0xffffffff,in_R9D);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    (**(code **)(*this_ptr + 0x3c0))();
    break;
  case 0xf:
    dVar7 = (double)___sincos_stret(((double)param_3 + g_02394dd0) * g_0241f380 * g_023942d0
                                    * g_023b3bc0);
    (**(code **)(*this_ptr + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    dVar17 = (double)((float)((int)(float)local_58._4_4_ / 2) + g_023b1608 + g_023b1d84);
    dVar8 = (double)((float)local_58._4_4_ * g_0239011c + local_88);
    dVar15 = (double)((float)local_58._4_4_ * g_0239011c + fStack_84);
    dVar7 = dVar17 * dVar7;
    dVar17 = dVar17 * param_2;
    dVar4 = dVar17 + dVar15;
    auVar12._0_8_ = dVar8 - dVar7;
    auVar12._8_8_ = dVar15 - dVar17;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar7 + dVar8;
    auVar3._12_4_ = (int)((uint64_t)dVar4 >> 0x20);
    blendpd(auVar12,auVar3,1);
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
    (**(code **)(*this_ptr + 0x398))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
    break;
  case 0x27:
    fVar14 = (float)local_58._0_4_;
    fVar19 = (float)local_58._4_4_;
    (**(code **)(*this_ptr + 0x560))(&switchD_01cc0cea::switchdataD_01cc1b94,in_RDX,param_3,0);
    if ((((float)local_58._0_4_ < (float)local_58._4_4_) && (g_02390d34 <= fVar19)) ||
       (((float)local_58._4_4_ <= (float)local_58._0_4_ && (g_02390d34 <= fVar14)))) {
      (**(code **)(*this_ptr + 0x488))(in_R8B,0x27,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    }
    local_68._0_4_ = local_58._0_4_;
    local_68._4_4_ = local_58._4_4_;
    fStack_60 = (float)uStack_50;
    fStack_5c = uStack_50._4_4_;
    uVar9 = (**(code **)(*this_ptr + 0x560))();
    local_88 = (float)uVar9;
    fStack_84 = (float)((uint64_t)uVar9 >> 0x20);
    fStack_80 = (float)extraout_XMM0_Qb_01;
    fStack_7c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    if (((float)local_58._0_4_ < (float)local_58._4_4_ && g_02390d34 <= (float)local_68._4_4_) ||
       (((float)local_58._4_4_ <= (float)local_58._0_4_ && (g_02390d34 <= (float)local_68._0_4_)))
       ) {
      uStack_50 = extraout_XMM0_Qb_01;
      local_58 = (uint8_t  [8])uVar9;
      if ((float)uVar6 <= (float)uVar16) {
        local_58._4_4_ = fStack_84 + (float)local_68._4_4_;
        local_58._0_4_ = local_88 + (float)local_68._0_4_;
        uStack_50._0_4_ = fStack_80 + fStack_60;
        uStack_50._4_4_ = fStack_7c + fStack_5c;
      }
      if ((float)uVar16 < (float)uVar6) {
        insertps(_local_68,ZEXT416((uint)g_02390d34),0x10);
      }
      else {
        blendps(_local_68,ZEXT416((uint)g_02390d34),1);
      }
      (**(code **)(*this_ptr + 0x488))(in_R8B,0x27,in_R9D);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      auVar13._8_4_ = fStack_80;
      auVar13._0_8_ = uVar9;
      auVar13._12_4_ = fStack_7c;
      auVar13 = blendps(_local_58,auVar13,2);
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))(auVar13._0_8_);
    }
  }
  return;
}


// Function: FUN_01cbadc0
// Address: 01cbadc0
// Size: 14451 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01cbadc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  bool bVar3;
  code *pcVar4;
  uint32_t uVar5;
  uint uVar6;
  void*puVar7;
  void*puVar8;
  int64_t lVar9;
  bool bVar10;
  void*arg1;
  int64_t *this_ptr;
  int iVar11;
  int iVar12;
  uint64_t uVar13;
  float fVar14;
  uint64_t in_XMM0_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  float fVar25;
  uint8_t auVar26 [16];
  float fVar27;
  float fVar28;
  int local_res8;
  char local_res10;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint64_t local_68;
  float fStack_60;
  float fStack_5c;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  int64_t local_40;
  char local_38;
  
  iVar11 = (int)param_3;
  uVar13 = param_2 & 0xffffffff;
  uStack_90 = in_XMM0_Qb;
  local_98 = (uint8_t  [8])param_1;
  auVar22 = _local_98;
  iVar12 = (int)param_2;
  local_98._4_4_ = (uint32_t)((uint64_t)param_1 >> 0x20);
  uStack_90._4_4_ = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  fStack_74 = in_XMM1._4_4_;
  fStack_6c = in_XMM1._12_4_;
  local_68 = in_XMM1._0_8_;
  uVar15 = local_68;
  local_68._0_4_ = in_XMM1._0_4_;
  uStack_90._0_4_ = (float)in_XMM0_Qb;
  local_98._0_4_ = (uint32_t)param_1;
  if ((local_res10 == '\0') || (iVar12 != 1)) {
    switch(iVar12) {
    case 1:
    case 4:
    case 5:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x12:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      goto switchD_01cbae9c_caseD_1;
    case 2:
      uVar15 = FUN_00d05530(&switchD_01cbae9c::switchdataD_01cc0b20,param_2,
                            (g_02421224 + fStack_74) * g_02390118);
      uStack_50 = extraout_XMM0_Qb;
      local_58 = (uint8_t  [8])uVar15;
      auVar22 = _local_58;
      (**(code **)(*this_ptr + 0x488))(param_4,2,local_res8);
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
      FUN_01d48b40();
      if (param_4 == '\0') {
        (**(code **)(*this_ptr + 0x3a0))();
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
      }
      else {
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
      }
      local_58._4_4_ = (uint32_t)((uint64_t)uVar15 >> 0x20);
      uVar5 = local_58._4_4_;
      stack0xffffffffffffffac = auVar22._4_12_;
      local_58._0_4_ = (uint32_t)uVar15;
      if (iVar11 == -1) {
        fVar28 = (float)((int)fStack_74 / 2) + g_02390d00;
        fVar14 = g_02390d2c;
        if (fVar28 <= g_02390d2c) {
          fVar14 = fVar28;
        }
        auVar20._0_4_ = ((float)local_58._0_4_ + fStack_74 * g_0239011c) - fVar14;
        auVar20._4_12_ = stack0xffffffffffffffac;
        auVar2._4_4_ = fStack_74;
        auVar2._0_4_ = fStack_74 * g_0239011c + (float)uVar5 + g_02390d00;
        auVar2._8_4_ = fStack_6c;
        auVar2._12_4_ = fStack_6c;
        auVar22 = insertps(auVar20,auVar2,0x10);
        blendps(ZEXT416((uint)(fVar14 + fVar14)),g_023b45e0,0xe);
        (**(code **)(*(int64_t *)*arg1 + 0x3b0))(auVar22._0_8_);
      }
      else if (iVar11 == 1) {
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
      break;
    case 3:
      (**(code **)(*this_ptr + 0x3a0))();
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
      fVar28 = (float)((int)fStack_74 / 2) + g_02390d00;
      fVar14 = g_023908d8;
      if (fVar28 <= g_023908d8) {
        fVar14 = fVar28;
      }
      local_68._0_4_ = fStack_74 * g_0239011c + (float)local_98._0_4_;
      local_68._4_4_ = fStack_74 * g_0239011c + (float)local_98._4_4_;
      fStack_5c = fStack_6c + uStack_90._4_4_;
      fVar27 = g_02390d00 + (float)local_68;
      fStack_60 = fStack_6c + (float)uStack_90;
      fStack_74 = local_68._4_4_;
      local_78 = local_68._4_4_;
      fStack_70 = fStack_5c;
      fStack_6c = fStack_5c;
      fVar25 = g_02390124 + local_68._4_4_;
      auVar22 = insertps(ZEXT416((uint)fVar27),ZEXT416((uint)fVar25),0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar22._0_8_);
      auVar23._4_12_ = local_78._4_12_;
      auVar23._0_4_ = local_68._4_4_ + g_02390d00;
      fVar28 = g_02390124 + (float)local_68;
      auVar22 = insertps(ZEXT416((uint)fVar28),auVar23,0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar22._0_8_);
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
      auVar22 = insertps(ZEXT416((uint)fVar27),auVar23._0_4_,0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar22._0_8_);
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
      auVar22 = insertps(ZEXT416((uint)fVar28),fVar25,0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar22._0_8_);
      (**(code **)(*this_ptr + 0x488))(param_4,3,local_res8);
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
      if (param_4 == '\0') {
        (**(code **)(*this_ptr + 0x3a0))();
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
      }
      else {
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
      }
      fVar14 = fVar14 + g_023b1608;
      if (iVar11 == -1) {
        auVar21._4_12_ = local_68._4_12_;
        auVar21._0_4_ = (float)local_68 - fVar14;
        auVar22 = insertps(auVar21,auVar23._0_4_,0x10);
        auVar19 = blendps(ZEXT416((uint)(fVar14 + fVar14)),g_0241f3a0,0xe);
        (**(code **)(*(int64_t *)*arg1 + 0x3b0))(auVar22._0_8_,auVar19._0_8_);
      }
      else if (iVar11 == 1) {
        (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
      }
      break;
    case 6:
      FUN_01cfc0e0();
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
      if (local_res10 != '\0') {
        FUN_01cfbc00();
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
      }
      FUN_01d48b40();
      (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
      FUN_01cfc3c0();
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
      (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
      (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
      (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
      (**(code **)(*(int64_t *)*arg1 + 0x520))();
      FUN_01cfb920();
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
      (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
      (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
      (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
      (**(code **)(*(int64_t *)*arg1 + 0x520))();
      break;
    case 8:
    case 0xe:
    case 0x10:
    case 0x27:
      (**(code **)(*this_ptr + 0x480))(param_4,uVar13,local_res8);
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
      if (iVar11 == 1) {
        FUN_01cb8c70();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        bVar3 = (float)local_68 < fStack_74;
        if (fStack_74 <= (float)local_68) {
          fStack_74 = (float)local_68;
        }
        fStack_74 = fStack_74 * g_0239426c;
        uVar6 = (uint)bVar3;
        auVar17._0_4_ = -(uint)(uVar6 == g_0238fcc0);
        auVar17._4_4_ = -(uint)(uVar6 == _UNK_0238fcc4);
        auVar17._8_4_ = -(uint)(uVar6 == _UNK_0238fcc8);
        auVar17._12_4_ = -(uint)(uVar6 == _UNK_0238fccc);
        auVar1._4_4_ = fStack_74;
        auVar1._0_4_ = fStack_74;
        auVar1._8_4_ = fStack_74;
        auVar1._12_4_ = fStack_74;
        auVar22 = blendvps(in_XMM1,auVar1,auVar17);
        (**(code **)(*(int64_t *)*arg1 + 0x3b0))(bVar3,auVar22._0_8_);
      }
      (**(code **)(*this_ptr + 0x3c0))();
      break;
    case 9:
    case 0x23:
    case 0x24:
      bVar3 = (float)local_68 <= fStack_74;
      if (bVar3) {
        (**(code **)(*this_ptr + 0x560))(&switchD_01cbae9c::switchdataD_01cc0b20,param_2,param_3,0)
        ;
        (**(code **)(*this_ptr + 0x3f0))(4,0xc,0,param_4);
        (**(code **)(*this_ptr + 0x560))();
        (**(code **)(*this_ptr + 0x3f0))(4,0xd,0,param_4);
        local_68._4_4_ = (float)((uint64_t)uVar15 >> 0x20);
        local_98._0_4_ = local_68._4_4_;
        local_68._0_4_ = fStack_74;
      }
      else {
        (**(code **)(*this_ptr + 0x560))();
        (**(code **)(*this_ptr + 0x3f0))(4,10,0,param_4);
        (**(code **)(*this_ptr + 0x560))();
        (**(code **)(*this_ptr + 0x3f0))(4,0xb,0,param_4);
        local_98._0_4_ = (uint32_t)uVar15;
      }
      uVar6 = (uint)bVar3;
      auVar26._0_4_ = (float)local_68 - ((float)local_98._0_4_ + (float)local_98._0_4_);
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar16._0_4_ = -(uint)(uVar6 == g_0238fcc0);
      auVar16._4_4_ = -(uint)(uVar6 == _UNK_0238fcc4);
      auVar16._8_4_ = -(uint)(uVar6 == _UNK_0238fcc8);
      auVar16._12_4_ = -(uint)(uVar6 == _UNK_0238fccc);
      blendvps(in_XMM1,auVar26,auVar16);
      (**(code **)(*this_ptr + 0x480))(param_4,uVar13,local_res8);
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
      (**(code **)(*this_ptr + 0x3a0))();
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
      local_98._0_4_ = fStack_74 * g_0239011c + (float)local_98._0_4_;
      fStack_74 = fStack_74 * g_0239011c + (float)local_98._4_4_;
      fVar28 = g_02390d00 + (float)local_98._0_4_;
      local_78 = fStack_74;
      fStack_70 = fStack_6c + uStack_90._4_4_;
      fStack_6c = fStack_6c + uStack_90._4_4_;
      fVar14 = g_02390124 + fStack_74;
      auVar22 = insertps(ZEXT416((uint)fVar28),ZEXT416((uint)fVar14),0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar22._0_8_);
      auVar24._4_12_ = local_78._4_12_;
      auVar24._0_4_ = fStack_74 + g_02390d00;
      auVar22 = ZEXT416((uint)(g_02390124 + (float)local_98._0_4_));
      auVar19 = insertps(auVar22,auVar24,0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar19._0_8_);
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
      auVar19 = insertps(ZEXT416((uint)fVar28),auVar24._0_4_,0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar19._0_8_);
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
      auVar22 = insertps(auVar22,fVar14,0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar22._0_8_);
      (**(code **)(*this_ptr + 0x488))(param_4,0xf,local_res8);
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
    case 0x11:
      (**(code **)(*this_ptr + 0x480))(param_4,0x11,local_res8);
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
    case 0x14:
      FUN_01d48370();
      (**(code **)(*this_ptr + 0x488))(param_4,0x14,local_res8);
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
      FUN_01cb3a60();
      FUN_01d48390();
      break;
    case 0x15:
      (**(code **)(*this_ptr + 0x470))();
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
    case 0x18:
      (**(code **)(*this_ptr + 0x480))(param_4,0x18,local_res8);
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
      auVar19._4_4_ = local_98._4_4_;
      auVar19._0_4_ = ((float)local_98._0_4_ + (float)local_68 + g_02390d00) - fStack_74;
      auVar19._8_4_ = (float)uStack_90;
      auVar19._12_4_ = uStack_90._4_4_;
      auVar22 = blendps(auVar22,auVar19,1);
      auVar22._0_8_ = FUN_00d05530(auVar22._0_8_);
      auVar22._8_8_ = extraout_XMM0_Qb_00;
      auVar18._4_12_ = auVar22._4_12_;
      auVar18._0_4_ = (float)auVar22._0_8_ + g_02390124;
      (**(code **)(*this_ptr + 0x3f0))(auVar18._0_8_,0x19,iVar11,param_4);
      break;
    case 0x28:
      if (local_res8 != 0) {
        (**(code **)(*this_ptr + 0x3a0))();
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
      FUN_01d48370();
      (**(code **)(*(int64_t *)*arg1 + 0x368))();
      (**(code **)(*this_ptr + 0x3a0))();
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
      FUN_01d48b40();
      if (fStack_74 <= (float)local_68) {
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        lVar9 = *(int64_t *)*arg1;
      }
      else {
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
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
        lVar9 = *(int64_t *)*arg1;
      }
      (**(code **)(lVar9 + 0x3e0))();
      FUN_01d48390();
      break;
    case 0x29:
      if (iVar11 == 1) {
        bVar10 = true;
        bVar3 = false;
        puVar8 = (void*)0x0;
      }
      else {
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02680400;
        *(void*)((int64_t)puVar8 + 0xc) = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        *(void*)((int64_t)puVar8 + 0x39) = 0;
        *(void*)((int64_t)puVar8 + 0x41) = 0;
        (*g_02680418)();
        FUN_01d39400();
        FUN_01d39220(g_023908d8 + (float)local_98._0_4_);
        fVar14 = g_023b2664 + (float)local_98._0_4_ + (float)local_68 + g_02390d00;
        FUN_01d38ba0();
        FUN_01d39220(fVar14 + g_023908d8);
        FUN_01d38ba0();
        (**(code **)(*this_ptr + 0x3a0))();
        if (local_f0 == '\0') {
          if (local_f8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f0 = '\0';
        }
        (**(code **)(*this_ptr + 0x3a8))();
        if (local_e0 == '\0') {
          if (local_e8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        FUN_01cfd290();
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
        if (local_e8 != 0) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (local_f8 != 0) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
        bVar10 = false;
        bVar3 = true;
      }
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02680400;
      *(void*)((int64_t)puVar7 + 0xc) = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      *(void*)((int64_t)puVar7 + 0x39) = 0;
      *(void*)((int64_t)puVar7 + 0x41) = 0;
      pcVar4 = g_02680418;
      (*g_02680418)();
      if (puVar7 == puVar8) {
        puVar7 = puVar8;
        if (bVar10) {
          bVar3 = true;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = (bool)(bVar3 & puVar8 != (void*)0x0);
        bVar3 = true;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      fVar14 = g_023b2664 + g_02390d00 + (float)local_98._0_4_ + (float)local_68;
      FUN_01d39400();
      FUN_01d39220(g_023908d8 + fVar14);
      (**(code **)(*this_ptr + 0x3a0))();
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
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02680400;
      *(void*)((int64_t)puVar8 + 0xc) = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      *(void*)((int64_t)puVar8 + 0x39) = 0;
      *(void*)((int64_t)puVar8 + 0x41) = 0;
      (*pcVar4)();
      if (puVar8 == puVar7) {
        puVar8 = puVar7;
        if (bVar3) {
          FUN_00d50b20();
        }
      }
      else if ((bVar3) && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (iVar11 == 1) {
        FUN_01d39400();
      }
      else {
        FUN_01d39400();
        FUN_01d38ba0();
      }
      FUN_01d39220(g_023908d8 + (float)local_98._0_4_);
      FUN_01d38ba0();
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
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d05530();
    FUN_01d48370();
    FUN_01d48b40();
    (**(code **)(*this_ptr + 0x4b8))();
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
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    FUN_01d48390();
switchD_01cbae9c_caseD_1:
    (**(code **)(*this_ptr + 0x480))(param_4,uVar13,local_res8);
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
    if (iVar11 == 1) {
      (**(code **)(*this_ptr + 0x3a8))();
      if (local_f0 == '\0') {
        if (local_f8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_f0 = '\0';
      }
      (**(code **)(*this_ptr + 0x3a0))();
      if (local_e0 == '\0') {
        if (local_e8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      FUN_01cfd290();
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
      if (local_e8 != 0) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (local_f8 != 0) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    if (local_res8 == 0) {
      FUN_01d48b40();
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
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*this_ptr + 0x3a0))();
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
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      FUN_00d05530();
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
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    }
    else {
      FUN_01d48b40();
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
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*this_ptr + 0x3a0))();
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
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      FUN_00d05530();
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
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    }
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
    if (iVar12 - 4U < 0x16) {
                                              (*(&g_01cc0bc4 + *(int *)(&g_01cc0bc4 + (uint64_t)(iVar12 - 4U) * 4)))();
      return;
    }
    if (iVar12 - 10U < 4) {
      FUN_00d05530();
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
    }
  }
  return;
}


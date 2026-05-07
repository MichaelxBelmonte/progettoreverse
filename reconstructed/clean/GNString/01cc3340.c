// Function: FUN_01cc3340
// Address: 01cc3340
// Size: 1991 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01cc3340(uint64_t param_1,uint64_t param_2,int param_3,char param_4,uint32_t param_5)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int64_t *in_RCX;
  int64_t *in_RDX;
  void*arg1;
  int64_t *this_ptr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t in_XMM0_Qb;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  char local_res8;
  char local_res10;
  uint8_t local_res18;
  char local_res20;
  float local_198;
  float fStack_194;
  uint uStack_190;
  uint uStack_18c;
  float local_188;
  float fStack_184;
  uint64_t local_168;
  uint64_t uStack_160;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint8_t local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint8_t local_98 [8];
  float fStack_90;
  float fStack_8c;
  int64_t local_48;
  char local_40;
  
  uStack_160 = in_XMM0_Qb;
  local_168 = param_1;
  local_188 = (float)param_2;
  fStack_184 = (float)((uint64_t)param_2 >> 0x20);
  uStack_150 = (uint32_t)in_XMM1_Qb;
  uStack_14c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  fVar7 = (float)(**(code **)(*this_ptr + 0x630))();
  if (param_3 == 0xff) {
    (**(code **)(*this_ptr + 0x5c0))();
  }
  (**(code **)(*this_ptr + 0x5e0))(local_res10,local_res8,local_res18,local_res20);
  if (local_res10 == '\0') {
    if (local_res8 == '\0') {
      (**(code **)(*this_ptr + 0x4d0))();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      (**(code **)(*this_ptr + 0x4c8))();
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      FUN_01cfd290();
      if (local_48 == 0) {
        bVar4 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        local_40 = '\0';
        bVar4 = true;
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x4d0))();
      if (local_48 == 0) goto LAB_01cc34ea;
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    (**(code **)(*this_ptr + 0x4d8))();
    if (local_48 == 0) {
LAB_01cc34ea:
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  if (*in_RCX == 0) {
    (**(code **)(*this_ptr + 0x370))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d48a10();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d48a10();
  }
  lVar5 = g_026fce10;
  uStack_190 = (uint)((uint64_t)in_XMM0_Qb >> 0x20);
  fStack_194 = (float)((uint64_t)param_1 >> 0x20);
  local_198 = fStack_194 + g_02390d00;
  uStack_18c = uStack_190;
  auVar23._4_4_ = local_198;
  auVar23._0_4_ = local_198;
  auVar23._8_4_ = uStack_190;
  auVar23._12_4_ = uStack_190;
  auVar21._4_12_ = local_168._4_12_;
  auVar21._0_4_ = (float)param_1 + fVar7;
  _local_d8 = blendps(auVar23,auVar21,1);
  fVar8 = local_188 - (fVar7 + fVar7);
  auVar20._8_8_ = in_XMM1_Qb;
  auVar20._0_8_ = param_2;
  register0x00001204 = auVar20._4_12_;
  local_98._0_4_ = local_188 - (fVar7 + fVar7);
  in_RDX = (int64_t *)*in_RDX;
  if (in_RDX != (int64_t *)0x0) {
    if (g_026fce10 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*in_RDX + 0x50))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((cVar6 != '\0') && (local_res8 == '\0')) {
      local_198 = local_198 + fStack_184 * g_0239011c;
      auVar13._0_4_ = g_023945e0 & (uint)local_198;
      auVar13._4_4_ = _UNK_023945e4 & (uint)fStack_194;
      auVar13._8_4_ = _UNK_023945e8 & uStack_190;
      auVar13._12_4_ = _UNK_023945ec & uStack_190;
      auVar14._4_12_ = SUB1612(auVar13 | g_023945f0,4);
      auVar14._0_4_ = SUB164(auVar13 | g_023945f0,0) + local_198;
      auVar19._0_12_ = ZEXT812(0);
      auVar19._12_4_ = 0;
      auVar20 = roundss(auVar19,auVar14,0xb);
      auVar20 = insertps(auVar21,auVar20,0x10);
      auVar1._4_4_ = fStack_184;
      auVar1._0_4_ = fVar8;
      auVar1._8_4_ = uStack_150;
      auVar1._12_4_ = uStack_14c;
      auVar21 = blendps(auVar1,g_023b1620,0xe);
      (**(code **)(*this_ptr + 0x3c0))(auVar20._0_8_,auVar21._0_8_);
      bVar3 = true;
      goto LAB_01cc39d5;
    }
  }
  if (local_res20 == '\0') {
    bVar3 = false;
  }
  else {
    uVar12 = (**(code **)(*this_ptr + 0x5c8))();
    auVar22._8_4_ = (int)extraout_XMM0_Qb;
    auVar22._0_8_ = uVar12;
    auVar22._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar27._4_12_ = local_198._4_12_;
    auVar27._0_4_ = local_198 + g_02390124;
    auVar20 = insertps(_local_d8,auVar27,0x10);
    auVar23 = blendps(auVar22,_local_98,0xe);
    (**(code **)(*this_ptr + 0x5f8))(auVar20._0_8_,auVar23._0_8_,local_res10);
    fVar7 = (float)(**(code **)(*this_ptr + 0x5c8))();
    fVar9 = (float)(**(code **)(*this_ptr + 0x630))();
    fVar10 = (float)(**(code **)(*this_ptr + 0x5c8))();
    fVar11 = (float)(**(code **)(*this_ptr + 0x630))();
    auVar24._0_4_ = auVar21._0_4_ + fVar7 + fVar9;
    auVar24._4_12_ = auVar21._4_12_;
    auVar2._4_4_ = fStack_184;
    auVar2._0_4_ = fVar8;
    auVar2._8_4_ = uStack_150;
    auVar2._12_4_ = uStack_14c;
    auVar15._4_12_ = auVar2._4_12_;
    auVar15._0_4_ = fVar8 - (fVar10 + fVar11);
    _local_98 = blendps(_local_98,auVar15,1);
    auVar16._0_4_ = auVar27._0_4_ + g_02390d00;
    auVar16._4_12_ = auVar27._4_12_;
    _local_d8 = insertps(auVar24,auVar16,0x10);
    bVar3 = false;
  }
LAB_01cc39d5:
  FUN_01d488d0();
  if ((!bVar3) && ((**(code **)(*(int64_t *)*arg1 + 0x3f8))(), param_4 != '\0')) {
    auVar17._0_4_ = (float)local_d8._0_4_ + (float)local_98._0_4_;
    auVar17._4_4_ = (float)local_d8._4_4_ + (float)local_98._4_4_;
    auVar17._8_4_ = fStack_d0 + fStack_90;
    auVar17._12_4_ = fStack_cc + fStack_8c;
    auVar25._4_4_ = auVar17._4_4_;
    auVar25._0_4_ = auVar17._4_4_;
    auVar25._8_4_ = auVar17._12_4_;
    auVar25._12_4_ = auVar17._12_4_;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = (auVar17._0_4_ + g_02390d00) - (float)local_98._4_4_ * g_0239011c;
    auVar26._4_12_ = auVar25._4_12_;
    auVar26._0_4_ =
         ((auVar17._4_4_ + g_02390d00) - (float)local_98._4_4_ * g_0239011c) + g_02390124;
    auVar20 = insertps(auVar18,auVar26,0x10);
    FUN_01cb3a60(auVar20._0_8_,param_5);
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


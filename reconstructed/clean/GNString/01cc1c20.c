// Function: FUN_01cc1c20
// Address: 01cc1c20
// Size: 951 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01cc1c20(uint64_t param_1,uint64_t param_2,int64_t *param_3,uint param_4)

{
  uint32_t uVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  uint64_t in_RDX;
  int64_t lVar4;
  void*arg1;
  int64_t *this_ptr;
  uint uVar5;
  float fVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  uint8_t local_res8;
  int local_res10;
  float fStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  int64_t *local_88;
  uint8_t local_58 [16];
  int64_t local_40;
  char local_38;
  
  if (param_4 == 0xff) {
    param_4 = (**(code **)(*this_ptr + 0x5c0))();
  }
  if (0x2c < (uint)in_RDX) {
    return;
  }
  if ((0x120009c23cbcU >> (in_RDX & 0x3f) & 1) == 0) {
    if ((in_RDX & 0xffffffff) != 1) {
      return;
    }
    if (local_res10 != 0) {
      (**(code **)(*this_ptr + 0x5b8))();
    }
  }
  local_58._0_8_ = (**(code **)(*this_ptr + 0x548))();
  local_58._8_8_ = extraout_XMM0_Qb;
  fStack_94 = (float)((uint64_t)param_2 >> 0x20);
  uStack_90 = (uint32_t)in_XMM1_Qb;
  uStack_8c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  lVar4 = *param_3;
  if (lVar4 != 0) goto LAB_01cc1dd5;
  (**(code **)(*this_ptr + 0x370))();
  lVar4 = *param_3;
  if (lVar4 == local_40) {
    if (((char)param_3[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_01cc1d34;
      FUN_00d50b00();
      goto LAB_01cc1db7;
    }
LAB_01cc1dbe:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = param_3[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_40;
      if (((char)lVar3 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_01cc1db7:
      local_88 = param_3 + 1;
      *(void*)local_88 = 1;
      goto LAB_01cc1dbe;
    }
    *param_3 = local_40;
    if (((char)lVar3 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_01cc1d34:
    local_88 = param_3 + 1;
    *(void*)local_88 = 1;
  }
  lVar4 = *param_3;
LAB_01cc1dd5:
  fVar6 = (float)FUN_01d43b70();
  uVar5 = -(uint)(*(float *)(lVar4 + 0x28) != 0.0);
  local_88._0_4_ = (float)(~uVar5 & (uint)fVar6 | (uint)(fVar6 + *(float *)(lVar4 + 0x28)) & uVar5);
  if ((param_4 & 0x10) == 0) {
    auVar9._4_4_ = fStack_94;
    auVar9._0_4_ = fStack_94;
    auVar9._8_4_ = uStack_8c;
    auVar9._12_4_ = uStack_8c;
    auVar7._4_12_ = auVar9._4_12_;
    auVar7._0_4_ = fStack_94 - local_88._0_4_;
    if ((param_4 & 0x20) == 0) {
      auVar8._0_4_ = auVar7._0_4_ * g_0239011c;
      auVar8._4_12_ = auVar7._4_12_;
      auVar9 = roundss(auVar8,auVar8,10);
      fVar6 = auVar9._0_4_;
    }
    else {
      auVar9 = roundss(auVar7,auVar7,9);
      fVar6 = auVar9._0_4_;
    }
    uVar1 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    fVar12 = (float)((uint64_t)local_58._0_8_ >> 0x20);
    auVar10._4_4_ = fVar12;
    auVar10._0_4_ = fVar12;
    auVar10._8_4_ = uVar1;
    auVar10._12_4_ = uVar1;
    auVar11._4_12_ = auVar10._4_12_;
    auVar11._0_4_ = fVar12 + fVar6;
    insertps(local_58,auVar11,0x10);
  }
  FUN_01d48a10();
  lVar4 = this_ptr[4];
  if (lVar4 == 0) {
    (**(code **)(*this_ptr + 0x490))(local_res8,in_RDX & 0xffffffff,local_res10);
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
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  auVar2._8_4_ = uStack_90;
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = uStack_8c;
  insertps(auVar2,local_88._0_4_,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
  return;
}


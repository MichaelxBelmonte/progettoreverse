// Function: FUN_01efb640
// Address: 01efb640
// Size: 990 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01efb640(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  int iVar3;
  int64_t *in_RCX;
  int in_EDX;
  int64_t lVar4;
  void*arg1;
  int64_t *this_ptr;
  float fVar5;
  uint64_t uVar6;
  uint64_t in_XMM0_Qb;
  uint8_t auVar7 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  float local_108;
  float local_f8;
  float fStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  int64_t local_d8;
  char local_d0;
  int64_t local_40;
  char local_38;
  
  local_108 = (float)param_2;
  local_f8 = (float)param_1;
  fStack_f4 = (float)((uint64_t)param_1 >> 0x20);
  uStack_f0 = (uint32_t)in_XMM0_Qb;
  uStack_ec = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
  if (in_EDX == 8) {
    (**(code **)(*this_ptr + 0x3f0))(8,0x11,0,1);
  }
  else {
    (**(code **)(*this_ptr + 0x3c0))();
  }
  if ((*in_RCX != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    uVar6 = (**(code **)(*this_ptr + 0x370))();
    FUN_01d44a40(uVar6,1);
    if (local_40 == 0) {
      bVar2 = true;
      lVar4 = 0;
    }
    else {
      lVar4 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = false;
      }
      else {
        local_38 = '\0';
        bVar2 = false;
      }
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48a10();
    fVar5 = (float)FUN_01d43d10();
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
    FUN_01d48b40();
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))
              ((g_0239011c * local_108 + local_f8) - fVar5 * g_0239011c);
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
    auVar1._4_4_ = fStack_f4;
    auVar1._0_4_ = fStack_f4;
    auVar1._8_4_ = uStack_ec;
    auVar1._12_4_ = uStack_ec;
    auVar8._4_12_ = auVar1._4_12_;
    auVar8._0_4_ = fStack_f4 + g_023b8b2c;
    auVar7._8_4_ = uStack_f0;
    auVar7._0_8_ = param_1;
    auVar7._12_4_ = uStack_ec;
    auVar7 = insertps(auVar7,auVar8,0x10);
    auVar9._8_8_ = in_XMM1_Qb;
    auVar9._0_8_ = param_2;
    auVar9 = blendps(auVar9,g_02421240,0xe);
    (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar7._0_8_,auVar9._0_8_);
    if (!bVar2 && lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


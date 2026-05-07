// Function: FUN_01cc4ae0
// Address: 01cc4ae0
// Size: 541 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01cc4ae0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t *in_RCX;
  void*arg1;
  int64_t *this_ptr;
  float fVar2;
  uint64_t in_XMM0_Qb;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar5 [16];
  uint8_t in_XMM3 [16];
  uint8_t auVar6 [16];
  float local_98;
  float fStack_94;
  uint32_t uStack_8c;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x3c0))();
  if ((*in_RCX != 0) && (iVar1 = FUN_00d8c7a0(), iVar1 != 0)) {
    (**(code **)(*this_ptr + 0x370))();
    fVar2 = (float)FUN_01d43b70();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
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
    (**(code **)(*this_ptr + 0x370))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d48a10();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar6 = roundss(in_XMM3,ZEXT416((uint)(fVar2 + g_02390d2c)),9);
    auVar3 = ZEXT416((uint)(g_0239011c * auVar6._0_4_));
    auVar3 = roundss(auVar3,auVar3,9);
    local_98 = (float)param_1;
    fStack_94 = (float)((uint64_t)param_1 >> 0x20);
    uStack_8c = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = auVar3._0_4_ + local_98;
    auVar3._4_4_ = fStack_94;
    auVar3._0_4_ = fStack_94 - auVar6._0_4_;
    auVar3._8_4_ = uStack_8c;
    auVar3._12_4_ = uStack_8c;
    auVar3 = insertps(auVar4,auVar3,0x10);
    auVar5._8_8_ = in_XMM1_Qb;
    auVar5._0_8_ = param_2;
    auVar5 = insertps(auVar5,auVar6,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar3._0_8_,auVar5._0_8_);
  }
  return;
}


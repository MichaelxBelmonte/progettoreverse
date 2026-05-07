// Function: FUN_01dbcf20
// Address: 01dbcf20
// Size: 792 bytes
// Class: GNValue

void FUN_01dbcf20(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  float fVar9;
  float fVar10;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar10 = (float)((uint64_t)param_2 >> 0x20);
  fVar9 = (float)param_2;
  uVar4 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x9e8))();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x9e8))();
  (**(code **)(*this_ptr + 0x960))();
  local_48 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_80;
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar5._4_12_ = auVar8._4_12_;
  auVar5._0_4_ = fVar9 + g_023b8b2c;
  FUN_01d44870(auVar5._0_8_,&local_50);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*this_ptr + 0xad8))();
  (**(code **)(*this_ptr + 0xad8))();
  (**(code **)(*this_ptr + 0x9e8))();
  FUN_01d43ca0();
  (**(code **)(*plVar1 + 0x3f0))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  local_c8 = (float)uVar4;
  fStack_c4 = (float)((uint64_t)uVar4 >> 0x20);
  fStack_c0 = (float)extraout_XMM0_Qb;
  fStack_bc = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar6._0_4_ = local_c8 + auVar5._0_4_;
  auVar6._4_4_ = fStack_c4 + fVar10;
  auVar6._8_4_ = fStack_c0 + in_XMM1_Dc;
  auVar6._12_4_ = fStack_bc + in_XMM1_Dd;
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = ((auVar6._0_4_ + g_02390d00) - fVar10 * g_0239011c) + g_02390d2c;
  auVar2._4_4_ = auVar6._4_4_;
  auVar2._0_4_ = (auVar6._4_4_ + g_02390d00) - fVar10 * g_0239011c;
  auVar2._8_4_ = auVar6._12_4_;
  auVar2._12_4_ = auVar6._12_4_;
  auVar8 = insertps(auVar7,auVar2,0x10);
  FUN_01cb3a60(auVar8._0_8_,3);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


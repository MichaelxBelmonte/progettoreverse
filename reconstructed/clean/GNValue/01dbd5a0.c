// Function: FUN_01dbd5a0
// Address: 01dbd5a0
// Size: 987 bytes
// Class: GNValue

void FUN_01dbd5a0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  int64_t lVar5;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar10;
  float fVar11;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_88;
  char local_80;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  fVar10 = (float)param_2;
  uVar6 = FUN_01e3f820();
  local_f8 = (float)uVar6;
  fStack_f4 = (float)((uint64_t)uVar6 >> 0x20);
  fStack_f0 = (float)extraout_XMM0_Qb;
  fStack_ec = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  (**(code **)(*this_ptr + 0x640))();
  lVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9e8))();
  lVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x9e8))();
  (**(code **)(*this_ptr + 0x960))();
  local_48 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_88;
  auVar9._4_4_ = fVar11;
  auVar9._0_4_ = fVar10;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar7._4_12_ = auVar9._4_12_;
  auVar7._0_4_ = fVar10 + g_023b8b2c;
  FUN_01d44870(auVar7._0_8_,&local_50);
  lVar5 = local_40;
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
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (*(char *)((int64_t)this_ptr + 0x239) != '\0') {
    fStack_f4 = fStack_f4 + fVar11;
    fStack_ec = fStack_ec + in_XMM1_Dd;
    fVar10 = ((local_f8 + auVar7._0_4_ + g_02390d00) - fVar11 * g_0239011c) + g_02390d2c;
    fVar11 = (fStack_f4 + g_02390d00) - fVar11 * g_0239011c;
    auVar8._4_4_ = fStack_f4;
    auVar8._0_4_ = fVar10;
    auVar8._8_4_ = fStack_f0 + in_XMM1_Dc;
    auVar8._12_4_ = fStack_ec;
    auVar9 = insertps(auVar8,ZEXT416((uint)(g_02390124 + fVar11)),0x10);
    FUN_01cb3a60(auVar9._0_8_,g_02394298);
    auVar3._4_4_ = fStack_f4;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = fStack_f0 + in_XMM1_Dc;
    auVar3._12_4_ = fStack_ec;
    auVar2._4_4_ = fStack_f4;
    auVar2._0_4_ = fVar11 + g_02390d00;
    auVar2._8_4_ = fStack_ec;
    auVar2._12_4_ = fStack_ec;
    auVar9 = insertps(auVar3,auVar2,0x10);
    FUN_01cb3a60(auVar9._0_8_,g_02394298);
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


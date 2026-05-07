// Function: FUN_01d7a120
// Address: 01d7a120
// Size: 1554 bytes
// Class: GNMultipleValue

void FUN_01d7a120(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar5;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  uint8_t auVar6 [16];
  float fVar7;
  float in_XMM1_Dd;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_40;
  char local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  if (this_ptr[0x48] != 0) {
    FUN_01d7c320();
    return;
  }
  (**(code **)(*this_ptr + 0xad0))();
  (**(code **)(*this_ptr + 0x3a0))();
  FUN_01e42250();
  FUN_00d403d0();
  FUN_00d3fc60();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x46];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01e53c20();
  FUN_01e3f820();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  FUN_01e3f820();
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar5;
  auVar6._4_4_ = fVar7 + extraout_XMM0_Db;
  auVar6._0_4_ = fVar7 + extraout_XMM0_Db + g_02390d00;
  auVar6._8_4_ = in_XMM1_Dd + extraout_XMM0_Dd;
  auVar6._12_4_ = in_XMM1_Dd + extraout_XMM0_Dd;
  auVar6 = insertps(auVar2,auVar6,0x10);
  FUN_01e46ed0(auVar6._0_8_);
  FUN_00d50b00();
  FUN_01d7c6e0();
  plVar3 = (int64_t *)this_ptr[0x48];
  plVar4 = plVar3;
  if (plVar3 == local_40) goto LAB_01d7a2c8;
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_01d7a27d;
    }
    FUN_00d50b00();
    plVar3 = (int64_t *)this_ptr[0x48];
    this_ptr[0x48] = (int64_t)local_40;
  }
  else {
    local_38 = '\0';
LAB_01d7a27d:
    this_ptr[0x48] = (int64_t)plVar4;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar4 = local_40;
  }
LAB_01d7a2c8:
  if ((local_38 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_88 = local_40;
  FUN_01e5ba50();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar3 = (int64_t)&g_026890a8;
  plVar3[2] = (int64_t)&g_026899d0;
  FUN_00d500e0();
  (**(code **)(*plVar3 + 0x4d0))();
  FUN_01e5ca90();
  (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)this_ptr[0x46];
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01e5ca90();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x4d8))();
  FUN_00d05530();
  (**(code **)(*plVar4 + 0x4c8))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d403d0();
  lVar1 = g_026fc520;
  if (g_026fc520 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_c8 = 0;
  local_c0 = '\0';
  FUN_00d40470(&local_c8,&stack0xffffffffffffff90,3,3);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d7bb00();
  (**(code **)(*this_ptr + 0x6b0))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_b8 = 0;
  local_b0 = '\0';
  (**(code **)(*this_ptr + 0x6a8))();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)this_ptr[0x46];
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00d50b00();
  local_a8 = *arg1;
  local_a0 = '\0';
  (**(code **)(*plVar3 + 0x5a8))(uVar5,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_98 = local_40;
  local_90 = '\0';
  (**(code **)(*this_ptr + 0x6a8))();
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}


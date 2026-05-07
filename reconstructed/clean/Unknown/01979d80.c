// Function: FUN_01979d80
// Address: 01979d80
// Size: 790 bytes
// Class: Unknown

void FUN_01979d80(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  void*arg1;
  int64_t *this_ptr;
  float fVar3;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar5 [16];
  float fVar6;
  uint32_t uVar7;
  float fVar8;
  float local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  float local_88;
  float fStack_84;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x640))();
  FUN_01e3f820();
  (**(code **)(*local_38 + 0x3f0))(6,0x1b,0,1);
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_01e3f820();
  local_98 = (float)uVar4;
  uStack_94 = (uint32_t)((uint64_t)uVar4 >> 0x20);
  uStack_90 = (uint32_t)extraout_XMM0_Qb;
  uStack_8c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  fVar6 = param_2;
  uVar4 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_48 + 0x3a0))();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = (float)uVar4;
  fStack_84 = (float)((uint64_t)uVar4 >> 0x20);
  local_88 = local_88 + fVar6 * g_0239011c;
  fVar8 = local_98 + param_2 * g_0239011c + g_02390d00;
  FUN_01d48b40();
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  uVar7 = extraout_XMM0_Dd;
  (**(code **)(*plVar1 + 0x3e0))();
  fVar3 = (float)(**(code **)(*this_ptr + 0xb10))();
  FUN_01e3f820();
  fVar6 = fStack_84;
  FUN_01e3f820();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_48 + 0x390))();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar2._4_4_ = uStack_94;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = uStack_90;
  auVar2._12_4_ = uStack_8c;
  auVar5._4_4_ = fStack_84;
  auVar5._0_4_ = (fStack_84 - local_88) - fVar3 * (fVar6 - (local_88 + local_88));
  auVar5._8_4_ = uVar7;
  auVar5._12_4_ = uVar7;
  auVar5 = insertps(auVar2,auVar5,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar5._0_8_,g_02394298);
  return;
}


// Function: FUN_0193f9b0
// Address: 0193f9b0
// Size: 947 bytes
// Class: Unknown

void FUN_0193f9b0(uint32_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  char cVar3;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint8_t auVar9 [16];
  float fVar10;
  uint32_t local_58;
  float fStack_54;
  int64_t local_48;
  char local_40;
  uint8_t local_38 [16];
  float fVar8;
  
  auVar9 = ZEXT416(g_0241f36c);
  FUN_01cfcdc0(g_0239109c);
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d488d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_01e3f820();
  uVar7 = (**(code **)(&g_00001720 + *this_ptr))();
  auVar2._8_4_ = extraout_XMM0_Dc;
  auVar2._0_8_ = uVar7;
  auVar2._12_4_ = extraout_XMM0_Dd;
  auVar9 = insertps(auVar9,auVar2,0x10);
  local_58 = (uint32_t)param_2;
  cVar3 = FUN_00d054a0(uVar4,auVar9._0_8_,param_1,local_58);
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)*arg1;
    FUN_00d05360(uVar4);
    (**(code **)(*plVar1 + 0x3b0))();
  }
  local_38._0_8_ = FUN_01e3f820();
  local_38._8_4_ = extraout_XMM0_Dc_00;
  local_38._12_4_ = extraout_XMM0_Dd_00;
  uVar7 = (**(code **)(&g_00001728 + *this_ptr))();
  auVar9._8_4_ = extraout_XMM0_Dc_01;
  auVar9._0_8_ = uVar7;
  auVar9._12_4_ = extraout_XMM0_Dd_01;
  auVar9 = insertps(local_38,auVar9,0x10);
  cVar3 = FUN_00d054a0(auVar9._0_4_);
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)*arg1;
    FUN_00d05360(auVar9._0_4_);
    (**(code **)(*plVar1 + 0x3b0))();
  }
  FUN_01cfbee0(g_0239011c);
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d488d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00d05530(param_1);
  fVar8 = (float)((uint64_t)uVar7 >> 0x20);
  uVar4 = (uint32_t)uVar7;
  fVar5 = (float)(**(code **)(&g_00001720 + *this_ptr))();
  FUN_01d48b40(g_02394298);
  fStack_54 = (float)((uint64_t)param_2 >> 0x20);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  FUN_01d48b40(g_02390124);
  fVar6 = fStack_54 + fVar8 + g_02390d00;
  fVar10 = g_0241f374;
  for (; fVar8 <= fVar5; fVar5 = fVar5 + fVar10) {
    if (fVar5 <= fVar6) {
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))(uVar4);
      fVar10 = g_0241f374;
    }
  }
  fVar5 = (float)(**(code **)(&g_00001728 + *this_ptr))();
  FUN_01d48b40(g_02394298);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))(uVar4);
  FUN_01d48b40(g_02390124);
  for (; fVar5 <= fVar6; fVar5 = fVar5 + g_0241c3ec) {
    if (fVar8 <= fVar5) {
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))(uVar4);
    }
  }
  return;
}


// Function: FUN_01c85f60
// Address: 01c85f60
// Size: 700 bytes
// Class: Unknown

void FUN_01c85f60(uint32_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fStack_84 = (float)((uint64_t)param_2 >> 0x20);
  local_88 = (float)param_2;
  local_78 = (float)param_1;
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))(local_78,local_88);
  FUN_01cfc6a0(g_02390120);
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  FUN_01d488d0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  fVar4 = local_88;
  FUN_00d05530(local_78,local_88,g_02390124);
  (**(code **)(*plVar1 + 0x3b0))();
  FUN_01d48b40(g_02390124);
  uVar2 = (**(code **)(*this_ptr + 0x640))();
  local_98 = g_026e41f0;
  fVar6 = fStack_84;
  if (g_026e41f0 != 0) {
    uVar2 = FUN_00d50b00();
    fVar6 = fStack_84;
  }
  local_90 = '\x01';
  (**(code **)(*local_a8 + 0x3b0))(uVar2,&local_98);
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  FUN_01d488d0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  uVar5 = FUN_01e3f820();
  fStack_84 = (float)((uint64_t)uVar5 >> 0x20);
  local_88 = (float)uVar5 + fVar4 + g_02390d00;
  fVar3 = (float)FUN_01e3f820();
  local_78 = fVar4 + fVar3 + g_02390d00;
  FUN_01e3f820();
  fVar3 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  (**(code **)(*plVar1 + 0x3e0))(local_88,0,local_78,fVar6 + extraout_XMM0_Db + g_02390d00);
  plVar1 = (int64_t *)*arg1;
  uVar5 = FUN_01e3f820();
  fVar3 = fVar3 + (float)uVar5;
  fVar7 = fVar7 + (float)((uint64_t)uVar5 >> 0x20);
  fVar8 = fVar8 + extraout_XMM0_Dc;
  fVar9 = fVar9 + extraout_XMM0_Dd;
  local_88 = fVar7 + g_02390d00;
  fStack_84 = fVar7;
  fStack_80 = fVar9;
  fStack_7c = fVar9;
  fVar4 = (float)FUN_01e3f820();
  local_78 = fVar3 + fVar4 + g_02390d00;
  fStack_74 = fVar7;
  fStack_70 = fVar8;
  fStack_6c = fVar9;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3e0))(0,local_88,local_78,fVar7 + extraout_XMM0_Db_00 + g_02390d00);
  FUN_01d48390();
  return;
}


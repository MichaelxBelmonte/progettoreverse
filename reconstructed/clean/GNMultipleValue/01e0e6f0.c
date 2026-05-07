// Function: FUN_01e0e6f0
// Address: 01e0e6f0
// Size: 1355 bytes
// Class: GNMultipleValue

void FUN_01e0e6f0(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  bool bVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char cVar7;
  int64_t *plVar8;
  uint8_t uVar9;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t in_XMM1 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  int64_t *local_40;
  char local_38;
  
  uVar5 = g_023dccdc;
  FUN_01e3f820();
  auVar12._0_4_ = (float)(int)(in_XMM1._4_4_ * g_0239011c);
  auVar12._4_4_ = (float)(int)in_XMM1._4_4_;
  auVar12._8_4_ = (float)(int)in_XMM1._12_4_;
  auVar12._12_4_ = (float)(int)in_XMM1._12_4_;
  insertps(in_XMM1,auVar12,0x10);
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar8 + 0x18))();
  FUN_01d4ed60();
  FUN_01d52700();
  lVar6 = g_027f30f8;
  if (g_027f30f8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  if (local_40 == (int64_t *)0x0) {
    bVar4 = true;
    plVar8 = (int64_t *)0x0;
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = false;
    }
    else {
      local_38 = '\0';
      bVar4 = false;
    }
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = g_027f3100;
  if (g_027f3100 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  if (local_40 == (int64_t *)0x0) {
    bVar3 = true;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    local_38 = '\0';
    bVar3 = false;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  if ((int64_t *)this_ptr[0x27] == (int64_t *)0x0) {
LAB_01e0e931:
    uVar9 = 0;
  }
  else {
    cVar7 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x9a0))();
    uVar9 = 1;
    if (cVar7 == '\0') goto LAB_01e0e931;
  }
  (**(code **)(*local_40 + 0x3f0))(4,1,0,uVar9);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x400))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x548))();
  (**(code **)(*(int64_t *)*arg1 + 0x400))();
  uVar10 = FUN_01d526f0();
  FUN_01d52700();
  (**(code **)(*this_ptr + 0x640))();
  if ((int64_t *)this_ptr[0x27] != (int64_t *)0x0) {
    cVar7 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x9a0))();
    uVar9 = 1;
    if (cVar7 != '\0') goto LAB_01e0eace;
  }
  uVar9 = 0;
LAB_01e0eace:
  (**(code **)(*local_40 + 0x3f0))(4,1,0,uVar9);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x400))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  local_138 = (float)uVar10;
  fStack_134 = (float)((uint64_t)uVar10 >> 0x20);
  fStack_130 = (float)extraout_XMM0_Qb;
  fStack_12c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar11._0_4_ = local_138 + (float)uVar5;
  auVar11._4_4_ = fStack_134 + (float)(uVar5 >> 0x20);
  auVar11._8_4_ = fStack_130 + 0.0;
  auVar11._12_4_ = fStack_12c + 0.0;
  auVar12 = blendps(auVar11,auVar2,0xd);
  (**(code **)(*(int64_t *)*arg1 + 0x400))(auVar12._0_8_);
  FUN_00d50b20();
  if (!bVar3 && local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4 && plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}


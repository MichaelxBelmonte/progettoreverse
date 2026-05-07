// Function: FUN_01e65010
// Address: 01e65010
// Size: 961 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e65010(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint8_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint64_t in_RCX;
  int iVar7;
  uint64_t in_RDX;
  void*arg1;
  int64_t this_ptr;
  float fVar9;
  uint64_t in_XMM0_Qb;
  uint8_t auVar8 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar10 [16];
  uint32_t local_res8;
  float fStack_94;
  int64_t local_40;
  char local_38;
  
  fStack_94 = (float)((uint64_t)param_2 >> 0x20);
  g_02802fb0 = (uint32_t)param_3;
  iVar7 = (int)in_RDX;
  if (iVar7 == 0x11) {
    lVar1 = *(int64_t *)(this_ptr + 0x60);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    auVar5._8_8_ = in_XMM0_Qb;
    auVar5._0_8_ = param_1;
    uVar3 = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
    fVar9 = (float)((uint64_t)param_1 >> 0x20);
    auVar6._8_8_ = in_XMM1_Qb;
    auVar6._0_8_ = param_2;
    uVar4 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
    auVar8._4_4_ = fVar9;
    auVar8._0_4_ = fVar9 + g_023b1608;
    auVar8._8_4_ = uVar3;
    auVar8._12_4_ = uVar3;
    auVar8 = insertps(auVar5,auVar8,0x10);
    auVar10._4_4_ = fStack_94;
    auVar10._0_4_ = fStack_94 + g_02390d34;
    auVar10._8_4_ = uVar4;
    auVar10._12_4_ = uVar4;
    auVar10 = insertps(auVar6,auVar10,0x10);
    plVar2 = (int64_t *)*arg1;
    FUN_01d39800(auVar8._0_8_,auVar10._0_8_,*(void*)(this_ptr + 0x178));
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar2 + 0x3a0))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (iVar7 == 0x14) {
    FUN_01cbadc0(in_RCX,0x14,param_3,param_4);
  }
  else if (iVar7 == 0x2c) {
    FUN_01d39800(in_RCX,in_RDX,fStack_94 * g_0239011c);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01cfc9f0();
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
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    FUN_01e63b70(g_02802fb0,0x2c,param_4,local_res8);
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
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


// Function: FUN_002f4600
// Address: 002f4600
// Size: 1731 bytes
// Class: MDDocumentViewController

void FUN_002f4600(float param_1,uint64_t param_2,int param_3)

{
  uint8_t auVar1 [16];
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint64_t in_RCX;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  uint32_t extraout_XMM0_Da;
  uint64_t in_XMM1_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int local_ac;
  int64_t local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_38;
  
  FUN_01ed2e60(in_RCX,param_3);
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  local_a8 = local_50;
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_a0 + 0x3a0))();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_a0 + 0x470))();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar6 = FUN_01ed4e60();
  if (iVar6 == 0) {
    cVar4 = FUN_01dd3250();
    if (cVar4 == '\0') {
      if (local_50 == 0) goto LAB_002f4987;
      bVar3 = true;
      FUN_00d50b00();
      local_38 = local_50;
    }
    else if (local_50 == 0) {
LAB_002f4987:
      bVar3 = false;
      local_38 = 0;
    }
    else {
      bVar3 = true;
      FUN_00d50b00();
      local_38 = local_50;
    }
    FUN_01d488d0();
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(param_1);
    FUN_01ed46d0();
    goto LAB_002f4c6a;
  }
  local_f0 = local_a8;
  local_e8 = '\0';
  FUN_01edb3b0(extraout_XMM0_Da,&local_f0);
  local_88 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_88 = '\x01';
  local_90 = local_50;
  FUN_01ed2ec0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  local_ac = param_3;
  cVar4 = FUN_01dd3250();
  cVar5 = FUN_01dd3250();
  if (cVar4 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if (cVar5 != '\0') goto LAB_002f4a21;
LAB_002f4a8f:
    local_e0 = local_50;
    local_38 = local_50;
    local_d8 = '\0';
    FUN_01d488d0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    lVar7 = 0;
    bVar2 = false;
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(param_1);
  }
  else {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if (cVar5 != '\0') goto LAB_002f4a8f;
LAB_002f4a21:
    lVar7 = local_50;
    if (cVar5 == '\0') {
      if (local_50 == 0) goto LAB_002f4af6;
      bVar2 = true;
      FUN_00d50b00();
    }
    else if (local_50 == 0) {
LAB_002f4af6:
      bVar2 = false;
      lVar7 = 0;
    }
    else {
      bVar2 = true;
      FUN_00d50b00();
    }
    local_c8 = '\0';
    local_d0 = local_50;
    FUN_01d488d0();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    auVar9._8_8_ = in_XMM1_Qb;
    auVar9._0_8_ = param_2;
    auVar8._4_12_ = auVar9._4_12_;
    auVar8._0_4_ = (float)param_2 + g_02394248;
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(param_1 + g_023908ec,auVar8._0_8_);
    local_b8 = '\0';
    local_c0 = lVar7;
    FUN_01d488d0();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    auVar1._8_8_ = in_XMM1_Qb;
    auVar1._0_8_ = param_2;
    auVar9 = blendps(auVar1,g_023b1e70,0xd);
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(param_1,auVar9._0_8_);
    local_38 = local_50;
  }
  bVar3 = local_50 != 0;
  iVar6 = FUN_01dcea80();
  if (local_ac + 1 != iVar6) {
    FUN_01ed2e60();
    local_78 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_78 = '\x01';
    local_80 = local_50;
    FUN_01ed4e60();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
LAB_002f4c6a:
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


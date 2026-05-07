// Function: FUN_00543570
// Address: 00543570
// Size: 616 bytes
// Class: MURenderSliceTimeContext
// === MURenderSliceTimeContext properties ===
//   MUTimeContextCreationType _type


void FUN_00543570(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  int64_t *plVar3;
  char cVar4;
  uint uVar5;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  float fVar10;
  float fVar11;
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  uVar9 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar8 = (uint32_t)param_2;
  cVar4 = (**(code **)(*this_ptr + 0x988))();
  if (cVar4 != '\0') {
    local_98._0_8_ = FUN_01e3f820();
    local_98._8_8_ = extraout_XMM0_Qb;
    local_88._4_4_ = uVar9;
    local_88._0_4_ = uVar8;
    local_88._8_4_ = in_XMM1_Dc;
    local_88._12_4_ = in_XMM1_Dd;
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_58 + 0x470))();
    local_68 = local_38;
    local_60 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_60 = '\x01';
    FUN_01d488d0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    fVar11 = *(float *)(this_ptr + 0x35);
    local_b8 = local_98;
    uVar5 = *(byte *)(this_ptr + 0x31) ^ 1;
    fVar10 = *(float *)(local_b8 + (uint64_t)(uVar5 & 3) * 4) + fVar11;
    auVar7._0_4_ = -(uint)(uVar5 == g_0238fcc0);
    auVar7._4_4_ = -(uint)(uVar5 == _UNK_0238fcc4);
    auVar7._8_4_ = -(uint)(uVar5 == _UNK_0238fcc8);
    auVar7._12_4_ = -(uint)(uVar5 == _UNK_0238fccc);
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = fVar10;
    auVar1._8_4_ = fVar10;
    auVar1._12_4_ = fVar10;
    local_98 = blendvps(local_98,auVar1,auVar7);
    local_a8 = local_88;
    fVar11 = *(float *)(local_a8 + (uint64_t)(uVar5 & 3) * 4) - (fVar11 + fVar11);
    auVar2._4_4_ = fVar11;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar11;
    local_88 = blendvps(local_88,auVar2,auVar7);
    uVar6 = (**(code **)(*this_ptr + 0x640))();
    plVar3 = local_58;
    local_78 = g_026fe4b8;
    if (g_026fe4b8 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = '\x01';
    (**(code **)(*plVar3 + 0x3b0))(uVar6,&local_78);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_01d488d0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
  }
  return;
}


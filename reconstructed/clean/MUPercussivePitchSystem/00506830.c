// Function: FUN_00506830
// Address: 00506830
// Size: 1651 bytes
// Class: MUPercussivePitchSystem

void FUN_00506830(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  float fVar5;
  uint32_t extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar7;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  uint64_t uVar6;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  uint32_t extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM1_Dc;
  float fVar11;
  float fVar12;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar8 = (float)param_2;
  FUN_01d96f70();
  uVar4 = (**(code **)(*this_ptr + 0x640))();
  plVar2 = local_50;
  local_98 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar2 + 0x3b0))(uVar4,&local_98);
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  lVar1 = this_ptr[0x49];
  if (lVar1 == 0) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02680400;
    *(void*)((int64_t)puVar3 + 0xc) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(void*)((int64_t)puVar3 + 0x39) = 0;
    *(void*)((int64_t)puVar3 + 0x41) = 0;
    (*g_02680418)();
    lVar1 = this_ptr[0x49];
    this_ptr[0x49] = (int64_t)puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01d9aea0();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      FUN_01d97e80();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d9aea0();
      local_68 = (**(code **)(*local_40 + 0x4d8))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d97e80();
    (**(code **)(*local_40 + 0x4d8))();
    FUN_01d39400((float)local_68,extraout_XMM0_Db);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    FUN_01d97e80();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_00;
    in_XMM1_Dc = extraout_XMM0_Dd;
    FUN_01d38ba0((float)local_68,extraout_XMM0_Db_00);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this_ptr + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_01 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_00 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + g_02390d00);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this_ptr + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_02 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_01 + in_XMM1_Dc;
    FUN_01d38ba0((float)local_68,fVar7 + g_02390d00);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xa08))();
    uVar6 = (**(code **)(*local_40 + 0x4d8))();
    local_68 = uVar6;
    (**(code **)(*this_ptr + 0xa08))();
    (**(code **)(*local_50 + 0x4d8))();
    fVar7 = extraout_XMM0_Db_03 + fVar7;
    in_XMM1_Dc = extraout_XMM0_Dd_02 + in_XMM1_Dc;
    fVar8 = fVar7 + g_02390d00 + g_023b2664;
    FUN_01d38ba0((float)local_68);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x49];
    plVar2 = (int64_t *)*arg1;
  }
  else {
    plVar2 = (int64_t *)*arg1;
  }
  if (lVar1 != 0) {
    local_80 = 0;
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  (**(code **)(*plVar2 + 0x3a8))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x950))();
  uVar6 = (**(code **)(*local_40 + 0x4d8))();
  fVar9 = fVar8;
  local_68 = uVar6;
  (**(code **)(*this_ptr + 0x950))();
  (**(code **)(*local_50 + 0x4d8))();
  fVar10 = fVar7;
  fVar11 = fVar9;
  fVar12 = in_XMM1_Dc;
  (**(code **)(*this_ptr + 0x950))();
  fVar5 = (float)(**(code **)(*local_c8 + 0x4d8))();
  uVar4 = extraout_XMM0_Dc;
  (**(code **)(*this_ptr + 0x950))();
  (**(code **)(*local_b8 + 0x4d8))();
  (**(code **)(*plVar2 + 0x3e0))
            ((float)local_68 + fVar8 + g_02390d00,extraout_XMM0_Db_04 + fVar7 + g_02390d00,
             fVar5 + fVar9 + g_02390d00,extraout_XMM0_Db_05 + fVar10 + g_02390d00 + g_023b2664
             ,fVar11,fVar12,fVar5,uVar4,fVar9,in_XMM1_Dc);
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


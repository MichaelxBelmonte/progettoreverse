// Function: FUN_01b4b900
// Address: 01b4b900
// Size: 1482 bytes
// Class: MUScaleSavePanel
// === MUScaleSavePanel properties ===
//                   _titleField
//                   _titleLabel
//                   _newFolderButton
//                   _lastSelectedColumnIndex
//                   _lastSelectedRowIndex
//                   _handleSelectCellInProgress
//                   _modeSwitch
//                   _tuningSwitch
//                   _fundamentalSwitch
//                   _pitchSwitch
//                   _stretchingSwitch
//                   _slideRuleSensitiveRects
//                   _slideRuleSensitiveRectsCents
//                   _showRatios
//                   _showAllRatios
//                   _showRatioModeButton


void FUN_01b4b900(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  int64_t lVar5;
  void *pvVar6;
  void*puVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar13 [16];
  float fVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t in_XMM1_Qb;
  uint64_t uVar18;
  uint64_t uVar19;
  uint8_t auVar17 [16];
  float local_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar5 = g_027e4580;
  if (g_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceb8d0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ceb930();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar5 = g_027e4580;
  if (g_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceba50();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01cebab0();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_01b3e230();
  FUN_00d6f370();
  local_c8 = g_027e47d8;
  if (g_027e47d8 != 0) {
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  plVar9 = &local_b8;
  FUN_00d710b0(plVar9,&local_c8);
  pVar8 = (void*)plVar9;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    local_a8 = local_38;
    local_a0 = '\0';
    FUN_01b3e4c0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01acf850();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    plVar9 = *(int64_t **)(this_ptr + 0x98);
    FUN_01acf850();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01768510();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar9 + 0x968))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar8 = 0x26034e8;
    *puVar7 = &g_026034e8;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    *(void*)((int64_t)puVar7 + 0x55) = 0;
    (*g_02603500)();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01acf850();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_017aa610();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    local_90 = '\0';
    local_98 = puVar7;
    FUN_01d2a770();
    if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01b4c2c0();
  uVar10 = (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x4d8))();
  uVar15 = param_2;
  uVar18 = in_XMM1_Qb;
  uVar11 = (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x4d8))();
  uVar16 = uVar15;
  uVar19 = uVar18;
  uVar12 = (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x538))();
  FUN_01e40eb0();
  FUN_01e3f820();
  local_f8 = (float)uVar16;
  uStack_f4 = (uint32_t)((uint64_t)uVar16 >> 0x20);
  uStack_f0 = (uint32_t)uVar19;
  uStack_ec = (uint32_t)((uint64_t)uVar19 >> 0x20);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  auVar3._8_8_ = extraout_XMM0_Qb_01;
  auVar3._0_8_ = uVar12;
  fVar14 = g_02392fd8 + (float)uVar12 + g_02390d30;
  local_f8 = local_f8 + g_023908e4;
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = param_2;
  auVar17 = blendps(auVar1,auVar3,0xd);
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar10;
  auVar13 = blendps(auVar2,g_0241d5a0,0xd);
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x4d0))(auVar13._0_8_,auVar17._0_8_);
  auVar13._8_8_ = extraout_XMM0_Qb_00;
  auVar13._0_8_ = uVar11;
  auVar13 = blendps(auVar13,ZEXT416((uint)fVar14),1);
  auVar17._8_8_ = uVar18;
  auVar17._0_8_ = uVar15;
  auVar4._4_4_ = uStack_f4;
  auVar4._0_4_ = local_f8 - (float)uVar12;
  auVar4._8_4_ = uStack_f0;
  auVar4._12_4_ = uStack_ec;
  auVar17 = blendps(auVar17,auVar4,1);
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x4d0))(auVar13._0_8_,auVar17._0_8_);
  FUN_01b4c850();
  return;
}


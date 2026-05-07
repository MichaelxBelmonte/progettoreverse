// ===================================================================
// MUScaleSavePanel — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (16):
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


// ============================================================
// 01b4b900
// ============================================================
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



// ============================================================
// 01b4b060
// ============================================================
// Function: FUN_01b4b060
// Address: 01b4b060
// Size: 2039 bytes
// Class: MUScaleSavePanel
// String references:
//   "handleCancel"
//   "handleOK"
//   "handleFinishEditing"
//   "MUScaleSavePanel"
//   "handleSelectCell"
//   "handleCreateNewFolder"
//   "handleTitleFieldDidChange"
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


void FUN_01b4b060(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b4550 = "handleOK";
      g_028b4558 = &g_0273b4b8;
      g_028b4560 = 0;
      g_028b4568 = &g_027e4800;
      g_028b4570 = FUN_01b533b0;
      g_028b4578 = 0x5c1;
      g_028b4580 = 0;
      ram_00000000028b4588 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4598 = "handleCancel";
      g_028b45a0 = &g_0273b4b8;
      g_028b45a8 = 0;
      g_028b45b0 = &g_027e30b8;
      g_028b45b8 = FUN_01ad0760;
      g_028b45c0 = 0x5c9;
      g_028b45c8 = 0;
      ram_00000000028b45d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b45e0 = "handleCreateNewFolder";
      g_028b45e8 = &g_0273b4b8;
      g_028b45f0 = 0;
      g_028b45f8 = &g_027e4800;
      g_028b4600 = FUN_01b533b0;
      g_028b4608 = 0x5e9;
      g_028b4610 = 0;
      ram_00000000028b4618 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4628 = "handleSelectCell";
      g_028b4630 = &g_0273b4b8;
      g_028b4638 = 0;
      g_028b4640 = &g_027e4800;
      g_028b4648 = FUN_01b533b0;
      g_028b4650 = 0x5d9;
      g_028b4658 = 0;
      ram_00000000028b4660 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4670 = "handleFinishEditing";
      g_028b4678 = &g_0273b4b8;
      g_028b4680 = 0;
      g_028b4688 = &g_027e4800;
      g_028b4690 = FUN_01b533b0;
      g_028b4698 = 0x5e1;
      g_028b46a0 = 0;
      ram_00000000028b46a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b46b8 = "handleTitleFieldDidChange";
      g_028b46c0 = &g_0273b4b8;
      g_028b46c8 = 0;
      g_028b46d0 = &g_027e4800;
      g_028b46d8 = FUN_01b533b0;
      g_028b46e0 = 0x5d1;
      g_028b46e8 = 0;
      ram_00000000028b46f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00853b20
// ============================================================
// Function: FUN_00853b20
// Address: 00853b20
// Size: 685 bytes
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


void FUN_00853b20(void)

{
  void*this_ptr;
  
  *this_ptr = &g_026449b8;
  this_ptr[2] = &g_02645458;
  this_ptr[0x27] = &g_02645498;
  this_ptr[0x2d] = &g_026454e8;
  this_ptr[0x2e] = &g_02645518;
  this_ptr[0x2f] = &g_02645550;
  if (this_ptr[99] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x60] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x59] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x58] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x57] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x55] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x54] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x52] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x49] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x48] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x47] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x46] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x45] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x44] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x39] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x36] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x34] != 0) {
    FUN_00d50b20();
  }
  *this_ptr = &g_0262ed90;
  this_ptr[2] = &g_0262f700;
  this_ptr[0x27] = &g_0262f740;
  if (this_ptr[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2a] != 0) {
    FUN_00d50b20();
  }
  FUN_0006d770();
  return;
}



// ============================================================
// 008543e0
// ============================================================
// Function: FUN_008543e0
// Address: 008543e0
// Size: 1012 bytes
// Class: MUScaleSavePanel
// String references:
//   "MUScaleSavePanel"
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


void FUN_008543e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_008469f0();
  *this_ptr = &g_02649a68;
  FUN_00854980();
  FUN_00854c70();
  FUN_00854f60();
  FUN_00855250();
  FUN_00855540();
  FUN_00855830();
  *(void*)(this_ptr + 0x18) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273b573 == '\0') {
    FUN_00855b20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273b573 == '\0') {
    FUN_00855c90();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273b573 == '\0') {
    FUN_00855e00();
    FUN_00e87980();
  }
  FUN_00855f70();
  FUN_00856260();
  FUN_00856550();
  FUN_00856840();
  FUN_00856b30();
  FUN_00856e20();
  return;
}


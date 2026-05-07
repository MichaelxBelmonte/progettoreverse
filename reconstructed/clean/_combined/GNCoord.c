// ===================================================================
// GNCoord — Complete reconstructed pseudocode
// 10 functions
// ===================================================================

// Registered properties (16):
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


// ============================================================
// 01c2dc30
// ============================================================
// Function: FUN_01c2dc30
// Address: 01c2dc30
// Size: 2195 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c2dc30(void)

{
  int64_t lVar1;
  byte bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int64_t local_200;
  char local_1f8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_190;
  char local_188;
  int64_t local_170;
  char local_168;
  int64_t local_150;
  char local_148;
  int64_t local_120;
  char local_118;
  int64_t local_100;
  char local_f8;
  int64_t local_e0;
  char local_d8;
  int64_t local_b0;
  char local_a8;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  
  FUN_01c10f60();
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_01c2f350();
  (**(code **)(*plVar5 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x20);
  *(int64_t **)(this_ptr + 0x20) = plVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb030;
  if (g_027eb030 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  lVar4 = local_50;
  if (local_50 == 0) {
    bVar2 = 1;
    bVar6 = 0;
    bVar7 = 0;
    bVar3 = false;
    bVar8 = false;
    lVar4 = 0;
  }
  else if (local_48 == '\0') {
    FUN_00d50b00();
    bVar6 = 1;
    bVar7 = 1;
    bVar2 = 0;
    bVar3 = true;
    bVar8 = true;
  }
  else {
    bVar2 = 0;
    bVar6 = 1;
    bVar7 = 1;
    bVar3 = true;
    bVar8 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    bVar7 = bVar6;
    bVar8 = bVar3;
  }
  lVar1 = g_027eb038;
  if (g_027eb038 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb040;
  if (g_027eb040 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb048;
  if (g_027eb048 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb050;
  if (g_027eb050 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bool)(bVar2 & local_50 != 0)) {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if ((bool)(bVar7 & lVar4 != 0)) {
      FUN_00d50b20();
      bVar8 = true;
      lVar4 = local_50;
    }
    else {
      bVar8 = true;
      lVar4 = local_50;
    }
  }
  else if ((bool)(bVar7 & lVar4 != 0)) {
    FUN_00d50b20();
    bVar8 = true;
    lVar4 = local_50;
  }
  else {
    bVar8 = true;
    lVar4 = local_50;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb058;
  if (g_027eb058 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb060;
  if (g_027eb060 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb068;
  if (g_027eb068 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb070;
  if (g_027eb070 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bVar8) || (local_50 == 0)) {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if ((!bVar8) || (lVar4 == 0)) goto LAB_01c2e100;
    FUN_00d50b20();
    lVar4 = local_50;
    bVar8 = true;
  }
  else if ((bVar8) && (lVar4 != 0)) {
    FUN_00d50b20();
    lVar4 = local_50;
    bVar8 = true;
  }
  else {
LAB_01c2e100:
    lVar4 = local_50;
    bVar8 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb078;
  if (g_027eb078 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb070;
  if (g_027eb070 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb080;
  if (g_027eb080 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb088;
  if (g_027eb088 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bVar8) || (local_50 == 0)) {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      if ((bVar8) && (lVar4 != 0)) {
        FUN_00d50b20();
        lVar4 = local_50;
        bVar8 = true;
        goto joined_r0x01c2e4a6;
      }
    }
    else if ((bVar8) && (lVar4 != 0)) {
      FUN_00d50b20();
      lVar4 = local_50;
      bVar8 = true;
      goto joined_r0x01c2e4a6;
    }
    bVar8 = true;
    lVar4 = local_50;
  }
joined_r0x01c2e4a6:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb090;
  if (g_027eb090 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb088;
  if (g_027eb088 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb098;
  if (g_027eb098 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar8) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c2e8c0
// ============================================================
// Function: FUN_01c2e8c0
// Address: 01c2e8c0
// Size: 939 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c2e8c0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  char *pcVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (int64_t *)*param_2;
  if (plVar1 == (int64_t *)0x0) {
    lVar2 = *(int64_t *)(arg1 + 0x20);
    *(void*)(this_ptr + 1) = 0;
    lVar2 = *(int64_t *)(lVar2 + 0x30);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_01c2f170();
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      param_2 = &g_02802688;
    }
    plVar1 = (int64_t *)*param_2;
    cVar4 = (char)param_2[1];
    if ((cVar4 == '\0') || (plVar1 == (int64_t *)0x0)) {
      if (plVar1 == (int64_t *)0x0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        return;
      }
    }
    else {
      FUN_00d50b00();
    }
    lVar2 = plVar1[6];
    if (*(int *)(lVar2 + 0xc) == 0) {
      plVar5 = (int64_t *)FUN_01c2a780();
      (**(code **)(*plVar5 + 0x18))();
      local_60 = plVar5;
      FUN_01c110f0();
      local_90 = local_48;
      local_88 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_88 = '\x01';
      FUN_01c1a300();
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027d3810;
      if (g_027d3810 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_0277cbb0;
      if (g_0277cbb0 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar3;
      local_a8 = '\x01';
      (**(code **)(*plVar1 + 0x368))();
      local_70 = local_58;
      local_68 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_68 = '\x01';
      FUN_00d14780(&local_70,&local_b0);
      local_80 = local_48;
      local_78 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_78 = '\x01';
      FUN_01c1a370();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01c110c0();
      FUN_00d23310();
      pcVar6 = local_38;
      if (local_40[0] != '\0') {
        pcVar6 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_a0 = local_60;
      local_98 = '\0';
      (**(code **)(*local_48 + 0x368))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      FUN_00d50b00();
      *this_ptr = lVar2;
      *(void*)(this_ptr + 1) = 1;
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01c32d30
// ============================================================
// Function: FUN_01c32d30
// Address: 01c32d30
// Size: 1055 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c32d30(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  lVar3 = g_027ebc70;
  if (g_027ebc70 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_40;
    local_b0 = g_027eb298;
    if (g_027eb298 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d3ecc0();
      plVar1 = local_40;
      local_a0 = g_027eb2a0;
      if (g_027eb2a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_01c33108;
    }
    (**(code **)(*this_ptr + 0x620))();
    goto LAB_01c33108;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_01c388c0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01c32dfc:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01c32dfc;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    plVar2 = (int64_t *)plVar1[0xd];
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_68 = 0;
    lVar3 = plVar1[0xc];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_38 = '\0';
    local_70 = lVar3;
    local_40 = plVar2;
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar3 = g_027ebc70;
    if (g_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar3;
    local_b8 = '\x01';
    FUN_00d3ecf0();
    local_50 = local_80;
    local_48 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_48 = '\x01';
    FUN_00d41040(&local_50,&local_c0);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x620))();
    FUN_00d50b20();
  }
LAB_01c33108:
  local_90 = *arg1;
  local_88 = '\0';
  FUN_00d530a0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c31df0
// ============================================================
// Function: FUN_01c31df0
// Address: 01c31df0
// Size: 927 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c31df0(void)

{
  int64_t *plVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  if (*(float *)(this_ptr + 0x74) <= 0.0) {
    *(void*)(this_ptr + 0x74) = 0x3f800000;
  }
  if (*(float *)(this_ptr + 0x70) <= 0.0) {
    *(void*)(this_ptr + 0x70) = 0x3f800000;
  }
  FUN_01d4e800(*(void*)(this_ptr + 0x70));
  plVar1 = *(int64_t **)(this_ptr + 0x68);
  plVar5 = plVar1;
  if (plVar1 == local_40) goto LAB_01c31e9c;
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01c31e5a;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0x68);
    *(int64_t **)(this_ptr + 0x68) = local_40;
  }
  else {
    local_38 = '\0';
LAB_01c31e5a:
    *(int64_t **)(this_ptr + 0x68) = plVar5;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar5 = local_40;
  }
LAB_01c31e9c:
  if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = *(int64_t *)(this_ptr + 0x60);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00b810f0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    uVar2 = FUN_00e7d780(*(void*)(this_ptr + 0x70));
    lVar4 = FUN_00e83020();
    dVar8 = (double)FUN_00b7a6e0();
    uVar3 = FUN_00e7d850(dVar8 * g_0241c3f0);
    if ((int)uVar3 < (int)uVar2) {
      uVar2 = uVar3;
    }
    FUN_00b86d20(g_0241c3f0,0,uVar2);
    FUN_01d52740();
    FUN_01d480c0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01d48b40(g_02390124);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01cfc6a0(g_0239011c);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_01d488d0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (0 < (int)uVar2) {
      fVar9 = *(float *)(this_ptr + 0x74) * g_0239011c;
      fVar7 = g_0239011c * fVar9;
      uVar6 = 0;
      do {
        FUN_01d52740();
        fVar10 = *(float *)(lVar4 + uVar6 * 4) * fVar7;
        (**(code **)(*local_40 + 0x3e0))
                  ((float)(int)uVar6,fVar9 + fVar10,(float)(int)uVar6,fVar9 - fVar10);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    FUN_01d52740();
    FUN_01d481c0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e83070();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c32a00
// ============================================================
// Function: FUN_01c32a00
// Address: 01c32a00
// Size: 645 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c32a00(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  uint8_t uVar3;
  byte bVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_40;
  char local_38;
  
  cVar2 = (**(code **)(*this_ptr + 0xb40))();
  if (((cVar2 != '\0') && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) &&
     (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    FUN_01d3abf0();
    uVar7 = FUN_01e466c0();
    uVar8 = (**(code **)(*this_ptr + 0xb58))();
    cVar2 = FUN_00d05410(uVar7,uVar8,param_2);
    if (cVar2 != '\0') {
      *(void*)(this_ptr + 0x3d) = 1;
LAB_01c32a90:
      (**(code **)(*this_ptr + 0x620))();
      (**(code **)(*this_ptr + 0x658))();
      lVar6 = *arg1;
      if (lVar6 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01c32b3c;
          }
LAB_01c32af2:
          *(void*)(arg1 + 1) = 1;
          local_38 = '\0';
        }
        lVar6 = *arg1;
        uVar7 = uVar8;
      }
      else {
        lVar1 = arg1[1];
        if (local_38 != '\0') {
          *arg1 = local_40;
          if (((char)lVar1 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01c32af2;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_40;
        if (((char)lVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_01c32b3c:
        *(void*)(arg1 + 1) = 1;
        lVar6 = *arg1;
        uVar7 = uVar8;
      }
      if (lVar6 != 0) {
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 6) goto LAB_01c32bbf;
        FUN_01d3abf0();
        uVar9 = FUN_01e466c0();
        uVar8 = (**(code **)(*this_ptr + 0xb58))();
        uVar3 = FUN_00d05410(uVar9,uVar8,uVar7);
        *(void*)(this_ptr + 0x3d) = uVar3;
        goto LAB_01c32a90;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01c32bbf:
      *(void*)(this_ptr + 0x3d) = 0;
      (**(code **)(*this_ptr + 0x620))();
      if ((*arg1 != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 == 6)) {
        FUN_01d3abf0();
        uVar8 = FUN_01e466c0();
        uVar9 = (**(code **)(*this_ptr + 0xb58))();
        cVar2 = FUN_00d05410(uVar8,uVar9,uVar7);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*this_ptr + 0xb18))();
          lVar6 = 0x162;
          if (cVar2 == '\0') {
            bVar4 = (**(code **)(*this_ptr + 0xaf0))();
            lVar6 = (uint64_t)bVar4 + 0x161;
          }
          (**(code **)(*this_ptr + lVar6 * 8))();
        }
      }
    }
  }
  FUN_01d122b0();
  return;
}



// ============================================================
// 01c30540
// ============================================================
// Function: FUN_01c30540
// Address: 01c30540
// Size: 841 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c30540(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar4;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar4 = (int64_t *)(this_ptr + 0xb8);
    (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = g_027e1b98;
    if (g_027e1b98 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    pVar3 = 0x20;
    FUN_00e8b850(0x20,&local_70);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar4 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = g_027e3ba0;
    if (g_027e3ba0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
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
    FUN_00e8b850(0x20,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01c312d0
// ============================================================
// Function: FUN_01c312d0
// Address: 01c312d0
// Size: 573 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c312d0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t **pplVar3;
  void *pvVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar5;
  bool bVar6;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*arg1 + 0x630))();
  if (local_38 == (int64_t *)0x0) {
    bVar6 = true;
  }
  else {
    (**(code **)(*arg1 + 0x630))();
    bVar6 = *(int *)((int64_t)local_48 + 0xc) != 1;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) goto LAB_01c3145a;
  (**(code **)(*arg1 + 0x630))();
  FUN_00d23310();
  plVar1 = local_38;
  local_40 = local_30 != '\0';
  local_48 = local_38;
  if ((bool)local_40) {
    local_30 = '\0';
  }
  FUN_0006e1c0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01c313cc:
    pplVar3 = &g_02802688;
    plVar5 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01c313dc;
LAB_01c313ef:
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c313cc;
    pplVar3 = &local_48;
    plVar5 = local_48;
    if (local_40 == '\0') goto LAB_01c313ef;
LAB_01c313dc:
    *(void*)(pplVar3 + 1) = 0;
  }
  if ((local_40 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_01c3145a:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01c314a9;
    }
  }
  else if (local_38 != (int64_t *)0x0) {
LAB_01c314a9:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    FUN_00d50b20();
    goto LAB_01c314f5;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01c314f5:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01c2b230
// ============================================================
// Function: FUN_01c2b230
// Address: 01c2b230
// Size: 1300 bytes
// Class: GNCoord
// String references:
//   "float"
//   "GNCoord"
//   "_tempo"
//   "GNInt"
//   "MULoop"
//   "_loopSetOrderIndex"
//   "MUTagAttributeOption"
//   "_minWidthToDisplayLoopId"
//   "_matchGrade"
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c2b230(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01c27c60();
  *this_ptr = &g_02663ef8;
  FUN_01c2ba00();
  this_ptr[6] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2bae0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_01c2bbd0();
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2bcb0();
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2be20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  FUN_01c2bf10();
  FUN_01c2bff0();
  FUN_01c2c0d0();
  FUN_01c2c1b0();
  FUN_01c2c290();
  FUN_01c2c370();
  *(void*)(this_ptr + 0x10) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01c2c450();
  FUN_01c2c530();
  FUN_01c2c610();
  *(void*)(this_ptr + 0x14) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2c6f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01c30b20
// ============================================================
// Function: FUN_01c30b20
// Address: 01c30b20
// Size: 831 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c30b20(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar3;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar3 = (int64_t *)(this_ptr + 0xb8);
    (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = g_027e1b98;
    if (g_027e1b98 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e8b9a0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar3 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = g_027e3ba0;
    if (g_027e3ba0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e8b9a0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01c2cb70
// ============================================================
// Function: FUN_01c2cb70
// Address: 01c2cb70
// Size: 754 bytes
// Class: GNCoord
// String references:
//   "float"
//   "GNCoord"
//   "MULoopComponent"
//   "MUBrowserLoopItem"
//   "_minWidthToDisplayLoopId"
//   "_matchGrade"
//   "_minIconWidth"
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c2cb70(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01c27c60();
  *this_ptr = &g_02656608;
  this_ptr[5] = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2cf20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBrowserLoopItem");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2d010();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopComponent");
  }
  FUN_01c2d100();
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}


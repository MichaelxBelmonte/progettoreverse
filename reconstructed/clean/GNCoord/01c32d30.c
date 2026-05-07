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


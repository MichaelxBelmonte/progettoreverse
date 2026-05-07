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


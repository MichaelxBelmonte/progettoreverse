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


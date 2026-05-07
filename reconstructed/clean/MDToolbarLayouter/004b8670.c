// Function: FUN_004b8670
// Address: 004b8670
// Size: 610 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b8670(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar4 = *(int64_t **)(this_ptr + 0x10);
  if (plVar4 == (int64_t *)0x0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar1 = *(int64_t *)(this_ptr + 0x10);
    *(int64_t **)(this_ptr + 0x10) = plVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar4 = *(int64_t **)(this_ptr + 0x10);
      if (plVar4 == (int64_t *)0x0) goto LAB_004b86dd;
    }
LAB_004b86d3:
    FUN_00d50b00();
  }
  else {
    if (plVar4 != (int64_t *)0x0) goto LAB_004b86d3;
LAB_004b86dd:
    plVar4 = (int64_t *)0x0;
  }
  local_70 = *arg1;
  local_68 = '\0';
  FUN_004b7f70(param_1,&local_70);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    return;
  }
  plVar4 = *(int64_t **)(this_ptr + 0x10);
  if (plVar4 == (int64_t *)0x0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar2 = *(int64_t *)(this_ptr + 0x10);
    *(int64_t **)(this_ptr + 0x10) = plVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar4 = *(int64_t **)(this_ptr + 0x10);
      if (plVar4 == (int64_t *)0x0) goto LAB_004b87a9;
    }
LAB_004b879f:
    FUN_00d50b00();
  }
  else {
    if (plVar4 != (int64_t *)0x0) goto LAB_004b879f;
LAB_004b87a9:
    plVar4 = (int64_t *)0x0;
  }
  local_40 = *arg1;
  local_38 = '\0';
  FUN_00ca13a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = *param_2;
  lVar3 = *(int64_t *)(lVar1 + 0x10);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(lVar1 + 0x10) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(int64_t **)(this_ptr + 0x10);
  if (plVar4 == (int64_t *)0x0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar2 = *(int64_t *)(this_ptr + 0x10);
    *(int64_t **)(this_ptr + 0x10) = plVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar4 = *(int64_t **)(this_ptr + 0x10);
      goto joined_r0x004b8855;
    }
  }
  else {
joined_r0x004b8855:
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_004b8863;
    }
  }
  FUN_00d50b00();
LAB_004b8863:
  local_60 = lVar1;
  local_58 = '\0';
  local_50 = *param_2;
  local_48 = '\0';
  FUN_004b8390(param_1,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


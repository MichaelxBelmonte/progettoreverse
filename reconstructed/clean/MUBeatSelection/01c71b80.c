// Function: FUN_01c71b80
// Address: 01c71b80
// Size: 1086 bytes
// Class: MUBeatSelection
// === MUBeatSelection properties ===
//                   _selectionIsTemporary
//                   _isResizable
//                   _drawsBottomBorder
//                   _drawsTopBorder
//                   _showsRegionBar
//                   _tempoEditorDelegate
//                   _showsDestinationRegionStart
//                   _destinationRegionStartAlpha
//                   _destinationRegionStart
//                   _currentRegionStart
//                   _selectedSubdivisionIndex
//                   _enabledRegionIndex


void FUN_01c71b80(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  void*this_ptr;
  bool bVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar5 = (uint32_t)((uint64_t)param_2 >> 0x20);
  (**(code **)(*arg1 + 0x4d8))();
  (**(code **)(*arg1 + 0x7b8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c71bed;
    }
  }
  else if (local_40 != 0) {
LAB_01c71bed:
    FUN_01d97870();
    if (local_40 == 0) {
      bVar3 = false;
    }
    else {
      FUN_01d97850();
      bVar3 = local_50 != 0;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      uVar4 = FUN_00d46dc0(CONCAT44(uVar5,uVar5));
      lVar1 = g_027ebed8;
      if ((local_48 == '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b00();
        lVar1 = g_027ebed8;
      }
      g_027ebed8 = lVar1;
      if (lVar1 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d470c0(arg1[0x37]);
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = g_027ebee0;
      if (g_027ebee0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d470c0(arg1[0x38]);
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = g_027ebee8;
      if (g_027ebee8 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d46530();
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = g_027ebef0;
      if (g_027ebef0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = (int64_t *)0x0;
    }
    *this_ptr = plVar2;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *this_ptr = 0;
  *(void*)(this_ptr + 1) = 1;
  return;
}


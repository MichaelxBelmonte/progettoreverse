// Function: FUN_01c51df0
// Address: 01c51df0
// Size: 778 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c51df0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar5 = *(int64_t *)(this_ptr + 0x178);
  lVar1 = *arg1;
  if (lVar5 == lVar1) {
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *(int64_t *)(this_ptr + 0x178) = lVar1;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x180) == (int64_t *)0x0) goto LAB_01c51f1e;
  (**(code **)(**(int64_t **)(this_ptr + 0x180) + 0x3a0))();
  plVar3 = local_38;
  plVar2 = *(int64_t **)(this_ptr + 0x170);
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == plVar2) {
LAB_01c51f0d:
    lVar5 = *(int64_t *)(this_ptr + 0x180);
  }
  else {
    (**(code **)(**(int64_t **)(this_ptr + 0x180) + 0x3a0))();
    plVar2 = local_38;
    local_50 = 0;
    local_58 = *(int64_t *)(this_ptr + 0x180);
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar2 + 0x3e0))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = 0;
    if (*(int64_t *)(this_ptr + 0x180) != 0) {
      *(void*)(this_ptr + 0x180) = 0;
      FUN_00d50b20();
      goto LAB_01c51f0d;
    }
  }
  if (lVar5 != 0) {
    return;
  }
LAB_01c51f1e:
  if (*(int64_t *)(this_ptr + 0x170) != 0) {
    FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    FUN_01cb4790();
    (**(code **)(*local_98 + 0x370))();
    local_48 = local_68;
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      lVar5 = *(int64_t *)(this_ptr + 0x188);
    }
    else {
      local_60 = '\0';
      lVar5 = *(int64_t *)(this_ptr + 0x188);
    }
    local_40 = '\x01';
    if (lVar5 != 0) {
      local_40 = '\x01';
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_01a8bca0(1,uVar4 >> 0x20,&local_48,&local_88);
    plVar2 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = plVar2;
    local_70 = '\0';
    (**(code **)(**(int64_t **)(this_ptr + 0x170) + 0x3d8))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(int64_t **)(this_ptr + 0x180);
    if (plVar3 != plVar2) {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x180) = plVar2;
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


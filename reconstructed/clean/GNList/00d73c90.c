// Function: FUN_00d73c90
// Address: 00d73c90
// Size: 615 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d73c90(void)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar5 = *(int64_t *)(this_ptr + 0x10);
  if (lVar5 == 0) {
    bVar3 = false;
    lVar5 = 0;
  }
  else {
    local_60 = 0;
    FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar5;
    FUN_00d8dab0();
    if (local_40 == 0) {
      lVar5 = 0;
      bVar3 = false;
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_38 = '\0';
        bVar3 = true;
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d64850();
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x10);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x10) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = g_0277e650;
  if (lVar5 != 0) {
    if (g_0277e650 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar1 = g_0277e658;
  if (g_0277e658 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = '\0';
  local_78 = plVar4;
  FUN_00d40470(&local_78,&stack0xffffffffffffffa8,3,3);
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((bVar3) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}


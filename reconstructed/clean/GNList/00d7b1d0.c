// Function: FUN_00d7b1d0
// Address: 00d7b1d0
// Size: 1153 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d7b1d0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t uVar5;
  void*puVar6;
  int64_t *arg1;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  uVar5 = (**(code **)(*arg1 + 0x380))();
  FUN_00d4ffd0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0277eb80;
  if (g_0277eb80 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_02774da0;
  if (g_02774da0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_0277eb88;
  if (g_0277eb88 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar4 = g_027e3b60;
  lVar3 = g_027e3b58;
  local_40 = g_0277eba0;
  lVar2 = g_0277eb98;
  lVar1 = g_0277eb90;
  switch(uVar5) {
  case 0:
    if (g_027e3b58 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    FUN_00d21140();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    break;
  case 1:
    if (g_027e3b60 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar4;
    FUN_00d21140();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    break;
  case 2:
    if (g_0277eb90 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    break;
  case 3:
    if (g_0277eb98 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    FUN_00d21140();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    break;
  default:
    if (g_0277eba0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8ede0();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


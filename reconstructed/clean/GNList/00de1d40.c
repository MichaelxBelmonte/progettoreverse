// Function: FUN_00de1d40
// Address: 00de1d40
// Size: 667 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00de1d40(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a8720;
  if ((g_028a8720 == (void*)0x0) || (g_028a8729 == '\0')) {
    FUN_00e8cb50();
    if (g_028a8720 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a8720 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a8720 != (void*)0x0;
        g_028a8720 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a8728 == '\0') {
        g_028a8728 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_02772fc0;
      if (g_02772fc0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027e3b70;
      if (g_027e3b70 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772fd8;
      if (g_02772fd8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772fd0;
      if (g_02772fd0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772fe0;
      if (g_02772fe0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a8729 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a8729 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a8720;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00de1fc1;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00de1fc1:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}


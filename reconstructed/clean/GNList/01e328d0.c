// Function: FUN_01e328d0
// Address: 01e328d0
// Size: 524 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e328d0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void*this_ptr;
  bool bVar5;
  
  plVar4 = g_028b9970;
  if ((g_028b9970 == (int64_t *)0x0) || (g_028b9979 == '\0')) {
    FUN_00e8cb50();
    if (g_028b9970 == (int64_t *)0x0) {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (g_028b9970 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028b9970 != (int64_t *)0x0;
        g_028b9970 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b9978 == '\0') {
        g_028b9978 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027f38a0;
      if (g_027f38a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027f38a8;
      if (g_027f38a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027f3810;
      if (g_027f3810 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027f38b0;
      if (g_027f38b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b9979 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b9979 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = g_028b9970;
    *(void*)(this_ptr + 1) = 0;
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_01e32ac2;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01e32ac2:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}


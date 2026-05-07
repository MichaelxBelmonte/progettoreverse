// Function: FUN_01aaed70
// Address: 01aaed70
// Size: 833 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01aaed70(void)

{
  char cVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  bool bVar4;
  int64_t local_40;
  char local_38;
  
  if ((g_028b31c8 == (void*)0x0) || (g_028b31d1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b31c8 == (void*)0x0) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_0258a670;
      (*g_0258a688)();
      bVar4 = g_028b31c8 == (void*)0x0;
      g_028b31c8 = puVar2;
      if (((bVar4) || (FUN_00d50b20(), g_028b31c8 != (void*)0x0)) && (g_028b31d0 == '\0')
         ) {
        g_028b31d0 = '\x01';
        FUN_00e8cb90();
      }
      g_028b31d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b31d1 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00cabdd0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 != 0) {
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  FUN_00ddb860();
  cVar1 = (**(code **)(MACH_HEADER._0_8_ + 0x410))();
  lVar3 = g_026e17f8;
  if (cVar1 != '\0') {
    if (g_026e17f8 != 0) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(MACH_HEADER._0_8_ + 1000))(0,0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      (**(code **)(MACH_HEADER._0_8_ + 0x380))();
      FUN_00d8f140();
      cVar1 = '\x01';
      lVar3 = 0;
      goto LAB_01aaf029;
    }
  }
  lVar3 = *arg1;
  if (lVar3 == 0) {
    cVar1 = '\x01';
    lVar3 = 0;
  }
  else {
    cVar1 = (char)arg1[1];
    if (cVar1 != '\0') {
      FUN_00d50b00();
    }
  }
LAB_01aaf029:
  FUN_00cabe80();
  *(void*)(this_ptr + 1) = 0;
  if ((cVar1 == '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}


// Function: FUN_017d1ec0
// Address: 017d1ec0
// Size: 508 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint32_t FUN_017d1ec0(void)

{
  bool bVar1;
  uint32_t uVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t *plVar4;
  int64_t *local_68;
  char local_60;
  
  if ((g_028af448 == (int64_t *)0x0) || (g_028af451 == '\0')) {
    FUN_00e8cb50();
    if (g_028af448 == (int64_t *)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      FUN_017d1b50();
      if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00c6d890();
      plVar4 = g_028af448;
      if (g_028af448 != local_68) {
        if (local_68 == (int64_t *)0x0) {
          plVar4 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar4 = local_68;
        }
        bVar1 = g_028af448 != (int64_t *)0x0;
        g_028af448 = plVar4;
        if (bVar1) {
          FUN_00d50b20();
          plVar4 = local_68;
        }
      }
      if ((plVar4 != (int64_t *)0x0) && (g_028af450 == '\0')) {
        g_028af450 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d50b20();
      g_028af451 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af451 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar4 = g_028af448;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  uVar2 = (**(code **)(*plVar4 + 0x368))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return uVar2;
}


// Function: FUN_01820ea0
// Address: 01820ea0
// Size: 661 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01820ea0(void)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t local_50;
  char local_48;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_02572358;
  *puVar1 = &g_02572358;
  (*g_02572370)();
  lVar3 = *(int64_t *)(arg1 + 0x68);
  lVar6 = arg1;
  while (pVar4 = (void*)puVar5, lVar3 == 0) {
    lVar6 = *(int64_t *)(lVar6 + 0x60);
    if (lVar6 == 0) goto LAB_0182106c;
    pvVar2 = _pthread_getspecific(pVar4);
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    lVar3 = *(int64_t *)(lVar6 + 0x68);
  }
  if (*(int64_t *)(lVar6 + 0x68) != 0) {
    lVar3 = *(int64_t *)(arg1 + 0x68);
    lVar6 = arg1;
    while (lVar3 == 0) {
      pVar4 = (void*)puVar5;
      lVar6 = *(int64_t *)(lVar6 + 0x60);
      if (lVar6 == 0) break;
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      pVar4 = (void*)puVar5;
      lVar3 = *(int64_t *)(lVar6 + 0x68);
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01524aa0();
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
  }
LAB_0182106c:
  if (*(int64_t *)(arg1 + 0x40) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar3 = *(int64_t *)(arg1 + 0x40);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_02774a00;
  if (g_02774a00 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}


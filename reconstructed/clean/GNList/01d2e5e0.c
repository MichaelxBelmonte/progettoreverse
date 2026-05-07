// Function: FUN_01d2e5e0
// Address: 01d2e5e0
// Size: 513 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d2e5e0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t this_ptr;
  int64_t lVar5;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        cVar3 = (**(code **)(*plVar2 + 0x488))();
        if (((cVar3 != '\0') && (cVar3 = FUN_01ccd030(), cVar3 != '\0')) &&
           (cVar3 = FUN_00d24090(), cVar3 == '\0')) {
          (**(code **)(*plVar2 + 0x490))();
          FUN_00d21140();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01d300d0();
  }
  plVar2 = *(int64_t **)(this_ptr + 0x40);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x78))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}


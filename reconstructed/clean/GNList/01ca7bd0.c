// Function: FUN_01ca7bd0
// Address: 01ca7bd0
// Size: 609 bytes
// Class: GNList
// String references:
//   "objectAtIndexedSubscript:"
//   "bytes"
//   "dataForType:"
//   "length"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_01ca7bd0(void)

{
  void*puVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void*this_ptr;
  uint64_t uVar5;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_msgSend_024a9998)();
  puVar1 = PTR__objc_msgSend_024a9998;
  for (uVar5 = 0; uVar3 = (*puVar1)(), uVar5 < uVar3; uVar5 = uVar5 + 1) {
    (*puVar1)();
    FUN_01ca74b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00e1cfc0();
    lVar4 = (*puVar1)();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      (*puVar1)();
      (*puVar1)();
      FUN_00c8e2b0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      local_38 = '\0';
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  (*PTR__objc_release_024a99a0)();
  if (*(int *)((int64_t)puVar2 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = puVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}


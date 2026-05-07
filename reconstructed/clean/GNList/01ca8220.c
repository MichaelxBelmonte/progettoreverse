// Function: FUN_01ca8220
// Address: 01ca8220
// Size: 546 bytes
// Class: GNList
// String references:
//   "objectAtIndexedSubscript:"
//   "types"
//   "objectAtIndex:"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01ca8220(void)

{
  void*puVar1;
  void*puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void*this_ptr;
  int64_t local_a8;
  char local_a0;
  uint64_t local_68;
  int64_t local_50;
  char local_48;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  lVar3 = (*PTR__objc_msgSend_024a9998)();
  puVar1 = PTR__objc_msgSend_024a9998;
  if (lVar3 != 0) {
    for (local_68 = 0; uVar4 = (*puVar1)(), local_68 < uVar4; local_68 = local_68 + 1) {
      (*puVar1)();
      (*puVar1)();
      for (uVar4 = 0; uVar5 = (*puVar1)(), uVar4 < uVar5; uVar4 = uVar4 + 1) {
        (*puVar1)();
        FUN_00e1ccf0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01ca8090();
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        FUN_00d235a0();
        if (local_a8 != 0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  (*PTR__objc_release_024a99a0)();
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}


// Function: FUN_01d2a8f0
// Address: 01d2a8f0
// Size: 551 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d2a8f0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  
  plVar1 = (int64_t *)*arg1;
  if (plVar1 != (int64_t *)0x0) {
    lVar4 = *(int64_t *)(this_ptr + 0x10);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      return;
    }
  }
  if (((*(char *)(this_ptr + 0x39) != '\0') && (*arg1 != 0)) &&
     (*(int *)(*arg1 + 0xc) == *(int *)(*(int64_t *)(this_ptr + 0x10) + 0xc) + 1)) {
    FUN_00d50b00();
    cVar3 = FUN_00d23fd0();
    FUN_00d50b20();
    if ((cVar3 != '\0') && (lVar4 = *arg1, lVar4 != 0)) {
      lVar5 = 0;
      do {
        if (*(int *)(lVar4 + 0xc) <= (int)lVar5) goto LAB_01d2aa80;
        lVar2 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
        cVar3 = FUN_00d23d70();
        lVar5 = lVar5 + 1;
      } while (cVar3 != '\0');
      lVar4 = *(int64_t *)(this_ptr + 0xb8);
      if (lVar4 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar4 = *(int64_t *)(this_ptr + 0xb8);
        }
        *(int64_t *)(this_ptr + 0xb8) = lVar2;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
LAB_01d2aa80:
      FUN_00083b20();
    }
  }
  FUN_01d2acc0();
  FUN_00d243f0();
  *(void*)(this_ptr + 0xac) = 8;
  FUN_01d2aeb0();
  if (*(int *)(this_ptr + 0xac) != 0) {
    FUN_01d2b270();
    *(void*)(this_ptr + 0xac) = 0;
  }
  if (*(int64_t *)(this_ptr + 0xb8) != 0) {
    *(void*)(this_ptr + 0xb8) = 0;
    FUN_00d50b20();
  }
  return;
}


// Function: FUN_01884ba0
// Address: 01884ba0
// Size: 504 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01884ba0(void* param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  
  lVar5 = *(int64_t *)(arg1 + 0xb8);
  if ((lVar5 != 0) || (lVar5 = *(int64_t *)(arg1 + 0xb0), lVar5 != 0)) {
    FUN_00d50b00();
  }
  if (lVar5 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d50b20();
    cVar2 = FUN_01891770();
    if (cVar2 != '\0') {
      lVar5 = *(int64_t *)(arg1 + 0xb8);
      if ((lVar5 != 0) || (lVar5 = *(int64_t *)(arg1 + 0xb0), lVar5 != 0)) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        iVar1 = *(int *)(*(int64_t *)(lVar5 + 0x58) + 0xc);
      }
      else {
        iVar1 = *(int *)(*(int64_t *)
                          (*(int64_t *)
                            (lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x58) +
                        0xc);
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (iVar1 != 0) {
        lVar5 = *(int64_t *)(arg1 + 0xb8);
        if ((lVar5 != 0) || (lVar5 = *(int64_t *)(arg1 + 0xb0), lVar5 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          *(void*)(this_ptr + 1) = 0;
          lVar4 = *(int64_t *)(lVar5 + 0x58);
        }
        else {
          lVar4 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          *(void*)(this_ptr + 1) = 0;
          lVar4 = *(int64_t *)(lVar4 + 0x58);
        }
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar4;
        *(void*)(this_ptr + 1) = 1;
        if (lVar5 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    lVar5 = *(int64_t *)(arg1 + 0xb8);
    if ((lVar5 != 0) || (lVar5 = *(int64_t *)(arg1 + 0xb0), lVar5 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01524ad0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


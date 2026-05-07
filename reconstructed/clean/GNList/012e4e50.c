// Function: FUN_012e4e50
// Address: 012e4e50
// Size: 1091 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_012e4e50(int64_t param_1)

{
  char cVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int iVar6;
  int local_40;
  
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if (cVar1 != '\0') {
    lVar5 = this_ptr[0x15];
    if (lVar5 != 0) {
      local_40 = -1;
      while( true ) {
        lVar2 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar5 + 0xc) <= local_40) break;
        lVar2 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar2 * 8);
        pvVar3 = _pthread_getspecific((void*)*(int64_t *)(lVar5 + 0x10));
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar2 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (*(int64_t *)(lVar2 + 0x110) != 0) {
          FUN_00d64850();
          *(void*)(lVar2 + 0x110) = 0;
          FUN_00d64910();
        }
      }
      FUN_000be170();
      param_1 = lVar5;
    }
    lVar5 = this_ptr[0x16];
    if (lVar5 != 0) {
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)(lVar5 + 0xc)) {
        pvVar3 = _pthread_getspecific((void*)*(void*)(lVar5 + 0x10));
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266f80();
      }
      FUN_001159b0();
      param_1 = lVar5;
    }
    if (this_ptr[0x23] != 0) {
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123f2c0();
    }
    lVar5 = this_ptr[0x1a];
    if (lVar5 != 0) {
      if (0 < *(int *)(lVar5 + 0xc)) {
        iVar6 = 0;
        do {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01307b90();
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar5 + 0xc));
      }
      FUN_013073d0();
    }
    lVar5 = this_ptr[0x1b];
    if (lVar5 != 0) {
      if (0 < *(int *)(lVar5 + 0xc)) {
        iVar6 = 0;
        do {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dd780();
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar5 + 0xc));
      }
      FUN_01307470();
    }
  }
  FUN_00e8b7e0();
  return;
}


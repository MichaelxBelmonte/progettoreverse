// Function: FUN_018c77c0
// Address: 018c77c0
// Size: 782 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_018c77c0(uint8_t param_1,uint64_t param_2,uint8_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t this_ptr;
  uint32_t local_40;
  
  cVar2 = FUN_00d59e50();
  if (cVar2 == '\0') {
    cVar2 = FUN_00d59e50();
    if ((cVar2 != '\0') && (lVar1 = *(int64_t *)(this_ptr + 0x40), lVar1 != 0)) {
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
        FUN_018c7070();
      }
      FUN_018c8180();
    }
  }
  else {
    lVar1 = *(int64_t *)(this_ptr + 0x98);
    if (lVar1 != 0) {
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
        FUN_018c6ef0();
      }
      FUN_018c80e0();
    }
  }
  FUN_00d5af30(param_1,param_2,param_3);
  cVar2 = FUN_00d59e50();
  if (cVar2 == '\0') {
    cVar2 = FUN_00d59e50();
    if ((cVar2 != '\0') && (lVar1 = *(int64_t *)(this_ptr + 0x40), lVar1 != 0)) {
      for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
        FUN_018c6d80();
      }
      FUN_018c8180();
    }
  }
  else {
    lVar1 = *(int64_t *)(this_ptr + 0x98);
    if (lVar1 != 0) {
      for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
        FUN_018c6c00();
      }
      FUN_018c80e0();
    }
  }
  return;
}


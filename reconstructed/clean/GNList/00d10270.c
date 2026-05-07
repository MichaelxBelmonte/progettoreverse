// Function: FUN_00d10270
// Address: 00d10270
// Size: 528 bytes
// Class: GNList
// String references:
//   "@%@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d10270(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  if (*(int64_t *)(arg1 + 0x68) == 0) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_0258a670;
    (*g_0258a688)();
    puVar2 = *(void**)(arg1 + 0x68);
    if (puVar2 == puVar3) {
      FUN_00d50b20();
    }
    else {
      *(void**)(arg1 + 0x68) = puVar3;
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00cabdd0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if (local_50 == 0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_50 = local_50;
    if ((local_60 != 0) && (local_50 = local_60, local_58 == '\0')) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00cabe80();
  }
  *this_ptr = local_50;
  *(void*)(this_ptr + 1) = 1;
  return;
}


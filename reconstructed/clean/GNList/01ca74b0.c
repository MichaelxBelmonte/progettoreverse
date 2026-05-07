// Function: FUN_01ca74b0
// Address: 01ca74b0
// Size: 762 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01ca74b0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  lVar2 = g_026fceb8;
  plVar1 = (int64_t *)*param_2;
  if (g_026fceb8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026fcec0;
  if (cVar4 == '\0') {
    plVar1 = (int64_t *)*param_2;
    if (g_026fcec0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027eda00;
    lVar2 = g_027ed9f8;
    if (cVar4 == '\0') {
      plVar1 = (int64_t *)*param_2;
      if (g_027eda00 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027eda08;
      if (cVar4 == '\0') {
        plVar1 = (int64_t *)*param_2;
        if (g_027eda08 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          (*PTR__objc_release_024a99a0)();
          lVar2 = g_02774da0;
          if (g_02774da0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d90eb0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          *(void*)(this_ptr + 1) = 0;
          local_40 = *param_2;
          if ((char)param_2[1] != '\0') {
            *this_ptr = local_40;
            *(void*)(this_ptr + 1) = 1;
            *(void*)(param_2 + 1) = 0;
            return;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          FUN_00e1ccf0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          (*PTR__objc_release_024a99a0)();
        }
      }
      else {
        FUN_00e1ccf0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        (*PTR__objc_release_024a99a0)();
      }
    }
    else {
      if (g_027ed9f8 != 0) {
        FUN_00d50b00();
      }
      (*PTR__objc_release_024a99a0)();
      local_40 = lVar2;
    }
  }
  else {
    FUN_00e1ccf0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    (*PTR__objc_release_024a99a0)();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}


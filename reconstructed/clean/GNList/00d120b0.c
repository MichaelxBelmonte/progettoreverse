// Function: FUN_00d120b0
// Address: 00d120b0
// Size: 910 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d120b0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_0277c938;
  if (*param_2 == 0) {
    if (g_0277c938 != 0) {
      FUN_00d50b00();
    }
    FUN_00df3740();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    _ZSTD_compressBound();
    iVar2 = _ZSTD_isError();
    lVar1 = g_02787228;
    if (iVar2 == 0) {
      FUN_00c8e710();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      lVar1 = g_0277c940;
      if (local_40 != 0) {
        _ZSTD_compress((int64_t)*(int *)(*param_2 + 0x18),*(void*)(*param_2 + 0x10),
                       *(void*)(arg1 + 0xc));
        iVar2 = _ZSTD_isError();
        lVar1 = g_02787228;
        if (iVar2 != 0) {
          if (g_02787228 != 0) {
            FUN_00d50b00();
          }
          _ZSTD_getErrorName();
          FUN_00d91a70();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00df3740();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          FUN_00d50b20();
          return;
        }
        FUN_00c8e340();
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
      if (g_0277c940 != 0) {
        FUN_00d50b00();
      }
      FUN_00df3740();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_02787228 != 0) {
        FUN_00d50b00();
      }
      _ZSTD_getErrorName();
      FUN_00d91a70();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00df3740();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}


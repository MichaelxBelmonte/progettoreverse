// Function: FUN_00d126a0
// Address: 00d126a0
// Size: 864 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d126a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  bool bVar4;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_0277c948;
  if (*param_2 == 0) {
    if (g_0277c948 != 0) {
      FUN_00d50b00();
    }
    FUN_00df3740();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar3 = _ZSTD_getFrameContentSize();
    iVar2 = _ZSTD_isError();
    if (iVar2 == 0) {
      FUN_00c8e710();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      _ZSTD_decompress((int64_t)*(int *)(*param_2 + 0x18),*(void*)(*param_2 + 0x10));
      iVar2 = _ZSTD_isError();
      lVar3 = g_02787248;
      if (iVar2 == 0) {
        FUN_00c8e340();
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        if (g_02787248 != 0) {
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
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = g_0277c958;
      if ((lVar3 == -1) || (lVar1 = g_0277c950, lVar3 == -2)) {
        local_40 = lVar1;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar4 = local_40 != 0;
      }
      else {
        _ZSTD_getErrorName();
        FUN_00d91a70();
        if (local_40 == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      lVar3 = g_02787248;
      if (g_02787248 != 0) {
        FUN_00d50b00();
      }
      FUN_00df3740();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


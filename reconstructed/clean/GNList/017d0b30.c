// Function: FUN_017d0b30
// Address: 017d0b30
// Size: 687 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint32_t FUN_017d0b30(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  if ((g_028af468 == 0) || (g_028af471 == '\0')) {
    FUN_00e8cb50();
    if (g_028af468 == 0) {
      lVar1 = *(int64_t *)(this_ptr + 0x58);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      lVar2 = g_027d3878;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
        lVar2 = g_027d3878;
      }
      g_027d3878 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_018bf620();
      lVar6 = g_028af468;
      if (g_028af468 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_00d50b00();
            lVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar6 = local_38;
        }
        param_1 = (void*)g_028af468;
        bVar3 = g_028af468 != 0;
        g_028af468 = lVar6;
        if (bVar3) {
          FUN_00d50b20();
          lVar6 = local_38;
        }
      }
      if ((lVar6 != 0) && (g_028af470 == '\0')) {
        g_028af470 = '\x01';
        FUN_00e8cb90();
        lVar6 = local_38;
      }
      if ((local_30 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028af471 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af471 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  lVar2 = g_028af468;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
    lVar2 = g_028af468;
  }
  g_028af468 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_018bf930();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  uVar4 = FUN_00c71440();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar4;
}


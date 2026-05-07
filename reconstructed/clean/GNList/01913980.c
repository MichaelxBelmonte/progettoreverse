// Function: FUN_01913980
// Address: 01913980
// Size: 575 bytes
// Class: GNList
// String references:
//   "%@ %@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01913980(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_98;
  void*local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x48) != *arg1) {
    FUN_00d64850();
    lVar1 = *arg1;
    lVar2 = *(int64_t *)(this_ptr + 0x48);
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x48) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if ((*(int64_t *)(this_ptr + 0x48) != 0) && (*(int64_t *)(this_ptr + 0x50) != 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0190bc50();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0190a100();
      local_98 = local_50;
      FUN_00083ea0(2,&local_98);
      FUN_00d8cb40();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (*(int64_t *)(this_ptr + 0x40) != lVar1) {
        FUN_00d64850();
        lVar2 = *(int64_t *)(this_ptr + 0x40);
        if (lVar2 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *(int64_t *)(this_ptr + 0x40) = lVar1;
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_90 = (void*)&g_0253d630;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_90 = &g_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


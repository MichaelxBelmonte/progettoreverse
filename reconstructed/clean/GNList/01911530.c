// Function: FUN_01911530
// Address: 01911530
// Size: 1126 bytes
// Class: GNList
// String references:
//   "%@ %@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01911530(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x48) != *arg1) {
    if (*(int64_t *)(this_ptr + 0x48) != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01910950();
      FUN_00d50b00();
      cVar3 = FUN_00d24090();
      FUN_00d50b20();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01910ab0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
    }
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
    if (*(int64_t *)(this_ptr + 0x48) != 0) {
      if (*(int64_t *)(this_ptr + 0x50) != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0190bc50();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01910920();
        local_b8 = local_a0;
        param_1 = 2;
        FUN_00083ea0(2,&local_b8);
        FUN_00d8cb40();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (*(int64_t *)(this_ptr + 0x40) != local_40) {
          FUN_00d64850();
          lVar1 = *(int64_t *)(this_ptr + 0x40);
          if (lVar1 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(this_ptr + 0x40) = local_40;
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (*(int64_t *)(this_ptr + 0x48) == 0) {
          return;
        }
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01910950();
      FUN_00d50b00();
      cVar3 = FUN_00d24090();
      FUN_00d50b20();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01910980();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


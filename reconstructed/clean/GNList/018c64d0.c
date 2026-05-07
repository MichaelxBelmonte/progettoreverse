// Function: FUN_018c64d0
// Address: 018c64d0
// Size: 554 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_018c64d0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t *arg1;
  int64_t this_ptr;
  void*local_48;
  char local_40 [8];
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018bab80();
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (void*)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x368))();
    FUN_018c6870();
    if (local_40[0] == '\0') {
      if (((local_48 != (void*)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (local_48 == (void*)0x0) {
      local_48 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_48 = &g_02572358;
      (*g_02572370)();
      FUN_018c6920();
    }
    lVar1 = *arg1;
    local_40[0] = '\0';
    cVar2 = FUN_00d24090();
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      lVar1 = *arg1;
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x378))();
    if (local_48 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


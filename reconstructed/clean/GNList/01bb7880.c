// Function: FUN_01bb7880
// Address: 01bb7880
// Size: 824 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01bb7880(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t this_ptr;
  int64_t *plVar3;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar3 = (int64_t *)(this_ptr + 0xb8);
  (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
  FUN_00d50b00();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d4efa0();
  lVar1 = g_026d83d8;
  if (g_026d83d8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00e8b9a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d4efa0();
  lVar1 = g_026fe480;
  if (g_026fe480 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00e8b9a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
    FUN_00d50b20();
  }
  return;
}


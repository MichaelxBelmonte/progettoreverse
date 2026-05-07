// Function: FUN_00d48750
// Address: 00d48750
// Size: 503 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d48750(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t this_ptr;
  
  lVar2 = g_0277dca0;
  plVar1 = (int64_t *)*arg1;
  if (g_0277dca0 != 0) {
    param_1 = FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))(param_1,2);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50de0();
  (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3c0))(*(void*)(this_ptr + 0x10));
  (**(code **)(*(int64_t *)*arg1 + 0x3c0))(*(void*)(this_ptr + 0x14));
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x28);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x30);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x38);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


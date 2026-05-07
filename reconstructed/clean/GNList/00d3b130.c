// Function: FUN_00d3b130
// Address: 00d3b130
// Size: 557 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d3b130(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00d50de0();
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x378))();
  if (cVar4 != '\0') {
    plVar1 = (int64_t *)*arg1;
    local_50 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0x20);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0277d7c0;
    local_50 = '\x01';
    local_58 = lVar2;
    if (g_0277d7c0 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar3;
    local_90 = '\x01';
    (**(code **)(*plVar1 + 0x4f0))(param_1,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_40 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0x38);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027e7c20;
    local_40 = '\x01';
    local_48 = lVar2;
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = '\x01';
    (**(code **)(*plVar1 + 0x4f0))(param_1,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    FUN_00d74120();
    local_38 = local_68;
    local_30 = 0;
    local_78 = g_0277d7f0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
        local_78 = g_0277d7f0;
      }
    }
    else {
      local_60 = '\0';
    }
    local_30 = '\x01';
    g_0277d7f0 = local_78;
    if (local_78 != 0) {
      local_30 = '\x01';
      FUN_00d50b00();
    }
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x4f0))(param_1,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


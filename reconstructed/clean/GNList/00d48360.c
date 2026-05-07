// Function: FUN_00d48360
// Address: 00d48360
// Size: 734 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d48360(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t uVar3;
  int iVar4;
  uint32_t uVar5;
  void*arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  lVar2 = g_0277dca0;
  plVar1 = (int64_t *)*arg1;
  if (g_0277dca0 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50cd0();
  uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0xc) = uVar5;
  uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x430))();
  *(void*)(this_ptr + 0x10) = uVar5;
  uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x430))();
  *(void*)(this_ptr + 0x14) = uVar5;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x18) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x18);
        *(int64_t *)(this_ptr + 0x18) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x18) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x20) = uVar3;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x21) = uVar3;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x28);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x28);
        *(int64_t *)(this_ptr + 0x28) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x28) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x30);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x30) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x30);
        *(int64_t *)(this_ptr + 0x30) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x30) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (1 < iVar4) {
    (**(code **)(*(int64_t *)*arg1 + 0x470))();
    lVar2 = *(int64_t *)(this_ptr + 0x38);
    if (lVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          *(void*)(this_ptr + 0x38) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(int64_t *)(this_ptr + 0x38);
          *(int64_t *)(this_ptr + 0x38) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(int64_t *)(this_ptr + 0x38) = local_38;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


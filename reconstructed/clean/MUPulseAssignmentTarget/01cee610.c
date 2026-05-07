// Function: FUN_01cee610
// Address: 01cee610
// Size: 670 bytes
// Class: MUPulseAssignmentTarget

void FUN_01cee610(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  void*arg1;
  int64_t this_ptr;
  int64_t local_28;
  char local_20;
  
  FUN_01d0ec70();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x1d0);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x1d0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x1d0);
        *(int64_t *)(this_ptr + 0x1d0) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x1d0) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x1d8);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x1d8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x1d8);
        *(int64_t *)(this_ptr + 0x1d8) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x1d8) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x1e0);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x1e0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x1e0);
        *(int64_t *)(this_ptr + 0x1e0) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x1e0) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x1e8);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x1e8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x1e8);
        *(int64_t *)(this_ptr + 0x1e8) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x1e8) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x1f0) = uVar2;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 500) = uVar3;
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x1f8) = uVar2;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x1fc) = uVar3;
  return;
}


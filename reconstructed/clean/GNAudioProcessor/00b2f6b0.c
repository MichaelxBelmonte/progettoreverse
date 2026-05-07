// Function: FUN_00b2f6b0
// Address: 00b2f6b0
// Size: 658 bytes
// Class: GNAudioProcessor

void FUN_00b2f6b0(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  void*arg1;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  FUN_00d50cd0();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x28);
        *(int64_t *)(this_ptr + 0x28) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x28) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x30) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x30);
        *(int64_t *)(this_ptr + 0x30) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x30) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x40) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x40);
        *(int64_t *)(this_ptr + 0x40) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x40) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x38) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x38);
        *(int64_t *)(this_ptr + 0x38) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x38) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x18) = uVar2;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x48) = uVar3;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x4c) = uVar3;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  FUN_00e88810();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x50) = uVar3;
  return;
}


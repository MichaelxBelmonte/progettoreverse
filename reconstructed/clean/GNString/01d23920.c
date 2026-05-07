// Function: FUN_01d23920
// Address: 01d23920
// Size: 524 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d23920(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  void*arg1;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  FUN_01d81f40();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  FUN_00e88810();
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
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x38) = uVar2;
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x39) = uVar2;
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x3a) = uVar2;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x48) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x48);
        *(int64_t *)(this_ptr + 0x48) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x48) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x50) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x50);
        *(int64_t *)(this_ptr + 0x50) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x50) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}


// Function: FUN_01e5a990
// Address: 01e5a990
// Size: 856 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e5a990(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t uVar3;
  int iVar4;
  uint32_t uVar5;
  void*arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  int64_t local_38;
  char local_30;
  
  lVar2 = g_027f3dd8;
  plVar1 = (int64_t *)*arg1;
  if (g_027f3dd8 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d81f40();
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
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  *(int64_t *)(this_ptr + 0x20) = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = (**(code **)(*(int64_t *)*arg1 + 0x460))();
  *(void*)(this_ptr + 0x88) = uVar6;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  *(int64_t *)(this_ptr + 0x30) = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x38) = uVar3;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x39) = uVar3;
  uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x3c) = uVar5;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x3a) = uVar3;
  if (((iVar4 < 2) && ((**(code **)(*(int64_t *)*arg1 + 0x470))(), local_30 != '\0')) &&
     (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = (**(code **)(*(int64_t *)*arg1 + 0x460))();
  *(void*)(this_ptr + 0x40) = uVar6;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x50);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x50) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x50);
        *(int64_t *)(this_ptr + 0x50) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x50) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x58);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x58) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x58);
        *(int64_t *)(this_ptr + 0x58) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x58) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x68);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x68) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x68);
        *(int64_t *)(this_ptr + 0x68) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x68) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


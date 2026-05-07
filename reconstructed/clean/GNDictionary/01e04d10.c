// Function: FUN_01e04d10
// Address: 01e04d10
// Size: 770 bytes
// Class: GNDictionary

void FUN_01e04d10(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t uVar3;
  int iVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  lVar2 = g_027f30a0;
  plVar1 = (int64_t *)*arg1;
  if (g_027f30a0 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d0ec70();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x1d0);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x1d0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x1d0);
        *(int64_t *)(this_ptr + 0x1d0) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x1d0) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x1e8);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x1e8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x1e8);
        *(int64_t *)(this_ptr + 0x1e8) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x1e8) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x1f0);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x1f0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x1f0);
        *(int64_t *)(this_ptr + 0x1f0) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x1f0) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x1f8);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x1f8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x1f8);
        *(int64_t *)(this_ptr + 0x1f8) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x1f8) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x1e0) = uVar3;
  if (0 < iVar4) {
    uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
    *(void*)(this_ptr + 0x208) = uVar3;
    if (iVar4 != 1) {
      uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
      *(void*)(this_ptr + 0x1e3) = uVar3;
    }
  }
  return;
}


// Function: FUN_00c7fa90
// Address: 00c7fa90
// Size: 570 bytes
// Class: Unknown

void FUN_00c7fa90(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  void*arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  lVar2 = g_027f37f0;
  plVar1 = (int64_t *)*arg1;
  if (g_027f37f0 != 0) {
    FUN_00d50b00();
  }
  iVar3 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50cd0();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x10);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x10) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x10);
        *(int64_t *)(this_ptr + 0x10) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x10) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  FUN_00e88810();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  FUN_00e88810();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  FUN_00e88810();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
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
  if (1 < iVar3) {
    (**(code **)(*(int64_t *)*arg1 + 0x418))();
  }
  return;
}


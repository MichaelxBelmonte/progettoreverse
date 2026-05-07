// Function: FUN_00c79930
// Address: 00c79930
// Size: 672 bytes
// Class: GNAttributeType

void FUN_00c79930(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  FUN_00d50cd0();
  lVar2 = g_02772550;
  plVar1 = (int64_t *)*arg1;
  if (g_02772550 != 0) {
    FUN_00d50b00();
  }
  iVar3 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
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
  if (0 < iVar3) {
    (**(code **)(*(int64_t *)*arg1 + 0x470))();
    lVar2 = *(int64_t *)(this_ptr + 0x20);
    if (lVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          *(void*)(this_ptr + 0x20) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(int64_t *)(this_ptr + 0x20);
          *(int64_t *)(this_ptr + 0x20) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(int64_t *)(this_ptr + 0x20) = local_38;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (1 < iVar3) {
      uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
      *(void*)(this_ptr + 0x38) = uVar4;
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
    }
  }
  return;
}


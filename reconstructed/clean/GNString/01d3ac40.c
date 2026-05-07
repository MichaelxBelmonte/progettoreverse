// Function: FUN_01d3ac40
// Address: 01d3ac40
// Size: 572 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d3ac40(void)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t lVar5;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t local_38;
  char local_30;
  
  lVar6 = g_027efe10;
  plVar1 = (int64_t *)*arg1;
  if (g_027efe10 != 0) {
    FUN_00d50b00();
  }
  iVar2 = (**(code **)(*plVar1 + 0x598))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50cd0();
  iVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(int *)(this_ptr + 0xc) = iVar3;
  if (iVar3 != 2) {
    return;
  }
  uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x20) = uVar4;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar6 = *(int64_t *)(this_ptr + 0x18);
  if (lVar6 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x18) = 0;
      }
      else {
        FUN_00d50b00();
        lVar6 = *(int64_t *)(this_ptr + 0x18);
        *(int64_t *)(this_ptr + 0x18) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x18) = local_38;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (iVar2 != 1) {
    if (iVar2 < 2) {
      return;
    }
    (**(code **)(*(int64_t *)*arg1 + 0x470))();
    lVar6 = *(int64_t *)(this_ptr + 0x10);
    if (lVar6 != local_38) {
      lVar5 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar6 = *(int64_t *)(this_ptr + 0x10);
        }
      }
      else {
        local_30 = '\0';
      }
      *(int64_t *)(this_ptr + 0x10) = lVar5;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_30 == '\0') {
      return;
    }
    if (local_38 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x428))();
  FUN_00d920f0();
  lVar6 = *(int64_t *)(this_ptr + 0x10);
  lVar5 = lVar6;
  if (lVar6 == local_38) goto LAB_01d3ae1b;
  lVar5 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar5 = 0;
      goto LAB_01d3ada9;
    }
    FUN_00d50b00();
    lVar6 = *(int64_t *)(this_ptr + 0x10);
    *(int64_t *)(this_ptr + 0x10) = local_38;
  }
  else {
    local_30 = '\0';
LAB_01d3ada9:
    *(int64_t *)(this_ptr + 0x10) = lVar5;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
    lVar5 = local_38;
  }
LAB_01d3ae1b:
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}


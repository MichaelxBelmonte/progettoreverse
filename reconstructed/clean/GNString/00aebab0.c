// Function: FUN_00aebab0
// Address: 00aebab0
// Size: 567 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00aebab0(uint64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_70;
  int64_t local_38;
  int64_t local_30;
  char local_28;
  
  (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x390))(param_1,&local_38);
  lVar3 = local_30;
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (lVar3 != 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (arg1 < 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x398))();
    lVar3 = local_30;
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02765700;
    if (lVar3 != 0) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    *(int64_t *)(this_ptr + 0xa0) = local_70 - local_38;
  }
  else {
    *(int64_t *)(this_ptr + 0xa0) = arg1;
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x3a0))();
    lVar3 = local_30;
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02765700;
    if (lVar3 != 0) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  local_38 = local_38 + 4;
  *(int64_t *)(this_ptr + 0xa0) = *(int64_t *)(this_ptr + 0xa0) + -4;
  FUN_00c8e710();
  lVar3 = local_30;
  if ((((local_28 == '\0') && (local_30 != 0)) && (FUN_00d50b00(), local_28 != '\0')) &&
     (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar2 = *(int64_t *)(this_ptr + 0x70);
  if (lVar2 == lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x70) = lVar3;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = *(int64_t *)(this_ptr + 0x70);
  iVar1 = *(int *)(lVar3 + 0x18);
  FUN_00c8e340();
  *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar1) = local_38;
  return;
}


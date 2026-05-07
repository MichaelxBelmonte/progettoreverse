// Function: FUN_00e00580
// Address: 00e00580
// Size: 576 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e00580(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  lVar2 = g_028a8828;
  if ((g_028a8828 == 0) || (*(int *)(g_028a8828 + 0xc) == 0)) {
    FUN_00e00d20();
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00e01d80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00ce7730();
    plVar1 = local_40;
    local_60 = g_02784ac8;
    if (g_02784ac8 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    (**(code **)(*plVar1 + 0x400))(param_1,&local_60);
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00e01d80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00ce7810();
    plVar1 = local_40;
    local_50 = g_02784ac8;
    if (g_02784ac8 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x400))(param_1,&local_50);
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00e01d80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_028a8828;
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_00e007aa;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00e007aa:
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}


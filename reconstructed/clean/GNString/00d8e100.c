// Function: FUN_00d8e100
// Address: 00d8e100
// Size: 546 bytes
// Class: GNString
// String references:
//   "Cannot modify an immutable string %@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d8e100(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  void*puVar3;
  uint64_t arg1;
  int64_t this_ptr;
  void*local_50;
  char local_48;
  
  if ((*(byte *)(this_ptr + 0x24) & 1) == 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00e828a0();
    local_50 = &g_024c5048;
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  FUN_00d500e0();
  if (0 < (int)arg1) {
    FUN_00e7b4e0();
    FUN_00d8e3d0();
    if ((local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x20);
    if (iVar2 == -1) {
      if (*(int64_t *)(lVar1 + 0x10) == 0) goto LAB_00d8e222;
      iVar2 = FUN_00e7dde0();
    }
    if (iVar2 != 0) {
      FUN_00d8dbf0();
    }
  }
LAB_00d8e222:
  iVar2 = *(int *)(this_ptr + 0x20);
  if (iVar2 == -1) {
    if (*(int64_t *)(this_ptr + 0x10) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00e7dde0();
    }
  }
  if ((int)((uint64_t)arg1 >> 0x20) + (int)arg1 < iVar2) {
    if ((*(int *)(this_ptr + 0x20) == -1) && (*(int64_t *)(this_ptr + 0x10) != 0)) {
      FUN_00e7dde0();
    }
    FUN_00e7b4e0();
    FUN_00d8e3d0();
    if ((local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if ((*(int64_t *)(this_ptr + 0x10) != 0) &&
     (*(int64_t *)(this_ptr + 0x10) != this_ptr + 0x28)) {
    FUN_00e83070();
  }
  *(void*)(this_ptr + 0x10) = 0;
  if (*(int *)(this_ptr + 0x20) != -1) {
    FUN_00e83070();
    *(void*)(this_ptr + 0x18) = 0;
    *(void*)(this_ptr + 0x20) = 0xffffffff;
  }
  FUN_00d8dbf0();
  FUN_00d50b20();
  return;
}


// Function: FUN_01d26990
// Address: 01d26990
// Size: 513 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01d26990(void)

{
  uint32_t uVar1;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int local_48;
  
  (**(code **)(*arg1 + 0x3f8))();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  (**(code **)(*arg1 + 0x3f8))();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_01d26b78;
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
LAB_01d26b78:
    *this_ptr = local_60;
    *(void*)(this_ptr + 1) = 1;
    goto LAB_01d26b80;
  }
  local_48 = -1;
  while (local_48 = local_48 + 1, local_48 < *(int *)(local_60 + 0xc)) {
    uVar1 = FUN_00d237a0();
    *(void*)(*(int64_t *)(local_60 + 0x10) + (int64_t)local_48 * 4) = uVar1;
  }
  FUN_00083b20();
  FUN_00d50b20();
  *this_ptr = local_60;
  *(void*)(this_ptr + 1) = 1;
  if (local_60 == 0) {
    return this_ptr;
  }
LAB_01d26b80:
  FUN_00d50b20();
  return this_ptr;
}


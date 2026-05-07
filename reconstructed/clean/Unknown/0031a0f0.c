// Function: FUN_0031a0f0
// Address: 0031a0f0
// Size: 560 bytes
// Class: Unknown

void FUN_0031a0f0(int64_t param_1)

{
  char cVar1;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_78;
  char local_70;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x438))();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  this_ptr[7] = param_1;
  cVar1 = (**(code **)(*this_ptr + 0x398))();
  if (cVar1 != '\0') {
    FUN_0141cb10();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*local_38 + 0x690))();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_38 + 0x698))();
  }
  (**(code **)(*this_ptr + 0x438))();
  FUN_012d25b0();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_0141c4c0(param_1);
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*local_38 + 0x690))();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x460))();
  (**(code **)(*this_ptr + 0x4a8))();
  FUN_00d50b20();
  return;
}


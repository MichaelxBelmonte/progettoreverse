// Function: FUN_0031b2a0
// Address: 0031b2a0
// Size: 516 bytes
// Class: Unknown

void FUN_0031b2a0(int64_t param_1)

{
  char cVar1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t *local_30;
  char local_28;
  
  (**(code **)(*this_ptr + 0x438))();
  if ((local_28 == '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  this_ptr[6] = param_1;
  this_ptr[7] = param_1;
  cVar1 = (**(code **)(*this_ptr + 0x398))();
  if (cVar1 == '\0') {
    if (local_30 == (int64_t *)0x0) {
      return;
    }
  }
  else {
    FUN_0141cb10();
    if (local_28 == '\0') {
      if (local_30 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    (**(code **)(*local_30 + 0x690))();
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*local_30 + 0x698))();
    if (cVar1 != '\0') {
      FUN_012d25b0();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_0141c4c0(param_1);
      if (local_28 == '\0') {
        if (local_30 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      (**(code **)(*local_30 + 0x690))();
      if (local_30 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x4a8))();
    }
  }
  FUN_00d50b20();
  return;
}


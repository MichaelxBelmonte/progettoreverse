// Function: FUN_01d11040
// Address: 01d11040
// Size: 511 bytes
// Class: GNValue

void FUN_01d11040(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t *this_ptr;
  int64_t *local_50;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0xa18))();
  if (local_40 == (int64_t *)0x0) {
    bVar1 = true;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0xab0))();
    if (local_40 != (int64_t *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      local_50 = local_40;
      FUN_01caeba0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      FUN_01caeb80();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x3b8))(param_1,0);
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      bVar1 = false;
      bVar2 = false;
      goto LAB_01d111fb;
    }
    bVar1 = false;
  }
  bVar2 = true;
  local_50 = (int64_t *)0x0;
LAB_01d111fb:
  (**(code **)(*this_ptr + 0x998))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2 && local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}


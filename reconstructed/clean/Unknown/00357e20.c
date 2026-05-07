// Function: FUN_00357e20
// Address: 00357e20
// Size: 576 bytes
// Class: Unknown

void FUN_00357e20(void)

{
  void*this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_40;
  char local_38;
  
  FUN_003ba620();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_01c00e50();
    FUN_01bbfb40();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_002e4b80();
      if (local_40 != (int64_t *)0x0) {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        FUN_007646f0();
        FUN_003ba620();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_012d2830();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          (**(code **)(*local_40 + 0x658))();
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
          return;
        }
      }
      FUN_00d50b20();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}


// Function: FUN_00b6a3c0
// Address: 00b6a3c0
// Size: 524 bytes
// Class: Unknown

void FUN_00b6a3c0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  uint64_t arg1;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  if (param_2 == 0) {
    FUN_00e31690();
    if (*(int *)(*(int64_t *)(this_ptr[0x27] + 0x10) + (arg1 & 0xffffffff) * 4) == 0) {
      FUN_00d403d0();
      local_70 = g_027633a8;
      if (g_027633a8 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      FUN_00d50b00();
      local_60 = 0;
      local_58 = '\0';
      FUN_00d40470(&local_60,&stack0xffffffffffffffc0,1,3);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00e31650();
    if (*(int *)(*(int64_t *)(this_ptr[0x27] + 0x10) + (arg1 & 0xffffffff) * 4) == 1) {
      *(char *)(this_ptr + 0x2c) = (char)arg1;
      FUN_00d403d0();
      lVar1 = g_027633a0;
      if (g_027633a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_80 = 0;
      local_78 = '\0';
      FUN_00d40470(&local_80,&stack0xffffffffffffffb0,1,3);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0x620))();
  return;
}


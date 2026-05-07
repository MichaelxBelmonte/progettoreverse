// Function: FUN_01e51440
// Address: 01e51440
// Size: 867 bytes
// Class: Unknown

void FUN_01e51440(uint64_t param_1,int64_t *param_2)

{
  int64_t *this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_38;
  char local_30;
  
  *(void*)(this_ptr + 8) = 1;
  local_a8 = *param_2;
  local_a0 = '\0';
  (**(code **)(*this_ptr + 0x510))(param_1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01e5c670();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (this_ptr[4] != 0) {
    FUN_01e5eec0();
  }
  FUN_01e5e3f0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_30 != '\0') {
      local_30 = '\0';
    }
    FUN_01e5e380();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((this_ptr[5] != 0) || ((**(code **)(*this_ptr + 0x560))(), this_ptr[5] != 0)) {
    FUN_01e40eb0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 == 0) {
      FUN_01e5ca90();
      if (local_30 != '\0') {
        local_30 = '\0';
      }
      FUN_01e6cc40();
    }
  }
  FUN_01e5e430();
  FUN_00d403d0();
  local_98 = g_027fe470;
  if (g_027fe470 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  FUN_00d50b00();
  local_88 = 0;
  local_80 = '\0';
  FUN_00d40470(&local_88,&stack0xffffffffffffff98,1,1);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


// Function: FUN_01ef79a0
// Address: 01ef79a0
// Size: 535 bytes
// Class: Unknown

void FUN_01ef79a0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_027dbf08;
  lVar1 = *param_2;
  lVar2 = *param_1;
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      FUN_00d43000();
      *(void*)(this_ptr + 1) = 0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          FUN_00d50b00();
          *this_ptr = local_b0;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        local_b0 = 0;
      }
      *this_ptr = local_b0;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      if ((char)param_1[1] != '\0') {
        *this_ptr = lVar2;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(param_1 + 1) = 0;
        return;
      }
      FUN_00d50b00();
      *this_ptr = lVar2;
    }
  }
  else {
    if (lVar2 != 0) {
      if (g_027dbf08 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027fecf0;
      local_38 = 0;
      if (g_027fecf0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\x01';
      FUN_01ef7d30(&local_40,param_2,param_1);
      FUN_01ef7c90();
      *(void*)(this_ptr + 1) = 0;
      if (local_48 == '\0') {
        if (local_50 == 0) {
          *this_ptr = 0;
          *(void*)(this_ptr + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *this_ptr = local_50;
          *(void*)(this_ptr + 1) = 1;
        }
      }
      else {
        *this_ptr = local_50;
        *(void*)(this_ptr + 1) = 1;
      }
      FUN_002d10d0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    *(void*)(this_ptr + 1) = 0;
    if ((char)param_2[1] != '\0') {
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return;
    }
    FUN_00d50b00();
    *this_ptr = lVar1;
  }
  *(void*)(this_ptr + 1) = 1;
  return;
}


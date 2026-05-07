// Function: FUN_01f3db20
// Address: 01f3db20
// Size: 2121 bytes
// Class: Unknown

uint64_t FUN_01f3db20(uint64_t param_1)

{
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_e8;
  char local_e0;
  int64_t *local_68;
  char local_60;
  
  local_148 = *arg1;
  local_140 = '\0';
  uVar2 = (**(code **)(*this_ptr + 0x530))(param_1,&local_148);
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    uVar2 = FUN_00d50b00();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  if (local_68 == (int64_t *)0x0) {
    local_138 = *arg1;
    local_130 = '\0';
    (**(code **)(*this_ptr + 0x6d8))(uVar2,&local_138);
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    uVar2 = (**(code **)(*this_ptr + 0x5a8))();
    local_e8 = *arg1;
    local_e0 = '\0';
    (**(code **)(*this_ptr + 0x540))(uVar2,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x5b0))();
    uVar1 = 0;
  }
  else {
    (**(code **)(*local_68 + 0x4c8))();
    uVar1 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
    FUN_00d50b20();
  }
  return uVar1 & 0xffffffff;
}


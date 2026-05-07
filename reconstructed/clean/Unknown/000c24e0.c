// Function: FUN_000c24e0
// Address: 000c24e0
// Size: 562 bytes
// Class: Unknown

void FUN_000c24e0(void)

{
  int64_t *plVar1;
  char *pcVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (int64_t *)arg1[0x2b];
  (**(code **)(*plVar1 + 0x368))();
  FUN_00c9fe40();
  pcVar2 = local_38;
  if (local_40[0] != '\0') {
    pcVar2 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (local_48 == 0) {
    FUN_007521c0();
    (**(code **)(*arg1 + 0x720))();
    (**(code **)(MACH_HEADER._0_8_ + 0x5f0))();
    local_40[0] = '\0';
    FUN_00ca0840();
    (**(code **)(MACH_HEADER._0_8_ + 0x620))();
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  (**(code **)(*plVar1 + 0x378))();
  return;
}


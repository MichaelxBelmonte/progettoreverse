// Function: FUN_00c930a0
// Address: 00c930a0
// Size: 536 bytes
// Class: Unknown

void FUN_00c930a0(void)

{
  void*puVar1;
  void*this_ptr;
  void*local_40;
  char local_38;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d95590();
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d8dbf0();
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d97fb0();
  if (puVar1 != local_40) {
    puVar1 = local_40;
    if (local_38 != '\0') {
      FUN_00d50b20();
      local_38 = '\0';
      goto LAB_00c931bd;
    }
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_00c931bd:
  FUN_00d97fb0();
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d981d0();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}


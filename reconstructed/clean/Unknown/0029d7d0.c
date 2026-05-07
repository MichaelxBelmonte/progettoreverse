// Function: FUN_0029d7d0
// Address: 0029d7d0
// Size: 502 bytes
// Class: Unknown

void* FUN_0029d7d0(void)

{
  void*puVar1;
  int64_t *arg1;
  void*this_ptr;
  int iVar2;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x720))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    (**(code **)(*arg1 + 0x720))();
    (**(code **)(*local_40 + 0x5e8))();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar2 = 0;
        do {
          FUN_00643590();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d214d0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_78 + 0xc));
      }
      FUN_00097d00();
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}


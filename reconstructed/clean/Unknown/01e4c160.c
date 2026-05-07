// Function: FUN_01e4c160
// Address: 01e4c160
// Size: 511 bytes
// Class: Unknown

void FUN_01e4c160(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t arg1;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x88) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar1 = g_027f3cc0;
  if (g_027f3cc0 != 0) {
    FUN_00d50b00();
  }
  FUN_01e49470();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01eb6f30();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01e4c28f;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_01e4c28f;
    FUN_00d21140();
    FUN_00d50b20();
  }
LAB_01e4c28f:
  lVar1 = *(int64_t *)(arg1 + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02774da0;
  if (g_02774da0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


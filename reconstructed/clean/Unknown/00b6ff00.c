// Function: FUN_00b6ff00
// Address: 00b6ff00
// Size: 601 bytes
// Class: Unknown

void FUN_00b6ff00(void)

{
  void*puVar1;
  void*this_ptr;
  bool bVar2;
  int64_t local_30;
  char local_28;
  
  puVar1 = g_028a5358;
  if ((g_028a5358 == (void*)0x0) || (g_028a5361 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5358 == (void*)0x0) {
      puVar1 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar1 = &g_02572358;
      (*g_02572370)();
      bVar2 = g_028a5358 == (void*)0x0;
      g_028a5358 = puVar1;
      if (((bVar2) || (FUN_00d50b20(), g_028a5358 != (void*)0x0)) && (g_028a5360 == '\0')
         ) {
        g_028a5360 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00b7ea30();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b7ce70();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b7d310();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028a5361 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5361 = '\x01';
      FUN_00e8cb70();
    }
    puVar1 = g_028a5358;
    *(void*)(this_ptr + 1) = 0;
    if (puVar1 == (void*)0x0) {
      puVar1 = (void*)0x0;
      goto LAB_00b7013f;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7013f:
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}


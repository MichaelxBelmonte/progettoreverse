// Function: FUN_01f7d1a0
// Address: 01f7d1a0
// Size: 519 bytes
// Class: GNRadialColorGradient

void FUN_01f7d1a0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_38;
  char local_30;
  
  puVar3 = g_028bb038;
  if ((g_028bb038 == (void*)0x0) || (g_028bb041 == '\0')) {
    FUN_00e8cb50();
    if (g_028bb038 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (g_028bb038 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028bb038 != (void*)0x0;
        g_028bb038 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028bb040 == '\0') {
        g_028bb040 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      g_028bb041 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028bb041 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = g_028bb038;
    *(void*)(this_ptr + 1) = 0;
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)0x0;
      goto LAB_01f7d38c;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7d38c:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}


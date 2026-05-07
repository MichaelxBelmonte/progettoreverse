// Function: FUN_01a063e0
// Address: 01a063e0
// Size: 668 bytes
// Class: Unknown

void FUN_01a063e0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  char unaff_SIL;
  void*this_ptr;
  bool bVar5;
  
  if ((g_028b2958 == (void*)0x0) || (g_028b2961 == '\0')) {
    FUN_00e8cb50();
    if (g_028b2958 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028b2958 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028b2958 != (void*)0x0;
        g_028b2958 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b2960 == '\0') {
        g_028b2960 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar4 = g_028b2958;
      if (g_028b2958 != (void*)0x0) {
        FUN_00d50b00();
      }
      lVar3 = g_027e56f8;
      if (g_027e56f8 != 0) {
        FUN_00d50b00();
      }
      FUN_01a05b50();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
      g_028b2961 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b2961 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b2968 == (void*)0x0) || (g_028b2971 == '\0')) {
    FUN_00e8cb50();
    if (g_028b2968 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028b2968 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028b2968 != (void*)0x0;
        g_028b2968 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b2970 == '\0') {
        g_028b2970 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar4 = g_028b2968;
      if (g_028b2968 != (void*)0x0) {
        FUN_00d50b00();
      }
      lVar3 = g_027e5700;
      if (g_027e5700 != 0) {
        FUN_00d50b00();
      }
      FUN_01a05b50();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
      g_028b2971 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b2971 = '\x01';
      FUN_00e8cb70();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  puVar4 = g_028b2968;
  if (unaff_SIL != '\0') {
    puVar4 = g_028b2958;
  }
  if (puVar4 == (void*)0x0) {
    puVar4 = (void*)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}


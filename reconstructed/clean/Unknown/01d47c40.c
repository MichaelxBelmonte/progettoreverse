// Function: FUN_01d47c40
// Address: 01d47c40
// Size: 636 bytes
// Class: Unknown

void FUN_01d47c40(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  void*this_ptr;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  if ((g_028b8148 == 0) || (g_028b8151 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027eff70;
    if (g_028b8148 == 0) {
      if (g_027eff70 != 0) {
        FUN_00d50b00();
        lVar4 = g_028b8148;
        if (g_028b8148 == lVar3) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          g_028b8148 = lVar3;
          bVar2 = true;
          bVar1 = true;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        if (g_028b8150 == '\0') {
          g_028b8150 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028b8151 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b8151 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00da5ad0();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_00da6b70();
  lVar3 = g_028b8148;
  if (g_028b8148 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  puVar5 = local_40;
  if (local_40 == (void*)0x0) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02572358;
    (*g_02572370)();
    FUN_00da6b70();
    lVar3 = g_028b8148;
    if (g_028b8148 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}


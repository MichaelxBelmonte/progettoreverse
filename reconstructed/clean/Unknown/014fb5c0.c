// Function: FUN_014fb5c0
// Address: 014fb5c0
// Size: 1520 bytes
// Class: Unknown

int64_t * FUN_014fb5c0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *this_ptr;
  int iVar5;
  bool bVar6;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  if ((g_028acf88 == (void*)0x0) || (g_028acf91 == '\0')) {
    FUN_00e8cb50();
    if (g_028acf88 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028acf88 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028acf88 != (void*)0x0;
        g_028acf88 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028acf90 == '\0') {
        g_028acf90 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027e2710;
      if (g_027e2710 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c2110;
      if (g_027c2110 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c20d8;
      if (g_027c20d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c2118;
      if (g_027c2118 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02781670;
      if (g_02781670 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c20e8;
      if (g_027c20e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c2120;
      if (g_027c2120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c20f8;
      if (g_027c20f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c2128;
      if (g_027c2128 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef820;
      if (g_027ef820 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c2130;
      if (g_027c2130 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      local_58 = g_0277d278;
      if (g_0277d278 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      g_028acf91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028acf91 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00d894f0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  puVar4 = g_028acf88;
  if (g_028acf88 != (void*)0x0) {
    if (0 < *(int *)((int64_t)g_028acf88 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_014fa5d0();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int64_t)puVar4 + 0xc));
    }
    FUN_00018280();
  }
  *this_ptr = local_58;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}


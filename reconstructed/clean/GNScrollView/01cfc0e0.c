// Function: FUN_01cfc0e0
// Address: 01cfc0e0
// Size: 572 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfc0e0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  void*local_38;
  char local_30;
  
  puVar4 = g_028b7918;
  if ((g_028b7918 == (void*)0x0) || (g_028b7921 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027ef210;
    if (g_028b7918 == (void*)0x0) {
      if (g_027ef210 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (g_028b7918 != local_38) {
        puVar4 = g_028b7918;
        if (local_30 == '\0') {
          if (local_38 != (void*)0x0) {
            FUN_00d50b00();
            puVar4 = g_028b7918;
          }
        }
        else {
          local_30 = '\0';
        }
        g_028b7918 = local_38;
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (void*)0x0) && (g_028b7920 == '\0')) {
        g_028b7920 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (g_028b7918 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_026792c0;
        puVar4[5] = 0;
        *(void*)((int64_t)puVar4 + 0xc) = 0;
        *(void*)((int64_t)puVar4 + 0x14) = 0;
        *(void*)((int64_t)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != g_0241febc) ||
           (NAN(*(float *)(puVar4 + 2)) || NAN(g_0241febc))) {
          *(void*)(puVar4 + 2) = 0x3f2aaa3b;
          *(void*)((int64_t)puVar4 + 0xe) = 0xaa;
        }
        if ((*(float *)((int64_t)puVar4 + 0x14) != g_0241febc) ||
           (NAN(*(float *)((int64_t)puVar4 + 0x14)) || NAN(g_0241febc))) {
          *(void*)((int64_t)puVar4 + 0x14) = 0x3f2aaa3b;
          *(void*)((int64_t)puVar4 + 0xd) = 0xaa;
        }
        if ((*(float *)(puVar4 + 3) != g_0241febc) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(g_0241febc))) {
          *(void*)(puVar4 + 3) = 0x3f2aaa3b;
          *(void*)((int64_t)puVar4 + 0xc) = 0xaa;
        }
        if (g_028b7918 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = g_028b7918 != (void*)0x0;
          g_028b7918 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028b7920 == '\0') {
          g_028b7920 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028b7921 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7921 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028b7918;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_01cfc2fe;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfc2fe:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}


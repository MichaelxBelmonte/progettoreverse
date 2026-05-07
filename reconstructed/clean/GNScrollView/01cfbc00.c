// Function: FUN_01cfbc00
// Address: 01cfbc00
// Size: 566 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfbc00(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  void*local_38;
  char local_30;
  
  puVar4 = g_028b7908;
  if ((g_028b7908 == (void*)0x0) || (g_028b7911 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027ef208;
    if (g_028b7908 == (void*)0x0) {
      if (g_027ef208 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (g_028b7908 != local_38) {
        puVar4 = g_028b7908;
        if (local_30 == '\0') {
          if (local_38 != (void*)0x0) {
            FUN_00d50b00();
            puVar4 = g_028b7908;
          }
        }
        else {
          local_30 = '\0';
        }
        g_028b7908 = local_38;
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (void*)0x0) && (g_028b7910 == '\0')) {
        g_028b7910 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (g_028b7908 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_026792c0;
        puVar4[5] = 0;
        *(void*)((int64_t)puVar4 + 0xc) = 0;
        *(void*)((int64_t)puVar4 + 0x14) = 0;
        *(void*)((int64_t)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != 0.0) || (NAN(*(float *)(puVar4 + 2)))) {
          *(void*)(puVar4 + 2) = 0;
          *(void*)((int64_t)puVar4 + 0xe) = 0;
        }
        if ((*(float *)((int64_t)puVar4 + 0x14) != 0.0) ||
           (NAN(*(float *)((int64_t)puVar4 + 0x14)))) {
          *(void*)((int64_t)puVar4 + 0x14) = 0;
          *(void*)((int64_t)puVar4 + 0xd) = 0;
        }
        if ((*(float *)(puVar4 + 3) != 0.0) || (NAN(*(float *)(puVar4 + 3)))) {
          *(void*)(puVar4 + 3) = 0;
          *(void*)((int64_t)puVar4 + 0xc) = 0;
        }
        if (g_028b7908 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = g_028b7908 != (void*)0x0;
          g_028b7908 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028b7910 == '\0') {
          g_028b7910 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028b7911 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7911 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028b7908;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_01cfbe18;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfbe18:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}


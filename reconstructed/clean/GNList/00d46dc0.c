// Function: FUN_00d46dc0
// Address: 00d46dc0
// Size: 606 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d46dc0(float param_1)

{
  bool bVar1;
  void*puVar2;
  void*this_ptr;
  bool bVar3;
  bool bVar4;
  
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if ((param_1 != g_02390124) || (NAN(param_1) || NAN(g_02390124))) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02575d80;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 0x66;
      *(float *)(puVar2 + 2) = param_1;
      goto LAB_00d46fab;
    }
    if ((g_028a77a0 != (void*)0x0) && (puVar2 = g_028a77a0, g_028a77a9 != '\0'))
    goto LAB_00d46e38;
    FUN_00e8cb50();
    if (g_028a77a0 == (void*)0x0) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02575d80;
      FUN_00d500e0();
      if (g_028a77a0 == puVar2) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar4 = g_028a77a0 != (void*)0x0;
        g_028a77a0 = puVar2;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028a77a8 == '\0') {
        g_028a77a8 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar2 = g_028a77a0;
      *(void*)((int64_t)g_028a77a0 + 0xc) = 0x66;
      *(void*)(puVar2 + 2) = 0x3f800000;
      g_028a77a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a77a9 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = g_028a77a0;
    *(void*)(this_ptr + 1) = 0;
joined_r0x00d47018:
    if (puVar2 == (void*)0x0) {
      puVar2 = (void*)0x0;
      goto LAB_00d46fab;
    }
  }
  else {
    if ((g_028a7790 == (void*)0x0) || (puVar2 = g_028a7790, g_028a7799 == '\0')) {
      FUN_00e8cb50();
      if (g_028a7790 == (void*)0x0) {
        puVar2 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar2 = &g_02575d80;
        FUN_00d500e0();
        if (g_028a7790 == puVar2) {
          bVar4 = false;
          bVar1 = false;
        }
        else {
          bVar4 = true;
          bVar1 = true;
          bVar3 = g_028a7790 != (void*)0x0;
          g_028a7790 = puVar2;
          if (bVar3) {
            FUN_00d50b20();
          }
        }
        if (g_028a7798 == '\0') {
          g_028a7798 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar4;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        puVar2 = g_028a7790;
        *(void*)((int64_t)g_028a7790 + 0xc) = 0x66;
        *(void*)(puVar2 + 2) = 0;
        g_028a7799 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a7799 = '\x01';
        FUN_00e8cb70();
      }
      puVar2 = g_028a7790;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x00d47018;
    }
LAB_00d46e38:
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00d46fab:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}


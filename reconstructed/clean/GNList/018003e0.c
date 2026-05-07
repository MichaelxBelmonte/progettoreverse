// Function: FUN_018003e0
// Address: 018003e0
// Size: 1141 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_018003e0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*this_ptr;
  bool bVar3;
  
  puVar2 = g_028af798;
  if ((g_028af798 == (void*)0x0) || (g_028af7a1 == '\0')) {
    FUN_00e8cb50();
    if (g_028af798 == (void*)0x0) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      bVar3 = g_028af798 == (void*)0x0;
      g_028af798 = puVar2;
      if (((bVar3) || (FUN_00d50b20(), lVar1 = g_027d50d8, g_028af798 != (void*)0x0)) &&
         (lVar1 = g_027d50d8, g_028af7a0 == '\0')) {
        g_028af7a0 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_027d50d8;
      }
      g_027d50d8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d50e0;
      if (g_027d50e0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d50e8;
      if (g_027d50e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d50f0;
      if (g_027d50f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d50f8;
      if (g_027d50f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d5100;
      if (g_027d5100 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d5108;
      if (g_027d5108 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d5110;
      if (g_027d5110 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d5118;
      if (g_027d5118 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d5120;
      if (g_027d5120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027d5128;
      if (g_027d5128 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028af7a1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af7a1 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = g_028af798;
    *(void*)(this_ptr + 1) = 0;
    if (puVar2 == (void*)0x0) {
      puVar2 = (void*)0x0;
      goto LAB_0180083b;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_0180083b:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}


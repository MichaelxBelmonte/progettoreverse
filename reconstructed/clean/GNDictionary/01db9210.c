// Function: FUN_01db9210
// Address: 01db9210
// Size: 543 bytes
// Class: GNDictionary

void FUN_01db9210(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  
  FUN_00d50100();
  *(void*)(this_ptr + 0x28) = 0x44fa000042c80000;
  *(void*)(this_ptr + 0x30) = 0x41a00000;
  *(void*)(this_ptr + 0x54) = 0;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar3 + 0x27) = 0;
  puVar3[0x2e] = 0;
  *(void*)(puVar3 + 0x2f) = 0;
  puVar3[0x30] = 0;
  *(void*)(puVar3 + 0x31) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  *(void*)(puVar3 + 0x2a) = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(void*)((int64_t)puVar3 + 0x165) = 0;
  *(void*)((int64_t)puVar3 + 0x18c) = 0;
  *(void*)((int64_t)puVar3 + 0x194) = 0;
  *(void*)((int64_t)puVar3 + 0x199) = 0;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  puVar3[0x38] = 0;
  *puVar3 = &g_02696d30;
  puVar3[2] = &g_026977f8;
  (*g_02696d48)();
  puVar1 = *(void**)(this_ptr + 0x18);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x18) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar3 + 0x27) = 0;
  puVar3[0x2e] = 0;
  *(void*)(puVar3 + 0x2f) = 0;
  puVar3[0x30] = 0;
  *(void*)(puVar3 + 0x31) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  *(void*)(puVar3 + 0x2a) = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(void*)((int64_t)puVar3 + 0x165) = 0;
  *(void*)((int64_t)puVar3 + 0x18c) = 0;
  *(void*)((int64_t)puVar3 + 0x194) = 0;
  *(void*)((int64_t)puVar3 + 0x199) = 0;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  puVar3[0x38] = 0;
  *puVar3 = &g_02692838;
  puVar3[2] = &g_02693308;
  puVar3[0x39] = 0;
  (*g_02692850)();
  puVar1 = *(void**)(this_ptr + 0x20);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x20) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x59) = 1;
  lVar2 = g_027f29e0;
  if (g_027f29e0 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x48);
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x48);
    if (lVar4 == lVar2) {
      FUN_00d50b20();
      return;
    }
  }
  *(int64_t *)(this_ptr + 0x48) = lVar2;
  if (lVar4 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}


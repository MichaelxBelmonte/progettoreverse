// Function: FUN_012c9ae0
// Address: 012c9ae0
// Size: 693 bytes
// Class: MUAudioFileSource

void FUN_012c9ae0(void* param_1,char param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  void*puVar3;
  void* pVar4;
  void*this_ptr;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[7] = 0;
  puVar3[8] = 0;
  pVar4 = 0x25d31f0;
  *puVar3 = &g_025d31f0;
  *(void*)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(void*)(puVar3 + 0xb) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 99) = 0;
  (*g_025d3208)();
  if (param_2 != '\0') {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2607248;
    *puVar3 = &g_02607248;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(void*)((int64_t)puVar3 + 0x76) = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    (*g_02607260)();
    FUN_012c64a0();
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7710();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}


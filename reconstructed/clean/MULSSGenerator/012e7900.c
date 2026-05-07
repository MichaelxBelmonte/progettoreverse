// Function: FUN_012e7900
// Address: 012e7900
// Size: 856 bytes
// Class: MULSSGenerator

void FUN_012e7900(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t this_ptr;
  
  plVar2 = (int64_t *)FUN_010f2780();
  (**(code **)(*plVar2 + 0x18))();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar3 + 8) = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  pVar5 = 0x25d2108;
  *puVar3 = &g_025d2108;
  *(void*)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  (*g_025d2120)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar3 + 8) = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  pVar5 = 0x25d58b0;
  *puVar3 = &g_025d58b0;
  *(void*)(puVar3 + 0xc) = 0;
  (*g_025d58c8)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  if (*(int64_t **)(this_ptr + 0xb8) != plVar2) {
    FUN_00d64850();
    plVar1 = *(int64_t **)(this_ptr + 0xb8);
    if (plVar1 != plVar2) {
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0xb8) = plVar2;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


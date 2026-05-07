// Function: FUN_01b57fb0
// Address: 01b57fb0
// Size: 1786 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_01b57fb0(double param_1,uint64_t param_2,uint64_t param_3,double param_4)

{
  code *pcVar1;
  int64_t *plVar2;
  void *pvVar3;
  void*puVar4;
  void*puVar5;
  void* in_ECX;
  void*this_ptr;
  double dVar6;
  double dVar7;
  
  plVar2 = (int64_t *)FUN_011114e0();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ef430(g_0241d650,g_0241d650);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4[0xb] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(void*)((int64_t)puVar4 + 0x43) = 0;
  *(void*)((int64_t)puVar4 + 0x4b) = 0;
  *puVar4 = &g_025e2f90;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  *(void*)(puVar4 + 0x10) = 0;
  pcVar1 = g_025e2fa8;
  (*g_025e2fa8)();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_1);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c830(g_0241d658);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar6 = g_0241d658 * (param_4 - param_1);
  FUN_0142c880();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c8d0(g_023934c8);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar7 = (param_4 - param_1) * g_023934c8;
  FUN_0142c920();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ecb30();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5[0xb] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(void*)((int64_t)puVar5 + 0x43) = 0;
  *(void*)((int64_t)puVar5 + 0x4b) = 0;
  *puVar5 = &g_025e2f90;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  *(void*)(puVar5 + 0x10) = 0;
  (*pcVar1)();
  if (puVar4 == puVar5) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    puVar4 = puVar5;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_3);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c830(g_0241d658);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c880(dVar6);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c8d0(g_023934c8);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c920(dVar7);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ecb30();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5[0xb] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(void*)((int64_t)puVar5 + 0x43) = 0;
  *(void*)((int64_t)puVar5 + 0x4b) = 0;
  *puVar5 = &g_025e2f90;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  *(void*)(puVar5 + 0x10) = 0;
  (*pcVar1)();
  if (puVar5 == puVar4) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(g_0238fee8);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_4);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c830(g_0241d658);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c880(dVar6);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c8d0(g_023934c8);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c920(dVar7);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ecb30();
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}


// Function: FUN_01241610
// Address: 01241610
// Size: 1569 bytes
// Class: Unknown

void* FUN_01241610(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  void*puVar8;
  void* pVar9;
  void*this_ptr;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_010f7230();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0079c340();
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012401b0();
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012401f0();
  pvVar5 = _pthread_getspecific((void*)param_1);
  lVar6 = g_027be598;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
    lVar6 = g_027be598;
  }
  g_027be598 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_01240140();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = plVar3;
  }
  FUN_01240950();
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    plVar2 = (int64_t *)plVar3[10];
    plVar1 = plVar3;
  }
  else {
    plVar1 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    plVar2 = (int64_t *)plVar1[10];
    param_1 = plVar3;
  }
  pVar9 = (void*)param_1;
  if (plVar2 != plVar4) {
    FUN_00d64850();
    plVar2 = (int64_t *)plVar1[10];
    if (plVar2 != plVar4) {
      FUN_00d50b00();
      plVar1[10] = (int64_t)plVar4;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7[7] = 0;
  *puVar7 = &g_024cbc70;
  *(void*)(puVar7 + 8) = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124a800();
  pvVar5 = _pthread_getspecific(pVar9);
  lVar6 = g_027be5a0;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
    lVar6 = g_027be5a0;
  }
  g_027be5a0 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_012a51c0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar9 = (void*)plVar3;
  }
  FUN_012407f0();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_024cc370;
  puVar7[7] = 0;
  puVar7[8] = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fb40();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fae0();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fa90();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01240230();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_024cc370;
  puVar8[7] = 0;
  puVar8[8] = 0;
  FUN_00d500e0();
  if (puVar7 == puVar8) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fb40();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fae0();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fa90();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01240230();
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return this_ptr;
}


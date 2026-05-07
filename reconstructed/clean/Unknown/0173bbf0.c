// Function: FUN_0173bbf0
// Address: 0173bbf0
// Size: 558 bytes
// Class: Unknown

void FUN_0173bbf0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void* pVar3;
  void *pvVar4;
  int64_t this_ptr;
  float fVar5;
  float fVar6;
  
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01770870();
  if (cVar2 != '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar5 = (float)FUN_01770220();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017702f0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar6 = (float)FUN_017708f0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar3 = FUN_01770aa0();
    for (; fVar5 < g_02411de0; fVar5 = fVar5 + fVar6) {
    }
    for (; g_02411de4 < fVar5; fVar5 = fVar5 - fVar6) {
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770230(fVar5);
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770300();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


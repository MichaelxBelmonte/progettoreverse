// Function: FUN_013ece50
// Address: 013ece50
// Size: 627 bytes
// Class: Unknown

void FUN_013ece50(double param_1,double param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* unaff_ESI;
  int64_t this_ptr;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = (int64_t)(int)unaff_ESI;
  lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + lVar4 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    unaff_ESI = (void*)lVar4;
  }
  pvVar3 = _pthread_getspecific(unaff_ESI);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(unaff_ESI);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar5 = (double)FUN_0142c910();
  FUN_0142c8d0(dVar5 + param_1);
  pvVar3 = _pthread_getspecific(unaff_ESI);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(unaff_ESI);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar5 = (double)FUN_0142c960();
  FUN_0142c920(dVar5 + param_2);
  pvVar3 = _pthread_getspecific(unaff_ESI);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0142cc70();
  if (cVar2 != '\0') {
    pvVar3 = _pthread_getspecific(unaff_ESI);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0142ca10();
    dVar5 = (double)_atan();
    pvVar3 = _pthread_getspecific(unaff_ESI);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar6 = (double)FUN_0142c9e0();
    dVar5 = dVar5 + g_023d5998;
    dVar7 = (double)_sin();
    pvVar3 = _pthread_getspecific(unaff_ESI);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)_cos(dVar5);
    FUN_0142c830(dVar5 * dVar6);
    pvVar3 = _pthread_getspecific(unaff_ESI);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0142c880(dVar7 * dVar6);
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


// Function: FUN_01539b60
// Address: 01539b60
// Size: 1751 bytes
// Class: Unknown

void FUN_01539b60(double param_1,double param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  void* in_ECX;
  void* pVar5;
  int64_t *plVar6;
  int64_t *local_48;
  char local_40;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012642b0(param_1);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01259540();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264320(0);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264390(param_2 - param_1);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = (int64_t *)0x0;
  FUN_01510360(0,0,0);
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((void*)plVar1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific((void*)plVar1);
  plVar6 = local_48;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar1 = local_48;
    plVar6 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific((void*)plVar1);
  plVar1 = local_48;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar1 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_00b518d0();
  (**(code **)(*plVar1 + 0x378))();
  lVar3 = *plVar6;
  (**(code **)(lVar3 + 0x3a0))();
  pVar5 = (void*)lVar3;
  FUN_012595a0();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025c07e8;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7210(0);
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7130();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270260();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025c07e8;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7210(param_2 - param_1);
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7130();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270260();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a70();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  FUN_00d21140();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ddd0();
  FUN_00e7bdb0();
  FUN_01287c80();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


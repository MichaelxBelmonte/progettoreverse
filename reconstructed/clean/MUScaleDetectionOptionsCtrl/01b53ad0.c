// Function: FUN_01b53ad0
// Address: 01b53ad0
// Size: 566 bytes
// Class: MUScaleDetectionOptionsCtrl

void FUN_01b53ad0(void* param_1)

{
  void*puVar1;
  int iVar2;
  void*puVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  float fVar5;
  
  if (*arg1 != 0) {
    *(int64_t *)(this_ptr + 0x70) = *arg1;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02513f50;
    puVar3[7] = 0;
    *(void*)((int64_t)puVar3 + 0x3e) = 0;
    FUN_00d500e0();
    puVar1 = *(void**)(this_ptr + 0xc0);
    if (puVar1 == puVar3) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xc0) = puVar3;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b16fc0();
    FUN_01b56c30();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b16fd0();
    FUN_01b56d20();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01b16fe0();
    fVar5 = (float)_exp2f((float)iVar2 * g_023941f4);
    FUN_01b56d80(fVar5 * g_023941f8);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01b16ff0();
    fVar5 = (float)_exp2f((float)iVar2 * g_023941f4);
    FUN_01b56de0(fVar5 * g_023941f8);
    FUN_01acf890();
  }
  return;
}


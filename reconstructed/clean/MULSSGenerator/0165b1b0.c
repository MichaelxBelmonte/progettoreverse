// Function: FUN_0165b1b0
// Address: 0165b1b0
// Size: 584 bytes
// Class: MULSSGenerator

void FUN_0165b1b0(uint64_t param_1,uint64_t param_2,void* param_3)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *arg1;
  void*puVar7;
  int64_t lVar8;
  
  if (*arg1 == 0) {
    if (param_1 >> 0x20 == 0) {
      return;
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012502a0(param_1,param_2,0);
    return;
  }
  if (param_2 >> 0x20 == 0) {
    return;
  }
  uVar5 = param_1;
  puVar1 = (void*)FUN_00e8fc40();
  pVar4 = (void*)uVar5;
  FUN_00d4ff40();
  *puVar1 = &g_025f6568;
  puVar1[7] = 0;
  *(void*)(puVar1 + 8) = 0;
  *(void*)((int64_t)puVar1 + 0x44) = 0;
  puVar1[9] = 0x100000000;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar6 = *arg1;
    lVar8 = puVar1[7];
    puVar7 = puVar1;
    if (lVar8 == lVar6) goto LAB_0165b33b;
  }
  else {
    lVar6 = *arg1;
    lVar8 = ((void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4])[7];
    puVar7 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar8 == lVar6) goto LAB_0165b33b;
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  puVar7[7] = lVar6;
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_0165b33b:
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar1 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(char *)(puVar1 + 8) = (char)param_3;
  pvVar2 = _pthread_getspecific(param_3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012502a0(param_1,param_2,0);
  FUN_00d50b20();
  return;
}


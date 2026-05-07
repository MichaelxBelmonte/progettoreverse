// Function: FUN_0179b200
// Address: 0179b200
// Size: 1002 bytes
// Class: Unknown

void FUN_0179b200(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  void*puVar4;
  int64_t *plVar5;
  void*puVar6;
  void*puVar7;
  int64_t this_ptr;
  int iVar8;
  uint32_t uVar9;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  
  if (*(int64_t *)(this_ptr + 0x68) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0112f8a0();
    (**(code **)(*plVar5 + 0x18))();
    plVar2 = *(int64_t **)(this_ptr + 0x68);
    if (plVar2 == plVar5) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0x68) = plVar5;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0179ac80();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  pvVar3 = _pthread_getspecific((void*)puVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific((void*)puVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_0150d280();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  uVar9 = FUN_00d214d0(uVar9,*(void*)((int64_t)puVar4 + 0xc));
  if (local_50 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  FUN_00d242c0(uVar9,0);
  for (iVar8 = 0; iVar8 < *(int *)((int64_t)puVar4 + 0xc); iVar8 = iVar8 + 1) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025c2b00;
    *(void*)(puVar6 + 7) = 0;
    *(void*)((int64_t)puVar6 + 0x3a) = 0;
    *(void*)((int64_t)puVar6 + 0x3c) = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    FUN_00d500e0();
    pvVar3 = _pthread_getspecific((void*)puVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0179b1a0();
    pvVar3 = _pthread_getspecific((void*)puVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0179b1f0();
    pvVar3 = _pthread_getspecific((void*)puVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0179ac10();
    FUN_00d50b20();
  }
  FUN_0015ed50();
  FUN_00d50b20();
  return;
}


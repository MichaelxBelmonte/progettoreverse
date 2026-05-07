// Function: FUN_013f01c0
// Address: 013f01c0
// Size: 1151 bytes
// Class: Unknown

void FUN_013f01c0(void* param_1)

{
  int64_t *plVar1;
  code *pcVar2;
  int64_t *plVar3;
  void *pvVar4;
  void*puVar5;
  void*puVar6;
  char *pcVar7;
  void* pVar8;
  char *pcVar9;
  int64_t this_ptr;
  int64_t local_58;
  char local_50 [8];
  char local_38;
  
  plVar3 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb720();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025ddb28;
  puVar5[0xb] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(void*)((int64_t)puVar5 + 0x43) = 0;
  *(void*)((int64_t)puVar5 + 0x4b) = 0;
  pcVar2 = g_025ddb40;
  (*g_025ddb40)();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(0);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(0);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025ddb28;
  puVar6[0xb] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  *(void*)((int64_t)puVar6 + 0x43) = 0;
  *(void*)((int64_t)puVar6 + 0x4b) = 0;
  (*pcVar2)();
  if (puVar5 == puVar6) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d23340();
  local_38 = local_50[0];
  pcVar9 = &stack0xffffffffffffffc8;
  pcVar7 = local_50;
  if (local_50[0] == '\0') {
    pcVar7 = pcVar9;
  }
  *pcVar7 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pVar8 = (void*)pcVar9;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faed0();
  FUN_013fae90();
  if ((local_38 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d23340();
  pcVar9 = &stack0xffffffffffffffc8;
  pcVar7 = local_50;
  if (local_50[0] == '\0') {
    pcVar7 = pcVar9;
  }
  local_38 = local_50[0];
  *pcVar7 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pVar8 = (void*)pcVar9;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faf20();
  FUN_013faee0();
  if ((local_38 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  FUN_00d64850();
  plVar1 = *(int64_t **)(this_ptr + 0x60);
  if (plVar1 != plVar3) {
    FUN_00d50b00();
    *(int64_t **)(this_ptr + 0x60) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


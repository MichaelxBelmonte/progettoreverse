// Function: FUN_0013b330
// Address: 0013b330
// Size: 1451 bytes
// Class: MDMetaWindowController

void FUN_0013b330(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t this_ptr;
  int64_t **pplVar7;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  plVar2 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    plVar2 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    FUN_01246780();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  plVar2 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    if (*(int *)(this_ptr + 0xec) == 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = 0;
      FUN_01252670(0,0,0,0);
      plVar2 = local_40;
      param_1 = (void*)CONCAT71((int7)((uint64_t)uVar5 >> 8),local_38[0]);
      pcVar6 = &local_50;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_50 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 == '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_012467d0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = *(void*)(this_ptr + 0xe8);
      FUN_012521f0(uVar5,0,0,0);
      plVar2 = local_40;
      param_1 = (void*)CONCAT71((int7)((uint64_t)uVar5 >> 8),local_38[0]);
      pcVar6 = &local_50;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_50 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 == '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_012467d0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x970))();
  lVar1 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  pplVar7 = &local_40;
  (**(code **)(*plVar2 + 0x390))();
  plVar2 = local_40;
  FUN_0013de80();
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0013b761;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_0013b761:
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  FUN_012467d0();
  FUN_01246780();
  if (plVar2 != (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38[0] = '\0';
    local_40 = plVar2;
    FUN_012502a0(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0xe8),1);
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00139430();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}


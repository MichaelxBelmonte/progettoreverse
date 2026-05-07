// Function: FUN_0125dfc0
// Address: 0125dfc0
// Size: 1551 bytes
// Class: MUSampledFunction

void FUN_0125dfc0(int64_t *param_1)

{
  int iVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  char local_40;
  
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (int64_t *)0x0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 200) == 0) goto LAB_0125e5b3;
  FUN_00d50b00();
  FUN_00d50b20();
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df480();
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d820();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = *(int64_t *)(this_ptr + 200);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0125e401;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_0125e401:
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_014ed790();
    if (iVar1 != 0) {
      pvVar2 = _pthread_getspecific((void*)param_1);
      plVar5 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de3b0();
      (**(code **)(*plVar5 + 0x3a8))();
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed790();
      pvVar2 = _pthread_getspecific((void*)param_1);
      plVar5 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pVar4 = (void*)param_1;
      (**(code **)(*plVar5 + 0x3a0))();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de3b0();
    }
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_0125e5b3:
  FUN_00d50b20();
  return;
}


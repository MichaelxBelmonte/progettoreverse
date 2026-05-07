// Function: FUN_0150bf50
// Address: 0150bf50
// Size: 1109 bytes
// Class: MUPercussivePitchSystem

void FUN_0150bf50(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) {
    if (*(int64_t *)(this_ptr + 0x80) == 0) {
      plVar1 = (int64_t *)FUN_00e8fc40();
      FUN_0124b580();
      (**(code **)(*plVar1 + 0x18))();
      FUN_0150ceb0();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    FUN_012502a0(uVar4,uVar3,1);
    pVar6 = (void*)uVar4;
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)*arg1;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (int64_t *)*arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_0124ae40();
    if (*(int64_t *)(this_ptr + 0x78) == 0) {
      plVar1 = (int64_t *)FUN_00e8fc40();
      FUN_0151f500();
      (**(code **)(*plVar1 + 0x18))();
      FUN_0150d0b0();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_01822eb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)*arg1;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (int64_t *)*arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_018232c0();
  }
  return;
}


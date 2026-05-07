// Function: FUN_014f60f0
// Address: 014f60f0
// Size: 1491 bytes
// Class: Unknown

void* FUN_014f60f0(void* param_1,char param_2)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t *local_50;
  char local_48;
  
  (**(code **)(*arg1 + 0x378))();
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    param_1 = (void*)local_50;
  }
  FUN_0132d790();
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_013fb320();
  pvVar1 = _pthread_getspecific(param_1);
  plVar3 = local_50;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar3 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar3 + 0x378))();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_010fe5f0();
  (**(code **)(*plVar3 + 0x18))();
  FUN_014c2f20();
  FUN_014c2f80();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb250();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb2b0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*arg1 + 0x3e0))();
  FUN_014bd3c0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc170((int)arg1[0x12]);
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bcf80();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb8e0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb930();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = arg1[0x21];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_014c2990();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014cfcc0();
  if (param_2 != '\0') {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014ce440();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014ceed0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bfad0();
  }
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar3;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar4 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  plVar4[0x19] = (int64_t)arg1;
  arg1[0x29] = (int64_t)plVar3;
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}


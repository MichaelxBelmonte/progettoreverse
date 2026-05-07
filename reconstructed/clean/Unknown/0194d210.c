// Function: FUN_0194d210
// Address: 0194d210
// Size: 718 bytes
// Class: Unknown

void FUN_0194d210(void)

{
  int64_t *plVar1;
  void*puVar2;
  void *pvVar3;
  void* pVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar1 + 0x18))();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar2[7] = 0;
  puVar2[8] = 0;
  pVar4 = 0x25d31f0;
  *puVar2 = &g_025d31f0;
  *(void*)(puVar2 + 9) = 0;
  puVar2[10] = 0;
  *(void*)(puVar2 + 0xb) = 0;
  *(void*)((int64_t)puVar2 + 0x5c) = 0;
  *(void*)((int64_t)puVar2 + 99) = 0;
  (*g_025d3208)();
  if (*(int64_t *)(arg1 + 0x540) != 0) {
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_012e57a0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0194d431;
    }
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
LAB_0194d431:
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7710();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}


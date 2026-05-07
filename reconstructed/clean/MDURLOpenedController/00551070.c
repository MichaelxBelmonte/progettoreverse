// Function: FUN_00551070
// Address: 00551070
// Size: 794 bytes
// Class: MDURLOpenedController

void FUN_00551070(void)

{
  int64_t lVar1;
  void *pvVar2;
  uint uVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar6;
  void* pVar7;
  
  if (*arg1 != 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    uVar3 = *(int *)(lVar1 + 0xc) << 2;
    uVar5 = (uint64_t)uVar3;
    if (uVar3 == *(uint *)(*arg1 + 0xc)) {
      pVar7 = 0;
      for (iVar6 = 0; pVar4 = (void*)uVar5, iVar6 < *(int *)(lVar1 + 0xc); iVar6 = iVar6 + 1
          ) {
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar4 = pVar7;
        FUN_00d45bc0();
        FUN_016cb790();
        FUN_00362140();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar4 = pVar7 + 1;
        FUN_00d45bc0();
        FUN_016cb790();
        FUN_003620e0();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar4 = pVar7 + 2;
        FUN_00d45bc0();
        FUN_016cb790();
        FUN_003621a0();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = (uint64_t)(int)(pVar7 + 3);
        FUN_00d45bc0();
        FUN_016cb790();
        pVar7 = pVar7 + 4;
        FUN_00362200();
      }
      FUN_0032bfd0();
    }
  }
  return;
}


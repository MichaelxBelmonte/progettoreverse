// Function: FUN_00551070
// Address: 00551070
// Size: 794 bytes
// Class: MDURLOpenedController


void FUN_00551070(void)

{
  longlong lVar1;
  void *pvVar2;
  uint uVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar6;
  pthread_key_t pVar7;
  
  if (*unaff_RSI != 0) {
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    uVar3 = *(int *)(lVar1 + 0xc) << 2;
    uVar5 = (ulonglong)uVar3;
    if (uVar3 == *(uint *)(*unaff_RSI + 0xc)) {
      pVar7 = 0;
      for (iVar6 = 0; pVar4 = (pthread_key_t)uVar5, iVar6 < *(int *)(lVar1 + 0xc); iVar6 = iVar6 + 1
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
        uVar5 = (ulonglong)(int)(pVar7 + 3);
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



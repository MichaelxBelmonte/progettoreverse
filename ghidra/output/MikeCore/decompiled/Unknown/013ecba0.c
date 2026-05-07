// Function: FUN_013ecba0
// Address: 013ecba0
// Size: 642 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ecba0(double param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  undefined8 uVar7;
  undefined8 local_38;
  
  lVar6 = (longlong)(int)unaff_ESI;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar6 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    unaff_ESI = (pthread_key_t)lVar6;
  }
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_0142c870();
  FUN_0142c830(SUB84(dVar2 + param_1,0));
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_0142c8c0();
  FUN_0142c880(SUB84(dVar2 + param_2,0));
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_0142cc70();
  if (cVar4 != '\0') {
    pvVar5 = _pthread_getspecific(unaff_ESI);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0142ca20();
    dVar2 = (double)_atan();
    pvVar5 = _pthread_getspecific(unaff_ESI);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_0142c9b0();
    dVar2 = dVar2 + DAT_023d5998;
    dVar3 = (double)_sin();
    pvVar5 = _pthread_getspecific(unaff_ESI);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)CONCAT44((uint)((ulonglong)uVar7 >> 0x20) ^ _UNK_023945b4,
                                (uint)uVar7 ^ _DAT_023945b0);
    dVar2 = (double)_cos(SUB84(dVar2,0));
    FUN_0142c8d0(SUB84(dVar2 * local_38,0));
    pvVar5 = _pthread_getspecific(unaff_ESI);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0142c920(SUB84(dVar3 * local_38,0));
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// Function: FUN_013ed100
// Address: 013ed100
// Size: 589 bytes
// Class: Unknown

void FUN_013ed100(uint32_t param_1)

{
  int64_t lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  int64_t lVar6;
  void* unaff_ESI;
  int64_t this_ptr;
  uint64_t uVar7;
  uint64_t local_38;
  
  lVar6 = (int64_t)(int)unaff_ESI;
  lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + lVar6 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    unaff_ESI = (void*)lVar6;
  }
  dVar2 = (double)_atan(param_1);
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)FUN_0142c9e0();
  dVar2 = dVar2 + g_023d5998;
  dVar4 = (double)_sin();
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)_cos(SUB84(dVar2,0));
  FUN_0142c830(SUB84(dVar2 * dVar3,0));
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c880(SUB84(dVar4 * dVar3,0));
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
  dVar2 = dVar2 + g_023d5998;
  dVar3 = (double)_sin();
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38 = (double)CONCAT44((uint)((uint64_t)uVar7 >> 0x20) ^ _UNK_023945b4,
                              (uint)uVar7 ^ g_023945b0);
  dVar2 = (double)_cos(SUB84(dVar2,0));
  FUN_0142c8d0(SUB84(dVar2 * local_38,0));
  pvVar5 = _pthread_getspecific(unaff_ESI);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c920(SUB84(dVar3 * local_38,0));
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


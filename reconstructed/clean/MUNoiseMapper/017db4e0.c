// Function: FUN_017db4e0
// Address: 017db4e0
// Size: 710 bytes
// Class: MUNoiseMapper
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


uint64_t FUN_017db4e0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int extraout_var;
  void* extraout_var_00;
  void* pVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  double dVar7;
  double dVar8;
  int64_t local_38;
  char local_30;
  
  lVar6 = *this_ptr;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *this_ptr;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0x40);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508530();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0x40);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508530();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pVar4 = extraout_var_00;
  if ((extraout_var_00 != 0) && (extraout_var != 0)) {
    cVar1 = FUN_00e7c020();
    pVar4 = 0xffffffff;
    if (cVar1 != '\0') {
      return 0xffffffff;
    }
    if ((extraout_var_00 != 0) && (extraout_var != 0)) {
      cVar1 = FUN_00e7c020();
      pVar4 = 1;
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db880();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar7 = (double)FUN_0125a280();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db880();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar8 = (double)FUN_0125a280();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = 0xffffffff;
  if (dVar8 <= dVar7) {
    uVar5 = (uint64_t)(dVar8 < dVar7);
  }
  return uVar5;
}


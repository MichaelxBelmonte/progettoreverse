// Function: FUN_013dd3f0
// Address: 013dd3f0
// Size: 547 bytes
// Class: GNOperationProgressObserver

double FUN_013dd3f0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  void* pVar4;
  char *pcVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  double dVar7;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(int64_t *)(this_ptr + 0x48) != 0) && (*(int64_t *)(this_ptr + 0x40) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = FUN_014bb8a0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df6b0();
    pVar4 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      pvVar1 = _pthread_getspecific(pVar4);
      plVar6 = local_48;
      if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar6 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      lVar3 = (**(code **)(*plVar6 + 0x378))();
      if (lVar3 < lVar2) {
        pvVar1 = _pthread_getspecific(pVar4);
        if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
          local_48 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
        lVar2 = (**(code **)(*local_48 + 0x378))();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_013de650();
    if (*(int64_t *)(this_ptr + 0x40) == 0) {
      dVar7 = 0.0;
    }
    else {
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_013de950();
    }
    return dVar7 * (double)(lVar2 - lVar3);
  }
  dVar7 = (double)FUN_013dd200();
  return dVar7;
}


// Function: FUN_013ef520
// Address: 013ef520
// Size: 1332 bytes
// Class: Unknown

void FUN_013ef520(int64_t *param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  uint32_t uVar9;
  uint64_t uVar10;
  int64_t local_100;
  char local_f8;
  int64_t local_e0;
  char local_d8;
  
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    plVar3 = (int64_t *)FUN_000bea40();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = _pthread_getspecific((void*)param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = plVar3;
    }
    FUN_013eb6d0();
    pvVar4 = _pthread_getspecific((void*)param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = plVar3;
    }
    FUN_013eb720();
    pvVar4 = _pthread_getspecific((void*)param_1);
    plVar8 = plVar3;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = plVar3;
      plVar8 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_013faed0();
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_013faf20();
    (**(code **)(*plVar8 + 0x418))(uVar9,uVar10);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (1 < *(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc)) {
      lVar5 = 1;
      do {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013faed0();
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_013faf20();
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar1 = FUN_0142c990();
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar2 = FUN_0142c9a0();
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c970();
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c980();
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faf20();
        FUN_013f07a0(uVar9,uVar10,uVar1,uVar2);
        pvVar4 = _pthread_getspecific((void*)param_1);
        plVar8 = plVar3;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = plVar3;
          plVar8 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        pVar7 = (void*)param_1;
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013faed0();
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_013faf20();
        (**(code **)(*plVar8 + 0x418))(uVar9,uVar10);
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        param_1 = (int64_t *)(int64_t)*(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc);
      } while (lVar5 < (int64_t)param_1);
    }
    FUN_00d64850();
    plVar8 = *(int64_t **)(this_ptr + 0x60);
    if (plVar8 != plVar3) {
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x60) = plVar3;
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


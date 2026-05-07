// Function: FUN_018bf930
// Address: 018bf930
// Size: 695 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_018bf930(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t local_78;
  char local_70;
  
  pVar5 = (void*)param_1;
  if (*(int64_t *)(arg1 + 0x50) == 0) {
    lVar4 = *(int64_t *)(arg1 + 0x48);
    if (lVar4 != 0) {
      FUN_00d50b00();
      lVar3 = 0;
      while (pVar5 = (void*)param_1, (int)lVar3 < *(int *)(lVar4 + 0xc)) {
        plVar6 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar3 * 8);
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018220f0();
        lVar1 = *param_2;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
        if (local_78 == lVar1) {
          pvVar2 = _pthread_getspecific((void*)param_1);
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar6 + 0x368))();
          FUN_01894d60();
          FUN_00d50b20();
          return this_ptr;
        }
      }
      FUN_01894d60();
      FUN_00d50b20();
    }
    plVar6 = (int64_t *)*param_2;
    pvVar2 = _pthread_getspecific(pVar5);
  }
  else {
    lVar4 = *param_2;
    pvVar2 = _pthread_getspecific(pVar5);
    if (pvVar2 != (void *)0x0) {
      lVar4 = *param_2;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    lVar3 = *(int64_t *)(*(int64_t *)(arg1 + 0x50) + 0x10);
    if (*(int64_t *)(lVar3 + (int64_t)*(int *)(lVar4 + 0x98) * 8) != 0) {
      lVar4 = *param_2;
      pvVar2 = _pthread_getspecific((void*)lVar3);
      if (pvVar2 != (void *)0x0) {
        lVar4 = *param_2;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      lVar3 = *(int64_t *)(*(int64_t *)(arg1 + 0x50) + 0x10);
      if (*(int64_t *)(lVar3 + (int64_t)*(int *)(lVar4 + 0x98) * 8) != 0) {
        lVar4 = *param_2;
        pvVar2 = _pthread_getspecific((void*)lVar3);
        if (pvVar2 != (void *)0x0) {
          lVar4 = *param_2;
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
          }
        }
        (**(code **)(**(int64_t **)
                       (*(int64_t *)(*(int64_t *)(arg1 + 0x50) + 0x10) +
                       (int64_t)*(int *)(lVar4 + 0x98) * 8) + 0x368))();
        return this_ptr;
      }
    }
    plVar6 = (int64_t *)*param_2;
    pvVar2 = _pthread_getspecific((void*)lVar3);
  }
  if (pvVar2 != (void *)0x0) {
    plVar6 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x388))();
  return this_ptr;
}


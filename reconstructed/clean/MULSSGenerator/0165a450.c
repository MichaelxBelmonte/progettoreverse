// Function: FUN_0165a450
// Address: 0165a450
// Size: 561 bytes
// Class: MULSSGenerator

int FUN_0165a450(void* param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  
  lVar6 = *this_ptr;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = *this_ptr;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar6 + 0x50);
  lVar6 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  iVar3 = 1;
  if (*(double *)(lVar6 + 0x50) <= dVar1) {
    lVar6 = *this_ptr;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *this_ptr;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    dVar1 = *(double *)(lVar6 + 0x50);
    lVar6 = *arg1;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    iVar3 = -1;
    if (dVar1 < *(double *)(lVar6 + 0x50) || dVar1 == *(double *)(lVar6 + 0x50)) {
      lVar6 = *this_ptr;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        lVar6 = *this_ptr;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      dVar1 = *(double *)(lVar6 + 0x50);
      dVar2 = *(double *)(lVar6 + 0x58);
      lVar6 = *arg1;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        lVar6 = *arg1;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      iVar3 = 1;
      if (*(double *)(lVar6 + 0x50) + *(double *)(lVar6 + 0x58) <= dVar1 + dVar2) {
        lVar6 = *this_ptr;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar6 = *this_ptr;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        dVar1 = *(double *)(lVar6 + 0x50);
        dVar2 = *(double *)(lVar6 + 0x58);
        lVar6 = *arg1;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar6 = *arg1;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        iVar3 = -(uint)(*(double *)(lVar6 + 0x50) + *(double *)(lVar6 + 0x58) < dVar1 + dVar2);
      }
    }
  }
  return iVar3;
}


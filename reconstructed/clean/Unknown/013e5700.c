// Function: FUN_013e5700
// Address: 013e5700
// Size: 1455 bytes
// Class: Unknown

void FUN_013e5700(double param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  void* in_ECX;
  int64_t arg1;
  void*this_ptr;
  double dVar4;
  uint64_t uVar5;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_013de650();
  if (*(int64_t *)(arg1 + 0x60) == 0) {
    dVar4 = 0.0;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013279f0();
  }
  FUN_012642b0((double)lVar3 * dVar4 + param_1);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_013de790();
  if (*(int64_t *)(arg1 + 0x60) == 0) {
    dVar4 = 0.0;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013279f0();
  }
  FUN_01259540((double)lVar3 * dVar4);
  pvVar2 = _pthread_getspecific(in_ECX);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(int64_t *)(arg1 + 0x48);
  }
  else {
    lVar3 = *(int64_t *)(arg1 + 0x48);
  }
  if (lVar3 == 0) {
    uVar5 = (uint64_t)g_023b26e8;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_013ddd00();
  }
  FUN_012595a0(uVar5);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_013deb20();
  if (*(int64_t *)(arg1 + 0x60) == 0) {
    dVar4 = 0.0;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013279f0();
  }
  FUN_01264320((double)lVar3 * dVar4);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_013debd0();
  if (*(int64_t *)(arg1 + 0x60) == 0) {
    dVar4 = 0.0;
  }
  else {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013279f0();
  }
  FUN_01264390((double)lVar3 * dVar4);
  if (0 < *(int *)(*(int64_t *)(arg1 + 0x40) + 0xc)) {
    lVar3 = 0;
    do {
      if (lVar3 == 0) {
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013ddd70();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01265bc0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(in_ECX);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013ddd70();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01265db0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(*(int64_t *)(arg1 + 0x40) + 0xc));
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a5f0();
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}


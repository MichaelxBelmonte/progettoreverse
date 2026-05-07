// Function: FUN_0188ea80
// Address: 0188ea80
// Size: 997 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0188ea80(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  float fVar5;
  float fVar6;
  
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x44);
  if ((*(float *)(this_ptr + 0x44) != fVar5) || (NAN(*(float *)(this_ptr + 0x44)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0x44) = fVar5;
    FUN_00d64910();
  }
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x48);
  if ((*(float *)(this_ptr + 0x48) != fVar5) || (NAN(*(float *)(this_ptr + 0x48)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0x48) = fVar5;
    FUN_00d64910();
  }
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x4c);
  if ((*(float *)(this_ptr + 0x4c) != fVar5) || (NAN(*(float *)(this_ptr + 0x4c)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0x4c) = fVar5;
    FUN_00d64910();
  }
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x5c);
  if ((*(float *)(this_ptr + 0x5c) != fVar5) || (NAN(*(float *)(this_ptr + 0x5c)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0x5c) = fVar5;
    FUN_00d64910();
  }
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x50);
  if ((*(float *)(this_ptr + 0x50) != fVar5) || (NAN(*(float *)(this_ptr + 0x50)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0x50) = fVar5;
    FUN_00d64910();
    fVar6 = (*(float *)(this_ptr + 0x54) - *(float *)(this_ptr + 0x50)) * g_02393944;
    fVar5 = 0.0;
    if (g_02394274 <= fVar6) {
      fVar5 = (float)_expf(g_024178e4 / fVar6);
    }
    if ((*(float *)(this_ptr + 0x58) != fVar5) || (NAN(*(float *)(this_ptr + 0x58)) || NAN(fVar5))
       ) {
      FUN_00d64850();
      *(float *)(this_ptr + 0x58) = fVar5;
      FUN_00d64910();
    }
  }
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x54);
  if ((*(float *)(this_ptr + 0x54) != fVar5) || (NAN(*(float *)(this_ptr + 0x54)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(this_ptr + 0x54) = fVar5;
    FUN_00d64910();
    fVar6 = (*(float *)(this_ptr + 0x54) - *(float *)(this_ptr + 0x50)) * g_02393944;
    fVar5 = 0.0;
    if (g_02394274 <= fVar6) {
      fVar5 = (float)_expf(g_024178e4 / fVar6);
    }
    if ((*(float *)(this_ptr + 0x58) != fVar5) || (NAN(*(float *)(this_ptr + 0x58)) || NAN(fVar5))
       ) {
      FUN_00d64850();
      *(float *)(this_ptr + 0x58) = fVar5;
      FUN_00d64910();
    }
  }
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  cVar1 = *(char *)(lVar4 + 0x60);
  if (*(char *)(this_ptr + 0x60) == cVar1) {
    return;
  }
  FUN_00d64850();
  *(char *)(this_ptr + 0x60) = cVar1;
  FUN_00d64910();
  return;
}


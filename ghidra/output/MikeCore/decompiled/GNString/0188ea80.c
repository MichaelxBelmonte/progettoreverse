// Function: FUN_0188ea80
// Address: 0188ea80
// Size: 997 bytes
// Class: GNString


void FUN_0188ea80(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  float fVar5;
  float fVar6;
  
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x44);
  if ((*(float *)(unaff_RDI + 0x44) != fVar5) || (NAN(*(float *)(unaff_RDI + 0x44)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x44) = fVar5;
    FUN_00d64910();
  }
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x48);
  if ((*(float *)(unaff_RDI + 0x48) != fVar5) || (NAN(*(float *)(unaff_RDI + 0x48)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x48) = fVar5;
    FUN_00d64910();
  }
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x4c);
  if ((*(float *)(unaff_RDI + 0x4c) != fVar5) || (NAN(*(float *)(unaff_RDI + 0x4c)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x4c) = fVar5;
    FUN_00d64910();
  }
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x5c);
  if ((*(float *)(unaff_RDI + 0x5c) != fVar5) || (NAN(*(float *)(unaff_RDI + 0x5c)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x5c) = fVar5;
    FUN_00d64910();
  }
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x50);
  if ((*(float *)(unaff_RDI + 0x50) != fVar5) || (NAN(*(float *)(unaff_RDI + 0x50)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x50) = fVar5;
    FUN_00d64910();
    fVar6 = (*(float *)(unaff_RDI + 0x54) - *(float *)(unaff_RDI + 0x50)) * DAT_02393944;
    fVar5 = 0.0;
    if (DAT_02394274 <= fVar6) {
      fVar5 = (float)_expf(DAT_024178e4 / fVar6);
    }
    if ((*(float *)(unaff_RDI + 0x58) != fVar5) || (NAN(*(float *)(unaff_RDI + 0x58)) || NAN(fVar5))
       ) {
      FUN_00d64850();
      *(float *)(unaff_RDI + 0x58) = fVar5;
      FUN_00d64910();
    }
  }
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  fVar5 = *(float *)(lVar4 + 0x54);
  if ((*(float *)(unaff_RDI + 0x54) != fVar5) || (NAN(*(float *)(unaff_RDI + 0x54)) || NAN(fVar5)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x54) = fVar5;
    FUN_00d64910();
    fVar6 = (*(float *)(unaff_RDI + 0x54) - *(float *)(unaff_RDI + 0x50)) * DAT_02393944;
    fVar5 = 0.0;
    if (DAT_02394274 <= fVar6) {
      fVar5 = (float)_expf(DAT_024178e4 / fVar6);
    }
    if ((*(float *)(unaff_RDI + 0x58) != fVar5) || (NAN(*(float *)(unaff_RDI + 0x58)) || NAN(fVar5))
       ) {
      FUN_00d64850();
      *(float *)(unaff_RDI + 0x58) = fVar5;
      FUN_00d64910();
    }
  }
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  cVar1 = *(char *)(lVar4 + 0x60);
  if (*(char *)(unaff_RDI + 0x60) == cVar1) {
    return;
  }
  FUN_00d64850();
  *(char *)(unaff_RDI + 0x60) = cVar1;
  FUN_00d64910();
  return;
}



// Function: FUN_017f4540
// Address: 017f4540
// Size: 2077 bytes
// Class: GNData


void FUN_017f4540(pthread_key_t param_1)

{
  float fVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  fVar1 = *(float *)(lVar5 + 0xb8);
  if ((*(float *)(unaff_RDI + 0xb8) != fVar1) || (NAN(*(float *)(unaff_RDI + 0xb8)) || NAN(fVar1)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xb8) = fVar1;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  fVar1 = *(float *)(lVar5 + 0xbc);
  if ((*(float *)(unaff_RDI + 0xbc) != fVar1) || (NAN(*(float *)(unaff_RDI + 0xbc)) || NAN(fVar1)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xbc) = fVar1;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  fVar1 = *(float *)(lVar5 + 0xcc);
  if ((*(float *)(unaff_RDI + 0xcc) != fVar1) || (NAN(*(float *)(unaff_RDI + 0xcc)) || NAN(fVar1)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xcc) = fVar1;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  fVar1 = *(float *)(lVar5 + 0xc4);
  if ((*(float *)(unaff_RDI + 0xc4) != fVar1) || (NAN(*(float *)(unaff_RDI + 0xc4)) || NAN(fVar1)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xc4) = fVar1;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  fVar1 = *(float *)(lVar5 + 200);
  if ((*(float *)(unaff_RDI + 200) != fVar1) || (NAN(*(float *)(unaff_RDI + 200)) || NAN(fVar1))) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 200) = fVar1;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  fVar1 = *(float *)(lVar5 + 0xc0);
  if ((*(float *)(unaff_RDI + 0xc0) != fVar1) || (NAN(*(float *)(unaff_RDI + 0xc0)) || NAN(fVar1)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xc0) = fVar1;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  iVar2 = *(int *)(lVar5 + 0xa8);
  if (*(int *)(unaff_RDI + 0xa8) != iVar2) {
    FUN_00d64850();
    *(int *)(unaff_RDI + 0xa8) = iVar2;
    FUN_00d64910();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  fVar1 = *(float *)(lVar5 + 0xac);
  if ((*(float *)(unaff_RDI + 0xac) != fVar1) || (NAN(*(float *)(unaff_RDI + 0xac)) || NAN(fVar1)))
  {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xac) = fVar1;
    FUN_00d64910();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x40);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_015bd150();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_015bd150();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x50);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_015bd150();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x58);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_015bd150();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x60);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_0188ea80();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x68);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_0188ea80();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = *unaff_RSI;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x70);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_0188ea80();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}



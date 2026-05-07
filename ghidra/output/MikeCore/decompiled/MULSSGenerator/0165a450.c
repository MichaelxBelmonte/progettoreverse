// Function: FUN_0165a450
// Address: 0165a450
// Size: 561 bytes
// Class: MULSSGenerator


int FUN_0165a450(pthread_key_t param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  lVar6 = *unaff_RDI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = *unaff_RDI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar6 + 0x50);
  lVar6 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  iVar3 = 1;
  if (*(double *)(lVar6 + 0x50) <= dVar1) {
    lVar6 = *unaff_RDI;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *unaff_RDI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    dVar1 = *(double *)(lVar6 + 0x50);
    lVar6 = *unaff_RSI;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    iVar3 = -1;
    if (dVar1 < *(double *)(lVar6 + 0x50) || dVar1 == *(double *)(lVar6 + 0x50)) {
      lVar6 = *unaff_RDI;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        lVar6 = *unaff_RDI;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      dVar1 = *(double *)(lVar6 + 0x50);
      dVar2 = *(double *)(lVar6 + 0x58);
      lVar6 = *unaff_RSI;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        lVar6 = *unaff_RSI;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      iVar3 = 1;
      if (*(double *)(lVar6 + 0x50) + *(double *)(lVar6 + 0x58) <= dVar1 + dVar2) {
        lVar6 = *unaff_RDI;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar6 = *unaff_RDI;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        dVar1 = *(double *)(lVar6 + 0x50);
        dVar2 = *(double *)(lVar6 + 0x58);
        lVar6 = *unaff_RSI;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar6 = *unaff_RSI;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        iVar3 = -(uint)(*(double *)(lVar6 + 0x50) + *(double *)(lVar6 + 0x58) < dVar1 + dVar2);
      }
    }
  }
  return iVar3;
}



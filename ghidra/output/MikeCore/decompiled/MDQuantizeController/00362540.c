// Function: FUN_00362540
// Address: 00362540
// Size: 659 bytes
// Class: MDQuantizeController


void FUN_00362540(pthread_key_t param_1)

{
  double dVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = *(double *)(unaff_RDI + 0x48);
  dVar6 = *(double *)(unaff_RDI + 0x50);
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar9 = *(double *)(lVar4 + 0x48);
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar4 + 0x50);
  dVar5 = dVar1;
  dVar7 = dVar9;
  if ((dVar8 < dVar6) && (dVar5 = dVar6, dVar7 = dVar8, dVar9 < dVar1)) {
    if (dVar8 <= dVar9) {
      dVar9 = dVar8;
    }
    dVar5 = dVar1;
    dVar7 = dVar9;
    if (dVar1 <= dVar6) {
      dVar5 = dVar6;
    }
  }
  if ((*(double *)(unaff_RDI + 0x48) != dVar7) || (NAN(*(double *)(unaff_RDI + 0x48)) || NAN(dVar7))
     ) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0x48) = dVar7;
    FUN_00d64910();
  }
  if ((*(double *)(unaff_RDI + 0x50) != dVar5) || (NAN(*(double *)(unaff_RDI + 0x50)) || NAN(dVar5))
     ) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0x50) = dVar5;
    FUN_00d64910();
  }
  dVar8 = *(double *)(unaff_RDI + 0x38);
  dVar6 = *(double *)(unaff_RDI + 0x40);
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar9 = *(double *)(lVar4 + 0x38);
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar4 + 0x38);
  if (dVar8 < dVar6) {
    if (dVar1 <= dVar9) goto LAB_00362745;
    if (dVar8 <= dVar9) {
      dVar9 = dVar8;
    }
    dVar8 = dVar9;
    dVar9 = dVar8;
    if (dVar1 <= dVar6) goto LAB_00362745;
  }
  dVar8 = dVar9;
  dVar6 = dVar1;
LAB_00362745:
  if ((*(double *)(unaff_RDI + 0x38) != dVar8) || (NAN(*(double *)(unaff_RDI + 0x38)) || NAN(dVar8))
     ) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0x38) = dVar8;
    FUN_00d64910();
  }
  if ((*(double *)(unaff_RDI + 0x40) == dVar6) &&
     (!NAN(*(double *)(unaff_RDI + 0x40)) && !NAN(dVar6))) {
    return;
  }
  FUN_00d64850();
  *(double *)(unaff_RDI + 0x40) = dVar6;
  FUN_00d64910();
  return;
}



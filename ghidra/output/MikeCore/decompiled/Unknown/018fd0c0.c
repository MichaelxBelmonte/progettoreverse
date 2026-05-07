// Function: FUN_018fd0c0
// Address: 018fd0c0
// Size: 1386 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_018fd0c0(double param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined8 in_RCX;
  int iVar7;
  int iVar8;
  int *unaff_RSI;
  longlong unaff_RDI;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (DAT_023e1698 <= (double)(_DAT_023908f0 & (ulonglong)param_1)) {
    return param_1;
  }
  if (NAN(param_1)) {
    return param_1;
  }
  iVar7 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
  uVar4 = FUN_019079b0();
  if (uVar4 >> 0x20 != 0) {
    cVar2 = FUN_00e7c720();
    pVar6 = (pthread_key_t)in_RCX;
    if (cVar2 != '\0') {
      iVar8 = 0;
      goto LAB_018fd42e;
    }
  }
  iVar8 = iVar7 + -2;
  uVar4 = FUN_019079b0();
  if ((!NAN(param_1)) && (uVar4 >> 0x20 != 0)) {
    cVar2 = FUN_00e7c720();
    pVar6 = (pthread_key_t)in_RCX;
    if (cVar2 == '\0') goto LAB_018fd42e;
  }
  iVar3 = 1;
  iVar10 = iVar8;
  if ((unaff_RSI != (int *)0x0) && (iVar1 = *unaff_RSI, iVar1 != -1)) {
    iVar3 = iVar1;
    if (iVar8 < iVar1) {
      iVar3 = iVar8;
    }
    iVar9 = 1;
    if (0 < iVar1) {
      iVar9 = iVar3;
    }
    in_RCX = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
    uVar4 = FUN_019079b0();
    if (((NAN(param_1)) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c720(), cVar2 == '\0')) {
      iVar3 = iVar9;
      if (iVar9 < iVar7 + -1) {
        in_RCX = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(param_1)) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar10 = iVar9 + 1, cVar2 != '\0')) goto LAB_018fd3db;
      }
      if (iVar9 + 2 < iVar7) {
        in_RCX = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(param_1)) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar10 = iVar9 + 2, cVar2 != '\0')) goto LAB_018fd3db;
      }
      iVar10 = iVar8;
      if (iVar9 + 3 < iVar7) {
        in_RCX = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(param_1)) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c720(), cVar2 != '\0')) {
          iVar10 = iVar9 + 3;
        }
      }
    }
    else {
      iVar10 = iVar9;
      if (0 < iVar9) {
        in_RCX = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(param_1)) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar3 = iVar9 + -1, cVar2 == '\0')) goto LAB_018fd3db;
      }
      if (1 < iVar9) {
        in_RCX = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(param_1)) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar3 = iVar9 + -2, cVar2 == '\0')) goto LAB_018fd3db;
      }
      if (2 < iVar9) {
        in_RCX = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if ((!NAN(param_1)) && (uVar4 >> 0x20 != 0)) {
          cVar2 = FUN_00e7c720();
          iVar3 = iVar9 + -3;
          if (cVar2 != '\0') {
            iVar3 = 1;
          }
          goto LAB_018fd3db;
        }
      }
      iVar3 = 1;
    }
  }
LAB_018fd3db:
  do {
    iVar8 = iVar3;
    pVar6 = (pthread_key_t)in_RCX;
    if (iVar10 - iVar8 == 1) break;
    iVar7 = (iVar10 - iVar8) / 2 + iVar8;
    in_RCX = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
    FUN_019079b0();
    dVar11 = (double)FUN_00e7c860();
    pVar6 = (pthread_key_t)in_RCX;
    iVar3 = iVar7;
    if (param_1 <= dVar11) {
      iVar3 = iVar8;
      iVar10 = iVar7;
    }
  } while ((dVar11 != param_1) || (iVar8 = iVar7, NAN(dVar11) || NAN(param_1)));
LAB_018fd42e:
  if (unaff_RSI != (int *)0x0) {
    *unaff_RSI = iVar8;
  }
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  dVar11 = (double)FUN_00e7c860();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_01907950();
  if ((dVar11 != param_1) || (dVar15 = dVar12, NAN(dVar11) || NAN(param_1))) {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    dVar13 = (double)FUN_00e7c860();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar14 = (double)FUN_01907950();
    if ((((dVar13 != param_1) || (dVar15 = dVar14, NAN(dVar13) || NAN(param_1))) &&
        (dVar15 = dVar12, 0.0 < dVar13 - dVar11)) &&
       ((dVar16 = ((param_1 - dVar11) * dVar14 + (dVar13 - param_1) * dVar12) / (dVar13 - dVar11),
        dVar12 <= dVar16 || (param_1 < dVar11)))) {
      dVar15 = (double)(-(ulonglong)(dVar16 <= dVar14) & (ulonglong)dVar16 |
                       ~-(ulonglong)(dVar16 <= dVar14) &
                       (~-(ulonglong)(dVar13 < param_1) & (ulonglong)dVar14 |
                       -(ulonglong)(dVar13 < param_1) & (ulonglong)dVar16));
    }
  }
  return dVar15;
}



// Function: FUN_018fcb10
// Address: 018fcb10
// Size: 1432 bytes
// Class: GNString


double FUN_018fcb10(undefined8 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  int iVar7;
  int iVar8;
  ulonglong unaff_RSI;
  int iVar9;
  longlong unaff_RDI;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  iVar9 = (int)(unaff_RSI >> 0x20);
  if (unaff_RSI >> 0x20 == 0) {
    return DAT_023908c8;
  }
  dVar12 = (double)FUN_00e7c860();
  iVar7 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
  uVar4 = FUN_019079b0();
  if ((!NAN(dVar12)) && (uVar4 >> 0x20 != 0)) {
    cVar2 = FUN_00e7c720();
    pVar6 = (pthread_key_t)param_1;
    if (cVar2 != '\0') {
      iVar8 = 0;
      goto LAB_018fce8e;
    }
  }
  iVar8 = iVar7 + -2;
  uVar4 = FUN_019079b0();
  if ((!NAN(dVar12)) && (uVar4 >> 0x20 != 0)) {
    cVar2 = FUN_00e7c720();
    pVar6 = (pthread_key_t)param_1;
    if (cVar2 == '\0') goto LAB_018fce8e;
  }
  iVar3 = 1;
  iVar11 = iVar8;
  if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 != -1)) {
    iVar3 = iVar1;
    if (iVar8 < iVar1) {
      iVar3 = iVar8;
    }
    iVar10 = 1;
    if (0 < iVar1) {
      iVar10 = iVar3;
    }
    param_1 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
    uVar4 = FUN_019079b0();
    if (((NAN(dVar12)) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c720(), cVar2 == '\0')) {
      iVar3 = iVar10;
      if (iVar10 < iVar7 + -1) {
        param_1 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(dVar12)) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar11 = iVar10 + 1, cVar2 != '\0')) goto LAB_018fce3b;
      }
      if (iVar10 + 2 < iVar7) {
        param_1 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(dVar12)) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar11 = iVar10 + 2, cVar2 != '\0')) goto LAB_018fce3b;
      }
      iVar11 = iVar8;
      if (iVar10 + 3 < iVar7) {
        param_1 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(dVar12)) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c720(), cVar2 != '\0')) {
          iVar11 = iVar10 + 3;
        }
      }
    }
    else {
      iVar11 = iVar10;
      if (0 < iVar10) {
        param_1 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(dVar12)) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar3 = iVar10 + -1, cVar2 == '\0')) goto LAB_018fce3b;
      }
      if (1 < iVar10) {
        param_1 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if (((!NAN(dVar12)) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar3 = iVar10 + -2, cVar2 == '\0')) goto LAB_018fce3b;
      }
      if (2 < iVar10) {
        param_1 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        uVar4 = FUN_019079b0();
        if ((!NAN(dVar12)) && (uVar4 >> 0x20 != 0)) {
          cVar2 = FUN_00e7c720();
          iVar3 = iVar10 + -3;
          if (cVar2 != '\0') {
            iVar3 = 1;
          }
          goto LAB_018fce3b;
        }
      }
      iVar3 = 1;
    }
  }
LAB_018fce3b:
  do {
    iVar8 = iVar3;
    pVar6 = (pthread_key_t)param_1;
    if (iVar11 - iVar8 == 1) break;
    iVar7 = (iVar11 - iVar8) / 2 + iVar8;
    param_1 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
    FUN_019079b0();
    dVar13 = (double)FUN_00e7c860();
    pVar6 = (pthread_key_t)param_1;
    iVar3 = iVar7;
    if (dVar12 <= dVar13) {
      iVar3 = iVar8;
      iVar11 = iVar7;
    }
  } while ((dVar13 != dVar12) || (iVar8 = iVar7, NAN(dVar13) || NAN(dVar12)));
LAB_018fce8e:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar8;
  }
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_019079b0();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar13 = (double)FUN_01907950();
  if (((uVar4 >> 0x20 == 0) || (iVar9 == 0)) ||
     (cVar2 = FUN_00e7c000(), dVar18 = dVar13, cVar2 == '\0')) {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar14 = (double)FUN_01907950();
    if (((uVar4 >> 0x20 == 0) || (iVar9 == 0)) ||
       (cVar2 = FUN_00e7c000(), dVar18 = dVar14, cVar2 == '\0')) {
      dVar15 = (double)FUN_00e7c860();
      dVar16 = (double)FUN_00e7c860();
      dVar18 = dVar13;
      if ((0.0 < dVar16 - dVar15) &&
         ((dVar17 = ((dVar12 - dVar15) * dVar14 + (dVar16 - dVar12) * dVar13) / (dVar16 - dVar15),
          dVar13 <= dVar17 || (dVar12 < dVar15)))) {
        dVar18 = (double)(-(ulonglong)(dVar17 <= dVar14) & (ulonglong)dVar17 |
                         ~-(ulonglong)(dVar17 <= dVar14) &
                         (~-(ulonglong)(dVar16 < dVar12) & (ulonglong)dVar14 |
                         -(ulonglong)(dVar16 < dVar12) & (ulonglong)dVar17));
      }
    }
  }
  return dVar18;
}



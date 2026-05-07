// Function: FUN_018fc1e0
// Address: 018fc1e0
// Size: 1174 bytes
// Class: MUBeatSelection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fc1e0(double param_1)

{
  int iVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  int *in_RCX;
  int *piVar4;
  int iVar5;
  longlong unaff_RDI;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if ((DAT_023e1698 <= (double)(_DAT_023908f0 & (ulonglong)param_1)) || (NAN(param_1))) {
    FUN_00e7bdb0();
    return;
  }
  iVar5 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
  piVar4 = in_RCX;
  dVar9 = (double)FUN_01907950();
  pVar3 = (pthread_key_t)piVar4;
  if (param_1 < dVar9) {
    iVar8 = 0;
    goto LAB_018fc472;
  }
  iVar7 = iVar5 + -2;
  dVar9 = (double)FUN_01907950();
  pVar3 = (pthread_key_t)piVar4;
  iVar8 = iVar7;
  if (dVar9 <= param_1) goto LAB_018fc472;
  iVar1 = 1;
  if ((in_RCX != (int *)0x0) && (iVar8 = *in_RCX, iVar8 != -1)) {
    iVar6 = iVar8;
    if (iVar7 < iVar8) {
      iVar6 = iVar7;
    }
    if (iVar8 < 1) {
      iVar6 = 1;
    }
    piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
    dVar9 = (double)FUN_01907950();
    if (dVar9 <= param_1) {
      iVar1 = iVar6;
      if (iVar6 < iVar5 + -1) {
        iVar8 = iVar6 + 1;
        piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        dVar9 = (double)FUN_01907950();
        if (dVar9 <= param_1) goto LAB_018fc3a8;
LAB_018fc3f0:
        iVar7 = iVar8;
      }
      else {
LAB_018fc3a8:
        iVar8 = iVar6 + 2;
        if (iVar8 < iVar5) {
          piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
          dVar9 = (double)FUN_01907950();
          if (param_1 < dVar9) goto LAB_018fc3f0;
        }
        iVar8 = iVar6 + 3;
        if (iVar8 < iVar5) {
          piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
          dVar9 = (double)FUN_01907950();
          if (param_1 < dVar9) goto LAB_018fc3f0;
        }
      }
    }
    else {
      iVar1 = 1;
      iVar7 = iVar6;
      if (0 < iVar6) {
        piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        dVar9 = (double)FUN_01907950();
        iVar1 = iVar6 + -1;
        if (param_1 < dVar9) {
          if (iVar6 < 2) {
            iVar1 = 1;
            iVar7 = 1;
          }
          else {
            piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
            dVar9 = (double)FUN_01907950();
            iVar1 = iVar6 + -2;
            if (param_1 < dVar9) {
              if (iVar6 < 3) {
                iVar1 = 1;
                iVar7 = 2;
              }
              else {
                piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
                dVar9 = (double)FUN_01907950();
                iVar1 = iVar6 + -3;
                if (param_1 < dVar9) {
                  iVar1 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    iVar8 = iVar1;
    pVar3 = (pthread_key_t)piVar4;
    if (iVar7 - iVar8 == 1) break;
    iVar5 = (iVar7 - iVar8) / 2 + iVar8;
    piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
    dVar9 = (double)FUN_01907950();
    pVar3 = (pthread_key_t)piVar4;
    iVar1 = iVar5;
    if (param_1 <= dVar9) {
      iVar1 = iVar8;
      iVar7 = iVar5;
    }
  } while ((dVar9 != param_1) || (iVar8 = iVar5, NAN(dVar9) || NAN(param_1)));
LAB_018fc472:
  if (in_RCX != (int *)0x0) {
    *in_RCX = iVar8;
  }
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar9 = (double)FUN_01907950();
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  if ((dVar9 != param_1) || (NAN(dVar9) || NAN(param_1))) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01907950();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    if ((dVar10 != param_1) || (NAN(dVar10) || NAN(param_1))) {
      dVar11 = (double)FUN_00e7c860();
      dVar12 = (double)FUN_00e7c860();
      if ((0.0 < dVar10 - dVar9) &&
         ((dVar13 = ((param_1 - dVar9) * dVar12 + (dVar10 - param_1) * dVar11) / (dVar10 - dVar9),
          dVar11 <= dVar13 || (param_1 < dVar9)))) {
        dVar11 = (double)(-(ulonglong)(dVar13 <= dVar12) & (ulonglong)dVar13 |
                         ~-(ulonglong)(dVar13 <= dVar12) &
                         (~-(ulonglong)(dVar10 < param_1) & (ulonglong)dVar12 |
                         -(ulonglong)(dVar10 < param_1) & (ulonglong)dVar13));
      }
      FUN_00e7cd00(dVar11);
    }
  }
  return;
}



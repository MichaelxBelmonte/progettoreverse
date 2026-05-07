// Function: FUN_00d45190
// Address: 00d45190
// Size: 679 bytes
// Class: GNList


bool FUN_00d45190(void)

{
  float fVar1;
  double dVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar9;
  float fVar10;
  double dVar11;
  
  plVar3 = (longlong *)*unaff_RSI;
  if (plVar3 == unaff_RDI) {
    return true;
  }
  if (plVar3 == (longlong *)0x0) goto LAB_00d451c5;
  lVar5 = (**(code **)(*plVar3 + 0x360))();
  lVar6 = FUN_00053ac0();
  if (lVar5 != lVar6) goto LAB_00d451c5;
  bVar9 = false;
  iVar8 = *(char *)((longlong)unaff_RDI + 0xc) + -0x49;
  switch(iVar8) {
  case 0:
  case 0x20:
    if (*(char *)(*unaff_RSI + 0xc) == 'l') {
      uVar7 = 0;
      switch(iVar8) {
      case 0:
      case 0x20:
        uVar7 = (ulonglong)(int)unaff_RDI[2];
        break;
      case 0x19:
        uVar7 = (ulonglong)*(byte *)(unaff_RDI + 2);
        break;
      case 0x1b:
        uVar7 = (ulonglong)(double)unaff_RDI[2];
        break;
      case 0x1d:
        uVar7 = (ulonglong)*(float *)(unaff_RDI + 2);
      }
      bVar9 = uVar7 == *(ulonglong *)(*unaff_RSI + 0x10);
    }
    else {
      iVar8 = FUN_00d45870();
      iVar4 = FUN_00d45870();
      bVar9 = iVar8 == iVar4;
    }
    break;
  case 0x19:
    lVar5 = *unaff_RSI;
    bVar9 = false;
    switch(*(undefined1 *)(lVar5 + 0xc)) {
    case 0x49:
    case 0x69:
      bVar9 = *(int *)(lVar5 + 0x10) == 0;
      goto LAB_00d45367;
    case 0x62:
      bVar9 = *(char *)(lVar5 + 0x10) == '\0';
      goto LAB_00d45367;
    case 100:
      bVar9 = (bool)(-(*(double *)(lVar5 + 0x10) != 0.0) & 1);
      break;
    case 0x66:
      bVar9 = (bool)(-(*(float *)(lVar5 + 0x10) != 0.0) & 1);
      break;
    case 0x6c:
      bVar9 = *(longlong *)(lVar5 + 0x10) == 0;
LAB_00d45367:
      bVar9 = !bVar9;
    }
    bVar9 = (bool)((char)unaff_RDI[2] == '\0' ^ bVar9);
    break;
  case 0x1b:
    dVar2 = (double)unaff_RDI[2];
    lVar5 = *unaff_RSI;
    dVar11 = 0.0;
    switch(*(undefined1 *)(lVar5 + 0xc)) {
    case 0x49:
    case 0x69:
      dVar11 = (double)*(int *)(lVar5 + 0x10);
      break;
    case 0x62:
      dVar11 = 0.0;
      if (*(char *)(lVar5 + 0x10) != '\0') {
        dVar11 = DAT_0238fee8;
      }
      break;
    case 100:
      dVar11 = *(double *)(lVar5 + 0x10);
      break;
    case 0x66:
      dVar11 = (double)*(float *)(lVar5 + 0x10);
      break;
    case 0x6c:
      dVar11 = (double)*(longlong *)(lVar5 + 0x10);
    }
    if ((dVar2 == dVar11) && (!NAN(dVar2) && !NAN(dVar11))) {
      return true;
    }
    if (NAN(dVar2)) {
      return NAN(dVar11);
    }
    goto LAB_00d451c5;
  case 0x1d:
    fVar1 = *(float *)(unaff_RDI + 2);
    lVar5 = *unaff_RSI;
    fVar10 = 0.0;
    switch(*(undefined1 *)(lVar5 + 0xc)) {
    case 0x49:
    case 0x69:
      fVar10 = (float)*(int *)(lVar5 + 0x10);
      break;
    case 0x62:
      fVar10 = 0.0;
      if (*(char *)(lVar5 + 0x10) != '\0') {
        fVar10 = DAT_02390124;
      }
      break;
    case 100:
      fVar10 = (float)*(double *)(lVar5 + 0x10);
      break;
    case 0x66:
      fVar10 = *(float *)(lVar5 + 0x10);
      break;
    case 0x6c:
      fVar10 = (float)*(longlong *)(lVar5 + 0x10);
    }
    if ((fVar1 == fVar10) && (!NAN(fVar1) && !NAN(fVar10))) {
      return true;
    }
    if (NAN(fVar1)) {
      return NAN(fVar10);
    }
LAB_00d451c5:
    bVar9 = false;
    break;
  case 0x23:
    lVar5 = *unaff_RSI;
    uVar7 = 0;
    switch(*(undefined1 *)(lVar5 + 0xc)) {
    case 0x49:
    case 0x69:
      uVar7 = (ulonglong)*(int *)(lVar5 + 0x10);
      break;
    case 0x62:
      uVar7 = (ulonglong)*(byte *)(lVar5 + 0x10);
      break;
    case 100:
      uVar7 = (ulonglong)*(double *)(lVar5 + 0x10);
      break;
    case 0x66:
      uVar7 = (ulonglong)*(float *)(lVar5 + 0x10);
      break;
    case 0x6c:
      uVar7 = *(ulonglong *)(lVar5 + 0x10);
    }
    bVar9 = unaff_RDI[2] == uVar7;
  }
  return bVar9;
}



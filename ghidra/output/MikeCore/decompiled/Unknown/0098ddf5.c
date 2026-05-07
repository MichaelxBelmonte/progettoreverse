// Function: FUN_0098ddf5
// Address: 0098ddf5
// Size: 1008 bytes
// Class: Unknown


void FUN_0098ddf5(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong *puVar14;
  
LAB_0098de0c:
  puVar1 = unaff_RSI + -2;
  puVar13 = unaff_RDI;
LAB_0098de26:
  unaff_RDI = puVar13;
  lVar8 = (longlong)unaff_RSI - (longlong)unaff_RDI;
  uVar6 = lVar8 >> 4;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_0098e115_caseD_0;
  case 2:
    if (*unaff_RDI <= *puVar1) {
      return;
    }
    uVar6 = *unaff_RDI;
    uVar9 = unaff_RDI[1];
    uVar2 = *puVar1;
    unaff_RDI[1] = unaff_RSI[-1];
    *unaff_RDI = uVar2;
    unaff_RSI[-1] = uVar9;
    *puVar1 = uVar6;
    return;
  case 3:
    FUN_0098e200(param_2,puVar1);
    return;
  case 4:
    FUN_0098e330(puVar1,unaff_RDI + 4,param_2);
    return;
  case 5:
    FUN_0098e411(unaff_RDI + 6,unaff_RDI + 4,puVar1,param_2);
    return;
  default:
    if (lVar8 < 0x1f0) {
      FUN_0098e53e(lVar8,param_2);
      return;
    }
    puVar13 = unaff_RDI + (uVar6 - (lVar8 >> 0x3f) & 0xfffffffffffffffe);
    if (lVar8 < 0x3e71) {
      iVar5 = FUN_0098e200(param_2,puVar1);
    }
    else {
      uVar9 = uVar6 + 3;
      if (-1 < (longlong)uVar6) {
        uVar9 = uVar6;
      }
      iVar5 = FUN_0098e411((uVar9 & 0x3ffffffffffffffc) * 4 + (longlong)puVar13,puVar13,puVar1,
                           param_2);
    }
    uVar6 = *unaff_RDI;
    puVar7 = puVar1;
    puVar10 = unaff_RSI + -4;
    if (*puVar13 <= uVar6) break;
    goto LAB_0098dfc4;
  }
  while (puVar7 = puVar10, unaff_RDI != puVar7) {
    puVar10 = puVar7 + -2;
    if (*puVar7 < *puVar13) goto LAB_0098df8e;
  }
  puVar7 = unaff_RDI + 2;
  if (*puVar1 <= uVar6) {
    if (puVar7 == puVar1) {
      return;
    }
    puVar7 = unaff_RDI + 4;
    while (puVar7[-2] <= uVar6) {
      puVar7 = puVar7 + 2;
      if (unaff_RSI == puVar7) {
        return;
      }
    }
    uVar6 = puVar7[-2];
    uVar9 = puVar7[-1];
    uVar2 = *puVar1;
    puVar7[-1] = unaff_RSI[-1];
    puVar7[-2] = uVar2;
    unaff_RSI[-1] = uVar9;
    *puVar1 = uVar6;
  }
  puVar10 = puVar1;
  if (puVar7 == puVar1) {
    return;
  }
  while( true ) {
    puVar13 = puVar7 + -2;
    do {
      puVar14 = puVar13;
      puVar13 = puVar14 + 2;
    } while (puVar14[2] <= *unaff_RDI);
    puVar7 = puVar14 + 4;
    do {
      puVar11 = puVar10;
      puVar10 = puVar11 + -2;
    } while (*unaff_RDI < puVar11[-2]);
    if (puVar10 <= puVar13) break;
    uVar6 = *puVar13;
    uVar9 = puVar14[3];
    uVar2 = *puVar10;
    puVar14[3] = puVar11[-1];
    *puVar13 = uVar2;
    puVar11[-1] = uVar9;
    *puVar10 = uVar6;
  }
  goto LAB_0098de26;
LAB_0098df8e:
  uVar6 = *unaff_RDI;
  uVar9 = unaff_RDI[1];
  uVar2 = *puVar7;
  unaff_RDI[1] = puVar7[1];
  *unaff_RDI = uVar2;
  puVar7[1] = uVar9;
  *puVar7 = uVar6;
  iVar5 = iVar5 + 1;
LAB_0098dfc4:
  puVar10 = unaff_RDI + 2;
  puVar14 = puVar10;
  if (puVar10 < puVar7) {
    while( true ) {
      puVar10 = puVar14 + -2;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + 2;
      } while (puVar11[2] < *puVar13);
      puVar14 = puVar11 + 4;
      do {
        puVar12 = puVar7;
        puVar7 = puVar12 + -2;
      } while (*puVar13 <= puVar12[-2]);
      if (puVar7 < puVar10) break;
      uVar6 = *puVar10;
      uVar9 = puVar11[3];
      uVar2 = *puVar7;
      puVar11[3] = puVar12[-1];
      *puVar10 = uVar2;
      puVar12[-1] = uVar9;
      *puVar7 = uVar6;
      iVar5 = iVar5 + 1;
      if (puVar13 == puVar10) {
        puVar13 = puVar7;
      }
    }
  }
  if ((puVar10 != puVar13) && (puVar7 = (ulonglong *)*puVar13, puVar7 < (ulonglong *)*puVar10)) {
    puVar7 = (ulonglong *)*puVar10;
    uVar6 = puVar10[1];
    uVar9 = *puVar13;
    puVar10[1] = puVar13[1];
    *puVar10 = uVar9;
    puVar13[1] = uVar6;
    *puVar13 = (ulonglong)puVar7;
    iVar5 = iVar5 + 1;
  }
  if (iVar5 == 0) {
    cVar3 = FUN_009b2010(puVar7,param_2);
    cVar4 = FUN_009b2010();
    if (cVar4 != '\0') goto LAB_0098e0f9;
    puVar13 = puVar10 + 2;
    if (cVar3 != '\0') goto LAB_0098de26;
  }
  lVar8 = (longlong)unaff_RSI - (longlong)puVar10;
  if (lVar8 <= (longlong)puVar10 - (longlong)unaff_RDI) {
    FUN_0098ddf5(lVar8,param_2);
    unaff_RSI = puVar10;
    goto LAB_0098de0c;
  }
  FUN_0098ddf5(lVar8,param_2);
  puVar13 = puVar10 + 2;
  goto LAB_0098de26;
LAB_0098e0f9:
  unaff_RSI = puVar10;
  if (cVar3 != '\0') {
switchD_0098e115_caseD_0:
    return;
  }
  goto LAB_0098de0c;
}



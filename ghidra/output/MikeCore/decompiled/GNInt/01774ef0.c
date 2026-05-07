// Function: FUN_01774ef0
// Address: 01774ef0
// Size: 528 bytes
// Class: GNInt


int FUN_01774ef0(float param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  char unaff_SIL;
  longlong *unaff_RDI;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 == 0) {
    iVar5 = (**(code **)(*unaff_RDI + 0x370))();
    iVar4 = (**(code **)(*unaff_RDI + 0x378))();
  }
  else {
    iVar5 = -1000;
    iVar4 = 1000;
  }
  fVar6 = (float)FUN_01774c90();
  fVar7 = (float)FUN_01774c90();
  while( true ) {
    while( true ) {
      while (iVar3 = iVar4, iVar4 = iVar5, fVar10 = fVar7, param_1 < fVar6) {
        fVar10 = (float)FUN_01774c90();
        fVar7 = fVar6;
        iVar5 = iVar4 * 2 - iVar3;
        fVar6 = fVar10;
      }
      if (param_1 <= fVar10) break;
      fVar7 = (float)FUN_01774c90();
      fVar6 = fVar10;
      iVar5 = iVar3;
      iVar4 = iVar3 * 2 - iVar4;
    }
    if (iVar3 <= iVar4 + 1) break;
    fVar8 = (fVar10 + fVar6) * DAT_0239011c;
    iVar2 = (iVar4 + iVar3) / 2;
    fVar9 = (float)FUN_01774c90();
    fVar7 = fVar9;
    iVar5 = iVar4;
    iVar4 = iVar2;
    if (fVar8 <= param_1) {
      fVar7 = fVar10;
      fVar6 = fVar9;
      iVar5 = iVar2;
      iVar4 = iVar3;
    }
  }
  iVar5 = iVar3;
  if (iVar3 == iVar4) {
    if (param_1 <= fVar6) {
      iVar4 = iVar3 + -1;
      fVar6 = (float)FUN_01774c90();
    }
    else {
      fVar10 = (float)FUN_01774c90();
      iVar5 = iVar3 + 1;
      iVar4 = iVar3;
    }
  }
  if (param_1 - fVar6 < fVar10 - param_1) {
    iVar5 = iVar4;
  }
  if ((unaff_SIL != '\0') && ((char)unaff_RDI[7] == '\0')) {
    iVar3 = (int)unaff_RDI[9] + iVar5;
    iVar4 = -(int)unaff_RDI[9];
    if (-1 < iVar3) {
      iVar4 = iVar5;
    }
    lVar1 = unaff_RDI[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar2 = *(int *)(lVar1 + 0xc);
    FUN_00d50b20();
    iVar5 = iVar4;
    if (iVar2 <= iVar3) {
      lVar1 = unaff_RDI[10];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      iVar5 = ~*(uint *)(unaff_RDI + 9) + *(int *)(lVar1 + 0xc);
      FUN_00d50b20();
    }
  }
  return iVar5;
}



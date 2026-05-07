// Function: FUN_01774c90
// Address: 01774c90
// Size: 523 bytes
// Class: GNInt


float FUN_01774c90(void)

{
  pthread_key_t pVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  pthread_key_t pVar7;
  uint uVar8;
  int unaff_ESI;
  longlong unaff_RDI;
  pthread_key_t pVar9;
  float fVar10;
  float fVar11;
  
  pVar7 = unaff_ESI + *(int *)(unaff_RDI + 0x48);
  if (*(char *)(unaff_RDI + 0x38) == '\0') {
    lVar4 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    iVar3 = *(int *)(lVar4 + 0xc);
    FUN_00d50b20();
    pVar1 = iVar3 - 1;
    pVar9 = 0;
    if (-1 < (int)pVar7) {
      pVar9 = pVar7;
    }
    uVar8 = pVar9 - pVar1;
    if ((int)pVar9 < iVar3) {
      uVar8 = (int)pVar7 >> 0x1f & pVar7;
      pVar1 = pVar9;
    }
    fVar11 = *(float *)(unaff_RDI + 0x60);
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_01779ec0();
    FUN_00d50b20();
    fVar11 = fVar11 + fVar10;
    if (uVar8 != 0) {
      fVar11 = fVar11 + (float)(int)uVar8 * DAT_023908e0;
    }
  }
  else {
    fVar10 = (float)FUN_017708f0();
    lVar4 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    iVar2 = *(int *)(lVar4 + 0xc);
    FUN_00d50b20();
    iVar3 = iVar2 + -1;
    fVar11 = *(float *)(unaff_RDI + 0x60);
    if ((int)pVar7 < 0) {
      iVar6 = 1 - (int)pVar7 / iVar3;
      pVar7 = pVar7 + iVar6 * iVar3;
      fVar11 = fVar11 - (float)iVar6 * fVar10;
    }
    for (; iVar2 <= (int)pVar7; pVar7 = (int)pVar7 % iVar3) {
      fVar11 = fVar11 + (float)((int)pVar7 / iVar3) * fVar10;
    }
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_01779ec0();
    FUN_00d50b20();
    fVar11 = fVar11 + fVar10;
  }
  return fVar11;
}



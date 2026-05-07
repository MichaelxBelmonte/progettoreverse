// Function: FUN_00bbfa40
// Address: 00bbfa40
// Size: 573 bytes
// Class: GNSoundFileChunk


void FUN_00bbfa40(void)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  
  FUN_00b341c0();
  lVar10 = FUN_00b335d0();
  unaff_RDI[0x1b] = lVar10;
  dVar11 = (double)FUN_00b335d0();
  unaff_RDI[0x1c] = (longlong)dVar11;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x1d] = (longlong)((double)unaff_RDI[0x1b] / dVar11);
  uVar4 = FUN_00b33120();
  iVar5 = (**(code **)(*unaff_RDI + 0x3a8))();
  iVar6 = 1;
  do {
    iVar3 = iVar6 * 2;
    bVar2 = iVar6 <= iVar5;
    iVar6 = iVar3;
  } while (bVar2);
  *(int *)(unaff_RDI + 0x15) = iVar3;
  *(int *)((longlong)unaff_RDI + 0xac) = iVar3 + -1;
  lVar10 = FUN_00e83010();
  unaff_RDI[0x13] = lVar10;
  uVar9 = (ulonglong)uVar4;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI[0x13] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  dVar11 = (double)unaff_RDI[0x1b];
  dVar1 = (double)unaff_RDI[0x1c];
  lVar10 = FUN_00e83010();
  unaff_RDI[0x19] = lVar10;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI[0x19] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  iVar6 = 1;
  do {
    iVar3 = iVar6 * 2;
    bVar2 = iVar6 <= (int)(((double)iVar5 * dVar11) / dVar1) + 3;
    iVar6 = iVar3;
  } while (bVar2);
  *(int *)(unaff_RDI + 0x18) = iVar3;
  *(int *)((longlong)unaff_RDI + 0xc4) = iVar3 + -1;
  lVar10 = FUN_00e83010();
  unaff_RDI[0x16] = lVar10;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI[0x16] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  return;
}



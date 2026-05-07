// Function: FUN_008d7c1a
// Address: 008d7c1a
// Size: 650 bytes
// Class: MUSpectrumShaper
// String references:
//   "initializationVector"
//   "encryptionMode"
//   "version"
//   "SymmetricKey"
//   "keyAlgorithm"
//   "encryptionPadding"
//   "keyData"


int FUN_008d7c1a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,8);
  iVar3 = (**(code **)(*unaff_RSI + 0x90))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(0xb,8);
  iVar6 = (**(code **)(*unaff_RSI + 0x90))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(0xc,8);
  iVar9 = (**(code **)(*unaff_RSI + 0x90))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
  if (*(char *)(unaff_RDI + 0x4b) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0xd,8);
    iVar2 = (**(code **)(*unaff_RSI + 0x90))();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar10 = iVar1 + iVar10 + iVar2 + iVar3;
  }
  if (*(char *)(unaff_RDI + 0x4c) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x15,0xf);
    iVar2 = (**(code **)(*unaff_RSI + 0x58))();
    iVar2 = iVar1 + iVar10 + iVar2;
    for (lVar11 = *(longlong *)(unaff_RDI + 0x18); lVar11 != *(longlong *)(unaff_RDI + 0x20);
        lVar11 = lVar11 + 1) {
      iVar1 = (**(code **)(*unaff_RSI + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0x60))();
    iVar10 = (**(code **)(*unaff_RSI + 0x38))();
    iVar10 = iVar1 + iVar2 + iVar10;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x16,0xf);
  iVar2 = (**(code **)(*unaff_RSI + 0x58))();
  iVar2 = iVar1 + iVar10 + iVar2;
  for (lVar11 = *(longlong *)(unaff_RDI + 0x30); lVar11 != *(longlong *)(unaff_RDI + 0x38);
      lVar11 = lVar11 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar2 = iVar2 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar3 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x40))();
  iVar5 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5;
}



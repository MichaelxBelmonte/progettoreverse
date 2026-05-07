// Function: FUN_008c37ca
// Address: 008c37ca
// Size: 569 bytes
// Class: GNString
// String references:
//   "releaseDate"
//   "authChain"
//   "decryptionAssistData"
//   "GetContentDecryptionKeyInput"
//   "randomTransportKey"
//   "challengeCloud"


int FUN_008c37ca(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xc);
  iVar3 = FUN_008f8624();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,0xf);
  iVar6 = (**(code **)(*unaff_RSI + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar9 = *(longlong *)(unaff_RDI + 0x290); lVar9 != *(longlong *)(unaff_RDI + 0x298);
      lVar9 = lVar9 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(3,0xc);
  iVar4 = FUN_009119ce();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(4,0xf);
  iVar8 = (**(code **)(*unaff_RSI + 0x58))();
  iVar8 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5 + iVar7 + iVar8;
  for (lVar9 = *(longlong *)(unaff_RDI + 0x4e0); lVar9 != *(longlong *)(unaff_RDI + 0x4e8);
      lVar9 = lVar9 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar8 = iVar8 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(5,10);
  iVar4 = (**(code **)(*unaff_RSI + 0x98))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar6 = (**(code **)(*unaff_RSI + 0x40))();
  iVar7 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar8 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
}



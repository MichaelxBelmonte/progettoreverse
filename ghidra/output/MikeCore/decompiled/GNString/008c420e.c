// Function: FUN_008c420e
// Address: 008c420e
// Size: 649 bytes
// Class: GNString
// String references:
//   "initializationVector"
//   "version"
//   "contentKey"
//   "GetContentDecryptionKeyReturn"
//   "outRandomTransportKey"
//   "responseCloud"


int FUN_008c420e(void)

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
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xf);
  iVar3 = (**(code **)(*unaff_RSI + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (lVar9 = *(longlong *)(unaff_RDI + 8); lVar9 != *(longlong *)(unaff_RDI + 0x10);
      lVar9 = lVar9 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar3 = iVar3 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(2,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5;
  for (lVar9 = *(longlong *)(unaff_RDI + 0x20); lVar9 != *(longlong *)(unaff_RDI + 0x28);
      lVar9 = lVar9 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(3,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (lVar9 = *(longlong *)(unaff_RDI + 0x38); lVar9 != *(longlong *)(unaff_RDI + 0x40);
      lVar9 = lVar9 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(4,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (lVar9 = *(longlong *)(unaff_RDI + 0x50); lVar9 != *(longlong *)(unaff_RDI + 0x58);
      lVar9 = lVar9 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(&DAT_00002710,8);
  iVar4 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x40))();
  iVar8 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4 + iVar6 + iVar7 + iVar8;
}



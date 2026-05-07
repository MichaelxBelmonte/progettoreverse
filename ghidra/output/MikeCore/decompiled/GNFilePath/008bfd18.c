// Function: FUN_008bfd18
// Address: 008bfd18
// Size: 508 bytes
// Class: GNFilePath
// String references:
//   "authChain"
//   "clientPasswordDigest"
//   "callersPid"
//   "FindStorageRecordsInput"
//   "storageIds"


int FUN_008bfd18(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
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
  for (lVar7 = *(longlong *)(unaff_RDI + 0x290); lVar7 != *(longlong *)(unaff_RDI + 0x298);
      lVar7 = lVar7 + 4) {
    iVar1 = (**(code **)(*unaff_RSI + 0x90))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(3,10);
  iVar4 = (**(code **)(*unaff_RSI + 0x98))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5;
  if (*(char *)(unaff_RDI + 0x2cb) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0xc45,0xf);
    iVar2 = (**(code **)(*unaff_RSI + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar7 = *(longlong *)(unaff_RDI + 0x2b0); lVar7 != *(longlong *)(unaff_RDI + 0x2b8);
        lVar7 = lVar7 + 1) {
      iVar1 = (**(code **)(*unaff_RSI + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0x60))();
    iVar5 = (**(code **)(*unaff_RSI + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x40))();
  iVar2 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2;
}



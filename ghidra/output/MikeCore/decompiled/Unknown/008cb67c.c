// Function: FUN_008cb67c
// Address: 008cb67c
// Size: 504 bytes
// Class: Unknown
// String references:
//   "version"
//   "executingOnTheRemoteServer"
//   "checksum"
//   "SendEncryptedCommandReturn"
//   "encryptedResult"
//   "resultSize"


int FUN_008cb67c(void)

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
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xf);
  iVar3 = (**(code **)(*unaff_RSI + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (lVar18 = *(longlong *)(unaff_RDI + 8); lVar18 != *(longlong *)(unaff_RDI + 0x10);
      lVar18 = lVar18 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar3 = iVar3 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(2,8);
  iVar5 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(3,8);
  iVar8 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0xc45,2);
  iVar11 = (**(code **)(*unaff_RSI + 0x78))();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(&DAT_00002710,8);
  iVar14 = (**(code **)(*unaff_RSI + 0x90))();
  iVar15 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = (**(code **)(*unaff_RSI + 0x40))();
  iVar17 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar3 + iVar2 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17;
}



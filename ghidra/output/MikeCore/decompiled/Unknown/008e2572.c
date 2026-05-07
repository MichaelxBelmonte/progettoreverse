// Function: FUN_008e2572
// Address: 008e2572
// Size: 888 bytes
// Class: Unknown
// String references:
//   "version"
//   "minimumVersion"
//   "certificateChain"
//   "nonce"
//   "SignerInfo"
//   "signerId"
//   "binaryId"
//   "platformId"
//   "signingToolInfo"
//   "dateSigned"
//   "protectionInfo"


int FUN_008e2572(void)

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
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xf);
  iVar3 = (**(code **)(*unaff_RSI + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (lVar25 = *(longlong *)(unaff_RDI + 8); lVar25 != *(longlong *)(unaff_RDI + 0x10);
      lVar25 = lVar25 + 1) {
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
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(4,0xc);
  iVar11 = FUN_00904d42();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(5,0xc);
  iVar14 = FUN_00904d42();
  iVar15 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = (**(code **)(*unaff_RSI + 0x30))(6,0xc);
  iVar17 = FUN_008e11ee();
  iVar18 = (**(code **)(*unaff_RSI + 0x38))();
  iVar19 = (**(code **)(*unaff_RSI + 0x30))(7,0xc);
  iVar20 = FUN_00905fee();
  iVar21 = (**(code **)(*unaff_RSI + 0x38))();
  iVar22 = (**(code **)(*unaff_RSI + 0x30))(8,0xb);
  iVar23 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar24 = (**(code **)(*unaff_RSI + 0x38))();
  iVar24 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24;
  if (*(char *)(unaff_RDI + 0x750) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(9,0xc);
    iVar2 = FUN_00905790();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar24 = iVar1 + iVar24 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x30))(10,0xc);
  iVar2 = FUN_008d90e2();
  iVar3 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x40))();
  iVar5 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar24 + iVar2 + iVar3 + iVar4 + iVar5;
}



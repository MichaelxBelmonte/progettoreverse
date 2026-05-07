// Function: FUN_008c8a68
// Address: 008c8a68
// Size: 697 bytes
// Class: GNString
// String references:
//   "encryptionAlgorithmId"
//   "client_CallTime"
//   "client_EphemeralPublicKeyX"
//   "client_EphemeralPublicKeyY"
//   "pkStandardId"
//   "hashId"
//   "pid"
//   "OpenQuicklyEncryptedChannelInput"


int FUN_008c8a68(void)

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
  longlong lVar21;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xf);
  iVar3 = (**(code **)(*unaff_RSI + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (lVar21 = *(longlong *)(unaff_RDI + 8); lVar21 != *(longlong *)(unaff_RDI + 0x10);
      lVar21 = lVar21 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar3 = iVar3 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(2,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5;
  for (lVar21 = *(longlong *)(unaff_RDI + 0x20); lVar21 != *(longlong *)(unaff_RDI + 0x28);
      lVar21 = lVar21 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(10,10);
  iVar4 = (**(code **)(*unaff_RSI + 0x98))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x14,0xb);
  iVar8 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0x1e,8);
  iVar11 = (**(code **)(*unaff_RSI + 0x90))();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(0x1f,8);
  iVar14 = (**(code **)(*unaff_RSI + 0x90))();
  iVar15 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = (**(code **)(*unaff_RSI + 0x30))(0x20,8);
  iVar17 = (**(code **)(*unaff_RSI + 0x90))();
  iVar18 = (**(code **)(*unaff_RSI + 0x38))();
  iVar19 = (**(code **)(*unaff_RSI + 0x40))();
  iVar20 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20;
}



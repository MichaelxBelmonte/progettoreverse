// Function: FUN_008c7d5c
// Address: 008c7d5c
// Size: 994 bytes
// Class: GNString
// String references:
//   "version"
//   "signatureR"
//   "signatureS"
//   "channelId"
//   "OpenEncryptedChannelReturn"
//   "licenseD_CallTime"
//   "licenseD_EphemeralPublicKeyX"
//   "licenseD_EphemeralPublicKeyY"
//   "licenseD_CertChain"
//   "hashTruncationMethod"


int FUN_008c7d5c(void)

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
  longlong lVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xb);
  iVar3 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(10,0xf);
  iVar6 = (**(code **)(*unaff_RSI + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar12 = *(longlong *)(unaff_RDI + 0x20); lVar12 != *(longlong *)(unaff_RDI + 0x28);
      lVar12 = lVar12 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0xb,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4;
  for (lVar12 = *(longlong *)(unaff_RDI + 0x38); lVar12 != *(longlong *)(unaff_RDI + 0x40);
      lVar12 = lVar12 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x14,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (lVar12 = *(longlong *)(unaff_RDI + 0x50); lVar12 != *(longlong *)(unaff_RDI + 0x58);
      lVar12 = lVar12 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x1e,8);
  iVar4 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x28,8);
  iVar8 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0x29,0xf);
  iVar11 = (**(code **)(*unaff_RSI + 0x58))();
  iVar11 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11;
  for (lVar12 = *(longlong *)(unaff_RDI + 0x70); lVar12 != *(longlong *)(unaff_RDI + 0x78);
      lVar12 = lVar12 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar11 = iVar11 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x2a,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar11 + iVar2 + iVar3 + iVar4;
  for (lVar12 = *(longlong *)(unaff_RDI + 0x88); lVar12 != *(longlong *)(unaff_RDI + 0x90);
      lVar12 = lVar12 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(&DAT_00002710,8);
  iVar5 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x40))();
  iVar8 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8;
}



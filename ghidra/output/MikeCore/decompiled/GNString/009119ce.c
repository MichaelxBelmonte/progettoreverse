// Function: FUN_009119ce
// Address: 009119ce
// Size: 3761 bytes
// Class: GNString
// String references:
//   "algorithmIdContent"
//   "blocksSkip"
//   "validLocations"
//   "DecryptionAssistData"
//   "keyVerificationData"
//   "algorithmIdIlok1"
//   "storageIdIlok1"
//   "encryptedContentKeyIlok1"
//   "encryptedInitializationVectorIlok1"
//   "obfuscatedCommunicationKeyIlok1"
//   "sessionKeyIlok1"
//   "quickAlgorithmIdIlok1"
//   "quickChallengeIlok1"
//   "quickContentKeyIlok1"
//   "quickInitializationVectorIlok1"
//   "algorithmIdIlok2"
//   "storageIdIlok2"
//   "encryptedContentKeyIlok2"
//   "encryptedInitializationVectorIlok2"
//   "obfuscatedCommunicationKeyIlok2"
//   ... +14 more


int FUN_009119ce(void)

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
  longlong lVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,8);
  iVar3 = (**(code **)(*unaff_RSI + 0x90))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,8);
  iVar6 = (**(code **)(*unaff_RSI + 0x90))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(3,8);
  iVar9 = (**(code **)(*unaff_RSI + 0x90))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(4,0xf);
  iVar12 = (**(code **)(*unaff_RSI + 0x58))();
  iVar12 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x18); lVar13 != *(longlong *)(unaff_RDI + 0x20);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar12 = iVar12 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x14,8);
  iVar4 = (**(code **)(*unaff_RSI + 0x90))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar6 = (**(code **)(*unaff_RSI + 0x30))(0x15,8);
  iVar7 = (**(code **)(*unaff_RSI + 0x90))();
  iVar8 = (**(code **)(*unaff_RSI + 0x38))();
  iVar9 = (**(code **)(*unaff_RSI + 0x30))(0x16,0xf);
  iVar10 = (**(code **)(*unaff_RSI + 0x58))();
  iVar10 = iVar1 + iVar12 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x38); lVar13 != *(longlong *)(unaff_RDI + 0x40);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar10 = iVar10 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x17,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar10 + iVar2 + iVar3 + iVar4;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x50); lVar13 != *(longlong *)(unaff_RDI + 0x58);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x18,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x68); lVar13 != *(longlong *)(unaff_RDI + 0x70);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x19,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x80); lVar13 != *(longlong *)(unaff_RDI + 0x88);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x1e,8);
  iVar5 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x1f,0xf);
  iVar8 = (**(code **)(*unaff_RSI + 0x58))();
  iVar8 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8;
  for (lVar13 = *(longlong *)(unaff_RDI + 0xa0); lVar13 != *(longlong *)(unaff_RDI + 0xa8);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar8 = iVar8 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x20,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar8 + iVar2 + iVar3 + iVar4;
  for (lVar13 = *(longlong *)(unaff_RDI + 0xb8); lVar13 != *(longlong *)(unaff_RDI + 0xc0);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x21,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (lVar13 = *(longlong *)(unaff_RDI + 0xd0); lVar13 != *(longlong *)(unaff_RDI + 0xd8);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x28,8);
  iVar4 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x29,8);
  iVar8 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0x2a,0xf);
  iVar11 = (**(code **)(*unaff_RSI + 0x58))();
  iVar11 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11;
  for (lVar13 = *(longlong *)(unaff_RDI + 0xf0); lVar13 != *(longlong *)(unaff_RDI + 0xf8);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar11 = iVar11 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x2b,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar11 + iVar2 + iVar3 + iVar4;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x108); lVar13 != *(longlong *)(unaff_RDI + 0x110);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x2c,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x120); lVar13 != *(longlong *)(unaff_RDI + 0x128);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x2d,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x138); lVar13 != *(longlong *)(unaff_RDI + 0x140);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x2e,8);
  iVar5 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x2f,0xf);
  iVar8 = (**(code **)(*unaff_RSI + 0x58))();
  iVar8 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x158); lVar13 != *(longlong *)(unaff_RDI + 0x160);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar8 = iVar8 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x3c,8);
  iVar4 = (**(code **)(*unaff_RSI + 0x90))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar6 = (**(code **)(*unaff_RSI + 0x30))(0x3d,8);
  iVar7 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0x3e,0xf);
  iVar11 = (**(code **)(*unaff_RSI + 0x58))();
  iVar11 = iVar1 + iVar8 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar9 + iVar10 + iVar11;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x178); lVar13 != *(longlong *)(unaff_RDI + 0x180);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar11 = iVar11 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x3f,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar11 + iVar2 + iVar3 + iVar4;
  for (lVar13 = *(longlong *)(unaff_RDI + 400); lVar13 != *(longlong *)(unaff_RDI + 0x198);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x50,8);
  iVar5 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x51,8);
  iVar8 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0x52,0xf);
  iVar11 = (**(code **)(*unaff_RSI + 0x58))();
  iVar11 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x1b0); lVar13 != *(longlong *)(unaff_RDI + 0x1b8);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar11 = iVar11 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x53,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar11 + iVar2 + iVar3 + iVar4;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x1c8); lVar13 != *(longlong *)(unaff_RDI + 0x1d0);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x54,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x1e0); lVar13 != *(longlong *)(unaff_RDI + 0x1e8);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x55,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (lVar13 = *(longlong *)(unaff_RDI + 0x1f8); lVar13 != *(longlong *)(unaff_RDI + 0x200);
      lVar13 = lVar13 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(100,8);
  iVar5 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x40))();
  iVar8 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8;
}



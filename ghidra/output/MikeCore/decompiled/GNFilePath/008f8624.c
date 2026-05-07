// Function: FUN_008f8624
// Address: 008f8624
// Size: 1855 bytes
// Class: GNFilePath
// String references:
//   "serialNumber"
//   "computerTime"
//   "locationType"
//   "sharedLicenseInfo"
//   "serialNumberGuid"
//   "authorized"
//   "AuthChain"
//   "auths"
//   "relativeTimeNeedsStarting"
//   "chainRanking"
//   "authChainVerificationTime"
//   "remoteLocation"
//   "overseerId"
//   "remoteServer"
//   "deviceType"
//   "standardLocation"
//   "authCompatibleLocationType"
//   "authCompatibleInternalRef"
//   "sharedLicenseStats"
//   "clientsWithCurrentLeases"
//   ... +0 more


int FUN_008f8624(void)

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
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  longlong lVar34;
  longlong *plVar35;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xf);
  iVar3 = (**(code **)(*unaff_RSI + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (plVar35 = *(longlong **)(unaff_RDI + 8); plVar35 != *(longlong **)(unaff_RDI + 0x10);
      plVar35 = plVar35 + 0x72) {
    iVar1 = (**(code **)(*plVar35 + 0x18))();
    iVar3 = iVar3 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(10,2);
  iVar5 = (**(code **)(*unaff_RSI + 0x78))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0xb,2);
  iVar8 = (**(code **)(*unaff_RSI + 0x78))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0xc,8);
  iVar11 = (**(code **)(*unaff_RSI + 0x90))();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(0xd,0xb);
  iVar14 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar15 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = (**(code **)(*unaff_RSI + 0x30))(0xe,0xb);
  iVar17 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar18 = (**(code **)(*unaff_RSI + 0x38))();
  iVar19 = (**(code **)(*unaff_RSI + 0x30))(0x14,10);
  iVar20 = (**(code **)(*unaff_RSI + 0x98))();
  iVar21 = (**(code **)(*unaff_RSI + 0x38))();
  iVar22 = (**(code **)(*unaff_RSI + 0x30))(0x15,10);
  iVar23 = (**(code **)(*unaff_RSI + 0x98))();
  iVar24 = (**(code **)(*unaff_RSI + 0x38))();
  iVar25 = (**(code **)(*unaff_RSI + 0x30))(0x16,0xb);
  iVar26 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar27 = (**(code **)(*unaff_RSI + 0x38))();
  iVar28 = (**(code **)(*unaff_RSI + 0x30))(0x17,2);
  iVar29 = (**(code **)(*unaff_RSI + 0x78))();
  iVar30 = (**(code **)(*unaff_RSI + 0x38))();
  iVar31 = (**(code **)(*unaff_RSI + 0x30))(0x18,8);
  iVar32 = (**(code **)(*unaff_RSI + 0x90))();
  iVar33 = (**(code **)(*unaff_RSI + 0x38))();
  iVar33 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
           iVar32 + iVar33;
  if (*(char *)(unaff_RDI + 0x27b) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x19,0xc);
    iVar2 = FUN_008f05ea();
    iVar3 = (**(code **)(*unaff_RSI + 0x38))();
    iVar33 = iVar1 + iVar33 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x1e,8);
  iVar2 = (**(code **)(*unaff_RSI + 0x90))();
  iVar3 = (**(code **)(*unaff_RSI + 0x38))();
  iVar4 = (**(code **)(*unaff_RSI + 0x30))(0x1f,2);
  iVar5 = (**(code **)(*unaff_RSI + 0x78))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x28,10);
  iVar8 = (**(code **)(*unaff_RSI + 0x98))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0x29,0xf);
  iVar11 = (**(code **)(*unaff_RSI + 0x58))();
  iVar11 = iVar1 + iVar33 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11;
  for (lVar34 = *(longlong *)(unaff_RDI + 0x1a8); lVar34 != *(longlong *)(unaff_RDI + 0x1b0);
      lVar34 = lVar34 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar11 = iVar11 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar2 = iVar1 + iVar11 + iVar2;
  if (*(char *)(unaff_RDI + 0x280) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x32,0xc);
    iVar3 = FUN_008f16c6();
    iVar4 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(unaff_RDI + 0x281) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x33,0xf);
    iVar3 = (**(code **)(*unaff_RSI + 0x58))();
    iVar3 = iVar1 + iVar2 + iVar3;
    for (plVar35 = *(longlong **)(unaff_RDI + 0x240); plVar35 != *(longlong **)(unaff_RDI + 0x248);
        plVar35 = plVar35 + 0xb) {
      iVar1 = (**(code **)(*plVar35 + 0x18))();
      iVar3 = iVar3 + iVar1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0x60))();
    iVar2 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar3 + iVar2;
  }
  if (*(char *)(unaff_RDI + 0x282) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0x34,0xf);
    iVar3 = (**(code **)(*unaff_RSI + 0x58))();
    iVar3 = iVar1 + iVar2 + iVar3;
    for (plVar35 = *(longlong **)(unaff_RDI + 600); plVar35 != *(longlong **)(unaff_RDI + 0x260);
        plVar35 = plVar35 + 0x30) {
      iVar1 = (**(code **)(*plVar35 + 0x18))();
      iVar3 = iVar3 + iVar1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0x60))();
    iVar2 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar3 + iVar2;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x40))();
  iVar3 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar2 + iVar3;
}



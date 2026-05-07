// Function: FUN_00a70c66
// Address: 00a70c66
// Size: 1035 bytes
// Class: Unknown
// String references:
//   "data"
//   "format"
//   "modDate"
//   "uuid"
//   "chainStructure"
//   "insertDate"
//   "signerSerialNumber"
//   "signerNotAfterDate"
//   "signerNotBeforeDate"
//   "signerParticipantGuid"
//   "selfRelation"
//   "dirty"
//   "LsCertificateChainWire"


int FUN_00a70c66(void)

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
  longlong lVar30;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xc);
  iVar3 = FUN_00aa9c4e();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,2);
  iVar6 = (**(code **)(*unaff_RSI + 0x78))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(0xb,0xb);
  iVar9 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(0xc,0xf);
  iVar12 = (**(code **)(*unaff_RSI + 0x58))();
  iVar12 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12;
  for (lVar30 = *(longlong *)(unaff_RDI + 0x48); lVar30 != *(longlong *)(unaff_RDI + 0x50);
      lVar30 = lVar30 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar12 = iVar12 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0xd,0xb);
  iVar4 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar6 = (**(code **)(*unaff_RSI + 0x30))(0xe,0xb);
  iVar7 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar8 = (**(code **)(*unaff_RSI + 0x38))();
  iVar9 = (**(code **)(*unaff_RSI + 0x30))(0xf,0xb);
  iVar10 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar11 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(0x10,0xb);
  iVar14 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar15 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = (**(code **)(*unaff_RSI + 0x30))(0x11,0xb);
  iVar17 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar18 = (**(code **)(*unaff_RSI + 0x38))();
  iVar19 = (**(code **)(*unaff_RSI + 0x30))(0x12,0xb);
  iVar20 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar21 = (**(code **)(*unaff_RSI + 0x38))();
  iVar22 = (**(code **)(*unaff_RSI + 0x30))(0x13,0xb);
  iVar23 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar24 = (**(code **)(*unaff_RSI + 0x38))();
  iVar25 = (**(code **)(*unaff_RSI + 0x30))(0x14,0xb);
  iVar26 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar27 = (**(code **)(*unaff_RSI + 0x38))();
  iVar28 = (**(code **)(*unaff_RSI + 0x40))();
  iVar29 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar12 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
         iVar11 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
         iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29;
}



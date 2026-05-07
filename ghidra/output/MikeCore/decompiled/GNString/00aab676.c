// Function: FUN_00aab676
// Address: 00aab676
// Size: 926 bytes
// Class: GNString
// String references:
//   "modDate"
//   "uuid"
//   "digestMethod"
//   "signedInfo"
//   "insertDate"
//   "digestValue"
//   "aaSigningEntropy"
//   "reference"
//   "selfRelation"
//   "dirty"
//   "LsSignedDigestWire"


int FUN_00aab676(void)

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
  longlong *plVar19;
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
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(0xb,8);
  iVar9 = (**(code **)(*unaff_RSI + 0x90))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(0xc,0xb);
  iVar12 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0xd,0xf);
  iVar15 = (**(code **)(*unaff_RSI + 0x58))();
  iVar15 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  for (lVar18 = *(longlong *)(unaff_RDI + 0x48); lVar18 != *(longlong *)(unaff_RDI + 0x50);
      lVar18 = lVar18 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar15 = iVar15 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0xe,0xb);
  iVar4 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar6 = (**(code **)(*unaff_RSI + 0x30))(0xf,0xb);
  iVar7 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar8 = (**(code **)(*unaff_RSI + 0x38))();
  iVar9 = (**(code **)(*unaff_RSI + 0x30))(0x10,0xb);
  iVar10 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar11 = (**(code **)(*unaff_RSI + 0x38))();
  iVar12 = (**(code **)(*unaff_RSI + 0x30))(0x11,0xb);
  iVar13 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar14 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = (**(code **)(*unaff_RSI + 0x30))(0x12,0xf);
  iVar17 = (**(code **)(*unaff_RSI + 0x58))();
  iVar17 = iVar1 + iVar15 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11 + iVar12 + iVar13 + iVar14 + iVar16 + iVar17;
  for (plVar19 = *(longlong **)(unaff_RDI + 0xc0); plVar19 != *(longlong **)(unaff_RDI + 200);
      plVar19 = plVar19 + 4) {
    iVar1 = (**(code **)(*plVar19 + 0x18))();
    iVar17 = iVar17 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x40))();
  iVar4 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar17 + iVar2 + iVar3 + iVar4;
}



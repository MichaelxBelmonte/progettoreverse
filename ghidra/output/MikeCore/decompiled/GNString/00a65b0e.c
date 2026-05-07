// Function: FUN_00a65b0e
// Address: 00a65b0e
// Size: 1147 bytes
// Class: GNString
// String references:
//   "modDate"
//   "parent"
//   "uuid"
//   "key"
//   "insertDate"
//   "valueBinary"
//   "valueDate"
//   "valueInt"
//   "valueString"
//   "selfRelation"
//   "dirty"
//   "LsArrayEntryWire"
//   "valueArray"


int FUN_00a65b0e(void)

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
  longlong lVar22;
  longlong *plVar23;
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
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(0xc,0xb);
  iVar12 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0xd,0xb);
  iVar15 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar16 = (**(code **)(*unaff_RSI + 0x38))();
  iVar17 = (**(code **)(*unaff_RSI + 0x30))(0xe,0xb);
  iVar18 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar19 = (**(code **)(*unaff_RSI + 0x38))();
  iVar20 = (**(code **)(*unaff_RSI + 0x30))(0xf,0xf);
  iVar21 = (**(code **)(*unaff_RSI + 0x58))();
  iVar21 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21;
  for (lVar22 = *(longlong *)(unaff_RDI + 0x90); lVar22 != *(longlong *)(unaff_RDI + 0x98);
      lVar22 = lVar22 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar21 = iVar21 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x10,0xb);
  iVar4 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar6 = (**(code **)(*unaff_RSI + 0x30))(0x11,8);
  iVar7 = (**(code **)(*unaff_RSI + 0x90))();
  iVar8 = (**(code **)(*unaff_RSI + 0x38))();
  iVar9 = (**(code **)(*unaff_RSI + 0x30))(0x12,0xb);
  iVar10 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar11 = (**(code **)(*unaff_RSI + 0x38))();
  iVar12 = (**(code **)(*unaff_RSI + 0x30))(0x13,0xf);
  iVar13 = (**(code **)(*unaff_RSI + 0x58))();
  iVar13 = iVar1 + iVar21 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11 + iVar12 + iVar13;
  for (plVar23 = *(longlong **)(unaff_RDI + 0xe0); plVar23 != *(longlong **)(unaff_RDI + 0xe8);
      plVar23 = plVar23 + 4) {
    iVar1 = (**(code **)(*plVar23 + 0x18))();
    iVar13 = iVar13 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x14,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar13 + iVar2 + iVar3 + iVar4;
  for (plVar23 = *(longlong **)(unaff_RDI + 0xf8); plVar23 != *(longlong **)(unaff_RDI + 0x100);
      plVar23 = plVar23 + 4) {
    iVar1 = (**(code **)(*plVar23 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x40))();
  iVar5 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
}



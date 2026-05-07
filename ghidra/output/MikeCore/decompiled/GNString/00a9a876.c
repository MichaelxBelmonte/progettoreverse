// Function: FUN_00a9a876
// Address: 00a9a876
// Size: 1547 bytes
// Class: GNString
// String references:
//   "modDate"
//   "uuid"
//   "storageId"
//   "writeProperties"
//   "timeLimited"
//   "countLimited"
//   "dataReadOnly"
//   "dataWritable"
//   "writtenOnce"
//   "sizeLimit"
//   "flagsReadOnly"
//   "insertDate"
//   "aaSigningEntropy"
//   "flagsWritable"
//   "selfRelation"
//   "dirty"
//   "authorization"
//   "LsDeveloperBlockWire"


int FUN_00a9a876(void)

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
  int iVar34;
  int iVar35;
  longlong lVar36;
  longlong *plVar37;
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
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(0xc,2);
  iVar12 = (**(code **)(*unaff_RSI + 0x78))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(0xd,0xf);
  iVar15 = (**(code **)(*unaff_RSI + 0x58))();
  iVar15 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  for (lVar36 = *(longlong *)(unaff_RDI + 0x38); lVar36 != *(longlong *)(unaff_RDI + 0x40);
      lVar36 = lVar36 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar15 = iVar15 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0xe,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar15 + iVar2 + iVar3 + iVar4;
  for (lVar36 = *(longlong *)(unaff_RDI + 0x50); lVar36 != *(longlong *)(unaff_RDI + 0x58);
      lVar36 = lVar36 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0xf,8);
  iVar5 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x10,8);
  iVar8 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0x11,0xb);
  iVar11 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(0x12,0xb);
  iVar14 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar15 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = (**(code **)(*unaff_RSI + 0x30))(0x13,8);
  iVar17 = (**(code **)(*unaff_RSI + 0x90))();
  iVar18 = (**(code **)(*unaff_RSI + 0x38))();
  iVar19 = (**(code **)(*unaff_RSI + 0x30))(0x14,8);
  iVar20 = (**(code **)(*unaff_RSI + 0x90))();
  iVar21 = (**(code **)(*unaff_RSI + 0x38))();
  iVar22 = (**(code **)(*unaff_RSI + 0x30))(0x15,2);
  iVar23 = (**(code **)(*unaff_RSI + 0x78))();
  iVar24 = (**(code **)(*unaff_RSI + 0x38))();
  iVar25 = (**(code **)(*unaff_RSI + 0x30))(0x16,0xb);
  iVar26 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar27 = (**(code **)(*unaff_RSI + 0x38))();
  iVar28 = (**(code **)(*unaff_RSI + 0x30))(0x17,8);
  iVar29 = (**(code **)(*unaff_RSI + 0x90))();
  iVar30 = (**(code **)(*unaff_RSI + 0x38))();
  iVar31 = (**(code **)(*unaff_RSI + 0x30))(0x18,2);
  iVar32 = (**(code **)(*unaff_RSI + 0x78))();
  iVar33 = (**(code **)(*unaff_RSI + 0x38))();
  iVar34 = (**(code **)(*unaff_RSI + 0x30))(0x19,0xf);
  iVar35 = (**(code **)(*unaff_RSI + 0x58))();
  iVar35 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
           iVar32 + iVar33 + iVar34 + iVar35;
  for (plVar37 = *(longlong **)(unaff_RDI + 0xd0); plVar37 != *(longlong **)(unaff_RDI + 0xd8);
      plVar37 = plVar37 + 4) {
    iVar1 = (**(code **)(*plVar37 + 0x18))();
    iVar35 = iVar35 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x40))();
  iVar4 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar35 + iVar2 + iVar3 + iVar4;
}



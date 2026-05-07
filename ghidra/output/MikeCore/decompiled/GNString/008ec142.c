// Function: FUN_008ec142
// Address: 008ec142
// Size: 1436 bytes
// Class: GNString
// String references:
//   "version"
//   "storageId"
//   "writeProperties"
//   "internalReference"
//   "validNow"
//   "dataSizeLimit"
//   "decryptOkay"
//   "timeLimited"
//   "countLimited"
//   "SecretDataRecord"
//   "secretData"
//   "nonceData"
//   "typeOfSecret"
//   "algorithmId"
//   "encryptedWithId"
//   "intendedUseOnly"


int FUN_008ec142(void)

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
  int iVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,8);
  iVar3 = (**(code **)(*unaff_RSI + 0x90))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,0xf);
  iVar6 = (**(code **)(*unaff_RSI + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar39 = *(longlong *)(unaff_RDI + 0x10); lVar39 != *(longlong *)(unaff_RDI + 0x18);
      lVar39 = lVar39 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x14,0xf);
  iVar4 = (**(code **)(*unaff_RSI + 0x58))();
  iVar4 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4;
  for (lVar39 = *(longlong *)(unaff_RDI + 0x28); lVar39 != *(longlong *)(unaff_RDI + 0x30);
      lVar39 = lVar39 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x15,0xf);
  iVar5 = (**(code **)(*unaff_RSI + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (lVar39 = *(longlong *)(unaff_RDI + 0x40); lVar39 != *(longlong *)(unaff_RDI + 0x48);
      lVar39 = lVar39 + 1) {
    iVar1 = (**(code **)(*unaff_RSI + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x16,8);
  iVar4 = (**(code **)(*unaff_RSI + 0x90))();
  iVar6 = (**(code **)(*unaff_RSI + 0x38))();
  iVar7 = (**(code **)(*unaff_RSI + 0x30))(0x17,8);
  iVar8 = (**(code **)(*unaff_RSI + 0x90))();
  iVar9 = (**(code **)(*unaff_RSI + 0x38))();
  iVar10 = (**(code **)(*unaff_RSI + 0x30))(0x18,8);
  iVar11 = (**(code **)(*unaff_RSI + 0x90))();
  iVar12 = (**(code **)(*unaff_RSI + 0x38))();
  iVar13 = (**(code **)(*unaff_RSI + 0x30))(0x19,8);
  iVar14 = (**(code **)(*unaff_RSI + 0x90))();
  iVar15 = (**(code **)(*unaff_RSI + 0x38))();
  iVar16 = (**(code **)(*unaff_RSI + 0x30))(0x1a,8);
  iVar17 = (**(code **)(*unaff_RSI + 0x90))();
  iVar18 = (**(code **)(*unaff_RSI + 0x38))();
  iVar19 = (**(code **)(*unaff_RSI + 0x30))(0x1b,8);
  iVar20 = (**(code **)(*unaff_RSI + 0x90))();
  iVar21 = (**(code **)(*unaff_RSI + 0x38))();
  iVar22 = (**(code **)(*unaff_RSI + 0x30))(0x1e,2);
  iVar23 = (**(code **)(*unaff_RSI + 0x78))();
  iVar24 = (**(code **)(*unaff_RSI + 0x38))();
  iVar25 = (**(code **)(*unaff_RSI + 0x30))(0x1f,2);
  iVar26 = (**(code **)(*unaff_RSI + 0x78))();
  iVar27 = (**(code **)(*unaff_RSI + 0x38))();
  iVar28 = (**(code **)(*unaff_RSI + 0x30))(0x20,2);
  iVar29 = (**(code **)(*unaff_RSI + 0x78))();
  iVar30 = (**(code **)(*unaff_RSI + 0x38))();
  iVar31 = (**(code **)(*unaff_RSI + 0x30))(0x21,2);
  iVar32 = (**(code **)(*unaff_RSI + 0x78))();
  iVar33 = (**(code **)(*unaff_RSI + 0x38))();
  iVar34 = (**(code **)(*unaff_RSI + 0x30))(0x22,2);
  iVar35 = (**(code **)(*unaff_RSI + 0x78))();
  iVar36 = (**(code **)(*unaff_RSI + 0x38))();
  iVar37 = (**(code **)(*unaff_RSI + 0x40))();
  iVar38 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
         iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
         iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38;
}



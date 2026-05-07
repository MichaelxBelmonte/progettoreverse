// Function: FUN_008f31ea
// Address: 008f31ea
// Size: 1402 bytes
// Class: Unknown
// String references:
//   "serialNumber"
//   "publisherId"
//   "authId"
//   "instance"
//   "locationGroup"
//   "locationTypes"
//   "attributes"
//   "serialNumberGuid"
//   "AuthSearch"
//   "matchUndefinedPublisherIds"
//   "skuId_TBD"
//   "authTypes"
//   "subtypes"
//   "states"
//   "deviceTypes"
//   "includeChainsAuthorized"
//   "includeChainsNotAuthorized"


int FUN_008f31ea(void)

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
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
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
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(3,2);
  iVar9 = (**(code **)(*unaff_RSI + 0x78))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(4,8);
  iVar12 = (**(code **)(*unaff_RSI + 0x90))();
  iVar13 = (**(code **)(*unaff_RSI + 0x38))();
  iVar14 = (**(code **)(*unaff_RSI + 0x30))(5,8);
  iVar15 = (**(code **)(*unaff_RSI + 0x90))();
  iVar16 = (**(code **)(*unaff_RSI + 0x38))();
  iVar17 = (**(code **)(*unaff_RSI + 0x30))(10,10);
  iVar18 = (**(code **)(*unaff_RSI + 0x98))();
  iVar19 = (**(code **)(*unaff_RSI + 0x38))();
  iVar20 = (**(code **)(*unaff_RSI + 0x30))(0xb,10);
  iVar21 = (**(code **)(*unaff_RSI + 0x98))();
  iVar22 = (**(code **)(*unaff_RSI + 0x38))();
  iVar23 = (**(code **)(*unaff_RSI + 0x30))(0xc,10);
  iVar24 = (**(code **)(*unaff_RSI + 0x98))();
  iVar25 = (**(code **)(*unaff_RSI + 0x38))();
  iVar26 = (**(code **)(*unaff_RSI + 0x30))(0xd,10);
  iVar27 = (**(code **)(*unaff_RSI + 0x98))();
  iVar28 = (**(code **)(*unaff_RSI + 0x38))();
  iVar29 = (**(code **)(*unaff_RSI + 0x30))(0x14,10);
  iVar30 = (**(code **)(*unaff_RSI + 0x98))();
  iVar31 = (**(code **)(*unaff_RSI + 0x38))();
  iVar32 = (**(code **)(*unaff_RSI + 0x30))(0x15,8);
  iVar33 = (**(code **)(*unaff_RSI + 0x90))();
  iVar34 = (**(code **)(*unaff_RSI + 0x38))();
  iVar35 = (**(code **)(*unaff_RSI + 0x30))(0x16,10);
  iVar36 = (**(code **)(*unaff_RSI + 0x98))();
  iVar37 = (**(code **)(*unaff_RSI + 0x38))();
  iVar38 = (**(code **)(*unaff_RSI + 0x30))(0x17,0xb);
  iVar39 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar40 = (**(code **)(*unaff_RSI + 0x38))();
  iVar41 = (**(code **)(*unaff_RSI + 0x30))(0x1e,0xf);
  iVar42 = (**(code **)(*unaff_RSI + 0x58))();
  iVar42 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
           iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
           iVar42;
  for (lVar43 = *(longlong *)(unaff_RDI + 0x70); lVar43 != *(longlong *)(unaff_RDI + 0x78);
      lVar43 = lVar43 + 4) {
    iVar1 = (**(code **)(*unaff_RSI + 0x90))();
    iVar42 = iVar42 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar3 = (**(code **)(*unaff_RSI + 0x30))(0x28,2);
  iVar4 = (**(code **)(*unaff_RSI + 0x78))();
  iVar5 = (**(code **)(*unaff_RSI + 0x38))();
  iVar6 = (**(code **)(*unaff_RSI + 0x30))(0x29,2);
  iVar7 = (**(code **)(*unaff_RSI + 0x78))();
  iVar8 = (**(code **)(*unaff_RSI + 0x38))();
  iVar9 = (**(code **)(*unaff_RSI + 0x40))();
  iVar10 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar42 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
}



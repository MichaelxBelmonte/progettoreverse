// Function: FUN_008f5cb6
// Address: 008f5cb6
// Size: 2046 bytes
// Class: Unknown
// String references:
//   "publisherGuid"
//   "publisherId"
//   "authId"
//   "state"
//   "issuerId"
//   "description"
//   "instance"
//   "subtype"
//   "productName"
//   "attributes"
//   "timeLimit"
//   "productGuid"
//   "publisherName"
//   "internalReference"
//   "skuId_TBD"
//   "AuthData"
//   "authType"
//   "authRanking"
//   "hasTermsAtThisLevel"
//   "doExpirationWarningCheck"
//   ... +6 more

int FUN_008f5cb6(void)

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
  int64_t lVar28;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,8);
  iVar6 = (**(code **)(*arg1 + 0x90))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(4,8);
  iVar12 = (**(code **)(*arg1 + 0x90))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(5,0xf);
  iVar15 = (**(code **)(*arg1 + 0x58))();
  iVar15 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  for (lVar28 = *(int64_t *)(this_ptr + 0x18); lVar28 != *(int64_t *)(this_ptr + 0x20);
      lVar28 = lVar28 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar15 = iVar15 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(10,10);
  iVar4 = (**(code **)(*arg1 + 0x98))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar6 = (**(code **)(*arg1 + 0x30))(0xb,10);
  iVar7 = (**(code **)(*arg1 + 0x98))();
  iVar8 = (**(code **)(*arg1 + 0x38))();
  iVar9 = (**(code **)(*arg1 + 0x30))(0xc,10);
  iVar10 = (**(code **)(*arg1 + 0x98))();
  iVar11 = (**(code **)(*arg1 + 0x38))();
  iVar12 = (**(code **)(*arg1 + 0x30))(0xd,10);
  iVar13 = (**(code **)(*arg1 + 0x98))();
  iVar14 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x30))(0xe,8);
  iVar17 = (**(code **)(*arg1 + 0x90))();
  iVar18 = (**(code **)(*arg1 + 0x38))();
  iVar19 = (**(code **)(*arg1 + 0x30))(0xf,8);
  iVar20 = (**(code **)(*arg1 + 0x90))();
  iVar21 = (**(code **)(*arg1 + 0x38))();
  iVar22 = (**(code **)(*arg1 + 0x30))(0x14,2);
  iVar23 = (**(code **)(*arg1 + 0x78))();
  iVar24 = (**(code **)(*arg1 + 0x38))();
  iVar25 = (**(code **)(*arg1 + 0x30))(0x15,2);
  iVar26 = (**(code **)(*arg1 + 0x78))();
  iVar27 = (**(code **)(*arg1 + 0x38))();
  iVar27 = iVar1 + iVar15 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11 + iVar12 + iVar13 + iVar14 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27;
  if (*(char *)(this_ptr + 0x37d) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x16,0xc);
    iVar2 = FUN_008e8a1e();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar27 = iVar1 + iVar27 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x37e) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x17,0xc);
    iVar2 = FUN_008e9d1a();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar27 = iVar1 + iVar27 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x37f) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x18,0xc);
    iVar2 = FUN_008e8a1e();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar27 = iVar1 + iVar27 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x1e,0xb);
  iVar2 = (**(code **)(*arg1 + 0xa8))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(0x1f,0xb);
  iVar5 = (**(code **)(*arg1 + 0xa8))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0x20,0xb);
  iVar8 = (**(code **)(*arg1 + 0xa8))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0x21,0xb);
  iVar11 = (**(code **)(*arg1 + 0xa8))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0x22,0xb);
  iVar14 = (**(code **)(*arg1 + 0xa8))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x30))(0x23,0xb);
  iVar17 = (**(code **)(*arg1 + 0xa8))();
  iVar18 = (**(code **)(*arg1 + 0x38))();
  iVar19 = (**(code **)(*arg1 + 0x30))(0x24,0xb);
  iVar20 = (**(code **)(*arg1 + 0xa8))();
  iVar21 = (**(code **)(*arg1 + 0x38))();
  iVar21 = iVar1 + iVar27 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
           iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 +
           iVar21;
  if (*(char *)(this_ptr + 0x387) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x28,0xc);
    iVar2 = FUN_008f4812();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar21 = iVar1 + iVar21 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x29,0xb);
  iVar2 = (**(code **)(*arg1 + 0xa8))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x40))();
  iVar5 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar21 + iVar2 + iVar3 + iVar4 + iVar5;
}


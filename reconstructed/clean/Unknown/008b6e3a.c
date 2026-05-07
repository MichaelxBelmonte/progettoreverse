// Function: FUN_008b6e3a
// Address: 008b6e3a
// Size: 521 bytes
// Class: Unknown
// String references:
//   "releaseDate"
//   "challenge"
//   "authChain"
//   "ChallengeIlokCloudInput"
//   "storageId"
//   "preferredAlgorithmId"

int FUN_008b6e3a(void)

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
  int64_t lVar15;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_008f8624();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar15 = *(int64_t *)(this_ptr + 0x290); lVar15 != *(int64_t *)(this_ptr + 0x298);
      lVar15 = lVar15 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar4 = (**(code **)(*arg1 + 0x90))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(4,8);
  iVar8 = (**(code **)(*arg1 + 0x90))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(5,10);
  iVar11 = (**(code **)(*arg1 + 0x98))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x40))();
  iVar14 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14;
}


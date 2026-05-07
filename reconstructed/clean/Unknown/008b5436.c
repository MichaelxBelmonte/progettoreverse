// Function: FUN_008b5436
// Address: 008b5436
// Size: 646 bytes
// Class: Unknown
// String references:
//   "DatabaseCommitItem"
//   "itemType"
//   "uuid"
//   "rule"
//   "stringNewValue"
//   "boolNewValue"
//   "binaryDataNewValue"
//   "i32NewValue"

int FUN_008b5436(void)

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
  int64_t lVar19;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xb);
  iVar6 = (**(code **)(*arg1 + 0xa8))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(10,0xb);
  iVar12 = (**(code **)(*arg1 + 0xa8))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(0xb,2);
  iVar15 = (**(code **)(*arg1 + 0x78))();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar17 = (**(code **)(*arg1 + 0x30))(0xc,0xf);
  iVar18 = (**(code **)(*arg1 + 0x58))();
  iVar18 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18;
  for (lVar19 = *(int64_t *)(this_ptr + 0x50); lVar19 != *(int64_t *)(this_ptr + 0x58);
      lVar19 = lVar19 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar18 = iVar18 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0xd,8);
  iVar4 = (**(code **)(*arg1 + 0x90))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar6 = (**(code **)(*arg1 + 0x40))();
  iVar7 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar18 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
}


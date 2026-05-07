// Function: FUN_00905790
// Address: 00905790
// Size: 518 bytes
// Class: Unknown
// String references:
//   "wrapConfigGuid"
//   "name"
//   "ProtectionInfo"
//   "wrapperVersion"
//   "wrapperRevision"
//   "isFusionProtected"
//   "autoInstall"

int FUN_00905790(void)

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
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xb);
  iVar3 = (**(code **)(*arg1 + 0xa8))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xb);
  iVar6 = (**(code **)(*arg1 + 0xa8))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,0xb);
  iVar9 = (**(code **)(*arg1 + 0xa8))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(0xb,0xb);
  iVar12 = (**(code **)(*arg1 + 0xa8))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(0x15,2);
  iVar15 = (**(code **)(*arg1 + 0x78))();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar16 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16;
  if (*(char *)(this_ptr + 0x6f) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x16,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar16 = iVar1 + iVar16 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar16 + iVar2;
}


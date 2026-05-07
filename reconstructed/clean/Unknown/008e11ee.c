// Function: FUN_008e11ee
// Address: 008e11ee
// Size: 694 bytes
// Class: Unknown
// String references:
//   "version"
//   "platform"
//   "systemName"
//   "release"
//   "PlatformId"
//   "macId"
//   "winId"
//   "linuxId"
//   "appleIosId"

int FUN_008e11ee(void)

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
  iVar11 = (**(code **)(*arg1 + 0x30))(4,0xb);
  iVar12 = (**(code **)(*arg1 + 0xa8))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar13 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13;
  if (*(char *)(this_ptr + 0xcc) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x14,0xc);
    iVar2 = FUN_008e0622();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar13 = iVar1 + iVar13 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0xcd) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x15,0xc);
    iVar2 = FUN_008e08b0();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar13 = iVar1 + iVar13 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0xce) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x16,0xc);
    iVar2 = FUN_008e0a58();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar13 = iVar1 + iVar13 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0xcf) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x17,0xc);
    iVar2 = FUN_008e0c7e();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar13 = iVar1 + iVar13 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar13 + iVar2;
}


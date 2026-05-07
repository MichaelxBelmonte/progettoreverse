// Function: FUN_008dba22
// Address: 008dba22
// Size: 921 bytes
// Class: Unknown
// String references:
//   "version"
//   "minimumVersion"
//   "SignedDigest"
//   "minOsRelease"
//   "maxOsRelease"
//   "dataReference"
//   "osDataId"
//   "architecture"
//   "v2_platformSignatureInfo"
//   "digestInfo"
//   "digestData"

int FUN_008dba22(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
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
  iVar7 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
  if (*(char *)(this_ptr + 0x132) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xb,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar7 = iVar1 + iVar7 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x133) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar7 = iVar1 + iVar7 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x15,0xb);
  iVar2 = (**(code **)(*arg1 + 0xa8))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar3 = iVar1 + iVar7 + iVar2 + iVar3;
  if (*(char *)(this_ptr + 0x135) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x16,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar3 = iVar1 + iVar3 + iVar2 + iVar4;
  }
  if (*(char *)(this_ptr + 0x136) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x17,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar3 = iVar1 + iVar3 + iVar2 + iVar4;
  }
  if (*(char *)(this_ptr + 0x137) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x18,0xc);
    iVar2 = FUN_008daa0a();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar3 = iVar1 + iVar3 + iVar2 + iVar4;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x1f,0xc);
  iVar2 = FUN_008d98ba();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(0x20,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5 + iVar6;
  for (lVar8 = *(int64_t *)(this_ptr + 0x118); lVar8 != *(int64_t *)(this_ptr + 0x120);
      lVar8 = lVar8 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar4 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar6 + iVar2 + iVar3 + iVar4;
}


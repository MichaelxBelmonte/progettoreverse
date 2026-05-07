// Function: FUN_008bfd18
// Address: 008bfd18
// Size: 508 bytes
// Class: GNFilePath
// String references:
//   "authChain"
//   "clientPasswordDigest"
//   "callersPid"
//   "FindStorageRecordsInput"
//   "storageIds"

int FUN_008bfd18(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
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
  for (lVar7 = *(int64_t *)(this_ptr + 0x290); lVar7 != *(int64_t *)(this_ptr + 0x298);
      lVar7 = lVar7 + 4) {
    iVar1 = (**(code **)(*arg1 + 0x90))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(3,10);
  iVar4 = (**(code **)(*arg1 + 0x98))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar5 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5;
  if (*(char *)(this_ptr + 0x2cb) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc45,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar7 = *(int64_t *)(this_ptr + 0x2b0); lVar7 != *(int64_t *)(this_ptr + 0x2b8);
        lVar7 = lVar7 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar5 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2;
}


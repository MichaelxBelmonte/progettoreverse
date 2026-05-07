// Function: FUN_008c566e
// Address: 008c566e
// Size: 609 bytes
// Class: Unknown
// String references:
//   "location"
//   "authChain"
//   "clientPasswordDigest"
//   "callersPid"
//   "OpenDirectLocationConnectionInput"
//   "ilokCommandPacket"
//   "currentTime"

int FUN_008c566e(void)

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
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_00891efa();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,10);
  iVar6 = (**(code **)(*arg1 + 0x98))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar7 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
  if (*(char *)(this_ptr + 0x3d2) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(3,0xc);
    iVar2 = FUN_0088a55a();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar7 = iVar1 + iVar7 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(7,0xb);
  iVar2 = (**(code **)(*arg1 + 0xa8))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar3 = iVar1 + iVar7 + iVar2 + iVar3;
  if (*(char *)(this_ptr + 0x3d4) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc44,0xc);
    iVar2 = FUN_008f8624();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar3 = iVar1 + iVar3 + iVar2 + iVar4;
  }
  if (*(char *)(this_ptr + 0x3d5) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc45,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar3 + iVar2;
    for (lVar8 = *(int64_t *)(this_ptr + 0x3b8); lVar8 != *(int64_t *)(this_ptr + 0x3c0);
        lVar8 = lVar8 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar3 = iVar1 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar3 + iVar2;
}

